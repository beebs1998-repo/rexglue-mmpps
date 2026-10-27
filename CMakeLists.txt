# mmpps - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(mmpps LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use the bundled ReXGlue SDK (git submodule at thirdparty/rexglue-sdk).
# Override with -DREXSDK_DIR=<path> to build against another SDK tree.
set(REXSDK_DIR "${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/rexglue-sdk"
    CACHE PATH "Path to the bundled ReXGlue SDK")

include(generated/rexglue.cmake)

# Sources
set(MMPPS_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(mmpps WIN32 ${MMPPS_SOURCES})
else()
    add_executable(mmpps ${MMPPS_SOURCES})
endif()

# Recompiled entrypoint is built as an OBJECT library and linked into the host.
# Auto-codegen is intentionally disabled (see generated/rexglue.cmake). Unlike
# the sibling ports, the five game modules here pin their own non-overlapping
# guest bases in their XEX headers, so the overlap check would not reject a
# combined run - codegen still runs one target per invocation (futari
# Iteration 20: rexglue codegen crashed analyzing multiple module targets in
# one process), and the two glue files are hand-merged below.
if(REXGLUE_ENTRYPOINT_GENERATED_SOURCES)
    add_library(mmpps_recomp OBJECT
        ${REXGLUE_ENTRYPOINT_GENERATED_SOURCES})
    target_include_directories(mmpps_recomp PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${REXGLUE_ENTRYPOINT_INCLUDE_DIR}
    )
    target_link_libraries(mmpps_recomp PRIVATE rex::runtime)
    rexglue_apply_target_settings(mmpps_recomp)
    rexglue_apply_recomp_settings(mmpps_recomp
        "${REXGLUE_ENTRYPOINT_INCLUDE_DIR}/mmpps_pch.h")
    target_link_libraries(mmpps PRIVATE
        mmpps_recomp)
endif()

target_include_directories(mmpps PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${REXGLUE_ENTRYPOINT_INCLUDE_DIR}
)
target_link_libraries(mmpps PRIVATE rex::runtime imgui::imgui)
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/metadata/icons")
    rexglue_embed_metadata(mmpps
        DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/metadata/icons"
        PREFIX "icons")
endif()
rexglue_configure_target(mmpps GPU_PLUGINS xenos)

# Stage the settings template next to the executable: exe_dir/mmpps.toml is the
# live config the game reads/writes, and a missing file means the game runs on
# compiled-in defaults (no keybinds/mnk, no log rotation, no pinned cvars).
# Copy-if-missing only - the live file is never overwritten (F4 saves and local
# edits survive every build). launch.bat applies the same rule.
add_custom_command(TARGET mmpps POST_BUILD
    COMMAND ${CMAKE_COMMAND}
        -DTEMPLATE=${CMAKE_CURRENT_SOURCE_DIR}/mmpps.toml
        -DDIR=$<TARGET_FILE_DIR:mmpps>
        -P ${CMAKE_CURRENT_SOURCE_DIR}/scripts/stage_config.cmake
    COMMENT "Staging mmpps.toml (if missing)"
    VERBATIM)
