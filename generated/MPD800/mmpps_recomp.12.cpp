#include "mmpps_funcs.12.h"

DEFINE_REX_FUNC(sub_899164A8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,4939(r10)
	REX_STORE_U8(ctx.r10.u32 + 4939, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89916538) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lhz r10,-31952(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -31952);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// beq cr6,0x89916560
	if (ctx.cr6.eq) goto loc_89916560;
loc_89916550:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_89916560:
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lbz r5,32546(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 32546);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r3,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// clrlwi r11,r3,17
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFF;
	// srawi r8,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 16;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,18,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFF;
	// rlwinm r10,r6,18,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0xFF;
	// beq cr6,0x89916550
	if (ctx.cr6.eq) goto loc_89916550;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,14476
	ctx.r9.s64 = ctx.r9.s64 + 14476;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,14496
	ctx.r8.s64 = ctx.r8.s64 + 14496;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// addi r31,r8,2
	ctx.r31.s64 = ctx.r8.s64 + 2;
	// lbzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lis r30,-30242
	ctx.r30.s64 = -1981939712;
	// lbzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// addi r5,r30,-21380
	ctx.r5.s64 = ctx.r30.s64 + -21380;
	// lbzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// stb r9,-21380(r30)
	REX_STORE_U8(ctx.r30.u32 + -21380, ctx.r9.u8);
	// stb r8,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r8.u8);
	// stb r11,2(r5)
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r11.u8);
	// stb r7,3(r5)
	REX_STORE_U8(ctx.r5.u32 + 3, ctx.r7.u8);
	// stb r6,4(r5)
	REX_STORE_U8(ctx.r5.u32 + 4, ctx.r6.u8);
	// stb r10,5(r5)
	REX_STORE_U8(ctx.r5.u32 + 5, ctx.r10.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899172A8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,7924(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7924);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r11,7924(r10)
	REX_STORE_U32(ctx.r10.u32 + 7924, ctx.r11.u32);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,7104(r9)
	REX_STORE_U32(ctx.r9.u32 + 7104, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89917338) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lbz r10,32555(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32555);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89917350
	if (!ctx.cr6.eq) goto loc_89917350;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_89917350:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,32555(r11)
	REX_STORE_U8(ctx.r11.u32 + 32555, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89917430) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,9647(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 9647);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899175F8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lhz r10,32032(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 32032);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bne cr6,0x8991762c
	if (!ctx.cr6.eq) goto loc_8991762C;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lhz r10,-31952(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -31952);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bne cr6,0x8991762c
	if (!ctx.cr6.eq) goto loc_8991762C;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r10,12264(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12264);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8991762C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899176A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lwz r11,7924(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7924);
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r10)
	REX_STORE_U32(ctx.r10.u32 + 7924, ctx.r11.u32);
	// bl 0x899343e8
	ctx.lr = 0x899176CC;
	sub_899343E8(ctx, base);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89917F28) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x89917F30;
	__savegprlr_21(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r31,r3
	ctx.r31.s64 = ctx.r3.s16;
	// addi r11,r11,9656
	ctx.r11.s64 = ctx.r11.s64 + 9656;
	// mulli r10,r31,92
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(92));
	// lwzx r29,r10,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lis r5,-30242
	ctx.r5.s64 = -1981939712;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// lis r27,-30275
	ctx.r27.s64 = -1984102400;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// lwz r9,-21584(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + -21584);
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// rotlwi r5,r8,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lhzx r28,r10,r7
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// addi r30,r11,70
	ctx.r30.s64 = ctx.r11.s64 + 70;
	// oris r25,r5,16
	ctx.r25.u64 = ctx.r5.u64 | 1048576;
	// lbz r5,12266(r27)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r27.u32 + 12266);
	// lwzx r26,r10,r6
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lbz r7,9535(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 9535);
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// lbz r6,6035(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 6035);
	// lis r24,-30270
	ctx.r24.s64 = -1983774720;
	// subf r3,r26,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r26.u64;
	// lbzx r26,r10,r30
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// srawi r30,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r4.s32 >> 5;
	// lwz r4,7120(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 7120);
	// srawi r23,r3,21
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FFFFF) != 0);
	ctx.r23.s64 = ctx.r3.s32 >> 21;
	// srawi r27,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r27.s64 = ctx.r3.s32 >> 16;
	// lwz r3,8152(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 8152);
	// or r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 | ctx.r25.u64;
	// addi r25,r11,71
	ctx.r25.s64 = ctx.r11.s64 + 71;
	// or r24,r6,r7
	ctx.r24.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r28,r28,27
	ctx.r28.u64 = ctx.r28.u32 & 0x1F;
	// clrlwi r27,r27,27
	ctx.r27.u64 = ctx.r27.u32 & 0x1F;
	// rlwinm r29,r29,0,6,6
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000000;
	// lis r21,-30275
	ctx.r21.s64 = -1984102400;
	// lbzx r25,r10,r25
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r26,r26,8,0,23
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00;
	// or r24,r24,r5
	ctx.r24.u64 = ctx.r24.u64 | ctx.r5.u64;
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r28.u64;
	// subf r3,r27,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r27.u64;
	// or r28,r26,r29
	ctx.r28.u64 = ctx.r26.u64 | ctx.r29.u64;
	// lwz r9,9520(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 9520);
	// clrlwi r27,r24,24
	ctx.r27.u64 = ctx.r24.u32 & 0xFF;
	// extsh r29,r23
	ctx.r29.s64 = ctx.r23.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// or r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 | ctx.r25.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x89918008
	if (ctx.cr6.eq) goto loc_89918008;
	// oris r28,r28,256
	ctx.r28.u64 = ctx.r28.u64 | 16777216;
loc_89918008:
	// rlwinm r4,r4,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// or r22,r4,r3
	ctx.r22.u64 = ctx.r4.u64 | ctx.r3.u64;
	// beq cr6,0x89918060
	if (ctx.cr6.eq) goto loc_89918060;
	// addi r8,r11,73
	ctx.r8.s64 = ctx.r11.s64 + 73;
	// addi r4,r11,74
	ctx.r4.s64 = ctx.r11.s64 + 74;
	// addi r3,r11,75
	ctx.r3.s64 = ctx.r11.s64 + 75;
	// lbzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lbzx r8,r10,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r4,r10,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// mullw r3,r11,r6
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r10,r4,r5
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// srawi r8,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 7;
	// srawi r7,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 7;
	// srawi r6,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 7;
	// stb r8,-111(r1)
	REX_STORE_U8(ctx.r1.u32 + -111, ctx.r8.u8);
	// stb r7,-110(r1)
	REX_STORE_U8(ctx.r1.u32 + -110, ctx.r7.u8);
	// stb r6,-109(r1)
	REX_STORE_U8(ctx.r1.u32 + -109, ctx.r6.u8);
	// lwz r26,-112(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// b 0x89918068
	goto loc_89918068;
loc_89918060:
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwzx r26,r10,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_89918068:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// extsh r24,r30
	ctx.r24.s64 = ctx.r30.s16;
	// extsh r25,r29
	ctx.r25.s64 = ctx.r29.s16;
	// rlwinm r23,r31,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r11,-2528
	ctx.r30.s64 = ctx.r11.s64 + -2528;
loc_89918080:
	// add r10,r24,r27
	ctx.r10.u64 = ctx.r24.u64 + ctx.r27.u64;
	// rlwinm r11,r27,21,0,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 21) & 0xFFE00000;
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// add r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r6,r8,r23
	ctx.r6.u64 = ctx.r8.u64 + ctx.r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r3,r6,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
loc_8991809C:
	// add r11,r25,r7
	ctx.r11.u64 = ctx.r25.u64 + ctx.r7.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// add r8,r5,r3
	ctx.r8.u64 = ctx.r5.u64 + ctx.r3.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x89918160
	if (ctx.cr6.eq) goto loc_89918160;
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// rlwinm r31,r11,0,4,5
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000000;
	// rlwinm r10,r31,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89918124
	if (!ctx.cr6.eq) goto loc_89918124;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bge cr6,0x89918124
	if (!ctx.cr6.lt) goto loc_89918124;
	// li r11,1
	ctx.r11.s64 = 1;
loc_899180E0:
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// rlwinm r8,r10,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89918124
	if (!ctx.cr6.eq) goto loc_89918124;
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x89918124
	if (!ctx.cr6.eq) goto loc_89918124;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// add r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 + ctx.r7.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x899180e0
	if (ctx.cr6.lt) goto loc_899180E0;
loc_89918124:
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// stw r26,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r26.u32);
	// or r8,r31,r28
	ctx.r8.u64 = ctx.r31.u64 | ctx.r28.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r6,0,3,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1FFFFFE0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r11,r11,0,20,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFE00FFF;
	// oris r8,r5,31
	ctx.r8.u64 = ctx.r5.u64 | 2031616;
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
loc_89918160:
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x8991809c
	if (ctx.cr6.lt) goto loc_8991809C;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// blt cr6,0x89918080
	if (ctx.cr6.lt) goto loc_89918080;
	// stw r9,9520(r21)
	REX_STORE_U32(ctx.r21.u32 + 9520, ctx.r9.u32);
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89919BA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89919BB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r10,12632(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89919c60
	if (ctx.cr6.eq) goto loc_89919C60;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// addi r10,r10,26544
	ctx.r10.s64 = ctx.r10.s64 + 26544;
	// addi r27,r11,12032
	ctx.r27.s64 = ctx.r11.s64 + 12032;
	// addi r30,r10,16
	ctx.r30.s64 = ctx.r10.s64 + 16;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_89919BDC:
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89919c4c
	if (ctx.cr6.eq) goto loc_89919C4C;
	// lwz r31,-4(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r29,0(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
loc_89919BF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89919c40
	if (ctx.cr6.eq) goto loc_89919C40;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r3,r9,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwzx r11,r3,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x89939350
	ctx.lr = 0x89919C40;
	sub_89939350(ctx, base);
loc_89919C40:
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x89919bf0
	if (!ctx.cr6.eq) goto loc_89919BF0;
loc_89919C4C:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r11,r27,32
	ctx.r11.s64 = ctx.r27.s64 + 32;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89919bdc
	if (ctx.cr6.lt) goto loc_89919BDC;
loc_89919C60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991A4A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r9,-30247
	ctx.r9.s64 = -1982267392;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mulli r10,r4,140
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(140));
	// addi r6,r9,19368
	ctx.r6.s64 = ctx.r9.s64 + 19368;
loc_8991A4D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r4,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// mulli r10,r11,140
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(140));
	// blt cr6,0x8991a4d0
	if (ctx.cr6.lt) goto loc_8991A4D0;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r7,8416(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 8416);
	// addi r10,r10,5760
	ctx.r10.s64 = ctx.r10.s64 + 5760;
	// sth r4,3624(r8)
	REX_STORE_U16(ctx.r8.u32 + 3624, ctx.r4.u16);
loc_8991A508:
	// mullw r8,r7,r11
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi r3,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 5;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mullw r5,r9,r7
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 5;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r5,r8,140
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(140));
	// stwx r4,r3,r10
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r11,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r11.u32);
	// stwx r8,r3,r30
	REX_STORE_U32(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u32);
	// mulli r11,r11,140
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(140));
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r31,r10,16
	ctx.r31.s64 = ctx.r10.s64 + 16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r30,r11,r6
	ctx.r30.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stwx r5,r3,r8
	REX_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r5.u32);
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// stwx r30,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r30.u32);
	// blt cr6,0x8991a508
	if (ctx.cr6.lt) goto loc_8991A508;
	// bl 0x899cbec8
	ctx.lr = 0x8991A578;
	sub_899CBEC8(ctx, base);
	// bl 0x899cc5b8
	ctx.lr = 0x8991A57C;
	sub_899CC5B8(ctx, base);
	// bl 0x899cd018
	ctx.lr = 0x8991A580;
	sub_899CD018(ctx, base);
	// bl 0x899cb2c8
	ctx.lr = 0x8991A584;
	sub_899CB2C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991AE78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x8991AE80;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r26,-30251
	ctx.r26.s64 = -1982529536;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r20,r11,-21568
	ctx.r20.s64 = ctx.r11.s64 + -21568;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r10,r10,4920
	ctx.r10.s64 = ctx.r10.s64 + 4920;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// sth r24,12144(r26)
	REX_STORE_U16(ctx.r26.u32 + 12144, ctx.r24.u16);
	// addi r25,r10,-2
	ctx.r25.s64 = ctx.r10.s64 + -2;
	// addi r30,r20,12
	ctx.r30.s64 = ctx.r20.s64 + 12;
	// li r21,95
	ctx.r21.s64 = 95;
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// li r22,-1
	ctx.r22.s64 = -1;
	// addi r19,r11,8200
	ctx.r19.s64 = ctx.r11.s64 + 8200;
loc_8991AEC0:
	// lwz r28,-12(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r27,4(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_8991AED0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991af58
	if (ctx.cr6.eq) goto loc_8991AF58;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subfc r10,r21,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r21.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r21.u64;
	// subfze r10,r22
	temp.u8 = ~ctx.r22.u32 + ctx.xer.ca < ~ctx.r22.u32;
	ctx.r10.u64 = ~ctx.r22.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8991af08
	if (ctx.cr6.lt) goto loc_8991AF08;
	// bne cr6,0x8991af58
	if (!ctx.cr6.eq) goto loc_8991AF58;
	// lwz r11,6048(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 6048);
	// stw r24,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6048(r23)
	REX_STORE_U32(ctx.r23.u32 + 6048, ctx.r11.u32);
	// b 0x8991af58
	goto loc_8991AF58;
loc_8991AF08:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r19,12
	ctx.r10.s64 = ctx.r19.s64 + 12;
	// extsh r3,r28
	ctx.r3.s64 = ctx.r28.s16;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8991AF24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r8,0,17,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8991af58
	if (!ctx.cr6.eq) goto loc_8991AF58;
	// lbz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991af58
	if (ctx.cr6.eq) goto loc_8991AF58;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,156(r31)
	REX_STORE_U8(ctx.r31.u32 + 156, ctx.r10.u8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8991af58
	if (!ctx.cr6.eq) goto loc_8991AF58;
	// stw r24,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
loc_8991AF58:
	// addi r31,r31,208
	ctx.r31.s64 = ctx.r31.s64 + 208;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8991aed0
	if (!ctx.cr6.eq) goto loc_8991AED0;
	// lhz r10,12144(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 12144);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r11,2(r25)
	ea = 2 + ctx.r25.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r25.u32 = ea;
	// addi r9,r20,172
	ctx.r9.s64 = ctx.r20.s64 + 172;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// sth r11,12144(r26)
	REX_STORE_U16(ctx.r26.u32 + 12144, ctx.r11.u16);
	// blt cr6,0x8991aec0
	if (ctx.cr6.lt) goto loc_8991AEC0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991BAF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8991BB0C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8991bb8c
	if (ctx.cr6.lt) goto loc_8991BB8C;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r9,r10,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r11,150
	ctx.r8.s64 = ctx.r11.s64 + 150;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// mulli r9,r7,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8991bb8c
	if (ctx.cr6.eq) goto loc_8991BB8C;
	// lhz r9,154(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 154);
	// lhz r8,154(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 154);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8991bb8c
	if (!ctx.cr6.eq) goto loc_8991BB8C;
	// lbz r9,156(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 156);
	// lbz r8,156(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 156);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8991bb78
	if (!ctx.cr6.lt) goto loc_8991BB78;
	// stb r9,156(r10)
	REX_STORE_U8(ctx.r10.u32 + 156, ctx.r9.u8);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// stw r11,84(r10)
	REX_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
loc_8991BB78:
	// lhz r3,148(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 148);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8991BB8C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991C578) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// lis r5,-30214
	ctx.r5.s64 = -1980104704;
	// addi r6,r11,76
	ctx.r6.s64 = ctx.r11.s64 + 76;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// lwzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r7,r3,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,3504(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 3504);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r8,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r8.u32);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r7,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r7.u32);
	// addi r7,r11,72
	ctx.r7.s64 = ctx.r11.s64 + 72;
	// lwz r6,12(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// beq cr6,0x8991c5f8
	if (ctx.cr6.eq) goto loc_8991C5F8;
	// lwz r11,-9516(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9516);
	// rlwinm r5,r11,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// subfic r4,r5,322
	ctx.xer.ca = ctx.r5.u32 <= 322;
	ctx.r4.u64 = static_cast<uint64_t>(322) - ctx.r5.u64;
	// mullw r3,r4,r6
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// rlwinm r11,r3,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFF;
	// sthx r11,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u16);
	// blr 
	return;
loc_8991C5F8:
	// lhz r5,-9516(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + -9516);
	// subfic r4,r5,512
	ctx.xer.ca = ctx.r5.u32 <= 512;
	ctx.r4.u64 = static_cast<uint64_t>(512) - ctx.r5.u64;
	// mullw r3,r4,r6
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// rlwinm r11,r3,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFF;
	// sthx r11,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991CBD0) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// addi r10,r8,12800
	ctx.r10.s64 = ctx.r8.s64 + 12800;
	// mulli r6,r7,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lwz r11,-10744(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -10744);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r4,r10,201
	ctx.r4.s64 = ctx.r10.s64 + 201;
	// addi r10,r10,200
	ctx.r10.s64 = ctx.r10.s64 + 200;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-10744(r9)
	REX_STORE_U32(ctx.r9.u32 + -10744, ctx.r11.u32);
	// stbx r8,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r8.u8);
	// stbx r8,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991CD58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-30269
	ctx.r8.s64 = -1983709184;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r7,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lwz r9,-10744(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -10744);
	// lhz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// addi r5,r11,207
	ctx.r5.s64 = ctx.r11.s64 + 207;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// stw r9,-10744(r8)
	REX_STORE_U32(ctx.r8.u32 + -10744, ctx.r9.u32);
	// rotlwi r8,r6,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// lbzx r9,r10,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lwzx r7,r10,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x8991cdac
	if (ctx.cr6.lt) goto loc_8991CDAC;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,12000(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12000);
	// b 0x8991cdc8
	goto loc_8991CDC8;
loc_8991CDAC:
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// mulli r5,r9,92
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(92));
	// addi r9,r6,9656
	ctx.r9.s64 = ctx.r6.s64 + 9656;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r9,28
	ctx.r3.s64 = ctx.r9.s64 + 28;
	// lwzx r11,r10,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwzx r10,r5,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
loc_8991CDC8:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf. r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8991cdd8
	if (!ctx.cr0.lt) goto loc_8991CDD8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8991CDD8:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// bge cr6,0x8991cde8
	if (!ctx.cr6.lt) goto loc_8991CDE8;
	// neg r10,r7
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_8991CDE8:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// adde r3,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991D830) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8991D838;
	__savegprlr_29(ctx, base);
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r10,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 16;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// clrlwi r8,r10,17
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFF;
	// srawi r11,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 16;
	// mullw r10,r8,r29
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// clrlwi r8,r11,17
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFF;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r10,17,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFF;
	// rlwinm r9,r9,17,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFF;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// subf r10,r6,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r6.u64;
	// mulli r8,r3,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(208));
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r7,r11,100
	ctx.r7.s64 = ctx.r11.s64 + 100;
	// addi r6,r11,104
	ctx.r6.s64 = ctx.r11.s64 + 104;
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r4,r10,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// stwx r9,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r5,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
	// stwx r4,r8,r6
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r4.u32);
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991DF28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8991DF30;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lwz r10,3508(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 3508);
	// stb r19,32546(r9)
	REX_STORE_U8(ctx.r9.u32 + 32546, ctx.r19.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8991df5c
	if (ctx.cr6.eq) goto loc_8991DF5C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32546(r9)
	REX_STORE_U8(ctx.r9.u32 + 32546, ctx.r11.u8);
loc_8991DF5C:
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,15929
	ctx.r8.s64 = 1043922944;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// ori r7,r8,45459
	ctx.r7.u64 = ctx.r8.u64 | 45459;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mullw r6,r11,r7
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lbz r4,586(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 586);
	// subfic r5,r6,12346
	ctx.xer.ca = ctx.r6.u32 <= 12346;
	ctx.r5.u64 = static_cast<uint64_t>(12346) - ctx.r6.u64;
	// srawi r3,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// addic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrlwi r10,r3,17
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFF;
	// subfe r8,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r11.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// bl 0x899306a8
	ctx.lr = 0x8991DF98;
	sub_899306A8(ctx, base);
	// bl 0x8991f6b0
	ctx.lr = 0x8991DF9C;
	sub_8991F6B0(ctx, base);
	// bl 0x8991fab8
	ctx.lr = 0x8991DFA0;
	sub_8991FAB8(ctx, base);
	// bl 0x89915ec0
	ctx.lr = 0x8991DFA4;
	sub_89915EC0(ctx, base);
	// bl 0x89917740
	ctx.lr = 0x8991DFA8;
	sub_89917740(ctx, base);
	// bl 0x8991f510
	ctx.lr = 0x8991DFAC;
	sub_8991F510(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r31,r11,9056
	ctx.r31.s64 = ctx.r11.s64 + 9056;
	// addi r11,r31,-60
	ctx.r11.s64 = ctx.r31.s64 + -60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991DFC0:
	// sth r19,112(r11)
	REX_STORE_U16(ctx.r11.u32 + 112, ctx.r19.u16);
	// stw r19,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r19.u32);
	// sth r19,172(r11)
	REX_STORE_U16(ctx.r11.u32 + 172, ctx.r19.u16);
	// stw r19,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r19.u32);
	// sth r19,232(r11)
	REX_STORE_U16(ctx.r11.u32 + 232, ctx.r19.u16);
	// stwu r19,180(r11)
	ea = 180 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r19.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8991dfc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991DFC0;
	// bl 0x89918e78
	ctx.lr = 0x8991DFE0;
	sub_89918E78(ctx, base);
	// bl 0x8992bf38
	ctx.lr = 0x8991DFE4;
	sub_8992BF38(ctx, base);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r18,r10,25128
	ctx.r18.s64 = ctx.r10.s64 + 25128;
	// lwz r20,3508(r9)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r9.u32 + 3508);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lbz r21,586(r11)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r11,-30234
	ctx.r11.s64 = -1981415424;
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// addi r10,r9,8420
	ctx.r10.s64 = ctx.r9.s64 + 8420;
	// addi r9,r8,20952
	ctx.r9.s64 = ctx.r8.s64 + 20952;
	// addi r17,r11,-14840
	ctx.r17.s64 = ctx.r11.s64 + -14840;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r8,r7,-9516
	ctx.r8.s64 = ctx.r7.s64 + -9516;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r17,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bne cr6,0x8991e61c
	if (!ctx.cr6.eq) goto loc_8991E61C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8991e61c
	if (ctx.cr6.eq) goto loc_8991E61C;
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r10,76(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 76);
	// lis r8,-15360
	ctx.r8.s64 = -1006632960;
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// ori r24,r8,4
	ctx.r24.u64 = ctx.r8.u64 | 4;
	// ori r25,r7,32896
	ctx.r25.u64 = ctx.r7.u64 | 32896;
	// lhz r26,19184(r9)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r9.u32 + 19184);
	// li r23,60
	ctx.r23.s64 = 60;
	// clrlwi r22,r11,31
	ctx.r22.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8991e224
	if (ctx.cr6.eq) goto loc_8991E224;
	// clrlwi r3,r22,16
	ctx.r3.u64 = ctx.r22.u32 & 0xFFFF;
	// addi r27,r18,4
	ctx.r27.s64 = ctx.r18.s64 + 4;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mulli r30,r28,696
	ctx.r30.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(696));
	// lwzx r29,r30,r27
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8991e0b4
	if (!ctx.cr6.eq) goto loc_8991E0B4;
	// addi r11,r18,8
	ctx.r11.s64 = ctx.r18.s64 + 8;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r4,r10,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x899338a8
	ctx.lr = 0x8991E0A0;
	sub_899338A8(ctx, base);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8991e224
	if (ctx.cr6.eq) goto loc_8991E224;
	// ori r11,r29,1
	ctx.r11.u64 = ctx.r29.u64 | 1;
	// stwx r11,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u32);
loc_8991E0B4:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// clrlwi r7,r26,16
	ctx.r7.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r4,r11,18740
	ctx.r4.s64 = ctx.r11.s64 + 18740;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8991e124
	if (ctx.cr6.eq) goto loc_8991E124;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// add r6,r28,r10
	ctx.r6.u64 = ctx.r28.u64 + ctx.r10.u64;
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
loc_8991E0DC:
	// lhzu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// subf r3,r11,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mulli r8,r8,60
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(60));
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8991e128
	if (!ctx.cr6.eq) goto loc_8991E128;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8991e0dc
	if (ctx.cr6.lt) goto loc_8991E0DC;
	// b 0x8991e128
	goto loc_8991E128;
loc_8991E124:
	// lhz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
loc_8991E128:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8991e138
	if (!ctx.cr6.eq) goto loc_8991E138;
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
loc_8991E138:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8991e224
	if (!ctx.cr6.eq) goto loc_8991E224;
	// addi r7,r18,24
	ctx.r7.s64 = ctx.r18.s64 + 24;
	// stwx r24,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r24.u32);
	// addi r6,r18,28
	ctx.r6.s64 = ctx.r18.s64 + 28;
	// addi r10,r18,656
	ctx.r10.s64 = ctx.r18.s64 + 656;
	// addi r8,r18,8
	ctx.r8.s64 = ctx.r18.s64 + 8;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// lwzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// lwzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r18,r31,32
	ctx.r18.s64 = ctx.r31.s64 + 32;
	// lbzx r9,r30,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r17,r31,28
	ctx.r17.s64 = ctx.r31.s64 + 28;
	// lwzx r3,r30,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// stwx r7,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// stwx r6,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r6.u32);
	// addi r16,r31,42
	ctx.r16.s64 = ctx.r31.s64 + 42;
	// addi r15,r31,40
	ctx.r15.s64 = ctx.r31.s64 + 40;
	// addi r7,r31,54
	ctx.r7.s64 = ctx.r31.s64 + 54;
	// addi r6,r31,44
	ctx.r6.s64 = ctx.r31.s64 + 44;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// addi r28,r31,57
	ctx.r28.s64 = ctx.r31.s64 + 57;
	// addi r14,r31,56
	ctx.r14.s64 = ctx.r31.s64 + 56;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r19,0
	ctx.r19.s64 = 0;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stwx r25,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r25.u32);
	// rlwinm r3,r3,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// stwx r19,r11,r18
	REX_STORE_U32(ctx.r11.u32 + ctx.r18.u32, ctx.r19.u32);
	// stwx r19,r11,r17
	REX_STORE_U32(ctx.r11.u32 + ctx.r17.u32, ctx.r19.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lwz r18,96(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r17,100(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stwx r19,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r19.u32);
	// stbx r9,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u8);
	// stwx r3,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// stwx r19,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r19.u32);
	// sthx r19,r11,r16
	REX_STORE_U16(ctx.r11.u32 + ctx.r16.u32, ctx.r19.u16);
	// sthx r19,r11,r15
	REX_STORE_U16(ctx.r11.u32 + ctx.r15.u32, ctx.r19.u16);
	// stbx r19,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r19.u8);
	// stwx r19,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r19.u32);
	// stbx r23,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r23.u8);
	// stbx r19,r11,r14
	REX_STORE_U8(ctx.r11.u32 + ctx.r14.u32, ctx.r19.u8);
	// bne cr6,0x8991e224
	if (!ctx.cr6.eq) goto loc_8991E224;
	// lwzx r11,r30,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// addi r10,r18,651
	ctx.r10.s64 = ctx.r18.s64 + 651;
	// oris r9,r11,2048
	ctx.r9.u64 = ctx.r11.u64 | 134217728;
	// stwx r9,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r9.u32);
	// stbx r19,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r19.u8);
loc_8991E224:
	// lwz r11,72(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8991e3e4
	if (ctx.cr6.eq) goto loc_8991E3E4;
	// clrlwi r3,r22,16
	ctx.r3.u64 = ctx.r22.u32 & 0xFFFF;
	// addi r27,r18,4
	ctx.r27.s64 = ctx.r18.s64 + 4;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mulli r30,r28,696
	ctx.r30.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(696));
	// lwzx r29,r30,r27
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8991e274
	if (!ctx.cr6.eq) goto loc_8991E274;
	// addi r11,r18,8
	ctx.r11.s64 = ctx.r18.s64 + 8;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r4,r10,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x899338a8
	ctx.lr = 0x8991E260;
	sub_899338A8(ctx, base);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8991e3e4
	if (ctx.cr6.eq) goto loc_8991E3E4;
	// ori r11,r29,1
	ctx.r11.u64 = ctx.r29.u64 | 1;
	// stwx r11,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u32);
loc_8991E274:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// clrlwi r7,r26,16
	ctx.r7.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r4,r11,18732
	ctx.r4.s64 = ctx.r11.s64 + 18732;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8991e2e4
	if (ctx.cr6.eq) goto loc_8991E2E4;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// add r6,r28,r10
	ctx.r6.u64 = ctx.r28.u64 + ctx.r10.u64;
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
loc_8991E29C:
	// lhzu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// subf r3,r11,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mulli r8,r8,60
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(60));
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8991e2e8
	if (!ctx.cr6.eq) goto loc_8991E2E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8991e29c
	if (ctx.cr6.lt) goto loc_8991E29C;
	// b 0x8991e2e8
	goto loc_8991E2E8;
loc_8991E2E4:
	// lhz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
loc_8991E2E8:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8991e2f8
	if (!ctx.cr6.eq) goto loc_8991E2F8;
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
loc_8991E2F8:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8991e3e4
	if (!ctx.cr6.eq) goto loc_8991E3E4;
	// addi r7,r18,24
	ctx.r7.s64 = ctx.r18.s64 + 24;
	// stwx r24,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r24.u32);
	// addi r6,r18,28
	ctx.r6.s64 = ctx.r18.s64 + 28;
	// addi r10,r18,656
	ctx.r10.s64 = ctx.r18.s64 + 656;
	// addi r8,r18,8
	ctx.r8.s64 = ctx.r18.s64 + 8;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// lwzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// lwzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r18,r31,32
	ctx.r18.s64 = ctx.r31.s64 + 32;
	// lbzx r9,r30,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r17,r31,28
	ctx.r17.s64 = ctx.r31.s64 + 28;
	// lwzx r3,r30,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// stwx r7,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// stwx r6,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r6.u32);
	// addi r16,r31,42
	ctx.r16.s64 = ctx.r31.s64 + 42;
	// addi r15,r31,40
	ctx.r15.s64 = ctx.r31.s64 + 40;
	// addi r7,r31,54
	ctx.r7.s64 = ctx.r31.s64 + 54;
	// addi r6,r31,44
	ctx.r6.s64 = ctx.r31.s64 + 44;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// addi r28,r31,57
	ctx.r28.s64 = ctx.r31.s64 + 57;
	// addi r14,r31,56
	ctx.r14.s64 = ctx.r31.s64 + 56;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r19,0
	ctx.r19.s64 = 0;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stwx r25,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r25.u32);
	// rlwinm r3,r3,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// stwx r19,r11,r18
	REX_STORE_U32(ctx.r11.u32 + ctx.r18.u32, ctx.r19.u32);
	// stwx r19,r11,r17
	REX_STORE_U32(ctx.r11.u32 + ctx.r17.u32, ctx.r19.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lwz r18,96(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r17,100(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stwx r19,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r19.u32);
	// stbx r9,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u8);
	// stwx r3,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// stwx r19,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r19.u32);
	// sthx r19,r11,r16
	REX_STORE_U16(ctx.r11.u32 + ctx.r16.u32, ctx.r19.u16);
	// sthx r19,r11,r15
	REX_STORE_U16(ctx.r11.u32 + ctx.r15.u32, ctx.r19.u16);
	// stbx r19,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r19.u8);
	// stwx r19,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r19.u32);
	// stbx r23,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r23.u8);
	// stbx r19,r11,r14
	REX_STORE_U8(ctx.r11.u32 + ctx.r14.u32, ctx.r19.u8);
	// bne cr6,0x8991e3e4
	if (!ctx.cr6.eq) goto loc_8991E3E4;
	// lwzx r11,r30,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// addi r10,r18,651
	ctx.r10.s64 = ctx.r18.s64 + 651;
	// oris r9,r11,2048
	ctx.r9.u64 = ctx.r11.u64 | 134217728;
	// stwx r9,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r9.u32);
	// stbx r19,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r19.u8);
loc_8991E3E4:
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8991e580
	if (!ctx.cr6.eq) goto loc_8991E580;
	// lwz r11,80(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8991e580
	if (ctx.cr6.eq) goto loc_8991E580;
	// clrlwi r3,r22,16
	ctx.r3.u64 = ctx.r22.u32 & 0xFFFF;
	// addi r27,r18,4
	ctx.r27.s64 = ctx.r18.s64 + 4;
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mulli r30,r29,696
	ctx.r30.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(696));
	// lwzx r28,r30,r27
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8991e440
	if (!ctx.cr6.eq) goto loc_8991E440;
	// addi r11,r18,8
	ctx.r11.s64 = ctx.r18.s64 + 8;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r4,r10,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x899338a8
	ctx.lr = 0x8991E42C;
	sub_899338A8(ctx, base);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8991e580
	if (ctx.cr6.eq) goto loc_8991E580;
	// ori r11,r28,1
	ctx.r11.u64 = ctx.r28.u64 | 1;
	// stwx r11,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u32);
loc_8991E440:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,18748
	ctx.r6.s64 = ctx.r11.s64 + 18748;
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8991E458:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r5,r11,-3
	ctx.r5.s64 = ctx.r11.s64 + -3;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mulli r5,r3,60
	ctx.r5.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(60));
	// rlwinm r8,r4,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lwzx r4,r5,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r5,r3,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8991e498
	if (!ctx.cr6.eq) goto loc_8991E498;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8991e458
	if (ctx.cr6.lt) goto loc_8991E458;
loc_8991E498:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8991e4a4
	if (!ctx.cr6.eq) goto loc_8991E4A4;
	// lhz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
loc_8991E4A4:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mulli r11,r11,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8991e580
	if (!ctx.cr6.eq) goto loc_8991E580;
	// addi r8,r18,8
	ctx.r8.s64 = ctx.r18.s64 + 8;
	// stwx r24,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r24.u32);
	// addi r7,r18,24
	ctx.r7.s64 = ctx.r18.s64 + 24;
	// lwz r17,100(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r6,r18,28
	ctx.r6.s64 = ctx.r18.s64 + 28;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// lwzx r3,r30,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// lwzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// addi r10,r18,656
	ctx.r10.s64 = ctx.r18.s64 + 656;
	// stwx r19,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r19.u32);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// lwzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r4,r31,42
	ctx.r4.s64 = ctx.r31.s64 + 42;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// stwx r19,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r19.u32);
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// stwx r7,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// addi r7,r31,54
	ctx.r7.s64 = ctx.r31.s64 + 54;
	// lbzx r9,r30,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r26,r31,32
	ctx.r26.s64 = ctx.r31.s64 + 32;
	// stwx r6,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r6.u32);
	// addi r24,r31,28
	ctx.r24.s64 = ctx.r31.s64 + 28;
	// sthx r19,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r19.u16);
	// addi r6,r31,44
	ctx.r6.s64 = ctx.r31.s64 + 44;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// sthx r19,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r19.u16);
	// addi r28,r31,57
	ctx.r28.s64 = ctx.r31.s64 + 57;
	// stbx r19,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r19.u8);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// stwx r19,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r19.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r19,r11,r24
	REX_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r19.u32);
	// rlwinm r8,r3,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// stwx r19,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r19.u32);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stwx r25,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r25.u32);
	// stwx r8,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u32);
	// stbx r7,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r7.u8);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// stbx r23,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r23.u8);
	// stbx r19,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r19.u8);
	// bne cr6,0x8991e580
	if (!ctx.cr6.eq) goto loc_8991E580;
	// lwzx r11,r30,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// addi r10,r18,651
	ctx.r10.s64 = ctx.r18.s64 + 651;
	// oris r9,r11,2048
	ctx.r9.u64 = ctx.r11.u64 | 134217728;
	// stwx r9,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r9.u32);
	// stbx r19,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r19.u8);
loc_8991E580:
	// lwz r5,60(r17)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r17.u32 + 60);
	// mulli r8,r22,696
	ctx.r8.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(696));
	// lwz r10,56(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 56);
	// lwz r9,32(r17)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r17.u32 + 32);
	// addi r7,r18,651
	ctx.r7.s64 = ctx.r18.s64 + 651;
	// lis r6,-30274
	ctx.r6.s64 = -1984036864;
	// subfic r11,r10,2500
	ctx.xer.ca = ctx.r10.u32 <= 2500;
	ctx.r11.u64 = static_cast<uint64_t>(2500) - ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbx r5,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u8);
	// stb r9,535(r6)
	REX_STORE_U8(ctx.r6.u32 + 535, ctx.r9.u8);
	// ble cr6,0x8991e5b4
	if (!ctx.cr6.gt) goto loc_8991E5B4;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// sth r11,32544(r10)
	REX_STORE_U16(ctx.r10.u32 + 32544, ctx.r11.u16);
loc_8991E5B4:
	// lwz r9,412(r17)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r17.u32 + 412);
	// cmplwi cr6,r9,100
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 100, ctx.xer);
	// bgt cr6,0x8991e61c
	if (ctx.cr6.gt) goto loc_8991E61C;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8991e600
	if (ctx.cr6.eq) goto loc_8991E600;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r8,100
	ctx.r8.s64 = 100;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// divwu r3,r4,r8
	ctx.r3.u64 = uint32_t(ctx.r8.u32 ? ctx.r4.u32 / ctx.r8.u32 : 0);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x8991e61c
	goto loc_8991E61C;
loc_8991E600:
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,100
	ctx.r10.s64 = 100;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// divwu r5,r6,r10
	ctx.r5.u64 = uint32_t(ctx.r10.u32 ? ctx.r6.u32 / ctx.r10.u32 : 0);
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_8991E61C:
	// bl 0x8991acf0
	ctx.lr = 0x8991E620;
	sub_8991ACF0(ctx, base);
	// bl 0x8991a4a8
	ctx.lr = 0x8991E624;
	sub_8991A4A8(ctx, base);
	// bl 0x899193a8
	ctx.lr = 0x8991E628;
	sub_899193A8(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r11,9448
	ctx.r11.s64 = ctx.r11.s64 + 9448;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991E640:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8991e640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991E640;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r3,r11,-21104
	ctx.r3.s64 = ctx.r11.s64 + -21104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x899dcca0
	ctx.lr = 0x8991E65C;
	sub_899DCCA0(ctx, base);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r9,-9508
	ctx.r11.s64 = ctx.r9.s64 + -9508;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991E674:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8991e674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991E674;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lis r9,-30273
	ctx.r9.s64 = -1983971328;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,32560
	ctx.r11.s64 = ctx.r11.s64 + 32560;
	// addi r9,r9,5464
	ctx.r9.s64 = ctx.r9.s64 + 5464;
	// addi r8,r11,-6
	ctx.r8.s64 = ctx.r11.s64 + -6;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991E6A0:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8991e6a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991E6A0;
	// li r11,32
	ctx.r11.s64 = 32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,4097
	ctx.r11.s64 = 4097;
loc_8991E6B4:
	// sthu r11,32(r8)
	ea = 32 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8991e6b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991E6B4;
	// lis r17,-30270
	ctx.r17.s64 = -1983774720;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lwz r11,26932(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 26932);
	// stw r11,27792(r10)
	REX_STORE_U32(ctx.r10.u32 + 27792, ctx.r11.u32);
	// bl 0x89934538
	ctx.lr = 0x8991E6D0;
	sub_89934538(ctx, base);
	// bl 0x89918ad0
	ctx.lr = 0x8991E6D4;
	sub_89918AD0(ctx, base);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// stw r19,26932(r17)
	REX_STORE_U32(ctx.r17.u32 + 26932, ctx.r19.u32);
	// lis r7,-30247
	ctx.r7.s64 = -1982267392;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// stw r19,3892(r6)
	REX_STORE_U32(ctx.r6.u32 + 3892, ctx.r19.u32);
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// lbz r11,32018(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 32018);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r4,-30251
	ctx.r4.s64 = -1982529536;
	// stw r19,19364(r7)
	REX_STORE_U32(ctx.r7.u32 + 19364, ctx.r19.u32);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// stb r19,3891(r5)
	REX_STORE_U8(ctx.r5.u32 + 3891, ctx.r19.u8);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// ori r9,r9,16960
	ctx.r9.u64 = ctx.r9.u64 | 16960;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,18000
	ctx.r10.s64 = 18000;
	// stw r9,12152(r4)
	REX_STORE_U32(ctx.r4.u32 + 12152, ctx.r9.u32);
	// stb r11,32551(r8)
	REX_STORE_U8(ctx.r8.u32 + 32551, ctx.r11.u8);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r10,20404(r6)
	REX_STORE_U32(ctx.r6.u32 + 20404, ctx.r10.u32);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r3,-30274
	ctx.r3.s64 = -1984036864;
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// stb r19,7115(r4)
	REX_STORE_U8(ctx.r4.u32 + 7115, ctx.r19.u8);
	// rlwinm r9,r5,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r19,-10064(r6)
	REX_STORE_U32(ctx.r6.u32 + -10064, ctx.r19.u32);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stb r19,522(r3)
	REX_STORE_U8(ctx.r3.u32 + 522, ctx.r19.u8);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stb r19,6415(r8)
	REX_STORE_U8(ctx.r8.u32 + 6415, ctx.r19.u8);
	// stb r9,7935(r7)
	REX_STORE_U8(ctx.r7.u32 + 7935, ctx.r9.u8);
	// bl 0x89961e08
	ctx.lr = 0x8991E76C;
	sub_89961E08(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x8991e780
	if (!ctx.cr6.eq) goto loc_8991E780;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,5368(r10)
	REX_STORE_U32(ctx.r10.u32 + 5368, ctx.r11.u32);
loc_8991E780:
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x8991e7cc
	if (!ctx.cr6.eq) goto loc_8991E7CC;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r11,3516(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8991e7cc
	if (!ctx.cr6.eq) goto loc_8991E7CC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x8991e7cc
	if (!ctx.cr6.eq) goto loc_8991E7CC;
	// lwz r11,3520(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8991e7cc
	if (!ctx.cr6.eq) goto loc_8991E7CC;
	// sth r19,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r19.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2049
	ctx.r4.s64 = 2049;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x899d9058
	ctx.lr = 0x8991E7C4;
	sub_899D9058(ctx, base);
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x8994c368
	ctx.lr = 0x8991E7CC;
	sub_8994C368(ctx, base);
loc_8991E7CC:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r11,3524(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991e7e4
	if (ctx.cr6.eq) goto loc_8991E7E4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899523f8
	ctx.lr = 0x8991E7E4;
	sub_899523F8(ctx, base);
loc_8991E7E4:
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// lis r23,-30269
	ctx.r23.s64 = -1983709184;
	// addi r3,r3,-10320
	ctx.r3.s64 = ctx.r3.s64 + -10320;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// lis r5,-30273
	ctx.r5.s64 = -1983971328;
	// addi r24,r23,-10736
	ctx.r24.s64 = ctx.r23.s64 + -10736;
	// lwz r23,88(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r6,5472
	ctx.r3.s64 = ctx.r6.s64 + 5472;
	// addi r4,r4,7640
	ctx.r4.s64 = ctx.r4.s64 + 7640;
	// stw r24,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// addi r5,r5,3536
	ctx.r5.s64 = ctx.r5.s64 + 3536;
	// stw r3,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// lis r25,-30253
	ctx.r25.s64 = -1982660608;
	// stw r4,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// lis r26,-30253
	ctx.r26.s64 = -1982660608;
	// stw r5,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// lis r27,-30274
	ctx.r27.s64 = -1984036864;
	// lis r28,-30253
	ctx.r28.s64 = -1982660608;
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r25,r25,3632
	ctx.r25.s64 = ctx.r25.s64 + 3632;
	// addi r26,r26,-2532
	ctx.r26.s64 = ctx.r26.s64 + -2532;
	// addi r27,r27,520
	ctx.r27.s64 = ctx.r27.s64 + 520;
	// stw r25,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// lis r24,-30274
	ctx.r24.s64 = -1984036864;
	// stw r26,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// addi r28,r28,-9500
	ctx.r28.s64 = ctx.r28.s64 + -9500;
	// stw r27,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// addi r29,r29,8160
	ctx.r29.s64 = ctx.r29.s64 + 8160;
	// addi r30,r30,12640
	ctx.r30.s64 = ctx.r30.s64 + 12640;
	// stw r28,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// addi r31,r31,8016
	ctx.r31.s64 = ctx.r31.s64 + 8016;
	// stw r29,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// addi r7,r7,-21360
	ctx.r7.s64 = ctx.r7.s64 + -21360;
	// stw r30,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// addi r6,r8,5496
	ctx.r6.s64 = ctx.r8.s64 + 5496;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r5,r9,12480
	ctx.r5.s64 = ctx.r9.s64 + 12480;
	// stw r7,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// addi r4,r10,4952
	ctx.r4.s64 = ctx.r10.s64 + 4952;
	// stw r6,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
	// stw r5,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// lis r20,-30232
	ctx.r20.s64 = -1981284352;
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r21,-30214
	ctx.r21.s64 = -1980104704;
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lis r22,-30269
	ctx.r22.s64 = -1983709184;
	// lis r14,-30269
	ctx.r14.s64 = -1983709184;
	// lis r15,-30270
	ctx.r15.s64 = -1983774720;
	// lis r16,-30270
	ctx.r16.s64 = -1983774720;
	// lis r18,-30269
	ctx.r18.s64 = -1983709184;
	// addi r24,r24,592
	ctx.r24.s64 = ctx.r24.s64 + 592;
	// lis r25,-30274
	ctx.r25.s64 = -1984036864;
	// lis r26,-30273
	ctx.r26.s64 = -1983971328;
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
loc_8991E8E4:
	// bl 0x899301c0
	ctx.lr = 0x8991E8E8;
	sub_899301C0(ctx, base);
	// bl 0x8991f358
	ctx.lr = 0x8991E8EC;
	sub_8991F358(ctx, base);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lwz r10,-10740(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + -10740);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// stw r19,-10740(r22)
	REX_STORE_U32(ctx.r22.u32 + -10740, ctx.r19.u32);
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r10,7124(r11)
	REX_STORE_U32(ctx.r11.u32 + 7124, ctx.r10.u32);
	// bl 0x8991dbc0
	ctx.lr = 0x8991E908;
	sub_8991DBC0(ctx, base);
	// bl 0x89927980
	ctx.lr = 0x8991E90C;
	sub_89927980(ctx, base);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8991e9e0
	if (!ctx.cr6.eq) goto loc_8991E9E0;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r11,7115(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7115);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8991e9e0
	if (!ctx.cr6.eq) goto loc_8991E9E0;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r11,3892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8991e9e0
	if (!ctx.cr6.eq) goto loc_8991E9E0;
	// bl 0x8991de00
	ctx.lr = 0x8991E93C;
	sub_8991DE00(ctx, base);
	// bl 0x8991deb0
	ctx.lr = 0x8991E940;
	sub_8991DEB0(ctx, base);
	// lwz r10,-10740(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + -10740);
	// stw r19,-10740(r22)
	REX_STORE_U32(ctx.r22.u32 + -10740, ctx.r19.u32);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r10,20948(r27)
	REX_STORE_U32(ctx.r27.u32 + 20948, ctx.r10.u32);
	// bl 0x89927e88
	ctx.lr = 0x8991E958;
	sub_89927E88(ctx, base);
	// bl 0x899284c0
	ctx.lr = 0x8991E95C;
	sub_899284C0(ctx, base);
	// bl 0x89928240
	ctx.lr = 0x8991E960;
	sub_89928240(ctx, base);
	// bl 0x89928838
	ctx.lr = 0x8991E964;
	sub_89928838(ctx, base);
	// bl 0x89928ba0
	ctx.lr = 0x8991E968;
	sub_89928BA0(ctx, base);
	// bl 0x89928f20
	ctx.lr = 0x8991E96C;
	sub_89928F20(ctx, base);
	// bl 0x89929220
	ctx.lr = 0x8991E970;
	sub_89929220(ctx, base);
	// bl 0x89929510
	ctx.lr = 0x8991E974;
	sub_89929510(ctx, base);
	// lwz r9,-10740(r22)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + -10740);
	// stw r19,-10740(r22)
	REX_STORE_U32(ctx.r22.u32 + -10740, ctx.r19.u32);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// neg r10,r9
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r10,3792(r26)
	REX_STORE_U32(ctx.r26.u32 + 3792, ctx.r10.u32);
	// bl 0x89937b48
	ctx.lr = 0x8991E98C;
	sub_89937B48(ctx, base);
	// bl 0x8993c1f0
	ctx.lr = 0x8991E990;
	sub_8993C1F0(ctx, base);
	// bl 0x89931f68
	ctx.lr = 0x8991E994;
	sub_89931F68(ctx, base);
	// bl 0x89919238
	ctx.lr = 0x8991E998;
	sub_89919238(ctx, base);
	// bl 0x89917aa0
	ctx.lr = 0x8991E99C;
	sub_89917AA0(ctx, base);
	// bl 0x8991a648
	ctx.lr = 0x8991E9A0;
	sub_8991A648(ctx, base);
	// bl 0x8991ae78
	ctx.lr = 0x8991E9A4;
	sub_8991AE78(ctx, base);
	// bl 0x8992c6c8
	ctx.lr = 0x8991E9A8;
	sub_8992C6C8(ctx, base);
	// bl 0x89919778
	ctx.lr = 0x8991E9AC;
	sub_89919778(ctx, base);
	// lwz r8,-10740(r22)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + -10740);
	// stw r19,-10740(r22)
	REX_STORE_U32(ctx.r22.u32 + -10740, ctx.r19.u32);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// neg r10,r8
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// stw r10,516(r25)
	REX_STORE_U32(ctx.r25.u32 + 516, ctx.r10.u32);
	// bl 0x89916028
	ctx.lr = 0x8991E9C4;
	sub_89916028(ctx, base);
	// lwz r11,-10740(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + -10740);
	// lwz r10,26932(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 26932);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r19,-10740(r22)
	REX_STORE_U32(ctx.r22.u32 + -10740, ctx.r19.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,-21288(r18)
	REX_STORE_U32(ctx.r18.u32 + -21288, ctx.r11.u32);
	// stw r10,26932(r17)
	REX_STORE_U32(ctx.r17.u32 + 26932, ctx.r10.u32);
loc_8991E9E0:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r11,522(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 522);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8991e9f4
	if (!ctx.cr6.eq) goto loc_8991E9F4;
	// bl 0x8992c870
	ctx.lr = 0x8991E9F4;
	sub_8992C870(ctx, base);
loc_8991E9F4:
	// bl 0x89917da8
	ctx.lr = 0x8991E9F8;
	sub_89917DA8(ctx, base);
	// bl 0x8993b6a8
	ctx.lr = 0x8991E9FC;
	sub_8993B6A8(ctx, base);
	// bl 0x89932480
	ctx.lr = 0x8991EA00;
	sub_89932480(ctx, base);
	// bl 0x89918fe0
	ctx.lr = 0x8991EA04;
	sub_89918FE0(ctx, base);
	// bl 0x8992de98
	ctx.lr = 0x8991EA08;
	sub_8992DE98(ctx, base);
	// bl 0x8992dfc0
	ctx.lr = 0x8991EA0C;
	sub_8992DFC0(ctx, base);
	// bl 0x8991af98
	ctx.lr = 0x8991EA10;
	sub_8991AF98(ctx, base);
	// bl 0x89919888
	ctx.lr = 0x8991EA14;
	sub_89919888(ctx, base);
	// bl 0x89919968
	ctx.lr = 0x8991EA18;
	sub_89919968(ctx, base);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lwz r10,-10740(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + -10740);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// stw r19,-10740(r22)
	REX_STORE_U32(ctx.r22.u32 + -10740, ctx.r19.u32);
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r10,7096(r11)
	REX_STORE_U32(ctx.r11.u32 + 7096, ctx.r10.u32);
	// bl 0x899309d8
	ctx.lr = 0x8991EA34;
	sub_899309D8(ctx, base);
	// lwz r28,116(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_8991EA40:
	// cmpwi cr6,r29,104
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 104, ctx.xer);
	// bne cr6,0x8991ea54
	if (!ctx.cr6.eq) goto loc_8991EA54;
	// bl 0x8993d388
	ctx.lr = 0x8991EA4C;
	sub_8993D388(ctx, base);
	// bl 0x8993d558
	ctx.lr = 0x8991EA50;
	sub_8993D558(ctx, base);
	// bl 0x8993d778
	ctx.lr = 0x8991EA54;
	sub_8993D778(ctx, base);
loc_8991EA54:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r31,r29,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991ea70
	if (ctx.cr6.eq) goto loc_8991EA70;
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// bl 0x89917e48
	ctx.lr = 0x8991EA70;
	sub_89917E48(ctx, base);
loc_8991EA70:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991ea88
	if (ctx.cr6.eq) goto loc_8991EA88;
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// bl 0x89919af8
	ctx.lr = 0x8991EA88;
	sub_89919AF8(ctx, base);
loc_8991EA88:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991eaa0
	if (ctx.cr6.eq) goto loc_8991EAA0;
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// bl 0x8991b418
	ctx.lr = 0x8991EAA0;
	sub_8991B418(ctx, base);
loc_8991EAA0:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991eab8
	if (ctx.cr6.eq) goto loc_8991EAB8;
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// bl 0x8992d2c0
	ctx.lr = 0x8991EAB8;
	sub_8992D2C0(ctx, base);
loc_8991EAB8:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991ead0
	if (ctx.cr6.eq) goto loc_8991EAD0;
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// bl 0x8992cc08
	ctx.lr = 0x8991EAD0;
	sub_8992CC08(ctx, base);
loc_8991EAD0:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991eae8
	if (ctx.cr6.eq) goto loc_8991EAE8;
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// bl 0x89932318
	ctx.lr = 0x8991EAE8;
	sub_89932318(ctx, base);
loc_8991EAE8:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991eb00
	if (ctx.cr6.eq) goto loc_8991EB00;
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// bl 0x8993b5b0
	ctx.lr = 0x8991EB00;
	sub_8993B5B0(ctx, base);
loc_8991EB00:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991eb18
	if (ctx.cr6.eq) goto loc_8991EB18;
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// bl 0x8992d1c8
	ctx.lr = 0x8991EB18;
	sub_8992D1C8(ctx, base);
loc_8991EB18:
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991eb30
	if (ctx.cr6.eq) goto loc_8991EB30;
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// bl 0x8991b318
	ctx.lr = 0x8991EB30;
	sub_8991B318(ctx, base);
loc_8991EB30:
	// addi r11,r28,256
	ctx.r11.s64 = ctx.r28.s64 + 256;
	// lhzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8991eb50
	if (ctx.cr6.eq) goto loc_8991EB50;
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x89919088
	ctx.lr = 0x8991EB50;
	sub_89919088(ctx, base);
loc_8991EB50:
	// cmpwi cr6,r29,116
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 116, ctx.xer);
	// bne cr6,0x8991eb5c
	if (!ctx.cr6.eq) goto loc_8991EB5C;
	// bl 0x89919c68
	ctx.lr = 0x8991EB5C;
	sub_89919C68(ctx, base);
loc_8991EB5C:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991eb74
	if (ctx.cr6.eq) goto loc_8991EB74;
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// bl 0x8992cb10
	ctx.lr = 0x8991EB74;
	sub_8992CB10(ctx, base);
loc_8991EB74:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991eb8c
	if (ctx.cr6.eq) goto loc_8991EB8C;
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// bl 0x89919a48
	ctx.lr = 0x8991EB8C;
	sub_89919A48(ctx, base);
loc_8991EB8C:
	// cmpwi cr6,r29,116
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 116, ctx.xer);
	// bne cr6,0x8991ebac
	if (!ctx.cr6.eq) goto loc_8991EBAC;
	// bl 0x89919ba8
	ctx.lr = 0x8991EB98;
	sub_89919BA8(ctx, base);
	// bl 0x8993c3d0
	ctx.lr = 0x8991EB9C;
	sub_8993C3D0(ctx, base);
	// bl 0x89932168
	ctx.lr = 0x8991EBA0;
	sub_89932168(ctx, base);
	// bl 0x8993b498
	ctx.lr = 0x8991EBA4;
	sub_8993B498(ctx, base);
	// bl 0x8991a718
	ctx.lr = 0x8991EBA8;
	sub_8991A718(ctx, base);
	// b 0x8991ebb8
	goto loc_8991EBB8;
loc_8991EBAC:
	// cmpwi cr6,r29,124
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 124, ctx.xer);
	// bne cr6,0x8991ebb8
	if (!ctx.cr6.eq) goto loc_8991EBB8;
	// bl 0x8993d110
	ctx.lr = 0x8991EBB8;
	sub_8993D110(ctx, base);
loc_8991EBB8:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,128
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 128, ctx.xer);
	// blt cr6,0x8991ea40
	if (ctx.cr6.lt) goto loc_8991EA40;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r11,26948(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 26948);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991ec38
	if (ctx.cr6.eq) goto loc_8991EC38;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lhz r11,3616(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 3616);
	// lhz r9,9640(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 9640);
	// mulli r10,r11,112
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// mulli r11,r9,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// add r31,r10,r24
	ctx.r31.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_8991EBFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991ec2c
	if (ctx.cr6.eq) goto loc_8991EC2C;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r5,64(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x89939350
	ctx.lr = 0x8991EC2C;
	sub_89939350(ctx, base);
loc_8991EC2C:
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8991ebfc
	if (!ctx.cr6.eq) goto loc_8991EBFC;
loc_8991EC38:
	// lwz r10,-10740(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + -10740);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r19,-10740(r22)
	REX_STORE_U32(ctx.r22.u32 + -10740, ctx.r19.u32);
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r10,26524(r16)
	REX_STORE_U32(ctx.r16.u32 + 26524, ctx.r10.u32);
	// bl 0x89927188
	ctx.lr = 0x8991EC50;
	sub_89927188(ctx, base);
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lwz r9,-10740(r22)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + -10740);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r19,-10740(r22)
	REX_STORE_U32(ctx.r22.u32 + -10740, ctx.r19.u32);
	// lbz r8,586(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 586);
	// neg r10,r9
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,5760(r15)
	REX_STORE_U32(ctx.r15.u32 + 5760, ctx.r10.u32);
	// bne cr6,0x8991ee78
	if (!ctx.cr6.eq) goto loc_8991EE78;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r30,96(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// subfic r28,r11,4102
	ctx.xer.ca = ctx.r11.u32 <= 4102;
	ctx.r28.u64 = static_cast<uint64_t>(4102) - ctx.r11.u64;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// subfic r29,r10,4100
	ctx.xer.ca = ctx.r10.u32 <= 4100;
	ctx.r29.u64 = static_cast<uint64_t>(4100) - ctx.r10.u64;
loc_8991EC8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// sth r19,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r19.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991eca4
	if (ctx.cr6.eq) goto loc_8991ECA4;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_8991ECA4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8991ece8
	if (ctx.cr6.eq) goto loc_8991ECE8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// ori r9,r11,4096
	ctx.r9.u64 = ctx.r11.u64 | 4096;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8991ece8
	if (ctx.cr6.gt) goto loc_8991ECE8;
	// lwz r3,3680(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 3680);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,-26964(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + -26964);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8991ECE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8991ECE8:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,696
	ctx.r30.s64 = ctx.r30.s64 + 696;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r10,r11,1392
	ctx.r10.s64 = ctx.r11.s64 + 1392;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8991ec8c
	if (ctx.cr6.lt) goto loc_8991EC8C;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// sth r19,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r19.u16);
	// lbz r11,9527(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9527);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991ed2c
	if (ctx.cr6.eq) goto loc_8991ED2C;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r11,3891(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3891);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8991ed2c
	if (!ctx.cr6.eq) goto loc_8991ED2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_8991ED2C:
	// lwz r3,3680(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 3680);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,-26964(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + -26964);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4116
	ctx.r4.s64 = ctx.r11.s64 + 4116;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8991ED50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3680(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 3680);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r11,-26964(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + -26964);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,4132
	ctx.r4.s64 = ctx.r11.s64 + 4132;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8991ED74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r3,3680(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 3680);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,-26964(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + -26964);
	// addi r4,r11,4136
	ctx.r4.s64 = ctx.r11.s64 + 4136;
	// beq cr6,0x8991eda8
	if (ctx.cr6.eq) goto loc_8991EDA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8991edc0
	goto loc_8991EDC0;
loc_8991EDA8:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lwz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8991EDC0:
	// bctrl 
	ctx.lr = 0x8991EDC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3680(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 3680);
	// lwz r11,-26964(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + -26964);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r11,4140
	ctx.r4.s64 = ctx.r11.s64 + 4140;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8991EDE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,96(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// addi r31,r28,664
	ctx.r31.s64 = ctx.r28.s64 + 664;
	// ori r29,r11,4096
	ctx.r29.u64 = ctx.r11.u64 | 4096;
loc_8991EDFC:
	// li r11,2072
	ctx.r11.s64 = 2072;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8991ee0c
	if (ctx.cr6.eq) goto loc_8991EE0C;
	// li r11,2100
	ctx.r11.s64 = 2100;
loc_8991EE0C:
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lbz r10,587(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 587);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bge cr6,0x8991ee24
	if (!ctx.cr6.lt) goto loc_8991EE24;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8991EE24:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8991ee60
	if (ctx.cr6.eq) goto loc_8991EE60;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8991ee60
	if (ctx.cr6.gt) goto loc_8991EE60;
	// lwz r3,3680(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 3680);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,-26964(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + -26964);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8991EE60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8991EE60:
	// addi r31,r31,696
	ctx.r31.s64 = ctx.r31.s64 + 696;
	// addi r11,r28,2056
	ctx.r11.s64 = ctx.r28.s64 + 2056;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8991edfc
	if (ctx.cr6.lt) goto loc_8991EDFC;
	// b 0x8991ee7c
	goto loc_8991EE7C;
loc_8991EE78:
	// lwz r28,96(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8991EE7C:
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lbz r11,32018(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 32018);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8991ee90
	if (!ctx.cr6.eq) goto loc_8991EE90;
	// bl 0x8992b8d8
	ctx.lr = 0x8991EE90;
	sub_8992B8D8(ctx, base);
loc_8991EE90:
	// bl 0x8995c030
	ctx.lr = 0x8991EE94;
	sub_8995C030(ctx, base);
	// bl 0x89926b10
	ctx.lr = 0x8991EE98;
	sub_89926B10(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89930720
	ctx.lr = 0x8991EEA4;
	sub_89930720(ctx, base);
	// lwz r10,-10740(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + -10740);
	// stw r19,-10740(r22)
	REX_STORE_U32(ctx.r22.u32 + -10740, ctx.r19.u32);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r10,-10768(r14)
	REX_STORE_U32(ctx.r14.u32 + -10768, ctx.r10.u32);
	// bl 0x899319c8
	ctx.lr = 0x8991EEBC;
	sub_899319C8(ctx, base);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r9,-10740(r22)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + -10740);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// stw r19,-10740(r22)
	REX_STORE_U32(ctx.r22.u32 + -10740, ctx.r19.u32);
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// lwz r10,12076(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// stw r9,-25892(r11)
	REX_STORE_U32(ctx.r11.u32 + -25892, ctx.r9.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// beq cr6,0x8991ef1c
	if (ctx.cr6.eq) goto loc_8991EF1C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bgt cr6,0x8991ef00
	if (ctx.cr6.gt) goto loc_8991EF00;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8991EF00:
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8991ef2c
	if (!ctx.cr6.lt) goto loc_8991EF2C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8991ef28
	goto loc_8991EF28;
loc_8991EF1C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8991ef2c
	if (!ctx.cr6.gt) goto loc_8991EF2C;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8991EF28:
	// stw r11,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_8991EF2C:
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8991ef98
	if (ctx.cr6.gt) goto loc_8991EF98;
	// sth r19,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r19.u16);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,3680(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 3680);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// lwz r11,-26964(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + -26964);
	// addi r5,r11,4098
	ctx.r5.s64 = ctx.r11.s64 + 4098;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8991EF60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r9,r28,658
	ctx.r9.s64 = ctx.r28.s64 + 658;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// addi r7,r3,-1
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// mulli r5,r6,696
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(696));
	// lbzx r4,r5,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8991ef98
	if (!ctx.cr6.eq) goto loc_8991EF98;
	// bl 0x8994c298
	ctx.lr = 0x8991EF88;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8991ef98
	if (ctx.cr6.eq) goto loc_8991EF98;
	// li r3,43
	ctx.r3.s64 = 43;
	// bl 0x8994c368
	ctx.lr = 0x8991EF98;
	sub_8994C368(ctx, base);
loc_8991EF98:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r11,586(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991f0d0
	if (ctx.cr6.eq) goto loc_8991F0D0;
	// sth r19,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r19.u16);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,3680(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 3680);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,-26964(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + -26964);
	// addi r5,r11,4110
	ctx.r5.s64 = ctx.r11.s64 + 4110;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8991EFD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8991f148
	if (!ctx.cr6.eq) goto loc_8991F148;
	// sth r19,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r19.u16);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,3680(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 3680);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,-26964(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + -26964);
	// addi r5,r11,4106
	ctx.r5.s64 = ctx.r11.s64 + 4106;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8991F004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8991f148
	if (!ctx.cr6.eq) goto loc_8991F148;
	// lwz r11,26932(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 26932);
	// cmpwi cr6,r11,1800
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1800, ctx.xer);
	// beq cr6,0x8991f148
	if (ctx.cr6.eq) goto loc_8991F148;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r5,172(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// lwz r3,180(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lbz r11,27280(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 27280);
	// lbz r10,7384(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 7384);
	// stb r11,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// stb r10,93(r1)
	REX_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// lbz r7,-31405(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -31405);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r8,8419(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 8419);
loc_8991F058:
	// lbzx r10,r9,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lbzx r11,r10,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991f07c
	if (ctx.cr6.eq) goto loc_8991F07C;
	// lbzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8991f07c
	if (!ctx.cr6.lt) goto loc_8991F07C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8991f0a8
	if (!ctx.cr6.eq) goto loc_8991F0A8;
loc_8991F07C:
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991f0a8
	if (ctx.cr6.eq) goto loc_8991F0A8;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991f0a4
	if (ctx.cr6.eq) goto loc_8991F0A4;
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r11,41(r3)
	REX_STORE_U8(ctx.r3.u32 + 41, ctx.r11.u8);
loc_8991F0A4:
	// li r8,1
	ctx.r8.s64 = 1;
loc_8991F0A8:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8991f058
	if (ctx.cr6.lt) goto loc_8991F058;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// stb r8,8419(r11)
	REX_STORE_U8(ctx.r11.u32 + 8419, ctx.r8.u8);
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8991f148
	if (!ctx.cr6.eq) goto loc_8991F148;
loc_8991F0D0:
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lbz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 256);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991f104
	if (ctx.cr6.eq) goto loc_8991F104;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r11,530(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 530);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8991f148
	if (!ctx.cr6.eq) goto loc_8991F148;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r11,12322(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12322);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8991f148
	if (!ctx.cr6.lt) goto loc_8991F148;
loc_8991F104:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r11,7115(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7115);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991f138
	if (ctx.cr6.eq) goto loc_8991F138;
	// lis r11,-30247
	ctx.r11.s64 = -1982267392;
	// lwz r11,19364(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8991f148
	if (ctx.cr6.eq) goto loc_8991F148;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r11,20432(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 20432);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8991f148
	if (!ctx.cr6.eq) goto loc_8991F148;
loc_8991F138:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r11,3891(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3891);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991e8e4
	if (ctx.cr6.eq) goto loc_8991E8E4;
loc_8991F148:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// lbz r8,587(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 587);
loc_8991F154:
	// mulli r11,r9,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// lwzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991f174
	if (ctx.cr6.eq) goto loc_8991F174;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// addi r7,r28,659
	ctx.r7.s64 = ctx.r28.s64 + 659;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stbx r6,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
loc_8991F174:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8991f154
	if (ctx.cr6.lt) goto loc_8991F154;
	// bl 0x89918cf0
	ctx.lr = 0x8991F18C;
	sub_89918CF0(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,12275(r10)
	REX_STORE_U8(ctx.r10.u32 + 12275, ctx.r11.u8);
	// bl 0x89932ed8
	ctx.lr = 0x8991F19C;
	sub_89932ED8(ctx, base);
	// lis r31,-30274
	ctx.r31.s64 = -1984036864;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lbz r9,586(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 586);
	// stb r19,32551(r10)
	REX_STORE_U8(ctx.r10.u32 + 32551, ctx.r19.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8991f22c
	if (!ctx.cr6.eq) goto loc_8991F22C;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// lbz r8,587(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 587);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// stb r19,8419(r11)
	REX_STORE_U8(ctx.r11.u32 + 8419, ctx.r19.u8);
	// lhz r11,19188(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 19188);
	// ble cr6,0x8991f1f8
	if (!ctx.cr6.gt) goto loc_8991F1F8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x8991f1f4
	if (ctx.cr6.eq) goto loc_8991F1F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,19188(r10)
	REX_STORE_U16(ctx.r10.u32 + 19188, ctx.r11.u16);
loc_8991F1F4:
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
loc_8991F1F8:
	// bge cr6,0x8991f214
	if (!ctx.cr6.lt) goto loc_8991F214;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991f214
	if (ctx.cr6.eq) goto loc_8991F214;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,19188(r10)
	REX_STORE_U16(ctx.r10.u32 + 19188, ctx.r11.u16);
loc_8991F214:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r11,3524(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991f22c
	if (ctx.cr6.eq) goto loc_8991F22C;
	// bl 0x899526c8
	ctx.lr = 0x8991F228;
	sub_899526C8(ctx, base);
	// bl 0x899522e8
	ctx.lr = 0x8991F22C;
	sub_899522E8(ctx, base);
loc_8991F22C:
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// li r11,32
	ctx.r11.s64 = 32;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// stb r11,-25513(r10)
	REX_STORE_U8(ctx.r10.u32 + -25513, ctx.r11.u8);
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lbz r8,32547(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 32547);
	// addi r5,r7,12280
	ctx.r5.s64 = ctx.r7.s64 + 12280;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// stb r10,9538(r6)
	REX_STORE_U8(ctx.r6.u32 + 9538, ctx.r10.u8);
	// stb r19,32546(r11)
	REX_STORE_U8(ctx.r11.u32 + 32546, ctx.r19.u8);
	// stb r8,23(r5)
	REX_STORE_U8(ctx.r5.u32 + 23, ctx.r8.u8);
	// bl 0x89949960
	ctx.lr = 0x8991F268;
	sub_89949960(ctx, base);
	// lbz r4,586(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 586);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8991f34c
	if (!ctx.cr6.eq) goto loc_8991F34C;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// lwz r11,3520(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8991f28c
	if (ctx.cr6.eq) goto loc_8991F28C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8991F28C:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r11,3508(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8991f318
	if (ctx.cr6.eq) goto loc_8991F318;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,664(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 664);
	// addi r10,r5,84
	ctx.r10.s64 = ctx.r5.s64 + 84;
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r8,16(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,8(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8991f2e0
	if (!ctx.cr6.lt) goto loc_8991F2E0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8991F2E0:
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,1360(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 1360);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8991f2f4
	if (!ctx.cr6.lt) goto loc_8991F2F4;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8991F2F4:
	// lwz r3,3680(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 3680);
	// li r6,416
	ctx.r6.s64 = 416;
	// lwz r11,-26964(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + -26964);
	// addi r4,r11,24576
	ctx.r4.s64 = ctx.r11.s64 + 24576;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8991F314;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8991f320
	goto loc_8991F320;
loc_8991F318:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8991f34c
	if (ctx.cr6.eq) goto loc_8991F34C;
loc_8991F320:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,3680(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 3680);
	// lwz r11,-26964(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + -26964);
	// li r6,2
	ctx.r6.s64 = 2;
	// sth r10,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r10.u16);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,4104
	ctx.r4.s64 = ctx.r11.s64 + 4104;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8991F34C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8991F34C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992D880) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r10,r11,592
	ctx.r10.s64 = ctx.r11.s64 + 592;
	// addi r6,r8,12332
	ctx.r6.s64 = ctx.r8.s64 + 12332;
	// lbz r11,586(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 586);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// addi r9,r10,110
	ctx.r9.s64 = ctx.r10.s64 + 110;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mulli r11,r5,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(112));
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r5,r8,7128
	ctx.r5.s64 = ctx.r8.s64 + 7128;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbzx r8,r4,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// stbx r7,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r8,r4,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lbzx r6,r8,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8992d95c
	if (ctx.cr6.lt) goto loc_8992D95C;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r6,r10,28
	ctx.r6.s64 = ctx.r10.s64 + 28;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// addi r4,r10,20
	ctx.r4.s64 = ctx.r10.s64 + 20;
	// addi r31,r10,36
	ctx.r31.s64 = ctx.r10.s64 + 36;
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r30,r10,32
	ctx.r30.s64 = ctx.r10.s64 + 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// clrlwi r10,r7,29
	ctx.r10.u64 = ctx.r7.u32 & 0x7;
	// lwzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r9,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r8,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r6,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8992D95C:
	// bl 0x8992dbc0
	ctx.lr = 0x8992D960;
	sub_8992DBC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8992DE98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x8992DEA0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r10,r10,19192
	ctx.r10.s64 = ctx.r10.s64 + 19192;
	// addi r23,r11,-31432
	ctx.r23.s64 = ctx.r11.s64 + -31432;
	// addi r25,r10,16
	ctx.r25.s64 = ctx.r10.s64 + 16;
	// lis r9,-30282
	ctx.r9.s64 = -1984561152;
	// lis r8,-30284
	ctx.r8.s64 = -1984692224;
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// addi r28,r9,32008
	ctx.r28.s64 = ctx.r9.s64 + 32008;
	// addi r27,r8,32008
	ctx.r27.s64 = ctx.r8.s64 + 32008;
	// addi r30,r10,-21360
	ctx.r30.s64 = ctx.r10.s64 + -21360;
	// addi r29,r11,12640
	ctx.r29.s64 = ctx.r11.s64 + 12640;
loc_8992DEDC:
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8992dfa4
	if (ctx.cr6.eq) goto loc_8992DFA4;
	// lwz r31,-4(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + -4);
	// lwz r26,0(r25)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
loc_8992DEF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992df98
	if (ctx.cr6.eq) goto loc_8992DF98;
	// lbz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 88);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lhzx r11,r9,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r7,r28
	REX_STORE_U32(ctx.r7.u32 + ctx.r28.u32, ctx.r31.u32);
	// lbz r6,88(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 88);
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lhzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sthx r5,r11,r29
	REX_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u16);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8992df98
	if (ctx.cr6.eq) goto loc_8992DF98;
	// rlwinm r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8992df98
	if (!ctx.cr6.eq) goto loc_8992DF98;
	// lbz r6,88(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 88);
	// lhz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// lhz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// bl 0x8993c990
	ctx.lr = 0x8992DF5C;
	sub_8993C990(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,89(r31)
	REX_STORE_U8(ctx.r31.u32 + 89, ctx.r3.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8992df98
	if (ctx.cr6.eq) goto loc_8992DF98;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lhzx r11,r9,r30
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r7,r27
	REX_STORE_U32(ctx.r7.u32 + ctx.r27.u32, ctx.r31.u32);
	// lbz r6,89(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 89);
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lhzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sthx r5,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r5.u16);
loc_8992DF98:
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8992def0
	if (!ctx.cr6.eq) goto loc_8992DEF0;
loc_8992DFA4:
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// addi r11,r23,16
	ctx.r11.s64 = ctx.r23.s64 + 16;
	// addi r25,r25,20
	ctx.r25.s64 = ctx.r25.s64 + 20;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8992dedc
	if (ctx.cr6.lt) goto loc_8992DEDC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992E698) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x8992E6A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8992c368
	ctx.lr = 0x8992E6BC;
	sub_8992C368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8992e750
	if (ctx.cr6.eq) goto loc_8992E750;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lis r9,-16256
	ctx.r9.s64 = -1065353216;
	// addi r31,r10,592
	ctx.r31.s64 = ctx.r10.s64 + 592;
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// lhz r30,-4592(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// extsh r5,r30
	ctx.r5.s64 = ctx.r30.s16;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mulli r25,r5,112
	ctx.r25.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(112));
	// stwx r8,r25,r31
	REX_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r8.u32);
	// stwx r28,r25,r6
	REX_STORE_U32(ctx.r25.u32 + ctx.r6.u32, ctx.r28.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r3,r25,r7
	REX_STORE_U32(ctx.r25.u32 + ctx.r7.u32, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r11,r25,r4
	REX_STORE_U32(ctx.r25.u32 + ctx.r4.u32, ctx.r11.u32);
	// bl 0x8992bd50
	ctx.lr = 0x8992E710;
	sub_8992BD50(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// extsb r9,r29
	ctx.r9.s64 = ctx.r29.s8;
	// addi r11,r10,9656
	ctx.r11.s64 = ctx.r10.s64 + 9656;
	// mulli r8,r9,92
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(92));
	// addi r7,r11,76
	ctx.r7.s64 = ctx.r11.s64 + 76;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// addi r4,r31,98
	ctx.r4.s64 = ctx.r31.s64 + 98;
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// lbzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r27,r25,r6
	REX_STORE_U32(ctx.r25.u32 + ctx.r6.u32, ctx.r27.u32);
	// stwx r26,r25,r5
	REX_STORE_U32(ctx.r25.u32 + ctx.r5.u32, ctx.r26.u32);
	// stbx r29,r25,r4
	REX_STORE_U8(ctx.r25.u32 + ctx.r4.u32, ctx.r29.u8);
	// stbx r10,r25,r11
	REX_STORE_U8(ctx.r25.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x8992e290
	ctx.lr = 0x8992E750;
	sub_8992E290(ctx, base);
loc_8992E750:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992EDC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x8992EDC8;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r24,r3
	ctx.r24.s64 = ctx.r3.s16;
	// addi r27,r11,25128
	ctx.r27.s64 = ctx.r11.s64 + 25128;
	// mulli r31,r24,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(696));
	// addi r22,r27,4
	ctx.r22.s64 = ctx.r27.s64 + 4;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwzx r30,r31,r22
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8992ee1c
	if (!ctx.cr6.eq) goto loc_8992EE1C;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r4,r10,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x899338a8
	ctx.lr = 0x8992EE08;
	sub_899338A8(ctx, base);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8992f1e4
	if (ctx.cr6.eq) goto loc_8992F1E4;
	// ori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 | 1;
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
loc_8992EE1C:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,-9516(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9516);
	// beq cr6,0x8992ee64
	if (ctx.cr6.eq) goto loc_8992EE64;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// bgt cr6,0x8992ee48
	if (ctx.cr6.gt) goto loc_8992EE48;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8992EE48:
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
	// lwz r9,8420(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8420);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8992ee74
	if (!ctx.cr6.lt) goto loc_8992EE74;
	// stw r9,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r9.u32);
	// b 0x8992ee74
	goto loc_8992EE74;
loc_8992EE64:
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// ble cr6,0x8992ee74
	if (!ctx.cr6.gt) goto loc_8992EE74;
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
loc_8992EE74:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r10,r23
	ctx.r10.s64 = ctx.r23.s16;
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// addi r9,r27,24
	ctx.r9.s64 = ctx.r27.s64 + 24;
	// mulli r10,r10,112
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// lwzx r26,r31,r9
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// lis r7,-30251
	ctx.r7.s64 = -1982529536;
	// lwzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lhz r9,19184(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 19184);
	// cmpw cr6,r26,r6
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8992eebc
	if (!ctx.cr6.gt) goto loc_8992EEBC;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x8992eebc
	if (!ctx.cr6.eq) goto loc_8992EEBC;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r8,r11,18724
	ctx.r8.s64 = ctx.r11.s64 + 18724;
	// b 0x8992eee8
	goto loc_8992EEE8;
loc_8992EEBC:
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// addi r8,r27,28
	ctx.r8.s64 = ctx.r27.s64 + 28;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8992eee0
	if (!ctx.cr6.gt) goto loc_8992EEE0;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r8,r11,18708
	ctx.r8.s64 = ctx.r11.s64 + 18708;
	// b 0x8992eee8
	goto loc_8992EEE8;
loc_8992EEE0:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r8,r11,18716
	ctx.r8.s64 = ctx.r11.s64 + 18716;
loc_8992EEE8:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lhz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r10,r11,9056
	ctx.r10.s64 = ctx.r11.s64 + 9056;
	// beq cr6,0x8992ef5c
	if (ctx.cr6.eq) goto loc_8992EF5C;
	// rlwinm r7,r24,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// add r5,r24,r7
	ctx.r5.u64 = ctx.r24.u64 + ctx.r7.u64;
	// addi r7,r8,-2
	ctx.r7.s64 = ctx.r8.s64 + -2;
loc_8992EF14:
	// lhzu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// subf r30,r11,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 + ctx.r5.u64;
	// cntlzw r30,r30
	ctx.r30.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// mulli r6,r6,60
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(60));
	// lwzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r30,r30,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x1;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// or r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 | ctx.r30.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8992ef60
	if (!ctx.cr6.eq) goto loc_8992EF60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8992ef14
	if (ctx.cr6.lt) goto loc_8992EF14;
	// b 0x8992ef60
	goto loc_8992EF60;
loc_8992EF5C:
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_8992EF60:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8992ef70
	if (!ctx.cr6.eq) goto loc_8992EF70;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_8992EF70:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r11,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8992f13c
	if (!ctx.cr6.eq) goto loc_8992F13C;
	// addi r8,r27,28
	ctx.r8.s64 = ctx.r27.s64 + 28;
	// addi r3,r10,20
	ctx.r3.s64 = ctx.r10.s64 + 20;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// addi r21,r10,24
	ctx.r21.s64 = ctx.r10.s64 + 24;
	// addi r6,r10,12
	ctx.r6.s64 = ctx.r10.s64 + 12;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r30,r27,656
	ctx.r30.s64 = ctx.r27.s64 + 656;
	// stwx r26,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r26.u32);
	// addi r3,r10,54
	ctx.r3.s64 = ctx.r10.s64 + 54;
	// stwx r29,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r29.u32);
	// addi r5,r10,40
	ctx.r5.s64 = ctx.r10.s64 + 40;
	// addi r28,r27,8
	ctx.r28.s64 = ctx.r27.s64 + 8;
	// stwx r29,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r29.u32);
	// addi r6,r10,42
	ctx.r6.s64 = ctx.r10.s64 + 42;
	// stwx r8,r11,r21
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r8.u32);
	// addi r8,r10,44
	ctx.r8.s64 = ctx.r10.s64 + 44;
	// lbzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stbx r29,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r29.u8);
	// lis r3,-15360
	ctx.r3.s64 = -1006632960;
	// sthx r29,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r29.u16);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// sthx r29,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r29.u16);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// stwx r29,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r29.u32);
	// ori r8,r3,4
	ctx.r8.u64 = ctx.r3.u64 | 4;
	// lwzx r4,r31,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r20,r10,32
	ctx.r20.s64 = ctx.r10.s64 + 32;
	// addi r19,r10,28
	ctx.r19.s64 = ctx.r10.s64 + 28;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r26,r10,36
	ctx.r26.s64 = ctx.r10.s64 + 36;
	// addi r21,r10,57
	ctx.r21.s64 = ctx.r10.s64 + 57;
	// addi r6,r10,56
	ctx.r6.s64 = ctx.r10.s64 + 56;
	// ori r3,r9,32896
	ctx.r3.u64 = ctx.r9.u64 | 32896;
	// stwx r29,r11,r20
	REX_STORE_U32(ctx.r11.u32 + ctx.r20.u32, ctx.r29.u32);
	// rlwinm r4,r4,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// stwx r29,r11,r19
	REX_STORE_U32(ctx.r11.u32 + ctx.r19.u32, ctx.r29.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stwx r3,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r3.u32);
	// li r10,60
	ctx.r10.s64 = 60;
	// stwx r4,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u32);
	// stbx r29,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r29.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stbx r10,r11,r21
	REX_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stbx r9,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89963340
	ctx.lr = 0x8992F050;
	sub_89963340(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8995ba10
	ctx.lr = 0x8992F058;
	sub_8995BA10(ctx, base);
	// lbzx r8,r31,r30
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8992f078
	if (!ctx.cr6.eq) goto loc_8992F078;
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// addi r10,r27,651
	ctx.r10.s64 = ctx.r27.s64 + 651;
	// oris r9,r11,2048
	ctx.r9.u64 = ctx.r11.u64 | 134217728;
	// stwx r9,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r9.u32);
	// stbx r29,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u8);
loc_8992F078:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r10,r10,12332
	ctx.r10.s64 = ctx.r10.s64 + 12332;
	// lbz r11,586(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bne cr6,0x8992f110
	if (!ctx.cr6.eq) goto loc_8992F110;
	// addi r11,r27,651
	ctx.r11.s64 = ctx.r27.s64 + 651;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x8992f110
	if (ctx.cr6.eq) goto loc_8992F110;
	// li r10,5
	ctx.r10.s64 = 5;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r8,7008
	ctx.r11.s64 = ctx.r8.s64 + 7008;
	// mulli r6,r7,30
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(30));
	// addi r5,r11,11
	ctx.r5.s64 = ctx.r11.s64 + 11;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbzx r4,r6,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// bl 0x899362a0
	ctx.lr = 0x8992F0E0;
	sub_899362A0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8994c298
	ctx.lr = 0x8992F0E8;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8992f1c0
	if (ctx.cr6.eq) goto loc_8992F1C0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8994c368
	ctx.lr = 0x8992F0F8;
	sub_8994C368(ctx, base);
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lwz r11,12076(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12076);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12076(r10)
	REX_STORE_U32(ctx.r10.u32 + 12076, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8992F110:
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r11,r9,7008
	ctx.r11.s64 = ctx.r9.s64 + 7008;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// mulli r6,r8,30
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(30));
	// lbzx r4,r6,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// bl 0x899362a0
	ctx.lr = 0x8992F134;
	sub_899362A0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8992F13C:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r10,r10,12332
	ctx.r10.s64 = ctx.r10.s64 + 12332;
	// lbz r11,586(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bne cr6,0x8992f1d8
	if (!ctx.cr6.eq) goto loc_8992F1D8;
	// addi r11,r27,651
	ctx.r11.s64 = ctx.r27.s64 + 651;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x8992f1d8
	if (ctx.cr6.eq) goto loc_8992F1D8;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r27,8
	ctx.r9.s64 = ctx.r27.s64 + 8;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r11,r8,7008
	ctx.r11.s64 = ctx.r8.s64 + 7008;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r11,11
	ctx.r6.s64 = ctx.r11.s64 + 11;
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// mulli r4,r5,30
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(30));
	// lbzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// bl 0x899362a0
	ctx.lr = 0x8992F1A8;
	sub_899362A0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8994c298
	ctx.lr = 0x8992F1B0;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8992f1c0
	if (ctx.cr6.eq) goto loc_8992F1C0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8994c368
	ctx.lr = 0x8992F1C0;
	sub_8994C368(ctx, base);
loc_8992F1C0:
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lwz r11,12076(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12076);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12076(r10)
	REX_STORE_U32(ctx.r10.u32 + 12076, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8992F1D8:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89963788
	ctx.lr = 0x8992F1E4;
	sub_89963788(ctx, base);
loc_8992F1E4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89931F68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x89931F70;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// addi r29,r11,25128
	ctx.r29.s64 = ctx.r11.s64 + 25128;
	// addi r19,r10,12744
	ctx.r19.s64 = ctx.r10.s64 + 12744;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r20,r9,9056
	ctx.r20.s64 = ctx.r9.s64 + 9056;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// addi r22,r29,12
	ctx.r22.s64 = ctx.r29.s64 + 12;
	// lis r26,32
	ctx.r26.s64 = 2097152;
	// lis r16,1
	ctx.r16.s64 = 65536;
	// lis r18,-30251
	ctx.r18.s64 = -1982529536;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// addi r21,r10,5184
	ctx.r21.s64 = ctx.r10.s64 + 5184;
loc_89931FBC:
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// sth r17,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r17.u16);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_89931FC8:
	// lwz r24,0(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x899320b4
	if (ctx.cr6.eq) goto loc_899320B4;
	// lhz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// extsh r3,r27
	ctx.r3.s64 = ctx.r27.s16;
	// addi r9,r29,604
	ctx.r9.s64 = ctx.r29.s64 + 604;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// rlwinm r5,r10,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// mulli r6,r3,696
	ctx.r6.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(696));
	// lhzx r5,r5,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// lhzx r4,r4,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// lwzx r7,r6,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r4,r29,620
	ctx.r4.s64 = ctx.r29.s64 + 620;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mullw r15,r9,r10
	ctx.r15.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwzx r9,r6,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// mullw r10,r5,r10
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// srawi r6,r15,8
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r15.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r8,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// stw r4,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// beq cr6,0x89932058
	if (ctx.cr6.eq) goto loc_89932058;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_89932058:
	// lwz r11,-12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + -12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89932094
	if (ctx.cr6.eq) goto loc_89932094;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x89932094
	if (!ctx.cr6.lt) goto loc_89932094;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r21,12
	ctx.r10.s64 = ctx.r21.s64 + 12;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// extsh r4,r25
	ctx.r4.s64 = ctx.r25.s16;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x89932090;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x899320b4
	goto loc_899320B4;
loc_89932094:
	// li r8,116
	ctx.r8.s64 = 116;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899d5240
	ctx.lr = 0x899320B0;
	sub_899D5240(ctx, base);
	// stw r17,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r17.u32);
loc_899320B4:
	// lhz r11,19184(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 19184);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x89931fc8
	if (!ctx.cr6.eq) goto loc_89931FC8;
	// addi r23,r23,180
	ctx.r23.s64 = ctx.r23.s64 + 180;
	// addi r11,r20,360
	ctx.r11.s64 = ctx.r20.s64 + 360;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r22,r22,696
	ctx.r22.s64 = ctx.r22.s64 + 696;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89931fbc
	if (ctx.cr6.lt) goto loc_89931FBC;
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// lhz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r19.u32 + 0);
	// lhz r11,2(r19)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r19.u32 + 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,3504(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 3504);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x89932148
	if (ctx.cr6.eq) goto loc_89932148;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r9,-9516(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -9516);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// bgt cr6,0x89932128
	if (ctx.cr6.gt) goto loc_89932128;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_89932128:
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
	// lwz r9,8420(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8420);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x89932160
	if (!ctx.cr6.lt) goto loc_89932160;
	// stw r9,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89932148:
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lwz r10,-9516(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -9516);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x89932160
	if (!ctx.cr6.gt) goto loc_89932160;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,-9516(r9)
	REX_STORE_U32(ctx.r9.u32 + -9516, ctx.r11.u32);
loc_89932160:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89933598) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4112(r1)
	ea = -4112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// addi r11,r1,15
	ctx.r11.s64 = ctx.r1.s64 + 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899335B0:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x899335b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899335B0;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r11,32560
	ctx.r9.s64 = ctx.r11.s64 + 32560;
loc_899335C8:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_899335D4:
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bge cr6,0x899335f4
	if (!ctx.cr6.lt) goto loc_899335F4;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// addi r5,r1,16
	ctx.r5.s64 = ctx.r1.s64 + 16;
	// stbx r7,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u8);
loc_899335F4:
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// lhzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bge cr6,0x89933610
	if (!ctx.cr6.lt) goto loc_89933610;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// addi r5,r1,16
	ctx.r5.s64 = ctx.r1.s64 + 16;
	// stbx r7,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u8);
loc_89933610:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lhzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bge cr6,0x8993362c
	if (!ctx.cr6.lt) goto loc_8993362C;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// addi r5,r1,16
	ctx.r5.s64 = ctx.r1.s64 + 16;
	// stbx r7,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u8);
loc_8993362C:
	// addi r10,r9,6
	ctx.r10.s64 = ctx.r9.s64 + 6;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x89933648
	if (!ctx.cr6.lt) goto loc_89933648;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
loc_89933648:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x899335d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899335D4;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// blt cr6,0x899335c8
	if (ctx.cr6.lt) goto loc_899335C8;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89933690
	if (ctx.cr6.eq) goto loc_89933690;
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
loc_89933670:
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993369c
	if (ctx.cr6.eq) goto loc_8993369C;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89933670
	if (!ctx.cr6.eq) goto loc_89933670;
loc_89933690:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// blr 
	return;
loc_8993369C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89934058) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,8200
	ctx.r11.s64 = ctx.r11.s64 + 8200;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r31,r9,r8
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89933598
	ctx.lr = 0x89934088;
	sub_89933598(ctx, base);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899340ac
	if (ctx.cr6.eq) goto loc_899340AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_899340AC:
	// lhz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899340cc
	if (ctx.cr6.eq) goto loc_899340CC;
loc_899340B8:
	// bl 0x89933df8
	ctx.lr = 0x899340BC;
	sub_89933DF8(ctx, base);
	// lhzu r3,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899340b8
	if (!ctx.cr6.eq) goto loc_899340B8;
loc_899340CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89934720) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89934728;
	__savegprlr_27(ctx, base);
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89934858
	if (ctx.cr6.eq) goto loc_89934858;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// addi r5,r11,32560
	ctx.r5.s64 = ctx.r11.s64 + 32560;
	// lhz r11,8528(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 8528);
	// li r28,4096
	ctx.r28.s64 = 4096;
	// lhz r9,7080(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 7080);
	// rotlwi r8,r11,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// rlwinm r30,r6,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r6,r8,36864
	ctx.r6.u64 = ctx.r8.u64 | 36864;
	// addi r31,r11,-31952
	ctx.r31.s64 = ctx.r11.s64 + -31952;
	// addi r3,r9,32032
	ctx.r3.s64 = ctx.r9.s64 + 32032;
loc_89934780:
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// li r9,0
	ctx.r9.s64 = 0;
loc_89934788:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8993479c
	if (!ctx.cr6.eq) goto loc_8993479C;
	// sthx r6,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u16);
loc_8993479C:
	// lhzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x899347ac
	if (!ctx.cr6.eq) goto loc_899347AC;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
loc_899347AC:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// blt cr6,0x89934788
	if (ctx.cr6.lt) goto loc_89934788;
	// lhzx r11,r30,r5
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r5.u32);
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x899347d4
	if (!ctx.cr6.eq) goto loc_899347D4;
	// sthx r11,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u16);
loc_899347D4:
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r7,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_899347F0:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r27,r11,r3
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x89934804
	if (!ctx.cr6.eq) goto loc_89934804;
	// sthx r6,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u16);
loc_89934804:
	// lhzx r27,r11,r31
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x89934814
	if (!ctx.cr6.eq) goto loc_89934814;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
loc_89934814:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// blt cr6,0x899347f0
	if (ctx.cr6.lt) goto loc_899347F0;
	// lhzx r11,r30,r5
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r5.u32);
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8993483c
	if (!ctx.cr6.eq) goto loc_8993483C;
	// sthx r11,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u16);
loc_8993483C:
	// sthx r28,r7,r5
	REX_STORE_U16(ctx.r7.u32 + ctx.r5.u32, ctx.r28.u16);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89934780
	if (!ctx.cr6.eq) goto loc_89934780;
loc_89934858:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89935688) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8993569c
	if (!ctx.cr6.eq) goto loc_8993569C;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// addi r6,r11,3484
	ctx.r6.s64 = ctx.r11.s64 + 3484;
loc_8993569C:
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899356ec
	if (!ctx.cr6.gt) goto loc_899356EC;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rlwinm r10,r11,16,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xC0000000;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_899356C0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// addi r5,r5,10
	ctx.r5.s64 = ctx.r5.s64 + 10;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899356c0
	if (ctx.cr6.lt) goto loc_899356C0;
loc_899356EC:
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// stw r31,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r31.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89935C28) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89935C30;
	__savegprlr_27(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,31,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r8,r10,255
	ctx.r8.s64 = ctx.r10.s64 + 255;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r31,r8,24
	ctx.r31.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// bne cr6,0x89935c64
	if (!ctx.cr6.eq) goto loc_89935C64;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// addi r6,r11,3484
	ctx.r6.s64 = ctx.r11.s64 + 3484;
loc_89935C64:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x89935cc8
	if (!ctx.cr6.gt) goto loc_89935CC8;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_89935C84:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// add r27,r11,r5
	ctx.r27.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// blt cr6,0x89935c84
	if (ctx.cr6.lt) goto loc_89935C84;
loc_89935CC8:
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// add. r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x89935d30
	if (!ctx.cr0.gt) goto loc_89935D30;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_89935CDC:
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// xoris r8,r7,16384
	ctx.r8.u64 = ctx.r7.u64 ^ 1073741824;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// blt cr6,0x89935cdc
	if (ctx.cr6.lt) goto loc_89935CDC;
loc_89935D30:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89936BB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addi r8,r11,25128
	ctx.r8.s64 = ctx.r11.s64 + 25128;
	// mulli r11,r3,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(696));
	// addi r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 + 12;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x89936be0
	if (ctx.cr6.lt) goto loc_89936BE0;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bge cr6,0x89936be0
	if (!ctx.cr6.lt) goto loc_89936BE0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_89936BE0:
	// addi r9,r8,28
	ctx.r9.s64 = ctx.r8.s64 + 28;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r5,-21584(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + -21584);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addis r7,r5,224
	ctx.r7.s64 = ctx.r5.s64 + 14680064;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x89936c08
	if (!ctx.cr6.gt) goto loc_89936C08;
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
loc_89936C08:
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r10,-3668
	ctx.r3.s64 = ctx.r10.s64 + -3668;
	// lhzx r10,r7,r3
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mulli r10,r7,696
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(696));
	// lwzx r3,r10,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x89936c44
	if (ctx.cr6.eq) goto loc_89936C44;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// subf r3,r5,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addis r10,r3,-16
	ctx.r10.s64 = ctx.r3.s64 + -1048576;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_89936C44:
	// lhzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,656
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 656, ctx.xer);
	// beq cr6,0x89936c88
	if (ctx.cr6.eq) goto loc_89936C88;
	// lhz r11,-21584(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + -21584);
	// addi r9,r10,-656
	ctx.r9.s64 = ctx.r10.s64 + -656;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r11,-432
	ctx.r8.s64 = ctx.r11.s64 + -432;
	// mullw r7,r8,r4
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r11,r7,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r7.s32 / ctx.r9.s32 : 0);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// andc r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r3.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x89936c8c
	if (!ctx.cr6.gt) goto loc_89936C8C;
loc_89936C88:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_89936C8C:
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lis r10,432
	ctx.r10.s64 = 28311552;
	// stw r11,-21584(r6)
	REX_STORE_U32(ctx.r6.u32 + -21584, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,432
	ctx.r11.s64 = 28311552;
	// stw r11,-21584(r6)
	REX_STORE_U32(ctx.r6.u32 + -21584, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89937F68) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89937F70;
	__savegprlr_27(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// lis r31,-30253
	ctx.r31.s64 = -1982660608;
	// stw r4,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// addi r30,r5,25056
	ctx.r30.s64 = ctx.r5.s64 + 25056;
	// stw r4,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// stw r4,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r4.u32);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lhz r10,25056(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 25056);
	// lhz r9,3620(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 3620);
	// addi r3,r3,3620
	ctx.r3.s64 = ctx.r3.s64 + 3620;
	// lhz r8,6420(r6)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + 6420);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// lhz r9,-9496(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + -9496);
	// lwz r7,3352(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 3352);
	// addi r4,r6,6420
	ctx.r4.s64 = ctx.r6.s64 + 6420;
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// subfic r8,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r8.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r6,2(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r8,25056(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 25056);
	// lhz r9,2(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// subf r5,r29,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r29.u64;
	// addi r4,r31,-9496
	ctx.r4.s64 = ctx.r31.s64 + -9496;
	// clrlwi r31,r10,27
	ctx.r31.u64 = ctx.r10.u32 & 0x1F;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// subf r28,r3,r5
	ctx.r28.u64 = ctx.r5.u64 - ctx.r3.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// lis r29,0
	ctx.r29.s64 = 0;
	// lhz r4,2(r4)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// subf r30,r3,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r3.u64;
	// ori r5,r29,65535
	ctx.r5.u64 = ctx.r29.u64 | 65535;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lwz r9,512(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 512);
	// subfic r31,r31,31
	ctx.xer.ca = ctx.r31.u32 <= 31;
	ctx.r31.u64 = static_cast<uint64_t>(31) - ctx.r31.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rlwinm r31,r7,16,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// rlwinm r7,r3,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// rlwinm r30,r30,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// subf r29,r10,r4
	ctx.r29.u64 = ctx.r4.u64 - ctx.r10.u64;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// add r28,r8,r7
	ctx.r28.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// subf r9,r30,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r30.u64;
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r29,r29,r5
	ctx.r29.u64 = ctx.r29.u64 + ctx.r5.u64;
	// add r5,r28,r3
	ctx.r5.u64 = ctx.r28.u64 + ctx.r3.u64;
	// subf r27,r3,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r3.u64;
	// or r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r5,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// or r4,r6,r31
	ctx.r4.u64 = ctx.r6.u64 | ctx.r31.u64;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// or r3,r6,r27
	ctx.r3.u64 = ctx.r6.u64 | ctx.r27.u64;
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// or r28,r10,r30
	ctx.r28.u64 = ctx.r10.u64 | ctx.r30.u64;
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// stw r3,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// stw r28,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// or r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r4,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// or r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 | ctx.r31.u64;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// or r5,r9,r27
	ctx.r5.u64 = ctx.r9.u64 | ctx.r27.u64;
	// stw r3,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// or r4,r6,r30
	ctx.r4.u64 = ctx.r6.u64 | ctx.r30.u64;
	// stw r8,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// stw r7,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// stw r5,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r5.u32);
	// stw r4,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89938BF8) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r4,-30273
	ctx.r4.s64 = -1983971328;
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// addi r7,r4,6420
	ctx.r7.s64 = ctx.r4.s64 + 6420;
	// lhz r10,-9496(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + -9496);
	// addi r6,r3,3620
	ctx.r6.s64 = ctx.r3.s64 + 3620;
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lhz r9,6420(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 6420);
	// lis r4,-30274
	ctx.r4.s64 = -1984036864;
	// lhz r8,3620(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 3620);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// lhz r7,2(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r9,2(r6)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// subf r3,r3,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r3.u64;
	// lwz r6,3352(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3352);
	// lwz r10,512(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 512);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// subf r4,r8,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r8.u64;
	// lwz r8,-9496(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + -9496);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// subf r6,r6,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r6.u64;
	// lwz r9,25056(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 25056);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// rlwimi r7,r6,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8993B5B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x8993B5B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,25128
	ctx.r28.s64 = ctx.r11.s64 + 25128;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r31,r28,661
	ctx.r31.s64 = ctx.r28.s64 + 661;
	// li r27,60
	ctx.r27.s64 = 60;
	// addi r30,r11,-3544
	ctx.r30.s64 = ctx.r11.s64 + -3544;
loc_8993B5D8:
	// lwz r11,-661(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -661);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8993b68c
	if (ctx.cr6.eq) goto loc_8993B68C;
	// lbz r10,-1(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + -1);
	// extsb r9,r29
	ctx.r9.s64 = ctx.r29.s8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8993b68c
	if (!ctx.cr6.eq) goto loc_8993B68C;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// subf. r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8993b60c
	if (!ctx.cr0.lt) goto loc_8993B60C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8993B60C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8993b62c
	if (!ctx.cr6.lt) goto loc_8993B62C;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993b630
	if (ctx.cr6.eq) goto loc_8993B630;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x8993b630
	goto loc_8993B630;
loc_8993B62C:
	// stb r27,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
loc_8993B630:
	// stb r10,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// lwz r8,-653(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -653);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// lwz r11,-645(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -645);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// rlwinm r3,r8,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r6,-649(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + -649);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r26,r6,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,-633(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + -633);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,-637(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + -637);
	// subfic r7,r7,116
	ctx.xer.ca = ctx.r7.u32 <= 116;
	ctx.r7.u64 = static_cast<uint64_t>(116) - ctx.r7.u64;
	// lwzx r25,r3,r9
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r3,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lwzx r11,r25,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8993afc0
	ctx.lr = 0x8993B68C;
	sub_8993AFC0(ctx, base);
loc_8993B68C:
	// addi r31,r31,696
	ctx.r31.s64 = ctx.r31.s64 + 696;
	// addi r11,r28,2053
	ctx.r11.s64 = ctx.r28.s64 + 2053;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8993b5d8
	if (ctx.cr6.lt) goto loc_8993B5D8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993C718) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,16416
	ctx.r11.s64 = 1075838976;
	// rlwinm r10,r9,0,1,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FE00000;
	// rlwinm r10,r10,0,10,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFC03FFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8993c7e4
	if (!ctx.cr6.eq) goto loc_8993C7E4;
	// rlwinm r11,r9,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8993c7e4
	if (!ctx.cr6.eq) goto loc_8993C7E4;
	// lbz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 202);
	// lbz r10,200(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 200);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8993c7e4
	if (ctx.cr6.lt) goto loc_8993C7E4;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addis r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -10485760;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8993c760
	if (!ctx.cr0.lt) goto loc_8993C760;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8993C760:
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8993c7e4
	if (!ctx.cr6.lt) goto loc_8993C7E4;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwz r8,52(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r7,r11,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf. r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8993c78c
	if (!ctx.cr0.lt) goto loc_8993C78C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8993C78C:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8993c7e4
	if (!ctx.cr6.lt) goto loc_8993C7E4;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8993c7e4
	if (ctx.cr6.eq) goto loc_8993C7E4;
	// rlwinm r11,r9,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993c7d4
	if (ctx.cr6.eq) goto loc_8993C7D4;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
loc_8993C7B8:
	// lhz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 148);
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8993c7b8
	if (!ctx.cr6.eq) goto loc_8993C7B8;
loc_8993C7D4:
	// lhz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 72);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8993C7E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8993D388) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8993D390;
	__savegprlr_29(ctx, base);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lhz r11,3696(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 3696);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8993d400
	if (ctx.cr6.lt) goto loc_8993D400;
	// beq cr6,0x8993d3d8
	if (ctx.cr6.eq) goto loc_8993D3D8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lwz r11,3700(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3700);
	// bge cr6,0x8993d41c
	if (!ctx.cr6.lt) goto loc_8993D41C;
	// addic. r11,r11,-4096
	ctx.xer.ca = ctx.r11.u32 > 4095;
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,3700(r10)
	REX_STORE_U32(ctx.r10.u32 + 3700, ctx.r11.u32);
	// bne 0x8993d41c
	if (!ctx.cr0.eq) goto loc_8993D41C;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,-2540(r7)
	REX_STORE_U32(ctx.r7.u32 + -2540, ctx.r10.u32);
	// b 0x8993d418
	goto loc_8993D418;
loc_8993D3D8:
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lwz r11,3700(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3700);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// stw r11,3700(r10)
	REX_STORE_U32(ctx.r10.u32 + 3700, ctx.r11.u32);
	// lwz r8,-2540(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + -2540);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8993d41c
	if (ctx.cr6.lt) goto loc_8993D41C;
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r10,3696(r9)
	REX_STORE_U16(ctx.r9.u32 + 3696, ctx.r10.u16);
	// b 0x8993d41c
	goto loc_8993D41C;
loc_8993D400:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lwz r11,-2540(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993d554
	if (ctx.cr6.eq) goto loc_8993D554;
	// lwz r11,3700(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3700);
	// li r8,1
	ctx.r8.s64 = 1;
loc_8993D418:
	// sth r8,3696(r9)
	REX_STORE_U16(ctx.r9.u32 + 3696, ctx.r8.u16);
loc_8993D41C:
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// srawi r8,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r10,3692(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 3692);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// sth r10,3692(r9)
	REX_STORE_U16(ctx.r9.u32 + 3692, ctx.r10.u16);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r6,r10,9016
	ctx.r6.s64 = ctx.r10.s64 + 9016;
	// lwz r10,7120(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 7120);
loc_8993D44C:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r9,3,22,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x3F8;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r31,r1,-288
	ctx.r31.s64 = ctx.r1.s64 + -288;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// lhzx r9,r4,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// mullw r4,r5,r8
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// srawi r9,r4,24
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 24;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// sthx r5,r3,r31
	REX_STORE_U16(ctx.r3.u32 + ctx.r31.u32, ctx.r5.u16);
	// blt cr6,0x8993d44c
	if (ctx.cr6.lt) goto loc_8993D44C;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// lis r5,383
	ctx.r5.s64 = 25100288;
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r6,8152(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8152);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,9520(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 9520);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// addi r11,r6,-32
	ctx.r11.s64 = ctx.r6.s64 + -32;
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// or r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 | ctx.r11.u64;
	// ori r5,r5,303
	ctx.r5.u64 = ctx.r5.u64 | 303;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// ori r8,r8,32896
	ctx.r8.u64 = ctx.r8.u64 | 32896;
	// stw r5,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r5.u32);
	// lis r30,768
	ctx.r30.s64 = 50331648;
	// stw r3,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stw r30,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r30.u32);
	// addi r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 + 28;
	// stw r8,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// rlwinm r7,r10,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// addi r5,r1,-288
	ctx.r5.s64 = ctx.r1.s64 + -288;
	// lis r3,383
	ctx.r3.s64 = 25100288;
loc_8993D500:
	// lhzx r7,r7,r5
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rotlwi r7,r7,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// oris r29,r10,768
	ctx.r29.u64 = ctx.r10.u64 | 50331648;
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,304
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 304, ctx.xer);
	// rlwinm r7,r30,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFE;
	// blt cr6,0x8993d500
	if (ctx.cr6.lt) goto loc_8993D500;
	// lis r10,-4096
	ctx.r10.s64 = -268435456;
	// stw r11,9520(r31)
	REX_STORE_U32(ctx.r31.u32 + 9520, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8993D554:
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899401F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89940200;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// addi r8,r11,27280
	ctx.r8.s64 = ctx.r11.s64 + 27280;
	// addi r5,r9,7384
	ctx.r5.s64 = ctx.r9.s64 + 7384;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r4,-30276
	ctx.r4.s64 = -1984167936;
	// lbz r10,27280(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 27280);
	// lbz r7,7384(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 7384);
	// addi r31,r6,25128
	ctx.r31.s64 = ctx.r6.s64 + 25128;
	// lbz r9,128(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 128);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lbz r6,128(r5)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r8,256(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 256);
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r11,32018(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 32018);
	// li r18,1
	ctx.r18.s64 = 1;
	// lbz r5,256(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 256);
	// lis r20,-30270
	ctx.r20.s64 = -1983774720;
	// stb r10,624(r31)
	REX_STORE_U8(ctx.r31.u32 + 624, ctx.r10.u8);
	// extsb r23,r11
	ctx.r23.s64 = ctx.r11.s8;
	// stb r9,625(r31)
	REX_STORE_U8(ctx.r31.u32 + 625, ctx.r9.u8);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// stb r8,626(r31)
	REX_STORE_U8(ctx.r31.u32 + 626, ctx.r8.u8);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// stb r7,1320(r31)
	REX_STORE_U8(ctx.r31.u32 + 1320, ctx.r7.u8);
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// stb r6,1321(r31)
	REX_STORE_U8(ctx.r31.u32 + 1321, ctx.r6.u8);
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// stb r5,1322(r31)
	REX_STORE_U8(ctx.r31.u32 + 1322, ctx.r5.u8);
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// lis r19,-30270
	ctx.r19.s64 = -1983774720;
	// addi r22,r11,12280
	ctx.r22.s64 = ctx.r11.s64 + 12280;
	// addi r31,r10,-31400
	ctx.r31.s64 = ctx.r10.s64 + -31400;
	// addi r21,r9,580
	ctx.r21.s64 = ctx.r9.s64 + 580;
	// addi r25,r8,19444
	ctx.r25.s64 = ctx.r8.s64 + 19444;
	// addi r24,r7,19492
	ctx.r24.s64 = ctx.r7.s64 + 19492;
	// addi r30,r6,3800
	ctx.r30.s64 = ctx.r6.s64 + 3800;
loc_899402A0:
	// addi r11,r27,10
	ctx.r11.s64 = ctx.r27.s64 + 10;
	// mulli r10,r23,13
	ctx.r10.s64 = static_cast<int64_t>(ctx.r23.u64 * static_cast<uint64_t>(13));
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r30,27
	ctx.r11.s64 = ctx.r30.s64 + 27;
	// rlwinm r29,r28,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x89940588
	if (ctx.cr6.eq) goto loc_89940588;
	// addi r26,r30,28
	ctx.r26.s64 = ctx.r30.s64 + 28;
	// lbzx r11,r29,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8994032c
	if (!ctx.cr6.lt) goto loc_8994032C;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8994031c
	if (ctx.cr6.eq) goto loc_8994031C;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// lwzx r8,r29,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwzx r7,r29,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwzx r6,r29,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// rlwinm r8,r8,0,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFC00;
	// rlwinm r7,r7,0,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFC00;
	// rlwinm r6,r6,0,0,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFC00;
	// addi r5,r8,118
	ctx.r5.s64 = ctx.r8.s64 + 118;
	// addi r4,r7,48
	ctx.r4.s64 = ctx.r7.s64 + 48;
	// addi r8,r6,49
	ctx.r8.s64 = ctx.r6.s64 + 49;
	// stwx r5,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r5.u32);
	// stwx r4,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r8,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r8.u32);
loc_8994031C:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,42
	ctx.r4.s64 = 42;
	// stbx r11,r29,r26
	REX_STORE_U8(ctx.r29.u32 + ctx.r26.u32, ctx.r11.u8);
	// bl 0x89936218
	ctx.lr = 0x8994032C;
	sub_89936218(ctx, base);
loc_8994032C:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r5,r27,r24
	ctx.r5.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r24.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899403bc
	if (ctx.cr6.eq) goto loc_899403BC;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
loc_89940358:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwimi r10,r11,1,22,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3E0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC1F);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// rlwinm r7,r11,0,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFC00;
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// addi r4,r31,512
	ctx.r4.s64 = ctx.r31.s64 + 512;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// addi r16,r31,516
	ctx.r16.s64 = ctx.r31.s64 + 516;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r15,r31,388
	ctx.r15.s64 = ctx.r31.s64 + 388;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r31,384
	ctx.r7.s64 = ctx.r31.s64 + 384;
	// stwx r10,r3,r4
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r10.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r14,r10,32
	ctx.r14.s64 = ctx.r10.s64 + 32;
	// addi r10,r10,33
	ctx.r10.s64 = ctx.r10.s64 + 33;
	// stwx r4,r3,r16
	REX_STORE_U32(ctx.r3.u32 + ctx.r16.u32, ctx.r4.u32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stwx r14,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r14.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r3,r15
	REX_STORE_U32(ctx.r3.u32 + ctx.r15.u32, ctx.r10.u32);
	// bne cr6,0x89940358
	if (!ctx.cr6.eq) goto loc_89940358;
loc_899403BC:
	// lwz r9,26936(r19)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r19.u32 + 26936);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stb r18,3(r22)
	REX_STORE_U8(ctx.r22.u32 + 3, ctx.r18.u8);
	// rlwinm r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// stb r18,4(r22)
	REX_STORE_U8(ctx.r22.u32 + 4, ctx.r18.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899403e8
	if (!ctx.cr6.eq) goto loc_899403E8;
	// lbzx r11,r29,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8994044c
	if (ctx.cr6.eq) goto loc_8994044C;
loc_899403E8:
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// addi r7,r31,512
	ctx.r7.s64 = ctx.r31.s64 + 512;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r31,516
	ctx.r6.s64 = ctx.r31.s64 + 516;
	// lwzx r4,r10,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,384
	ctx.r8.s64 = ctx.r31.s64 + 384;
	// clrlwi r16,r4,23
	ctx.r16.u64 = ctx.r4.u32 & 0x1FF;
	// rlwinm r11,r4,0,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFC00;
	// rlwinm r10,r16,0,23,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x1F0;
	// rlwinm r4,r16,1,27,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0x1E;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// addi r16,r31,388
	ctx.r16.s64 = ctx.r31.s64 + 388;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r7,r11,33
	ctx.r7.s64 = ctx.r11.s64 + 33;
	// stwx r4,r3,r6
	REX_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r4.u32);
	// stwx r10,r3,r8
	REX_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r7,r3,r16
	REX_STORE_U32(ctx.r3.u32 + ctx.r16.u32, ctx.r7.u32);
loc_8994044C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89940460
	if (!ctx.cr6.eq) goto loc_89940460;
	// lbzx r11,r29,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x899404c4
	if (ctx.cr6.eq) goto loc_899404C4;
loc_89940460:
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// addi r7,r31,512
	ctx.r7.s64 = ctx.r31.s64 + 512;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r6,r31,516
	ctx.r6.s64 = ctx.r31.s64 + 516;
	// lwzx r4,r10,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,384
	ctx.r8.s64 = ctx.r31.s64 + 384;
	// clrlwi r16,r4,23
	ctx.r16.u64 = ctx.r4.u32 & 0x1FF;
	// rlwinm r11,r4,0,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFC00;
	// rlwinm r10,r16,0,23,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x1F0;
	// rlwinm r4,r16,1,27,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0x1E;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// addi r16,r31,388
	ctx.r16.s64 = ctx.r31.s64 + 388;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stwx r11,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r7,r11,33
	ctx.r7.s64 = ctx.r11.s64 + 33;
	// stwx r4,r3,r6
	REX_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r4.u32);
	// stwx r10,r3,r8
	REX_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r7,r3,r16
	REX_STORE_U32(ctx.r3.u32 + ctx.r16.u32, ctx.r7.u32);
loc_899404C4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899404d8
	if (!ctx.cr6.eq) goto loc_899404D8;
	// lbzx r11,r29,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8994053c
	if (ctx.cr6.eq) goto loc_8994053C;
loc_899404D8:
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// addi r8,r31,512
	ctx.r8.s64 = ctx.r31.s64 + 512;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r31,516
	ctx.r7.s64 = ctx.r31.s64 + 516;
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// clrlwi r3,r6,23
	ctx.r3.u64 = ctx.r6.u32 & 0x1FF;
	// rlwinm r11,r6,0,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFC00;
	// rlwinm r10,r3,0,23,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1F0;
	// rlwinm r9,r3,1,27,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1E;
	// addi r6,r10,48
	ctx.r6.s64 = ctx.r10.s64 + 48;
	// addi r3,r31,388
	ctx.r3.s64 = ctx.r31.s64 + 388;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r5,r8
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// addi r6,r11,33
	ctx.r6.s64 = ctx.r11.s64 + 33;
	// stwx r9,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r9.u32);
	// stwx r8,r5,r4
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r8.u32);
	// stwx r6,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r6.u32);
loc_8994053C:
	// lbzx r11,r29,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x89940588
	if (!ctx.cr6.eq) goto loc_89940588;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x899405a8
	ctx.lr = 0x89940554;
	sub_899405A8(ctx, base);
	// mulli r11,r23,416
	ctx.r11.s64 = static_cast<int64_t>(ctx.r23.u64 * static_cast<uint64_t>(416));
	// addi r10,r30,348
	ctx.r10.s64 = ctx.r30.s64 + 348;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x89940588
	if (!ctx.cr6.eq) goto loc_89940588;
	// addi r10,r30,380
	ctx.r10.s64 = ctx.r30.s64 + 380;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x89940588
	if (!ctx.cr6.eq) goto loc_89940588;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r18,r23,r21
	REX_STORE_U8(ctx.r23.u32 + ctx.r21.u32, ctx.r18.u8);
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// stw r11,3892(r20)
	REX_STORE_U32(ctx.r20.u32 + 3892, ctx.r11.u32);
loc_89940588:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x899402a0
	if (ctx.cr6.lt) goto loc_899402A0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89943898) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899438A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r8,16319
	ctx.r8.s64 = 1069481984;
	// addi r19,r11,25128
	ctx.r19.s64 = ctx.r11.s64 + 25128;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r7,16576
	ctx.r7.s64 = 1086324736;
	// lis r6,32639
	ctx.r6.s64 = 2139029504;
	// lis r5,-32640
	ctx.r5.s64 = -2139095040;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r15,0
	ctx.r15.s64 = 0;
	// addi r21,r19,8
	ctx.r21.s64 = ctx.r19.s64 + 8;
	// ori r22,r8,49152
	ctx.r22.u64 = ctx.r8.u64 | 49152;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r16,r7,16384
	ctx.r16.u64 = ctx.r7.u64 | 16384;
	// ori r20,r6,32768
	ctx.r20.u64 = ctx.r6.u64 | 32768;
	// ori r18,r5,32768
	ctx.r18.u64 = ctx.r5.u64 | 32768;
	// addi r31,r11,5344
	ctx.r31.s64 = ctx.r11.s64 + 5344;
	// addi r27,r10,12280
	ctx.r27.s64 = ctx.r10.s64 + 12280;
	// addi r30,r9,-31400
	ctx.r30.s64 = ctx.r9.s64 + -31400;
loc_899438F4:
	// addi r8,r31,-9576
	ctx.r8.s64 = ctx.r31.s64 + -9576;
	// lbz r7,-9660(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + -9660);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// addi r10,r31,-9660
	ctx.r10.s64 = ctx.r31.s64 + -9660;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r6,r17,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r8.u32);
	// extsb r23,r6
	ctx.r23.s64 = ctx.r6.s8;
	// addi r8,r23,19
	ctx.r8.s64 = ctx.r23.s64 + 19;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// rlwinm r5,r6,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// beq cr6,0x89943944
	if (ctx.cr6.eq) goto loc_89943944;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994392C:
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r4,r22,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r22.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwu r4,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994392c
	if (!ctx.cr6.eq) goto loc_8994392C;
loc_89943944:
	// lwz r9,0(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stbx r25,r6,r27
	REX_STORE_U8(ctx.r6.u32 + ctx.r27.u32, ctx.r25.u8);
	// rlwinm r8,r9,30,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3C;
	// lwz r4,580(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 580);
	// rlwinm r29,r9,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r10,r7,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r3,r9,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stbx r25,r7,r27
	REX_STORE_U8(ctx.r7.u32 + ctx.r27.u32, ctx.r25.u8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r8,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lwzx r8,r29,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899439d0
	if (ctx.cr6.eq) goto loc_899439D0;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r30,36
	ctx.r9.s64 = ctx.r30.s64 + 36;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899439cc
	if (ctx.cr6.eq) goto loc_899439CC;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_899439B4:
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899439b4
	if (!ctx.cr6.eq) goto loc_899439B4;
loc_899439CC:
	// stbx r25,r6,r27
	REX_STORE_U8(ctx.r6.u32 + ctx.r27.u32, ctx.r25.u8);
loc_899439D0:
	// addi r8,r23,18
	ctx.r8.s64 = ctx.r23.s64 + 18;
	// lbz r11,-9656(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -9656);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r6,r7,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r31,-9656
	ctx.r10.s64 = ctx.r31.s64 + -9656;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// beq cr6,0x89943a14
	if (ctx.cr6.eq) goto loc_89943A14;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_899439FC:
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r22,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r22.u64;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899439fc
	if (!ctx.cr6.eq) goto loc_899439FC;
loc_89943A14:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stbx r25,r7,r27
	REX_STORE_U8(ctx.r7.u32 + ctx.r27.u32, ctx.r25.u8);
	// addi r9,r23,17
	ctx.r9.s64 = ctx.r23.s64 + 17;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r5,-9652(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + -9652);
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r7,r11,30,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3C;
	// rlwinm r6,r11,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// stbx r25,r8,r27
	REX_STORE_U8(ctx.r8.u32 + ctx.r27.u32, ctx.r25.u8);
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r28,r7,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// lwzx r26,r6,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r6,r8,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r11,r31,-9652
	ctx.r11.s64 = ctx.r31.s64 + -9652;
	// beq cr6,0x89943a90
	if (ctx.cr6.eq) goto loc_89943A90;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
loc_89943A78:
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// subf r5,r22,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r22.u64;
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89943a78
	if (!ctx.cr6.eq) goto loc_89943A78;
loc_89943A90:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stbx r25,r8,r27
	REX_STORE_U8(ctx.r8.u32 + ctx.r27.u32, ctx.r25.u8);
	// addi r9,r23,16
	ctx.r9.s64 = ctx.r23.s64 + 16;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r5,-9648(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + -9648);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r7,r11,30,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3C;
	// rlwinm r6,r11,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// stbx r25,r8,r27
	REX_STORE_U8(ctx.r8.u32 + ctx.r27.u32, ctx.r25.u8);
	// lwzx r8,r7,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r29,r6,r31
	ctx.r29.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// rlwinm r7,r6,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r8,r31,-9648
	ctx.r8.s64 = ctx.r31.s64 + -9648;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89943b10
	if (ctx.cr6.eq) goto loc_89943B10;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_89943AF8:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// subf r7,r22,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r22.u64;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89943af8
	if (!ctx.cr6.eq) goto loc_89943AF8;
loc_89943B10:
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stbx r25,r6,r27
	REX_STORE_U8(ctx.r6.u32 + ctx.r27.u32, ctx.r25.u8);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x89943dd4
	if (ctx.cr6.eq) goto loc_89943DD4;
loc_89943B34:
	// lhz r7,2(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x89943be0
	if (ctx.cr6.eq) goto loc_89943BE0;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsb r7,r29
	ctx.r7.s64 = ctx.r29.s8;
	// subf r6,r8,r23
	ctx.r6.u64 = ctx.r23.u64 - ctx.r8.u64;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// addi r5,r6,16
	ctx.r5.s64 = ctx.r6.s64 + 16;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// rlwinm r3,r10,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r10,28,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFF;
	// stbx r25,r5,r27
	REX_STORE_U8(ctx.r5.u32 + ctx.r27.u32, ctx.r25.u8);
	// rlwinm r5,r10,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r28,r3,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r3,r3,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r5,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// lwzx r8,r28,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r4,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r4.u32);
	// stw r8,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// stw r3,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r3.u32);
	// bne cr6,0x89943dc4
	if (!ctx.cr6.eq) goto loc_89943DC4;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb r29,r10
	ctx.r29.s64 = ctx.r10.s8;
	// b 0x89943dc4
	goto loc_89943DC4;
loc_89943BE0:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// lbz r28,-9572(r31)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + -9572);
	// extsb r3,r29
	ctx.r3.s64 = ctx.r29.s8;
	// subf r7,r10,r23
	ctx.r7.u64 = ctx.r23.u64 - ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// addi r4,r8,9
	ctx.r4.s64 = ctx.r8.s64 + 9;
	// rlwinm r5,r6,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// extsb r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r4,r31,-9572
	ctx.r4.s64 = ctx.r31.s64 + -9572;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// beq cr6,0x89943c44
	if (ctx.cr6.eq) goto loc_89943C44;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
loc_89943C2C:
	// lbzu r28,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// subf r26,r20,r11
	ctx.r26.u64 = ctx.r11.u64 - ctx.r20.u64;
	// extsb r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	// stwu r26,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r5.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89943c2c
	if (!ctx.cr6.eq) goto loc_89943C2C;
loc_89943C44:
	// stbx r25,r6,r27
	REX_STORE_U8(ctx.r6.u32 + ctx.r27.u32, ctx.r25.u8);
	// addi r11,r8,5
	ctx.r11.s64 = ctx.r8.s64 + 5;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// stbx r25,r5,r27
	REX_STORE_U8(ctx.r5.u32 + ctx.r27.u32, ctx.r25.u8);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r7,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r4,28,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFF;
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r28,r6,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r6,30,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3C;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r7,r4,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r4,r28,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r7,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// stw r4,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r4.u32);
	// stw r6,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// bne cr6,0x89943ccc
	if (!ctx.cr6.eq) goto loc_89943CCC;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_89943CCC:
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r7,2(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x89943d20
	if (!ctx.cr6.eq) goto loc_89943D20;
	// li r10,0
	ctx.r10.s64 = 0;
loc_89943CF0:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lhz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lhz r5,2(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x89943cf0
	if (ctx.cr6.eq) goto loc_89943CF0;
loc_89943D20:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r8,r29
	ctx.r8.s64 = ctx.r29.s8;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// subf r9,r10,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r10.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// rlwinm r4,r5,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r3,r4,28,20,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFF;
	// stbx r25,r7,r27
	REX_STORE_U8(ctx.r7.u32 + ctx.r27.u32, ctx.r25.u8);
	// rlwinm r7,r5,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r5,r4,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r4,r3,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r3,r3,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// extsb r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r5,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r5.u32);
	// stw r4,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r4.u32);
	// stw r3,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r3.u32);
	// bne cr6,0x89943dc0
	if (!ctx.cr6.eq) goto loc_89943DC0;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb r29,r10
	ctx.r29.s64 = ctx.r10.s8;
loc_89943DC0:
	// addi r9,r6,2
	ctx.r9.s64 = ctx.r6.s64 + 2;
loc_89943DC4:
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89943b34
	if (!ctx.cr6.eq) goto loc_89943B34;
loc_89943DD4:
	// lbz r29,32(r21)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r21.u32 + 32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x89944060
	if (ctx.cr6.eq) goto loc_89944060;
	// addi r9,r23,13
	ctx.r9.s64 = ctx.r23.s64 + 13;
	// lbz r11,-9644(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -9644);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r4,r3,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r31,-9644
	ctx.r10.s64 = ctx.r31.s64 + -9644;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// beq cr6,0x89943e24
	if (ctx.cr6.eq) goto loc_89943E24;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_89943E0C:
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r6,r22,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r22.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89943e0c
	if (!ctx.cr6.eq) goto loc_89943E0C;
loc_89943E24:
	// lbz r8,33(r21)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r21.u32 + 33);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// lbz r7,-9580(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + -9580);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stbx r25,r3,r27
	REX_STORE_U8(ctx.r3.u32 + ctx.r27.u32, ctx.r25.u8);
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// stbx r25,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r25.u8);
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r28,r5,30,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// rlwinm r26,r5,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// addi r5,r31,-9580
	ctx.r5.s64 = ctx.r31.s64 + -9580;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lwzx r28,r28,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r4,r26,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// beq cr6,0x89943e9c
	if (ctx.cr6.eq) goto loc_89943E9C;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_89943E84:
	// lbzu r6,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// subf r4,r22,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r22.u64;
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89943e84
	if (!ctx.cr6.eq) goto loc_89943E84;
loc_89943E9C:
	// rlwinm r7,r29,30,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3C;
	// stbx r25,r3,r27
	REX_STORE_U8(ctx.r3.u32 + ctx.r27.u32, ctx.r25.u8);
	// rlwinm r5,r29,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// stbx r25,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r25.u8);
	// addi r10,r30,40
	ctx.r10.s64 = ctx.r30.s64 + 40;
	// lbz r6,-9620(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + -9620);
	// addi r24,r23,12
	ctx.r24.s64 = ctx.r23.s64 + 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r3,r7,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// extsb r7,r24
	ctx.r7.s64 = ctx.r24.s8;
	// lwzx r11,r5,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// rlwinm r4,r7,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// stw r3,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r10,r31,-9620
	ctx.r10.s64 = ctx.r31.s64 + -9620;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// beq cr6,0x89943f0c
	if (ctx.cr6.eq) goto loc_89943F0C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_89943EF4:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r22,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r22.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89943ef4
	if (!ctx.cr6.eq) goto loc_89943EF4;
loc_89943F0C:
	// addi r26,r23,11
	ctx.r26.s64 = ctx.r23.s64 + 11;
	// lbz r11,-9612(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -9612);
	// stbx r25,r7,r27
	REX_STORE_U8(ctx.r7.u32 + ctx.r27.u32, ctx.r25.u8);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// extsb r9,r26
	ctx.r9.s64 = ctx.r26.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r7,r9,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r31,-9612
	ctx.r10.s64 = ctx.r31.s64 + -9612;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// beq cr6,0x89943f54
	if (ctx.cr6.eq) goto loc_89943F54;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_89943F3C:
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r22,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r22.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwu r5,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89943f3c
	if (!ctx.cr6.eq) goto loc_89943F3C;
loc_89943F54:
	// addi r28,r23,10
	ctx.r28.s64 = ctx.r23.s64 + 10;
	// stbx r25,r9,r27
	REX_STORE_U8(ctx.r9.u32 + ctx.r27.u32, ctx.r25.u8);
	// lbz r11,-9636(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -9636);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// extsb r9,r28
	ctx.r9.s64 = ctx.r28.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r7,r9,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r31,-9636
	ctx.r10.s64 = ctx.r31.s64 + -9636;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// beq cr6,0x89943f9c
	if (ctx.cr6.eq) goto loc_89943F9C;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_89943F84:
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r22,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r22.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwu r5,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89943f84
	if (!ctx.cr6.eq) goto loc_89943F84;
loc_89943F9C:
	// addi r29,r23,9
	ctx.r29.s64 = ctx.r23.s64 + 9;
	// lbz r11,-9628(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -9628);
	// stbx r25,r9,r27
	REX_STORE_U8(ctx.r9.u32 + ctx.r27.u32, ctx.r25.u8);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// extsb r7,r29
	ctx.r7.s64 = ctx.r29.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r31,-9628
	ctx.r10.s64 = ctx.r31.s64 + -9628;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x89943fe4
	if (ctx.cr6.eq) goto loc_89943FE4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89943FCC:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r22,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r22.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89943fcc
	if (!ctx.cr6.eq) goto loc_89943FCC;
loc_89943FE4:
	// add r11,r15,r6
	ctx.r11.u64 = ctx.r15.u64 + ctx.r6.u64;
	// stbx r25,r7,r27
	REX_STORE_U8(ctx.r7.u32 + ctx.r27.u32, ctx.r25.u8);
	// addi r10,r19,180
	ctx.r10.s64 = ctx.r19.s64 + 180;
	// rlwinm r14,r11,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,6
	ctx.r5.s64 = 6;
	// extsh r4,r24
	ctx.r4.s64 = ctx.r24.s16;
	// lwzx r9,r14,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r10.u32);
	// srawi r8,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 15;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// bl 0x89931c78
	ctx.lr = 0x8994400C;
	sub_89931C78(ctx, base);
	// addi r7,r19,248
	ctx.r7.s64 = ctx.r19.s64 + 248;
	// li r5,6
	ctx.r5.s64 = 6;
	// extsh r4,r26
	ctx.r4.s64 = ctx.r26.s16;
	// lwzx r6,r14,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r7.u32);
	// srawi r3,r6,15
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 15;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// bl 0x89931c78
	ctx.lr = 0x89944028;
	sub_89931C78(ctx, base);
	// addi r11,r19,44
	ctx.r11.s64 = ctx.r19.s64 + 44;
	// li r5,6
	ctx.r5.s64 = 6;
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// lwzx r10,r14,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r11.u32);
	// srawi r9,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 15;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// bl 0x89931c78
	ctx.lr = 0x89944044;
	sub_89931C78(ctx, base);
	// addi r8,r19,112
	ctx.r8.s64 = ctx.r19.s64 + 112;
	// li r5,6
	ctx.r5.s64 = 6;
	// extsh r4,r29
	ctx.r4.s64 = ctx.r29.s16;
	// lwzx r7,r14,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r8.u32);
	// srawi r6,r7,15
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 15;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// bl 0x89931c78
	ctx.lr = 0x89944060;
	sub_89931C78(ctx, base);
loc_89944060:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,580(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 580);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,4(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r29,4(r8)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899440e8
	if (ctx.cr6.eq) goto loc_899440E8;
	// addi r10,r23,8
	ctx.r10.s64 = ctx.r23.s64 + 8;
	// lbz r11,-9596(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -9596);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r8,r4,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r10,r31,-9596
	ctx.r10.s64 = ctx.r31.s64 + -9596;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x899440d4
	if (ctx.cr6.eq) goto loc_899440D4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_899440BC:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r6,r22,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r22.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899440bc
	if (!ctx.cr6.eq) goto loc_899440BC;
loc_899440D4:
	// stbx r25,r7,r27
	REX_STORE_U8(ctx.r7.u32 + ctx.r27.u32, ctx.r25.u8);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x89927b98
	ctx.lr = 0x899440E8;
	sub_89927B98(ctx, base);
loc_899440E8:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8994415c
	if (ctx.cr6.eq) goto loc_8994415C;
	// addi r10,r23,7
	ctx.r10.s64 = ctx.r23.s64 + 7;
	// lbz r11,-9588(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -9588);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r4,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r10,r31,-9588
	ctx.r10.s64 = ctx.r31.s64 + -9588;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x89944148
	if (ctx.cr6.eq) goto loc_89944148;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89944130:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r6,r22,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r22.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89944130
	if (!ctx.cr6.eq) goto loc_89944130;
loc_89944148:
	// stbx r25,r7,r27
	REX_STORE_U8(ctx.r7.u32 + ctx.r27.u32, ctx.r25.u8);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x89927b98
	ctx.lr = 0x8994415C;
	sub_89927B98(ctx, base);
loc_8994415C:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899441d0
	if (ctx.cr6.eq) goto loc_899441D0;
	// addi r10,r23,6
	ctx.r10.s64 = ctx.r23.s64 + 6;
	// lbz r11,-9604(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -9604);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r4,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r10,r31,-9604
	ctx.r10.s64 = ctx.r31.s64 + -9604;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x899441bc
	if (ctx.cr6.eq) goto loc_899441BC;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_899441A4:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r6,r22,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r22.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899441a4
	if (!ctx.cr6.eq) goto loc_899441A4;
loc_899441BC:
	// stbx r25,r7,r27
	REX_STORE_U8(ctx.r7.u32 + ctx.r27.u32, ctx.r25.u8);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x89927b98
	ctx.lr = 0x899441D0;
	sub_89927B98(ctx, base);
loc_899441D0:
	// addi r21,r21,696
	ctx.r21.s64 = ctx.r21.s64 + 696;
	// addi r11,r19,1400
	ctx.r11.s64 = ctx.r19.s64 + 1400;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r15,r15,174
	ctx.r15.s64 = ctx.r15.s64 + 174;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899438f4
	if (ctx.cr6.lt) goto loc_899438F4;
	// lbz r11,-9568(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -9568);
	// lis r8,16448
	ctx.r8.s64 = 1077936128;
	// addi r9,r31,-9568
	ctx.r9.s64 = ctx.r31.s64 + -9568;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r30,2692
	ctx.r10.s64 = ctx.r30.s64 + 2692;
	// ori r8,r8,49152
	ctx.r8.u64 = ctx.r8.u64 | 49152;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89944224
	if (ctx.cr6.eq) goto loc_89944224;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8994420C:
	// lbzu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994420c
	if (!ctx.cr6.eq) goto loc_8994420C;
loc_89944224:
	// lbz r11,-9564(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -9564);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r10,r31,-9564
	ctx.r10.s64 = ctx.r31.s64 + -9564;
	// stb r25,21(r27)
	REX_STORE_U8(ctx.r27.u32 + 21, ctx.r25.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r9,r30,2564
	ctx.r9.s64 = ctx.r30.s64 + 2564;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89944260
	if (ctx.cr6.eq) goto loc_89944260;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89944248:
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89944248
	if (!ctx.cr6.eq) goto loc_89944248;
loc_89944260:
	// lwz r10,24(r19)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 24);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r11,720(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 720);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stb r25,20(r27)
	REX_STORE_U8(ctx.r27.u32 + 20, ctx.r25.u8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// bl 0x89931c78
	ctx.lr = 0x89944288;
	sub_89931C78(ctx, base);
	// lwz r11,724(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 724);
	// lwz r10,28(r19)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 28);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,20
	ctx.r4.s64 = 20;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r8,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 16;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// bl 0x89931c78
	ctx.lr = 0x899442A8;
	sub_89931C78(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8994BF28) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x8994BF30;
	__savegprlr_25(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// lbz r11,6046(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6046);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lbz r3,-31405(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + -31405);
	// addi r5,r8,520
	ctx.r5.s64 = ctx.r8.s64 + 520;
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r11,12271(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 12271);
	// lbz r10,4947(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 4947);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// lbz r9,520(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 520);
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// lbz r8,7934(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 7934);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lbz r11,1(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// or r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 | ctx.r7.u64;
	// lbz r7,-21388(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + -21388);
	// addi r3,r3,-21388
	ctx.r3.s64 = ctx.r3.s64 + -21388;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lis r29,-30273
	ctx.r29.s64 = -1983971328;
	// lbz r6,6052(r5)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 6052);
	// or r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r5,r5,6052
	ctx.r5.s64 = ctx.r5.s64 + 6052;
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lis r30,-30274
	ctx.r30.s64 = -1984036864;
	// lbz r8,6055(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 6055);
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r4,-25514(r29)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + -25514);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lbz r9,1(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// or r25,r31,r3
	ctx.r25.u64 = ctx.r31.u64 | ctx.r3.u64;
	// lbz r5,539(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 539);
	// lis r26,-30275
	ctx.r26.s64 = -1984102400;
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// lwz r11,20396(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20396);
	// rotlwi r7,r7,4
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// or r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 | ctx.r29.u64;
	// rlwinm r27,r25,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r25,r10,4
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// lbz r3,12799(r26)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r26.u32 + 12799);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lbz r31,12322(r30)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r30.u32 + 12322);
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r30,r28,12280
	ctx.r30.s64 = ctx.r28.s64 + 12280;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r9,12280(r28)
	REX_STORE_U8(ctx.r28.u32 + 12280, ctx.r9.u8);
	// lwz r10,12636(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12636);
	// or r9,r25,r26
	ctx.r9.u64 = ctx.r25.u64 | ctx.r26.u64;
	// rotlwi r7,r3,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// or r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 | ctx.r10.u64;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// stb r9,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// lis r9,-30247
	ctx.r9.s64 = -1982267392;
	// stb r3,17(r30)
	REX_STORE_U8(ctx.r30.u32 + 17, ctx.r3.u8);
	// rlwinm r11,r29,2,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFC;
	// rotlwi r5,r5,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 4);
	// stb r11,2(r30)
	REX_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
	// or r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 | ctx.r8.u64;
	// lwz r11,3796(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3796);
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lwz r10,19360(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 19360);
	// or r4,r7,r31
	ctx.r4.u64 = ctx.r7.u64 | ctx.r31.u64;
	// stb r8,5(r30)
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r8.u8);
	// stb r5,3(r30)
	REX_STORE_U8(ctx.r30.u32 + 3, ctx.r5.u8);
	// stb r4,4(r30)
	REX_STORE_U8(ctx.r30.u32 + 4, ctx.r4.u8);
	// stb r11,16(r30)
	REX_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// stb r10,18(r30)
	REX_STORE_U8(ctx.r30.u32 + 18, ctx.r10.u8);
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8994C440) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8994C448;
	__savegprlr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r7,r9,-2532
	ctx.r7.s64 = ctx.r9.s64 + -2532;
	// lwz r31,3528(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 3528);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lbz r11,4947(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4947);
	// lis r5,-30269
	ctx.r5.s64 = -1983709184;
	// addi r4,r6,11744
	ctx.r4.s64 = ctx.r6.s64 + 11744;
	// lbz r10,8419(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 8419);
	// addi r3,r5,-10772
	ctx.r3.s64 = ctx.r5.s64 + -10772;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r30,-30253
	ctx.r30.s64 = -1982660608;
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r29,r8,20412
	ctx.r29.s64 = ctx.r8.s64 + 20412;
	// lbz r11,-2532(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + -2532);
	// addi r9,r30,-9484
	ctx.r9.s64 = ctx.r30.s64 + -9484;
	// stb r11,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lis r28,-30269
	ctx.r28.s64 = -1983709184;
	// lbz r11,1(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r7,r28,-21296
	ctx.r7.s64 = ctx.r28.s64 + -21296;
	// stb r11,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lbz r11,11744(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 11744);
	// addi r6,r27,20428
	ctx.r6.s64 = ctx.r27.s64 + 20428;
	// stb r11,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// lis r26,-30242
	ctx.r26.s64 = -1981939712;
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// addi r4,r26,-21372
	ctx.r4.s64 = ctx.r26.s64 + -21372;
	// stb r10,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stb r11,4(r31)
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// lis r25,-30275
	ctx.r25.s64 = -1984102400;
	// lbz r11,-10772(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + -10772);
	// lis r5,-30274
	ctx.r5.s64 = -1984036864;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// lis r24,-30275
	ctx.r24.s64 = -1984102400;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lis r3,-30273
	ctx.r3.s64 = -1983971328;
	// stb r11,13(r31)
	REX_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
	// lis r23,-30275
	ctx.r23.s64 = -1984102400;
	// lbz r11,20412(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 20412);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// stb r11,14(r31)
	REX_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
	// lis r22,-30253
	ctx.r22.s64 = -1982660608;
	// lbz r11,1(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// addi r29,r22,-9500
	ctx.r29.s64 = ctx.r22.s64 + -9500;
	// stb r11,15(r31)
	REX_STORE_U8(ctx.r31.u32 + 15, ctx.r11.u8);
	// lbz r11,-9484(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + -9484);
	// stb r11,16(r31)
	REX_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// lbz r11,1(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// stb r11,17(r31)
	REX_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// lbz r11,-21296(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + -21296);
	// stb r11,18(r31)
	REX_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
	// lbz r11,1(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// stb r11,19(r31)
	REX_STORE_U8(ctx.r31.u32 + 19, ctx.r11.u8);
	// lbz r11,20428(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 20428);
	// stb r11,20(r31)
	REX_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// lbz r11,1(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// stb r11,21(r31)
	REX_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// lbz r11,-21372(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + -21372);
	// stb r11,22(r31)
	REX_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// stb r11,23(r31)
	REX_STORE_U8(ctx.r31.u32 + 23, ctx.r11.u8);
	// lbz r11,6055(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 6055);
	// stb r11,24(r31)
	REX_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// lbz r11,7934(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 7934);
	// stb r11,25(r31)
	REX_STORE_U8(ctx.r31.u32 + 25, ctx.r11.u8);
	// lbz r11,539(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 539);
	// lbz r10,12270(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 12270);
	// stb r11,26(r31)
	REX_STORE_U8(ctx.r31.u32 + 26, ctx.r11.u8);
	// lbz r11,-25514(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + -25514);
	// stb r11,27(r31)
	REX_STORE_U8(ctx.r31.u32 + 27, ctx.r11.u8);
	// lbz r11,12799(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 12799);
	// stb r11,28(r31)
	REX_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// lbz r11,12322(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 12322);
	// stb r10,30(r31)
	REX_STORE_U8(ctx.r31.u32 + 30, ctx.r10.u8);
	// stb r11,29(r31)
	REX_STORE_U8(ctx.r31.u32 + 29, ctx.r11.u8);
	// lbz r11,-9500(r22)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + -9500);
	// stb r11,31(r31)
	REX_STORE_U8(ctx.r31.u32 + 31, ctx.r11.u8);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lbz r11,1(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// stb r11,32(r31)
	REX_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// addi r5,r7,7932
	ctx.r5.s64 = ctx.r7.s64 + 7932;
	// lbz r11,7932(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 7932);
	// addi r4,r6,6400
	ctx.r4.s64 = ctx.r6.s64 + 6400;
	// stb r11,33(r31)
	REX_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
	// lis r3,-30276
	ctx.r3.s64 = -1984167936;
	// lbz r11,1(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// stb r11,34(r31)
	REX_STORE_U8(ctx.r31.u32 + 34, ctx.r11.u8);
	// lis r9,-30273
	ctx.r9.s64 = -1983971328;
	// lbz r11,6400(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 6400);
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// lbz r10,32554(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 32554);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lwz r3,6420(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 6420);
	// lis r27,-30275
	ctx.r27.s64 = -1984102400;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// stb r11,35(r31)
	REX_STORE_U8(ctx.r31.u32 + 35, ctx.r11.u8);
	// lis r26,-30274
	ctx.r26.s64 = -1984036864;
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// stb r10,37(r31)
	REX_STORE_U8(ctx.r31.u32 + 37, ctx.r10.u8);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// stb r11,36(r31)
	REX_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// lis r25,-30253
	ctx.r25.s64 = -1982660608;
	// lbz r11,12271(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 12271);
	// lis r24,-30274
	ctx.r24.s64 = -1984036864;
	// stb r11,38(r31)
	REX_STORE_U8(ctx.r31.u32 + 38, ctx.r11.u8);
	// lis r23,-30251
	ctx.r23.s64 = -1982529536;
	// lbz r11,-31405(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + -31405);
	// lis r22,-30270
	ctx.r22.s64 = -1983774720;
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lis r21,-30274
	ctx.r21.s64 = -1984036864;
	// lwz r30,25056(r8)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 25056);
	// lis r20,-30270
	ctx.r20.s64 = -1983774720;
	// lwz r29,-9496(r7)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + -9496);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lbz r9,12274(r27)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 12274);
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// lbz r8,12326(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 12326);
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// lwz r7,512(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 512);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// stw r29,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// stb r9,40(r31)
	REX_STORE_U8(ctx.r31.u32 + 40, ctx.r9.u8);
	// lwz r6,3352(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 3352);
	// stb r8,41(r31)
	REX_STORE_U8(ctx.r31.u32 + 41, ctx.r8.u8);
	// stw r7,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// lwz r5,12792(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12792);
	// lwz r4,3620(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 3620);
	// stw r6,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// stb r11,39(r31)
	REX_STORE_U8(ctx.r31.u32 + 39, ctx.r11.u8);
	// stw r5,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// stw r4,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// lhz r11,536(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 536);
	// sth r11,72(r31)
	REX_STORE_U16(ctx.r31.u32 + 72, ctx.r11.u16);
	// lhz r11,19184(r23)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 19184);
	// sth r11,74(r31)
	REX_STORE_U16(ctx.r31.u32 + 74, ctx.r11.u16);
	// lhz r11,12600(r22)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r22.u32 + 12600);
	// sth r11,76(r31)
	REX_STORE_U16(ctx.r31.u32 + 76, ctx.r11.u16);
	// lhz r11,584(r21)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 584);
	// sth r11,78(r31)
	REX_STORE_U16(ctx.r31.u32 + 78, ctx.r11.u16);
	// lhz r11,20416(r20)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 20416);
	// sth r11,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// lhz r11,8416(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 8416);
	// sth r11,82(r31)
	REX_STORE_U16(ctx.r31.u32 + 82, ctx.r11.u16);
	// lhz r11,-9540(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + -9540);
	// sth r11,84(r31)
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r11.u16);
	// lhz r11,25060(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 25060);
	// sth r11,86(r31)
	REX_STORE_U16(ctx.r31.u32 + 86, ctx.r11.u16);
	// lhz r11,-9220(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + -9220);
	// sth r11,88(r31)
	REX_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
	// lhz r11,7376(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 7376);
	// sth r11,90(r31)
	REX_STORE_U16(ctx.r31.u32 + 90, ctx.r11.u16);
	// lis r11,-30269
	ctx.r11.s64 = -1983709184;
	// lis r16,-30275
	ctx.r16.s64 = -1984102400;
	// lis r15,-30270
	ctx.r15.s64 = -1983774720;
	// lis r14,-30276
	ctx.r14.s64 = -1984167936;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lhz r11,-10776(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -10776);
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30242
	ctx.r5.s64 = -1981939712;
	// lhz r10,6044(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 6044);
	// sth r11,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lhz r9,-10752(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + -10752);
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// lhz r8,-31408(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + -31408);
	// lis r29,-30273
	ctx.r29.s64 = -1983971328;
	// lhz r7,528(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 528);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lhz r6,9652(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 9652);
	// lhz r30,12268(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 12268);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// lhz r5,-21400(r5)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + -21400);
	// lis r26,-30253
	ctx.r26.s64 = -1982660608;
	// lhz r4,7112(r4)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + 7112);
	// lis r25,-30275
	ctx.r25.s64 = -1984102400;
	// lhz r3,-21588(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + -21588);
	// lis r24,-30251
	ctx.r24.s64 = -1982529536;
	// lhz r29,3528(r29)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + 3528);
	// lwz r23,-25884(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + -25884);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r22,-30274
	ctx.r22.s64 = -1984036864;
	// lhz r28,20400(r28)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + 20400);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r21,-30270
	ctx.r21.s64 = -1983774720;
	// lis r20,-30269
	ctx.r20.s64 = -1983709184;
	// lhz r27,-9492(r27)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r27.u32 + -9492);
	// lis r19,-30253
	ctx.r19.s64 = -1982660608;
	// lhz r26,3616(r26)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r26.u32 + 3616);
	// lis r18,-30275
	ctx.r18.s64 = -1984102400;
	// lhz r25,9640(r25)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r25.u32 + 9640);
	// lwz r24,12740(r24)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + 12740);
	// lis r17,-30275
	ctx.r17.s64 = -1984102400;
	// lwz r22,588(r22)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + 588);
	// lwz r21,20424(r21)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + 20424);
	// lwz r20,-10764(r20)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + -10764);
	// lhz r11,9644(r16)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r16.u32 + 9644);
	// lwz r16,27796(r15)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r15.u32 + 27796);
	// lwz r15,84(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r19,3628(r19)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + 3628);
	// lwz r18,-25888(r18)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + -25888);
	// sth r11,94(r31)
	REX_STORE_U16(ctx.r31.u32 + 94, ctx.r11.u16);
	// lhz r11,32012(r14)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r14.u32 + 32012);
	// sth r11,96(r31)
	REX_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
	// lhz r11,26900(r15)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r15.u32 + 26900);
	// lwz r17,9528(r17)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r17.u32 + 9528);
	// sth r10,100(r31)
	REX_STORE_U16(ctx.r31.u32 + 100, ctx.r10.u16);
	// sth r9,102(r31)
	REX_STORE_U16(ctx.r31.u32 + 102, ctx.r9.u16);
	// sth r8,104(r31)
	REX_STORE_U16(ctx.r31.u32 + 104, ctx.r8.u16);
	// sth r7,106(r31)
	REX_STORE_U16(ctx.r31.u32 + 106, ctx.r7.u16);
	// sth r11,98(r31)
	REX_STORE_U16(ctx.r31.u32 + 98, ctx.r11.u16);
	// sth r6,108(r31)
	REX_STORE_U16(ctx.r31.u32 + 108, ctx.r6.u16);
	// sth r5,110(r31)
	REX_STORE_U16(ctx.r31.u32 + 110, ctx.r5.u16);
	// sth r4,112(r31)
	REX_STORE_U16(ctx.r31.u32 + 112, ctx.r4.u16);
	// sth r3,114(r31)
	REX_STORE_U16(ctx.r31.u32 + 114, ctx.r3.u16);
	// sth r30,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r30.u16);
	// sth r29,118(r31)
	REX_STORE_U16(ctx.r31.u32 + 118, ctx.r29.u16);
	// sth r28,120(r31)
	REX_STORE_U16(ctx.r31.u32 + 120, ctx.r28.u16);
	// sth r27,122(r31)
	REX_STORE_U16(ctx.r31.u32 + 122, ctx.r27.u16);
	// sth r26,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r26.u16);
	// sth r25,126(r31)
	REX_STORE_U16(ctx.r31.u32 + 126, ctx.r25.u16);
	// stw r24,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r24.u32);
	// stw r23,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r23.u32);
	// stw r22,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r22.u32);
	// stw r21,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r21.u32);
	// stw r20,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r20.u32);
	// stw r19,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r19.u32);
	// stw r18,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r18.u32);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stw r17,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r17.u32);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// stw r16,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r16.u32);
	// lis r18,-30269
	ctx.r18.s64 = -1983709184;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lwz r11,3872(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3872);
	// lis r6,-30251
	ctx.r6.s64 = -1982529536;
	// lwz r10,-31412(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -31412);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lwz r8,3876(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 3876);
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// lwz r7,4948(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4948);
	// lis r29,-30276
	ctx.r29.s64 = -1984167936;
	// stw r11,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lbz r30,5211(r9)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 5211);
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// lis r28,-30273
	ctx.r28.s64 = -1983971328;
	// lwz r6,12748(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12748);
	// lis r27,-30275
	ctx.r27.s64 = -1984102400;
	// lwz r5,7380(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 7380);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// lwz r4,7900(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 7900);
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// lwz r3,-21408(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + -21408);
	// lis r23,-30269
	ctx.r23.s64 = -1983709184;
	// lwz r24,19180(r9)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 19180);
	// lis r22,-30276
	ctx.r22.s64 = -1984167936;
	// lbz r29,32014(r29)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r29.u32 + 32014);
	// lis r21,-30275
	ctx.r21.s64 = -1984102400;
	// lbz r28,3530(r28)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + 3530);
	// lis r20,-30270
	ctx.r20.s64 = -1983774720;
	// lwz r27,-31416(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + -31416);
	// lis r17,-30270
	ctx.r17.s64 = -1983774720;
	// lwz r26,26936(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 26936);
	// lis r19,-30274
	ctx.r19.s64 = -1984036864;
	// lwz r25,20944(r25)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + 20944);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lwz r23,-10740(r23)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + -10740);
	// lis r11,-30269
	ctx.r11.s64 = -1983709184;
	// lwz r22,32024(r22)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + 32024);
	// lwz r21,9648(r21)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + 9648);
	// lis r16,-30273
	ctx.r16.s64 = -1983971328;
	// lwz r20,7124(r20)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + 7124);
	// lis r15,-30270
	ctx.r15.s64 = -1983774720;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r14,-30270
	ctx.r14.s64 = -1983774720;
	// lwz r19,516(r19)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + 516);
	// lwz r11,20948(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 20948);
	// lwz r18,7096(r9)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 7096);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r17,84(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r8,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// stw r7,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r7.u32);
	// stw r6,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r6.u32);
	// stw r5,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r5.u32);
	// stw r4,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// stw r3,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// stb r30,196(r31)
	REX_STORE_U8(ctx.r31.u32 + 196, ctx.r30.u8);
	// stb r29,197(r31)
	REX_STORE_U8(ctx.r31.u32 + 197, ctx.r29.u8);
	// stb r28,198(r31)
	REX_STORE_U8(ctx.r31.u32 + 198, ctx.r28.u8);
	// stw r27,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r27.u32);
	// stw r26,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r26.u32);
	// stw r25,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r25.u32);
	// stw r24,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r24.u32);
	// stw r23,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r23.u32);
	// stw r22,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r22.u32);
	// stw r21,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r21.u32);
	// stw r20,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r20.u32);
	// stw r19,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r19.u32);
	// lwz r8,3792(r16)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r16.u32 + 3792);
	// lwz r7,26524(r15)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r15.u32 + 26524);
	// lwz r6,5760(r14)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r14.u32 + 5760);
	// lwz r5,-21288(r17)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r17.u32 + -21288);
	// stw r18,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r18.u32);
	// stw r11,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// stw r8,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r8.u32);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lwz r17,92(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r3,-30273
	ctx.r3.s64 = -1983971328;
	// stw r7,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r7.u32);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// stw r6,252(r31)
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r6.u32);
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// stw r5,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// lis r30,-30253
	ctx.r30.s64 = -1982660608;
	// lwz r8,-25892(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + -25892);
	// lis r29,-30273
	ctx.r29.s64 = -1983971328;
	// lwz r11,-10768(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + -10768);
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// ld r7,7912(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 7912);
	// lis r27,-30276
	ctx.r27.s64 = -1984167936;
	// lbz r6,5755(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 5755);
	// lis r26,-30242
	ctx.r26.s64 = -1981939712;
	// lbz r5,6402(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 6402);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r8,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r8.u32);
	// lbz r8,9519(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 9519);
	// lwz r4,-25520(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + -25520);
	// lbz r3,9543(r28)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + 9543);
	// lwz r29,-21580(r26)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + -21580);
	// ld r11,12004(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 12004);
	// std r11,268(r31)
	REX_STORE_U64(ctx.r31.u32 + 268, ctx.r11.u64);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// std r7,276(r31)
	REX_STORE_U64(ctx.r31.u32 + 276, ctx.r7.u64);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lbz r30,32550(r27)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r27.u32 + 32550);
	// stb r6,284(r31)
	REX_STORE_U8(ctx.r31.u32 + 284, ctx.r6.u8);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// stb r8,285(r31)
	REX_STORE_U8(ctx.r31.u32 + 285, ctx.r8.u8);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// stb r5,286(r31)
	REX_STORE_U8(ctx.r31.u32 + 286, ctx.r5.u8);
	// addi r5,r11,3632
	ctx.r5.s64 = ctx.r11.s64 + 3632;
	// stw r4,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r4.u32);
	// addi r4,r8,20432
	ctx.r4.s64 = ctx.r8.s64 + 20432;
	// stb r3,292(r31)
	REX_STORE_U8(ctx.r31.u32 + 292, ctx.r3.u8);
	// addi r3,r7,7384
	ctx.r3.s64 = ctx.r7.s64 + 7384;
	// stb r30,293(r31)
	REX_STORE_U8(ctx.r31.u32 + 293, ctx.r30.u8);
	// addi r30,r6,27280
	ctx.r30.s64 = ctx.r6.s64 + 27280;
	// stw r29,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r29.u32);
loc_8994CA14:
	// li r6,128
	ctx.r6.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,1836
	ctx.r7.s64 = ctx.r10.s64 + 1836;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8994CA28:
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r29,r9,r3
	ctx.r29.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r27,r9,r4
	ctx.r27.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// add r25,r9,r5
	ctx.r25.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stb r6,300(r8)
	REX_STORE_U8(ctx.r8.u32 + 300, ctx.r6.u8);
	// lbzx r8,r29,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// stb r8,812(r28)
	REX_STORE_U8(ctx.r28.u32 + 812, ctx.r8.u8);
	// lbzx r6,r27,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// stb r6,1324(r26)
	REX_STORE_U8(ctx.r26.u32 + 1324, ctx.r6.u8);
	// lbzx r8,r25,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// stbx r8,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8994ca28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994CA28;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpwi cr6,r9,512
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 512, ctx.xer);
	// blt cr6,0x8994ca14
	if (ctx.cr6.lt) goto loc_8994CA14;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r6,r11,532
	ctx.r6.s64 = ctx.r11.s64 + 532;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lis r4,-30251
	ctx.r4.s64 = -1982529536;
	// lbz r11,532(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 532);
	// lis r3,-30273
	ctx.r3.s64 = -1983971328;
	// lwz r10,-9224(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -9224);
	// lis r30,-30247
	ctx.r30.s64 = -1982267392;
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lwz r9,5764(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 5764);
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lwz r8,12068(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 12068);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// stb r11,2348(r31)
	REX_STORE_U8(ctx.r31.u32 + 2348, ctx.r11.u8);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r7,6418(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 6418);
	// lis r3,-30251
	ctx.r3.s64 = -1982529536;
	// addi r21,r11,-31400
	ctx.r21.s64 = ctx.r11.s64 + -31400;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lwz r5,7920(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 7920);
	// lwz r4,-9528(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + -9528);
	// lis r27,-30251
	ctx.r27.s64 = -1982529536;
	// lis r19,-30273
	ctx.r19.s64 = -1983971328;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// lwz r3,19172(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 19172);
	// lis r18,-30270
	ctx.r18.s64 = -1983774720;
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// lis r25,-30251
	ctx.r25.s64 = -1982529536;
	// lis r24,-30251
	ctx.r24.s64 = -1982529536;
	// lis r23,-30242
	ctx.r23.s64 = -1981939712;
	// addi r20,r31,2444
	ctx.r20.s64 = ctx.r31.s64 + 2444;
	// lwz r25,12156(r25)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + 12156);
	// lwz r24,12072(r24)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + 12072);
	// lwz r23,-21592(r23)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + -21592);
	// lbz r11,1(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lwz r6,4940(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4940);
	// stb r11,2349(r31)
	REX_STORE_U8(ctx.r31.u32 + 2349, ctx.r11.u8);
	// stw r10,2352(r31)
	REX_STORE_U32(ctx.r31.u32 + 2352, ctx.r10.u32);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stw r9,2356(r31)
	REX_STORE_U32(ctx.r31.u32 + 2356, ctx.r9.u32);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lwz r29,8152(r9)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 8152);
	// lwz r11,19360(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 19360);
	// stw r11,2360(r31)
	REX_STORE_U32(ctx.r31.u32 + 2360, ctx.r11.u32);
	// stw r8,2364(r31)
	REX_STORE_U32(ctx.r31.u32 + 2364, ctx.r8.u32);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// stb r7,2368(r31)
	REX_STORE_U8(ctx.r31.u32 + 2368, ctx.r7.u8);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lwz r30,7120(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 7120);
	// addi r10,r7,-2540
	ctx.r10.s64 = ctx.r7.s64 + -2540;
	// lwz r11,12636(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12636);
	// stw r11,2372(r31)
	REX_STORE_U32(ctx.r31.u32 + 2372, ctx.r11.u32);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// stw r6,2376(r31)
	REX_STORE_U32(ctx.r31.u32 + 2376, ctx.r6.u32);
	// stw r5,2380(r31)
	REX_STORE_U32(ctx.r31.u32 + 2380, ctx.r5.u32);
	// stw r4,2384(r31)
	REX_STORE_U32(ctx.r31.u32 + 2384, ctx.r4.u32);
	// stw r3,2388(r31)
	REX_STORE_U32(ctx.r31.u32 + 2388, ctx.r3.u32);
	// stw r30,2392(r31)
	REX_STORE_U32(ctx.r31.u32 + 2392, ctx.r30.u32);
	// lwz r28,12756(r27)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 12756);
	// stw r29,2396(r31)
	REX_STORE_U32(ctx.r31.u32 + 2396, ctx.r29.u32);
	// lwz r22,12020(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 12020);
	// lwz r27,26916(r26)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r26.u32 + 26916);
	// lwz r26,-9536(r8)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r8.u32 + -9536);
	// rotlwi r8,r21,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r21.u32, 0);
	// stw r28,2400(r31)
	REX_STORE_U32(ctx.r31.u32 + 2400, ctx.r28.u32);
	// lwz r11,3796(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 3796);
	// stw r11,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r11.u32);
	// lwz r11,20396(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 20396);
	// stw r11,2408(r31)
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r11.u32);
	// stw r27,2412(r31)
	REX_STORE_U32(ctx.r31.u32 + 2412, ctx.r27.u32);
	// stw r26,2416(r31)
	REX_STORE_U32(ctx.r31.u32 + 2416, ctx.r26.u32);
	// stw r25,2420(r31)
	REX_STORE_U32(ctx.r31.u32 + 2420, ctx.r25.u32);
	// lwz r11,-2540(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -2540);
	// stw r11,2424(r31)
	REX_STORE_U32(ctx.r31.u32 + 2424, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,2428(r31)
	REX_STORE_U32(ctx.r31.u32 + 2428, ctx.r11.u32);
	// stw r24,2432(r31)
	REX_STORE_U32(ctx.r31.u32 + 2432, ctx.r24.u32);
	// stw r23,2436(r31)
	REX_STORE_U32(ctx.r31.u32 + 2436, ctx.r23.u32);
	// stw r22,2440(r31)
	REX_STORE_U32(ctx.r31.u32 + 2440, ctx.r22.u32);
loc_8994CBBC:
	// li r9,41
	ctx.r9.s64 = 41;
	// addi r11,r21,-128
	ctx.r11.s64 = ctx.r21.s64 + -128;
	// addi r10,r20,-128
	ctx.r10.s64 = ctx.r20.s64 + -128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8994CBCC:
	// lwzu r9,128(r11)
	ea = 128 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,128(r10)
	ea = 128 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8994cbcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994CBCC;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// addi r11,r8,128
	ctx.r11.s64 = ctx.r8.s64 + 128;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8994cbbc
	if (ctx.cr6.lt) goto loc_8994CBBC;
	// li r10,41
	ctx.r10.s64 = 41;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,7692
	ctx.r9.s64 = ctx.r31.s64 + 7692;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r10,r10,12280
	ctx.r10.s64 = ctx.r10.s64 + 12280;
loc_8994CC04:
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8994cc04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994CC04;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r31,7744
	ctx.r7.s64 = ctx.r31.s64 + 7744;
	// lwz r9,26912(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 26912);
	// lwz r8,3880(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 3880);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// addi r10,r10,5464
	ctx.r10.s64 = ctx.r10.s64 + 5464;
	// stw r9,7736(r31)
	REX_STORE_U32(ctx.r31.u32 + 7736, ctx.r9.u32);
	// stw r8,7740(r31)
	REX_STORE_U32(ctx.r31.u32 + 7740, ctx.r8.u32);
loc_8994CC44:
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8994cc44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994CC44;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r9,r11,-9508
	ctx.r9.s64 = ctx.r11.s64 + -9508;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r3,r31,7788
	ctx.r3.s64 = ctx.r31.s64 + 7788;
	// lbz r11,-9508(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -9508);
	// addi r30,r8,25128
	ctx.r30.s64 = ctx.r8.s64 + 25128;
	// lwz r10,27792(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 27792);
	// li r5,696
	ctx.r5.s64 = 696;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,7776(r31)
	REX_STORE_U8(ctx.r31.u32 + 7776, ctx.r11.u8);
	// lbz r11,1(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// stb r11,7777(r31)
	REX_STORE_U8(ctx.r31.u32 + 7777, ctx.r11.u8);
	// lbz r11,2(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// stb r11,7778(r31)
	REX_STORE_U8(ctx.r31.u32 + 7778, ctx.r11.u8);
	// lbz r11,3(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// stb r11,7779(r31)
	REX_STORE_U8(ctx.r31.u32 + 7779, ctx.r11.u8);
	// lbz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// stb r11,7780(r31)
	REX_STORE_U8(ctx.r31.u32 + 7780, ctx.r11.u8);
	// lbz r11,5(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// stb r11,7781(r31)
	REX_STORE_U8(ctx.r31.u32 + 7781, ctx.r11.u8);
	// lbz r11,6(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 6);
	// stb r11,7782(r31)
	REX_STORE_U8(ctx.r31.u32 + 7782, ctx.r11.u8);
	// lbz r11,7(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 7);
	// stb r11,7783(r31)
	REX_STORE_U8(ctx.r31.u32 + 7783, ctx.r11.u8);
	// stw r10,7784(r31)
	REX_STORE_U32(ctx.r31.u32 + 7784, ctx.r10.u32);
	// bl 0x899dbdb0
	ctx.lr = 0x8994CCC0;
	sub_899DBDB0(ctx, base);
	// addi r3,r31,8484
	ctx.r3.s64 = ctx.r31.s64 + 8484;
	// addi r4,r30,696
	ctx.r4.s64 = ctx.r30.s64 + 696;
	// li r5,696
	ctx.r5.s64 = 696;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CCD0;
	sub_899DBDB0(ctx, base);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// addi r3,r31,9180
	ctx.r3.s64 = ctx.r31.s64 + 9180;
	// addi r30,r6,9056
	ctx.r30.s64 = ctx.r6.s64 + 9056;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CCE8;
	sub_899DBDB0(ctx, base);
	// addi r3,r31,9360
	ctx.r3.s64 = ctx.r31.s64 + 9360;
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CCF8;
	sub_899DBDB0(ctx, base);
	// addi r3,r31,9240
	ctx.r3.s64 = ctx.r31.s64 + 9240;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CD08;
	sub_899DBDB0(ctx, base);
	// addi r3,r31,9420
	ctx.r3.s64 = ctx.r31.s64 + 9420;
	// addi r4,r30,240
	ctx.r4.s64 = ctx.r30.s64 + 240;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CD18;
	sub_899DBDB0(ctx, base);
	// addi r3,r31,9300
	ctx.r3.s64 = ctx.r31.s64 + 9300;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CD28;
	sub_899DBDB0(ctx, base);
	// addi r3,r31,9480
	ctx.r3.s64 = ctx.r31.s64 + 9480;
	// addi r4,r30,300
	ctx.r4.s64 = ctx.r30.s64 + 300;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CD38;
	sub_899DBDB0(ctx, base);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// addi r29,r31,26436
	ctx.r29.s64 = ctx.r31.s64 + 26436;
	// addi r11,r3,-25880
	ctx.r11.s64 = ctx.r3.s64 + -25880;
	// li r28,128
	ctx.r28.s64 = 128;
	// addi r30,r11,16896
	ctx.r30.s64 = ctx.r11.s64 + 16896;
loc_8994CD4C:
	// addi r4,r30,-16896
	ctx.r4.s64 = ctx.r30.s64 + -16896;
	// addi r3,r29,-16896
	ctx.r3.s64 = ctx.r29.s64 + -16896;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CD5C;
	sub_899DBDB0(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CD6C;
	sub_899DBDB0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// addi r29,r29,132
	ctx.r29.s64 = ctx.r29.s64 + 132;
	// bne 0x8994cd4c
	if (!ctx.cr0.eq) goto loc_8994CD4C;
	// lis r11,-30269
	ctx.r11.s64 = -1983709184;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-17112
	ctx.r11.s64 = ctx.r11.s64 + -17112;
	// addi r29,r29,-19036
	ctx.r29.s64 = ctx.r29.s64 + -19036;
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r30,r11,3168
	ctx.r30.s64 = ctx.r11.s64 + 3168;
loc_8994CD94:
	// addi r4,r30,-3168
	ctx.r4.s64 = ctx.r30.s64 + -3168;
	// addi r3,r29,-3168
	ctx.r3.s64 = ctx.r29.s64 + -3168;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CDA4;
	sub_899DBDB0(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CDB4;
	sub_899DBDB0(ctx, base);
	// addi r4,r30,-2112
	ctx.r4.s64 = ctx.r30.s64 + -2112;
	// addi r3,r29,-2112
	ctx.r3.s64 = ctx.r29.s64 + -2112;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CDC4;
	sub_899DBDB0(ctx, base);
	// addi r4,r30,1056
	ctx.r4.s64 = ctx.r30.s64 + 1056;
	// addi r3,r29,1056
	ctx.r3.s64 = ctx.r29.s64 + 1056;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CDD4;
	sub_899DBDB0(ctx, base);
	// addi r4,r30,-1056
	ctx.r4.s64 = ctx.r30.s64 + -1056;
	// addi r3,r29,-1056
	ctx.r3.s64 = ctx.r29.s64 + -1056;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CDE4;
	sub_899DBDB0(ctx, base);
	// addi r4,r30,2112
	ctx.r4.s64 = ctx.r30.s64 + 2112;
	// addi r3,r29,2112
	ctx.r3.s64 = ctx.r29.s64 + 2112;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CDF4;
	sub_899DBDB0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// addi r29,r29,132
	ctx.r29.s64 = ctx.r29.s64 + 132;
	// bne 0x8994cd94
	if (!ctx.cr0.eq) goto loc_8994CD94;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,4176
	ctx.r11.s64 = ctx.r11.s64 + 4176;
	// addi r29,r29,-14268
	ctx.r29.s64 = ctx.r29.s64 + -14268;
	// li r28,16
	ctx.r28.s64 = 16;
	// addi r30,r11,1600
	ctx.r30.s64 = ctx.r11.s64 + 1600;
loc_8994CE1C:
	// addi r4,r30,-1600
	ctx.r4.s64 = ctx.r30.s64 + -1600;
	// addi r3,r29,-1600
	ctx.r3.s64 = ctx.r29.s64 + -1600;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CE2C;
	sub_899DBDB0(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CE3C;
	sub_899DBDB0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bne 0x8994ce1c
	if (!ctx.cr0.eq) goto loc_8994CE1C;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r29,r11,592
	ctx.r29.s64 = ctx.r11.s64 + 592;
	// addi r28,r28,-12668
	ctx.r28.s64 = ctx.r28.s64 + -12668;
	// li r30,352
	ctx.r30.s64 = 352;
loc_8994CE60:
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CE70;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// addi r28,r28,112
	ctx.r28.s64 = ctx.r28.s64 + 112;
	// bne 0x8994ce60
	if (!ctx.cr0.eq) goto loc_8994CE60;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r29,r11,12800
	ctx.r29.s64 = ctx.r11.s64 + 12800;
	// addi r28,r28,26756
	ctx.r28.s64 = ctx.r28.s64 + 26756;
	// li r30,256
	ctx.r30.s64 = 256;
loc_8994CE94:
	// li r5,208
	ctx.r5.s64 = 208;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CEA4;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,208
	ctx.r29.s64 = ctx.r29.s64 + 208;
	// addi r28,r28,208
	ctx.r28.s64 = ctx.r28.s64 + 208;
	// bne 0x8994ce94
	if (!ctx.cr0.eq) goto loc_8994CE94;
	// lis r11,-30247
	ctx.r11.s64 = -1982267392;
	// addis r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 131072;
	// addi r29,r11,19368
	ctx.r29.s64 = ctx.r11.s64 + 19368;
	// addi r28,r28,14468
	ctx.r28.s64 = ctx.r28.s64 + 14468;
	// li r30,2048
	ctx.r30.s64 = 2048;
loc_8994CEC8:
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CED8;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,140
	ctx.r29.s64 = ctx.r29.s64 + 140;
	// addi r28,r28,140
	ctx.r28.s64 = ctx.r28.s64 + 140;
	// bne 0x8994cec8
	if (!ctx.cr0.eq) goto loc_8994CEC8;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// addis r28,r31,7
	ctx.r28.s64 = ctx.r31.s64 + 458752;
	// addi r29,r11,6424
	ctx.r29.s64 = ctx.r11.s64 + 6424;
	// addi r28,r28,-26492
	ctx.r28.s64 = ctx.r28.s64 + -26492;
	// li r30,2304
	ctx.r30.s64 = 2304;
loc_8994CEFC:
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CF0C;
	sub_899DBDB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// addi r28,r28,84
	ctx.r28.s64 = ctx.r28.s64 + 84;
	// bne 0x8994cefc
	if (!ctx.cr0.eq) goto loc_8994CEFC;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addis r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 655360;
	// addi r30,r11,9656
	ctx.r30.s64 = ctx.r11.s64 + 9656;
	// addi r3,r3,-29564
	ctx.r3.s64 = ctx.r3.s64 + -29564;
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CF38;
	sub_899DBDB0(ctx, base);
	// addis r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 655360;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// addi r3,r3,-29472
	ctx.r3.s64 = ctx.r3.s64 + -29472;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CF4C;
	sub_899DBDB0(ctx, base);
	// addis r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 655360;
	// addi r4,r30,184
	ctx.r4.s64 = ctx.r30.s64 + 184;
	// addi r3,r3,-29380
	ctx.r3.s64 = ctx.r3.s64 + -29380;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CF60;
	sub_899DBDB0(ctx, base);
	// addis r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 655360;
	// addi r4,r30,276
	ctx.r4.s64 = ctx.r30.s64 + 276;
	// addi r3,r3,-29288
	ctx.r3.s64 = ctx.r3.s64 + -29288;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CF74;
	sub_899DBDB0(ctx, base);
	// addis r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 655360;
	// addi r4,r30,368
	ctx.r4.s64 = ctx.r30.s64 + 368;
	// addi r3,r3,-29196
	ctx.r3.s64 = ctx.r3.s64 + -29196;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CF88;
	sub_899DBDB0(ctx, base);
	// addis r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 655360;
	// addi r4,r30,460
	ctx.r4.s64 = ctx.r30.s64 + 460;
	// addi r3,r3,-29104
	ctx.r3.s64 = ctx.r3.s64 + -29104;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x899dbdb0
	ctx.lr = 0x8994CF9C;
	sub_899DBDB0(ctx, base);
	// li r9,320
	ctx.r9.s64 = 320;
	// addis r10,r31,10
	ctx.r10.s64 = ctx.r31.s64 + 655360;
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-21974
	ctx.r10.s64 = ctx.r10.s64 + -21974;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r8,r8,-312
	ctx.r8.s64 = ctx.r8.s64 + -312;
	// addi r9,r9,8424
	ctx.r9.s64 = ctx.r9.s64 + 8424;
loc_8994CFC0:
	// lhzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// addi r6,r8,640
	ctx.r6.s64 = ctx.r8.s64 + 640;
	// addi r5,r9,640
	ctx.r5.s64 = ctx.r9.s64 + 640;
	// addi r4,r8,1280
	ctx.r4.s64 = ctx.r8.s64 + 1280;
	// addi r3,r9,1280
	ctx.r3.s64 = ctx.r9.s64 + 1280;
	// addi r30,r8,1920
	ctx.r30.s64 = ctx.r8.s64 + 1920;
	// sth r7,-7038(r10)
	REX_STORE_U16(ctx.r10.u32 + -7038, ctx.r7.u16);
	// addi r7,r9,1920
	ctx.r7.s64 = ctx.r9.s64 + 1920;
	// lhzx r29,r11,r9
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// addi r28,r8,2560
	ctx.r28.s64 = ctx.r8.s64 + 2560;
	// sth r29,-3198(r10)
	REX_STORE_U16(ctx.r10.u32 + -3198, ctx.r29.u16);
	// addi r29,r9,2560
	ctx.r29.s64 = ctx.r9.s64 + 2560;
	// lhzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// addi r27,r8,3200
	ctx.r27.s64 = ctx.r8.s64 + 3200;
	// sth r6,-6398(r10)
	REX_STORE_U16(ctx.r10.u32 + -6398, ctx.r6.u16);
	// addi r6,r9,3200
	ctx.r6.s64 = ctx.r9.s64 + 3200;
	// lhzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// sth r5,-2558(r10)
	REX_STORE_U16(ctx.r10.u32 + -2558, ctx.r5.u16);
	// lhzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// sth r4,-5758(r10)
	REX_STORE_U16(ctx.r10.u32 + -5758, ctx.r4.u16);
	// lhzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// sth r3,-1918(r10)
	REX_STORE_U16(ctx.r10.u32 + -1918, ctx.r3.u16);
	// lhzx r5,r11,r30
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// sth r5,-5118(r10)
	REX_STORE_U16(ctx.r10.u32 + -5118, ctx.r5.u16);
	// lhzx r4,r11,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// sth r4,-1278(r10)
	REX_STORE_U16(ctx.r10.u32 + -1278, ctx.r4.u16);
	// lhzx r3,r11,r28
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// sth r3,-4478(r10)
	REX_STORE_U16(ctx.r10.u32 + -4478, ctx.r3.u16);
	// lhzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// sth r7,-638(r10)
	REX_STORE_U16(ctx.r10.u32 + -638, ctx.r7.u16);
	// lhzx r5,r11,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// sth r5,-3838(r10)
	REX_STORE_U16(ctx.r10.u32 + -3838, ctx.r5.u16);
	// lhzx r4,r11,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8994cfc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994CFC0;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addis r7,r31,10
	ctx.r7.s64 = ctx.r31.s64 + 655360;
	// addi r6,r11,-2528
	ctx.r6.s64 = ctx.r11.s64 + -2528;
	// addi r7,r7,-20308
	ctx.r7.s64 = ctx.r7.s64 + -20308;
	// addi r8,r6,1024
	ctx.r8.s64 = ctx.r6.s64 + 1024;
loc_8994D064:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r8,4032
	ctx.r11.s64 = ctx.r8.s64 + 4032;
	// addi r10,r7,4032
	ctx.r10.s64 = ctx.r7.s64 + 4032;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8994D074:
	// lwz r9,-5056(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -5056);
	// stw r9,-5056(r10)
	REX_STORE_U32(ctx.r10.u32 + -5056, ctx.r9.u32);
	// lwz r5,-4032(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4032);
	// stw r5,-4032(r10)
	REX_STORE_U32(ctx.r10.u32 + -4032, ctx.r5.u32);
	// lwz r4,-3008(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -3008);
	// stw r4,-3008(r10)
	REX_STORE_U32(ctx.r10.u32 + -3008, ctx.r4.u32);
	// lwz r3,-1984(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -1984);
	// stw r3,-1984(r10)
	REX_STORE_U32(ctx.r10.u32 + -1984, ctx.r3.u32);
	// lwz r9,-960(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -960);
	// stw r9,-960(r10)
	REX_STORE_U32(ctx.r10.u32 + -960, ctx.r9.u32);
	// lwzu r9,64(r11)
	ea = 64 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8994d074
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994D074;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r6,1088
	ctx.r11.s64 = ctx.r6.s64 + 1088;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8994d064
	if (ctx.cr6.lt) goto loc_8994D064;
	// addis r5,r31,10
	ctx.r5.s64 = ctx.r31.s64 + 655360;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r5,-14164
	ctx.r5.s64 = ctx.r5.s64 + -14164;
	// addi r6,r11,13024
	ctx.r6.s64 = ctx.r11.s64 + 13024;
loc_8994D0D0:
	// li r9,32
	ctx.r9.s64 = 32;
	// add r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r8,r6,5088
	ctx.r8.s64 = ctx.r6.s64 + 5088;
	// addi r10,r11,4064
	ctx.r10.s64 = ctx.r11.s64 + 4064;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8994D0E8:
	// lbz r9,-5088(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -5088);
	// stb r9,-5088(r10)
	REX_STORE_U8(ctx.r10.u32 + -5088, ctx.r9.u8);
	// lbz r8,-4064(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -4064);
	// stb r8,-4064(r10)
	REX_STORE_U8(ctx.r10.u32 + -4064, ctx.r8.u8);
	// lbz r4,-3040(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -3040);
	// stb r4,-3040(r10)
	REX_STORE_U8(ctx.r10.u32 + -3040, ctx.r4.u8);
	// lbz r3,-2016(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + -2016);
	// stb r3,-2016(r10)
	REX_STORE_U8(ctx.r10.u32 + -2016, ctx.r3.u8);
	// lbz r9,-992(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -992);
	// stb r9,-992(r10)
	REX_STORE_U8(ctx.r10.u32 + -992, ctx.r9.u8);
	// lbzu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,32(r10)
	ea = 32 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8994d0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994D0E8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// blt cr6,0x8994d0d0
	if (ctx.cr6.lt) goto loc_8994D0D0;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r4,r11,26920
	ctx.r4.s64 = ctx.r11.s64 + 26920;
	// ori r8,r10,56492
	ctx.r8.u64 = ctx.r10.u64 | 56492;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// lbz r11,26920(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 26920);
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// ori r10,r9,56493
	ctx.r10.u64 = ctx.r9.u64 | 56493;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// lis r28,9
	ctx.r28.s64 = 589824;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// li r11,128
	ctx.r11.s64 = 128;
	// ori r9,r9,56494
	ctx.r9.u64 = ctx.r9.u64 | 56494;
	// lis r27,9
	ctx.r27.s64 = 589824;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r26,9
	ctx.r26.s64 = 589824;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// ori r7,r7,56495
	ctx.r7.u64 = ctx.r7.u64 | 56495;
	// lis r25,9
	ctx.r25.s64 = 589824;
	// stw r3,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lis r30,9
	ctx.r30.s64 = 589824;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lis r24,9
	ctx.r24.s64 = 589824;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// ori r9,r8,56498
	ctx.r9.u64 = ctx.r8.u64 | 56498;
	// lis r23,9
	ctx.r23.s64 = 589824;
	// addi r8,r3,3884
	ctx.r8.s64 = ctx.r3.s64 + 3884;
	// stw r9,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// lis r22,9
	ctx.r22.s64 = 589824;
	// ori r7,r30,56499
	ctx.r7.u64 = ctx.r30.u64 | 56499;
	// stw r8,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// ori r6,r6,56496
	ctx.r6.u64 = ctx.r6.u64 | 56496;
	// ori r5,r5,56497
	ctx.r5.u64 = ctx.r5.u64 | 56497;
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// lis r21,9
	ctx.r21.s64 = 589824;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// lis r20,9
	ctx.r20.s64 = 589824;
	// lis r19,9
	ctx.r19.s64 = 589824;
	// stw r5,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// lis r9,9
	ctx.r9.s64 = 589824;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// lis r18,9
	ctx.r18.s64 = 589824;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// ori r10,r10,56507
	ctx.r10.u64 = ctx.r10.u64 | 56507;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// stw r10,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// addi r10,r29,10208
	ctx.r10.s64 = ctx.r29.s64 + 10208;
	// ori r29,r28,56509
	ctx.r29.u64 = ctx.r28.u64 | 56509;
	// ori r28,r27,56512
	ctx.r28.u64 = ctx.r27.u64 | 56512;
	// ori r27,r26,56516
	ctx.r27.u64 = ctx.r26.u64 | 56516;
	// ori r26,r25,56520
	ctx.r26.u64 = ctx.r25.u64 | 56520;
	// ori r25,r24,56524
	ctx.r25.u64 = ctx.r24.u64 | 56524;
	// ori r24,r23,56528
	ctx.r24.u64 = ctx.r23.u64 | 56528;
	// ori r23,r22,56532
	ctx.r23.u64 = ctx.r22.u64 | 56532;
	// ori r22,r21,56533
	ctx.r22.u64 = ctx.r21.u64 | 56533;
	// lis r3,9
	ctx.r3.s64 = 589824;
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lis r30,9
	ctx.r30.s64 = 589824;
	// ori r21,r20,56534
	ctx.r21.u64 = ctx.r20.u64 | 56534;
	// ori r20,r19,56535
	ctx.r20.u64 = ctx.r19.u64 | 56535;
	// ori r15,r9,56503
	ctx.r15.u64 = ctx.r9.u64 | 56503;
	// ori r14,r8,56504
	ctx.r14.u64 = ctx.r8.u64 | 56504;
	// ori r19,r18,56536
	ctx.r19.u64 = ctx.r18.u64 | 56536;
	// ori r17,r6,56500
	ctx.r17.u64 = ctx.r6.u64 | 56500;
	// ori r16,r5,56501
	ctx.r16.u64 = ctx.r5.u64 | 56501;
	// ori r3,r3,56502
	ctx.r3.u64 = ctx.r3.u64 | 56502;
	// addi r9,r31,27804
	ctx.r9.s64 = ctx.r31.s64 + 27804;
	// ori r8,r7,56505
	ctx.r8.u64 = ctx.r7.u64 | 56505;
	// ori r11,r11,56506
	ctx.r11.u64 = ctx.r11.u64 | 56506;
	// ori r30,r30,56508
	ctx.r30.u64 = ctx.r30.u64 | 56508;
	// lis r18,9
	ctx.r18.s64 = 589824;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lis r5,-30242
	ctx.r5.s64 = -1981939712;
	// stw r11,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r23.u32);
	// lwz r23,136(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r21,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stbx r10,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lwz r8,-21584(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + -21584);
	// addis r5,r11,10
	ctx.r5.s64 = ctx.r11.s64 + 655360;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lwz r21,100(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r5,-5928
	ctx.r5.s64 = ctx.r5.s64 + -5928;
	// stw r24,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// lis r24,-30274
	ctx.r24.s64 = -1984036864;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lwz r10,204(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stw r27,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// lwz r27,148(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r5,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lwz r5,524(r24)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r24.u32 + 524);
	// ori r24,r18,56537
	ctx.r24.u64 = ctx.r18.u64 | 56537;
	// lwz r18,160(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r19,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// lwz r19,92(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,224(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stw r25,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// lwz r25,144(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r20,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// lis r20,-30270
	ctx.r20.s64 = -1983774720;
	// lbz r10,3(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// stw r6,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// stw r9,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// lwz r9,12000(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 12000);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// stw r22,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// lis r22,-30274
	ctx.r22.s64 = -1984036864;
	// stbx r10,r11,r19
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r10.u8);
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lwz r7,7104(r20)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r20.u32 + 7104);
	// addis r20,r11,10
	ctx.r20.s64 = ctx.r11.s64 + 655360;
	// stw r18,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// stw r26,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// lwz r18,148(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r20,r20,-5672
	ctx.r20.s64 = ctx.r20.s64 + -5672;
	// lwz r6,540(r22)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r22.u32 + 540);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// lis r26,-30276
	ctx.r26.s64 = -1984167936;
	// stw r20,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// stw r22,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r18,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// lbz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// stbx r10,r11,r21
	REX_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u8);
	// lbz r10,5(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// lwz r4,204(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stbx r10,r11,r23
	REX_STORE_U8(ctx.r11.u32 + ctx.r23.u32, ctx.r10.u8);
	// lbz r10,3884(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 3884);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// stbx r10,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// stbx r10,r11,r17
	REX_STORE_U8(ctx.r11.u32 + ctx.r17.u32, ctx.r10.u8);
	// lbz r10,3(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// stbx r10,r11,r16
	REX_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r10.u8);
	// lbz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// lbz r10,5(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// stbx r10,r11,r15
	REX_STORE_U8(ctx.r11.u32 + ctx.r15.u32, ctx.r10.u8);
	// lbz r10,27804(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 27804);
	// stbx r10,r11,r14
	REX_STORE_U8(ctx.r11.u32 + ctx.r14.u32, ctx.r10.u8);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lwz r3,224(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// addi r27,r27,12640
	ctx.r27.s64 = ctx.r27.s64 + 12640;
	// addi r25,r25,8160
	ctx.r25.s64 = ctx.r25.s64 + 8160;
	// addi r23,r23,7896
	ctx.r23.s64 = ctx.r23.s64 + 7896;
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lwz r4,216(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lbz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lbz r10,3(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lbz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// lbz r10,5(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// stwx r9,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u32);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lbz r10,6035(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 6035);
	// stwx r8,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
	// addi r28,r28,7640
	ctx.r28.s64 = ctx.r28.s64 + 7640;
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lbz r9,9535(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 9535);
	// stwx r7,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lbz r8,12266(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 12266);
	// lbz r7,6054(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 6054);
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,188(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stwx r6,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// stwx r5,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r3,168(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r4,196(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lbz r6,32019(r26)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r26.u32 + 32019);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// addi r26,r26,4952
	ctx.r26.s64 = ctx.r26.s64 + 4952;
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// stbx r9,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// lbz r5,9539(r4)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + 9539);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r31,r8,5496
	ctx.r31.s64 = ctx.r8.s64 + 5496;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stbx r7,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u8);
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// stbx r6,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u8);
	// lis r6,-30251
	ctx.r6.s64 = -1982529536;
	// stbx r5,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r5.u8);
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lis r24,-30253
	ctx.r24.s64 = -1982660608;
	// addi r4,r10,3536
	ctx.r4.s64 = ctx.r10.s64 + 3536;
	// addi r3,r9,5472
	ctx.r3.s64 = ctx.r9.s64 + 5472;
	// addi r30,r7,-21360
	ctx.r30.s64 = ctx.r7.s64 + -21360;
	// addi r29,r6,12480
	ctx.r29.s64 = ctx.r6.s64 + 12480;
	// rotlwi r10,r22,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// rotlwi r9,r18,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r18.u32, 0);
	// rotlwi r7,r20,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// addi r6,r5,8016
	ctx.r6.s64 = ctx.r5.s64 + 8016;
	// addi r24,r24,-10320
	ctx.r24.s64 = ctx.r24.s64 + -10320;
loc_8994D4D8:
	// lhzx r5,r10,r23
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r23.u32);
	// addi r22,r6,256
	ctx.r22.s64 = ctx.r6.s64 + 256;
	// sth r5,-3070(r9)
	REX_STORE_U16(ctx.r9.u32 + -3070, ctx.r5.u16);
	// lhzx r5,r10,r24
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// sth r5,-2814(r9)
	REX_STORE_U16(ctx.r9.u32 + -2814, ctx.r5.u16);
	// lhzx r5,r10,r25
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r25.u32);
	// sth r5,-2558(r9)
	REX_STORE_U16(ctx.r9.u32 + -2558, ctx.r5.u16);
	// lhzx r5,r10,r26
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// sth r5,-2302(r9)
	REX_STORE_U16(ctx.r9.u32 + -2302, ctx.r5.u16);
	// lhzx r5,r10,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r27.u32);
	// sth r5,-2046(r9)
	REX_STORE_U16(ctx.r9.u32 + -2046, ctx.r5.u16);
	// lhzx r5,r10,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// sth r5,-1790(r9)
	REX_STORE_U16(ctx.r9.u32 + -1790, ctx.r5.u16);
	// lhzx r5,r10,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// sth r5,-1534(r9)
	REX_STORE_U16(ctx.r9.u32 + -1534, ctx.r5.u16);
	// lhzx r5,r10,r22
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r22.u32);
	// sth r5,-1278(r9)
	REX_STORE_U16(ctx.r9.u32 + -1278, ctx.r5.u16);
	// lhzx r5,r10,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// sth r5,-1022(r9)
	REX_STORE_U16(ctx.r9.u32 + -1022, ctx.r5.u16);
	// lhzx r5,r10,r30
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// sth r5,-766(r9)
	REX_STORE_U16(ctx.r9.u32 + -766, ctx.r5.u16);
	// lhzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// sth r5,-510(r9)
	REX_STORE_U16(ctx.r9.u32 + -510, ctx.r5.u16);
	// lhzx r5,r10,r3
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// sth r5,-254(r9)
	REX_STORE_U16(ctx.r9.u32 + -254, ctx.r5.u16);
	// lhzx r5,r10,r4
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// sthu r5,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r9.u32 = ea;
	// lhz r5,2(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// sth r5,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r5.u16);
	// lhz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 4);
	// sth r5,4(r7)
	REX_STORE_U16(ctx.r7.u32 + 4, ctx.r5.u16);
	// lhz r5,6(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 6);
	// sth r5,6(r7)
	REX_STORE_U16(ctx.r7.u32 + 6, ctx.r5.u16);
	// lhz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 8);
	// sth r5,8(r7)
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r5.u16);
	// lhz r5,10(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 10);
	// sth r5,10(r7)
	REX_STORE_U16(ctx.r7.u32 + 10, ctx.r5.u16);
	// lhzu r5,12(r8)
	ea = 12 + ctx.r8.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r5,12(r7)
	ea = 12 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x8994d4d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994D4D8;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r9,r10,5768
	ctx.r9.s64 = ctx.r10.s64 + 5768;
	// addis r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 655360;
	// addi r10,r10,-4132
	ctx.r10.s64 = ctx.r10.s64 + -4132;
loc_8994D590:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r4,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x8994d590
	if (!ctx.cr0.eq) goto loc_8994D590;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// ori r30,r5,61660
	ctx.r30.u64 = ctx.r5.u64 | 61660;
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lwz r9,-10064(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -10064);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r6,-30269
	ctx.r6.s64 = -1983709184;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// lhz r8,26864(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 26864);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// stwx r9,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// lis r29,9
	ctx.r29.s64 = 589824;
	// lhz r7,9536(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 9536);
	// ori r27,r4,61664
	ctx.r27.u64 = ctx.r4.u64 | 61664;
	// lhz r4,27272(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 27272);
	// ori r10,r10,61666
	ctx.r10.u64 = ctx.r10.u64 | 61666;
	// lhz r6,-21276(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + -21276);
	// ori r30,r29,61668
	ctx.r30.u64 = ctx.r29.u64 | 61668;
	// lbz r5,11746(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 11746);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lhz r3,12272(r28)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r28.u32 + 12272);
	// lis r9,9
	ctx.r9.s64 = 589824;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// sthx r8,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r8.u16);
	// ori r9,r9,61670
	ctx.r9.u64 = ctx.r9.u64 | 61670;
	// sthx r7,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// lis r29,9
	ctx.r29.s64 = 589824;
	// sthx r6,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r6.u16);
	// lis r26,-30269
	ctx.r26.s64 = -1983709184;
	// lhz r7,27276(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 27276);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r31,9
	ctx.r31.s64 = 589824;
	// lbz r6,4946(r28)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + 4946);
	// ori r30,r29,61672
	ctx.r30.u64 = ctx.r29.u64 | 61672;
	// stbx r5,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u8);
	// ori r27,r10,61674
	ctx.r27.u64 = ctx.r10.u64 | 61674;
	// lis r29,9
	ctx.r29.s64 = 589824;
	// lhz r8,-17120(r26)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r26.u32 + -17120);
	// ori r5,r31,61676
	ctx.r5.u64 = ctx.r31.u64 | 61676;
	// lis r28,9
	ctx.r28.s64 = 589824;
	// ori r31,r29,61678
	ctx.r31.u64 = ctx.r29.u64 | 61678;
	// sthx r4,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u16);
	// ori r10,r28,61680
	ctx.r10.u64 = ctx.r28.u64 | 61680;
	// sthx r3,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r3.u16);
	// lis r4,-30251
	ctx.r4.s64 = -1982529536;
	// li r9,16
	ctx.r9.s64 = 16;
	// sthx r8,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u16);
	// addi r5,r4,12080
	ctx.r5.s64 = ctx.r4.s64 + 12080;
	// sthx r7,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u16);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8994D6A0:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8994d6a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994D6A0;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// lbz r10,8418(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 8418);
	// ori r3,r7,61748
	ctx.r3.u64 = ctx.r7.u64 | 61748;
	// lhz r9,-9520(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + -9520);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// ori r31,r5,61750
	ctx.r31.u64 = ctx.r5.u64 | 61750;
	// lhz r7,26536(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 26536);
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// lis r30,9
	ctx.r30.s64 = 589824;
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// lis r29,9
	ctx.r29.s64 = 589824;
	// lbz r5,4939(r4)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + 4939);
	// ori r28,r8,61752
	ctx.r28.u64 = ctx.r8.u64 | 61752;
	// sthx r9,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// lbz r6,5754(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 5754);
	// ori r3,r30,61754
	ctx.r3.u64 = ctx.r30.u64 | 61754;
	// ori r30,r29,61755
	ctx.r30.u64 = ctx.r29.u64 | 61755;
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// addis r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 655360;
	// sthx r7,r11,r28
	REX_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r7.u16);
	// addi r10,r4,-4592
	ctx.r10.s64 = ctx.r4.s64 + -4592;
	// stbx r6,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// addi r9,r9,-3780
	ctx.r9.s64 = ctx.r9.s64 + -3780;
	// stbx r5,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r5.u8);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// addi r6,r9,-2
	ctx.r6.s64 = ctx.r9.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8994D730:
	// lhzu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x8994d730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994D730;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lis r4,-30251
	ctx.r4.s64 = -1982529536;
	// lis r3,9
	ctx.r3.s64 = 589824;
	// lhz r7,9516(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 9516);
	// lis r31,9
	ctx.r31.s64 = 589824;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// lhz r6,-21396(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + -21396);
	// ori r3,r3,63804
	ctx.r3.u64 = ctx.r3.u64 | 63804;
	// lhz r5,4936(r5)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + 4936);
	// lis r30,9
	ctx.r30.s64 = 589824;
	// lhz r4,12148(r4)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + 12148);
	// ori r31,r31,63806
	ctx.r31.u64 = ctx.r31.u64 | 63806;
	// ori r29,r8,63808
	ctx.r29.u64 = ctx.r8.u64 | 63808;
	// ori r30,r30,63810
	ctx.r30.u64 = ctx.r30.u64 | 63810;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// sthx r7,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u16);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// sthx r5,r11,r29
	REX_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u16);
	// sthx r4,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8994D79C:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8994d79c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994D79C;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// addi r8,r10,12332
	ctx.r8.s64 = ctx.r10.s64 + 12332;
	// ori r7,r9,63812
	ctx.r7.u64 = ctx.r9.u64 | 63812;
	// lis r30,9
	ctx.r30.s64 = 589824;
	// lbz r10,12332(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 12332);
	// lis r27,9
	ctx.r27.s64 = 589824;
	// ori r30,r30,63831
	ctx.r30.u64 = ctx.r30.u64 | 63831;
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// stw r30,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// ori r30,r27,63834
	ctx.r30.u64 = ctx.r27.u64 | 63834;
	// lis r29,9
	ctx.r29.s64 = 589824;
	// stbx r10,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// addi r10,r6,6404
	ctx.r10.s64 = ctx.r6.s64 + 6404;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// stw r30,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// lis r24,9
	ctx.r24.s64 = 589824;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r28,9
	ctx.r28.s64 = 589824;
	// ori r29,r29,63832
	ctx.r29.u64 = ctx.r29.u64 | 63832;
	// ori r10,r9,63828
	ctx.r10.u64 = ctx.r9.u64 | 63828;
	// ori r28,r28,63833
	ctx.r28.u64 = ctx.r28.u64 | 63833;
	// stw r29,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// ori r30,r24,63837
	ctx.r30.u64 = ctx.r24.u64 | 63837;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r26,9
	ctx.r26.s64 = 589824;
	// stw r28,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// lis r31,9
	ctx.r31.s64 = 589824;
	// stw r30,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// lis r25,9
	ctx.r25.s64 = 589824;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// lis r3,9
	ctx.r3.s64 = 589824;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// lis r22,9
	ctx.r22.s64 = 589824;
	// ori r29,r26,63835
	ctx.r29.u64 = ctx.r26.u64 | 63835;
	// ori r9,r31,63814
	ctx.r9.u64 = ctx.r31.u64 | 63814;
	// ori r5,r5,63813
	ctx.r5.u64 = ctx.r5.u64 | 63813;
	// stw r29,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// ori r4,r4,63818
	ctx.r4.u64 = ctx.r4.u64 | 63818;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lbz r10,5(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 5);
	// ori r3,r3,63823
	ctx.r3.u64 = ctx.r3.u64 | 63823;
	// ori r7,r7,63819
	ctx.r7.u64 = ctx.r7.u64 | 63819;
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// ori r28,r25,63836
	ctx.r28.u64 = ctx.r25.u64 | 63836;
	// stw r4,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// lis r23,9
	ctx.r23.s64 = 589824;
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// ori r30,r22,63817
	ctx.r30.u64 = ctx.r22.u64 | 63817;
	// stw r7,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// ori r29,r23,63838
	ctx.r29.u64 = ctx.r23.u64 | 63838;
	// stw r28,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// lis r21,9
	ctx.r21.s64 = 589824;
	// lis r20,9
	ctx.r20.s64 = 589824;
	// stw r29,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r29.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// lis r3,9
	ctx.r3.s64 = 589824;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// lis r31,9
	ctx.r31.s64 = 589824;
	// lis r19,9
	ctx.r19.s64 = 589824;
	// lis r18,9
	ctx.r18.s64 = 589824;
	// lis r17,9
	ctx.r17.s64 = 589824;
	// lis r28,9
	ctx.r28.s64 = 589824;
	// ori r29,r21,63822
	ctx.r29.u64 = ctx.r21.u64 | 63822;
	// ori r27,r20,63827
	ctx.r27.u64 = ctx.r20.u64 | 63827;
	// ori r5,r5,63824
	ctx.r5.u64 = ctx.r5.u64 | 63824;
	// ori r4,r4,63829
	ctx.r4.u64 = ctx.r4.u64 | 63829;
	// ori r3,r3,63815
	ctx.r3.u64 = ctx.r3.u64 | 63815;
	// ori r9,r9,63820
	ctx.r9.u64 = ctx.r9.u64 | 63820;
	// ori r7,r7,63825
	ctx.r7.u64 = ctx.r7.u64 | 63825;
	// ori r31,r31,63830
	ctx.r31.u64 = ctx.r31.u64 | 63830;
	// ori r26,r19,63816
	ctx.r26.u64 = ctx.r19.u64 | 63816;
	// ori r25,r18,63821
	ctx.r25.u64 = ctx.r18.u64 | 63821;
	// ori r24,r17,63826
	ctx.r24.u64 = ctx.r17.u64 | 63826;
	// ori r28,r28,63840
	ctx.r28.u64 = ctx.r28.u64 | 63840;
	// lis r23,9
	ctx.r23.s64 = 589824;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lbz r10,535(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 535);
	// lis r22,-30274
	ctx.r22.s64 = -1984036864;
	// lwz r30,104(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lis r20,-30270
	ctx.r20.s64 = -1983774720;
	// lwz r21,108(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lis r18,9
	ctx.r18.s64 = 589824;
	// lwz r19,120(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lis r16,9
	ctx.r16.s64 = 589824;
	// lwz r17,132(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lis r14,9
	ctx.r14.s64 = 589824;
	// stb r10,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// lwz r15,124(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// ori r23,r23,63842
	ctx.r23.u64 = ctx.r23.u64 | 63842;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lbz r10,6404(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 6404);
	// stw r28,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
	// lwz r28,116(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r25,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r25.u32);
	// lwz r25,152(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lbz r22,538(r22)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r22.u32 + 538);
	// lhz r20,5208(r20)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r20.u32 + 5208);
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lis r9,9
	ctx.r9.s64 = 589824;
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lis r3,9
	ctx.r3.s64 = 589824;
	// stw r4,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// lis r4,9
	ctx.r4.s64 = 589824;
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// stw r24,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r24.u32);
	// lis r24,9
	ctx.r24.s64 = 589824;
	// stw r26,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// ori r9,r9,63860
	ctx.r9.u64 = ctx.r9.u64 | 63860;
	// stw r31,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// ori r3,r3,63864
	ctx.r3.u64 = ctx.r3.u64 | 63864;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// ori r4,r4,63868
	ctx.r4.u64 = ctx.r4.u64 | 63868;
	// ori r5,r5,63872
	ctx.r5.u64 = ctx.r5.u64 | 63872;
	// stb r22,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r22.u8);
	// sth r20,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r20.u16);
	// lis r26,9
	ctx.r26.s64 = 589824;
	// lis r31,9
	ctx.r31.s64 = 589824;
	// stw r5,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// lwz r29,104(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lis r7,9
	ctx.r7.s64 = 589824;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r22,-30253
	ctx.r22.s64 = -1982660608;
	// ori r20,r18,63844
	ctx.r20.u64 = ctx.r18.u64 | 63844;
	// stw r4,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// ori r18,r16,63846
	ctx.r18.u64 = ctx.r16.u64 | 63846;
	// stw r3,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// ori r16,r14,63848
	ctx.r16.u64 = ctx.r14.u64 | 63848;
	// stw r9,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// ori r6,r24,63850
	ctx.r6.u64 = ctx.r24.u64 | 63850;
	// lbz r10,5(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// ori r26,r26,63851
	ctx.r26.u64 = ctx.r26.u64 | 63851;
	// ori r31,r31,63852
	ctx.r31.u64 = ctx.r31.u64 | 63852;
	// ori r7,r7,63856
	ctx.r7.u64 = ctx.r7.u64 | 63856;
	// addi r24,r29,32552
	ctx.r24.s64 = ctx.r29.s64 + 32552;
	// addi r14,r22,-9512
	ctx.r14.s64 = ctx.r22.s64 + -9512;
	// stbx r10,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// lis r5,-30273
	ctx.r5.s64 = -1983971328;
	// lis r4,-30276
	ctx.r4.s64 = -1984167936;
	// lis r3,-30251
	ctx.r3.s64 = -1982529536;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lbz r10,1(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// stbx r10,r11,r21
	REX_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u8);
	// lbz r10,6(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 6);
	// stbx r10,r11,r19
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r10.u8);
	// lbz r10,1(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// stbx r10,r11,r17
	REX_STORE_U8(ctx.r11.u32 + ctx.r17.u32, ctx.r10.u8);
	// lbz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// stbx r10,r11,r15
	REX_STORE_U8(ctx.r11.u32 + ctx.r15.u32, ctx.r10.u8);
	// lbz r10,2(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// lbz r10,7(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 7);
	// stbx r10,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u8);
	// lbz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// lwz r28,108(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lwz r21,180(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lis r19,-30275
	ctx.r19.s64 = -1984102400;
	// stw r31,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// lis r15,-30270
	ctx.r15.s64 = -1983774720;
	// lwz r31,104(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r17,176(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// lwz r28,120(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r7,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// lhz r31,12608(r31)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + 12608);
	// lwz r7,200(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lhz r5,-25516(r5)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + -25516);
	// lwz r25,184(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r26,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// lis r26,-30275
	ctx.r26.s64 = -1984102400;
	// sth r31,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r31.u16);
	// lis r31,9
	ctx.r31.s64 = 589824;
	// lhz r4,32544(r4)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + 32544);
	// ori r31,r31,63875
	ctx.r31.u64 = ctx.r31.u64 | 63875;
	// sth r5,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r5.u16);
	// lhz r3,12736(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 12736);
	// li r5,13
	ctx.r5.s64 = 13;
	// lhz r9,4944(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 4944);
	// lbz r27,6031(r27)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + 6031);
	// lbz r19,9642(r19)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r19.u32 + 9642);
	// lbz r10,7(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// lwz r28,132(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r23,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// lis r23,9
	ctx.r23.s64 = 589824;
	// ori r23,r23,63874
	ctx.r23.u64 = ctx.r23.u64 | 63874;
	// lbz r10,3(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// lwz r28,124(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r20,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// lwz r20,160(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r20,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// lbz r20,88(r1)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 8);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// lwz r28,116(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r10,3(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// stw r18,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// lis r18,9
	ctx.r18.s64 = 589824;
	// ori r18,r18,63873
	ctx.r18.u64 = ctx.r18.u64 | 63873;
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// lbz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// lwz r28,152(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r18,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r18.u32);
	// lwz r18,148(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r16,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r16.u32);
	// stw r23,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// lwz r28,196(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r16,216(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r23,204(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stw r31,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// lhz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lbz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// lbz r10,9(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 9);
	// lwz r8,168(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r6,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lwz r28,188(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// addi r8,r8,3800
	ctx.r8.s64 = ctx.r8.s64 + 3800;
	// lbz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// stbx r10,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stw r8,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// addi r8,r8,32020
	ctx.r8.s64 = ctx.r8.s64 + 32020;
	// stw r8,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// lbz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 144);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lbz r10,9(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// sth r31,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
	// sth r9,140(r1)
	REX_STORE_U16(ctx.r1.u32 + 140, ctx.r9.u16);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r6,-9524(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + -9524);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lhz r28,92(r1)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// addis r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 655360;
	// lwz r7,-9544(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -9544);
	// stw r5,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// addi r10,r10,-1244
	ctx.r10.s64 = ctx.r10.s64 + -1244;
	// stw r6,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// lhz r31,100(r1)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// sth r28,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r28.u16);
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// sth r4,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r4.u16);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r3,136(r1)
	REX_STORE_U16(ctx.r1.u32 + 136, ctx.r3.u16);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// lbz r15,6030(r15)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r15.u32 + 6030);
	// lwz r26,-31436(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + -31436);
	// lwz r28,108(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r30,104(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r28,r28,416
	ctx.r28.s64 = ctx.r28.s64 + 416;
	// lwz r7,224(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stb r27,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// stb r19,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r19.u8);
	// lwz r30,20408(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 20408);
	// lbz r10,32552(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 32552);
	// stb r15,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r15.u8);
	// stw r26,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stbx r10,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u8);
	// lhz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// lbz r10,1(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// stbx r10,r11,r21
	REX_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u8);
	// lbz r10,-9512(r22)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + -9512);
	// stbx r10,r11,r17
	REX_STORE_U8(ctx.r11.u32 + ctx.r17.u32, ctx.r10.u8);
	// lbz r10,1(r14)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r14.u32 + 1);
	// stbx r10,r11,r16
	REX_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r10.u8);
	// stbx r20,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r20.u8);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// stbx r8,r11,r18
	REX_STORE_U8(ctx.r11.u32 + ctx.r18.u32, ctx.r8.u8);
	// lhz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r10,140(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 140);
	// sthx r8,r11,r23
	REX_STORE_U16(ctx.r11.u32 + ctx.r23.u32, ctx.r8.u16);
	// clrlwi r8,r19,24
	ctx.r8.u64 = ctx.r19.u32 & 0xFF;
	// sthx r6,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u16);
	// clrlwi r7,r15,24
	ctx.r7.u64 = ctx.r15.u32 & 0xFF;
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// sthx r31,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r31.u16);
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// sthx r4,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r4.u16);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,152(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// sthx r3,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u16);
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// sthx r10,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u16);
	// rotlwi r4,r26,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// lwz r6,168(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// lwz r9,184(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r6,192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r8,180(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stbx r7,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// lwz r7,176(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stwx r5,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r5,208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stwx r3,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,200(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stwx r4,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwz r4,172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stwx r10,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
	// lbz r10,32020(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 32020);
	// lwz r9,232(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r8,216(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,204(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,1(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// stbx r10,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lbz r10,2(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// stbx r10,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// lbz r10,3(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// rotlwi r10,r28,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_8994DCF4:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r10,-420
	ctx.r8.s64 = ctx.r10.s64 + -420;
	// addi r7,r9,-420
	ctx.r7.s64 = ctx.r9.s64 + -420;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8994DD04:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x8994dd04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994DD04;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8994DD20:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x8994dd20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994DD20;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r10,412
	ctx.r8.s64 = ctx.r10.s64 + 412;
	// addi r7,r9,412
	ctx.r7.s64 = ctx.r9.s64 + 412;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8994DD3C:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x8994dd3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994DD3C;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r10,828
	ctx.r8.s64 = ctx.r10.s64 + 828;
	// addi r7,r9,828
	ctx.r7.s64 = ctx.r9.s64 + 828;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8994DD58:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x8994dd58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994DD58;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bne 0x8994dcf4
	if (!ctx.cr0.eq) goto loc_8994DCF4;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r29,10
	ctx.r29.s64 = 655360;
	// lis r28,10
	ctx.r28.s64 = 655360;
	// lis r27,10
	ctx.r27.s64 = 655360;
	// lbz r10,6046(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 6046);
	// ori r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 4;
	// lbz r9,9542(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 9542);
	// ori r28,r28,5
	ctx.r28.u64 = ctx.r28.u64 | 5;
	// lwz r8,-25896(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + -25896);
	// ori r27,r27,8
	ctx.r27.u64 = ctx.r27.u64 | 8;
	// lis r7,-30276
	ctx.r7.s64 = -1984167936;
	// lis r6,-30274
	ctx.r6.s64 = -1984036864;
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// stbx r9,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u8);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// stwx r8,r11,r27
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r8.u32);
	// lis r3,-30276
	ctx.r3.s64 = -1984167936;
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lbz r7,32551(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 32551);
	// lis r30,-30276
	ctx.r30.s64 = -1984167936;
	// lbz r6,586(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 586);
	// lbz r5,7115(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 7115);
	// lis r9,10
	ctx.r9.s64 = 655360;
	// lbz r4,3891(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 3891);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lbz r3,32546(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 32546);
	// lis r8,10
	ctx.r8.s64 = 655360;
	// lbz r31,12267(r31)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + 12267);
	// ori r9,r9,26
	ctx.r9.u64 = ctx.r9.u64 | 26;
	// lbz r30,32555(r30)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + 32555);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// stb r7,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// lis r7,10
	ctx.r7.s64 = 655360;
	// stb r6,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r6.u8);
	// lis r6,10
	ctx.r6.s64 = 655360;
	// stb r5,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// stb r4,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r4.u8);
	// lis r4,10
	ctx.r4.s64 = 655360;
	// stb r3,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r3.u8);
	// lis r3,-30274
	ctx.r3.s64 = -1984036864;
	// ori r7,r7,14
	ctx.r7.u64 = ctx.r7.u64 | 14;
	// stb r31,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// ori r6,r6,15
	ctx.r6.u64 = ctx.r6.u64 | 15;
	// stb r30,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// ori r5,r5,16
	ctx.r5.u64 = ctx.r5.u64 | 16;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lis r31,10
	ctx.r31.s64 = 655360;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// ori r4,r4,28
	ctx.r4.u64 = ctx.r4.u64 | 28;
	// stw r5,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// lis r30,10
	ctx.r30.s64 = 655360;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// ori r10,r10,25
	ctx.r10.u64 = ctx.r10.u64 | 25;
	// stw r4,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// ori r8,r8,27
	ctx.r8.u64 = ctx.r8.u64 | 27;
	// lis r28,10
	ctx.r28.s64 = 655360;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r27,10
	ctx.r27.s64 = 655360;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lis r7,10
	ctx.r7.s64 = 655360;
	// lbz r10,580(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 580);
	// lis r6,10
	ctx.r6.s64 = 655360;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// lis r26,10
	ctx.r26.s64 = 655360;
	// lis r25,10
	ctx.r25.s64 = 655360;
	// ori r9,r31,12
	ctx.r9.u64 = ctx.r31.u64 | 12;
	// ori r4,r30,13
	ctx.r4.u64 = ctx.r30.u64 | 13;
	// ori r31,r29,20
	ctx.r31.u64 = ctx.r29.u64 | 20;
	// addi r8,r3,580
	ctx.r8.s64 = ctx.r3.s64 + 580;
	// ori r30,r28,21
	ctx.r30.u64 = ctx.r28.u64 | 21;
	// ori r29,r27,22
	ctx.r29.u64 = ctx.r27.u64 | 22;
	// ori r7,r7,17
	ctx.r7.u64 = ctx.r7.u64 | 17;
	// ori r6,r6,18
	ctx.r6.u64 = ctx.r6.u64 | 18;
	// ori r5,r5,19
	ctx.r5.u64 = ctx.r5.u64 | 19;
	// ori r28,r26,23
	ctx.r28.u64 = ctx.r26.u64 | 23;
	// ori r27,r25,24
	ctx.r27.u64 = ctx.r25.u64 | 24;
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r25,10
	ctx.r25.s64 = 655360;
	// ori r10,r10,33
	ctx.r10.u64 = ctx.r10.u64 | 33;
	// lbz r15,100(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r3,3890(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 3890);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// stw r10,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// stw r27,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// lis r21,10
	ctx.r21.s64 = 655360;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r19,10
	ctx.r19.s64 = 655360;
	// lbz r16,136(r1)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r1.u32 + 136);
	// ori r25,r25,29
	ctx.r25.u64 = ctx.r25.u64 | 29;
	// lbz r14,92(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// ori r23,r23,30
	ctx.r23.u64 = ctx.r23.u64 | 30;
	// lbz r27,84(r1)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// ori r21,r21,31
	ctx.r21.u64 = ctx.r21.u64 | 31;
	// lwz r24,112(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// ori r19,r19,32
	ctx.r19.u64 = ctx.r19.u64 | 32;
	// lwz r22,128(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lis r18,-30270
	ctx.r18.s64 = -1983774720;
	// stb r15,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r15.u8);
	// lis r15,10
	ctx.r15.s64 = 655360;
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// lbz r20,80(r1)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// ori r15,r15,63
	ctx.r15.u64 = ctx.r15.u64 | 63;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r31,10
	ctx.r31.s64 = 655360;
	// stb r3,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// stw r30,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// lis r30,10
	ctx.r30.s64 = 655360;
	// stw r28,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// ori r5,r5,64
	ctx.r5.u64 = ctx.r5.u64 | 64;
	// stw r29,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// lis r28,10
	ctx.r28.s64 = 655360;
	// lbz r10,1(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// lis r25,10
	ctx.r25.s64 = 655360;
	// stw r23,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// stw r21,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// lis r21,10
	ctx.r21.s64 = 655360;
	// stw r19,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// lis r19,10
	ctx.r19.s64 = 655360;
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// ori r31,r31,62
	ctx.r31.u64 = ctx.r31.u64 | 62;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ori r28,r28,34
	ctx.r28.u64 = ctx.r28.u64 | 34;
	// stb r27,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r27.u8);
	// lis r27,10
	ctx.r27.s64 = 655360;
	// stw r18,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r18.u32);
	// lis r18,10
	ctx.r18.s64 = 655360;
	// stb r14,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r14.u8);
	// lis r14,10
	ctx.r14.s64 = 655360;
	// stb r16,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r16.u8);
	// lis r16,-30251
	ctx.r16.s64 = -1982529536;
	// ori r10,r4,40
	ctx.r10.u64 = ctx.r4.u64 | 40;
	// stw r5,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// ori r4,r3,44
	ctx.r4.u64 = ctx.r3.u64 | 44;
	// stw r15,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r15.u32);
	// ori r3,r30,56
	ctx.r3.u64 = ctx.r30.u64 | 56;
	// lbz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 144);
	// lbz r17,88(r1)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// ori r29,r29,35
	ctx.r29.u64 = ctx.r29.u64 | 35;
	// ori r25,r25,36
	ctx.r25.u64 = ctx.r25.u64 | 36;
	// stw r31,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// ori r23,r23,37
	ctx.r23.u64 = ctx.r23.u64 | 37;
	// ori r21,r21,38
	ctx.r21.u64 = ctx.r21.u64 | 38;
	// ori r19,r19,39
	ctx.r19.u64 = ctx.r19.u64 | 39;
	// ori r27,r27,48
	ctx.r27.u64 = ctx.r27.u64 | 48;
	// ori r18,r18,52
	ctx.r18.u64 = ctx.r18.u64 | 52;
	// ori r14,r14,60
	ctx.r14.u64 = ctx.r14.u64 | 60;
	// addi r30,r16,12752
	ctx.r30.s64 = ctx.r16.s64 + 12752;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lis r15,-30275
	ctx.r15.s64 = -1984102400;
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lbz r10,2(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// stw r14,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r14.u32);
	// lis r14,-30276
	ctx.r14.s64 = -1984167936;
	// stw r4,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r4.u32);
	// lis r4,10
	ctx.r4.s64 = 655360;
	// stw r18,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r18.u32);
	// lis r18,10
	ctx.r18.s64 = 655360;
	// stw r27,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r27.u32);
	// stbx r10,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
	// ori r18,r18,66
	ctx.r18.u64 = ctx.r18.u64 | 66;
	// lbz r26,32018(r14)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r14.u32 + 32018);
	// stw r19,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r19.u32);
	// lwz r14,108(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r27,120(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r19,132(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r21,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
	// lis r21,10
	ctx.r21.s64 = 655360;
	// stw r23,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r25,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// lis r25,10
	ctx.r25.s64 = 655360;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// lbz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r23,124(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r29,116(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r10,3(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// lbz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// stbx r10,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u8);
	// lis r24,-30270
	ctx.r24.s64 = -1983774720;
	// stbx r20,r11,r22
	REX_STORE_U8(ctx.r11.u32 + ctx.r22.u32, ctx.r20.u8);
	// lis r22,-30251
	ctx.r22.s64 = -1982529536;
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lis r20,-30247
	ctx.r20.s64 = -1982267392;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stbx r17,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r17.u8);
	// lbz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r17,104(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lbz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// lwz r9,232(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// stbx r6,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r7,172(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r6,208(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lbz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 136);
	// lbz r10,12342(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 12342);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lwz r8,192(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stb r26,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r26.u8);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// stw r28,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// lis r28,10
	ctx.r28.s64 = 655360;
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lbz r6,9647(r5)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 9647);
	// lis r5,-30274
	ctx.r5.s64 = -1984036864;
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lbz r10,9534(r15)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r15.u32 + 9534);
	// lis r15,-30242
	ctx.r15.s64 = -1981939712;
	// lbz r8,9655(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 9655);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lbz r7,9527(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 9527);
	// stb r6,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r6.u8);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lbz r5,587(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 587);
	// stb r10,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// stb r8,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r8.u8);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// stw r10,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// addi r10,r10,-21380
	ctx.r10.s64 = ctx.r10.s64 + -21380;
	// stb r7,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r7.u8);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lbz r9,7935(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 7935);
	// lbz r10,12752(r16)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r16.u32 + 12752);
	// ori r16,r4,68
	ctx.r16.u64 = ctx.r4.u64 | 68;
	// lwz r4,26932(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 26932);
	// ori r28,r28,76
	ctx.r28.u64 = ctx.r28.u64 | 76;
	// lwz r31,20404(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 20404);
	// ori r25,r25,72
	ctx.r25.u64 = ctx.r25.u64 | 72;
	// lwz r24,12152(r22)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r22.u32 + 12152);
	// stw r28,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// ori r21,r21,70
	ctx.r21.u64 = ctx.r21.u64 | 70;
	// lwz r28,152(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lis r22,-30273
	ctx.r22.s64 = -1983971328;
	// stw r25,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// lbz r25,100(r1)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// stb r9,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// lhz r8,27844(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 27844);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// lbz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// stb r5,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r5.u8);
	// lwz r6,3892(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 3892);
	// lwz r20,19364(r20)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + 19364);
	// stb r10,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// lbz r26,12321(r26)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r26.u32 + 12321);
	// lbz r7,6027(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 6027);
	// lhz r15,-21364(r15)
	ctx.r15.u64 = REX_LOAD_U16(ctx.r15.u32 + -21364);
	// stw r24,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// rotlwi r24,r31,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r21,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// stw r18,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// lbz r21,136(r1)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 136);
	// lbz r18,144(r1)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 144);
	// sth r8,140(r1)
	REX_STORE_U16(ctx.r1.u32 + 140, ctx.r8.u16);
	// stw r6,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r6.u32);
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// stw r20,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r20.u32);
	// lis r20,-30253
	ctx.r20.s64 = -1982660608;
	// stb r26,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r26.u8);
	// lbz r10,1(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// stb r7,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// lis r7,-30251
	ctx.r7.s64 = -1982529536;
	// sth r15,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r15.u16);
	// stw r16,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// lwz r16,196(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stbx r10,r11,r17
	REX_STORE_U8(ctx.r11.u32 + ctx.r17.u32, ctx.r10.u8);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// stbx r3,r11,r14
	REX_STORE_U8(ctx.r11.u32 + ctx.r14.u32, ctx.r3.u8);
	// lwz r5,168(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lbz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// stbx r28,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r28.u8);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lwz r9,188(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lbz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// stbx r6,r11,r19
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r6.u8);
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// stbx r25,r11,r23
	REX_STORE_U8(ctx.r11.u32 + ctx.r23.u32, ctx.r25.u8);
	// lis r25,-30251
	ctx.r25.s64 = -1982529536;
	// stbx r21,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r21.u8);
	// stbx r18,r11,r16
	REX_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r18.u8);
	// stbx r3,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u8);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lis r9,10
	ctx.r9.s64 = 655360;
	// lis r8,10
	ctx.r8.s64 = 655360;
	// lwz r23,128(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// ori r9,r9,88
	ctx.r9.u64 = ctx.r9.u64 | 88;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// ori r8,r8,92
	ctx.r8.u64 = ctx.r8.u64 | 92;
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// ori r17,r5,80
	ctx.r17.u64 = ctx.r5.u64 | 80;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// lwz r21,232(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// ori r14,r3,84
	ctx.r14.u64 = ctx.r3.u64 | 84;
	// lwz r19,172(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lhz r18,140(r1)
	ctx.r18.u64 = REX_LOAD_U16(ctx.r1.u32 + 140);
	// lbz r16,136(r1)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r1.u32 + 136);
	// lbz r15,80(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lhz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// lhz r9,6032(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 6032);
	// lhz r8,12264(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 12264);
	// sth r5,140(r1)
	REX_STORE_U16(ctx.r1.u32 + 140, ctx.r5.u16);
	// addis r5,r11,10
	ctx.r5.s64 = ctx.r11.s64 + 655360;
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addis r4,r11,10
	ctx.r4.s64 = ctx.r11.s64 + 655360;
	// addi r5,r5,96
	ctx.r5.s64 = ctx.r5.s64 + 96;
	// lhz r7,19188(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 19188);
	// addis r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 655360;
	// lwz r6,3532(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 3532);
	// std r5,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r5.u64);
	// addis r31,r11,10
	ctx.r31.s64 = ctx.r11.s64 + 655360;
	// lwz r5,192(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addis r30,r11,10
	ctx.r30.s64 = ctx.r11.s64 + 655360;
	// lbz r10,-21380(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -21380);
	// addis r29,r11,10
	ctx.r29.s64 = ctx.r11.s64 + 655360;
	// addi r4,r4,352
	ctx.r4.s64 = ctx.r4.s64 + 352;
	// addi r3,r3,608
	ctx.r3.s64 = ctx.r3.s64 + 608;
	// addi r31,r31,864
	ctx.r31.s64 = ctx.r31.s64 + 864;
	// addi r30,r30,1120
	ctx.r30.s64 = ctx.r30.s64 + 1120;
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r29,r29,1376
	ctx.r29.s64 = ctx.r29.s64 + 1376;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lbz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lbz r10,5(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r26,200(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lhz r10,6416(r22)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r22.u32 + 6416);
	// stwx r24,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r24.u32);
	// lwz r26,216(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lhz r24,140(r1)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r1.u32 + 140);
	// stwx r23,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r23.u32);
	// lwz r26,160(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stwx r21,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r21.u32);
	// lwz r26,148(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stwx r19,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r19.u32);
	// lwz r26,204(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// sthx r18,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r18.u16);
	// lwz r26,224(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stbx r16,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r16.u8);
	// lwz r26,212(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stbx r15,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r15.u8);
	// lwz r26,220(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// sthx r24,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r24.u16);
	// lwz r26,124(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// sthx r10,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u16);
	// li r10,256
	ctx.r10.s64 = 256;
	// lwz r26,116(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r9,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r9.u16);
	// lwz r26,152(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// sthx r8,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r8.u16);
	// lwz r8,12076(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 12076);
	// lwz r9,20952(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 20952);
	// lwz r28,164(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stwx r9,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u32);
	// lwz r28,156(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,8420(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 8420);
	// stwx r9,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u32);
	// lwz r9,-9516(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + -9516);
	// lwz r28,112(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// stwx r9,r11,r17
	REX_STORE_U32(ctx.r11.u32 + ctx.r17.u32, ctx.r9.u32);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// stwx r8,r11,r14
	REX_STORE_U32(ctx.r11.u32 + ctx.r14.u32, ctx.r8.u32);
	// lis r8,-30251
	ctx.r8.s64 = -1982529536;
	// ld r5,232(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// addi r9,r9,-26152
	ctx.r9.s64 = ctx.r9.s64 + -26152;
	// addi r8,r8,12768
	ctx.r8.s64 = ctx.r8.s64 + 12768;
	// sthx r7,r11,r28
	REX_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r7.u16);
	// lis r7,-30269
	ctx.r7.s64 = -1983709184;
	// lwz r28,128(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r27,r27,-9480
	ctx.r27.s64 = ctx.r27.s64 + -9480;
	// addi r7,r7,-10736
	ctx.r7.s64 = ctx.r7.s64 + -10736;
	// stwx r6,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r6.u32);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// addi r6,r6,5216
	ctx.r6.s64 = ctx.r6.s64 + 5216;
	// addi r28,r28,12344
	ctx.r28.s64 = ctx.r28.s64 + 12344;
loc_8994E414:
	// lbzx r26,r10,r27
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// stbx r26,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r26.u8);
	// lbzx r26,r10,r28
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// stbx r26,r10,r4
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r26.u8);
	// lbzx r26,r10,r6
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// stbx r26,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r26.u8);
	// lbzx r26,r10,r7
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// stbx r26,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r26.u8);
	// lbzx r26,r10,r8
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stbx r26,r10,r30
	REX_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r26.u8);
	// lbzx r26,r10,r9
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r26,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r26.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8994e414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994E414;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// lis r8,10
	ctx.r8.s64 = 655360;
	// lis r14,10
	ctx.r14.s64 = 655360;
	// ori r6,r8,1632
	ctx.r6.u64 = ctx.r8.u64 | 1632;
	// stw r14,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r14.u32);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lbz r10,-21284(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + -21284);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// lis r4,10
	ctx.r4.s64 = 655360;
	// ori r3,r5,1640
	ctx.r3.u64 = ctx.r5.u64 | 1640;
	// lis r5,10
	ctx.r5.s64 = 655360;
	// ori r4,r4,1646
	ctx.r4.u64 = ctx.r4.u64 | 1646;
	// stbx r10,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// ori r5,r5,1639
	ctx.r5.u64 = ctx.r5.u64 | 1639;
	// stw r4,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// lis r31,10
	ctx.r31.s64 = 655360;
	// stw r5,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// stw r10,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// lis r14,10
	ctx.r14.s64 = 655360;
	// lis r6,10
	ctx.r6.s64 = 655360;
	// lis r27,10
	ctx.r27.s64 = 655360;
	// stw r14,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r14.u32);
	// lis r8,10
	ctx.r8.s64 = 655360;
	// ori r4,r31,1647
	ctx.r4.u64 = ctx.r31.u64 | 1647;
	// ori r8,r8,1672
	ctx.r8.u64 = ctx.r8.u64 | 1672;
	// ori r5,r27,1683
	ctx.r5.u64 = ctx.r27.u64 | 1683;
	// stw r4,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r4.u32);
	// lis r28,10
	ctx.r28.s64 = 655360;
	// stw r8,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// lis r26,10
	ctx.r26.s64 = 655360;
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lis r14,10
	ctx.r14.s64 = 655360;
	// lis r29,10
	ctx.r29.s64 = 655360;
	// lis r24,10
	ctx.r24.s64 = 655360;
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// lis r30,10
	ctx.r30.s64 = 655360;
	// ori r4,r26,1685
	ctx.r4.u64 = ctx.r26.u64 | 1685;
	// ori r8,r29,1681
	ctx.r8.u64 = ctx.r29.u64 | 1681;
	// lbz r10,6036(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 6036);
	// lis r14,10
	ctx.r14.s64 = 655360;
	// ori r5,r23,1633
	ctx.r5.u64 = ctx.r23.u64 | 1633;
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r23,164(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lis r25,-30274
	ctx.r25.s64 = -1984036864;
	// lis r22,10
	ctx.r22.s64 = 655360;
	// stw r14,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// lis r21,10
	ctx.r21.s64 = 655360;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// ori r3,r6,1676
	ctx.r3.u64 = ctx.r6.u64 | 1676;
	// ori r6,r28,1682
	ctx.r6.u64 = ctx.r28.u64 | 1682;
	// stw r3,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// ori r3,r24,1648
	ctx.r3.u64 = ctx.r24.u64 | 1648;
	// lwz r24,156(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// ori r10,r30,1680
	ctx.r10.u64 = ctx.r30.u64 | 1680;
	// lis r20,10
	ctx.r20.s64 = 655360;
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// lis r19,10
	ctx.r19.s64 = 655360;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r18,10
	ctx.r18.s64 = 655360;
	// lis r17,10
	ctx.r17.s64 = 655360;
	// lis r16,10
	ctx.r16.s64 = 655360;
	// lis r15,10
	ctx.r15.s64 = 655360;
	// addi r6,r9,-21284
	ctx.r6.s64 = ctx.r9.s64 + -21284;
	// addi r4,r7,6036
	ctx.r4.s64 = ctx.r7.s64 + 6036;
	// lis r14,10
	ctx.r14.s64 = 655360;
	// ori r9,r22,1641
	ctx.r9.u64 = ctx.r22.u64 | 1641;
	// addi r31,r25,544
	ctx.r31.s64 = ctx.r25.s64 + 544;
	// ori r8,r21,1652
	ctx.r8.u64 = ctx.r21.u64 | 1652;
	// ori r7,r20,1634
	ctx.r7.u64 = ctx.r20.u64 | 1634;
	// ori r30,r19,1642
	ctx.r30.u64 = ctx.r19.u64 | 1642;
	// ori r29,r18,1656
	ctx.r29.u64 = ctx.r18.u64 | 1656;
	// ori r28,r17,1635
	ctx.r28.u64 = ctx.r17.u64 | 1635;
	// ori r27,r16,1643
	ctx.r27.u64 = ctx.r16.u64 | 1643;
	// ori r26,r15,1660
	ctx.r26.u64 = ctx.r15.u64 | 1660;
	// ori r24,r24,1636
	ctx.r24.u64 = ctx.r24.u64 | 1636;
	// ori r23,r23,1644
	ctx.r23.u64 = ctx.r23.u64 | 1644;
	// lwz r10,544(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 544);
	// lis r25,-30275
	ctx.r25.s64 = -1984102400;
	// lwz r21,212(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lis r16,-30275
	ctx.r16.s64 = -1984102400;
	// lwz r22,220(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// ori r18,r14,1638
	ctx.r18.u64 = ctx.r14.u64 | 1638;
	// ori r21,r21,1637
	ctx.r21.u64 = ctx.r21.u64 | 1637;
	// lwz r20,96(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ori r22,r22,1664
	ctx.r22.u64 = ctx.r22.u64 | 1664;
	// lwz r19,112(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// ori r20,r20,1645
	ctx.r20.u64 = ctx.r20.u64 | 1645;
	// lbz r10,12275(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 12275);
	// lis r25,10
	ctx.r25.s64 = 655360;
	// stw r21,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r21.u32);
	// lis r21,10
	ctx.r21.s64 = 655360;
	// ori r25,r25,1694
	ctx.r25.u64 = ctx.r25.u64 | 1694;
	// lbz r16,7931(r16)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r16.u32 + 7931);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// stw r20,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r20.u32);
	// stw r25,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r25.u32);
	// ori r25,r21,1700
	ctx.r25.u64 = ctx.r21.u64 | 1700;
	// stb r10,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// lis r10,10
	ctx.r10.s64 = 655360;
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// ori r3,r3,1692
	ctx.r3.u64 = ctx.r3.u64 | 1692;
	// ori r25,r10,1706
	ctx.r25.u64 = ctx.r10.u64 | 1706;
	// stw r22,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// lis r15,-30275
	ctx.r15.s64 = -1984102400;
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// lis r14,-30251
	ctx.r14.s64 = -1982529536;
	// stw r23,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r23.u32);
	// lis r20,10
	ctx.r20.s64 = 655360;
	// stb r16,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r16.u8);
	// ori r19,r19,1668
	ctx.r19.u64 = ctx.r19.u64 | 1668;
	// stw r18,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r18.u32);
	// lis r22,10
	ctx.r22.s64 = 655360;
	// stw r25,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r25.u32);
	// ori r3,r20,1698
	ctx.r3.u64 = ctx.r20.u64 | 1698;
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// lbz r15,-31406(r15)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r15.u32 + -31406);
	// ori r22,r22,1702
	ctx.r22.u64 = ctx.r22.u64 | 1702;
	// lhz r14,12760(r14)
	ctx.r14.u64 = REX_LOAD_U16(ctx.r14.u32 + 12760);
	// lis r16,10
	ctx.r16.s64 = 655360;
	// stw r3,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// lis r17,10
	ctx.r17.s64 = 655360;
	// stw r22,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// lis r18,10
	ctx.r18.s64 = 655360;
	// lbz r10,1(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lis r19,10
	ctx.r19.s64 = 655360;
	// ori r3,r23,1704
	ctx.r3.u64 = ctx.r23.u64 | 1704;
	// stb r15,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r15.u8);
	// ori r23,r16,1708
	ctx.r23.u64 = ctx.r16.u64 | 1708;
	// sth r14,140(r1)
	REX_STORE_U16(ctx.r1.u32 + 140, ctx.r14.u16);
	// ori r17,r17,1687
	ctx.r17.u64 = ctx.r17.u64 | 1687;
	// stw r3,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// ori r18,r18,1690
	ctx.r18.u64 = ctx.r18.u64 | 1690;
	// stw r23,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// ori r19,r19,1696
	ctx.r19.u64 = ctx.r19.u64 | 1696;
	// lis r22,-30253
	ctx.r22.s64 = -1982660608;
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// lis r25,-30253
	ctx.r25.s64 = -1982660608;
	// stw r18,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// stw r19,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r19.u32);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// addi r23,r22,12012
	ctx.r23.s64 = ctx.r22.s64 + 12012;
	// lis r21,-30242
	ctx.r21.s64 = -1981939712;
	// addi r5,r25,12028
	ctx.r5.s64 = ctx.r25.s64 + 12028;
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lbz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// stbx r10,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// lbz r10,3(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// lis r19,-30251
	ctx.r19.s64 = -1982529536;
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lis r17,10
	ctx.r17.s64 = 655360;
	// lwz r8,164(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lis r15,10
	ctx.r15.s64 = 655360;
	// lwz r7,220(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r29,128(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r23,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// lwz r20,104(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r16,108(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lbz r14,92(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r23,100(r1)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r18,84(r1)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// stw r20,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// stw r16,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r16.u32);
	// stb r14,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r14.u8);
	// stb r23,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r23.u8);
	// lwz r23,124(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r16,112(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r14,116(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r20,140(r1)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r1.u32 + 140);
	// lwz r28,232(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lbz r10,3(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// stw r23,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r23.u32);
	// lis r23,10
	ctx.r23.s64 = 655360;
	// stw r16,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r16.u32);
	// lis r16,10
	ctx.r16.s64 = 655360;
	// sth r20,140(r1)
	REX_STORE_U16(ctx.r1.u32 + 140, ctx.r20.u16);
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// addi r21,r21,-21368
	ctx.r21.s64 = ctx.r21.s64 + -21368;
	// stbx r10,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// lwz r27,172(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r14,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r14.u32);
	// lis r14,10
	ctx.r14.s64 = 655360;
	// lwz r20,152(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r10,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u32);
	// lwz r26,208(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stw r25,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// lis r25,10
	ctx.r25.s64 = 655360;
	// lbz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// stbx r10,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u8);
	// lwz r24,96(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r9,212(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r22,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// lis r22,10
	ctx.r22.s64 = 655360;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// lbz r10,5(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// stbx r10,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// addi r7,r7,27812
	ctx.r7.s64 = ctx.r7.s64 + 27812;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// lbz r10,5(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// ori r10,r3,1728
	ctx.r10.u64 = ctx.r3.u64 | 1728;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// stw r30,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// lis r30,10
	ctx.r30.s64 = 655360;
	// stwx r9,r11,r24
	REX_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r9.u32);
	// lis r24,-30275
	ctx.r24.s64 = -1984102400;
	// lwz r9,192(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r5,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r24,r24,9512
	ctx.r24.s64 = ctx.r24.s64 + 9512;
	// lhz r10,12144(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 12144);
	// stw r24,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// lwz r24,196(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r5,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r19,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// ori r3,r25,1716
	ctx.r3.u64 = ctx.r25.u64 | 1716;
	// ori r25,r23,1722
	ctx.r25.u64 = ctx.r23.u64 | 1722;
	// sth r10,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// ori r23,r16,1724
	ctx.r23.u64 = ctx.r16.u64 | 1724;
	// lbz r10,6(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// lwz r16,168(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// ori r7,r30,1714
	ctx.r7.u64 = ctx.r30.u64 | 1714;
	// ori r30,r22,1718
	ctx.r30.u64 = ctx.r22.u64 | 1718;
	// addi r19,r19,12744
	ctx.r19.s64 = ctx.r19.s64 + 12744;
	// ori r17,r17,1710
	ctx.r17.u64 = ctx.r17.u64 | 1710;
	// stbx r10,r11,r16
	REX_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r10.u8);
	// lis r16,-30270
	ctx.r16.s64 = -1983774720;
	// ori r8,r15,1712
	ctx.r8.u64 = ctx.r15.u64 | 1712;
	// ori r5,r5,1720
	ctx.r5.u64 = ctx.r5.u64 | 1720;
	// ori r22,r14,1726
	ctx.r22.u64 = ctx.r14.u64 | 1726;
	// lbz r10,6(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lwz r29,184(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stwx r10,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// lwz r28,180(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lbz r10,7(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// lbz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// stbx r10,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// lwz r27,176(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lbz r10,7(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// lwz r4,156(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stbx r10,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
	// lwz r26,200(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r31,104(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stbx r18,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r18.u8);
	// lwz r4,220(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stbx r6,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u8);
	// lbz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lwz r6,212(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stbx r9,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r10,12012(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 12012);
	// sthx r10,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,232(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lhz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// sthx r10,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// lhz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 4);
	// lwz r6,172(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lhz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 140);
	// sthx r10,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// sthx r4,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r4.u16);
	// lwz r6,208(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r9,188(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lhz r10,12028(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 12028);
	// addi r6,r16,4920
	ctx.r6.s64 = ctx.r16.s64 + 4920;
	// sthx r10,r11,r20
	REX_STORE_U16(ctx.r11.u32 + ctx.r20.u32, ctx.r10.u16);
	// lhz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// sthx r10,r11,r24
	REX_STORE_U16(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u16);
	// lhz r10,-21368(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + -21368);
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// sthx r10,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// lhz r10,2(r21)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r21.u32 + 2);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r24,216(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r21,160(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// sthx r10,r11,r29
	REX_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u16);
	// lhz r29,100(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r10,9512(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 9512);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// sthx r10,r11,r28
	REX_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u16);
	// lhz r10,2(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// sthx r10,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u16);
	// lhz r9,3624(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 3624);
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lhz r10,12744(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 12744);
	// sthx r10,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u16);
	// lhz r10,2(r19)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r19.u32 + 2);
	// sthx r10,r11,r24
	REX_STORE_U16(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u16);
	// sthx r29,r11,r21
	REX_STORE_U16(ctx.r11.u32 + ctx.r21.u32, ctx.r29.u16);
	// lhz r10,4920(r16)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r16.u32 + 4920);
	// sthx r10,r11,r17
	REX_STORE_U16(ctx.r11.u32 + ctx.r17.u32, ctx.r10.u16);
	// lhz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// sthx r10,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u16);
	// lwz r8,124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lhz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 4);
	// sthx r10,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u16);
	// lhz r10,6(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 6);
	// sthx r10,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lhz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 8);
	// sthx r10,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u16);
	// lhz r10,10(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 10);
	// sthx r10,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u16);
	// lhz r10,12(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 12);
	// sthx r10,r11,r25
	REX_STORE_U16(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u16);
	// lhz r10,14(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 14);
	// sthx r10,r11,r23
	REX_STORE_U16(ctx.r11.u32 + ctx.r23.u32, ctx.r10.u16);
	// sthx r9,r11,r22
	REX_STORE_U16(ctx.r11.u32 + ctx.r22.u32, ctx.r9.u16);
	// lhz r10,7928(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 7928);
	// sthx r10,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_8994E9C4:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8994e9c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994E9C4;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,10
	ctx.r8.s64 = 655360;
	// lis r6,-30251
	ctx.r6.s64 = -1982529536;
	// ori r10,r8,1762
	ctx.r10.u64 = ctx.r8.u64 | 1762;
	// li r8,16
	ctx.r8.s64 = 16;
	// lhz r7,12632(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 12632);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r9,r6,12032
	ctx.r9.s64 = ctx.r6.s64 + 12032;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// sthx r7,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u16);
loc_8994EA04:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8994ea04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994EA04;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// lis r8,10
	ctx.r8.s64 = 655360;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// ori r10,r8,1796
	ctx.r10.u64 = ctx.r8.u64 | 1796;
	// li r8,16
	ctx.r8.s64 = 16;
	// lhz r7,-21392(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + -21392);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r9,r6,26868
	ctx.r9.s64 = ctx.r6.s64 + 26868;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// sthx r7,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u16);
loc_8994EA44:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8994ea44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994EA44;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,10
	ctx.r9.s64 = 655360;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// ori r7,r9,1830
	ctx.r7.u64 = ctx.r9.u64 | 1830;
	// addi r6,r8,12624
	ctx.r6.s64 = ctx.r8.s64 + 12624;
	// lhz r10,-9532(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + -9532);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// lis r4,-30273
	ctx.r4.s64 = -1983971328;
	// lis r3,-30251
	ctx.r3.s64 = -1982529536;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r6,-30274
	ctx.r6.s64 = -1984036864;
	// sthx r10,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u16);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// ori r7,r5,1832
	ctx.r7.u64 = ctx.r5.u64 | 1832;
	// lhz r5,5752(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 5752);
	// lhz r4,19168(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 19168);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// lhz r9,26948(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 26948);
	// lis r31,10
	ctx.r31.s64 = 655360;
	// lbz r6,534(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 534);
	// ori r3,r3,1836
	ctx.r3.u64 = ctx.r3.u64 | 1836;
	// lbz r10,-31402(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -31402);
	// lis r30,10
	ctx.r30.s64 = 655360;
	// sth r5,140(r1)
	REX_STORE_U16(ctx.r1.u32 + 140, ctx.r5.u16);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// sth r4,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r4.u16);
	// lis r3,10
	ctx.r3.s64 = 655360;
	// stb r6,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r6.u8);
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// stb r10,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// lis r6,10
	ctx.r6.s64 = 655360;
	// sth r9,136(r1)
	REX_STORE_U16(ctx.r1.u32 + 136, ctx.r9.u16);
	// lis r9,10
	ctx.r9.s64 = 655360;
	// lis r28,10
	ctx.r28.s64 = 655360;
	// lis r27,10
	ctx.r27.s64 = 655360;
	// lis r26,10
	ctx.r26.s64 = 655360;
	// lis r25,10
	ctx.r25.s64 = 655360;
	// lis r24,10
	ctx.r24.s64 = 655360;
	// lwz r23,156(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lis r22,10
	ctx.r22.s64 = 655360;
	// lis r21,-30269
	ctx.r21.s64 = -1983709184;
	// lis r20,10
	ctx.r20.s64 = 655360;
	// lhz r10,12624(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 12624);
	// lis r8,10
	ctx.r8.s64 = 655360;
	// lis r19,10
	ctx.r19.s64 = 655360;
	// lis r18,10
	ctx.r18.s64 = 655360;
	// lis r17,10
	ctx.r17.s64 = 655360;
	// lis r16,10
	ctx.r16.s64 = 655360;
	// sthx r10,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u16);
	// addis r7,r11,10
	ctx.r7.s64 = ctx.r11.s64 + 655360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,1870
	ctx.r7.s64 = ctx.r7.s64 + 1870;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// ori r31,r31,1834
	ctx.r31.u64 = ctx.r31.u64 | 1834;
	// stw r10,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// ori r7,r5,1844
	ctx.r7.u64 = ctx.r5.u64 | 1844;
	// ori r30,r30,1838
	ctx.r30.u64 = ctx.r30.u64 | 1838;
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// ori r29,r29,1840
	ctx.r29.u64 = ctx.r29.u64 | 1840;
	// ori r3,r3,1842
	ctx.r3.u64 = ctx.r3.u64 | 1842;
	// ori r5,r9,1846
	ctx.r5.u64 = ctx.r9.u64 | 1846;
	// addi r15,r4,-31432
	ctx.r15.s64 = ctx.r4.s64 + -31432;
	// ori r6,r6,1848
	ctx.r6.u64 = ctx.r6.u64 | 1848;
	// ori r28,r28,1850
	ctx.r28.u64 = ctx.r28.u64 | 1850;
	// ori r27,r27,1852
	ctx.r27.u64 = ctx.r27.u64 | 1852;
	// ori r26,r26,1854
	ctx.r26.u64 = ctx.r26.u64 | 1854;
	// ori r25,r25,1856
	ctx.r25.u64 = ctx.r25.u64 | 1856;
	// ori r24,r24,1858
	ctx.r24.u64 = ctx.r24.u64 | 1858;
	// ori r22,r22,1860
	ctx.r22.u64 = ctx.r22.u64 | 1860;
	// ori r20,r20,1862
	ctx.r20.u64 = ctx.r20.u64 | 1862;
	// addi r14,r21,-21292
	ctx.r14.s64 = ctx.r21.s64 + -21292;
	// ori r8,r8,1864
	ctx.r8.u64 = ctx.r8.u64 | 1864;
	// ori r19,r19,1866
	ctx.r19.u64 = ctx.r19.u64 | 1866;
	// ori r18,r18,1867
	ctx.r18.u64 = ctx.r18.u64 | 1867;
	// ori r17,r17,1868
	ctx.r17.u64 = ctx.r17.u64 | 1868;
	// ori r16,r16,1869
	ctx.r16.u64 = ctx.r16.u64 | 1869;
	// lhz r10,2(r23)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + 2);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r16,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// lwz r16,164(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r17,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r17.u32);
	// lhz r17,140(r1)
	ctx.r17.u64 = REX_LOAD_U16(ctx.r1.u32 + 140);
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lbz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// stw r18,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r18.u32);
	// lhz r18,100(r1)
	ctx.r18.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// stw r19,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// stb r10,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// lhz r19,136(r1)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + 136);
	// lbz r9,5210(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 5210);
	// lhz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + 4);
	// sthx r10,r11,r16
	REX_STORE_U16(ctx.r11.u32 + ctx.r16.u32, ctx.r10.u16);
	// lhz r10,6(r23)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + 6);
	// sthx r10,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u16);
	// sthx r17,r11,r29
	REX_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r17.u16);
	// sthx r18,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r18.u16);
	// sthx r19,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r19.u16);
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r10,-31432(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + -31432);
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// sthx r10,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u16);
	// lbz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lhz r10,2(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 2);
	// sthx r10,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u16);
	// lwz r6,220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lhz r10,4(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 4);
	// sthx r10,r11,r28
	REX_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u16);
	// lhz r10,6(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 6);
	// sthx r10,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u16);
	// lhz r10,8(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 8);
	// sthx r10,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u16);
	// lhz r10,10(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 10);
	// sthx r10,r11,r25
	REX_STORE_U16(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u16);
	// lhz r10,12(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 12);
	// sthx r10,r11,r24
	REX_STORE_U16(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u16);
	// lhz r10,14(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 14);
	// sthx r10,r11,r22
	REX_STORE_U16(ctx.r11.u32 + ctx.r22.u32, ctx.r10.u16);
	// lhz r10,-21292(r21)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r21.u32 + -21292);
	// sthx r10,r11,r20
	REX_STORE_U16(ctx.r11.u32 + ctx.r20.u32, ctx.r10.u16);
	// lhz r10,2(r14)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r14.u32 + 2);
	// sthx r10,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u16);
	// lwz r8,156(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stbx r31,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r31.u8);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stbx r5,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u8);
	// lwz r31,112(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// ori r30,r7,32768
	ctx.r30.u64 = ctx.r7.u64 | 32768;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lbz r10,9646(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 9646);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r5,r8,33252
	ctx.r5.u64 = ctx.r8.u64 | 33252;
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// addi r4,r10,12032
	ctx.r4.s64 = ctx.r10.s64 + 12032;
	// addi r3,r9,9448
	ctx.r3.s64 = ctx.r9.s64 + 9448;
	// lwz r9,232(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
loc_8994EC94:
	// lbzx r29,r6,r3
	ctx.r29.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// li r8,512
	ctx.r8.s64 = 512;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stbx r29,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u8);
loc_8994ECAC:
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r29,r7,r10
	ctx.r29.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// stwx r8,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r8.u32);
	// bdnz 0x8994ecac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994ECAC;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8994ec94
	if (ctx.cr6.lt) goto loc_8994EC94;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// lis r6,12
	ctx.r6.s64 = 786432;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r5,-30274
	ctx.r5.s64 = -1984036864;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// lbz r10,530(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 530);
	// lis r3,-30273
	ctx.r3.s64 = -1983971328;
	// lwz r9,576(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 576);
	// ori r30,r6,1936
	ctx.r30.u64 = ctx.r6.u64 | 1936;
	// lis r31,12
	ctx.r31.s64 = 786432;
	// lbz r8,9518(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 9518);
	// ori r4,r4,1940
	ctx.r4.u64 = ctx.r4.u64 | 1940;
	// lbz r6,522(r5)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 522);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// ori r31,r31,1944
	ctx.r31.u64 = ctx.r31.u64 | 1944;
	// lbz r5,6415(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 6415);
	// lis r28,-30276
	ctx.r28.s64 = -1984167936;
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// lis r29,12
	ctx.r29.s64 = 786432;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// stwx r9,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// lbz r7,6034(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 6034);
	// ori r4,r29,1945
	ctx.r4.u64 = ctx.r29.u64 | 1945;
	// lis r27,-30273
	ctx.r27.s64 = -1983971328;
	// stbx r8,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
	// lis r30,12
	ctx.r30.s64 = 786432;
	// lbz r10,32547(r28)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 32547);
	// ori r3,r3,1946
	ctx.r3.u64 = ctx.r3.u64 | 1946;
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// lis r31,12
	ctx.r31.s64 = 786432;
	// stbx r7,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// ori r30,r30,1947
	ctx.r30.u64 = ctx.r30.u64 | 1947;
	// lbz r9,6419(r27)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 6419);
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// ori r31,r31,1948
	ctx.r31.u64 = ctx.r31.u64 | 1948;
	// stbx r6,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// lbz r8,9654(r28)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + 9654);
	// lis r4,12
	ctx.r4.s64 = 786432;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// stbx r5,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r5.u8);
	// lhz r7,-9488(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + -9488);
	// lis r28,12
	ctx.r28.s64 = 786432;
	// ori r4,r4,1949
	ctx.r4.u64 = ctx.r4.u64 | 1949;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lhz r6,-8692(r27)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r27.u32 + -8692);
	// lis r30,12
	ctx.r30.s64 = 786432;
	// ori r3,r3,1950
	ctx.r3.u64 = ctx.r3.u64 | 1950;
	// ori r10,r28,1952
	ctx.r10.u64 = ctx.r28.u64 | 1952;
	// ori r31,r30,1954
	ctx.r31.u64 = ctx.r30.u64 | 1954;
	// stbx r9,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// lhz r5,26520(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 26520);
	// lis r29,12
	ctx.r29.s64 = 786432;
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// sthx r7,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// lis r4,-30251
	ctx.r4.s64 = -1982529536;
	// lis r3,-30269
	ctx.r3.s64 = -1983709184;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
	// lis r30,-30269
	ctx.r30.s64 = -1983709184;
	// lhz r6,9540(r28)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r28.u32 + 9540);
	// ori r31,r29,1956
	ctx.r31.u64 = ctx.r29.u64 | 1956;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lhz r10,-8696(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + -8696);
	// lhz r9,12064(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 12064);
	// lis r29,12
	ctx.r29.s64 = 786432;
	// lhz r8,-10760(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + -10760);
	// lis r4,12
	ctx.r4.s64 = 786432;
	// lhz r7,-21220(r30)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + -21220);
	// lis r3,12
	ctx.r3.s64 = 786432;
	// lis r30,12
	ctx.r30.s64 = 786432;
	// sthx r5,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u16);
	// ori r31,r29,1958
	ctx.r31.u64 = ctx.r29.u64 | 1958;
	// lhz r5,20420(r28)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 20420);
	// ori r4,r4,1960
	ctx.r4.u64 = ctx.r4.u64 | 1960;
	// ori r3,r3,1962
	ctx.r3.u64 = ctx.r3.u64 | 1962;
	// ori r30,r30,1964
	ctx.r30.u64 = ctx.r30.u64 | 1964;
	// lis r29,12
	ctx.r29.s64 = 786432;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// sthx r9,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u16);
	// lis r31,12
	ctx.r31.s64 = 786432;
	// sthx r8,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u16);
	// lis r3,-30276
	ctx.r3.s64 = -1984167936;
	// sthx r7,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r7.u16);
	// ori r7,r29,1966
	ctx.r7.u64 = ctx.r29.u64 | 1966;
	// ori r31,r31,1968
	ctx.r31.u64 = ctx.r31.u64 | 1968;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// lhz r10,-31404(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + -31404);
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// ori r4,r4,1970
	ctx.r4.u64 = ctx.r4.u64 | 1970;
	// sthx r6,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u16);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// sthx r5,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u16);
	// lis r30,12
	ctx.r30.s64 = 786432;
	// lwz r7,32028(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32028);
	// lis r28,12
	ctx.r28.s64 = 786432;
	// lwz r6,3356(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 3356);
	// lis r27,-30242
	ctx.r27.s64 = -1981939712;
	// lhz r9,12604(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 12604);
	// ori r31,r30,1972
	ctx.r31.u64 = ctx.r30.u64 | 1972;
	// sthx r10,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// lis r3,12
	ctx.r3.s64 = 786432;
	// lwz r8,6048(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 6048);
	// ori r29,r28,1976
	ctx.r29.u64 = ctx.r28.u64 | 1976;
	// lis r30,12
	ctx.r30.s64 = 786432;
	// lis r28,12
	ctx.r28.s64 = 786432;
	// lwz r5,-21384(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + -21384);
	// ori r10,r3,1980
	ctx.r10.u64 = ctx.r3.u64 | 1980;
	// sthx r9,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// ori r4,r30,1984
	ctx.r4.u64 = ctx.r30.u64 | 1984;
	// ori r3,r28,1988
	ctx.r3.u64 = ctx.r28.u64 | 1988;
	// stwx r8,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// li r9,512
	ctx.r9.s64 = 512;
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// stwx r7,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// lis r10,12
	ctx.r10.s64 = 786432;
	// stwx r6,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// stwx r5,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// ori r5,r10,1992
	ctx.r5.u64 = ctx.r10.u64 | 1992;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,12
	ctx.r9.s64 = 786432;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// ori r27,r9,1995
	ctx.r27.u64 = ctx.r9.u64 | 1995;
	// lis r9,12
	ctx.r9.s64 = 786432;
	// ori r4,r4,1993
	ctx.r4.u64 = ctx.r4.u64 | 1993;
	// ori r22,r9,1998
	ctx.r22.u64 = ctx.r9.u64 | 1998;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// lis r3,-30274
	ctx.r3.s64 = -1984036864;
	// ori r29,r10,1994
	ctx.r29.u64 = ctx.r10.u64 | 1994;
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// lis r8,12
	ctx.r8.s64 = 786432;
	// lis r26,-30275
	ctx.r26.s64 = -1984102400;
	// ori r25,r8,1996
	ctx.r25.u64 = ctx.r8.u64 | 1996;
	// lis r7,12
	ctx.r7.s64 = 786432;
	// lis r24,-30273
	ctx.r24.s64 = -1983971328;
	// ori r23,r7,1997
	ctx.r23.u64 = ctx.r7.u64 | 1997;
	// addis r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 786432;
	// addis r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 786432;
	// lbz r9,12323(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 12323);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,1999
	ctx.r8.s64 = ctx.r8.s64 + 1999;
	// addi r7,r7,2511
	ctx.r7.s64 = ctx.r7.s64 + 2511;
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// lbz r9,-31401(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + -31401);
	// stbx r9,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// lbz r9,531(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 531);
	// stbx r9,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u8);
	// lbz r9,6026(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 6026);
	// stbx r9,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u8);
	// lbz r9,9643(r28)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + 9643);
	// stbx r9,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r9.u8);
	// lbz r9,9526(r26)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r26.u32 + 9526);
	// stbx r9,r11,r23
	REX_STORE_U8(ctx.r11.u32 + ctx.r23.u32, ctx.r9.u8);
	// lbz r9,6414(r24)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r24.u32 + 6414);
	// stbx r9,r11,r22
	REX_STORE_U8(ctx.r11.u32 + ctx.r22.u32, ctx.r9.u8);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// addi r9,r9,8544
	ctx.r9.s64 = ctx.r9.s64 + 8544;
	// addi r6,r6,12280
	ctx.r6.s64 = ctx.r6.s64 + 12280;
loc_8994EF74:
	// lbzx r5,r10,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// stbx r5,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u8);
	// lbzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r4,r7,r10
	REX_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8994ef74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994EF74;
	// li r9,96
	ctx.r9.s64 = 96;
	// addis r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 786432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,3023
	ctx.r8.s64 = ctx.r8.s64 + 3023;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// addi r9,r9,9544
	ctx.r9.s64 = ctx.r9.s64 + 9544;
loc_8994EFA8:
	// lbzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r7,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8994efa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994EFA8;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// lis r6,12
	ctx.r6.s64 = 786432;
	// lis r5,-30214
	ctx.r5.s64 = -1980104704;
	// lis r3,-30214
	ctx.r3.s64 = -1980104704;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// lwz r10,-9212(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// ori r30,r6,3120
	ctx.r30.u64 = ctx.r6.u64 | 3120;
	// lwz r9,3488(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 3488);
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// lis r7,-30214
	ctx.r7.s64 = -1980104704;
	// lhz r6,3500(r5)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + 3500);
	// lis r31,12
	ctx.r31.s64 = 786432;
	// lwz r5,3504(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3504);
	// ori r4,r4,3124
	ctx.r4.u64 = ctx.r4.u64 | 3124;
	// lis r29,12
	ctx.r29.s64 = 786432;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// ori r3,r31,3128
	ctx.r3.u64 = ctx.r31.u64 | 3128;
	// lhz r8,3492(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 3492);
	// lis r28,12
	ctx.r28.s64 = 786432;
	// lhz r7,3496(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 3496);
	// lis r31,12
	ctx.r31.s64 = 786432;
	// ori r10,r29,3130
	ctx.r10.u64 = ctx.r29.u64 | 3130;
	// stwx r9,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// ori r30,r28,3132
	ctx.r30.u64 = ctx.r28.u64 | 3132;
	// ori r9,r31,3136
	ctx.r9.u64 = ctx.r31.u64 | 3136;
	// sthx r8,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sthx r7,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// sthx r6,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r6.u16);
	// stwx r5,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8997AB48) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x8997AB50;
	__savegprlr_20(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r11,158
	ctx.r9.s64 = ctx.r11.s64 + 158;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// addi r6,r8,9016
	ctx.r6.s64 = ctx.r8.s64 + 9016;
	// mulli r4,r7,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// addi r5,r11,56
	ctx.r5.s64 = ctx.r11.s64 + 56;
	// rlwinm r30,r8,3,23,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x1F8;
	// sthx r8,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r7,r11,60
	ctx.r7.s64 = ctx.r11.s64 + 60;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lwzx r5,r10,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r11,52
	ctx.r29.s64 = ctx.r11.s64 + 52;
	// lwzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// addi r28,r11,52
	ctx.r28.s64 = ctx.r11.s64 + 52;
	// addi r27,r11,69
	ctx.r27.s64 = ctx.r11.s64 + 69;
	// addi r26,r11,69
	ctx.r26.s64 = ctx.r11.s64 + 69;
	// lhzx r8,r9,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// addi r9,r11,206
	ctx.r9.s64 = ctx.r11.s64 + 206;
	// addi r25,r11,70
	ctx.r25.s64 = ctx.r11.s64 + 70;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r24,r11,70
	ctx.r24.s64 = ctx.r11.s64 + 70;
	// rlwinm r8,r6,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// addi r23,r11,71
	ctx.r23.s64 = ctx.r11.s64 + 71;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r22,r11,71
	ctx.r22.s64 = ctx.r11.s64 + 71;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// lwzx r9,r4,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// addi r21,r11,200
	ctx.r21.s64 = ctx.r11.s64 + 200;
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r20,r11,200
	ctx.r20.s64 = ctx.r11.s64 + 200;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// and r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 & ctx.r12.u64;
	// stwx r9,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// lis r12,176
	ctx.r12.s64 = 11534336;
	// lwzx r9,r4,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r7,r10,r28
	REX_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r7.u32);
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// lbzx r6,r4,r27
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r27.u32);
	// stbx r6,r10,r26
	REX_STORE_U8(ctx.r10.u32 + ctx.r26.u32, ctx.r6.u8);
	// lbzx r5,r4,r25
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// stbx r5,r10,r24
	REX_STORE_U8(ctx.r10.u32 + ctx.r24.u32, ctx.r5.u8);
	// lbzx r9,r4,r23
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r23.u32);
	// stbx r9,r10,r22
	REX_STORE_U8(ctx.r10.u32 + ctx.r22.u32, ctx.r9.u8);
	// lbzx r9,r4,r21
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r21.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// stbx r8,r10,r20
	REX_STORE_U8(ctx.r10.u32 + ctx.r20.u32, ctx.r8.u8);
	// lwzx r6,r4,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// and r5,r6,r12
	ctx.r5.u64 = ctx.r6.u64 & ctx.r12.u64;
	// or r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stwx r4,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8997AEA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x8997AEA8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r22,r30,8
	ctx.r22.s64 = ctx.r30.s64 + 8;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// bgt cr6,0x8997dc44
	if (ctx.cr6.gt) goto loc_8997DC44;
	// lis r12,-30312
	ctx.r12.s64 = -1986527232;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-20760
	ctx.r12.s64 = ctx.r12.s64 + -20760;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8997AF88;
	case 1:
		goto loc_8997B274;
	case 2:
		goto loc_8997C018;
	case 3:
		goto loc_8997C0CC;
	case 4:
		goto loc_8997C2A8;
	case 5:
		goto loc_8997C404;
	case 6:
		goto loc_8997C744;
	case 7:
		goto loc_8997C884;
	case 8:
		goto loc_8997C998;
	case 9:
		goto loc_8997C744;
	case 10:
		goto loc_8997C884;
	case 11:
		goto loc_8997C998;
	case 12:
		goto loc_8997CAAC;
	case 13:
		goto loc_8997CBDC;
	case 14:
		goto loc_8997CD08;
	case 15:
		goto loc_8997CAAC;
	case 16:
		goto loc_8997CBDC;
	case 17:
		goto loc_8997CD08;
	case 18:
		goto loc_8997D264;
	case 19:
		goto loc_8997B3FC;
	case 20:
		goto loc_8997B61C;
	case 21:
		goto loc_8997B800;
	case 22:
		goto loc_8997B9D0;
	case 23:
		goto loc_8997BB6C;
	case 24:
		goto loc_8997BD84;
	case 25:
		goto loc_8997CECC;
	case 26:
		goto loc_8997CECC;
	case 27:
		goto loc_8997D01C;
	case 28:
		goto loc_8997D01C;
	case 29:
		goto loc_8997D150;
	case 30:
		goto loc_8997D78C;
	case 31:
		goto loc_8997D9A4;
	case 32:
		goto loc_8997D334;
	case 33:
		goto loc_8997D434;
	case 34:
		goto loc_8997D434;
	case 35:
		goto loc_8997D434;
	case 36:
		goto loc_8997D434;
	case 37:
		goto loc_8997D434;
	case 38:
		goto loc_8997D608;
	case 39:
		goto loc_8997D53C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8997AF88:
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8997b108
	if (ctx.cr6.eq) goto loc_8997B108;
	// bl 0x8997a238
	ctx.lr = 0x8997AFA0;
	sub_8997A238(ctx, base);
	// addi r29,r30,191
	ctx.r29.s64 = ctx.r30.s64 + 191;
	// lbzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x8997b250
	if (ctx.cr6.gt) goto loc_8997B250;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997aff8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997AFF8;
	// bdzf 4*cr6+eq,0x8997b0ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997B0AC;
	// bne cr6,0x8997b0ec
	if (!ctx.cr6.eq) goto loc_8997B0EC;
	// addi r11,r30,195
	ctx.r11.s64 = ctx.r30.s64 + 195;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r8,r10,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8997b250
	if (ctx.cr6.eq) goto loc_8997B250;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r8,256
	ctx.r8.s64 = 256;
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// sthx r8,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u16);
	// b 0x8997b250
	goto loc_8997B250;
loc_8997AFF8:
	// li r10,-12
	ctx.r10.s64 = -12;
	// li r9,-4
	ctx.r9.s64 = -4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x899cfa40
	ctx.lr = 0x8997B01C;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997b038
	if (ctx.cr6.eq) goto loc_8997B038;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8997B038:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,-4
	ctx.r9.s64 = -4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x899cfa40
	ctx.lr = 0x8997B05C;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997b078
	if (ctx.cr6.eq) goto loc_8997B078;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8997B078:
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997b250
	if (ctx.cr6.eq) goto loc_8997B250;
	// lbzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// rlwimi r8,r7,7,0,24
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r8.u64 & 0xFFFFFFFF0000007F);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stbx r6,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u8);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x8997b250
	goto loc_8997B250;
loc_8997B0AC:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// blt cr6,0x8997b250
	if (ctx.cr6.lt) goto loc_8997B250;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r4,r6,25
	ctx.r4.u64 = ctx.r6.u32 & 0x7F;
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// b 0x8997b250
	goto loc_8997B250;
loc_8997B0EC:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8997b250
	if (!ctx.cr6.eq) goto loc_8997B250;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x8997b250
	goto loc_8997B250;
loc_8997B108:
	// bl 0x8991c8b8
	ctx.lr = 0x8997B10C;
	sub_8991C8B8(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997b120
	if (!ctx.cr6.eq) goto loc_8997B120;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x89936360
	ctx.lr = 0x8997B120;
	sub_89936360(ctx, base);
loc_8997B120:
	// addi r9,r30,183
	ctx.r9.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8997b250
	if (ctx.cr6.lt) goto loc_8997B250;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r7,20077
	ctx.r11.u64 = ctx.r7.u64 | 20077;
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// lis r5,-30320
	ctx.r5.s64 = -1987051520;
	// lwz r10,-9212(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r5,9016
	ctx.r6.s64 = ctx.r5.s64 + 9016;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// srawi r10,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r5,r10,17
	ctx.r5.u64 = ctx.r10.u32 & 0x7FFF;
	// mullw r9,r11,r7
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,128
	ctx.r11.s64 = ctx.r10.s64 + 128;
	// rlwinm r10,r5,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// rlwinm r5,r11,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// addi r11,r9,12345
	ctx.r11.s64 = ctx.r9.s64 + 12345;
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lhzx r29,r10,r6
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r4,r4,6,11,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0x1F0000;
	// lhzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// srawi r5,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 16;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// extsh r4,r29
	ctx.r4.s64 = ctx.r29.s16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// mullw r7,r4,r10
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// mullw r4,r9,r10
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// clrlwi r11,r5,17
	ctx.r11.u64 = ctx.r5.u32 & 0x7FFF;
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// lis r7,-30294
	ctx.r7.s64 = -1985347584;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r8,r7,-20588
	ctx.r8.s64 = ctx.r7.s64 + -20588;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r29,r5,17,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0xFFFF;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r10,r30,207
	ctx.r10.s64 = ctx.r30.s64 + 207;
	// rlwinm r11,r9,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFF;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// lbzx r4,r29,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lis r9,-6
	ctx.r9.s64 = -393216;
	// li r8,116
	ctx.r8.s64 = 116;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// bl 0x899d4640
	ctx.lr = 0x8997B250;
	sub_899D4640(ctx, base);
loc_8997B250:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x89933b88
	ctx.lr = 0x8997B26C;
	sub_89933B88(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B274:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997B27C;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// bl 0x8997ab48
	ctx.lr = 0x8997B294;
	sub_8997AB48(ctx, base);
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8997dc44
	if (ctx.cr6.gt) goto loc_8997DC44;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997b310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997B310;
	// bdzf 4*cr6+eq,0x8997b35c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997B35C;
	// bdzf 4*cr6+eq,0x8997b380
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997B380;
	// bne cr6,0x8997b3b8
	if (!ctx.cr6.eq) goto loc_8997B3B8;
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// li r3,46
	ctx.r3.s64 = 46;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addis r7,r8,28
	ctx.r7.s64 = ctx.r8.s64 + 1835008;
	// stwx r7,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// bl 0x89936360
	ctx.lr = 0x8997B2FC;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stbx r5,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r5.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B310:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,195
	ctx.r11.s64 = ctx.r30.s64 + 195;
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// li r8,-128
	ctx.r8.s64 = -128;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stbx r6,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stbx r3,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B35C:
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,180
	ctx.r9.s64 = ctx.r30.s64 + 180;
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B380:
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// addi r10,r30,195
	ctx.r10.s64 = ctx.r30.s64 + 195;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stbx r6,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B3B8:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -65536;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B3FC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997B404;
	sub_8991B9F0(ctx, base);
	// extsh r27,r3
	ctx.r27.s64 = ctx.r3.s16;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x89980080
	ctx.lr = 0x8997B420;
	sub_89980080(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mulli r7,r10,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lbzx r8,r31,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// bgt cr6,0x8997dc44
	if (ctx.cr6.gt) goto loc_8997DC44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997b878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997B878;
	// bdzf 4*cr6+eq,0x8997b484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997B484;
	// bdzf 4*cr6+eq,0x8997b4b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997B4B4;
	// bdzf 4*cr6+eq,0x8997b594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997B594;
	// bne cr6,0x8997b5dc
	if (!ctx.cr6.eq) goto loc_8997B5DC;
loc_8997B470:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8997add0
	ctx.lr = 0x8997B47C;
	sub_8997ADD0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B484:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lis r10,-32
	ctx.r10.s64 = -2097152;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addis r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -65536;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
loc_8997B4A0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B4B4:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x8997dc44
	if (ctx.cr6.lt) goto loc_8997DC44;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r24,0
	ctx.r24.s64 = 0;
	// stbx r24,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u8);
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8997b51c
	if (ctx.cr6.eq) goto loc_8997B51C;
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// bne cr6,0x8997b530
	if (!ctx.cr6.eq) goto loc_8997B530;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,32768
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32768, ctx.xer);
	// bge cr6,0x8997b530
	if (!ctx.cr6.lt) goto loc_8997B530;
	// li r11,20
	ctx.r11.s64 = 20;
	// stwx r24,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r24.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997B514;
	sub_8991B610(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B51C:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8997b4a0
	if (!ctx.cr6.gt) goto loc_8997B4A0;
loc_8997B530:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lhzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B594:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mulli r10,r27,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// ori r7,r8,3
	ctx.r7.u64 = ctx.r8.u64 | 3;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r4,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r4.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B5DC:
	// mulli r11,r27,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r6,r8,0,26,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stbx r6,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B61C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997B624;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// bl 0x89980080
	ctx.lr = 0x8997B63C;
	sub_89980080(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mulli r8,r9,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lhzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r25,r30,12
	ctx.r25.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r7.u32);
	// bne cr6,0x8997b70c
	if (!ctx.cr6.eq) goto loc_8997B70C;
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r9,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// cmplwi cr6,r9,30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 30, ctx.xer);
	// blt cr6,0x8997b70c
	if (ctx.cr6.lt) goto loc_8997B70C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,19
	ctx.r9.s64 = 19;
	// li r8,15
	ctx.r8.s64 = 15;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// stwx r9,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r9.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r8,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997B6F8;
	sub_8991B610(ctx, base);
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// li r6,-1
	ctx.r6.s64 = -1;
	// sthx r6,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B70C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991db50
	ctx.lr = 0x8997B71C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// addi r26,r10,-27640
	ctx.r26.s64 = ctx.r10.s64 + -27640;
loc_8997B738:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,96
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 96, ctx.xer);
	// ble cr6,0x8997b7e4
	if (!ctx.cr6.gt) goto loc_8997B7E4;
	// cmpwi cr6,r6,416
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 416, ctx.xer);
	// bge cr6,0x8997b7e4
	if (!ctx.cr6.lt) goto loc_8997B7E4;
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// rlwinm r9,r6,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// rlwinm r5,r10,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lhzx r11,r9,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// lis r7,5
	ctx.r7.s64 = 327680;
	// lhzx r10,r5,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwzx r29,r31,r3
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r4,r31,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r3,r9,15,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r11,r5,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,9
	ctx.r3.s64 = 9;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x89997ea0
	ctx.lr = 0x8997B7E4;
	sub_89997EA0(ctx, base);
loc_8997B7E4:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x8997b738
	if (ctx.cr6.lt) goto loc_8997B738;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B800:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997B808;
	sub_8991B9F0(ctx, base);
	// extsh r27,r3
	ctx.r27.s64 = ctx.r3.s16;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x89980080
	ctx.lr = 0x8997B824;
	sub_89980080(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mulli r7,r10,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lbzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bgt cr6,0x8997dc44
	if (ctx.cr6.gt) goto loc_8997DC44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997b470
	if (ctx.cr6.eq) goto loc_8997B470;
	// bdz 0x8997b878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8997B878;
	// bdz 0x8997b8bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8997B8BC;
	// bdz 0x8997b8ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8997B8EC;
	// bdz 0x8997b594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8997B594;
	// b 0x8997b5dc
	goto loc_8997B5DC;
loc_8997B878:
	// mulli r11,r27,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// li r3,45
	ctx.r3.s64 = 45;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x89936360
	ctx.lr = 0x8997B8A8;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B8BC:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lis r10,-16
	ctx.r10.s64 = -1048576;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addis r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -65536;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
loc_8997B8D8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B8EC:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x8997dc44
	if (ctx.cr6.lt) goto loc_8997DC44;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r24,0
	ctx.r24.s64 = 0;
	// stbx r24,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997b954
	if (ctx.cr6.eq) goto loc_8997B954;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8997b968
	if (!ctx.cr6.eq) goto loc_8997B968;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x8997b968
	if (!ctx.cr6.lt) goto loc_8997B968;
	// li r11,22
	ctx.r11.s64 = 22;
	// stwx r24,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r24.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997B94C;
	sub_8991B610(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B954:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8997b8d8
	if (!ctx.cr6.gt) goto loc_8997B8D8;
loc_8997B968:
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lhzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997B9D0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997B9D8;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// bl 0x89980080
	ctx.lr = 0x8997B9F0;
	sub_89980080(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mulli r8,r9,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lhzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8997ba24
	if (!ctx.cr6.eq) goto loc_8997BA24;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997BA24:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r29,r30,191
	ctx.r29.s64 = ctx.r30.s64 + 191;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lbzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r4.u32);
	// blt cr6,0x8997bb28
	if (ctx.cr6.lt) goto loc_8997BB28;
	// beq cr6,0x8997bae4
	if (ctx.cr6.eq) goto loc_8997BAE4;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x8997dc44
	if (!ctx.cr6.lt) goto loc_8997DC44;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// li r11,21
	ctx.r11.s64 = 21;
	// li r9,15
	ctx.r9.s64 = 15;
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997BAC8;
	sub_8991B610(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stbx r6,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u8);
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997BAE4:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// blt cr6,0x8997dc44
	if (ctx.cr6.lt) goto loc_8997DC44;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r4,r6,25
	ctx.r4.u64 = ctx.r6.u32 & 0x7F;
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997BB28:
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-72
	ctx.r5.s64 = -72;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x899d0428
	ctx.lr = 0x8997BB40;
	sub_899D0428(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// li r9,129
	ctx.r9.s64 = 129;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997BB6C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997BB74;
	sub_8991B9F0(ctx, base);
	// extsh r27,r3
	ctx.r27.s64 = ctx.r3.s16;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x89980080
	ctx.lr = 0x8997BB90;
	sub_89980080(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mulli r7,r10,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lbzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bgt cr6,0x8997dc44
	if (ctx.cr6.gt) goto loc_8997DC44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997b470
	if (ctx.cr6.eq) goto loc_8997B470;
	// bdz 0x8997b878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8997B878;
	// bdz 0x8997bbe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8997BBE4;
	// bdz 0x8997bc14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8997BC14;
	// bdz 0x8997bcfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8997BCFC;
	// b 0x8997bd44
	goto loc_8997BD44;
loc_8997BBE4:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lis r10,-24
	ctx.r10.s64 = -1572864;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addis r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -65536;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997BC14:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// blt cr6,0x8997dc44
	if (ctx.cr6.lt) goto loc_8997DC44;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997bc80
	if (ctx.cr6.eq) goto loc_8997BC80;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8997bc94
	if (!ctx.cr6.eq) goto loc_8997BC94;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x8997bc94
	if (!ctx.cr6.lt) goto loc_8997BC94;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r9,8
	ctx.r9.s64 = 8;
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997BC78;
	sub_8991B610(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997BC80:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8997b8d8
	if (!ctx.cr6.gt) goto loc_8997B8D8;
loc_8997BC94:
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lhzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997BCFC:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// mulli r11,r27,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// ori r7,r8,3
	ctx.r7.u64 = ctx.r8.u64 | 3;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r4,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r4.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997BD44:
	// mulli r11,r27,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r6,r8,0,26,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997BD84:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997BD8C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// bl 0x89980080
	ctx.lr = 0x8997BDA4;
	sub_89980080(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mulli r8,r9,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lhzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r29,r30,191
	ctx.r29.s64 = ctx.r30.s64 + 191;
	// li r24,0
	ctx.r24.s64 = 0;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8997be64
	if (ctx.cr6.lt) goto loc_8997BE64;
	// bne cr6,0x8997bed4
	if (!ctx.cr6.eq) goto loc_8997BED4;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lhzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
loc_8997BDE8:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x8997bdfc
	if (!ctx.cr6.lt) goto loc_8997BDFC;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8997BDFC:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x8997be10
	if (!ctx.cr6.gt) goto loc_8997BE10;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8997BE10:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8997bde8
	if (ctx.cr6.lt) goto loc_8997BDE8;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sthx r11,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u16);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x8997bed4
	if (!ctx.cr6.eq) goto loc_8997BED4;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,23
	ctx.r10.s64 = 23;
	// li r9,15
	ctx.r9.s64 = 15;
	// stwx r10,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r10.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997BE4C;
	sub_8991B610(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stbx r24,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r24.u8);
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997BE64:
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// lhzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sthx r8,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u16);
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// blt cr6,0x8997be8c
	if (ctx.cr6.lt) goto loc_8997BE8C;
	// sthx r24,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r24.u16);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_8997BE8C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89932b18
	ctx.lr = 0x8997BE94;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89932d30
	ctx.lr = 0x8997BEA0;
	sub_89932D30(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,192
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 192, ctx.xer);
	// bge cr6,0x8997bebc
	if (!ctx.cr6.lt) goto loc_8997BEBC;
	// li r10,192
	ctx.r10.s64 = 192;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8997BEBC:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,320
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 320, ctx.xer);
	// ble cr6,0x8997bed4
	if (!ctx.cr6.gt) goto loc_8997BED4;
	// li r10,320
	ctx.r10.s64 = 320;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8997BED4:
	// addi r27,r30,158
	ctx.r27.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// lhzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// addi r28,r30,36
	ctx.r28.s64 = ctx.r30.s64 + 36;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lhzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// addi r5,r11,-188
	ctx.r5.s64 = ctx.r11.s64 + -188;
	// lis r3,-30320
	ctx.r3.s64 = -1987051520;
	// srawi r11,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 3;
	// addi r26,r3,9016
	ctx.r26.s64 = ctx.r3.s64 + 9016;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,3
	ctx.r5.s64 = 3;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r25,r4
	ctx.r25.s64 = ctx.r4.s16;
	// li r4,3
	ctx.r4.s64 = 3;
	// rlwinm r22,r25,1,22,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x3FE;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lhzx r26,r22,r26
	ctx.r26.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r26.u32);
	// rotlwi r26,r26,16
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 16);
	// srawi r26,r26,24
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFFFFFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 24;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// stwx r9,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r11,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r11.u32);
	// sthx r25,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r25.u16);
	// bl 0x8991db50
	ctx.lr = 0x8997BF7C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r28,r10,-20584
	ctx.r28.s64 = ctx.r10.s64 + -20584;
loc_8997BF94:
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// lhzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// addi r8,r28,4
	ctx.r8.s64 = ctx.r28.s64 + 4;
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r28,2
	ctx.r6.s64 = ctx.r28.s64 + 2;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// extsh r24,r26
	ctx.r24.s64 = ctx.r26.s16;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// li r3,3
	ctx.r3.s64 = 3;
	// lhzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lhzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// extsh r23,r9
	ctx.r23.s64 = ctx.r9.s16;
	// lwzx r8,r31,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rotlwi r9,r6,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// lhzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r6,r23,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r6,r6,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r6.u64;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// add r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// bl 0x899cc3d0
	ctx.lr = 0x8997BFFC;
	sub_899CC3D0(ctx, base);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r7,9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 9, ctx.xer);
	// blt cr6,0x8997bf94
	if (ctx.cr6.lt) goto loc_8997BF94;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997C018:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997C020;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// bl 0x89980080
	ctx.lr = 0x8997C038;
	sub_89980080(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r7,r8,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991db50
	ctx.lr = 0x8997C07C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// addi r9,r9,-20528
	ctx.r9.s64 = ctx.r9.s64 + -20528;
	// lbz r11,7935(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7935);
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r7,5
	ctx.r7.s64 = 327680;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addis r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 1048576;
	// lhzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwzx r5,r31,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x899cc438
	ctx.lr = 0x8997C0C4;
	sub_899CC438(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997C0CC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991ba70
	ctx.lr = 0x8997C0D4;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x89980080
	ctx.lr = 0x8997C0F0;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8997ac60
	ctx.lr = 0x8997C108;
	sub_8997AC60(ctx, base);
	// addi r6,r30,188
	ctx.r6.s64 = ctx.r30.s64 + 188;
	// lbzx r7,r31,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x8997c1bc
	if (ctx.cr6.lt) goto loc_8997C1BC;
	// beq cr6,0x8997c158
	if (ctx.cr6.eq) goto loc_8997C158;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bge cr6,0x8997c228
	if (!ctx.cr6.lt) goto loc_8997C228;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r10,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r10.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997C144;
	sub_8991B610(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,1
	ctx.r7.s64 = 1;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997C158:
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
loc_8997C164:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x8997c178
	if (!ctx.cr6.lt) goto loc_8997C178;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8997C178:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x8997c18c
	if (!ctx.cr6.gt) goto loc_8997C18C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8997C18C:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8997c164
	if (ctx.cr6.lt) goto loc_8997C164;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sthx r11,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u16);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x8997c228
	if (!ctx.cr6.eq) goto loc_8997C228;
loc_8997C1AC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// b 0x8997c228
	goto loc_8997C228;
loc_8997C1BC:
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r5,r8,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lbzx r4,r5,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r3,r4,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8997c1ac
	if (!ctx.cr6.eq) goto loc_8997C1AC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89932b18
	ctx.lr = 0x8997C1E8;
	sub_89932B18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89932d30
	ctx.lr = 0x8997C1F4;
	sub_89932D30(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// bge cr6,0x8997c210
	if (!ctx.cr6.lt) goto loc_8997C210;
	// li r10,128
	ctx.r10.s64 = 128;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8997C210:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 384, ctx.xer);
	// ble cr6,0x8997c228
	if (!ctx.cr6.gt) goto loc_8997C228;
	// li r10,384
	ctx.r10.s64 = 384;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8997C228:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r8,r30,44
	ctx.r8.s64 = ctx.r30.s64 + 44;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// lhzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// addi r11,r11,-124
	ctx.r11.s64 = ctx.r11.s64 + -124;
	// clrlwi r9,r4,29
	ctx.r9.u64 = ctx.r4.u32 & 0x7;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r4,r9,-4
	ctx.r4.s64 = ctx.r9.s64 + -4;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r4,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r4.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997C2A8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991ba70
	ctx.lr = 0x8997C2B0;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x89980080
	ctx.lr = 0x8997C2CC;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8997ac60
	ctx.lr = 0x8997C2E4;
	sub_8997AC60(ctx, base);
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x8997dc44
	if (ctx.cr6.lt) goto loc_8997DC44;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// li r24,0
	ctx.r24.s64 = 0;
	// stbx r24,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u8);
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997c358
	if (ctx.cr6.eq) goto loc_8997C358;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x8997c374
	if (!ctx.cr6.eq) goto loc_8997C374;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x8997c374
	if (!ctx.cr6.lt) goto loc_8997C374;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,16
	ctx.r10.s64 = 16;
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997C348;
	sub_8991B610(ctx, base);
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// stbx r24,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r24.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997C358:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8997c3dc
	if (!ctx.cr6.gt) goto loc_8997C3DC;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x8997C374;
	sub_89936360(ctx, base);
loc_8997C374:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997C3DC:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997C3F4;
	sub_8991B610(ctx, base);
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// stbx r24,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r24.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997C404:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991ba70
	ctx.lr = 0x8997C40C;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x89980080
	ctx.lr = 0x8997C428;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8997ac60
	ctx.lr = 0x8997C440;
	sub_8997AC60(ctx, base);
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lbzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bgt cr6,0x8997c49c
	if (ctx.cr6.gt) goto loc_8997C49C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997c59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997C59C;
	// bdzf 4*cr6+eq,0x8997c654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997C654;
	// bdzf 4*cr6+eq,0x8997c698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997C698;
	// bdzf 4*cr6+eq,0x8997c6b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997C6B0;
	// bne cr6,0x8997c714
	if (!ctx.cr6.eq) goto loc_8997C714;
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r6,r8,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lbzx r5,r6,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// rlwinm r4,r5,0,26,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8997c51c
	if (!ctx.cr6.eq) goto loc_8997C51C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8997C498:
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
loc_8997C49C:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,44
	ctx.r8.s64 = ctx.r30.s64 + 44;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// lhzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwzx r9,r6,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// addi r11,r11,-124
	ctx.r11.s64 = ctx.r11.s64 + -124;
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r4,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r4.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997C51C:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,60
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 60, ctx.xer);
	// blt cr6,0x8997c550
	if (ctx.cr6.lt) goto loc_8997C550;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// b 0x8997c49c
	goto loc_8997C49C;
loc_8997C550:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89932b18
	ctx.lr = 0x8997C558;
	sub_89932B18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89932d30
	ctx.lr = 0x8997C564;
	sub_89932D30(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// bge cr6,0x8997c580
	if (!ctx.cr6.lt) goto loc_8997C580;
	// li r10,128
	ctx.r10.s64 = 128;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8997C580:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 384, ctx.xer);
	// ble cr6,0x8997c49c
	if (!ctx.cr6.gt) goto loc_8997C49C;
	// li r10,384
	ctx.r10.s64 = 384;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// b 0x8997c49c
	goto loc_8997C49C;
loc_8997C59C:
	// addi r29,r30,158
	ctx.r29.s64 = ctx.r30.s64 + 158;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-8
	ctx.r9.s64 = -8;
	// li r8,14
	ctx.r8.s64 = 14;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,0
	ctx.r6.s64 = 0;
	// lhzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x899cfa40
	ctx.lr = 0x8997C5C4;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997c5e0
	if (ctx.cr6.eq) goto loc_8997C5E0;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8997C5E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lhzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// li r9,-8
	ctx.r9.s64 = -8;
	// li r8,-14
	ctx.r8.s64 = -14;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x899cfa40
	ctx.lr = 0x8997C604;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997c620
	if (ctx.cr6.eq) goto loc_8997C620;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8997C620:
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997c49c
	if (ctx.cr6.eq) goto loc_8997C49C;
	// lbzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// rlwimi r8,r7,7,0,24
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r8.u64 & 0xFFFFFFFF0000007F);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stbx r6,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u8);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x8997c49c
	goto loc_8997C49C;
loc_8997C654:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// cmplwi cr6,r9,120
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 120, ctx.xer);
	// blt cr6,0x8997c49c
	if (ctx.cr6.lt) goto loc_8997C49C;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// clrlwi r4,r6,25
	ctx.r4.u64 = ctx.r6.u32 & 0x7F;
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// b 0x8997c49c
	goto loc_8997C49C;
loc_8997C698:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8997c49c
	if (!ctx.cr6.eq) goto loc_8997C49C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8997c498
	goto loc_8997C498;
loc_8997C6B0:
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
loc_8997C6BC:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x8997c6d0
	if (!ctx.cr6.lt) goto loc_8997C6D0;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8997C6D0:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x8997c6e4
	if (!ctx.cr6.gt) goto loc_8997C6E4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8997C6E4:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8997c6bc
	if (ctx.cr6.lt) goto loc_8997C6BC;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sthx r11,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u16);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x8997c49c
	if (!ctx.cr6.eq) goto loc_8997C49C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x8997c49c
	goto loc_8997C49C;
loc_8997C714:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,13
	ctx.r9.s64 = 13;
	// stwx r10,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r10.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997C730;
	sub_8991B610(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997C744:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997C74C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// bl 0x89980080
	ctx.lr = 0x8997C764;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8997c7f0
	if (ctx.cr6.lt) goto loc_8997C7F0;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
loc_8997C7F0:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mulli r5,r7,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lbzx r3,r5,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8997c84c
	if (ctx.cr6.eq) goto loc_8997C84C;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8997c854
	if (!ctx.cr6.eq) goto loc_8997C854;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8997c850
	goto loc_8997C850;
loc_8997C84C:
	// li r11,7
	ctx.r11.s64 = 7;
loc_8997C850:
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
loc_8997C854:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r10,r11,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997C868;
	sub_8991B610(ctx, base);
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,45
	ctx.r3.s64 = 45;
	// sthx r8,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u16);
	// bl 0x89936360
	ctx.lr = 0x8997C87C;
	sub_89936360(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997C884:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997C88C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// bl 0x89980080
	ctx.lr = 0x8997C8A4;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8997dc44
	if (ctx.cr6.lt) goto loc_8997DC44;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r24,0
	ctx.r24.s64 = 0;
	// stbx r24,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997c940
	if (ctx.cr6.eq) goto loc_8997C940;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8997d93c
	if (!ctx.cr6.eq) goto loc_8997D93C;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x8997d93c
	if (!ctx.cr6.lt) goto loc_8997D93C;
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8997c918
	if (ctx.cr6.eq) goto loc_8997C918;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8997c920
	if (!ctx.cr6.eq) goto loc_8997C920;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8997c91c
	goto loc_8997C91C;
loc_8997C918:
	// li r11,8
	ctx.r11.s64 = 8;
loc_8997C91C:
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
loc_8997C920:
	// stwx r24,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r24.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b610
	ctx.lr = 0x8997C92C;
	sub_8991B610(ctx, base);
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997C940:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8997d93c
	if (ctx.cr6.gt) goto loc_8997D93C;
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8997c970
	if (ctx.cr6.eq) goto loc_8997C970;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8997c978
	if (!ctx.cr6.eq) goto loc_8997C978;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8997c974
	goto loc_8997C974;
loc_8997C970:
	// li r11,6
	ctx.r11.s64 = 6;
loc_8997C974:
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
loc_8997C978:
	// stwx r24,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r24.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b610
	ctx.lr = 0x8997C984;
	sub_8991B610(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997C998:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997C9A0;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// bl 0x89980080
	ctx.lr = 0x8997C9B8;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8997ca44
	if (ctx.cr6.lt) goto loc_8997CA44;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
loc_8997CA44:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8997ca80
	if (ctx.cr6.eq) goto loc_8997CA80;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x8997ca88
	if (!ctx.cr6.eq) goto loc_8997CA88;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8997ca84
	goto loc_8997CA84;
loc_8997CA80:
	// li r11,7
	ctx.r11.s64 = 7;
loc_8997CA84:
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
loc_8997CA88:
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997CA98;
	sub_8991B610(ctx, base);
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,-1
	ctx.r9.s64 = -1;
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997CAAC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997CAB4;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x89980080
	ctx.lr = 0x8997CAD0;
	sub_89980080(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8997aa10
	ctx.lr = 0x8997CADC;
	sub_8997AA10(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	// rlwinm r10,r10,0,10,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8997cb70
	if (ctx.cr6.lt) goto loc_8997CB70;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
loc_8997CB70:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x8997cbb0
	if (ctx.cr6.eq) goto loc_8997CBB0;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8997cbb8
	if (!ctx.cr6.eq) goto loc_8997CBB8;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8997cbb4
	goto loc_8997CBB4;
loc_8997CBB0:
	// li r11,13
	ctx.r11.s64 = 13;
loc_8997CBB4:
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
loc_8997CBB8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b610
	ctx.lr = 0x8997CBC0;
	sub_8991B610(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x8997CBC8;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997CBDC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997CBE4;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x89980080
	ctx.lr = 0x8997CC00;
	sub_89980080(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8997aa10
	ctx.lr = 0x8997CC0C;
	sub_8997AA10(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	// rlwinm r10,r10,0,10,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8997dc44
	if (ctx.cr6.lt) goto loc_8997DC44;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r24,0
	ctx.r24.s64 = 0;
	// stbx r24,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997ccb4
	if (ctx.cr6.eq) goto loc_8997CCB4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8997d93c
	if (!ctx.cr6.eq) goto loc_8997D93C;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x8997d93c
	if (!ctx.cr6.lt) goto loc_8997D93C;
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8997cc98
	if (ctx.cr6.eq) goto loc_8997CC98;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8997cca0
	if (!ctx.cr6.eq) goto loc_8997CCA0;
	// li r11,17
	ctx.r11.s64 = 17;
	// stwx r24,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r24.u32);
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997CC90;
	sub_8991B610(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997CC98:
	// li r11,14
	ctx.r11.s64 = 14;
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
loc_8997CCA0:
	// stwx r24,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r24.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b610
	ctx.lr = 0x8997CCAC;
	sub_8991B610(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997CCB4:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8997d93c
	if (ctx.cr6.gt) goto loc_8997D93C;
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8997cce4
	if (ctx.cr6.eq) goto loc_8997CCE4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8997ccec
	if (!ctx.cr6.eq) goto loc_8997CCEC;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8997cce8
	goto loc_8997CCE8;
loc_8997CCE4:
	// li r11,12
	ctx.r11.s64 = 12;
loc_8997CCE8:
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
loc_8997CCEC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b610
	ctx.lr = 0x8997CCF4;
	sub_8991B610(ctx, base);
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// stbx r24,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r24.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997CD08:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997CD10;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x89980080
	ctx.lr = 0x8997CD2C;
	sub_89980080(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8997aa10
	ctx.lr = 0x8997CD38;
	sub_8997AA10(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	// rlwinm r10,r10,0,10,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8997cdcc
	if (ctx.cr6.lt) goto loc_8997CDCC;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
loc_8997CDCC:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997ce58
	if (!ctx.cr6.eq) goto loc_8997CE58;
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r5,r30,192
	ctx.r5.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// mulli r8,r28,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lhzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r4,r6,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r4,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x8997ce2c
	if (ctx.cr6.eq) goto loc_8997CE2C;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x8997ce34
	if (!ctx.cr6.eq) goto loc_8997CE34;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8997ce30
	goto loc_8997CE30;
loc_8997CE2C:
	// li r11,13
	ctx.r11.s64 = 13;
loc_8997CE30:
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
loc_8997CE34:
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997CE44;
	sub_8991B610(ctx, base);
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,-1
	ctx.r9.s64 = -1;
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997CE58:
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991db50
	ctx.lr = 0x8997CE68;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// ori r7,r9,20077
	ctx.r7.u64 = ctx.r9.u64 | 20077;
	// addi r6,r30,200
	ctx.r6.s64 = ctx.r30.s64 + 200;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// addi r3,r8,-12604
	ctx.r3.s64 = ctx.r8.s64 + -12604;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lbzx r7,r6,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// li r8,256
	ctx.r8.s64 = 256;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// srawi r4,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 16;
	// li r5,-40
	ctx.r5.s64 = -40;
	// rlwinm r11,r4,2,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// bl 0x89994f88
	ctx.lr = 0x8997CEC4;
	sub_89994F88(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997CECC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991bba0
	ctx.lr = 0x8997CED4;
	sub_8991BBA0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// bl 0x89980080
	ctx.lr = 0x8997CEEC;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r8,r30,191
	ctx.r8.s64 = ctx.r30.s64 + 191;
	// li r24,0
	ctx.r24.s64 = 0;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8997cf30
	if (ctx.cr6.lt) goto loc_8997CF30;
	// bne cr6,0x8997cf54
	if (!ctx.cr6.eq) goto loc_8997CF54;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bne 0x8997cf54
	if (!ctx.cr0.eq) goto loc_8997CF54;
	// stbx r24,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r24.u8);
	// b 0x8997cf54
	goto loc_8997CF54;
loc_8997CF30:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8997cf54
	if (!ctx.cr6.eq) goto loc_8997CF54;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
loc_8997CF54:
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r6.u32);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lbzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// beq cr6,0x8997cfec
	if (ctx.cr6.eq) goto loc_8997CFEC;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bne cr6,0x8997cff4
	if (!ctx.cr6.eq) goto loc_8997CFF4;
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x8997cff0
	goto loc_8997CFF0;
loc_8997CFEC:
	// li r11,27
	ctx.r11.s64 = 27;
loc_8997CFF0:
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
loc_8997CFF4:
	// stwx r24,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r24.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b610
	ctx.lr = 0x8997D000;
	sub_8991B610(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x8997D008;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D01C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991bba0
	ctx.lr = 0x8997D024;
	sub_8991BBA0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// bl 0x89980080
	ctx.lr = 0x8997D03C;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x8997dc44
	if (ctx.cr6.lt) goto loc_8997DC44;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r24,0
	ctx.r24.s64 = 0;
	// stbx r24,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997d0e0
	if (ctx.cr6.eq) goto loc_8997D0E0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x8997d93c
	if (!ctx.cr6.eq) goto loc_8997D93C;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x8997d93c
	if (!ctx.cr6.lt) goto loc_8997D93C;
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// addi r9,r30,162
	ctx.r9.s64 = ctx.r30.s64 + 162;
	// li r8,29
	ctx.r8.s64 = 29;
	// stwx r24,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r24.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r8,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r8.u32);
	// sthx r11,r9,r31
	REX_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u16);
	// bl 0x8991b610
	ctx.lr = 0x8997D0B4;
	sub_8991B610(ctx, base);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r6,r30,192
	ctx.r6.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r31,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// andc r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r3.u64;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D0E0:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8997d93c
	if (ctx.cr6.gt) goto loc_8997D93C;
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// beq cr6,0x8997d110
	if (ctx.cr6.eq) goto loc_8997D110;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x8997d118
	if (!ctx.cr6.eq) goto loc_8997D118;
	// li r11,26
	ctx.r11.s64 = 26;
	// b 0x8997d114
	goto loc_8997D114;
loc_8997D110:
	// li r11,25
	ctx.r11.s64 = 25;
loc_8997D114:
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
loc_8997D118:
	// stwx r24,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r24.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b610
	ctx.lr = 0x8997D124;
	sub_8991B610(ctx, base);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// andc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// stbx r4,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D150:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991bba0
	ctx.lr = 0x8997D158;
	sub_8991BBA0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// bl 0x89980080
	ctx.lr = 0x8997D170;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8997d1fc
	if (ctx.cr6.lt) goto loc_8997D1FC;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
loc_8997D1FC:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// mulli r10,r29,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lbzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// li r9,6
	ctx.r9.s64 = 6;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lhzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stwx r7,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r7.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997D250;
	sub_8991B610(ctx, base);
	// addi r6,r30,160
	ctx.r6.s64 = ctx.r30.s64 + 160;
	// li r5,-1
	ctx.r5.s64 = -1;
	// sthx r5,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D264:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997D26C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// bl 0x89980080
	ctx.lr = 0x8997D284;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mulli r8,r9,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lhzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x8997dc44
	if (ctx.cr6.lt) goto loc_8997DC44;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D334:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997D33C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8997d7a4
	if (ctx.cr6.lt) goto loc_8997D7A4;
	// bl 0x89980080
	ctx.lr = 0x8997D354;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8997dc44
	if (ctx.cr6.lt) goto loc_8997DC44;
	// addi r8,r30,191
	ctx.r8.s64 = ctx.r30.s64 + 191;
	// li r24,0
	ctx.r24.s64 = 0;
	// stbx r24,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u8);
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8997d3b8
	if (ctx.cr6.lt) goto loc_8997D3B8;
	// bne cr6,0x8997d3dc
	if (!ctx.cr6.eq) goto loc_8997D3DC;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bne 0x8997d3dc
	if (!ctx.cr0.eq) goto loc_8997D3DC;
	// stbx r24,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r24.u8);
	// b 0x8997d3dc
	goto loc_8997D3DC;
loc_8997D3B8:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8997d3dc
	if (!ctx.cr6.eq) goto loc_8997D3DC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
loc_8997D3DC:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D434:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997D43C;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8997d45c
	if (!ctx.cr6.lt) goto loc_8997D45C;
loc_8997D44C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D45C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89980080
	ctx.lr = 0x8997D464;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x8997d4c0
	if (ctx.cr6.lt) goto loc_8997D4C0;
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r7,r8,-20520
	ctx.r7.s64 = ctx.r8.s64 + -20520;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r4,r5,29
	ctx.r4.u64 = ctx.r5.u32 & 0x7;
	// stbx r5,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u8);
	// lbzx r3,r4,r7
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
loc_8997D4C0:
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r11,-126
	ctx.r7.s64 = ctx.r11.s64 + -126;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// stwx r6,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997D4E8;
	sub_8991B610(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r5,-30320
	ctx.r5.s64 = -1987051520;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r5,9016
	ctx.r3.s64 = ctx.r5.s64 + 9016;
	// ori r9,r4,61440
	ctx.r9.u64 = ctx.r4.u64 | 61440;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r30,66
	ctx.r8.s64 = ctx.r30.s64 + 66;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addi r4,r5,128
	ctx.r4.s64 = ctx.r5.s64 + 128;
	// sthx r5,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u16);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r11,r4,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r6,24
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 24;
	// addi r5,r11,192
	ctx.r5.s64 = ctx.r11.s64 + 192;
	// stbx r5,r8,r31
	REX_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D53C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997D544;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8997d44c
	if (ctx.cr6.lt) goto loc_8997D44C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89980080
	ctx.lr = 0x8997D55C;
	sub_89980080(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997d5f4
	if (ctx.cr6.eq) goto loc_8997D5F4;
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 29, ctx.xer);
	// bne cr6,0x8997d5f4
	if (!ctx.cr6.eq) goto loc_8997D5F4;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// oris r7,r10,16384
	ctx.r7.u64 = ctx.r10.u64 | 1073741824;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997D5A0;
	sub_8991B610(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r5,-30320
	ctx.r5.s64 = -1987051520;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r5,9016
	ctx.r3.s64 = ctx.r5.s64 + 9016;
	// ori r9,r4,61440
	ctx.r9.u64 = ctx.r4.u64 | 61440;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r30,66
	ctx.r8.s64 = ctx.r30.s64 + 66;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addi r4,r5,128
	ctx.r4.s64 = ctx.r5.s64 + 128;
	// sthx r5,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u16);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r11,r4,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r6,24
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 24;
	// addi r5,r11,192
	ctx.r5.s64 = ctx.r11.s64 + 192;
	// stbx r5,r8,r31
	REX_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D5F4:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D608:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997D610;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8997d44c
	if (ctx.cr6.lt) goto loc_8997D44C;
	// mulli r3,r11,208
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// addi r29,r10,9016
	ctx.r29.s64 = ctx.r10.s64 + 9016;
	// lhzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// rlwinm r10,r7,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// lwzx r4,r3,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// rlwinm r7,r9,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// srawi r9,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 4;
	// lhzx r6,r10,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// extsh r27,r6
	ctx.r27.s64 = ctx.r6.s16;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// mullw r25,r9,r27
	ctx.r25.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r7,r5,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// extsh r24,r6
	ctx.r24.s64 = ctx.r6.s16;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// srawi r6,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 8;
	// srawi r25,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 8;
	// clrlwi r10,r5,28
	ctx.r10.u64 = ctx.r5.u32 & 0xF;
	// subf r5,r25,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r25.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r5,r5,224
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(224));
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// mullw r9,r9,r24
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addis r6,r5,-8
	ctx.r6.s64 = ctx.r5.s64 + -524288;
	// mullw r5,r11,r27
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// stwx r6,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r28,r30,36
	ctx.r28.s64 = ctx.r30.s64 + 36;
	// addi r27,r30,32
	ctx.r27.s64 = ctx.r30.s64 + 32;
	// addi r25,r30,206
	ctx.r25.s64 = ctx.r30.s64 + 206;
	// lwzx r7,r3,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// lis r26,1
	ctx.r26.s64 = 65536;
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// ori r7,r26,61440
	ctx.r7.u64 = ctx.r26.u64 | 61440;
	// stwx r9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r8,r30,200
	ctx.r8.s64 = ctx.r30.s64 + 200;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r26,r30,200
	ctx.r26.s64 = ctx.r30.s64 + 200;
	// stwx r4,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r4.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lhzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// stwx r6,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stwx r4,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbzx r9,r25,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r31.u32);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// addi r5,r6,128
	ctx.r5.s64 = ctx.r6.s64 + 128;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r4,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// lbzx r11,r3,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// mullw r3,r5,r7
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// sthx r6,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u16);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r30,66
	ctx.r4.s64 = ctx.r30.s64 + 66;
	// srawi r11,r3,24
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 24;
	// stbx r10,r26,r31
	REX_STORE_U8(ctx.r26.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r8,r11,192
	ctx.r8.s64 = ctx.r11.s64 + 192;
	// stbx r8,r4,r31
	REX_STORE_U8(ctx.r4.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D78C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997D794;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8997d7b0
	if (!ctx.cr6.lt) goto loc_8997D7B0;
loc_8997D7A0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8997D7A4:
	// bl 0x8997a090
	ctx.lr = 0x8997D7A8;
	sub_8997A090(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D7B0:
	// mulli r6,r11,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r5,r30,158
	ctx.r5.s64 = ctx.r30.s64 + 158;
	// lis r4,-30320
	ctx.r4.s64 = -1987051520;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// addi r8,r4,9016
	ctx.r8.s64 = ctx.r4.s64 + 9016;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lhzx r5,r6,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lwzx r3,r31,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r5,r5,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// lwzx r9,r6,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r4,r10,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// lhzx r3,r5,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// addi r5,r30,206
	ctx.r5.s64 = ctx.r30.s64 + 206;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhzx r4,r4,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// mullw r27,r10,r3
	ctx.r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// lbzx r8,r5,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r31.u32);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// mullw r4,r11,r3
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// mullw r3,r11,r5
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 8;
	// mullw r5,r10,r5
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// subf r3,r3,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addi r27,r30,200
	ctx.r27.s64 = ctx.r30.s64 + 200;
	// mulli r11,r3,224
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(224));
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// addis r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 524288;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r5,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r5.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r7,r6,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// stwx r4,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r4.u32);
	// lbzx r9,r6,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r27.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stbx r9,r3,r31
	REX_STORE_U8(ctx.r3.u32 + ctx.r31.u32, ctx.r9.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997d900
	if (ctx.cr6.eq) goto loc_8997D900;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// beq cr6,0x8997d8b4
	if (ctx.cr6.eq) goto loc_8997D8B4;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// blt cr6,0x8997dc44
	if (ctx.cr6.lt) goto loc_8997DC44;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x8997d93c
	goto loc_8997D93C;
loc_8997D8B4:
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// blt cr6,0x8997dc44
	if (ctx.cr6.lt) goto loc_8997DC44;
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// li r8,0
	ctx.r8.s64 = 0;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// lhzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,32768
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32768, ctx.xer);
	// bge cr6,0x8997d93c
	if (!ctx.cr6.lt) goto loc_8997D93C;
	// li r11,31
	ctx.r11.s64 = 31;
	// li r9,32
	ctx.r9.s64 = 32;
	// stwx r11,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997D8EC;
	sub_8991B610(ctx, base);
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// li r7,256
	ctx.r7.s64 = 256;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D900:
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lhzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r4,r6,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lbzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// and r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 & ctx.r5.u64;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r9,1
	ctx.r9.s64 = 1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
loc_8997D93C:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lhzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997D9A4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997D9AC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8997d7a0
	if (ctx.cr6.lt) goto loc_8997D7A0;
	// mulli r7,r11,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r6,r30,158
	ctx.r6.s64 = ctx.r30.s64 + 158;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// addi r29,r11,9016
	ctx.r29.s64 = ctx.r11.s64 + 9016;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// lhzx r3,r7,r6
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r8,r3,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// lwzx r5,r4,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lwzx r9,r7,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// lhzx r3,r8,r29
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lhzx r4,r4,r29
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// mullw r3,r10,r5
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// mullw r5,r11,r5
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r11,r8
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
	// mullw r3,r10,r8
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mulli r10,r11,224
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(224));
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// addis r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 524288;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r5,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r5.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwx r4,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r4.u32);
	// blt cr6,0x8997db14
	if (ctx.cr6.lt) goto loc_8997DB14;
	// bne cr6,0x8997dc44
	if (!ctx.cr6.eq) goto loc_8997DC44;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lhzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
loc_8997DA8C:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x8997daa0
	if (!ctx.cr6.lt) goto loc_8997DAA0;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8997DAA0:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x8997dab4
	if (!ctx.cr6.gt) goto loc_8997DAB4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8997DAB4:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8997da8c
	if (ctx.cr6.lt) goto loc_8997DA8C;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sthx r11,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u16);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x8997db08
	if (!ctx.cr6.eq) goto loc_8997DB08;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,30
	ctx.r10.s64 = 30;
	// li r9,15
	ctx.r9.s64 = 15;
	// stwx r10,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r10.u32);
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997DAF0;
	sub_8991B610(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stbx r24,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r24.u8);
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997DB08:
	// bl 0x8991b7f8
	ctx.lr = 0x8997DB0C;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997DB14:
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lhzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r4,r6,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lbzx r10,r4,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// and r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 & ctx.r5.u64;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8997db54
	if (!ctx.cr6.eq) goto loc_8997DB54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8997DB54:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89932b18
	ctx.lr = 0x8997DB5C;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89932d30
	ctx.lr = 0x8997DB68;
	sub_89932D30(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x8997DB70;
	sub_8991B7F8(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991db50
	ctx.lr = 0x8997DB80;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8997dc44
	if (ctx.cr6.eq) goto loc_8997DC44;
	// addi r28,r30,158
	ctx.r28.s64 = ctx.r30.s64 + 158;
	// lwzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwzx r7,r31,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r26,r30,200
	ctx.r26.s64 = ctx.r30.s64 + 200;
	// ori r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 49152;
	// lhzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// rlwinm r4,r10,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r5,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r4,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// lhzx r5,r3,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r29.u32);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mullw r10,r4,r6
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// mulli r5,r6,224
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(224));
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r29,r8,r7
	ctx.r29.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r25,r10,-20512
	ctx.r25.s64 = ctx.r10.s64 + -20512;
loc_8997DBF8:
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// lbzx r11,r26,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r31.u32);
	// lhzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhzx r11,r9,r25
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// bl 0x899a8438
	ctx.lr = 0x8997DC30;
	sub_899A8438(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x8997dbf8
	if (ctx.cr6.lt) goto loc_8997DBF8;
loc_8997DC44:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999A6E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x8999A6F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r26,r11,48
	ctx.r26.s64 = ctx.r11.s64 + 48;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// lhzx r7,r31,r26
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// addic. r10,r7,-160
	ctx.xer.ca = ctx.r7.u32 > 159;
	ctx.r10.s64 = ctx.r7.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8999a734
	if (!ctx.cr0.lt) goto loc_8999A734;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8999A734:
	// cmpwi cr6,r10,208
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 208, ctx.xer);
	// ble cr6,0x8999a74c
	if (!ctx.cr6.gt) goto loc_8999A74C;
loc_8999A73C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_8999A74C:
	// addi r28,r11,52
	ctx.r28.s64 = ctx.r11.s64 + 52;
	// addi r8,r11,60
	ctx.r8.s64 = ctx.r11.s64 + 60;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// lhzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r29,r6
	ctx.r29.s64 = ctx.r6.s16;
	// addic. r10,r29,-512
	ctx.xer.ca = ctx.r29.u32 > 511;
	ctx.r10.s64 = ctx.r29.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8999a778
	if (!ctx.cr0.lt) goto loc_8999A778;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8999A778:
	// cmpwi cr6,r10,208
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 208, ctx.xer);
	// bgt cr6,0x8999a73c
	if (ctx.cr6.gt) goto loc_8999A73C;
	// addi r30,r11,188
	ctx.r30.s64 = ctx.r11.s64 + 188;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r27,r10,25128
	ctx.r27.s64 = ctx.r10.s64 + 25128;
	// lbzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8999a874
	if (ctx.cr6.lt) goto loc_8999A874;
	// beq cr6,0x8999a80c
	if (ctx.cr6.eq) goto loc_8999A80C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8999a8b0
	if (!ctx.cr6.lt) goto loc_8999A8B0;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// b 0x8999a8b0
	goto loc_8999A8B0;
loc_8999A80C:
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addi r9,r9,-4096
	ctx.r9.s64 = ctx.r9.s64 + -4096;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// lwzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// b 0x8999a8b0
	goto loc_8999A8B0;
loc_8999A874:
	// cmpwi cr6,r7,256
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 256, ctx.xer);
	// bgt cr6,0x8999a8b0
	if (ctx.cr6.gt) goto loc_8999A8B0;
	// bl 0x899329e0
	ctx.lr = 0x8999A880;
	sub_899329E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r10,r27,28
	ctx.r10.s64 = ctx.r27.s64 + 28;
	// mulli r9,r11,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lhzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subfc r6,r7,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r7.u32;
	ctx.r6.u64 = ctx.r29.u64 - ctx.r7.u64;
	// eqv r5,r7,r29
	ctx.r5.u64 = ~(ctx.r7.u64 ^ ctx.r29.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
loc_8999A8B0:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x8999A8C0;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999a920
	if (ctx.cr6.eq) goto loc_8999A920;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991aae8
	ctx.lr = 0x8999A8D0;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999a920
	if (ctx.cr6.eq) goto loc_8999A920;
	// bl 0x899329e0
	ctx.lr = 0x8999A8DC;
	sub_899329E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwzx r30,r31,r28
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r27,28
	ctx.r10.s64 = ctx.r27.s64 + 28;
	// mulli r9,r11,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r31,r31,r26
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r27,24
	ctx.r8.s64 = ctx.r27.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x89932c20
	ctx.lr = 0x8999A908;
	sub_89932C20(ctx, base);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// bl 0x899cc3d0
	ctx.lr = 0x8999A920;
	sub_899CC3D0(ctx, base);
loc_8999A920:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999BF10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x8999BF18;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lwz r11,27852(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 27852);
	// lhz r30,26864(r9)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r9.u32 + 26864);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,27852(r10)
	REX_STORE_U32(ctx.r10.u32 + 27852, ctx.r11.u32);
	// bl 0x89934058
	ctx.lr = 0x8999BF40;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999c0d4
	if (ctx.cr6.eq) goto loc_8999C0D4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8991b880
	ctx.lr = 0x8999BF50;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999c0d4
	if (ctx.cr6.eq) goto loc_8999C0D4;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r9,-24528
	ctx.r9.s64 = -1607467008;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// li r21,0
	ctx.r21.s64 = 0;
	// lhz r27,-4592(r10)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// extsh r6,r27
	ctx.r6.s64 = ctx.r27.s16;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mulli r29,r6,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// stwx r21,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r21.u32);
	// stwx r21,r29,r5
	REX_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r21.u32);
	// clrlwi r23,r30,16
	ctx.r23.u64 = ctx.r30.u32 & 0xFFFF;
	// ori r4,r9,16
	ctx.r4.u64 = ctx.r9.u64 | 16;
	// stwx r23,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r23.u32);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// stwx r4,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r4.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r25,r10,-4592
	ctx.r25.s64 = ctx.r10.s64 + -4592;
	// lbz r30,4946(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 4946);
	// bl 0x8991b538
	ctx.lr = 0x8999BFB0;
	sub_8991B538(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991c578
	ctx.lr = 0x8999BFB8;
	sub_8991C578(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// extsb r4,r30
	ctx.r4.s64 = ctx.r30.s8;
	// bl 0x8991c678
	ctx.lr = 0x8999BFC8;
	sub_8991C678(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// extsb r9,r30
	ctx.r9.s64 = ctx.r30.s8;
	// addi r30,r10,9656
	ctx.r30.s64 = ctx.r10.s64 + 9656;
	// mulli r22,r9,92
	ctx.r22.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(92));
	// addi r8,r30,64
	ctx.r8.s64 = ctx.r30.s64 + 64;
	// extsh r7,r28
	ctx.r7.s64 = ctx.r28.s16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r22,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r8.u32);
	// lwzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// bl 0x8991cac0
	ctx.lr = 0x8999BFF4;
	sub_8991CAC0(ctx, base);
	// lis r4,-30294
	ctx.r4.s64 = -1985347584;
	// addi r19,r30,76
	ctx.r19.s64 = ctx.r30.s64 + 76;
	// addi r11,r4,-11908
	ctx.r11.s64 = ctx.r4.s64 + -11908;
	// addi r20,r31,52
	ctx.r20.s64 = ctx.r31.s64 + 52;
	// addi r30,r11,-2
	ctx.r30.s64 = ctx.r11.s64 + -2;
	// lis r11,-16352
	ctx.r11.s64 = -1071644672;
	// li r26,2
	ctx.r26.s64 = 2;
	// ori r24,r11,16384
	ctx.r24.u64 = ctx.r11.u64 | 16384;
loc_8999C014:
	// lhzu r28,2(r25)
	ea = 2 + ctx.r25.u32;
	ctx.r28.u64 = REX_LOAD_U16(ea);
	ctx.r25.u32 = ea;
	// addi r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 + 148;
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// extsh r8,r28
	ctx.r8.s64 = ctx.r28.s16;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// mulli r18,r8,208
	ctx.r18.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// sthx r27,r18,r11
	REX_STORE_U16(ctx.r18.u32 + ctx.r11.u32, ctx.r27.u16);
	// stwx r23,r18,r9
	REX_STORE_U32(ctx.r18.u32 + ctx.r9.u32, ctx.r23.u32);
	// stwx r24,r18,r31
	REX_STORE_U32(ctx.r18.u32 + ctx.r31.u32, ctx.r24.u32);
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r5,r18,r7
	REX_STORE_U32(ctx.r18.u32 + ctx.r7.u32, ctx.r5.u32);
	// stwx r21,r18,r6
	REX_STORE_U32(ctx.r18.u32 + ctx.r6.u32, ctx.r21.u32);
	// bl 0x8991b538
	ctx.lr = 0x8999C054;
	sub_8991B538(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991c578
	ctx.lr = 0x8999C05C;
	sub_8991C578(ctx, base);
	// lhz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// lhz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// lbzx r7,r22,r19
	ctx.r7.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r19.u32);
	// rotlwi r11,r4,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// lbzu r9,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// stwx r11,r18,r3
	REX_STORE_U32(ctx.r18.u32 + ctx.r3.u32, ctx.r11.u32);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwzx r8,r29,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stwx r4,r18,r6
	REX_STORE_U32(ctx.r18.u32 + ctx.r6.u32, ctx.r4.u32);
	// addi r8,r31,204
	ctx.r8.s64 = ctx.r31.s64 + 204;
	// stwx r10,r18,r5
	REX_STORE_U32(ctx.r18.u32 + ctx.r5.u32, ctx.r10.u32);
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// addi r5,r31,192
	ctx.r5.s64 = ctx.r31.s64 + 192;
	// lwzx r11,r29,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r20.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r7,r18,r8
	REX_STORE_U8(ctx.r18.u32 + ctx.r8.u32, ctx.r7.u8);
	// stbx r7,r18,r6
	REX_STORE_U8(ctx.r18.u32 + ctx.r6.u32, ctx.r7.u8);
	// stbx r9,r18,r5
	REX_STORE_U8(ctx.r18.u32 + ctx.r5.u32, ctx.r9.u8);
	// stwx r4,r18,r3
	REX_STORE_U32(ctx.r18.u32 + ctx.r3.u32, ctx.r4.u32);
	// bne 0x8999c014
	if (!ctx.cr0.eq) goto loc_8999C014;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_8999C0D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999D748) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8999D750;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mulli r29,r9,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r29,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// addi r3,r31,206
	ctx.r3.s64 = ctx.r31.s64 + 206;
	// lwzx r11,r30,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// addi r7,r31,200
	ctx.r7.s64 = ctx.r31.s64 + 200;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r30,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// stwx r11,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// lwzx r11,r29,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r9,r30,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// stwx r5,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r5.u32);
	// lbzx r10,r29,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r11,r30,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stbx r4,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r4.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8999d800
	if (ctx.cr6.eq) goto loc_8999D800;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8999d834
	if (!ctx.cr6.eq) goto loc_8999D834;
	// addi r11,r31,192
	ctx.r11.s64 = ctx.r31.s64 + 192;
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// lbzx r7,r29,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r6,r30,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999d8c0
	if (ctx.cr6.eq) goto loc_8999D8C0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x8999d82c
	goto loc_8999D82C;
loc_8999D800:
	// addi r11,r31,192
	ctx.r11.s64 = ctx.r31.s64 + 192;
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// lbzx r7,r29,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r6,r30,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999d8c0
	if (ctx.cr6.eq) goto loc_8999D8C0;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x8999D828;
	sub_89936360(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8999D82C:
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// sthx r10,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8999D834:
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// lwzx r10,r30,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// lhzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r6.u32);
	// beq 0x8999d8a0
	if (ctx.cr0.eq) goto loc_8999D8A0;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x8999d8c0
	if (!ctx.cr6.eq) goto loc_8999D8C0;
loc_8999D8A0:
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// addi r11,r31,192
	ctx.r11.s64 = ctx.r31.s64 + 192;
	// lbzx r9,r30,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lbzx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// subfic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 <= 4294967295;
	ctx.r5.u64 = static_cast<uint64_t>(-1) - ctx.r7.u64;
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// stbx r4,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r4.u8);
loc_8999D8C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999F230) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8999F238;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r29,r10,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// add r31,r29,r30
	ctx.r31.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lbz r11,183(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 183);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8999f35c
	if (ctx.cr6.eq) goto loc_8999F35C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,183(r31)
	REX_STORE_U8(ctx.r31.u32 + 183, ctx.r11.u8);
	// bl 0x89932b18
	ctx.lr = 0x8999F268;
	sub_89932B18(ctx, base);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lhz r7,158(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 158);
	// addi r11,r9,25128
	ctx.r11.s64 = ctx.r9.s64 + 25128;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r5,r8,696
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(696));
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// lwzx r6,r5,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r5,r5,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// bl 0x89932c20
	ctx.lr = 0x8999F29C;
	sub_89932C20(ctx, base);
	// subf r8,r3,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r3.u64;
	// clrlwi r10,r8,23
	ctx.r10.u64 = ctx.r8.u32 & 0x1FF;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x8999f2b8
	if (!ctx.cr6.lt) goto loc_8999F2B8;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// sth r11,158(r31)
	REX_STORE_U16(ctx.r31.u32 + 158, ctx.r11.u16);
loc_8999F2B8:
	// ble cr6,0x8999f2c8
	if (!ctx.cr6.gt) goto loc_8999F2C8;
	// lhz r11,158(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 158);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// sth r9,158(r31)
	REX_STORE_U16(ctx.r31.u32 + 158, ctx.r9.u16);
loc_8999F2C8:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// lhzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// addi r28,r30,36
	ctx.r28.s64 = ctx.r30.s64 + 36;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwzx r8,r29,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// clrlwi r11,r9,26
	ctx.r11.u64 = ctx.r9.u32 & 0x3F;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r11.u32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r6,r29,r5
	REX_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r29,r4
	REX_STORE_U32(ctx.r29.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r4,r29,r28
	REX_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r4.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r29,r30
	REX_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
	// blt cr6,0x8999f35c
	if (ctx.cr6.lt) goto loc_8999F35C;
	// cmpwi cr6,r10,496
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 496, ctx.xer);
	// bgt cr6,0x8999f35c
	if (ctx.cr6.gt) goto loc_8999F35C;
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8999f374
	if (!ctx.cr6.gt) goto loc_8999F374;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// b 0x8999f370
	goto loc_8999F370;
loc_8999F35C:
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8999f374
	if (!ctx.cr6.lt) goto loc_8999F374;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
loc_8999F370:
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_8999F374:
	// lhz r10,158(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 158);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lwz r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r7,r11,9016
	ctx.r7.s64 = ctx.r11.s64 + 9016;
	// addi r5,r6,128
	ctx.r5.s64 = ctx.r6.s64 + 128;
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r4,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addis r11,r4,-192
	ctx.r11.s64 = ctx.r4.s64 + -12582912;
	// stw r4,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8999f3c4
	if (!ctx.cr0.lt) goto loc_8999F3C4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8999F3C4:
	// lis r8,204
	ctx.r8.s64 = 13369344;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8999f3e0
	if (!ctx.cr6.gt) goto loc_8999F3E0;
loc_8999F3D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_8999F3E0:
	// rlwinm r11,r6,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// lhzx r3,r11,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// lwz r8,-21584(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// subf r8,r8,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r8.u64;
	// stw r5,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// addis r11,r8,-120
	ctx.r11.s64 = ctx.r8.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8999f420
	if (!ctx.cr0.lt) goto loc_8999F420;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8999F420:
	// lis r10,132
	ctx.r10.s64 = 8650752;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8999f3d0
	if (ctx.cr6.gt) goto loc_8999F3D0;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r3,16838
	ctx.r3.s64 = 1103495168;
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// ori r30,r3,20077
	ctx.r30.u64 = ctx.r3.u64 | 20077;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// ori r8,r8,49216
	ctx.r8.u64 = ctx.r8.u64 | 49216;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r10,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 16;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r6,r11,248
	ctx.r6.s64 = ctx.r11.s64 + 248;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r6,r10,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r11,r11,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r6,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r31,r11,r7
	ctx.r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r6,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0xFFFFC000;
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// rlwinm r31,r31,14,0,17
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0xFFFFC000;
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// srawi r11,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 8;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x899d79f8
	ctx.lr = 0x8999F4D0;
	sub_899D79F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A0C70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899A0C78;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30226
	ctx.r11.s64 = -1980891136;
	// li r24,5
	ctx.r24.s64 = 5;
	// addi r31,r11,-21976
	ctx.r31.s64 = ctx.r11.s64 + -21976;
	// li r26,0
	ctx.r26.s64 = 0;
	// sth r24,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r24.u16);
	// addi r11,r31,-1712
	ctx.r11.s64 = ctx.r31.s64 + -1712;
	// li r10,200
	ctx.r10.s64 = 200;
	// stb r26,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// li r9,-24
	ctx.r9.s64 = -24;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-28
	ctx.r8.s64 = -28;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,33
	ctx.r5.s64 = 33;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934b48
	ctx.lr = 0x899A0CC0;
	sub_89934B48(ctx, base);
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// addi r5,r31,-1712
	ctx.r5.s64 = ctx.r31.s64 + -1712;
	// addi r27,r11,-32628
	ctx.r27.s64 = ctx.r11.s64 + -32628;
	// addi r4,r31,-5240
	ctx.r4.s64 = ctx.r31.s64 + -5240;
	// addi r6,r27,-104
	ctx.r6.s64 = ctx.r27.s64 + -104;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935610
	ctx.lr = 0x899A0CE0;
	sub_89935610(ctx, base);
	// addi r8,r31,3560
	ctx.r8.s64 = ctx.r31.s64 + 3560;
	// li r25,4
	ctx.r25.s64 = 4;
	// stb r26,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r10,200
	ctx.r10.s64 = 200;
	// li r9,-28
	ctx.r9.s64 = -28;
	// sth r25,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r25.u16);
	// li r8,-28
	ctx.r8.s64 = -28;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x89934b48
	ctx.lr = 0x899A0D18;
	sub_89934B48(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_899A0D20:
	// rlwinm r28,r11,14,2,17
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFFC000;
	// addi r11,r31,816
	ctx.r11.s64 = ctx.r31.s64 + 816;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// mulli r29,r30,108
	ctx.r29.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(108));
	// ori r23,r10,8
	ctx.r23.u64 = ctx.r10.u64 | 8;
	// addi r6,r27,6508
	ctx.r6.s64 = ctx.r27.s64 + 6508;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r5,r31,3560
	ctx.r5.s64 = ctx.r31.s64 + 3560;
	// li r7,13
	ctx.r7.s64 = 13;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x89935610
	ctx.lr = 0x899A0D4C;
	sub_89935610(ctx, base);
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r11,r27,6508
	ctx.r11.s64 = ctx.r27.s64 + 6508;
	// addi r10,r31,3560
	ctx.r10.s64 = ctx.r31.s64 + 3560;
	// addi r9,r31,3152
	ctx.r9.s64 = ctx.r31.s64 + 3152;
	// ori r22,r8,16
	ctx.r22.u64 = ctx.r8.u64 | 16;
	// mulli r28,r30,204
	ctx.r28.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(204));
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r6,r11,364
	ctx.r6.s64 = ctx.r11.s64 + 364;
	// addi r5,r10,144
	ctx.r5.s64 = ctx.r10.s64 + 144;
	// add r4,r28,r9
	ctx.r4.u64 = ctx.r28.u64 + ctx.r9.u64;
	// bl 0x89935610
	ctx.lr = 0x899A0D7C;
	sub_89935610(ctx, base);
	// addi r11,r31,3560
	ctx.r11.s64 = ctx.r31.s64 + 3560;
	// addi r10,r31,-5456
	ctx.r10.s64 = ctx.r31.s64 + -5456;
	// addi r6,r27,6924
	ctx.r6.s64 = ctx.r27.s64 + 6924;
	// li r7,17
	ctx.r7.s64 = 17;
	// addi r5,r11,432
	ctx.r5.s64 = ctx.r11.s64 + 432;
	// add r4,r29,r10
	ctx.r4.u64 = ctx.r29.u64 + ctx.r10.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89935610
	ctx.lr = 0x899A0D9C;
	sub_89935610(ctx, base);
	// addi r11,r31,3560
	ctx.r11.s64 = ctx.r31.s64 + 3560;
	// addi r10,r31,-2912
	ctx.r10.s64 = ctx.r31.s64 + -2912;
	// addi r6,r27,7468
	ctx.r6.s64 = ctx.r27.s64 + 7468;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,576
	ctx.r5.s64 = ctx.r11.s64 + 576;
	// add r4,r28,r10
	ctx.r4.u64 = ctx.r28.u64 + ctx.r10.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x89935610
	ctx.lr = 0x899A0DBC;
	sub_89935610(ctx, base);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x899a0d20
	if (ctx.cr6.lt) goto loc_899A0D20;
	// sth r24,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r24.u16);
	// addi r11,r31,-3760
	ctx.r11.s64 = ctx.r31.s64 + -3760;
	// stb r26,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// li r10,160
	ctx.r10.s64 = 160;
	// li r9,-24
	ctx.r9.s64 = -24;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-48
	ctx.r8.s64 = -48;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934b48
	ctx.lr = 0x899A0E04;
	sub_89934B48(ctx, base);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r29,r11,3484
	ctx.r29.s64 = ctx.r11.s64 + 3484;
loc_899A0E14:
	// rlwinm r10,r10,14,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000;
	// addi r11,r31,-832
	ctx.r11.s64 = ctx.r31.s64 + -832;
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// mulli r6,r4,108
	ctx.r6.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(108));
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// addi r9,r31,-3760
	ctx.r9.s64 = ctx.r31.s64 + -3760;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x899a0e6c
	if (!ctx.cr6.gt) goto loc_899A0E6C;
	// rlwinm r7,r8,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xC0000000;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_899A0E44:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x899a0e44
	if (ctx.cr6.lt) goto loc_899A0E44;
loc_899A0E6C:
	// addi r9,r31,-3760
	ctx.r9.s64 = ctx.r31.s64 + -3760;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r8,r31,-4624
	ctx.r8.s64 = ctx.r31.s64 + -4624;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r9,r9,144
	ctx.r9.s64 = ctx.r9.s64 + 144;
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x899a0ebc
	if (!ctx.cr6.gt) goto loc_899A0EBC;
	// rlwinm r7,r5,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xC0000000;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_899A0E94:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x899a0e94
	if (ctx.cr6.lt) goto loc_899A0E94;
loc_899A0EBC:
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x899a0e14
	if (ctx.cr6.lt) goto loc_899A0E14;
	// addi r11,r31,1248
	ctx.r11.s64 = ctx.r31.s64 + 1248;
	// stb r26,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// li r28,3
	ctx.r28.s64 = 3;
	// li r10,200
	ctx.r10.s64 = 200;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,-40
	ctx.r9.s64 = -40;
	// sth r28,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// li r8,-28
	ctx.r8.s64 = -28;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,27
	ctx.r5.s64 = 27;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,65
	ctx.r3.s64 = 65;
	// bl 0x89934b48
	ctx.lr = 0x899A0F10;
	sub_89934B48(ctx, base);
	// addi r9,r31,1248
	ctx.r9.s64 = ctx.r31.s64 + 1248;
	// addi r11,r31,-2504
	ctx.r11.s64 = ctx.r31.s64 + -2504;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_899A0F1C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,65
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 65, ctx.xer);
	// blt cr6,0x899a0f1c
	if (ctx.cr6.lt) goto loc_899A0F1C;
	// stb r26,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// addi r8,r31,-6664
	ctx.r8.s64 = ctx.r31.s64 + -6664;
	// li r10,176
	ctx.r10.s64 = 176;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-40
	ctx.r9.s64 = -40;
	// li r8,-40
	ctx.r8.s64 = -40;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// li r7,80
	ctx.r7.s64 = 80;
	// sth r28,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,15
	ctx.r4.s64 = 15;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x89934b48
	ctx.lr = 0x899A0F80;
	sub_89934B48(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_899A0F88:
	// rlwinm r23,r11,14,2,17
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFFC000;
	// addi r11,r31,1032
	ctx.r11.s64 = ctx.r31.s64 + 1032;
	// mulli r10,r30,108
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(108));
	// clrlwi r9,r23,16
	ctx.r9.u64 = ctx.r23.u32 & 0xFFFF;
	// addi r6,r27,7556
	ctx.r6.s64 = ctx.r27.s64 + 7556;
	// addi r5,r31,-6664
	ctx.r5.s64 = ctx.r31.s64 + -6664;
	// ori r3,r9,8
	ctx.r3.u64 = ctx.r9.u64 | 8;
	// li r7,13
	ctx.r7.s64 = 13;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x89935610
	ctx.lr = 0x899A0FB0;
	sub_89935610(ctx, base);
	// clrlwi r6,r23,16
	ctx.r6.u64 = ctx.r23.u32 & 0xFFFF;
	// addi r11,r27,7556
	ctx.r11.s64 = ctx.r27.s64 + 7556;
	// addi r10,r31,-6664
	ctx.r10.s64 = ctx.r31.s64 + -6664;
	// addi r9,r31,-408
	ctx.r9.s64 = ctx.r31.s64 + -408;
	// mulli r8,r30,204
	ctx.r8.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(204));
	// ori r3,r6,16
	ctx.r3.u64 = ctx.r6.u64 | 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,312
	ctx.r6.s64 = ctx.r11.s64 + 312;
	// addi r5,r10,144
	ctx.r5.s64 = ctx.r10.s64 + 144;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x89935610
	ctx.lr = 0x899A0FDC;
	sub_89935610(ctx, base);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x899a0f88
	if (ctx.cr6.lt) goto loc_899A0F88;
	// addi r11,r31,-5824
	ctx.r11.s64 = ctx.r31.s64 + -5824;
	// sth r25,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r25.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,216
	ctx.r9.s64 = 216;
	// li r8,-28
	ctx.r8.s64 = -28;
	// li r7,-20
	ctx.r7.s64 = -20;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,14
	ctx.r4.s64 = 14;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899A1020;
	sub_89934FB8(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_899A1028:
	// rlwinm r9,r11,14,16,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000;
	// addi r11,r31,2744
	ctx.r11.s64 = ctx.r31.s64 + 2744;
	// mulli r10,r30,204
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(204));
	// ori r3,r9,16
	ctx.r3.u64 = ctx.r9.u64 | 16;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r31,-5824
	ctx.r5.s64 = ctx.r31.s64 + -5824;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x89935688
	ctx.lr = 0x899A104C;
	sub_89935688(ctx, base);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x899a1028
	if (ctx.cr6.lt) goto loc_899A1028;
	// addi r11,r31,2424
	ctx.r11.s64 = ctx.r31.s64 + 2424;
	// sth r24,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r24.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,200
	ctx.r9.s64 = 200;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-28
	ctx.r7.s64 = -28;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,13
	ctx.r4.s64 = 13;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899A1090;
	sub_89934FB8(ctx, base);
	// addi r9,r31,2424
	ctx.r9.s64 = ctx.r31.s64 + 2424;
	// addi r11,r31,-5664
	ctx.r11.s64 = ctx.r31.s64 + -5664;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_899A109C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x899a109c
	if (ctx.cr6.lt) goto loc_899A109C;
	// addi r9,r31,-4408
	ctx.r9.s64 = ctx.r31.s64 + -4408;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// li r8,-40
	ctx.r8.s64 = -40;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// li r7,-40
	ctx.r7.s64 = -40;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,18
	ctx.r4.s64 = 18;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x89934fb8
	ctx.lr = 0x899A10FC;
	sub_89934FB8(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_899A1104:
	// rlwinm r6,r10,14,2,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFFC000;
	// addi r7,r31,-1048
	ctx.r7.s64 = ctx.r31.s64 + -1048;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// mulli r11,r5,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(108));
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// addi r10,r31,-4408
	ctx.r10.s64 = ctx.r31.s64 + -4408;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899a115c
	if (!ctx.cr6.gt) goto loc_899A115C;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899A1134:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899a1134
	if (ctx.cr6.lt) goto loc_899A1134;
loc_899A115C:
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r10,r31,-4408
	ctx.r10.s64 = ctx.r31.s64 + -4408;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// addi r6,r31,-5032
	ctx.r6.s64 = ctx.r31.s64 + -5032;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// mulli r7,r5,204
	ctx.r7.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(204));
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899a11bc
	if (!ctx.cr6.gt) goto loc_899A11BC;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899A1194:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899a1194
	if (ctx.cr6.lt) goto loc_899A1194;
loc_899A11BC:
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x899a1104
	if (ctx.cr6.lt) goto loc_899A1104;
	// addi r11,r31,-3472
	ctx.r11.s64 = ctx.r31.s64 + -3472;
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,20
	ctx.r4.s64 = 20;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899A120C;
	sub_89934FB8(ctx, base);
	// addi r9,r31,-3472
	ctx.r9.s64 = ctx.r31.s64 + -3472;
	// addi r11,r31,-616
	ctx.r11.s64 = ctx.r31.s64 + -616;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_899A1218:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x899a1218
	if (ctx.cr6.lt) goto loc_899A1218;
	// addi r8,r31,-1208
	ctx.r8.s64 = ctx.r31.s64 + -1208;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,208
	ctx.r9.s64 = 208;
	// li r8,-40
	ctx.r8.s64 = -40;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,21
	ctx.r4.s64 = 21;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x89934fb8
	ctx.lr = 0x899A1278;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-1208
	ctx.r11.s64 = ctx.r31.s64 + -1208;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r11,150
	ctx.r6.s64 = ctx.r11.s64 + 150;
	// sth r7,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// li r8,-40
	ctx.r8.s64 = -40;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89934fb8
	ctx.lr = 0x899A12B0;
	sub_89934FB8(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_899A12B8:
	// rlwinm r11,r10,14,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000;
	// addi r7,r31,-6232
	ctx.r7.s64 = ctx.r31.s64 + -6232;
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// mulli r11,r6,204
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(204));
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r31,-1208
	ctx.r10.s64 = ctx.r31.s64 + -1208;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899a130c
	if (!ctx.cr6.gt) goto loc_899A130C;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899A12E4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899a12e4
	if (ctx.cr6.lt) goto loc_899A12E4;
loc_899A130C:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x899a12b8
	if (ctx.cr6.lt) goto loc_899A12B8;
	// li r30,8
	ctx.r30.s64 = 8;
	// addi r11,r31,-3312
	ctx.r11.s64 = ctx.r31.s64 + -3312;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,72
	ctx.r9.s64 = 72;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,17
	ctx.r4.s64 = 17;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x899A135C;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-3312
	ctx.r11.s64 = ctx.r31.s64 + -3312;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r7,r11,320
	ctx.r7.s64 = ctx.r11.s64 + 320;
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,11
	ctx.r4.s64 = 11;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899A1390;
	sub_89934FB8(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_899A1398:
	// rlwinm r8,r10,14,2,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFFC000;
	// addi r11,r31,-4168
	ctx.r11.s64 = ctx.r31.s64 + -4168;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// mulli r4,r3,204
	ctx.r4.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(204));
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// addi r10,r31,-3312
	ctx.r10.s64 = ctx.r31.s64 + -3312;
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x899a13f4
	if (!ctx.cr6.gt) goto loc_899A13F4;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899A13CC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x899a13cc
	if (ctx.cr6.lt) goto loc_899A13CC;
loc_899A13F4:
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r10,r31,-3312
	ctx.r10.s64 = ctx.r31.s64 + -3312;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// ori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 8;
	// addi r6,r31,-1424
	ctx.r6.s64 = ctx.r31.s64 + -1424;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// mulli r7,r3,108
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(108));
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899a1454
	if (!ctx.cr6.gt) goto loc_899A1454;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899A142C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899a142c
	if (ctx.cr6.lt) goto loc_899A142C;
loc_899A1454:
	// addi r10,r31,-3312
	ctx.r10.s64 = ctx.r31.s64 + -3312;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r9,r31,408
	ctx.r9.s64 = ctx.r31.s64 + 408;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r10,r10,240
	ctx.r10.s64 = ctx.r10.s64 + 240;
	// add r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x899a14a4
	if (!ctx.cr6.gt) goto loc_899A14A4;
	// rlwinm r8,r30,16,0,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899A147C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x899a147c
	if (ctx.cr6.lt) goto loc_899A147C;
loc_899A14A4:
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x899a1398
	if (ctx.cr6.lt) goto loc_899A1398;
	// addi r11,r31,2584
	ctx.r11.s64 = ctx.r31.s64 + 2584;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,14
	ctx.r4.s64 = 14;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899A14F4;
	sub_89934FB8(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_899A14FC:
	// rlwinm r10,r10,14,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000;
	// mulli r11,r6,204
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(204));
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// addi r10,r31,2584
	ctx.r10.s64 = ctx.r31.s64 + 2584;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899a154c
	if (!ctx.cr6.gt) goto loc_899A154C;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899A1524:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899a1524
	if (ctx.cr6.lt) goto loc_899A1524;
loc_899A154C:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x899a14fc
	if (ctx.cr6.lt) goto loc_899A14FC;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899AA4A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899AA4A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899AA4B4;
	sub_8991B9F0(ctx, base);
	// extsh r30,r3
	ctx.r30.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x899aa4e4
	if (!ctx.cr6.lt) goto loc_899AA4E4;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r8,r10,12800
	ctx.r8.s64 = ctx.r10.s64 + 12800;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899AA4E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899a9f48
	ctx.lr = 0x899AA4EC;
	sub_899A9F48(ctx, base);
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r10,12800
	ctx.r10.s64 = ctx.r10.s64 + 12800;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r9,r5,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899aa568
	if (ctx.cr6.eq) goto loc_899AA568;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// addi r3,r10,20
	ctx.r3.s64 = ctx.r10.s64 + 20;
	// addi r31,r10,36
	ctx.r31.s64 = ctx.r10.s64 + 36;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r29,r10,32
	ctx.r29.s64 = ctx.r10.s64 + 32;
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r7,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r6,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r4,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r3,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
loc_899AA568:
	// addi r8,r10,188
	ctx.r8.s64 = ctx.r10.s64 + 188;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x899aa5c4
	if (ctx.cr6.lt) goto loc_899AA5C4;
	// bne cr6,0x899aa5ec
	if (!ctx.cr6.eq) goto loc_899AA5EC;
	// addi r7,r10,104
	ctx.r7.s64 = ctx.r10.s64 + 104;
	// addi r6,r10,100
	ctx.r6.s64 = ctx.r10.s64 + 100;
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// stwx r9,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// bne cr6,0x899aa5ec
	if (!ctx.cr6.eq) goto loc_899AA5EC;
	// addi r10,r10,180
	ctx.r10.s64 = ctx.r10.s64 + 180;
	// mulli r9,r30,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(208));
	// li r7,0
	ctx.r7.s64 = 0;
	// stbx r7,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stbx r5,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899AA5C4:
	// mulli r7,r30,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(208));
	// addi r6,r10,180
	ctx.r6.s64 = ctx.r10.s64 + 180;
	// lbzx r4,r7,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x899aa5ec
	if (ctx.cr6.eq) goto loc_899AA5EC;
	// oris r7,r5,16384
	ctx.r7.u64 = ctx.r5.u64 | 1073741824;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// ori r7,r7,4
	ctx.r7.u64 = ctx.r7.u64 | 4;
	// stbx r6,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u8);
	// stwx r7,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
loc_899AA5EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899AB9F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899ABA00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r28,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r6,r30,188
	ctx.r6.s64 = ctx.r30.s64 + 188;
	// lbzx r7,r31,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x899abcf4
	if (ctx.cr6.lt) goto loc_899ABCF4;
	// beq cr6,0x899abb10
	if (ctx.cr6.eq) goto loc_899ABB10;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x899aba40
	if (ctx.cr6.lt) goto loc_899ABA40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// b 0x899abe38
	goto loc_899ABE38;
loc_899ABA40:
	// addi r9,r30,189
	ctx.r9.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899abadc
	if (ctx.cr6.lt) goto loc_899ABADC;
	// beq cr6,0x899abaac
	if (ctx.cr6.eq) goto loc_899ABAAC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x899abe38
	if (!ctx.cr6.lt) goto loc_899ABE38;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899aba7c
	if (!ctx.cr6.lt) goto loc_899ABA7C;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899ABA7C:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r10,-96
	ctx.r10.s64 = -6291456;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899abe38
	if (ctx.cr6.gt) goto loc_899ABE38;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// lbz r11,12342(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 12342);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stb r8,12342(r10)
	REX_STORE_U8(ctx.r10.u32 + 12342, ctx.r8.u8);
	// b 0x899abe38
	goto loc_899ABE38;
loc_899ABAAC:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// cmplwi cr6,r7,240
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 240, ctx.xer);
	// blt cr6,0x899abe38
	if (ctx.cr6.lt) goto loc_899ABE38;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x899abe38
	goto loc_899ABE38;
loc_899ABADC:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r7,r30,193
	ctx.r7.s64 = ctx.r30.s64 + 193;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stbx r3,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u8);
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// sthx r4,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u16);
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// b 0x899abe38
	goto loc_899ABE38;
loc_899ABB10:
	// addi r11,r30,164
	ctx.r11.s64 = ctx.r30.s64 + 164;
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stwx r8,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x899abe38
	if (ctx.cr6.gt) goto loc_899ABE38;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899abb68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899ABB68;
	// bdzf 4*cr6+eq,0x899abc10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899ABC10;
	// bdzf 4*cr6+eq,0x899abc54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899ABC54;
	// bdzf 4*cr6+eq,0x899abc94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899ABC94;
	// bne cr6,0x899abcc8
	if (!ctx.cr6.eq) goto loc_899ABCC8;
	// cmpwi cr6,r8,3600
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3600, ctx.xer);
	// ble cr6,0x899abcb8
	if (!ctx.cr6.gt) goto loc_899ABCB8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// b 0x899abe38
	goto loc_899ABE38;
loc_899ABB68:
	// addi r9,r30,186
	ctx.r9.s64 = ctx.r30.s64 + 186;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// addi r10,r8,25128
	ctx.r10.s64 = ctx.r8.s64 + 25128;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lbzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r10,28
	ctx.r5.s64 = ctx.r10.s64 + 28;
	// addi r9,r11,-7320
	ctx.r9.s64 = ctx.r11.s64 + -7320;
	// mulli r4,r6,696
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(696));
	// lhzx r3,r31,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// lhzx r10,r4,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// subfc r7,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// eqv r6,r8,r11
	ctx.r6.u64 = ~(ctx.r8.u64 ^ ctx.r11.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r10,r4,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x2;
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// cmpwi cr6,r10,384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 384, ctx.xer);
	// bge cr6,0x899abbd0
	if (!ctx.cr6.lt) goto loc_899ABBD0;
	// lhz r10,2(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_899ABBD0:
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,640
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 640, ctx.xer);
	// ble cr6,0x899abbe8
	if (!ctx.cr6.gt) goto loc_899ABBE8;
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
loc_899ABBE8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991d830
	ctx.lr = 0x899ABC00;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899abe38
	goto loc_899ABE38;
loc_899ABC10:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899abc30
	if (!ctx.cr6.lt) goto loc_899ABC30;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899ABC30:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8991d8e0
	ctx.lr = 0x899ABC38;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899abe38
	if (ctx.cr6.eq) goto loc_899ABE38;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899abe38
	goto loc_899ABE38;
loc_899ABC54:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899abc70
	if (ctx.cr6.eq) goto loc_899ABC70;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x899abe38
	goto loc_899ABE38;
loc_899ABC70:
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// addi r7,r30,194
	ctx.r7.s64 = ctx.r30.s64 + 194;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// stbx r10,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u8);
	// b 0x899abe38
	goto loc_899ABE38;
loc_899ABC94:
	// addi r11,r30,197
	ctx.r11.s64 = ctx.r30.s64 + 197;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// subfic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r5.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x899abe38
	if (!ctx.cr6.eq) goto loc_899ABE38;
loc_899ABCB8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x899abe38
	goto loc_899ABE38;
loc_899ABCC8:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 30, ctx.xer);
	// blt cr6,0x899abe38
	if (ctx.cr6.lt) goto loc_899ABE38;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899abe38
	goto loc_899ABE38;
loc_899ABCF4:
	// addi r9,r30,189
	ctx.r9.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x899abe20
	if (ctx.cr6.gt) goto loc_899ABE20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899abd44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899ABD44;
	// bdzf 4*cr6+eq,0x899abd74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899ABD74;
	// bdzf 4*cr6+eq,0x899abdb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899ABDB0;
	// bne cr6,0x899abde0
	if (!ctx.cr6.eq) goto loc_899ABDE0;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x899abe20
	if (!ctx.cr6.lt) goto loc_899ABE20;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// b 0x899abe20
	goto loc_899ABE20;
loc_899ABD44:
	// addi r8,r30,168
	ctx.r8.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addic. r11,r11,-4096
	ctx.xer.ca = ctx.r11.u32 > 4095;
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// bne 0x899abe20
	if (!ctx.cr0.eq) goto loc_899ABE20;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// b 0x899abe20
	goto loc_899ABE20;
loc_899ABD74:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// cmplwi cr6,r7,64
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 64, ctx.xer);
	// blt cr6,0x899abe20
	if (ctx.cr6.lt) goto loc_899ABE20;
	// addi r8,r30,71
	ctx.r8.s64 = ctx.r30.s64 + 71;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// b 0x899abe20
	goto loc_899ABE20;
loc_899ABDB0:
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r8,252
	ctx.r8.s64 = ctx.r8.s64 + 252;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// cmplwi cr6,r7,128
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 128, ctx.xer);
	// bgt cr6,0x899abe20
	if (ctx.cr6.gt) goto loc_899ABE20;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x899abe20
	goto loc_899ABE20;
loc_899ABDE0:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lwzx r5,r31,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// addi r8,r30,164
	ctx.r8.s64 = ctx.r30.s64 + 164;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r3,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u8);
	// lbzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// li r4,-128
	ctx.r4.s64 = -128;
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// rlwinm r5,r5,0,3,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// or r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// add r8,r31,r30
	ctx.r8.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
loc_899ABE20:
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// addi r10,r30,70
	ctx.r10.s64 = ctx.r30.s64 + 70;
	// addi r9,r30,69
	ctx.r9.s64 = ctx.r30.s64 + 69;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
loc_899ABE38:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,168
	ctx.r7.s64 = ctx.r30.s64 + 168;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// lhzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r30,r11,128
	ctx.r30.s64 = ctx.r11.s64 + 128;
	// addi r5,r10,9016
	ctx.r5.s64 = ctx.r10.s64 + 9016;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r29,r11,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r30,r30,1,22,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// lhzx r10,r29,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r5.u32);
	// lhzx r5,r30,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r5.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stwx r11,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r5,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B0788) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899B0790;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30225
	ctx.r11.s64 = -1980825600;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r31,r11,-12912
	ctx.r31.s64 = ctx.r11.s64 + -12912;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r29,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r29.u16);
	// addi r11,r31,-1232
	ctx.r11.s64 = ctx.r31.s64 + -1232;
	// li r9,224
	ctx.r9.s64 = 224;
	// li r8,-24
	ctx.r8.s64 = -24;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899B07D0;
	sub_89934FB8(ctx, base);
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// addi r5,r31,-1232
	ctx.r5.s64 = ctx.r31.s64 + -1232;
	// addi r30,r10,29424
	ctx.r30.s64 = ctx.r10.s64 + 29424;
	// addi r4,r31,-1152
	ctx.r4.s64 = ctx.r31.s64 + -1152;
	// addi r6,r30,-20
	ctx.r6.s64 = ctx.r30.s64 + -20;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935688
	ctx.lr = 0x899B07F0;
	sub_89935688(ctx, base);
	// addi r9,r31,-672
	ctx.r9.s64 = ctx.r31.s64 + -672;
	// li r8,128
	ctx.r8.s64 = 128;
	// sth r29,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r29.u16);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r10,120
	ctx.r10.s64 = 120;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// li r9,-16
	ctx.r9.s64 = -16;
	// li r8,-28
	ctx.r8.s64 = -28;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x89934b48
	ctx.lr = 0x899B0824;
	sub_89934B48(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,-672
	ctx.r5.s64 = ctx.r31.s64 + -672;
	// addi r4,r31,-784
	ctx.r4.s64 = ctx.r31.s64 + -784;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x899B083C;
	sub_89935610(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r11,-5480
	ctx.r10.s64 = ctx.r11.s64 + -5480;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lbz r11,-5480(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -5480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b08d8
	if (ctx.cr6.eq) goto loc_899B08D8;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_899B085C:
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// lbz r3,3(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// lbz r5,2(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r9,5(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// addi r4,r31,-1040
	ctx.r4.s64 = ctx.r31.s64 + -1040;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// lbzu r8,7(r30)
	ea = 7 + ctx.r30.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// rlwinm r6,r3,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// neg r8,r6
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89934fb8
	ctx.lr = 0x899B08B8;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// add r7,r28,r10
	ctx.r7.u64 = ctx.r28.u64 + ctx.r10.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899b085c
	if (!ctx.cr6.eq) goto loc_899B085C;
loc_899B08D8:
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r31,-1040
	ctx.r9.s64 = ctx.r31.s64 + -1040;
	// addi r10,r31,-528
	ctx.r10.s64 = ctx.r31.s64 + -528;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r8,r8,3484
	ctx.r8.s64 = ctx.r8.s64 + 3484;
loc_899B08EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// stw r26,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,17
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 17, ctx.xer);
	// blt cr6,0x899b08ec
	if (ctx.cr6.lt) goto loc_899B08EC;
	// addi r9,r31,-1040
	ctx.r9.s64 = ctx.r31.s64 + -1040;
	// stw r26,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r26,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// addi r11,r31,-1344
	ctx.r11.s64 = ctx.r31.s64 + -1344;
	// addi r9,r9,170
	ctx.r9.s64 = ctx.r9.s64 + 170;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_899B092C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// blt cr6,0x899b092c
	if (ctx.cr6.lt) goto loc_899B092C;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r10,-5424
	ctx.r10.s64 = ctx.r10.s64 + -5424;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b09f0
	if (ctx.cr6.eq) goto loc_899B09F0;
	// addi r30,r10,-7
	ctx.r30.s64 = ctx.r10.s64 + -7;
loc_899B0978:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r3,13(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lbz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,9(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// clrlwi r28,r9,16
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFF;
	// lbz r8,10(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,11(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// addi r11,r31,-312
	ctx.r11.s64 = ctx.r31.s64 + -312;
	// stb r3,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// li r5,8
	ctx.r5.s64 = 8;
	// sth r28,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x899B09CC;
	sub_89934B48(ctx, base);
	// lbzu r10,7(r30)
	ea = 7 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899b0978
	if (!ctx.cr6.eq) goto loc_899B0978;
loc_899B09F0:
	// addi r6,r31,400
	ctx.r6.s64 = ctx.r31.s64 + 400;
	// addi r5,r31,-312
	ctx.r5.s64 = ctx.r31.s64 + -312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x899B0A08;
	sub_89935B08(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// ori r28,r10,35840
	ctx.r28.u64 = ctx.r10.u64 | 35840;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lis r27,1
	ctx.r27.s64 = 65536;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// addi r9,r9,9016
	ctx.r9.s64 = ctx.r9.s64 + 9016;
loc_899B0A24:
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r11,5,22,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3E0;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// addi r7,r8,128
	ctx.r7.s64 = ctx.r8.s64 + 128;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r9.u32);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// rlwinm r24,r4,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r7,r6,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// addi r5,r31,400
	ctx.r5.s64 = ctx.r31.s64 + 400;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r11,r4,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 13) & 0xFFFFE000;
	// mullw r3,r6,r28
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// srawi r23,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r23.s64 = ctx.r3.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// addi r30,r31,400
	ctx.r30.s64 = ctx.r31.s64 + 400;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stwx r11,r24,r5
	REX_STORE_U32(ctx.r24.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r8,r31,400
	ctx.r8.s64 = ctx.r31.s64 + 400;
	// addi r29,r31,400
	ctx.r29.s64 = ctx.r31.s64 + 400;
	// stwx r10,r24,r5
	REX_STORE_U32(ctx.r24.u32 + ctx.r5.u32, ctx.r10.u32);
	// addi r6,r31,400
	ctx.r6.s64 = ctx.r31.s64 + 400;
	// addi r7,r31,400
	ctx.r7.s64 = ctx.r31.s64 + 400;
	// stwx r10,r24,r3
	REX_STORE_U32(ctx.r24.u32 + ctx.r3.u32, ctx.r10.u32);
	// subf r23,r27,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r27.u64;
	// addi r5,r8,32
	ctx.r5.s64 = ctx.r8.s64 + 32;
	// addi r22,r31,400
	ctx.r22.s64 = ctx.r31.s64 + 400;
	// stwx r23,r24,r4
	REX_STORE_U32(ctx.r24.u32 + ctx.r4.u32, ctx.r23.u32);
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// addi r7,r7,28
	ctx.r7.s64 = ctx.r7.s64 + 28;
	// extsh r8,r25
	ctx.r8.s64 = ctx.r25.s16;
	// stwx r26,r24,r5
	REX_STORE_U32(ctx.r24.u32 + ctx.r5.u32, ctx.r26.u32);
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stwx r10,r24,r22
	REX_STORE_U32(ctx.r24.u32 + ctx.r22.u32, ctx.r10.u32);
	// neg r4,r23
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r23.u64);
	// stwx r10,r24,r30
	REX_STORE_U32(ctx.r24.u32 + ctx.r30.u32, ctx.r10.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stwx r3,r24,r7
	REX_STORE_U32(ctx.r24.u32 + ctx.r7.u32, ctx.r3.u32);
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// stwx r4,r24,r6
	REX_STORE_U32(ctx.r24.u32 + ctx.r6.u32, ctx.r4.u32);
	// blt cr6,0x899b0a24
	if (ctx.cr6.lt) goto loc_899B0A24;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B21B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899B21C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r9,-30225
	ctx.r9.s64 = -1980825600;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r24,r11,28832
	ctx.r24.s64 = ctx.r11.s64 + 28832;
	// addi r31,r9,-6760
	ctx.r31.s64 = ctx.r9.s64 + -6760;
loc_899B21E0:
	// rlwinm r10,r10,14,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000;
	// addi r11,r31,2328
	ctx.r11.s64 = ctx.r31.s64 + 2328;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// mulli r7,r6,108
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(108));
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r24,-264
	ctx.r10.s64 = ctx.r24.s64 + -264;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899b2238
	if (!ctx.cr6.gt) goto loc_899B2238;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899B220C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r5,r24,-36
	ctx.r5.s64 = ctx.r24.s64 + -36;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,26
	ctx.r10.s64 = ctx.r10.s64 + 26;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899b220c
	if (ctx.cr6.lt) goto loc_899B220C;
loc_899B2238:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x899b21e0
	if (ctx.cr6.lt) goto loc_899B21E0;
	// addi r11,r31,-80
	ctx.r11.s64 = ctx.r31.s64 + -80;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,208
	ctx.r9.s64 = 208;
	// sth r29,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r29.u16);
	// li r8,-28
	ctx.r8.s64 = -28;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899B2288;
	sub_89934FB8(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_899B2290:
	// rlwinm r9,r11,14,16,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000;
	// addi r11,r31,-3560
	ctx.r11.s64 = ctx.r31.s64 + -3560;
	// mulli r10,r30,108
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(108));
	// ori r3,r9,8
	ctx.r3.u64 = ctx.r9.u64 | 8;
	// addi r6,r24,-756
	ctx.r6.s64 = ctx.r24.s64 + -756;
	// addi r5,r31,-80
	ctx.r5.s64 = ctx.r31.s64 + -80;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x89935688
	ctx.lr = 0x899B22B4;
	sub_89935688(ctx, base);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x899b2290
	if (ctx.cr6.lt) goto loc_899B2290;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r31,-224
	ctx.r11.s64 = ctx.r31.s64 + -224;
	// sth r8,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// li r30,96
	ctx.r30.s64 = 96;
	// li r10,136
	ctx.r10.s64 = 136;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,-24
	ctx.r9.s64 = -24;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934b48
	ctx.lr = 0x899B2304;
	sub_89934B48(ctx, base);
	// addi r6,r24,-284
	ctx.r6.s64 = ctx.r24.s64 + -284;
	// addi r5,r31,-224
	ctx.r5.s64 = ctx.r31.s64 + -224;
	// addi r4,r31,-1528
	ctx.r4.s64 = ctx.r31.s64 + -1528;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x899B231C;
	sub_89935610(ctx, base);
	// addi r7,r31,-3872
	ctx.r7.s64 = ctx.r31.s64 + -3872;
	// li r10,64
	ctx.r10.s64 = 64;
	// sth r29,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r29.u16);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r9,-20
	ctx.r9.s64 = -20;
	// li r8,-12
	ctx.r8.s64 = -12;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x89934b48
	ctx.lr = 0x899B234C;
	sub_89934B48(ctx, base);
	// addi r6,r24,-56
	ctx.r6.s64 = ctx.r24.s64 + -56;
	// addi r5,r31,-3872
	ctx.r5.s64 = ctx.r31.s64 + -3872;
	// addi r4,r31,2952
	ctx.r4.s64 = ctx.r31.s64 + 2952;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x899B2364;
	sub_89935610(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-4572
	ctx.r10.s64 = ctx.r11.s64 + -4572;
	// lbz r11,-4572(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -4572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b23fc
	if (ctx.cr6.eq) goto loc_899B23FC;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_899B2380:
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// lbz r3,3(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// lbz r5,2(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r9,5(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// addi r4,r31,-1784
	ctx.r4.s64 = ctx.r31.s64 + -1784;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// lbzu r8,7(r30)
	ea = 7 + ctx.r30.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// rlwinm r6,r3,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// neg r8,r6
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89934fb8
	ctx.lr = 0x899B23DC;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// add r7,r28,r10
	ctx.r7.u64 = ctx.r28.u64 + ctx.r10.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899b2380
	if (!ctx.cr6.eq) goto loc_899B2380;
loc_899B23FC:
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r31,-1784
	ctx.r9.s64 = ctx.r31.s64 + -1784;
	// addi r10,r31,3304
	ctx.r10.s64 = ctx.r31.s64 + 3304;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r25,r8,3484
	ctx.r25.s64 = ctx.r8.s64 + 3484;
loc_899B2410:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r25,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r25.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r26,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// blt cr6,0x899b2410
	if (ctx.cr6.lt) goto loc_899B2410;
	// addi r9,r31,-1784
	ctx.r9.s64 = ctx.r31.s64 + -1784;
	// stw r26,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r26,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// addi r11,r31,-5136
	ctx.r11.s64 = ctx.r31.s64 + -5136;
	// addi r9,r9,170
	ctx.r9.s64 = ctx.r9.s64 + 170;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_899B2450:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899b2450
	if (ctx.cr6.lt) goto loc_899B2450;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r10,-4536
	ctx.r10.s64 = ctx.r10.s64 + -4536;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b2514
	if (ctx.cr6.eq) goto loc_899B2514;
	// addi r30,r10,-7
	ctx.r30.s64 = ctx.r10.s64 + -7;
loc_899B249C:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r3,13(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lbz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,9(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// clrlwi r28,r9,16
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFF;
	// lbz r8,10(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,11(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// addi r11,r31,-1416
	ctx.r11.s64 = ctx.r31.s64 + -1416;
	// stb r3,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// li r5,12
	ctx.r5.s64 = 12;
	// sth r28,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x899B24F0;
	sub_89934B48(ctx, base);
	// lbzu r10,7(r30)
	ea = 7 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899b249c
	if (!ctx.cr6.eq) goto loc_899B249C;
loc_899B2514:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_899B2518:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r3,r30,780
	ctx.r3.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(780));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r31,-3344
	ctx.r4.s64 = ctx.r31.s64 + -3344;
	// addi r10,r24,-1260
	ctx.r10.s64 = ctx.r24.s64 + -1260;
	// addi r9,r31,-1416
	ctx.r9.s64 = ctx.r31.s64 + -1416;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r8,r30,594
	ctx.r8.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(594));
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935b08
	ctx.lr = 0x899B2550;
	sub_89935B08(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x899b2518
	if (ctx.cr6.lt) goto loc_899B2518;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-4376
	ctx.r10.s64 = ctx.r11.s64 + -4376;
	// lbz r11,-4376(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -4376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b25f0
	if (ctx.cr6.eq) goto loc_899B25F0;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_899B2580:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r5,2(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r6,3(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// extsb r23,r11
	ctx.r23.s64 = ctx.r11.s8;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r8,5(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// addi r28,r31,-5024
	ctx.r28.s64 = ctx.r31.s64 + -5024;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r9,6(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// lbz r10,7(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// li r4,7
	ctx.r4.s64 = 7;
	// lbzu r11,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x89934fb8
	ctx.lr = 0x899B25D0;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// add r7,r23,r10
	ctx.r7.u64 = ctx.r23.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899b2580
	if (!ctx.cr6.eq) goto loc_899B2580;
loc_899B25F0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_899B25F8:
	// rlwinm r6,r11,14,2,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFFC000;
	// addi r11,r31,2544
	ctx.r11.s64 = ctx.r31.s64 + 2544;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// mulli r7,r3,120
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(120));
	// ori r9,r10,9
	ctx.r9.u64 = ctx.r10.u64 | 9;
	// addi r10,r31,-5024
	ctx.r10.s64 = ctx.r31.s64 + -5024;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899b2650
	if (!ctx.cr6.gt) goto loc_899B2650;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899B2628:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899b2628
	if (ctx.cr6.lt) goto loc_899B2628;
loc_899B2650:
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// ori r10,r10,25
	ctx.r10.u64 = ctx.r10.u64 | 25;
	// add r5,r3,r9
	ctx.r5.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_899B2674:
	// addi r11,r31,-5024
	ctx.r11.s64 = ctx.r31.s64 + -5024;
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r11,r11,90
	ctx.r11.s64 = ctx.r11.s64 + 90;
	// mulli r10,r6,250
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(250));
	// addi r9,r31,456
	ctx.r9.s64 = ctx.r31.s64 + 456;
	// mulli r8,r8,312
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(312));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x899b26c8
	if (!ctx.cr6.gt) goto loc_899B26C8;
	// rlwinm r8,r4,16,0,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899B26A4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x899b26a4
	if (ctx.cr6.lt) goto loc_899B26A4;
loc_899B26C8:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x899b2674
	if (ctx.cr6.lt) goto loc_899B2674;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x899b25f8
	if (ctx.cr6.lt) goto loc_899B25F8;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-4264
	ctx.r10.s64 = ctx.r11.s64 + -4264;
	// lbz r11,-4264(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -4264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b2788
	if (ctx.cr6.eq) goto loc_899B2788;
	// addi r30,r10,-7
	ctx.r30.s64 = ctx.r10.s64 + -7;
loc_899B2714:
	// lbz r9,13(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lbz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,9(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// lbz r8,10(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// stb r9,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// addi r11,r31,-3728
	ctx.r11.s64 = ctx.r31.s64 + -3728;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,11(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// li r5,11
	ctx.r5.s64 = 11;
	// sth r3,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r3.u16);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x899B2764;
	sub_89934B48(ctx, base);
	// lbzu r10,7(r30)
	ea = 7 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899b2714
	if (!ctx.cr6.eq) goto loc_899B2714;
loc_899B2788:
	// addi r9,r31,-3728
	ctx.r9.s64 = ctx.r31.s64 + -3728;
	// addi r11,r31,3520
	ctx.r11.s64 = ctx.r31.s64 + 3520;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_899B2794:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// blt cr6,0x899b2794
	if (ctx.cr6.lt) goto loc_899B2794;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r10,-4228
	ctx.r10.s64 = ctx.r10.s64 + -4228;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b2858
	if (ctx.cr6.eq) goto loc_899B2858;
	// addi r30,r10,-7
	ctx.r30.s64 = ctx.r10.s64 + -7;
loc_899B27E0:
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lbz r9,13(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// lbz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// addi r3,r31,2784
	ctx.r3.s64 = ctx.r31.s64 + 2784;
	// lbz r7,9(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r28,r8,16
	ctx.r28.u64 = ctx.r8.u32 & 0xFFFF;
	// lbz r8,10(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// lbz r9,11(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// li r4,8
	ctx.r4.s64 = 8;
	// sth r28,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x899B2834;
	sub_89934B48(ctx, base);
	// lbzu r10,7(r30)
	ea = 7 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899b27e0
	if (!ctx.cr6.eq) goto loc_899B27E0;
loc_899B2858:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_899B2860:
	// rlwinm r9,r11,14,16,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000;
	// addi r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 + 216;
	// mulli r10,r30,120
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(120));
	// ori r3,r9,9
	ctx.r3.u64 = ctx.r9.u64 | 9;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r31,2784
	ctx.r5.s64 = ctx.r31.s64 + 2784;
	// li r7,9
	ctx.r7.s64 = 9;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x89935610
	ctx.lr = 0x899B2884;
	sub_89935610(ctx, base);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x899b2860
	if (ctx.cr6.lt) goto loc_899B2860;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-4192
	ctx.r10.s64 = ctx.r11.s64 + -4192;
	// lbz r11,-4192(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -4192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b2928
	if (ctx.cr6.eq) goto loc_899B2928;
	// addi r30,r10,-7
	ctx.r30.s64 = ctx.r10.s64 + -7;
loc_899B28B4:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r5,13(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,9(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// addi r4,r31,-4184
	ctx.r4.s64 = ctx.r31.s64 + -4184;
	// lbz r8,10(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,11(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// stb r5,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// li r5,10
	ctx.r5.s64 = 10;
	// sth r3,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r3.u16);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x899B2904;
	sub_89934B48(ctx, base);
	// lbzu r10,7(r30)
	ea = 7 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899b28b4
	if (!ctx.cr6.eq) goto loc_899B28B4;
loc_899B2928:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_899B2930:
	// rlwinm r6,r10,14,2,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFFC000;
	// addi r7,r31,3064
	ctx.r7.s64 = ctx.r31.s64 + 3064;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// mulli r11,r5,120
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(120));
	// ori r9,r10,9
	ctx.r9.u64 = ctx.r10.u64 | 9;
	// addi r10,r31,-4184
	ctx.r10.s64 = ctx.r31.s64 + -4184;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899b2988
	if (!ctx.cr6.gt) goto loc_899B2988;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899B2960:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899b2960
	if (ctx.cr6.lt) goto loc_899B2960;
loc_899B2988:
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r10,r31,-4184
	ctx.r10.s64 = ctx.r31.s64 + -4184;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// ori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 8;
	// mulli r7,r5,108
	ctx.r7.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(108));
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r10,162
	ctx.r10.s64 = ctx.r10.s64 + 162;
	// add r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 + ctx.r31.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899b29e4
	if (!ctx.cr6.gt) goto loc_899B29E4;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_899B29BC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899b29bc
	if (ctx.cr6.lt) goto loc_899B29BC;
loc_899B29E4:
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x899b2930
	if (ctx.cr6.lt) goto loc_899B2930;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B95E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// addi r9,r6,9656
	ctx.r9.s64 = ctx.r6.s64 + 9656;
	// lwz r11,27852(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 27852);
	// lis r4,-30269
	ctx.r4.s64 = -1983709184;
	// lbz r10,4946(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 4946);
	// addi r3,r9,64
	ctx.r3.s64 = ctx.r9.s64 + 64;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mulli r9,r6,92
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(92));
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sth r10,9536(r5)
	REX_STORE_U16(ctx.r5.u32 + 9536, ctx.r10.u16);
	// lwzx r3,r9,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,27852(r8)
	REX_STORE_U32(ctx.r8.u32 + 27852, ctx.r11.u32);
	// sth r9,-17120(r4)
	REX_STORE_U16(ctx.r4.u32 + -17120, ctx.r9.u16);
	// lwzx r11,r3,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// stw r11,12024(r7)
	REX_STORE_U32(ctx.r7.u32 + 12024, ctx.r11.u32);
	// b 0x899b91a0
	sub_899B91A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B9DA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x899B9DA8;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// stw r30,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r31,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bgt cr6,0x899bd290
	if (ctx.cr6.gt) goto loc_899BD290;
	// lis r12,-30308
	ctx.r12.s64 = -1986265088;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-25104
	ctx.r12.s64 = ctx.r12.s64 + -25104;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899B9EB8;
	case 1:
		goto loc_899BA034;
	case 2:
		goto loc_899BA2F8;
	case 3:
		goto loc_899BA2F8;
	case 4:
		goto loc_899BA488;
	case 5:
		goto loc_899BADE4;
	case 6:
		goto loc_899BA7D0;
	case 7:
		goto loc_899BA7D0;
	case 8:
		goto loc_899BAFF4;
	case 9:
		goto loc_899BB1DC;
	case 10:
		goto loc_899BB2CC;
	case 11:
		goto loc_899BB6A0;
	case 12:
		goto loc_899BB770;
	case 13:
		goto loc_899BB9CC;
	case 14:
		goto loc_899BB310;
	case 15:
		goto loc_899BBB04;
	case 16:
		goto loc_899BBB04;
	case 17:
		goto loc_899BBBC0;
	case 18:
		goto loc_899BBC00;
	case 19:
		goto loc_899BC1EC;
	case 20:
		goto loc_899BC42C;
	case 21:
		goto loc_899BC42C;
	case 22:
		goto loc_899BBFF8;
	case 23:
		goto loc_899BBC74;
	case 24:
		goto loc_899BBC74;
	case 25:
		goto loc_899BBF94;
	case 26:
		goto loc_899BBF94;
	case 27:
		goto loc_899BBFBC;
	case 28:
		goto loc_899BBFBC;
	case 29:
		goto loc_899BBFBC;
	case 30:
		goto loc_899BBFBC;
	case 31:
		goto loc_899BC5CC;
	case 32:
		goto loc_899BC778;
	case 33:
		goto loc_899BCAC0;
	case 34:
		goto loc_899BCAC0;
	case 35:
		goto loc_899B9EB8;
	case 36:
		goto loc_899BA034;
	case 37:
		goto loc_899BA0A8;
	case 38:
		goto loc_899BA0A8;
	case 39:
		goto loc_899BB360;
	case 40:
		goto loc_899BB500;
	case 41:
		goto loc_899BA1F8;
	case 42:
		goto loc_899BC054;
	case 43:
		goto loc_899BB958;
	case 44:
		goto loc_899BB958;
	case 45:
		goto loc_899BCBF4;
	case 46:
		goto loc_899BCBF4;
	case 47:
		goto loc_899BCE44;
	case 48:
		goto loc_899BD0E4;
	case 49:
		goto loc_899BD0E4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899B9EB8:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899ba020
	if (ctx.cr6.eq) goto loc_899BA020;
	// bl 0x8991b9f0
	ctx.lr = 0x899B9ED0;
	sub_8991B9F0(ctx, base);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x899b9eec
	if (!ctx.cr6.lt) goto loc_899B9EEC;
loc_899B9EDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899B9EEC:
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x899b9f04
	if (!ctx.cr6.gt) goto loc_899B9F04;
	// addi r11,r11,-8192
	ctx.r11.s64 = ctx.r11.s64 + -8192;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
loc_899B9F04:
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899b9f18
	if (!ctx.cr6.lt) goto loc_899B9F18;
	// addi r11,r11,8192
	ctx.r11.s64 = ctx.r11.s64 + 8192;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
loc_899B9F18:
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x899b9f30
	if (!ctx.cr6.gt) goto loc_899B9F30;
	// addi r11,r11,-8192
	ctx.r11.s64 = ctx.r11.s64 + -8192;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899B9F30:
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899b9f44
	if (!ctx.cr6.lt) goto loc_899B9F44;
	// addi r11,r11,8192
	ctx.r11.s64 = ctx.r11.s64 + 8192;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899B9F44:
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// lwz r9,-9212(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + -9212);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stw r9,-9212(r7)
	REX_STORE_U32(ctx.r7.u32 + -9212, ctx.r9.u32);
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// clrlwi r3,r5,17
	ctx.r3.u64 = ctx.r5.u32 & 0x7FFF;
	// cmplwi cr6,r3,2048
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2048, ctx.xer);
	// bge cr6,0x899b9fe4
	if (!ctx.cr6.lt) goto loc_899B9FE4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,12345
	ctx.r11.s64 = ctx.r9.s64 + 12345;
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r7)
	REX_STORE_U32(ctx.r7.u32 + -9212, ctx.r11.u32);
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r9,17
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFF;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r3,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 17) & 0xFFFF;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// rlwinm r9,r9,17,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFF;
	// rlwinm r11,r7,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r9,-2
	ctx.r3.s64 = ctx.r9.s64 + -2;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
loc_899B9FE4:
	// mulli r7,r4,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r7,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwzx r11,r7,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA020:
	// bl 0x8991c8b8
	ctx.lr = 0x899BA024;
	sub_8991C8B8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991c718
	ctx.lr = 0x899BA02C;
	sub_8991C718(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA034:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BA03C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r9,r30,206
	ctx.r9.s64 = ctx.r30.s64 + 206;
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// addi r6,r30,200
	ctx.r6.s64 = ctx.r30.s64 + 200;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r5,r30,200
	ctx.r5.s64 = ctx.r30.s64 + 200;
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwzx r10,r8,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// lbzx r11,r8,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r3,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA0A8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BA0B0;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r8,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r3,r30,206
	ctx.r3.s64 = ctx.r30.s64 + 206;
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// addi r6,r30,200
	ctx.r6.s64 = ctx.r30.s64 + 200;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r5,r30,72
	ctx.r5.s64 = ctx.r30.s64 + 72;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r29,r30,200
	ctx.r29.s64 = ctx.r30.s64 + 200;
	// lwzx r9,r8,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r11,r31,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// lbzx r9,r8,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r5.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r11,-9212(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -9212);
	// addi r7,r30,207
	ctx.r7.s64 = ctx.r30.s64 + 207;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lwz r10,7104(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 7104);
	// lbzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r5,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r6)
	REX_STORE_U32(ctx.r6.u32 + -9212, ctx.r11.u32);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// srawi r11,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 16;
	// rlwinm r6,r10,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// clrlwi r5,r5,17
	ctx.r5.u64 = ctx.r5.u32 & 0x7FFF;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// mulli r10,r5,97
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(97));
	// rlwinm r5,r11,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r10,r10,17,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFF;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r10,-16
	ctx.r11.s64 = ctx.r10.s64 + -16;
	// rlwinm r6,r6,17,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0xFFFF;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// addi r10,r6,-32
	ctx.r10.s64 = ctx.r6.s64 + -32;
	// rlwinm r31,r5,17,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0xFFFF;
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r31,-4096
	ctx.r11.s64 = ctx.r31.s64 + -4096;
	// add r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 + ctx.r4.u64;
	// neg r9,r30
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r30.u64);
	// li r4,3
	ctx.r4.s64 = 3;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x899d4640
	ctx.lr = 0x899BA1F0;
	sub_899D4640(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA1F8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BA200;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r7,r11,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// lwzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r5,r30,206
	ctx.r5.s64 = ctx.r30.s64 + 206;
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r10,r31,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lbzx r8,r31,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// addi r5,r30,200
	ctx.r5.s64 = ctx.r30.s64 + 200;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// lbzx r10,r7,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// stbx r9,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u8);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x899ba2a4
	if (!ctx.cr6.eq) goto loc_899BA2A4;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
loc_899BA2A4:
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA2F8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BA300;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r6,r11,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r6,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r31,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// addi r4,r30,164
	ctx.r4.s64 = ctx.r30.s64 + 164;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lis r28,11915
	ctx.r28.s64 = 780861440;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r6,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// ori r29,r28,41705
	ctx.r29.u64 = ctx.r28.u64 | 41705;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r10,r31,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// lwzx r3,r31,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// lwzx r10,r6,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// srawi r6,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 17;
	// clrlwi r10,r6,18
	ctx.r10.u64 = ctx.r6.u32 & 0x3FFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulhw r4,r11,r29
	ctx.r4.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mulli r6,r10,22
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(22));
	// subf r4,r6,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r6.u64;
	// subfic r11,r4,21
	ctx.xer.ca = ctx.r4.u32 <= 21;
	ctx.r11.u64 = static_cast<uint64_t>(21) - ctx.r4.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r11,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r4,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r3,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r27,r30,207
	ctx.r27.s64 = ctx.r30.s64 + 207;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// lwzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r11,r10,968
	ctx.r11.s64 = ctx.r10.s64 + 968;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r7,r30,200
	ctx.r7.s64 = ctx.r30.s64 + 200;
	// rlwinm r10,r8,29,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x4;
	// lbzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r8,6
	ctx.r8.s64 = 6;
	// lbzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// add r28,r10,r4
	ctx.r28.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r29,r11,r5
	ctx.r29.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x899d7480
	ctx.lr = 0x899BA454;
	sub_899D7480(ctx, base);
	// addi r30,r30,184
	ctx.r30.s64 = ctx.r30.s64 + 184;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r6,r31,r30
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x899d2a00
	ctx.lr = 0x899BA46C;
	sub_899D2A00(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA488:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BA490;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r31,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwzx r7,r31,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// beq cr6,0x899ba6b8
	if (ctx.cr6.eq) goto loc_899BA6B8;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// beq cr6,0x899ba518
	if (ctx.cr6.eq) goto loc_899BA518;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899ba734
	goto loc_899BA734;
loc_899BA518:
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x899bd290
	if (ctx.cr6.gt) goto loc_899BD290;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899ba58c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BA58C;
	// bdzf 4*cr6+eq,0x899ba5a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BA5A8;
	// bdzf 4*cr6+eq,0x899ba5e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BA5E4;
	// bdzf 4*cr6+eq,0x899ba600
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BA600;
	// bdzf 4*cr6+eq,0x899ba63c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BA63C;
	// bdzf 4*cr6+eq,0x899ba658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BA658;
	// bne cr6,0x899ba694
	if (!ctx.cr6.eq) goto loc_899BA694;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BA560;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA58C:
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899ba5a8
	if (!ctx.cr6.eq) goto loc_899BA5A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_899BA5A8:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BA5B8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA5E4:
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899ba600
	if (!ctx.cr6.eq) goto loc_899BA600;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_899BA600:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BA610;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,4
	ctx.r5.u64 = ctx.r6.u64 | 4;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA63C:
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899ba658
	if (!ctx.cr6.eq) goto loc_899BA658;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_899BA658:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BA668;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,8
	ctx.r5.u64 = ctx.r6.u64 | 8;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA694:
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA6B8:
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x899ba798
	if (ctx.cr6.lt) goto loc_899BA798;
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// cmplwi cr6,r5,60
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 60, ctx.xer);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// addi r5,r30,192
	ctx.r5.s64 = ctx.r30.s64 + 192;
	// lwzx r4,r31,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// oris r3,r4,48
	ctx.r3.u64 = ctx.r4.u64 | 3145728;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// stwx r3,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// lbzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x899ba724
	if (!ctx.cr6.eq) goto loc_899BA724;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA724:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899BA734:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lhzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA798:
	// addi r10,r30,196
	ctx.r10.s64 = ctx.r30.s64 + 196;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// lbzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// or r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 | ctx.r7.u64;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA7D0:
	// addi r5,r30,188
	ctx.r5.s64 = ctx.r30.s64 + 188;
	// stw r5,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// lbzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899bad50
	if (ctx.cr6.lt) goto loc_899BAD50;
	// beq cr6,0x899ba944
	if (ctx.cr6.eq) goto loc_899BA944;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x899bd290
	if (!ctx.cr6.lt) goto loc_899BD290;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addis r10,r4,-160
	ctx.r10.s64 = ctx.r4.s64 + -10485760;
	// stwx r4,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899ba818
	if (!ctx.cr0.lt) goto loc_899BA818;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899BA818:
	// lis r11,176
	ctx.r11.s64 = 11534336;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899b9edc
	if (ctx.cr6.gt) goto loc_899B9EDC;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r10,-21584(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + -21584);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r6,r10,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r10.u64;
	// stwx r5,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u32);
	// addis r11,r6,-120
	ctx.r11.s64 = ctx.r6.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899ba858
	if (!ctx.cr0.lt) goto loc_899BA858;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899BA858:
	// lis r10,132
	ctx.r10.s64 = 8650752;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899b9edc
	if (ctx.cr6.gt) goto loc_899B9EDC;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// addi r29,r7,9016
	ctx.r29.s64 = ctx.r7.s64 + 9016;
	// addi r7,r30,168
	ctx.r7.s64 = ctx.r30.s64 + 168;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lis r6,16838
	ctx.r6.s64 = 1103495168;
	// addi r3,r10,256
	ctx.r3.s64 = ctx.r10.s64 + 256;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// ori r9,r6,20077
	ctx.r9.u64 = ctx.r6.u64 | 20077;
	// lwzx r6,r31,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r3,r7,128
	ctx.r3.s64 = ctx.r7.s64 + 128;
	// srawi r9,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// rlwinm r7,r3,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r6,r6,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// lhzx r7,r7,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rotlwi r7,r7,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// ori r8,r8,49216
	ctx.r8.u64 = ctx.r8.u64 | 49216;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// srawi r31,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 16;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// clrlwi r9,r31,17
	ctx.r9.u64 = ctx.r31.u32 & 0x7FFF;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r9,r6,17,15,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0x1FFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r6,r9,128
	ctx.r6.s64 = ctx.r9.s64 + 128;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwinm r7,r9,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// rlwinm r10,r6,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lhzx r9,r7,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// lhzx r6,r10,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// mullw r10,r7,r11
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r6,r9,r11
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// bl 0x899d79f8
	ctx.lr = 0x899BA93C;
	sub_899D79F8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BA944:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BA94C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// stwx r4,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r7,r30,193
	ctx.r7.s64 = ctx.r30.s64 + 193;
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r7,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// lbzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r4,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// lbzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// and r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ctx.r3.u64;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// lwzx r29,r31,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// add r3,r29,r28
	ctx.r3.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x8991a9d0
	ctx.lr = 0x899BA9E4;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// subf r3,r28,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r28.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899BA9F4;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// bl 0x899d80c0
	ctx.lr = 0x899BAA00;
	sub_899D80C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r8,r11,7904
	ctx.r8.s64 = ctx.r11.s64 + 7904;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r6,r10,96
	ctx.r6.s64 = ctx.r10.s64 + 96;
	// addi r8,r8,11976
	ctx.r8.s64 = ctx.r8.s64 + 11976;
	// sth r11,92(r10)
	REX_STORE_U16(ctx.r10.u32 + 92, ctx.r11.u16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r4,21
	ctx.r4.s64 = 21;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_899BAA48:
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// stb r11,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// ori r10,r10,32896
	ctx.r10.u64 = ctx.r10.u64 | 32896;
	// stb r11,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r5,512
	ctx.r5.s64 = 33554432;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r3,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r29,r8,4
	ctx.r29.s64 = ctx.r8.s64 + 4;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r24,97(r1)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// rotlwi r4,r28,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lbz r22,98(r1)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lis r26,128
	ctx.r26.s64 = 8388608;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lwz r11,680(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 680);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,676(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 676);
	// rotlwi r23,r7,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r5,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// li r5,21
	ctx.r5.s64 = 21;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lbz r25,96(r1)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// stb r25,78(r3)
	REX_STORE_U8(ctx.r3.u32 + 78, ctx.r25.u8);
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r4,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// stb r24,77(r3)
	REX_STORE_U8(ctx.r3.u32 + 77, ctx.r24.u8);
	// stw r23,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r23.u32);
	// stb r22,76(r3)
	REX_STORE_U8(ctx.r3.u32 + 76, ctx.r22.u8);
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r11,79(r3)
	REX_STORE_U8(ctx.r3.u32 + 79, ctx.r11.u8);
	// stb r11,80(r3)
	REX_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stw r9,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// lhz r4,154(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 154);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// sth r4,72(r3)
	REX_STORE_U16(ctx.r3.u32 + 72, ctx.r4.u16);
	// lwz r3,8(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// addi r25,r10,4
	ctx.r25.s64 = ctx.r10.s64 + 4;
	// stw r3,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r4,680(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 680);
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r4,r4,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stb r11,78(r3)
	REX_STORE_U8(ctx.r3.u32 + 78, ctx.r11.u8);
	// stb r11,77(r3)
	REX_STORE_U8(ctx.r3.u32 + 77, ctx.r11.u8);
	// stb r11,76(r3)
	REX_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r28,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r28.u32);
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r27,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r27.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r11,79(r3)
	REX_STORE_U8(ctx.r3.u32 + 79, ctx.r11.u8);
	// stb r11,80(r3)
	REX_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stw r9,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// lhz r9,154(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 154);
	// sth r9,72(r3)
	REX_STORE_U16(ctx.r3.u32 + 72, ctx.r9.u16);
	// stb r11,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// addi r24,r10,4
	ctx.r24.s64 = ctx.r10.s64 + 4;
	// stb r11,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lis r23,-32768
	ctx.r23.s64 = -2147483648;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// ori r11,r26,32896
	ctx.r11.u64 = ctx.r26.u64 | 32896;
	// lwz r3,12(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lbz r26,97(r1)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lbz r31,98(r1)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// li r4,21
	ctx.r4.s64 = 21;
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r3,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r3.u32);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r30,96(r1)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// lwz r22,116(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,680(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 680);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stb r31,78(r3)
	REX_STORE_U8(ctx.r3.u32 + 78, ctx.r31.u8);
	// stb r26,77(r3)
	REX_STORE_U8(ctx.r3.u32 + 77, ctx.r26.u8);
	// stb r30,76(r3)
	REX_STORE_U8(ctx.r3.u32 + 76, ctx.r30.u8);
	// stw r22,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r22.u32);
	// stw r28,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r28.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r11,79(r3)
	REX_STORE_U8(ctx.r3.u32 + 79, ctx.r11.u8);
	// stb r11,80(r3)
	REX_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stw r9,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// lhz r10,154(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 154);
	// sth r10,72(r3)
	REX_STORE_U16(ctx.r3.u32 + 72, ctx.r10.u16);
	// lwzu r10,16(r7)
	ea = 16 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stwu r10,16(r6)
	ea = 16 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// stw r23,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r3,680(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 680);
	// stw r3,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r3,r3,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r3,r3,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r24.u32);
	// stw r3,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r3.u32);
	// stb r11,78(r10)
	REX_STORE_U8(ctx.r10.u32 + 78, ctx.r11.u8);
	// stb r11,77(r10)
	REX_STORE_U8(ctx.r10.u32 + 77, ctx.r11.u8);
	// stb r11,76(r10)
	REX_STORE_U8(ctx.r10.u32 + 76, ctx.r11.u8);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stw r29,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r29.u32);
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r27,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r27.u32);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stb r11,79(r10)
	REX_STORE_U8(ctx.r10.u32 + 79, ctx.r11.u8);
	// stb r11,80(r10)
	REX_STORE_U8(ctx.r10.u32 + 80, ctx.r11.u8);
	// stw r9,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r9.u32);
	// lhz r5,154(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 154);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// sth r5,72(r10)
	REX_STORE_U16(ctx.r10.u32 + 72, ctx.r5.u16);
	// bdnz 0x899baa48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899BAA48;
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r10,168
	ctx.r5.s64 = ctx.r10.s64 + 168;
	// lwz r30,0(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r3,r10,158
	ctx.r3.s64 = ctx.r10.s64 + 158;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r30,r30,0,18,16
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// lis r31,-4
	ctx.r31.s64 = -262144;
	// lwz r29,140(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r27,144(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r28,116
	ctx.r28.s64 = 116;
	// stwx r11,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u32);
	// oris r11,r30,176
	ctx.r11.u64 = ctx.r30.u64 | 11534336;
	// stwx r8,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r8.u32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stwx r31,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r31.u32);
	// sthx r6,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u16);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lbzx r8,r10,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// lbzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// andc r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// stbx r4,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u8);
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stbx r28,r10,r27
	REX_STORE_U8(ctx.r10.u32 + ctx.r27.u32, ctx.r28.u8);
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BAD50:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BAD58;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r31,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwzx r10,r9,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwzx r4,r9,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// beq cr6,0x899badc4
	if (ctx.cr6.eq) goto loc_899BADC4;
loc_899BADB0:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BADC4:
	// lbzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stbx r8,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u8);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BADE4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BADEC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// stwx r5,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r5.u32);
	// lwzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// stwx r4,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r4.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899baf48
	if (ctx.cr6.lt) goto loc_899BAF48;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x899baf20
	if (ctx.cr6.lt) goto loc_899BAF20;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x899bae64
	if (!ctx.cr6.eq) goto loc_899BAE64;
	// li r11,5
	ctx.r11.s64 = 5;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
loc_899BAE64:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BAE74;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// lwzx r28,r31,r28
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x8991a9d0
	ctx.lr = 0x899BAE94;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r8,r10,-25920
	ctx.r8.s64 = ctx.r10.s64 + -25920;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r6,r10,3
	ctx.r6.s64 = ctx.r10.s64 + 3;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// sthx r6,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u16);
	// bl 0x899cba78
	ctx.lr = 0x899BAECC;
	sub_899CBA78(ctx, base);
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r30,20
	ctx.r9.s64 = ctx.r30.s64 + 20;
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,36
	ctx.r8.s64 = ctx.r30.s64 + 36;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r30,32
	ctx.r7.s64 = ctx.r30.s64 + 32;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r4,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BAF20:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899baf8c
	goto loc_899BAF8C;
loc_899BAF48:
	// addi r10,r30,196
	ctx.r10.s64 = ctx.r30.s64 + 196;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,60
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 60, ctx.xer);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// sthx r8,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u16);
loc_899BAF8C:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BAFF4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BAFFC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r29,r11,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r7,r30,72
	ctx.r7.s64 = ctx.r30.s64 + 72;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stwx r6,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u32);
	// lhzx r5,r31,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r6,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r6.u32);
	// beq cr6,0x899bb16c
	if (ctx.cr6.eq) goto loc_899BB16C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932b18
	ctx.lr = 0x899BB05C;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932d30
	ctx.lr = 0x899BB068;
	sub_89932D30(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x899BB070;
	sub_8991B7F8(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BB080;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bb1b4
	if (ctx.cr6.eq) goto loc_899BB1B4;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// ori r3,r7,53248
	ctx.r3.u64 = ctx.r7.u64 | 53248;
	// addi r6,r9,9016
	ctx.r6.s64 = ctx.r9.s64 + 9016;
	// lwzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r5,5
	ctx.r5.s64 = 327680;
	// addi r26,r30,200
	ctx.r26.s64 = ctx.r30.s64 + 200;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r9,r5,32768
	ctx.r9.u64 = ctx.r5.u64 | 32768;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lbzx r5,r31,r26
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r4,r29,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r7,r11,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lhzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// mullw r3,r4,r3
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899BB104;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// lis r11,-30296
	ctx.r11.s64 = -1985478656;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// addi r8,r11,-27376
	ctx.r8.s64 = ctx.r11.s64 + -27376;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x899cbb90
	ctx.lr = 0x899BB12C;
	sub_899CBB90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bb1b4
	if (ctx.cr6.eq) goto loc_899BB1B4;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// lbzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r7,r30,207
	ctx.r7.s64 = ctx.r30.s64 + 207;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// ori r6,r11,16448
	ctx.r6.u64 = ctx.r11.u64 | 16448;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x899d7a90
	ctx.lr = 0x899BB168;
	sub_899D7A90(ctx, base);
	// b 0x899bb1b4
	goto loc_899BB1B4;
loc_899BB16C:
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x899bb1b4
	if (!ctx.cr6.eq) goto loc_899BB1B4;
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r30,207
	ctx.r10.s64 = ctx.r30.s64 + 207;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x899d4e08
	ctx.lr = 0x899BB19C;
	sub_899D4E08(ctx, base);
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbzx r7,r29,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// stbx r6,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r6.u8);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
loc_899BB1B4:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// clrlwi r11,r8,29
	ctx.r11.u64 = ctx.r8.u32 & 0x7;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB1DC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BB1E4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r4,r30,158
	ctx.r4.s64 = ctx.r30.s64 + 158;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lhzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r5,r9,9016
	ctx.r5.s64 = ctx.r9.s64 + 9016;
	// lwzx r9,r31,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// rlwinm r6,r3,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// addi r29,r10,128
	ctx.r29.s64 = ctx.r10.s64 + 128;
	// sthx r3,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u16);
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// rlwinm r4,r29,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lhzx r9,r6,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// addi r28,r30,200
	ctx.r28.s64 = ctx.r30.s64 + 200;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// mullw r27,r6,r10
	ctx.r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// srawi r10,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 8;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r6,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u32);
	// srawi r8,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 31;
	// lbzx r3,r11,r28
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r5.u64 - ctx.r10.u64;
	// adde r10,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r6,r10,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r10.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stbx r6,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u8);
	// lhzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x899bbbf4
	if (ctx.cr6.eq) goto loc_899BBBF4;
	// bl 0x8991b7f8
	ctx.lr = 0x899BB2C4;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB2CC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BB2D4;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8999df28
	ctx.lr = 0x899BB2EC;
	sub_8999DF28(ctx, base);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x899b9650
	ctx.lr = 0x899BB308;
	sub_899B9650(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB310:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BB318;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8999e1a0
	ctx.lr = 0x899BB330;
	sub_8999E1A0(ctx, base);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,148
	ctx.r10.s64 = ctx.r30.s64 + 148;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mulli r7,r8,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x899b9650
	ctx.lr = 0x899BB358;
	sub_899B9650(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB360:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BB368;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r22,r30,48
	ctx.r22.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r6,r30,206
	ctx.r6.s64 = ctx.r30.s64 + 206;
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r7,r30,200
	ctx.r7.s64 = ctx.r30.s64 + 200;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r24,r30,200
	ctx.r24.s64 = ctx.r30.s64 + 200;
	// stwx r5,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r5.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// stwx r4,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r4.u32);
	// lbzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r11,r31,r24
	REX_STORE_U8(ctx.r31.u32 + ctx.r24.u32, ctx.r11.u8);
	// bl 0x89932b18
	ctx.lr = 0x899BB3D4;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932d30
	ctx.lr = 0x899BB3E0;
	sub_89932D30(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b770
	ctx.lr = 0x899BB3E8;
	sub_8991B770(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BB3F8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r28,r11,976
	ctx.r28.s64 = ctx.r11.s64 + 976;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r25,8
	ctx.r25.s64 = 524288;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
loc_899BB418:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lhz r8,2(r28)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + 2);
	// lhz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// rotlwi r4,r8,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lwzx r7,r31,r22
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// rotlwi r6,r9,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lwzx r9,r31,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// lbzx r5,r31,r24
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// lwzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// rlwinm r6,r29,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r4,r29,128
	ctx.r4.s64 = ctx.r29.s64 + 128;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// rlwinm r3,r4,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r8,r6,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r26.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhzx r4,r3,r26
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r26.u32);
	// mullw r3,r10,r6
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
	// mullw r3,r11,r8
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// subf r6,r4,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mullw r4,r10,r8
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mulli r3,r6,224
	ctx.r3.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(224));
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r27,r25,r8
	ctx.r27.u64 = ctx.r8.u64 - ctx.r25.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899BB4B0;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899BB4C4;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x899ce510
	ctx.lr = 0x899BB4E8;
	sub_899CE510(ctx, base);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// blt cr6,0x899bb418
	if (ctx.cr6.lt) goto loc_899BB418;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB500:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BB508;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r22,r30,48
	ctx.r22.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r7,r30,206
	ctx.r7.s64 = ctx.r30.s64 + 206;
	// addi r6,r30,200
	ctx.r6.s64 = ctx.r30.s64 + 200;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r9,r31,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r24,r30,200
	ctx.r24.s64 = ctx.r30.s64 + 200;
	// stwx r3,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r3.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r11,r8,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r11.u32);
	// lbzx r11,r8,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r10,r31,r24
	REX_STORE_U8(ctx.r31.u32 + ctx.r24.u32, ctx.r10.u8);
	// bl 0x89932b18
	ctx.lr = 0x899BB574;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932d30
	ctx.lr = 0x899BB580;
	sub_89932D30(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b770
	ctx.lr = 0x899BB588;
	sub_8991B770(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BB598;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r28,r11,984
	ctx.r28.s64 = ctx.r11.s64 + 984;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r25,8
	ctx.r25.s64 = 524288;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
loc_899BB5B8:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lhz r8,2(r28)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + 2);
	// lhz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// rotlwi r4,r8,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lwzx r7,r31,r22
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// rotlwi r6,r9,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lwzx r9,r31,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// lbzx r5,r31,r24
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// lwzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// rlwinm r6,r29,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r4,r29,128
	ctx.r4.s64 = ctx.r29.s64 + 128;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// rlwinm r3,r4,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r8,r6,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r26.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhzx r4,r3,r26
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r26.u32);
	// mullw r3,r10,r6
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
	// mullw r3,r11,r8
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// subf r6,r4,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mullw r4,r10,r8
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mulli r3,r6,224
	ctx.r3.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(224));
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r27,r25,r8
	ctx.r27.u64 = ctx.r8.u64 - ctx.r25.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899BB650;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899BB664;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r8,6
	ctx.r8.s64 = 393216;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x899ce510
	ctx.lr = 0x899BB688;
	sub_899CE510(ctx, base);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// blt cr6,0x899bb5b8
	if (ctx.cr6.lt) goto loc_899BB5B8;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB6A0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BB6A8;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r5,r11,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// lwzx r11,r5,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r31,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r28,r30,200
	ctx.r28.s64 = ctx.r30.s64 + 200;
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r6,r31,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r7,r30,206
	ctx.r7.s64 = ctx.r30.s64 + 206;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// addi r26,r30,20
	ctx.r26.s64 = ctx.r30.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r30,36
	ctx.r25.s64 = ctx.r30.s64 + 36;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r8,r5,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// stwx r8,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u32);
	// lbzx r8,r5,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r28.u32);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// stbx r5,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB770:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BB778;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r29,r11,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r5,r30,206
	ctx.r5.s64 = ctx.r30.s64 + 206;
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r31,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r7,r30,72
	ctx.r7.s64 = ctx.r30.s64 + 72;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// lhzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwzx r9,r29,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r31,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lbzx r9,r29,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// stbx r8,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u8);
	// beq cr6,0x899bb90c
	if (ctx.cr6.eq) goto loc_899BB90C;
	// addi r29,r30,191
	ctx.r29.s64 = ctx.r30.s64 + 191;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x899bd290
	if (ctx.cr6.gt) goto loc_899BD290;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899bb85c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BB85C;
	// bdzf 4*cr6+eq,0x899bb888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BB888;
	// bdzf 4*cr6+eq,0x899bb8b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BB8B4;
	// bdzf 4*cr6+eq,0x899bb8e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BB8E0;
	// bne cr6,0x899bc408
	if (!ctx.cr6.eq) goto loc_899BC408;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BB830;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,3
	ctx.r5.u64 = ctx.r6.u64 | 3;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB85C:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// ori r8,r10,12
	ctx.r8.u64 = ctx.r10.u64 | 12;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB888:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r8,r10,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// ori r8,r10,48
	ctx.r8.u64 = ctx.r10.u64 | 48;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB8B4:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r8,r10,0,26,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// ori r8,r10,12
	ctx.r8.u64 = ctx.r10.u64 | 12;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB8E0:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r8,r10,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// ori r8,r10,3
	ctx.r8.u64 = ctx.r10.u64 | 3;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB90C:
	// addi r9,r30,196
	ctx.r9.s64 = ctx.r30.s64 + 196;
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,7
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 7, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// addi r9,r30,207
	ctx.r9.s64 = ctx.r30.s64 + 207;
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x899d4e08
	ctx.lr = 0x899BB938;
	sub_899D4E08(ctx, base);
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbzx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stbx r5,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r5.u8);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB958:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BB960;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r6,r30,200
	ctx.r6.s64 = ctx.r30.s64 + 200;
	// addi r29,r30,206
	ctx.r29.s64 = ctx.r30.s64 + 206;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r9,r31,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r11,r8,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lbzx r11,r8,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r11,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BB9CC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BB9D4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r6,r11,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r6,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// addi r29,r30,206
	ctx.r29.s64 = ctx.r30.s64 + 206;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// stwx r11,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// lbzx r8,r31,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lbzx r9,r6,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stbx r8,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u8);
	// beq cr6,0x899bba9c
	if (ctx.cr6.eq) goto loc_899BBA9C;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x899bbaac
	if (!ctx.cr6.eq) goto loc_899BBAAC;
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r11,132
	ctx.r10.s64 = ctx.r11.s64 + 132;
	// lwz r4,132(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// stwx r4,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r3,136(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r9,140(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BBA9C:
	// addi r9,r30,196
	ctx.r9.s64 = ctx.r30.s64 + 196;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
loc_899BBAAC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BBB04:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BBB0C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r29,r11,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r3,r30,206
	ctx.r3.s64 = ctx.r30.s64 + 206;
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r7,r31,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r5,r30,196
	ctx.r5.s64 = ctx.r30.s64 + 196;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r28,r30,200
	ctx.r28.s64 = ctx.r30.s64 + 200;
	// lbzx r8,r31,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// lbzx r3,r31,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// lwzx r9,r29,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lbzx r9,r29,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// addi r9,r30,207
	ctx.r9.s64 = ctx.r30.s64 + 207;
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x899d4440
	ctx.lr = 0x899BBBA0;
	sub_899D4440(ctx, base);
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stbx r6,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r6.u8);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BBBC0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BBBC8;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8999e380
	ctx.lr = 0x899BBBE0;
	sub_8999E380(ctx, base);
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
loc_899BBBF0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_899BBBF4:
	// bl 0x899b9650
	ctx.lr = 0x899BBBF8;
	sub_899B9650(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BBC00:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BBC08;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8999e4d8
	ctx.lr = 0x899BBC20;
	sub_8999E4D8(ctx, base);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,148
	ctx.r10.s64 = ctx.r30.s64 + 148;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r11,r7,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x899bbc64
	if (ctx.cr6.eq) goto loc_899BBC64;
	// addi r10,r30,148
	ctx.r10.s64 = ctx.r30.s64 + 148;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r6,r7,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lhzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
loc_899BBC64:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x899b9650
	ctx.lr = 0x899BBC6C;
	sub_899B9650(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BBC74:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BBC7C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r30,206
	ctx.r4.s64 = ctx.r30.s64 + 206;
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r6,r31,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stwx r10,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// addi r29,r30,200
	ctx.r29.s64 = ctx.r30.s64 + 200;
	// lbzx r7,r31,r4
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// lwzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stwx r8,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u32);
	// lbzx r8,r9,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// bgt cr6,0x899bd290
	if (ctx.cr6.gt) goto loc_899BD290;
	// lis r12,-30308
	ctx.r12.s64 = -1986265088;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17144
	ctx.r12.s64 = ctx.r12.s64 + -17144;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_899BBD34;
	case 1:
		goto loc_899BBD64;
	case 2:
		goto loc_899BBD64;
	case 3:
		goto loc_899BBD8C;
	case 4:
		goto loc_899BBE48;
	case 5:
		goto loc_899BBE48;
	case 6:
		goto loc_899BBE48;
	case 7:
		goto loc_899BBE48;
	case 8:
		goto loc_899BBE48;
	case 9:
		goto loc_899BBE48;
	case 10:
		goto loc_899BBE50;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899BBD34:
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r8,1
	ctx.r8.s64 = 1;
	// sthx r8,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u16);
	// b 0x899bbdbc
	goto loc_899BBDBC;
loc_899BBD64:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// li r8,0
	ctx.r8.s64 = 0;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x899bbdbc
	goto loc_899BBDBC;
loc_899BBD8C:
	// addi r8,r30,183
	ctx.r8.s64 = ctx.r30.s64 + 183;
	// lbzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stbx r6,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u8);
	// cmplwi cr6,r6,16
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16, ctx.xer);
	// blt cr6,0x899bbe48
	if (ctx.cr6.lt) goto loc_899BBE48;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stbx r7,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u8);
	// sthx r6,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u16);
loc_899BBDBC:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lhzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// add. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u32);
	// bne 0x899bd290
	if (!ctx.cr0.eq) goto loc_899BD290;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// subfic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r4.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stbx r3,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BBE48:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x899bbe54
	goto loc_899BBE54;
loc_899BBE50:
	// li r10,3
	ctx.r10.s64 = 3;
loc_899BBE54:
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r3,-30294
	ctx.r3.s64 = -1985347584;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-24
	ctx.r4.s64 = ctx.r10.s64 + -24;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r3,992
	ctx.r9.s64 = ctx.r3.s64 + 992;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r26,r30,36
	ctx.r26.s64 = ctx.r30.s64 + 36;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r25,r30,32
	ctx.r25.s64 = ctx.r30.s64 + 32;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r7.u32);
	// bl 0x8991db50
	ctx.lr = 0x899BBEDC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lis r4,16838
	ctx.r4.s64 = 1103495168;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// ori r4,r4,20077
	ctx.r4.u64 = ctx.r4.u64 | 20077;
	// lwzx r7,r31,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rotlwi r8,r3,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// lbz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lwz r11,-9212(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -9212);
	// add r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r6)
	REX_STORE_U32(ctx.r6.u32 + -9212, ctx.r11.u32);
	// extsb r26,r5
	ctx.r26.s64 = ctx.r5.s8;
	// lbzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// srawi r9,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r8,r9,17
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFF;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// rlwinm r11,r6,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0x1FFFF;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// bl 0x8991a9d0
	ctx.lr = 0x899BBF58;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899BBF6C;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x899cc3d0
	ctx.lr = 0x899BBF8C;
	sub_899CC3D0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BBF94:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BBF9C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8999d8c8
	ctx.lr = 0x899BBFB4;
	sub_8999D8C8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BBFBC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BBFC4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899bbbf0
	if (ctx.cr6.eq) goto loc_899BBBF0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8999d748
	ctx.lr = 0x899BBFF0;
	sub_8999D748(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BBFF8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BC000;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899bbbf0
	if (ctx.cr6.eq) goto loc_899BBBF0;
	// addi r10,r30,148
	ctx.r10.s64 = ctx.r30.s64 + 148;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r6,r7,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lhzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x899bbbf0
	if (ctx.cr6.eq) goto loc_899BBBF0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8999dc48
	ctx.lr = 0x899BC04C;
	sub_8999DC48(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC054:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BC05C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// addi r7,r30,206
	ctx.r7.s64 = ctx.r30.s64 + 206;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r9,r31,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r26,r30,184
	ctx.r26.s64 = ctx.r30.s64 + 184;
	// stwx r6,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r6.u32);
	// addi r29,r30,200
	ctx.r29.s64 = ctx.r30.s64 + 200;
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r4,r31,r26
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwzx r11,r8,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// lbzx r11,r8,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// beq cr6,0x899bc0f8
	if (ctx.cr6.eq) goto loc_899BC0F8;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899bc134
	goto loc_899BC134;
loc_899BC0F8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932b18
	ctx.lr = 0x899BC100;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932d30
	ctx.lr = 0x899BC10C;
	sub_89932D30(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b770
	ctx.lr = 0x899BC114;
	sub_8991B770(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BC124;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// li r11,4
	ctx.r11.s64 = 4;
	// stbx r11,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u8);
loc_899BC134:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// lbzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r7,r9,9016
	ctx.r7.s64 = ctx.r9.s64 + 9016;
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r30,r4
	ctx.r30.s64 = ctx.r4.s16;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r3,r30,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r9,r11,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r6,r3,r7
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// rotlwi r4,r6,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// lhzx r3,r9,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// rotlwi r11,r3,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r11,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r6,r7,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899BC1A0;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899BC1B4;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x899cba10
	ctx.lr = 0x899BC1D8;
	sub_899CBA10(ctx, base);
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stbx r11,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC1EC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BC1F4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r30,200
	ctx.r6.s64 = ctx.r30.s64 + 200;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r5,r30,206
	ctx.r5.s64 = ctx.r30.s64 + 206;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// stwx r4,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r4.u32);
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// lbzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// lbzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stbx r9,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u8);
	// lhzx r7,r11,r4
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x899bbbf0
	if (ctx.cr6.eq) goto loc_899BBBF0;
	// addi r10,r30,148
	ctx.r10.s64 = ctx.r30.s64 + 148;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r6,r7,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lhzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x899bbbf0
	if (ctx.cr6.eq) goto loc_899BBBF0;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,29
	ctx.r11.u64 = ctx.r3.u32 & 0x7;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// bgt cr6,0x899bd290
	if (ctx.cr6.gt) goto loc_899BD290;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899bc348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BC348;
	// bdzf 4*cr6+eq,0x899bc370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BC370;
	// bne cr6,0x899bc408
	if (!ctx.cr6.eq) goto loc_899BC408;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BC31C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r6,3
	ctx.r5.u64 = ctx.r6.u64 | 3;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC348:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC370:
	// addi r10,r30,185
	ctx.r10.s64 = ctx.r30.s64 + 185;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// cmplwi cr6,r9,240
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 240, ctx.xer);
	// blt cr6,0x899bc3b0
	if (ctx.cr6.lt) goto loc_899BC3B0;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// lbzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r5,r7,3
	ctx.r5.u64 = ctx.r7.u64 | 3;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// stbx r3,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u8);
loc_899BC3B0:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BC3C0;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932a38
	ctx.lr = 0x899BC3D0;
	sub_89932A38(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932cb0
	ctx.lr = 0x899BC3D8;
	sub_89932CB0(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r8,r10,-27448
	ctx.r8.s64 = ctx.r10.s64 + -27448;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// li r3,4
	ctx.r3.s64 = 4;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x899cbb90
	ctx.lr = 0x899BC400;
	sub_899CBB90(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC408:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC42C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BC434;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r6,r30,206
	ctx.r6.s64 = ctx.r30.s64 + 206;
	// lwzx r3,r31,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r28,r30,200
	ctx.r28.s64 = ctx.r30.s64 + 200;
	// add r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r30,188
	ctx.r8.s64 = ctx.r30.s64 + 188;
	// stwx r27,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r27.u32);
	// addi r27,r30,200
	ctx.r27.s64 = ctx.r30.s64 + 200;
	// lwzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// stwx r5,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r5.u32);
	// lbzx r4,r31,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// lbzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// lbzx r5,r11,r28
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stbx r4,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r4.u8);
	// bgt cr6,0x899bd290
	if (ctx.cr6.gt) goto loc_899BD290;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899bc4f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BC4F4;
	// bdzf 4*cr6+eq,0x899bc4c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BC4C0;
	// bne cr6,0x899bc564
	if (!ctx.cr6.eq) goto loc_899BC564;
loc_899BC4C0:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// and r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 & ctx.r3.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC4F4:
	// addi r6,r30,193
	ctx.r6.s64 = ctx.r30.s64 + 193;
	// addi r7,r30,183
	ctx.r7.s64 = ctx.r30.s64 + 183;
	// lbzx r4,r31,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// lbzx r5,r31,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// rlwinm r6,r3,15,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0xFFFF8000;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stbx r4,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u8);
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// stwx r3,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// stbx r6,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u8);
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// subfic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 <= 4294967295;
	ctx.r7.u64 = static_cast<uint64_t>(-1) - ctx.r9.u64;
	// lbzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// and r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 & ctx.r3.u64;
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lbzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stbx r3,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC564:
	// addi r6,r30,193
	ctx.r6.s64 = ctx.r30.s64 + 193;
	// addi r7,r30,183
	ctx.r7.s64 = ctx.r30.s64 + 183;
	// lbzx r5,r31,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// lbzx r6,r31,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// rlwinm r6,r4,15,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0xFFFF8000;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// subf r4,r6,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stbx r5,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u8);
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// stwx r4,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r30,192
	ctx.r6.s64 = ctx.r30.s64 + 192;
	// stbx r9,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u8);
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r5,r31,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// extsb r7,r5
	ctx.r7.s64 = ctx.r5.s8;
	// subfic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 <= 4294967295;
	ctx.r6.u64 = static_cast<uint64_t>(-1) - ctx.r7.u64;
	// lbzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// and r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 & ctx.r3.u64;
	// stbx r5,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u8);
	// stbx r9,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC5CC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BC5D4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r29,r30,206
	ctx.r29.s64 = ctx.r30.s64 + 206;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// addi r6,r30,200
	ctx.r6.s64 = ctx.r30.s64 + 200;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r28,r30,200
	ctx.r28.s64 = ctx.r30.s64 + 200;
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r11,r8,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lbzx r11,r8,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// lhzx r9,r8,r4
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899bbbf0
	if (ctx.cr6.eq) goto loc_899BBBF0;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899bc6d4
	if (ctx.cr6.eq) goto loc_899BC6D4;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// beq cr6,0x899bc688
	if (ctx.cr6.eq) goto loc_899BC688;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899bc710
	goto loc_899BC710;
loc_899BC688:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,32768
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32768, ctx.xer);
	// bge cr6,0x899bc710
	if (!ctx.cr6.lt) goto loc_899BC710;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,16
	ctx.r10.s64 = 16;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x899BC6C0;
	sub_8991B610(ctx, base);
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// li r8,256
	ctx.r8.s64 = 256;
	// sthx r8,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC6D4:
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BC6E4;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899BC6F4;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x899BC704;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899BC710:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC778:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BC780;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r7,r30,200
	ctx.r7.s64 = ctx.r30.s64 + 200;
	// addi r6,r30,206
	ctx.r6.s64 = ctx.r30.s64 + 206;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r9,r31,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r29,r30,200
	ctx.r29.s64 = ctx.r30.s64 + 200;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// lbzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// lwzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// lbzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// lhzx r8,r8,r3
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899bbbf0
	if (ctx.cr6.eq) goto loc_899BBBF0;
	// addi r25,r30,188
	ctx.r25.s64 = ctx.r30.s64 + 188;
	// lbzx r8,r31,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x899bc920
	if (ctx.cr6.lt) goto loc_899BC920;
	// beq cr6,0x899bc84c
	if (ctx.cr6.eq) goto loc_899BC84C;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bge cr6,0x899bd290
	if (!ctx.cr6.lt) goto loc_899BD290;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,13
	ctx.r9.s64 = 13;
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x899BC830;
	sub_8991B610(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stbx r6,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r6.u8);
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC84C:
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x899bc86c
	if (!ctx.cr6.eq) goto loc_899BC86C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u8);
loc_899BC86C:
	// ble cr6,0x899bc8c0
	if (!ctx.cr6.gt) goto loc_899BC8C0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
loc_899BC8C0:
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x899bd290
	if (!ctx.cr6.lt) goto loc_899BD290;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC920:
	// addi r28,r30,184
	ctx.r28.s64 = ctx.r30.s64 + 184;
	// li r24,0
	ctx.r24.s64 = 0;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899bc958
	if (ctx.cr6.eq) goto loc_899BC958;
	// addi r11,r30,185
	ctx.r11.s64 = ctx.r30.s64 + 185;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// stbx r24,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u8);
	// b 0x899bc9c4
	goto loc_899BC9C4;
loc_899BC958:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,240
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 240, ctx.xer);
	// blt cr6,0x899bc990
	if (ctx.cr6.lt) goto loc_899BC990;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r8.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BC990:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932b18
	ctx.lr = 0x899BC998;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932d30
	ctx.lr = 0x899BC9A4;
	sub_89932D30(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b770
	ctx.lr = 0x899BC9AC;
	sub_8991B770(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BC9BC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
loc_899BC9C4:
	// addi r7,r30,158
	ctx.r7.s64 = ctx.r30.s64 + 158;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lwzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lbzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r4,r10,9016
	ctx.r4.s64 = ctx.r10.s64 + 9016;
	// lwzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lhzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r7,r11,6,22,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3C0;
	// lhzx r6,r7,r4
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// rlwinm r11,r3,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 14) & 0xFFFFC000;
	// srawi r11,r11,24
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 24;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// rlwinm r7,r30,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// addi r6,r30,128
	ctx.r6.s64 = ctx.r30.s64 + 128;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r3,r6,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r7,r4
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhzx r6,r3,r4
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r4.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r4,15,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0xFFFF8000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r29,r8,4
	ctx.r29.s64 = ctx.r8.s64 + 262144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899BCA54;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bca70
	if (ctx.cr6.eq) goto loc_899BCA70;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899BCA68;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bca7c
	if (ctx.cr6.eq) goto loc_899BCA7C;
loc_899BCA70:
	// stbx r24,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r24.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BCA7C:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899cde10
	ctx.lr = 0x899BCA94;
	sub_899CDE10(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stbx r24,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r24.u8);
	// bl 0x89932a38
	ctx.lr = 0x899BCAB8;
	sub_89932A38(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BCAC0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BCAC8;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 31, ctx.xer);
	// bne cr6,0x899bcaf8
	if (!ctx.cr6.eq) goto loc_899BCAF8;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// blt cr6,0x899badb0
	if (ctx.cr6.lt) goto loc_899BADB0;
loc_899BCAF8:
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// oris r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 1073741824;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x899bcb28
	if (ctx.cr6.eq) goto loc_899BCB28;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x899bcb48
	if (!ctx.cr6.eq) goto loc_899BCB48;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r9,7
	ctx.r9.s64 = 7;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x899bcb48
	goto loc_899BCB48;
loc_899BCB28:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// addi r7,r9,1004
	ctx.r7.s64 = ctx.r9.s64 + 1004;
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// stwx r4,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
loc_899BCB48:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,206
	ctx.r9.s64 = ctx.r30.s64 + 206;
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r25,r30,200
	ctx.r25.s64 = ctx.r30.s64 + 200;
	// lwz r24,0(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r30,200
	ctx.r30.s64 = ctx.r30.s64 + 200;
	// lbzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// stwx r24,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r24.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwzx r11,r10,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r3,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r3.u32);
	// lwzx r11,r10,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// lbzx r11,r10,r25
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r10,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BCBF4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BCBFC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r6,r11,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// addi r3,r11,-45
	ctx.r3.s64 = ctx.r11.s64 + -45;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwzx r10,r6,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lwzx r9,r31,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r8,29,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x4;
	// stwx r3,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r3.u32);
	// addi r8,r11,1020
	ctx.r8.s64 = ctx.r11.s64 + 1020;
	// lwzx r7,r31,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// add r26,r10,r8
	ctx.r26.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r30,200
	ctx.r8.s64 = ctx.r30.s64 + 200;
	// addi r4,r30,206
	ctx.r4.s64 = ctx.r30.s64 + 206;
	// addi r25,r30,12
	ctx.r25.s64 = ctx.r30.s64 + 12;
	// addi r29,r30,200
	ctx.r29.s64 = ctx.r30.s64 + 200;
	// lbzx r9,r31,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r10,r6,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stwx r3,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r3.u32);
	// lbzx r10,r6,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// beq cr6,0x899bcd6c
	if (ctx.cr6.eq) goto loc_899BCD6C;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x899bccbc
	if (ctx.cr6.eq) goto loc_899BCCBC;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899bcdcc
	goto loc_899BCDCC;
loc_899BCCBC:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BCCCC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// lhz r7,2(r26)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r26.u32 + 2);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rotlwi r11,r7,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// lbzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899BCD04;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bcd20
	if (ctx.cr6.eq) goto loc_899BCD20;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899BCD18;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bcd30
	if (ctx.cr6.eq) goto loc_899BCD30;
loc_899BCD20:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// b 0x899bcdcc
	goto loc_899BCDCC;
loc_899BCD30:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932a38
	ctx.lr = 0x899BCD38;
	sub_89932A38(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932cb0
	ctx.lr = 0x899BCD40;
	sub_89932CB0(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r8,r10,-26960
	ctx.r8.s64 = ctx.r10.s64 + -26960;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x899cbb90
	ctx.lr = 0x899BCD64;
	sub_899CBB90(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BCD6C:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BCD7C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// lwzx r4,r31,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r28,r31,r27
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lbzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899BCD98;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899BCDAC;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,1
	ctx.r9.s64 = 1;
	// oris r8,r11,48
	ctx.r8.u64 = ctx.r11.u64 | 3145728;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
loc_899BCDCC:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u32);
	// bne 0x899bcdf4
	if (!ctx.cr0.eq) goto loc_899BCDF4;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r9,r10,0,12,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
loc_899BCDF4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BCE44:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BCE4C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r28,r11,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,60
	ctx.r6.s64 = ctx.r30.s64 + 60;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,206
	ctx.r8.s64 = ctx.r30.s64 + 206;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r5,r31,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r26,r30,28
	ctx.r26.s64 = ctx.r30.s64 + 28;
	// stwx r4,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r4.u32);
	// addi r27,r30,200
	ctx.r27.s64 = ctx.r30.s64 + 200;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// lbzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r25,r30,16
	ctx.r25.s64 = ctx.r30.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r24,r30,20
	ctx.r24.s64 = ctx.r30.s64 + 20;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// addi r23,r30,72
	ctx.r23.s64 = ctx.r30.s64 + 72;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r30,36
	ctx.r26.s64 = ctx.r30.s64 + 36;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r22,r30,32
	ctx.r22.s64 = ctx.r30.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhzx r8,r31,r23
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r23.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// lwzx r7,r28,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// lbzx r7,r28,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r27.u32);
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stbx r6,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r6.u32);
	// blt cr6,0x899bcf48
	if (ctx.cr6.lt) goto loc_899BCF48;
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x899b9650
	ctx.lr = 0x899BCF40;
	sub_899B9650(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BCF48:
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lbzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x899bd290
	if (ctx.cr6.gt) goto loc_899BD290;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899bcfc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BCFC8;
	// bdzf 4*cr6+eq,0x899bcff0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899BCFF0;
	// bne cr6,0x899bd0b4
	if (!ctx.cr6.eq) goto loc_899BD0B4;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BCF80;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899BCF90;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// oris r8,r9,48
	ctx.r8.u64 = ctx.r9.u64 | 3145728;
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// lbzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// ori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 | 1;
	// stbx r3,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BCFC8:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BCFF0:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// blt cr6,0x899bd034
	if (ctx.cr6.lt) goto loc_899BD034;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// lbzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// ori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 | 1;
	// stbx r3,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BD034:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r29,r31,r3
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addis r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 131072;
	// lbzx r5,r31,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899BD05C;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899BD070;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932a38
	ctx.lr = 0x899BD080;
	sub_89932A38(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932cb0
	ctx.lr = 0x899BD088;
	sub_89932CB0(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r8,r10,-27224
	ctx.r8.s64 = ctx.r10.s64 + -27224;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x899cbb90
	ctx.lr = 0x899BD0AC;
	sub_899CBB90(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BD0B4:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,12,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BD0E4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BD0EC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b9edc
	if (ctx.cr6.lt) goto loc_899B9EDC;
	// mulli r29,r11,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r30,206
	ctx.r4.s64 = ctx.r30.s64 + 206;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r30,200
	ctx.r5.s64 = ctx.r30.s64 + 200;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r28,r30,200
	ctx.r28.s64 = ctx.r30.s64 + 200;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r8,r30,72
	ctx.r8.s64 = ctx.r30.s64 + 72;
	// lwzx r11,r29,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// lbzx r10,r31,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// lbzx r11,r29,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r6,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u8);
	// lhzx r4,r29,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x899bbbf0
	if (ctx.cr6.eq) goto loc_899BBBF0;
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899bd1c4
	if (ctx.cr6.eq) goto loc_899BD1C4;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x899bd1a0
	if (ctx.cr6.eq) goto loc_899BD1A0;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x899bd290
	if (ctx.cr6.lt) goto loc_899BD290;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899bd1f8
	goto loc_899BD1F8;
loc_899BD1A0:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// b 0x899bd1f8
	goto loc_899BD1F8;
loc_899BD1C4:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899bd290
	if (ctx.cr6.eq) goto loc_899BD290;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// oris r10,r11,48
	ctx.r10.u64 = ctx.r11.u64 | 3145728;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x89936360
	ctx.lr = 0x899BD1EC;
	sub_89936360(ctx, base);
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// li r8,1
	ctx.r8.s64 = 1;
	// sthx r8,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u16);
loc_899BD1F8:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// beq 0x899bd264
	if (ctx.cr0.eq) goto loc_899BD264;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x899bd278
	if (!ctx.cr6.eq) goto loc_899BD278;
loc_899BD264:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r8,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r8.u8);
loc_899BD278:
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899bd290
	if (!ctx.cr6.eq) goto loc_899BD290;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,12,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
loc_899BD290:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

