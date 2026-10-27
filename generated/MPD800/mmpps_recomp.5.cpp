#include "mmpps_funcs.5.h"

DEFINE_REX_FUNC(sub_89915DE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89915DE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r10,27272(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 27272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89915e74
	if (ctx.cr6.eq) goto loc_89915E74;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r9,14168
	ctx.r29.s64 = ctx.r9.s64 + 14168;
loc_89915E10:
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x89915e50
	if (ctx.cr6.eq) goto loc_89915E50;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,362
	ctx.r10.s64 = ctx.r11.s64 + 362;
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// bctrl 
	ctx.lr = 0x89915E40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89915e68
	if (ctx.cr6.eq) goto loc_89915E68;
	// lhz r10,27272(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 27272);
loc_89915E50:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x89915e10
	if (ctx.cr6.lt) goto loc_89915E10;
loc_89915E68:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89915E74:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// ori r8,r9,20077
	ctx.r8.u64 = ctx.r9.u64 | 20077;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// clrlwi r11,r6,17
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFF;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r5,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0xFFFF;
	// addi r3,r11,384
	ctx.r3.s64 = ctx.r11.s64 + 384;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// bctrl 
	ctx.lr = 0x89915EB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89916CD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8995ed98
	ctx.lr = 0x89916CE8;
	sub_8995ED98(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89917188) {
	REX_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,5768
	ctx.r9.s64 = ctx.r9.s64 + 5768;
loc_8991719C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// blt cr6,0x8991719c
	if (ctx.cr6.lt) goto loc_8991719C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89917318) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lwz r11,524(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 524);
	// lwz r10,7104(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 7104);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89917448) {
	REX_FUNC_PROLOGUE();
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lhz r11,26536(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 26536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89917518
	if (ctx.cr6.eq) goto loc_89917518;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,26536(r6)
	REX_STORE_U16(ctx.r6.u32 + 26536, ctx.r11.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899174f8
	if (ctx.cr6.eq) goto loc_899174F8;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r7,20416(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 20416);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x899174c8
	if (!ctx.cr6.gt) goto loc_899174C8;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,12800
	ctx.r8.s64 = ctx.r11.s64 + 12800;
loc_8991748C:
	// mulli r11,r10,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899174b8
	if (ctx.cr6.eq) goto loc_899174B8;
	// addi r5,r8,72
	ctx.r5.s64 = ctx.r8.s64 + 72;
	// lhzx r4,r11,r5
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x899174b8
	if (ctx.cr6.eq) goto loc_899174B8;
	// rlwinm r11,r9,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89917530
	if (!ctx.cr6.eq) goto loc_89917530;
loc_899174B8:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8991748c
	if (ctx.cr6.lt) goto loc_8991748C;
loc_899174C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,5768
	ctx.r9.s64 = ctx.r9.s64 + 5768;
loc_899174D8:
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89917530
	if (!ctx.cr6.eq) goto loc_89917530;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// blt cr6,0x899174d8
	if (ctx.cr6.lt) goto loc_899174D8;
loc_899174F8:
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,26536(r6)
	REX_STORE_U16(ctx.r6.u32 + 26536, ctx.r11.u16);
	// lwz r11,7924(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7924);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r10)
	REX_STORE_U32(ctx.r10.u32 + 7924, ctx.r11.u32);
	// blr 
	return;
loc_89917518:
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lwz r11,7924(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 7924);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r9)
	REX_STORE_U32(ctx.r9.u32 + 7924, ctx.r11.u32);
	// sth r10,26536(r6)
	REX_STORE_U16(ctx.r6.u32 + 26536, ctx.r10.u16);
loc_89917530:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89918AD0) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x89918AD8;
	__savegprlr_23(ctx, base);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r5,-30276
	ctx.r5.s64 = -1984167936;
	// stw r11,12000(r9)
	REX_STORE_U32(ctx.r9.u32 + 12000, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,524(r8)
	REX_STORE_U32(ctx.r8.u32 + 524, ctx.r10.u32);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// stw r9,540(r7)
	REX_STORE_U32(ctx.r7.u32 + 540, ctx.r9.u32);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// stw r11,7104(r6)
	REX_STORE_U32(ctx.r6.u32 + 7104, ctx.r11.u32);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// stb r10,32555(r5)
	REX_STORE_U8(ctx.r5.u32 + 32555, ctx.r10.u8);
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r24,r11,14012
	ctx.r24.s64 = ctx.r11.s64 + 14012;
	// addi r30,r10,13024
	ctx.r30.s64 = ctx.r10.s64 + 13024;
	// addi r27,r9,-2528
	ctx.r27.s64 = ctx.r9.s64 + -2528;
	// addi r25,r8,9656
	ctx.r25.s64 = ctx.r8.s64 + 9656;
loc_89918B30:
	// mulli r26,r29,92
	ctx.r26.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(92));
	// lwzx r31,r26,r25
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x89918c80
	if (ctx.cr6.eq) goto loc_89918C80;
	// rlwinm r7,r31,6,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x1;
	// addi r8,r25,48
	ctx.r8.s64 = ctx.r25.s64 + 48;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r25,44
	ctx.r10.s64 = ctx.r25.s64 + 44;
	// addi r6,r25,52
	ctx.r6.s64 = ctx.r25.s64 + 52;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r4,r26,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	// lhzx r11,r3,r24
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r24.u32);
	// lwzx r5,r26,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// lwzx r28,r26,r6
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r6.u32);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
loc_89918B6C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x89918bb8
	if (!ctx.cr6.gt) goto loc_89918BB8;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
loc_89918B84:
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r23,r23,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwzx r23,r23,r4
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r4.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// or r23,r23,r5
	ctx.r23.u64 = ctx.r23.u64 | ctx.r5.u64;
	// stwx r23,r10,r27
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r23.u32);
	// blt cr6,0x89918b84
	if (ctx.cr6.lt) goto loc_89918B84;
loc_89918BB8:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x89918b6c
	if (ctx.cr6.lt) goto loc_89918B6C;
	// rlwinm r11,r31,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89918c70
	if (ctx.cr6.eq) goto loc_89918C70;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r29,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_89918BEC:
	// add r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 + ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r9,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_89918BFC:
	// rlwinm r3,r10,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 | ctx.r29.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// stbx r3,r9,r30
	REX_STORE_U8(ctx.r9.u32 + ctx.r30.u32, ctx.r3.u8);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// blt cr6,0x89918bfc
	if (ctx.cr6.lt) goto loc_89918BFC;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x89918c60
	if (!ctx.cr6.lt) goto loc_89918C60;
loc_89918C2C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x89918c4c
	if (ctx.cr6.eq) goto loc_89918C4C;
	// mullw r9,r8,r10
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r9,r9,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// stbx r9,r3,r30
	REX_STORE_U8(ctx.r3.u32 + ctx.r30.u32, ctx.r9.u8);
loc_89918C4C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x89918c2c
	if (ctx.cr6.lt) goto loc_89918C2C;
loc_89918C60:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x89918bec
	if (ctx.cr6.lt) goto loc_89918BEC;
loc_89918C70:
	// addi r11,r25,12
	ctx.r11.s64 = ctx.r25.s64 + 12;
	// addi r10,r25,32
	ctx.r10.s64 = ctx.r25.s64 + 32;
	// lwzx r9,r26,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// stwx r9,r26,r10
	REX_STORE_U32(ctx.r26.u32 + ctx.r10.u32, ctx.r9.u32);
loc_89918C80:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x89918b30
	if (ctx.cr6.lt) goto loc_89918B30;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89919968) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89919970;
	__savegprlr_27(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r10,r10,7936
	ctx.r10.s64 = ctx.r10.s64 + 7936;
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// addi r28,r11,12624
	ctx.r28.s64 = ctx.r11.s64 + 12624;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-30290
	ctx.r11.s64 = -1985085440;
	// lwz r30,3356(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 3356);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r8,r10,4952
	ctx.r8.s64 = ctx.r10.s64 + 4952;
	// addi r7,r11,21760
	ctx.r7.s64 = ctx.r11.s64 + 21760;
loc_899199A8:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89919a28
	if (ctx.cr6.eq) goto loc_89919A28;
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_899199BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89919a1c
	if (ctx.cr6.eq) goto loc_89919A1C;
	// lbz r10,79(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 79);
	// subfc r10,r5,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// subfze r10,r6
	temp.u8 = ~ctx.r6.u32 + ctx.xer.ca < ~ctx.r6.u32;
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899199ec
	if (ctx.cr6.lt) goto loc_899199EC;
	// bne cr6,0x89919a1c
	if (!ctx.cr6.eq) goto loc_89919A1C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x89919a1c
	goto loc_89919A1C;
loc_899199EC:
	// lbz r10,79(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 79);
	// rotlwi r27,r10,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lhzx r10,r27,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r8.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u32);
	// lbz r9,79(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 79);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lhzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r10,r8
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u16);
loc_89919A1C:
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x899199bc
	if (!ctx.cr6.eq) goto loc_899199BC;
loc_89919A28:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899199a8
	if (ctx.cr6.lt) goto loc_899199A8;
	// stw r30,3356(r29)
	REX_STORE_U32(ctx.r29.u32 + 3356, ctx.r30.u32);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89919FA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bgt cr6,0x8991a03c
	if (ctx.cr6.gt) goto loc_8991A03C;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lhz r10,-9220(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -9220);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8991a03c
	if (ctx.cr6.gt) goto loc_8991A03C;
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r7,r11,7904
	ctx.r7.s64 = ctx.r11.s64 + 7904;
	// lhz r6,-10752(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + -10752);
	// lhz r11,9532(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 9532);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8991a03c
	if (ctx.cr6.eq) goto loc_8991A03C;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// mulli r9,r11,84
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// addi r10,r10,6424
	ctx.r10.s64 = ctx.r10.s64 + 6424;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x8991a03c
	if (!ctx.cr6.lt) goto loc_8991A03C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// ori r7,r11,65535
	ctx.r7.u64 = ctx.r11.u64 | 65535;
loc_8991A008:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8991a02c
	if (!ctx.cr6.eq) goto loc_8991A02C;
	// add r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991a044
	if (ctx.cr6.eq) goto loc_8991A044;
loc_8991A02C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8991a008
	if (ctx.cr6.lt) goto loc_8991A008;
loc_8991A03C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8991A044:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,9532(r4)
	REX_STORE_U16(ctx.r4.u32 + 9532, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991A858) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r6,r9,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,-21396(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + -21396);
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r5,r6,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r31,r10,32896
	ctx.r31.u64 = ctx.r10.u64 | 32896;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// lwzx r6,r6,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// stw r6,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// lwzx r10,r8,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// sth r9,134(r3)
	REX_STORE_U16(ctx.r3.u32 + 134, ctx.r9.u16);
	// stw r7,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// stw r31,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r31.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991AC60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r7,r10,94
	ctx.r7.s64 = ctx.r10.s64 + 94;
	// lhzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8991ac98
	if (ctx.cr6.eq) goto loc_8991AC98;
	// addis r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 65536;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sthx r6,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// b 0x8991aca4
	goto loc_8991ACA4;
loc_8991AC98:
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lbz r7,3890(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 3890);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
loc_8991ACA4:
	// beq cr6,0x8991acd4
	if (ctx.cr6.eq) goto loc_8991ACD4;
	// addi r7,r10,96
	ctx.r7.s64 = ctx.r10.s64 + 96;
	// mulli r8,r9,52
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(52));
	// lbzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r5,r10,96
	ctx.r5.s64 = ctx.r10.s64 + 96;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r4,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_8991ACD4:
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991B770) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r7,r11,158
	ctx.r7.s64 = ctx.r11.s64 + 158;
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// lhzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lwzx r9,r8,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r4.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991B9F0) {
	REX_FUNC_PROLOGUE();
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r9,r10,12800
	ctx.r9.s64 = ctx.r10.s64 + 12800;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8991BA08:
	// lhz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 148);
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991ba64
	if (ctx.cr6.eq) goto loc_8991BA64;
	// lhz r7,154(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 154);
	// lhz r6,154(r8)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + 154);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8991ba64
	if (!ctx.cr6.eq) goto loc_8991BA64;
	// rlwinm r10,r10,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8991ba08
	if (!ctx.cr6.eq) goto loc_8991BA08;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8991ba5c
	if (ctx.cr6.eq) goto loc_8991BA5C;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,84(r8)
	REX_STORE_U32(ctx.r8.u32 + 84, ctx.r10.u32);
	// lbz r9,156(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 156);
	// stb r9,156(r8)
	REX_STORE_U8(ctx.r8.u32 + 156, ctx.r9.u8);
loc_8991BA5C:
	// lhz r3,148(r8)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + 148);
	// blr 
	return;
loc_8991BA64:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991C100) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8991C108;
	__savegprlr_27(ctx, base);
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
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r28,r30,207
	ctx.r28.s64 = ctx.r30.s64 + 207;
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// li r3,20
	ctx.r3.s64 = 20;
	// lbzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r4,r31,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x899d8e20
	ctx.lr = 0x8991C13C;
	sub_899D8E20(ctx, base);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// li r4,15
	ctx.r4.s64 = 15;
	// ori r7,r8,20077
	ctx.r7.u64 = ctx.r8.u64 | 20077;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// lbzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r5,r6,0,14,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x30000;
	// lwzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// beq cr6,0x8991c18c
	if (ctx.cr6.eq) goto loc_8991C18C;
	// bl 0x899d4440
	ctx.lr = 0x8991C188;
	sub_899D4440(ctx, base);
	// b 0x8991c190
	goto loc_8991C190;
loc_8991C18C:
	// bl 0x899d4e08
	ctx.lr = 0x8991C190;
	sub_899D4E08(ctx, base);
loc_8991C190:
	// li r3,3
	ctx.r3.s64 = 3;
	// lbzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r4,r31,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x8992e698
	ctx.lr = 0x8991C1A4;
	sub_8992E698(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991CAC0) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8991CAC8;
	__savegprlr_27(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r9,r10,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r6,r11,88
	ctx.r6.s64 = ctx.r11.s64 + 88;
	// addi r8,r11,158
	ctx.r8.s64 = ctx.r11.s64 + 158;
	// addi r7,r11,200
	ctx.r7.s64 = ctx.r11.s64 + 200;
	// addi r5,r11,94
	ctx.r5.s64 = ctx.r11.s64 + 94;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// stwx r4,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r4.u32);
	// addi r31,r11,92
	ctx.r31.s64 = ctx.r11.s64 + 92;
	// addi r30,r11,172
	ctx.r30.s64 = ctx.r11.s64 + 172;
	// lhzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// addi r29,r11,176
	ctx.r29.s64 = ctx.r11.s64 + 176;
	// lbzx r7,r9,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// addi r6,r11,168
	ctx.r6.s64 = ctx.r11.s64 + 168;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// addi r28,r11,56
	ctx.r28.s64 = ctx.r11.s64 + 56;
	// addi r27,r11,162
	ctx.r27.s64 = ctx.r11.s64 + 162;
	// addi r11,r11,201
	ctx.r11.s64 = ctx.r11.s64 + 201;
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r10,r9,r5
	REX_STORE_U16(ctx.r9.u32 + ctx.r5.u32, ctx.r10.u16);
	// stbx r10,r9,r3
	REX_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// sthx r10,r9,r31
	REX_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u16);
	// stwx r10,r9,r30
	REX_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u32);
	// stwx r10,r9,r29
	REX_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r10.u32);
	// stwx r10,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r10,r9,r4
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r10,r9,r28
	REX_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r10.u32);
	// sthx r8,r9,r27
	REX_STORE_U16(ctx.r9.u32 + ctx.r27.u32, ctx.r8.u16);
	// stbx r7,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991CED8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r5,-30269
	ctx.r5.s64 = -1983709184;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// addi r7,r11,12800
	ctx.r7.s64 = ctx.r11.s64 + 12800;
	// mulli r6,r4,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// lwz r11,-10744(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + -10744);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r3,r7,207
	ctx.r3.s64 = ctx.r7.s64 + 207;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// stw r11,-10744(r5)
	REX_STORE_U32(ctx.r5.u32 + -10744, ctx.r11.u32);
	// cmpwi cr6,r9,384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 384, ctx.xer);
	// lbzx r5,r6,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// addi r8,r8,9656
	ctx.r8.s64 = ctx.r8.s64 + 9656;
	// ble cr6,0x8991cf34
	if (!ctx.cr6.gt) goto loc_8991CF34;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// addi r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 + 28;
	// mulli r3,r11,92
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(92));
	// lhzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
loc_8991CF34:
	// addi r11,r7,48
	ctx.r11.s64 = ctx.r7.s64 + 48;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// subf. r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8991cf4c
	if (!ctx.cr0.lt) goto loc_8991CF4C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8991CF4C:
	// addi r10,r7,56
	ctx.r10.s64 = ctx.r7.s64 + 56;
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bge cr6,0x8991cf64
	if (!ctx.cr6.lt) goto loc_8991CF64;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8991CF64:
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// mulli r5,r10,92
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(92));
	// lwzx r10,r5,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8991cf80
	if (!ctx.cr6.lt) goto loc_8991CF80;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8991CF80:
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8991cf9c
	if (!ctx.cr6.lt) goto loc_8991CF9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8991CF9C:
	// addi r11,r7,52
	ctx.r11.s64 = ctx.r7.s64 + 52;
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// lwzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// subf. r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8991cfb4
	if (!ctx.cr0.lt) goto loc_8991CFB4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8991CFB4:
	// addi r10,r7,60
	ctx.r10.s64 = ctx.r7.s64 + 60;
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8991cfc8
	if (!ctx.cr6.lt) goto loc_8991CFC8;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8991CFC8:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991DBC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8991DBC8;
	__savegprlr_29(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,-10320
	ctx.r11.s64 = ctx.r11.s64 + -10320;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991DBE4:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8991dbe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991DBE4;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r11,8160
	ctx.r11.s64 = ctx.r11.s64 + 8160;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991DC04:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8991dc04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991DC04;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r11,4952
	ctx.r11.s64 = ctx.r11.s64 + 4952;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991DC24:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8991dc24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991DC24;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r11,12640
	ctx.r11.s64 = ctx.r11.s64 + 12640;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991DC44:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8991dc44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991DC44;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r11,7640
	ctx.r11.s64 = ctx.r11.s64 + 7640;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991DC64:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8991dc64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991DC64;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r11,7896
	ctx.r11.s64 = ctx.r11.s64 + 7896;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991DC84:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8991dc84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991DC84;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r11,3536
	ctx.r11.s64 = ctx.r11.s64 + 3536;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991DCA4:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8991dca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991DCA4;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r11,5472
	ctx.r11.s64 = ctx.r11.s64 + 5472;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991DCC4:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8991dcc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991DCC4;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r11,-21360
	ctx.r11.s64 = ctx.r11.s64 + -21360;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991DCE4:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8991dce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991DCE4;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r11,5496
	ctx.r11.s64 = ctx.r11.s64 + 5496;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991DD04:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8991dd04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991DD04;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r11,12480
	ctx.r11.s64 = ctx.r11.s64 + 12480;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8991DD24:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8991dd24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991DD24;
	// li r10,128
	ctx.r10.s64 = 128;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// addi r10,r10,8016
	ctx.r10.s64 = ctx.r10.s64 + 8016;
loc_8991DD40:
	// addi r9,r10,256
	ctx.r9.s64 = ctx.r10.s64 + 256;
	// sthx r7,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// sthx r7,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8991dd40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8991DD40;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// lis r4,-30242
	ctx.r4.s64 = -1981939712;
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lhz r11,6044(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 6044);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// sth r11,-10060(r5)
	REX_STORE_U16(ctx.r5.u32 + -10060, ctx.r11.u16);
	// lis r5,-30251
	ctx.r5.s64 = -1982529536;
	// sth r11,-21404(r4)
	REX_STORE_U16(ctx.r4.u32 + -21404, ctx.r11.u16);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// sth r11,9524(r3)
	REX_STORE_U16(ctx.r3.u32 + 9524, ctx.r11.u16);
	// lis r3,-30247
	ctx.r3.s64 = -1982267392;
	// sth r11,9532(r31)
	REX_STORE_U16(ctx.r31.u32 + 9532, ctx.r11.u16);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r10,9652(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 9652);
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// lhz r9,7112(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 7112);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lhz r8,-31408(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + -31408);
	// sth r7,6028(r6)
	REX_STORE_U16(ctx.r6.u32 + 6028, ctx.r7.u16);
	// sth r10,20956(r30)
	REX_STORE_U16(ctx.r30.u32 + 20956, ctx.r10.u16);
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// sth r10,12764(r5)
	REX_STORE_U16(ctx.r5.u32 + 12764, ctx.r10.u16);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// sth r10,12324(r4)
	REX_STORE_U16(ctx.r4.u32 + 12324, ctx.r10.u16);
	// lis r4,-30269
	ctx.r4.s64 = -1983709184;
	// sth r9,19356(r3)
	REX_STORE_U16(ctx.r3.u32 + 19356, ctx.r9.u16);
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// sth r9,6024(r11)
	REX_STORE_U16(ctx.r11.u32 + 6024, ctx.r9.u16);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// sth r10,7896(r29)
	REX_STORE_U16(ctx.r29.u32 + 7896, ctx.r10.u16);
	// sth r9,12620(r31)
	REX_STORE_U16(ctx.r31.u32 + 12620, ctx.r9.u16);
	// sth r9,26928(r30)
	REX_STORE_U16(ctx.r30.u32 + 26928, ctx.r9.u16);
	// sth r8,26540(r5)
	REX_STORE_U16(ctx.r5.u32 + 26540, ctx.r8.u16);
	// sth r8,-10756(r4)
	REX_STORE_U16(ctx.r4.u32 + -10756, ctx.r8.u16);
	// sth r8,27800(r3)
	REX_STORE_U16(ctx.r3.u32 + 27800, ctx.r8.u16);
	// sth r8,26532(r11)
	REX_STORE_U16(ctx.r11.u32 + 26532, ctx.r8.u16);
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899224B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899224C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r3,r11,7740
	ctx.r3.s64 = ctx.r11.s64 + 7740;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x89931d78
	ctx.lr = 0x899224E0;
	sub_89931D78(ctx, base);
	// bl 0x89921b18
	ctx.lr = 0x899224E4;
	sub_89921B18(ctx, base);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lhz r3,-8692(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + -8692);
	// lhz r4,3528(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 3528);
	// lhz r8,12268(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 12268);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x89922518
	if (!ctx.cr6.lt) goto loc_89922518;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x89922520
	if (!ctx.cr6.lt) goto loc_89922520;
loc_89922518:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r8,-8692(r9)
	REX_STORE_U16(ctx.r9.u32 + -8692, ctx.r8.u16);
loc_89922520:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r11,r11,20432
	ctx.r11.s64 = ctx.r11.s64 + 20432;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899225e8
	if (ctx.cr6.eq) goto loc_899225E8;
	// lbz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 256);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r5,0
	ctx.r5.s64 = 0;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// rlwinm r29,r11,0,29,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// ori r7,r5,65535
	ctx.r7.u64 = ctx.r5.u64 | 65535;
	// lhz r6,-9540(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + -9540);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,592
	ctx.r5.s64 = ctx.r11.s64 + 592;
loc_89922560:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89922588
	if (ctx.cr6.eq) goto loc_89922588;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x89922588
	if (!ctx.cr6.eq) goto loc_89922588;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r8,-8692(r9)
	REX_STORE_U16(ctx.r9.u32 + -8692, ctx.r8.u16);
loc_89922588:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x899225b4
	if (ctx.cr6.eq) goto loc_899225B4;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899225a4
	if (!ctx.cr6.eq) goto loc_899225A4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_899225A4:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,-8692(r9)
	REX_STORE_U16(ctx.r9.u32 + -8692, ctx.r3.u16);
loc_899225B4:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mulli r11,r11,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899225e4
	if (!ctx.cr6.eq) goto loc_899225E4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// clrlwi r28,r6,16
	ctx.r28.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x89922560
	if (!ctx.cr6.eq) goto loc_89922560;
loc_899225E4:
	// sth r3,-8692(r9)
	REX_STORE_U16(ctx.r9.u32 + -8692, ctx.r3.u16);
loc_899225E8:
	// bl 0x89921f60
	ctx.lr = 0x899225EC;
	sub_89921F60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89922BB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89922BC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r3,r11,16000
	ctx.r3.s64 = ctx.r11.s64 + 16000;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x89931d78
	ctx.lr = 0x89922BE0;
	sub_89931D78(ctx, base);
	// bl 0x89922868
	ctx.lr = 0x89922BE4;
	sub_89922868(ctx, base);
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lhz r4,-21400(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -21400);
	// lhz r3,-10760(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + -10760);
	// lhz r8,9652(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 9652);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// subfc r11,r4,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r4.u32;
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfze r11,r6
	temp.u8 = ~ctx.r6.u32 + ctx.xer.ca < ~ctx.r6.u32;
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lhz r10,12632(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 12632);
	// subfc r7,r8,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r8.u32;
	ctx.r7.u64 = ctx.r3.u64 - ctx.r8.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfe r7,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// or r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x89922c48
	if (ctx.cr6.eq) goto loc_89922C48;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r8,-10760(r9)
	REX_STORE_U16(ctx.r9.u32 + -10760, ctx.r8.u16);
loc_89922C48:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r11,r11,20432
	ctx.r11.s64 = ctx.r11.s64 + 20432;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89922d0c
	if (ctx.cr6.eq) goto loc_89922D0C;
	// lbz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 256);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r7,0
	ctx.r7.s64 = 0;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// rlwinm r28,r11,0,29,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lhz r6,7376(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 7376);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// addi r31,r11,6424
	ctx.r31.s64 = ctx.r11.s64 + 6424;
loc_89922C88:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89922cb0
	if (ctx.cr6.eq) goto loc_89922CB0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x89922cb0
	if (!ctx.cr6.eq) goto loc_89922CB0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r8,-10760(r9)
	REX_STORE_U16(ctx.r9.u32 + -10760, ctx.r8.u16);
loc_89922CB0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x89922cd8
	if (ctx.cr6.eq) goto loc_89922CD8;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x89922cc8
	if (!ctx.cr6.eq) goto loc_89922CC8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_89922CC8:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,-10760(r9)
	REX_STORE_U16(ctx.r9.u32 + -10760, ctx.r3.u16);
loc_89922CD8:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mulli r11,r11,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89922d08
	if (!ctx.cr6.eq) goto loc_89922D08;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// clrlwi r27,r6,16
	ctx.r27.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x89922c88
	if (!ctx.cr6.eq) goto loc_89922C88;
loc_89922D08:
	// sth r3,-10760(r9)
	REX_STORE_U16(ctx.r9.u32 + -10760, ctx.r3.u16);
loc_89922D0C:
	// bl 0x899216f8
	ctx.lr = 0x89922D10;
	sub_899216F8(ctx, base);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30251
	ctx.r5.s64 = -1982529536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r9,r10,5344
	ctx.r9.s64 = ctx.r10.s64 + 5344;
	// addi r7,r8,12280
	ctx.r7.s64 = ctx.r8.s64 + 12280;
	// addi r6,r6,-31400
	ctx.r6.s64 = ctx.r6.s64 + -31400;
	// addi r5,r5,12032
	ctx.r5.s64 = ctx.r5.s64 + 12032;
loc_89922D38:
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r3,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r3.s64 = temp.s64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// lhzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// subfic r3,r10,35
	ctx.xer.ca = ctx.r10.u32 <= 35;
	ctx.r3.u64 = static_cast<uint64_t>(35) - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r3,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r4,r3,r7
	REX_STORE_U8(ctx.r3.u32 + ctx.r7.u32, ctx.r4.u8);
	// rlwinm r3,r30,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3C;
	// addi r11,r10,13
	ctx.r11.s64 = ctx.r10.s64 + 13;
	// rlwinm r30,r30,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r8,r3,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blt cr6,0x89922d38
	if (ctx.cr6.lt) goto loc_89922D38;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89925948) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89925950;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r4,-16320
	ctx.r4.s64 = -1069547520;
	// addi r3,r11,16648
	ctx.r3.s64 = ctx.r11.s64 + 16648;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x89931dd8
	ctx.lr = 0x89925968;
	sub_89931DD8(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r29,7924(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 7924);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89931bb8
	ctx.lr = 0x89925980;
	sub_89931BB8(ctx, base);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,35
	ctx.r4.s64 = 35;
	// lwz r3,-10064(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + -10064);
	// bl 0x89931bb8
	ctx.lr = 0x89925994;
	sub_89931BB8(ctx, base);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r3,12000(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 12000);
	// bl 0x89931bb8
	ctx.lr = 0x899259A8;
	sub_89931BB8(ctx, base);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r5,-30276
	ctx.r5.s64 = -1984167936;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// lhz r10,26536(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 26536);
	// addi r31,r9,5344
	ctx.r31.s64 = ctx.r9.s64 + 5344;
	// lbz r9,32555(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 32555);
	// lhz r11,-9520(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + -9520);
	// rlwinm r6,r10,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lbz r8,12342(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 12342);
	// rlwinm r30,r9,30,2,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r4,r10,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r3,r11,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r5,r11,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r28,r8,30,2,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r24,r4,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r4,r3,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// rlwinm r27,r11,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r25,r5,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r3,r3,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3C;
	// rlwinm r26,r10,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lwzx r9,r28,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r23,r6,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// rlwinm r22,r6,30,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3C;
	// lwzx r6,r25,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// addi r28,r5,12280
	ctx.r28.s64 = ctx.r5.s64 + 12280;
	// lwzx r5,r4,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// addi r30,r7,-31400
	ctx.r30.s64 = ctx.r7.s64 + -31400;
	// lwzx r4,r3,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// lwzx r7,r27,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwzx r3,r26,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// lwzx r27,r24,r31
	ctx.r27.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// lwzx r26,r23,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r24,r22,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// stw r11,4124(r30)
	REX_STORE_U32(ctx.r30.u32 + 4124, ctx.r11.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r3,3880(r30)
	REX_STORE_U32(ctx.r30.u32 + 3880, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,4128(r30)
	REX_STORE_U32(ctx.r30.u32 + 4128, ctx.r10.u32);
	// stw r9,4136(r30)
	REX_STORE_U32(ctx.r30.u32 + 4136, ctx.r9.u32);
	// stw r8,4140(r30)
	REX_STORE_U32(ctx.r30.u32 + 4140, ctx.r8.u32);
	// stw r7,4008(r30)
	REX_STORE_U32(ctx.r30.u32 + 4008, ctx.r7.u32);
	// stw r6,4004(r30)
	REX_STORE_U32(ctx.r30.u32 + 4004, ctx.r6.u32);
	// stw r5,4000(r30)
	REX_STORE_U32(ctx.r30.u32 + 4000, ctx.r5.u32);
	// stw r4,3996(r30)
	REX_STORE_U32(ctx.r30.u32 + 3996, ctx.r4.u32);
	// stw r27,3876(r30)
	REX_STORE_U32(ctx.r30.u32 + 3876, ctx.r27.u32);
	// stw r26,3872(r30)
	REX_STORE_U32(ctx.r30.u32 + 3872, ctx.r26.u32);
	// stb r25,32(r28)
	REX_STORE_U8(ctx.r28.u32 + 32, ctx.r25.u8);
	// stw r24,3868(r30)
	REX_STORE_U32(ctx.r30.u32 + 3868, ctx.r24.u32);
	// stb r25,31(r28)
	REX_STORE_U8(ctx.r28.u32 + 31, ctx.r25.u8);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// stb r25,30(r28)
	REX_STORE_U8(ctx.r28.u32 + 30, ctx.r25.u8);
	// lis r9,32639
	ctx.r9.s64 = 2139029504;
	// addi r29,r11,16640
	ctx.r29.s64 = ctx.r11.s64 + 16640;
	// li r10,35
	ctx.r10.s64 = 35;
	// li r7,35
	ctx.r7.s64 = 35;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// ori r4,r9,32768
	ctx.r4.u64 = ctx.r9.u64 | 32768;
	// lbz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
loc_89925ABC:
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// beq cr6,0x89925b18
	if (ctx.cr6.eq) goto loc_89925B18;
	// rlwinm r9,r11,28,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// stbx r25,r7,r28
	REX_STORE_U8(ctx.r7.u32 + ctx.r28.u32, ctx.r25.u8);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r6,r9,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r8,r11,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r9,r10,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r27,r10,30,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3C;
	// rlwinm r10,r7,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r30,76
	ctx.r11.s64 = ctx.r30.s64 + 76;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r10,r27,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r6,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// stw r9,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// stw r10,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// b 0x89925b58
	goto loc_89925B58;
loc_89925B18:
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// addi r9,r30,64
	ctx.r9.s64 = ctx.r30.s64 + 64;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// rlwinm r8,r6,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89925b54
	if (ctx.cr6.eq) goto loc_89925B54;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89925B3C:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r27,r4,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r4.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r27,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r27.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89925b3c
	if (!ctx.cr6.eq) goto loc_89925B3C;
loc_89925B54:
	// stbx r25,r6,r28
	REX_STORE_U8(ctx.r6.u32 + ctx.r28.u32, ctx.r25.u8);
loc_89925B58:
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// bgt cr6,0x89925abc
	if (ctx.cr6.gt) goto loc_89925ABC;
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x89931bb8
	ctx.lr = 0x89925B78;
	sub_89931BB8(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lbz r5,5210(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5210);
	// lhz r11,-9488(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + -9488);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// subfc r10,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// subfze r10,r7
	temp.u8 = ~ctx.r7.u32 + ctx.xer.ca < ~ctx.r7.u32;
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89925bb8
	if (ctx.cr6.eq) goto loc_89925BB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,-9488(r8)
	REX_STORE_U16(ctx.r8.u32 + -9488, ctx.r11.u16);
loc_89925BB8:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// addi r10,r10,20432
	ctx.r10.s64 = ctx.r10.s64 + 20432;
	// addi r3,r9,9656
	ctx.r3.s64 = ctx.r9.s64 + 9656;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89925c80
	if (ctx.cr6.eq) goto loc_89925C80;
	// lbz r10,256(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 256);
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// rlwinm r4,r10,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// lhz r6,20416(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 20416);
loc_89925BFC:
	// rlwinm r10,r5,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89925c28
	if (ctx.cr6.eq) goto loc_89925C28;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x89925c28
	if (!ctx.cr6.eq) goto loc_89925C28;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,-9488(r8)
	REX_STORE_U16(ctx.r8.u32 + -9488, ctx.r11.u16);
loc_89925C28:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x89925c50
	if (ctx.cr6.eq) goto loc_89925C50;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89925c40
	if (!ctx.cr6.eq) goto loc_89925C40;
	// li r11,6
	ctx.r11.s64 = 6;
loc_89925C40:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,-9488(r8)
	REX_STORE_U16(ctx.r8.u32 + -9488, ctx.r11.u16);
loc_89925C50:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mulli r10,r10,92
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(92));
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89925c7c
	if (!ctx.cr6.eq) goto loc_89925C7C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x89925bfc
	if (!ctx.cr6.eq) goto loc_89925BFC;
loc_89925C7C:
	// sth r11,-9488(r8)
	REX_STORE_U16(ctx.r8.u32 + -9488, ctx.r11.u16);
loc_89925C80:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_89925C8C:
	// mulli r10,r8,92
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(92));
	// lwzx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89925eec
	if (ctx.cr6.eq) goto loc_89925EEC;
	// addi r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 + 60;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89925eec
	if (ctx.cr6.eq) goto loc_89925EEC;
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
	// rlwinm r4,r11,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3C;
	// rlwinm r5,r9,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// extsh r3,r29
	ctx.r3.s64 = ctx.r29.s16;
	// rlwinm r27,r5,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r8,r11,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r26,r27,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r7,r10,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r11,r10,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r10,r7,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r24,r8,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r10,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r8,r6,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r23,r11,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r17,r26,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r11,r8,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r22,r7,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// rlwinm r25,r11,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r21,r10,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r7,r11,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,3712
	ctx.r11.s64 = ctx.r30.s64 + 3712;
	// lwzx r18,r8,r31
	ctx.r18.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r16,r25,r31
	ctx.r16.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r25,r9,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r11,r17,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r20,r7,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r15,r9,30,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3C;
	// lwzx r19,r6,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r6,r7,30,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3C;
	// lwzx r25,r25,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// addi r7,r30,3612
	ctx.r7.s64 = ctx.r30.s64 + 3612;
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// rlwinm r27,r27,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r4,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// rlwinm r4,r5,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// stw r24,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r24.u32);
	// lwzx r14,r6,r31
	ctx.r14.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r6,r30,3484
	ctx.r6.s64 = ctx.r30.s64 + 3484;
	// lwzx r20,r20,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwzx r15,r15,r31
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r31.u32);
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// rlwinm r24,r17,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// stw r22,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r22.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r21,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r21.u32);
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r19,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r19.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r18,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r18.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r16,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r16.u32);
	// stw r20,-24(r11)
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r20.u32);
	// stw r14,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r14.u32);
	// lwzx r11,r4,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// li r4,26
	ctx.r4.s64 = 26;
	// lwzx r27,r27,r31
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// lwzx r26,r26,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// rlwinm r23,r5,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// stb r25,29(r28)
	REX_STORE_U8(ctx.r28.u32 + 29, ctx.r25.u8);
	// lwz r21,88(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r22,r5,30,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stb r25,28(r28)
	REX_STORE_U8(ctx.r28.u32 + 28, ctx.r25.u8);
	// stb r25,27(r28)
	REX_STORE_U8(ctx.r28.u32 + 27, ctx.r25.u8);
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// lwzx r22,r22,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// stw r11,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r11.u32);
	// lis r11,32639
	ctx.r11.s64 = 2139029504;
	// stw r27,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r27.u32);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ori r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 32768;
	// stw r15,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r15.u32);
	// stw r26,-16(r10)
	REX_STORE_U32(ctx.r10.u32 + -16, ctx.r26.u32);
	// stw r24,-20(r10)
	REX_STORE_U32(ctx.r10.u32 + -20, ctx.r24.u32);
	// stw r23,-24(r10)
	REX_STORE_U32(ctx.r10.u32 + -24, ctx.r23.u32);
	// stw r22,-28(r10)
	REX_STORE_U32(ctx.r10.u32 + -28, ctx.r22.u32);
loc_89925E18:
	// lhz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// beq cr6,0x89925e7c
	if (ctx.cr6.eq) goto loc_89925E7C;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// stbx r25,r4,r28
	REX_STORE_U8(ctx.r4.u32 + ctx.r28.u32, ctx.r25.u8);
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r7,r11,28,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// rlwinm r6,r11,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r26,r8,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// rlwinm r8,r8,30,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r26,r26,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r10,r8,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r7,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// stw r26,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r26.u32);
	// stw r10,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// b 0x89925ec8
	goto loc_89925EC8;
loc_89925E7C:
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r10,r29
	ctx.r10.s64 = ctx.r29.s8;
	// rlwinm r8,r6,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// beq cr6,0x89925ec4
	if (ctx.cr6.eq) goto loc_89925EC4;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_89925EAC:
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r26,r27,r11
	ctx.r26.u64 = ctx.r11.u64 - ctx.r27.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwu r26,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89925eac
	if (!ctx.cr6.eq) goto loc_89925EAC;
loc_89925EC4:
	// stbx r25,r6,r28
	REX_STORE_U8(ctx.r6.u32 + ctx.r28.u32, ctx.r25.u8);
loc_89925EC8:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bgt cr6,0x89925e18
	if (ctx.cr6.gt) goto loc_89925E18;
	// addi r11,r3,9
	ctx.r11.s64 = ctx.r3.s64 + 9;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
loc_89925EEC:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x89926030
	if (ctx.cr6.eq) goto loc_89926030;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// blt cr6,0x89925c8c
	if (ctx.cr6.lt) goto loc_89925C8C;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stb r25,11(r28)
	REX_STORE_U8(ctx.r28.u32 + 11, ctx.r25.u8);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r11,8418(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 8418);
	// rlwinm r7,r11,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r8,r11,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r10,r8,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r11,1424(r30)
	REX_STORE_U32(ctx.r30.u32 + 1424, ctx.r11.u32);
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// stw r10,1428(r30)
	REX_STORE_U32(ctx.r30.u32 + 1428, ctx.r10.u32);
	// addi r7,r11,12080
	ctx.r7.s64 = ctx.r11.s64 + 12080;
loc_89925F44:
	// li r10,0
	ctx.r10.s64 = 0;
loc_89925F48:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfic r4,r9,11
	ctx.xer.ca = ctx.r9.u32 <= 11;
	ctx.r4.u64 = static_cast<uint64_t>(11) - ctx.r9.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// lwzx r6,r5,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r3,r6,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// rlwinm r29,r3,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// stbx r25,r5,r28
	REX_STORE_U8(ctx.r5.u32 + ctx.r28.u32, ctx.r25.u8);
	// rlwinm r8,r29,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r6,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r11,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r26,r8,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// rlwinm r27,r6,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r3,r3,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r24,r10,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r23,r27,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// rlwinm r10,r11,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r29,r29,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// lwzx r26,r26,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r27,r27,30,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3C;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r29,r29,r31
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwzx r8,r23,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwzx r27,r27,r31
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r3,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// stw r29,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
	// stw r26,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r26.u32);
	// stw r5,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r5.u32);
	// stw r6,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r6.u32);
	// stw r8,-24(r11)
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r8.u32);
	// stw r27,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r27.u32);
	// blt cr6,0x89925f48
	if (ctx.cr6.lt) goto loc_89925F48;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x89925f44
	if (ctx.cr6.lt) goto loc_89925F44;
loc_89926028:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_89926030:
	// extsh r5,r29
	ctx.r5.s64 = ctx.r29.s16;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// bge cr6,0x89926028
	if (!ctx.cr6.lt) goto loc_89926028;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r7,r11,7132
	ctx.r7.s64 = ctx.r11.s64 + 7132;
	// lwz r6,7132(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 7132);
loc_89926048:
	// li r9,5
	ctx.r9.s64 = 5;
loc_8992604C:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x89926080
	if (ctx.cr6.eq) goto loc_89926080;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r7,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r7.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_89926070:
	// stwx r11,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89926070
	if (!ctx.cr6.eq) goto loc_89926070;
loc_89926080:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stbx r25,r9,r28
	REX_STORE_U8(ctx.r9.u32 + ctx.r28.u32, ctx.r25.u8);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// blt cr6,0x8992604c
	if (ctx.cr6.lt) goto loc_8992604C;
	// addi r11,r5,9
	ctx.r11.s64 = ctx.r5.s64 + 9;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// blt cr6,0x89926048
	if (ctx.cr6.lt) goto loc_89926048;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89929510) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89929518;
	__savegprlr_14(ctx, base);
	// stwu r1,-2816(r1)
	ea = -2816 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r11,26932(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26932);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899295c8
	if (ctx.cr6.lt) goto loc_899295C8;
	// bne cr6,0x89929654
	if (!ctx.cr6.eq) goto loc_89929654;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lhz r10,19168(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 19168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89929918
	if (ctx.cr6.eq) goto loc_89929918;
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// lis r11,-30269
	ctx.r11.s64 = -1983709184;
	// addi r10,r10,-21264
	ctx.r10.s64 = ctx.r10.s64 + -21264;
	// addi r5,r11,-21292
	ctx.r5.s64 = ctx.r11.s64 + -21292;
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_89929560:
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899295b0
	if (ctx.cr6.eq) goto loc_899295B0;
	// lwz r8,-8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -8);
	// lwz r11,-12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -12);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x899295b0
	if (!ctx.cr6.lt) goto loc_899295B0;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_89929588:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r8,0,8,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x899295a4
	if (ctx.cr6.eq) goto loc_899295A4;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_899295A4:
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x89929588
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89929588;
loc_899295B0:
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89929560
	if (ctx.cr6.lt) goto loc_89929560;
	// b 0x89929654
	goto loc_89929654;
loc_899295C8:
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lhz r10,5752(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 5752);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89929918
	if (ctx.cr6.eq) goto loc_89929918;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r10,r10,19192
	ctx.r10.s64 = ctx.r10.s64 + 19192;
	// addi r5,r11,-31432
	ctx.r5.s64 = ctx.r11.s64 + -31432;
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_899295F0:
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89929640
	if (ctx.cr6.eq) goto loc_89929640;
	// lwz r8,-8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -8);
	// lwz r11,-12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -12);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x89929640
	if (!ctx.cr6.lt) goto loc_89929640;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_89929618:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r8,0,8,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89929634
	if (ctx.cr6.eq) goto loc_89929634;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_89929634:
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x89929618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89929618;
loc_89929640:
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899295f0
	if (ctx.cr6.lt) goto loc_899295F0;
loc_89929654:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// addi r5,r11,25128
	ctx.r5.s64 = ctx.r11.s64 + 25128;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// addi r7,r7,-3544
	ctx.r7.s64 = ctx.r7.s64 + -3544;
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// addi r16,r5,16
	ctx.r16.s64 = ctx.r5.s64 + 16;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r15,-32768
	ctx.r15.s64 = -2147483648;
	// lis r20,-30274
	ctx.r20.s64 = -1984036864;
	// addi r14,r11,12332
	ctx.r14.s64 = ctx.r11.s64 + 12332;
	// addi r29,r10,6404
	ctx.r29.s64 = ctx.r10.s64 + 6404;
	// addi r22,r9,5408
	ctx.r22.s64 = ctx.r9.s64 + 5408;
	// addi r21,r8,592
	ctx.r21.s64 = ctx.r8.s64 + 592;
loc_899296A8:
	// lwz r11,-16(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + -16);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89929904
	if (ctx.cr6.eq) goto loc_89929904;
	// lwz r11,-8(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + -8);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r7,-4(r16)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + -4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r24,8(r16)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r4,r7,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r23,12(r16)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r16.u32 + 12);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r28,8(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r18,r10,4
	ctx.r18.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x89929904
	if (ctx.cr6.eq) goto loc_89929904;
	// rlwinm r31,r11,0,0,1
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_89929714:
	// lwz r17,4(r28)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r15.s32, ctx.xer);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// beq cr6,0x8992975c
	if (ctx.cr6.eq) goto loc_8992975C;
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8992974c
	if (ctx.cr6.eq) goto loc_8992974C;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// add r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 + ctx.r24.u64;
	// beq cr6,0x89929754
	if (ctx.cr6.eq) goto loc_89929754;
	// add r25,r10,r23
	ctx.r25.u64 = ctx.r10.u64 + ctx.r23.u64;
	// b 0x8992976c
	goto loc_8992976C;
loc_8992974C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// subf r27,r11,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r11.u64;
loc_89929754:
	// subf r25,r10,r23
	ctx.r25.u64 = ctx.r23.u64 - ctx.r10.u64;
	// b 0x8992976c
	goto loc_8992976C;
loc_8992975C:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// subf r27,r10,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r10.u64;
	// add r25,r11,r23
	ctx.r25.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_8992976C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x899298f0
	if (ctx.cr6.eq) goto loc_899298F0;
loc_8992977C:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,48(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// subf. r11,r7,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x89929790
	if (!ctx.cr0.lt) goto loc_89929790;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89929790:
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899298e0
	if (!ctx.cr6.lt) goto loc_899298E0;
	// lwz r8,52(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// subf. r11,r8,r23
	ctx.r11.u64 = ctx.r23.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899297ac
	if (!ctx.cr0.lt) goto loc_899297AC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899297AC:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899298e0
	if (!ctx.cr6.lt) goto loc_899298E0;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x899298e0
	if (ctx.cr6.eq) goto loc_899298E0;
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r5,r10,0,0,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
loc_899297CC:
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r5,r15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r15.s32, ctx.xer);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x89929810
	if (ctx.cr6.eq) goto loc_89929810;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x89929800
	if (ctx.cr6.eq) goto loc_89929800;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// bne cr6,0x89929818
	if (!ctx.cr6.eq) goto loc_89929818;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x8992981c
	goto loc_8992981C;
loc_89929800:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// b 0x8992981c
	goto loc_8992981C;
loc_89929810:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
loc_89929818:
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8992981C:
	// subf. r10,r10,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bge 0x8992982c
	if (!ctx.cr0.lt) goto loc_8992982C;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8992982C:
	// add r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 + ctx.r18.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x89929850
	if (!ctx.cr6.lt) goto loc_89929850;
	// subf. r10,r9,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x89929844
	if (!ctx.cr0.lt) goto loc_89929844;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89929844:
	// add r9,r4,r17
	ctx.r9.u64 = ctx.r4.u64 + ctx.r17.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x89929860
	if (ctx.cr6.lt) goto loc_89929860;
loc_89929850:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x899297cc
	if (!ctx.cr6.eq) goto loc_899297CC;
	// b 0x899298e0
	goto loc_899298E0;
loc_89929860:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r21,4
	ctx.r10.s64 = ctx.r21.s64 + 4;
	// addi r9,r22,16
	ctx.r9.s64 = ctx.r22.s64 + 16;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// extsh r3,r19
	ctx.r3.s64 = ctx.r19.s16;
	// mulli r7,r4,112
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(112));
	// lwzx r31,r7,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r6,r31,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x89929890;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,586(r20)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r20.u32 + 586);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r9,r26,r10
	ctx.r9.u64 = ctx.r26.u64 + ctx.r10.u64;
	// lbzx r7,r8,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
loc_899298B0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r26,r9,r29
	REX_STORE_U8(ctx.r9.u32 + ctx.r29.u32, ctx.r26.u8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x899298b0
	if (ctx.cr6.lt) goto loc_899298B0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r31,92(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stbx r26,r8,r14
	REX_STORE_U8(ctx.r8.u32 + ctx.r14.u32, ctx.r26.u8);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r8,r29
	REX_STORE_U8(ctx.r8.u32 + ctx.r29.u32, ctx.r11.u8);
loc_899298E0:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8992977c
	if (!ctx.cr6.eq) goto loc_8992977C;
loc_899298F0:
	// lwzu r11,16(r28)
	ea = 16 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// clrlwi r18,r11,4
	ctx.r18.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x89929714
	if (!ctx.cr6.eq) goto loc_89929714;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_89929904:
	// addi r16,r16,696
	ctx.r16.s64 = ctx.r16.s64 + 696;
	// addi r11,r5,1408
	ctx.r11.s64 = ctx.r5.s64 + 1408;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899296a8
	if (ctx.cr6.lt) goto loc_899296A8;
loc_89929918:
	// addi r1,r1,2816
	ctx.r1.s64 = ctx.r1.s64 + 2816;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992BD50) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x8992BD58;
	__savegprlr_23(ctx, base);
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// mulli r6,r10,112
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lis r4,-30295
	ctx.r4.s64 = -1985413120;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r9,r4,5408
	ctx.r9.s64 = ctx.r4.s64 + 5408;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwzx r8,r6,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r9,r6,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r4,r8,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r29,r11,20
	ctx.r29.s64 = ctx.r11.s64 + 20;
	// stwx r4,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r4.u32);
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// stwx r8,r6,r3
	REX_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r8.u32);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// lwzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// addi r4,r11,90
	ctx.r4.s64 = ctx.r11.s64 + 90;
	// stwx r9,r6,r5
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r28,r11,91
	ctx.r28.s64 = ctx.r11.s64 + 91;
	// lwzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// addi r5,r11,111
	ctx.r5.s64 = ctx.r11.s64 + 111;
	// stwx r10,r6,r30
	REX_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r27,r11,109
	ctx.r27.s64 = ctx.r11.s64 + 109;
	// addi r30,r11,108
	ctx.r30.s64 = ctx.r11.s64 + 108;
	// addi r26,r11,64
	ctx.r26.s64 = ctx.r11.s64 + 64;
	// addi r25,r11,68
	ctx.r25.s64 = ctx.r11.s64 + 68;
	// addi r24,r11,102
	ctx.r24.s64 = ctx.r11.s64 + 102;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,60
	ctx.r9.s64 = 60;
	// lhz r8,4936(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 4936);
	// ori r7,r7,32896
	ctx.r7.u64 = ctx.r7.u64 | 32896;
	// lwz r23,4(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r23,r6,r29
	REX_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r23.u32);
	// lwz r29,8(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r29,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r11,r6,r3
	REX_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r11.u32);
	// stbx r10,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r10.u8);
	// stbx r9,r6,r28
	REX_STORE_U8(ctx.r6.u32 + ctx.r28.u32, ctx.r9.u8);
	// stbx r10,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r10.u8);
	// stbx r10,r6,r27
	REX_STORE_U8(ctx.r6.u32 + ctx.r27.u32, ctx.r10.u8);
	// stbx r10,r6,r30
	REX_STORE_U8(ctx.r6.u32 + ctx.r30.u32, ctx.r10.u8);
	// stwx r10,r6,r26
	REX_STORE_U32(ctx.r6.u32 + ctx.r26.u32, ctx.r10.u32);
	// stwx r7,r6,r25
	REX_STORE_U32(ctx.r6.u32 + ctx.r25.u32, ctx.r7.u32);
	// sthx r8,r6,r24
	REX_STORE_U16(ctx.r6.u32 + ctx.r24.u32, ctx.r8.u16);
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992C498) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x8992C4A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r26,r11,592
	ctx.r26.s64 = ctx.r11.s64 + 592;
	// mulli r25,r9,112
	ctx.r25.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// addi r27,r26,4
	ctx.r27.s64 = ctx.r26.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r11,r25,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8992c5c0
	if (!ctx.cr6.eq) goto loc_8992C5C0;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lhz r11,12268(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12268);
	// lhz r7,-9492(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + -9492);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8992c52c
	if (!ctx.cr6.lt) goto loc_8992C52C;
loc_8992C4E4:
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8992c518
	if (ctx.cr6.eq) goto loc_8992C518;
	// mulli r10,r11,112
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lwzx r6,r10,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8992c518
	if (ctx.cr6.eq) goto loc_8992C518;
	// addi r6,r26,4
	ctx.r6.s64 = ctx.r26.s64 + 4;
	// lwzx r5,r10,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x8992c518
	if (!ctx.cr6.eq) goto loc_8992C518;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
loc_8992C518:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8992c4e4
	if (ctx.cr6.lt) goto loc_8992C4E4;
loc_8992C52C:
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8992c5c0
	if (!ctx.cr6.eq) goto loc_8992C5C0;
	// lis r28,-30274
	ctx.r28.s64 = -1984036864;
	// lbz r11,535(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 535);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x8992c5b8
	if (!ctx.cr6.eq) goto loc_8992C5B8;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,7008
	ctx.r29.s64 = ctx.r11.s64 + 7008;
	// addi r30,r10,25128
	ctx.r30.s64 = ctx.r10.s64 + 25128;
loc_8992C560:
	// mulli r11,r31,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(696));
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992c5a4
	if (ctx.cr6.eq) goto loc_8992C5A4;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// addi r9,r29,15
	ctx.r9.s64 = ctx.r29.s64 + 15;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r7,r8,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// mulli r6,r7,30
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(30));
	// lbzx r4,r6,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// bl 0x899362a0
	ctx.lr = 0x8992C58C;
	sub_899362A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8994c298
	ctx.lr = 0x8992C594;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8992c5a4
	if (ctx.cr6.eq) goto loc_8992C5A4;
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x8994c368
	ctx.lr = 0x8992C5A4;
	sub_8994C368(ctx, base);
loc_8992C5A4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x8992c560
	if (ctx.cr6.lt) goto loc_8992C560;
loc_8992C5B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,535(r28)
	REX_STORE_U8(ctx.r28.u32 + 535, ctx.r11.u8);
loc_8992C5C0:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8992c680
	if (ctx.cr6.eq) goto loc_8992C680;
	// lwzx r7,r25,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bge cr6,0x8992c6b8
	if (!ctx.cr6.lt) goto loc_8992C6B8;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r8,586(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8992c650
	if (!ctx.cr6.eq) goto loc_8992C650;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,12267(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12267);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8992c650
	if (!ctx.cr6.eq) goto loc_8992C650;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lwz r11,-9516(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9516);
	// lwz r9,20952(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20952);
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8992c624
	if (!ctx.cr6.gt) goto loc_8992C624;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r9.u32);
loc_8992C624:
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x8992c650
	if (!ctx.cr6.eq) goto loc_8992C650;
	// addi r6,r26,8
	ctx.r6.s64 = ctx.r26.s64 + 8;
	// lwzx r5,r25,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 18, ctx.xer);
	// bne cr6,0x8992c650
	if (!ctx.cr6.eq) goto loc_8992C650;
	// addis r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 131072;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8992c650
	if (!ctx.cr6.gt) goto loc_8992C650;
	// stw r9,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r9.u32);
loc_8992C650:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r9,12332
	ctx.r11.s64 = ctx.r9.s64 + 12332;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r25,r26
	REX_STORE_U32(ctx.r25.u32 + ctx.r26.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_8992C680:
	// lwzx r8,r25,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// bge cr6,0x8992c6b8
	if (!ctx.cr6.lt) goto loc_8992C6B8;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r10,r10,12332
	ctx.r10.s64 = ctx.r10.s64 + 12332;
	// lbz r11,586(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_8992C6B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r25,r26
	REX_STORE_U32(ctx.r25.u32 + ctx.r26.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992DBC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8992DBC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,592
	ctx.r30.s64 = ctx.r11.s64 + 592;
	// mulli r31,r10,112
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// lwzx r29,r31,r30
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r11,r29,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x7FF0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,27,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFC01F;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bgt cr6,0x8992dd54
	if (ctx.cr6.gt) goto loc_8992DD54;
	// beq cr6,0x8992dd5c
	if (ctx.cr6.eq) goto loc_8992DD5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8992dc74
	if (ctx.cr6.eq) goto loc_8992DC74;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8992de90
	if (!ctx.cr6.eq) goto loc_8992DE90;
	// addi r11,r30,98
	ctx.r11.s64 = ctx.r30.s64 + 98;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// addi r9,r10,9656
	ctx.r9.s64 = ctx.r10.s64 + 9656;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// mulli r7,r8,92
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(92));
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8992de90
	if (!ctx.cr6.eq) goto loc_8992DE90;
	// addi r11,r30,94
	ctx.r11.s64 = ctx.r30.s64 + 94;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r8,r9,9016
	ctx.r8.s64 = ctx.r9.s64 + 9016;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// sthx r5,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u16);
	// lhzx r3,r4,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// rlwinm r8,r11,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8992DC74:
	// addi r9,r30,88
	ctx.r9.s64 = ctx.r30.s64 + 88;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,116
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 116, ctx.xer);
	// bge cr6,0x8992dc9c
	if (!ctx.cr6.lt) goto loc_8992DC9C;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sthx r6,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u16);
loc_8992DC9C:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8992dcbc
	if (!ctx.cr6.gt) goto loc_8992DCBC;
	// addi r10,r10,-4096
	ctx.r10.s64 = ctx.r10.s64 + -4096;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8992DCBC:
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r30,94
	ctx.r8.s64 = ctx.r30.s64 + 94;
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lis r29,-12
	ctx.r29.s64 = -786432;
	// lhzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// addi r5,r10,9016
	ctx.r5.s64 = ctx.r10.s64 + 9016;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r3,r6,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// sthx r6,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u16);
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// lhzx r11,r3,r5
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r8,r9,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// blt cr6,0x8992dd44
	if (ctx.cr6.lt) goto loc_8992DD44;
	// lis r11,340
	ctx.r11.s64 = 22282240;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8992dd44
	if (ctx.cr6.lt) goto loc_8992DD44;
	// lis r11,684
	ctx.r11.s64 = 44826624;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8992de90
	if (!ctx.cr6.gt) goto loc_8992DE90;
loc_8992DD44:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8992c498
	ctx.lr = 0x8992DD4C;
	sub_8992C498(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8992DD54:
	// cmplwi cr6,r11,16400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16400, ctx.xer);
	// bne cr6,0x8992de90
	if (!ctx.cr6.eq) goto loc_8992DE90;
loc_8992DD5C:
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r10,r8,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8992dd98
	if (ctx.cr6.eq) goto loc_8992DD98;
	// addi r8,r11,154
	ctx.r8.s64 = ctx.r11.s64 + 154;
	// addi r7,r30,102
	ctx.r7.s64 = ctx.r30.s64 + 102;
	// lhzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// lhzx r5,r31,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8992dd9c
	if (ctx.cr6.eq) goto loc_8992DD9C;
loc_8992DD98:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8992DD9C:
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8992de38
	if (!ctx.cr6.lt) goto loc_8992DE38;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lis r11,336
	ctx.r11.s64 = 22020096;
	// addi r8,r30,88
	ctx.r8.s64 = ctx.r30.s64 + 88;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// lis r10,-16
	ctx.r10.s64 = -1048576;
	// lwzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// subfc r6,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r3.u64;
	// lbzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// eqv r11,r3,r11
	ctx.r11.u64 = ~(ctx.r3.u64 ^ ctx.r11.u64);
	// lwzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// eqv r9,r10,r3
	ctx.r9.u64 = ~(ctx.r10.u64 ^ ctx.r3.u64);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// subfc r6,r10,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r3.u64 - ctx.r10.u64;
	// clrlwi r27,r7,31
	ctx.r27.u64 = ctx.r7.u32 & 0x1;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r26,r10,31
	ctx.r26.u64 = ctx.r10.u32 & 0x1;
	// bl 0x8991a9d0
	ctx.lr = 0x8992DDF4;
	sub_8991A9D0(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// or r7,r8,r26
	ctx.r7.u64 = ctx.r8.u64 | ctx.r26.u64;
	// or r6,r7,r27
	ctx.r6.u64 = ctx.r7.u64 | ctx.r27.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8992dd44
	if (!ctx.cr6.eq) goto loc_8992DD44;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// rlwinm r9,r29,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// rlwinm r9,r9,0,18,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r8,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8992DE38:
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r7,r11,200
	ctx.r7.s64 = ctx.r11.s64 + 200;
	// addi r6,r30,92
	ctx.r6.s64 = ctx.r30.s64 + 92;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// lbzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// addi r29,r30,60
	ctx.r29.s64 = ctx.r30.s64 + 60;
	// lbzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lwzx r9,r8,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// lwzx r8,r31,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// stbx r5,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u8);
loc_8992DE90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992FD80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8992FD88;
	__savegprlr_14(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r11,9519(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9519);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899301b8
	if (ctx.cr6.eq) goto loc_899301B8;
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// lis r9,-30305
	ctx.r9.s64 = -1986068480;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r6,-30274
	ctx.r6.s64 = -1984036864;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lbz r4,4145(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4145);
	// addi r10,r11,520
	ctx.r10.s64 = ctx.r11.s64 + 520;
	// lbz r3,4144(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 4144);
	// addi r31,r6,532
	ctx.r31.s64 = ctx.r6.s64 + 532;
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// stw r10,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// lbz r11,532(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 532);
	// not r4,r9
	ctx.r4.u64 = ~ctx.r9.u64;
	// lbz r7,-31405(r5)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + -31405);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// rlwinm r10,r4,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// addic r5,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// orc r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ~ctx.r8.u64;
	// subfe r4,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r7,-192(r1)
	REX_STORE_U8(ctx.r1.u32 + -192, ctx.r7.u8);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// xor r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// stb r11,532(r6)
	REX_STORE_U8(ctx.r6.u32 + 532, ctx.r11.u8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r11,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// and r5,r4,r11
	ctx.r5.u64 = ctx.r4.u64 & ctx.r11.u64;
	// stb r11,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// addi r9,r9,-10736
	ctx.r9.s64 = ctx.r9.s64 + -10736;
	// stw r8,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r8.u32);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// addi r22,r10,-2532
	ctx.r22.s64 = ctx.r10.s64 + -2532;
	// stw r9,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8992fe6c
	if (ctx.cr6.eq) goto loc_8992FE6C;
	// lbz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x8992fe6c
	if (ctx.cr6.eq) goto loc_8992FE6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,0(r22)
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r11.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r10,8419(r8)
	REX_STORE_U8(ctx.r8.u32 + 8419, ctx.r10.u8);
	// beq cr6,0x8992fe6c
	if (ctx.cr6.eq) goto loc_8992FE6C;
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r11,41(r9)
	REX_STORE_U8(ctx.r9.u32 + 41, ctx.r11.u8);
loc_8992FE6C:
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lbz r11,32554(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 32554);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// ble cr6,0x899301b8
	if (!ctx.cr6.gt) goto loc_899301B8;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// lis r20,-30253
	ctx.r20.s64 = -1982660608;
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// stw r10,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// lis r31,-30295
	ctx.r31.s64 = -1985413120;
	// lis r30,-30242
	ctx.r30.s64 = -1981939712;
	// lis r28,-30295
	ctx.r28.s64 = -1985413120;
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// lwz r24,-9224(r20)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r20.u32 + -9224);
	// lis r26,-30275
	ctx.r26.s64 = -1984102400;
	// lis r25,-30269
	ctx.r25.s64 = -1983709184;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// lis r7,-30269
	ctx.r7.s64 = -1983709184;
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r16,r3,-21388
	ctx.r16.s64 = ctx.r3.s64 + -21388;
	// addi r19,r31,18776
	ctx.r19.s64 = ctx.r31.s64 + 18776;
	// addi r23,r30,-21372
	ctx.r23.s64 = ctx.r30.s64 + -21372;
	// addi r21,r28,18768
	ctx.r21.s64 = ctx.r28.s64 + 18768;
	// addi r30,r27,-9484
	ctx.r30.s64 = ctx.r27.s64 + -9484;
	// addi r3,r26,11744
	ctx.r3.s64 = ctx.r26.s64 + 11744;
	// addi r31,r25,-21296
	ctx.r31.s64 = ctx.r25.s64 + -21296;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r15,-30270
	ctx.r15.s64 = -1983774720;
	// addi r18,r4,6052
	ctx.r18.s64 = ctx.r4.s64 + 6052;
	// addi r29,r29,20428
	ctx.r29.s64 = ctx.r29.s64 + 20428;
	// addi r27,r5,20412
	ctx.r27.s64 = ctx.r5.s64 + 20412;
	// addi r14,r6,18764
	ctx.r14.s64 = ctx.r6.s64 + 18764;
	// addi r28,r7,-10772
	ctx.r28.s64 = ctx.r7.s64 + -10772;
	// addi r26,r8,6400
	ctx.r26.s64 = ctx.r8.s64 + 6400;
	// addi r25,r9,7932
	ctx.r25.s64 = ctx.r9.s64 + 7932;
	// addi r17,r10,-9500
	ctx.r17.s64 = ctx.r10.s64 + -9500;
loc_8992FF10:
	// lbzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// lbzx r6,r11,r17
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbzx r9,r11,r25
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lbzx r7,r11,r26
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// blt cr6,0x8992fffc
	if (ctx.cr6.lt) goto loc_8992FFFC;
	// beq cr6,0x8992ff9c
	if (ctx.cr6.eq) goto loc_8992FF9C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x89930020
	if (!ctx.cr6.lt) goto loc_89930020;
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// subfic r5,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r5,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r10.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// subfze r10,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8992ff94
	if (ctx.cr6.eq) goto loc_8992FF94;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// lbzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// lbzx r5,r8,r22
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r22.u32);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r5,9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 9, ctx.xer);
	// stbx r4,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r4.u8);
	// beq cr6,0x8992ff94
	if (ctx.cr6.eq) goto loc_8992FF94;
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,6030(r15)
	REX_STORE_U8(ctx.r15.u32 + 6030, ctx.r9.u8);
	// lbzx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u8);
loc_8992FF94:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8993001c
	goto loc_8993001C;
loc_8992FF9C:
	// lbzx r8,r11,r14
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r14.u32);
	// lwz r9,-188(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// and r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8992fff4
	if (ctx.cr6.eq) goto loc_8992FFF4;
	// lwz r10,-184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992fff4
	if (ctx.cr6.eq) goto loc_8992FFF4;
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x8992ffd8
	if (ctx.cr6.eq) goto loc_8992FFD8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
loc_8992FFD8:
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// ble cr6,0x89930020
	if (!ctx.cr6.gt) goto loc_89930020;
	// lwz r9,-180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,32550(r9)
	REX_STORE_U8(ctx.r9.u32 + 32550, ctx.r10.u8);
	// b 0x89930020
	goto loc_89930020;
loc_8992FFF4:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8993001c
	goto loc_8993001C;
loc_8992FFFC:
	// lbzx r8,r11,r14
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r14.u32);
	// lwz r9,-188(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// and r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89930020
	if (ctx.cr6.eq) goto loc_89930020;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
loc_8993001C:
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
loc_89930020:
	// lbzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899300a8
	if (ctx.cr6.lt) goto loc_899300A8;
	// beq cr6,0x8993007c
	if (ctx.cr6.eq) goto loc_8993007C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x899300d0
	if (!ctx.cr6.lt) goto loc_899300D0;
	// lbzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899300d0
	if (!ctx.cr6.eq) goto loc_899300D0;
	// lbzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r9,r11,r23
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,255
	ctx.r8.s64 = ctx.r8.s64 + 255;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stbx r8,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
	// stbx r5,r11,r23
	REX_STORE_U8(ctx.r11.u32 + ctx.r23.u32, ctx.r5.u8);
	// b 0x899300d0
	goto loc_899300D0;
loc_8993007C:
	// lbzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899300d0
	if (!ctx.cr6.eq) goto loc_899300D0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwzx r5,r10,r21
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// andc r24,r24,r5
	ctx.r24.u64 = ctx.r24.u64 & ~ctx.r5.u64;
	// b 0x899300c4
	goto loc_899300C4;
loc_899300A8:
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899300d0
	if (ctx.cr6.eq) goto loc_899300D0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r5,r10,r21
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// or r24,r5,r24
	ctx.r24.u64 = ctx.r5.u64 | ctx.r24.u64;
loc_899300C4:
	// li r8,60
	ctx.r8.s64 = 60;
	// stbx r9,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u8);
	// stbx r8,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u8);
loc_899300D0:
	// lwz r10,-184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lbzx r4,r7,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbzx r5,r7,r22
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r22.u32);
	// addic r9,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// addi r10,r5,-9
	ctx.r10.s64 = ctx.r5.s64 + -9;
	// subfe r8,r9,r4
	temp.u8 = (~ctx.r9.u32 + ctx.r4.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 & ctx.r10.u64;
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89930188
	if (ctx.cr6.eq) goto loc_89930188;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r9,r10,r16
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r16.u32);
	// lbzx r8,r10,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// lwzx r6,r6,r19
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// or r24,r6,r24
	ctx.r24.u64 = ctx.r6.u64 | ctx.r24.u64;
	// blt cr6,0x8993019c
	if (ctx.cr6.lt) goto loc_8993019C;
	// lbzx r6,r10,r18
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r18.u32);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lbz r8,-192(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -192);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// stbx r8,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stbx r9,r7,r22
	REX_STORE_U8(ctx.r7.u32 + ctx.r22.u32, ctx.r9.u8);
	// beq cr6,0x89930158
	if (ctx.cr6.eq) goto loc_89930158;
	// lwz r8,-176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,41(r8)
	REX_STORE_U8(ctx.r8.u32 + 41, ctx.r10.u8);
loc_89930158:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// ble cr6,0x8993016c
	if (!ctx.cr6.gt) goto loc_8993016C;
	// li r10,9
	ctx.r10.s64 = 9;
	// stbx r10,r7,r22
	REX_STORE_U8(ctx.r7.u32 + ctx.r22.u32, ctx.r10.u8);
loc_8993016C:
	// lbzx r10,r7,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r22.u32);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8993019c
	if (ctx.cr6.lt) goto loc_8993019C;
	// lwz r9,-172(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,8419(r9)
	REX_STORE_U8(ctx.r9.u32 + 8419, ctx.r10.u8);
	// b 0x8993019c
	goto loc_8993019C;
loc_89930188:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// subfic r7,r8,255
	ctx.xer.ca = ctx.r8.u32 <= 255;
	ctx.r7.u64 = static_cast<uint64_t>(255) - ctx.r8.u64;
	// and r24,r7,r24
	ctx.r24.u64 = ctx.r7.u64 & ctx.r24.u64;
	// stw r24,-9224(r20)
	REX_STORE_U32(ctx.r20.u32 + -9224, ctx.r24.u32);
loc_8993019C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,-168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8992ff10
	if (ctx.cr6.lt) goto loc_8992FF10;
	// stw r24,-9224(r20)
	REX_STORE_U32(ctx.r20.u32 + -9224, ctx.r24.u32);
loc_899301B8:
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899329E0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// ori r7,r9,20077
	ctx.r7.u64 = ctx.r9.u64 | 20077;
	// addi r6,r8,25128
	ctx.r6.s64 = ctx.r8.s64 + 25128;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r4,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 16;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mulli r10,r11,696
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r8,r9,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89932C20) {
	REX_FUNC_PROLOGUE();
	// subf r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	// srawi. r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x89932c98
	if (ctx.cr0.eq) goto loc_89932C98;
	// subf. r10,r4,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bge 0x89932c3c
	if (!ctx.cr0.lt) goto loc_89932C3C;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89932C3C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bge cr6,0x89932c4c
	if (!ctx.cr6.lt) goto loc_89932C4C;
	// neg r11,r8
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r8.u64);
loc_89932C4C:
	// divw r7,r9,r11
	ctx.r7.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lis r6,-30251
	ctx.r6.s64 = -1982529536;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// addi r4,r6,19352
	ctx.r4.s64 = ctx.r6.s64 + 19352;
	// rlwinm r3,r7,2,14,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwzx r3,r3,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// bge cr6,0x89932c84
	if (!ctx.cr6.lt) goto loc_89932C84;
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// clrlwi r3,r11,23
	ctx.r3.u64 = ctx.r11.u32 & 0x1FF;
loc_89932C84:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subfic r11,r3,-256
	ctx.xer.ca = ctx.r3.u32 <= 4294967040;
	ctx.r11.u64 = static_cast<uint64_t>(-256) - ctx.r3.u64;
	// clrlwi r3,r11,23
	ctx.r3.u64 = ctx.r11.u32 & 0x1FF;
	// blr 
	return;
loc_89932C98:
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// li r3,128
	ctx.r3.s64 = 128;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,384
	ctx.r3.s64 = 384;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89933428) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r5,r11,32560
	ctx.r5.s64 = ctx.r11.s64 + 32560;
	// addi r11,r10,-4592
	ctx.r11.s64 = ctx.r10.s64 + -4592;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r6,r5,12
	ctx.r6.s64 = ctx.r5.s64 + 12;
loc_89933448:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
loc_89933450:
	// lhz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bne cr6,0x89933478
	if (!ctx.cr6.eq) goto loc_89933478;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899334a8
	if (ctx.cr6.eq) goto loc_899334A8;
loc_89933478:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// ble cr6,0x89933450
	if (!ctx.cr6.gt) goto loc_89933450;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 + 24;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x89933448
	if (!ctx.cr6.gt) goto loc_89933448;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_899334A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899338A8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899338B0;
	__savegprlr_27(ctx, base);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,5184
	ctx.r11.s64 = ctx.r11.s64 + 5184;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r28,r10,r9
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lhz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89933984
	if (ctx.cr6.eq) goto loc_89933984;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// extsh r31,r3
	ctx.r31.s64 = ctx.r3.s16;
	// addi r3,r11,5160
	ctx.r3.s64 = ctx.r11.s64 + 5160;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r29,r9
	ctx.r29.s64 = ctx.r9.s8;
	// extsb r30,r8
	ctx.r30.s64 = ctx.r8.s8;
	// addi r5,r11,32560
	ctx.r5.s64 = ctx.r11.s64 + 32560;
loc_899338FC:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x89933960
	if (ctx.cr6.gt) goto loc_89933960;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lbzx r10,r31,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
loc_8993391C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x89933954
	if (ctx.cr6.gt) goto loc_89933954;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
loc_89933930:
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r27,r27,r5
	ctx.r27.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r5.u32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8993398c
	if (ctx.cr6.eq) goto loc_8993398C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x89933930
	if (!ctx.cr6.gt) goto loc_89933930;
loc_89933954:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8993391c
	if (!ctx.cr6.gt) goto loc_8993391C;
loc_89933960:
	// li r11,0
	ctx.r11.s64 = 0;
loc_89933964:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89933994
	if (ctx.cr6.eq) goto loc_89933994;
	// lhz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899338fc
	if (!ctx.cr6.eq) goto loc_899338FC;
loc_89933984:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_8993398C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x89933964
	goto loc_89933964;
loc_89933994:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89934178) {
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
	// addi r11,r11,11976
	ctx.r11.s64 = ctx.r11.s64 + 11976;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r31,r9,r8
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89933598
	ctx.lr = 0x899341A8;
	sub_89933598(ctx, base);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899341cc
	if (ctx.cr6.eq) goto loc_899341CC;
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
loc_899341CC:
	// lhz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899341ec
	if (ctx.cr6.eq) goto loc_899341EC;
loc_899341D8:
	// bl 0x89933df8
	ctx.lr = 0x899341DC;
	sub_89933DF8(ctx, base);
	// lhzu r3,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899341d8
	if (!ctx.cr6.eq) goto loc_899341D8;
loc_899341EC:
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

DEFINE_REX_FUNC(sub_89934A08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89934A10;
	__savegprlr_28(ctx, base);
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r28,6
	ctx.r28.s64 = 6;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// li r31,10023
	ctx.r31.s64 = 10023;
	// ori r3,r9,60652
	ctx.r3.u64 = ctx.r9.u64 | 60652;
loc_89934A40:
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r4,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r4.u16);
	// rlwinm r9,r5,2,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FFFC;
	// sth r3,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r3.u16);
	// rlwinm r7,r10,2,14,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// sth r31,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r31.u16);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r7,r9,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// sth r7,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r9,r6,27
	ctx.r9.u64 = ctx.r6.u32 & 0x1F;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89934aa0
	if (ctx.cr6.eq) goto loc_89934AA0;
	// addi r9,r9,39
	ctx.r9.s64 = ctx.r9.s64 + 39;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// ble cr6,0x89934aa0
	if (!ctx.cr6.gt) goto loc_89934AA0;
	// li r8,6144
	ctx.r8.s64 = 6144;
loc_89934AA0:
	// clrlwi r9,r7,27
	ctx.r9.u64 = ctx.r7.u32 & 0x1F;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89934ac0
	if (ctx.cr6.eq) goto loc_89934AC0;
	// addi r9,r9,39
	ctx.r9.s64 = ctx.r9.s64 + 39;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// ble cr6,0x89934ac0
	if (!ctx.cr6.gt) goto loc_89934AC0;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// ori r8,r9,1024
	ctx.r8.u64 = ctx.r9.u64 | 1024;
loc_89934AC0:
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r6,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r6.u16);
	// beq cr6,0x89934b28
	if (ctx.cr6.eq) goto loc_89934B28;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x89934b28
	if (!ctx.cr6.eq) goto loc_89934B28;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r8,216
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 216, ctx.xer);
	// ble cr6,0x89934b28
	if (!ctx.cr6.gt) goto loc_89934B28;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
loc_89934B28:
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// sth r30,26(r11)
	REX_STORE_U16(ctx.r11.u32 + 26, ctx.r30.u16);
	// sthu r30,18(r11)
	ea = 18 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r30.u16);
	ctx.r11.u32 = ea;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// blt cr6,0x89934a40
	if (ctx.cr6.lt) goto loc_89934A40;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89935700) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x89935708;
	__savegprlr_25(ctx, base);
	// rlwinm r10,r3,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0xFF;
	// rlwinm r9,r3,31,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0xFF;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// extsb r30,r9
	ctx.r30.s64 = ctx.r9.s8;
	// extsb r31,r8
	ctx.r31.s64 = ctx.r8.s8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r9,r31,r30
	ctx.r9.u64 = ctx.r31.u64 + ctx.r30.u64;
	// extsb r26,r10
	ctx.r26.s64 = ctx.r10.s8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// extsb r25,r9
	ctx.r25.s64 = ctx.r9.s8;
	// bne cr6,0x89935740
	if (!ctx.cr6.eq) goto loc_89935740;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// addi r6,r11,3484
	ctx.r6.s64 = ctx.r11.s64 + 3484;
loc_89935740:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x899357c0
	if (!ctx.cr6.gt) goto loc_899357C0;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r28,-16384
	ctx.r28.s64 = -1073741824;
loc_8993575C:
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r28,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// blt cr6,0x8993575c
	if (ctx.cr6.lt) goto loc_8993575C;
loc_899357C0:
	// extsb r7,r26
	ctx.r7.s64 = ctx.r26.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8993585c
	if (!ctx.cr6.gt) goto loc_8993585C;
	// extsb r5,r25
	ctx.r5.s64 = ctx.r25.s8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_899357D4:
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// xoris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 ^ 2147483648;
	// stw r6,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// xoris r9,r6,16384
	ctx.r9.u64 = ctx.r6.u64 ^ 1073741824;
	// stw r9,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// blt cr6,0x899357d4
	if (ctx.cr6.lt) goto loc_899357D4;
loc_8993585C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r3,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89936938) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,-31405(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -31405);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89936950
	if (!ctx.cr6.eq) goto loc_89936950;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_89936950:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r10,r10,5100
	ctx.r10.s64 = ctx.r10.s64 + 5100;
	// lbz r11,9527(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9527);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x899369b4
	if (!ctx.cr6.lt) goto loc_899369B4;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-21104
	ctx.r11.s64 = ctx.r11.s64 + -21104;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899369b4
	if (ctx.cr6.eq) goto loc_899369B4;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bgt 0x899369b8
	if (ctx.cr0.gt) goto loc_899369B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_899369B4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_899369B8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89937598) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899375A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r24,r3
	ctx.r24.s64 = ctx.r3.s16;
	// addi r30,r11,25128
	ctx.r30.s64 = ctx.r11.s64 + 25128;
	// mulli r31,r24,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(696));
	// addi r11,r30,624
	ctx.r11.s64 = ctx.r30.s64 + 624;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r30,652
	ctx.r11.s64 = ctx.r30.s64 + 652;
	// rlwinm r10,r8,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899375f4
	if (ctx.cr6.eq) goto loc_899375F4;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// subfc r7,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r5,31
	ctx.r9.u64 = ctx.r5.u32 & 0x1;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// b 0x899375f8
	goto loc_899375F8;
loc_899375F4:
	// stbx r23,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r23.u8);
loc_899375F8:
	// addi r22,r30,643
	ctx.r22.s64 = ctx.r30.s64 + 643;
	// addi r27,r30,644
	ctx.r27.s64 = ctx.r30.s64 + 644;
	// lbzx r9,r31,r22
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r22.u32);
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x89937618
	if (!ctx.cr6.lt) goto loc_89937618;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
loc_89937618:
	// addi r29,r30,645
	ctx.r29.s64 = ctx.r30.s64 + 645;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89937640
	if (ctx.cr6.eq) goto loc_89937640;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// oris r5,r6,4096
	ctx.r5.u64 = ctx.r6.u64 | 268435456;
	// stwx r5,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u32);
loc_89937640:
	// addi r25,r30,638
	ctx.r25.s64 = ctx.r30.s64 + 638;
	// rlwinm r11,r8,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbx r23,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r23.u8);
	// beq cr6,0x89937824
	if (ctx.cr6.eq) goto loc_89937824;
	// addi r11,r30,625
	ctx.r11.s64 = ctx.r30.s64 + 625;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r30,646
	ctx.r11.s64 = ctx.r30.s64 + 646;
	// rlwinm r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// add r26,r31,r11
	ctx.r26.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// beq cr6,0x899377f4
	if (ctx.cr6.eq) goto loc_899377F4;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x899377fc
	if (ctx.cr6.eq) goto loc_899377FC;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lwz r10,3504(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 3504);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89937704
	if (ctx.cr6.eq) goto loc_89937704;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbz r9,12267(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 12267);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x89937704
	if (!ctx.cr6.eq) goto loc_89937704;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// ble cr6,0x89937760
	if (!ctx.cr6.gt) goto loc_89937760;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r5,7008
	ctx.r10.s64 = ctx.r5.s64 + 7008;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// mulli r9,r8,30
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(30));
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// addi r5,r10,22
	ctx.r5.s64 = ctx.r10.s64 + 22;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r4,r4,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// bl 0x899362a0
	ctx.lr = 0x899376F8;
	sub_899362A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8995a5d8
	ctx.lr = 0x89937700;
	sub_8995A5D8(ctx, base);
	// b 0x89937804
	goto loc_89937804;
loc_89937704:
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// ble cr6,0x89937760
	if (!ctx.cr6.gt) goto loc_89937760;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r5,7008
	ctx.r10.s64 = ctx.r5.s64 + 7008;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// addi r6,r10,22
	ctx.r6.s64 = ctx.r10.s64 + 22;
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// mulli r11,r8,30
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(30));
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// bl 0x899362a0
	ctx.lr = 0x89937760;
	sub_899362A0(ctx, base);
loc_89937760:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899379a8
	ctx.lr = 0x89937768;
	sub_899379A8(ctx, base);
	// lbzx r6,r31,r25
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// addi r9,r30,640
	ctx.r9.s64 = ctx.r30.s64 + 640;
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r8,r30,641
	ctx.r8.s64 = ctx.r30.s64 + 641;
	// lbzx r5,r31,r22
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r22.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 | 32;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// stbx r23,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r23.u8);
	// stbx r4,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r4.u8);
	// bge cr6,0x899377ec
	if (!ctx.cr6.lt) goto loc_899377EC;
	// lbzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899377e4
	if (ctx.cr6.eq) goto loc_899377E4;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// stbx r11,r31,r22
	REX_STORE_U8(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// oris r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 268435456;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// bgt cr6,0x899377ec
	if (ctx.cr6.gt) goto loc_899377EC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8994c298
	ctx.lr = 0x899377CC;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899377ec
	if (ctx.cr6.eq) goto loc_899377EC;
	// li r3,37
	ctx.r3.s64 = 37;
	// bl 0x8994c368
	ctx.lr = 0x899377DC;
	sub_8994C368(ctx, base);
	// stbx r23,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r23.u8);
	// b 0x89937804
	goto loc_89937804;
loc_899377E4:
	// li r11,60
	ctx.r11.s64 = 60;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_899377EC:
	// stbx r23,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r23.u8);
	// b 0x89937804
	goto loc_89937804;
loc_899377F4:
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x899378ac
	if (!ctx.cr6.eq) goto loc_899378AC;
loc_899377FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8995a430
	ctx.lr = 0x89937804;
	sub_8995A430(ctx, base);
loc_89937804:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stb r23,0(r26)
	REX_STORE_U8(ctx.r26.u32 + 0, ctx.r23.u8);
	// addi r10,r30,647
	ctx.r10.s64 = ctx.r30.s64 + 647;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stbx r23,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r23.u8);
	// oris r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 1073741824;
	// stwx r8,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// b 0x89937948
	goto loc_89937948;
loc_89937824:
	// addi r29,r30,646
	ctx.r29.s64 = ctx.r30.s64 + 646;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993789c
	if (ctx.cr6.eq) goto loc_8993789C;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x89937888
	if (ctx.cr6.eq) goto loc_89937888;
	// bge cr6,0x89937948
	if (!ctx.cr6.lt) goto loc_89937948;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x89937888
	if (!ctx.cr6.eq) goto loc_89937888;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r9,7008
	ctx.r11.s64 = ctx.r9.s64 + 7008;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r7,r11,19
	ctx.r7.s64 = ctx.r11.s64 + 19;
	// rlwinm r6,r8,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// mulli r5,r6,30
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(30));
	// lbzx r29,r5,r7
	ctx.r29.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x899362a0
	ctx.lr = 0x89937880;
	sub_899362A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89936360
	ctx.lr = 0x89937888;
	sub_89936360(ctx, base);
loc_89937888:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x89937948
	goto loc_89937948;
loc_8993789C:
	// addi r11,r30,640
	ctx.r11.s64 = ctx.r30.s64 + 640;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899378fc
	if (ctx.cr6.eq) goto loc_899378FC;
loc_899378AC:
	// addi r11,r30,641
	ctx.r11.s64 = ctx.r30.s64 + 641;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x89937948
	if (!ctx.cr6.gt) goto loc_89937948;
	// stbx r23,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r23.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899379a8
	ctx.lr = 0x899378D4;
	sub_899379A8(ctx, base);
	// addi r10,r30,640
	ctx.r10.s64 = ctx.r30.s64 + 640;
	// lbzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// stbx r8,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r8.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89937948
	if (ctx.cr6.eq) goto loc_89937948;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x89937948
	goto loc_89937948;
loc_899378FC:
	// addi r10,r30,647
	ctx.r10.s64 = ctx.r30.s64 + 647;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x89937918
	if (ctx.cr6.eq) goto loc_89937918;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x89937948
	goto loc_89937948;
loc_89937918:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8995b7d0
	ctx.lr = 0x89937920;
	sub_8995B7D0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89937948
	if (ctx.cr6.eq) goto loc_89937948;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// oris r7,r8,16384
	ctx.r7.u64 = ctx.r8.u64 | 1073741824;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
loc_89937948:
	// addi r11,r30,625
	ctx.r11.s64 = ctx.r30.s64 + 625;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899379a0
	if (!ctx.cr6.eq) goto loc_899379A0;
	// addi r11,r30,626
	ctx.r11.s64 = ctx.r30.s64 + 626;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899379a0
	if (ctx.cr6.eq) goto loc_899379A0;
	// addi r11,r30,642
	ctx.r11.s64 = ctx.r30.s64 + 642;
	// lbzx r9,r31,r22
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r22.u32);
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x899379a0
	if (!ctx.cr6.gt) goto loc_899379A0;
	// lbzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// stbx r23,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r23.u8);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stbx r9,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r9.u8);
loc_899379A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993CF90) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x8993CF98;
	__savegprlr_24(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
	// mulli r11,r9,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// lis r24,-12800
	ctx.r24.s64 = -838860800;
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r24,r24,4
	ctx.r24.u64 = ctx.r24.u64 | 4;
	// lwzx r3,r11,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stwx r9,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r4,r10,24
	ctx.r4.s64 = ctx.r10.s64 + 24;
	// stwx r24,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r24.u32);
	// addi r31,r10,627
	ctx.r31.s64 = ctx.r10.s64 + 627;
	// lbz r7,586(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 586);
	// addi r30,r10,626
	ctx.r30.s64 = ctx.r10.s64 + 626;
	// addi r29,r10,625
	ctx.r29.s64 = ctx.r10.s64 + 625;
	// addi r28,r10,624
	ctx.r28.s64 = ctx.r10.s64 + 624;
	// stwx r9,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r27,r10,628
	ctx.r27.s64 = ctx.r10.s64 + 628;
	// addi r26,r10,630
	ctx.r26.s64 = ctx.r10.s64 + 630;
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r25,r10,629
	ctx.r25.s64 = ctx.r10.s64 + 629;
	// stbx r9,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u8);
	// oris r3,r3,62464
	ctx.r3.u64 = ctx.r3.u64 | 4093640704;
	// stbx r9,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u8);
	// lis r6,-48
	ctx.r6.s64 = -3145728;
	// stbx r9,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u8);
	// li r24,128
	ctx.r24.s64 = 128;
	// stwx r3,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u32);
	// stwx r6,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stbx r24,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r24.u8);
	// stbx r9,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r9.u8);
	// stbx r9,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r9.u8);
	// beq cr6,0x8993d064
	if (ctx.cr6.eq) goto loc_8993D064;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r6,16838
	ctx.r6.s64 = 1103495168;
	// addi r5,r10,636
	ctx.r5.s64 = ctx.r10.s64 + 636;
	// ori r4,r6,20077
	ctx.r4.u64 = ctx.r6.u64 | 20077;
	// addi r3,r10,637
	ctx.r3.s64 = ctx.r10.s64 + 637;
	// lwz r8,-9212(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -9212);
	// li r6,3
	ctx.r6.s64 = 3;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// stbx r6,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// addi r8,r8,12345
	ctx.r8.s64 = ctx.r8.s64 + 12345;
	// stw r8,-9212(r7)
	REX_STORE_U32(ctx.r7.u32 + -9212, ctx.r8.u32);
	// b 0x8993d074
	goto loc_8993D074;
loc_8993D064:
	// addi r8,r10,636
	ctx.r8.s64 = ctx.r10.s64 + 636;
	// addi r7,r10,637
	ctx.r7.s64 = ctx.r10.s64 + 637;
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
loc_8993D074:
	// addi r8,r10,647
	ctx.r8.s64 = ctx.r10.s64 + 647;
	// addi r7,r10,646
	ctx.r7.s64 = ctx.r10.s64 + 646;
	// addi r6,r10,649
	ctx.r6.s64 = ctx.r10.s64 + 649;
	// addi r5,r10,645
	ctx.r5.s64 = ctx.r10.s64 + 645;
	// addi r4,r10,644
	ctx.r4.s64 = ctx.r10.s64 + 644;
	// addi r3,r10,642
	ctx.r3.s64 = ctx.r10.s64 + 642;
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r8,r10,641
	ctx.r8.s64 = ctx.r10.s64 + 641;
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// addi r7,r10,640
	ctx.r7.s64 = ctx.r10.s64 + 640;
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r6,r10,653
	ctx.r6.s64 = ctx.r10.s64 + 653;
	// stbx r9,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// addi r5,r10,652
	ctx.r5.s64 = ctx.r10.s64 + 652;
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// addi r4,r10,651
	ctx.r4.s64 = ctx.r10.s64 + 651;
	// addi r3,r10,656
	ctx.r3.s64 = ctx.r10.s64 + 656;
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r8,r10,654
	ctx.r8.s64 = ctx.r10.s64 + 654;
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// addi r7,r10,661
	ctx.r7.s64 = ctx.r10.s64 + 661;
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r6,r10,662
	ctx.r6.s64 = ctx.r10.s64 + 662;
	// stbx r9,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// addi r5,r10,655
	ctx.r5.s64 = ctx.r10.s64 + 655;
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// addi r4,r10,676
	ctx.r4.s64 = ctx.r10.s64 + 676;
	// lis r3,128
	ctx.r3.s64 = 8388608;
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// li r10,240
	ctx.r10.s64 = 240;
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// ori r8,r3,32896
	ctx.r8.u64 = ctx.r3.u64 | 32896;
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// stwx r8,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993F660) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e8
	ctx.lr = 0x8993F668;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r20,-30274
	ctx.r20.s64 = -1984036864;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r17,-30232
	ctx.r17.s64 = -1981284352;
	// sth r18,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r18.u16);
	// sth r11,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// lis r16,-30214
	ctx.r16.s64 = -1980104704;
	// lbz r31,586(r20)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r20.u32 + 586);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8993f6d8
	if (ctx.cr6.eq) goto loc_8993F6D8;
	// sth r18,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r18.u16);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,3680(r16)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r16.u32 + 3680);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-26964(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + -26964);
	// addi r5,r11,4110
	ctx.r5.s64 = ctx.r11.s64 + 4110;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8993F6BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8993f6d4
	if (ctx.cr6.eq) goto loc_8993F6D4;
loc_8993F6C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
loc_8993F6D4:
	// lbz r31,586(r20)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r20.u32 + 586);
loc_8993F6D8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993f6f4
	if (ctx.cr6.eq) goto loc_8993F6F4;
	// bl 0x89935d50
	ctx.lr = 0x8993F6E8;
	sub_89935D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8993f6c8
	if (!ctx.cr6.eq) goto loc_8993F6C8;
	// lbz r31,586(r20)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r20.u32 + 586);
loc_8993F6F4:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,8419(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8419);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8993f6c8
	if (!ctx.cr6.eq) goto loc_8993F6C8;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8993f724
	if (ctx.cr6.eq) goto loc_8993F724;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbz r10,9655(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 9655);
	// stb r10,32018(r11)
	REX_STORE_U8(ctx.r11.u32 + 32018, ctx.r10.u8);
	// b 0x8993f728
	goto loc_8993F728;
loc_8993F724:
	// lbz r10,32018(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32018);
loc_8993F728:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// ble cr6,0x8993f73c
	if (!ctx.cr6.gt) goto loc_8993F73C;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stb r18,32018(r11)
	REX_STORE_U8(ctx.r11.u32 + 32018, ctx.r18.u8);
loc_8993F73C:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// addi r8,r10,19408
	ctx.r8.s64 = ctx.r10.s64 + 19408;
	// lis r21,-30247
	ctx.r21.s64 = -1982267392;
	// lbz r7,530(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 530);
	// li r10,600
	ctx.r10.s64 = 600;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// stw r18,3892(r28)
	REX_STORE_U32(ctx.r28.u32 + 3892, ctx.r18.u32);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// subfe r5,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,19364(r21)
	REX_STORE_U32(ctx.r21.u32 + 19364, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lbzx r19,r5,r8
	ctx.r19.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// bne cr6,0x8993f78c
	if (!ctx.cr6.eq) goto loc_8993F78C;
	// li r11,300
	ctx.r11.s64 = 300;
	// stw r11,19364(r21)
	REX_STORE_U32(ctx.r21.u32 + 19364, ctx.r11.u32);
	// bl 0x8993fc78
	ctx.lr = 0x8993F788;
	sub_8993FC78(ctx, base);
	// lbz r31,586(r20)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r20.u32 + 586);
loc_8993F78C:
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// li r9,14
	ctx.r9.s64 = 14;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stw r18,12000(r8)
	REX_STORE_U32(ctx.r8.u32 + 12000, ctx.r18.u32);
	// stw r18,-21584(r7)
	REX_STORE_U32(ctx.r7.u32 + -21584, ctx.r18.u32);
	// stb r9,9527(r6)
	REX_STORE_U8(ctx.r6.u32 + 9527, ctx.r9.u8);
	// bl 0x89915ec0
	ctx.lr = 0x8993F7B4;
	sub_89915EC0(ctx, base);
	// bl 0x89917740
	ctx.lr = 0x8993F7B8;
	sub_89917740(ctx, base);
	// bl 0x8992bf38
	ctx.lr = 0x8993F7BC;
	sub_8992BF38(ctx, base);
	// bl 0x8991acf0
	ctx.lr = 0x8993F7C0;
	sub_8991ACF0(ctx, base);
	// bl 0x8991a4a8
	ctx.lr = 0x8993F7C4;
	sub_8991A4A8(ctx, base);
	// bl 0x899193a8
	ctx.lr = 0x8993F7C8;
	sub_899193A8(ctx, base);
	// bl 0x8991acf0
	ctx.lr = 0x8993F7CC;
	sub_8991ACF0(ctx, base);
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r5,9448
	ctx.r11.s64 = ctx.r5.s64 + 9448;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8993F7E4:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8993f7e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8993F7E4;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r3,r11,-21104
	ctx.r3.s64 = ctx.r11.s64 + -21104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x899dcca0
	ctx.lr = 0x8993F800;
	sub_899DCCA0(ctx, base);
	// bl 0x89918ad0
	ctx.lr = 0x8993F804;
	sub_89918AD0(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbz r9,12271(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 12271);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8993f844
	if (ctx.cr6.eq) goto loc_8993F844;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993f830
	if (ctx.cr6.eq) goto loc_8993F830;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,7934(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7934);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8993f844
	if (ctx.cr6.eq) goto loc_8993F844;
loc_8993F830:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r10,r11,-2216
	ctx.r10.s64 = ctx.r11.s64 + -2216;
	// lwz r4,124(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 124);
	// lwz r3,120(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 120);
	// bl 0x899d94e8
	ctx.lr = 0x8993F844;
	sub_899D94E8(ctx, base);
loc_8993F844:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r24,84(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r23,r11,12640
	ctx.r23.s64 = ctx.r11.s64 + 12640;
	// addi r22,r10,7640
	ctx.r22.s64 = ctx.r10.s64 + 7640;
	// addi r25,r9,7896
	ctx.r25.s64 = ctx.r9.s64 + 7896;
loc_8993F860:
	// bl 0x899301c0
	ctx.lr = 0x8993F864;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x8993F868;
	sub_899309D8(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x8993F86C;
	sub_899306A8(ctx, base);
	// bl 0x8991dbc0
	ctx.lr = 0x8993F870;
	sub_8991DBC0(ctx, base);
	// bl 0x89917aa0
	ctx.lr = 0x8993F874;
	sub_89917AA0(ctx, base);
	// bl 0x8992c6c8
	ctx.lr = 0x8993F878;
	sub_8992C6C8(ctx, base);
	// bl 0x89916028
	ctx.lr = 0x8993F87C;
	sub_89916028(ctx, base);
	// bl 0x89917da8
	ctx.lr = 0x8993F880;
	sub_89917DA8(ctx, base);
	// bl 0x8992de98
	ctx.lr = 0x8993F884;
	sub_8992DE98(ctx, base);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_8993F88C:
	// rlwinm r31,r29,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993f8a4
	if (ctx.cr6.eq) goto loc_8993F8A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89917e48
	ctx.lr = 0x8993F8A4;
	sub_89917E48(ctx, base);
loc_8993F8A4:
	// lhzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993f8b8
	if (ctx.cr6.eq) goto loc_8993F8B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8992d1c8
	ctx.lr = 0x8993F8B8;
	sub_8992D1C8(ctx, base);
loc_8993F8B8:
	// lhzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993f8cc
	if (ctx.cr6.eq) goto loc_8993F8CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8992cb10
	ctx.lr = 0x8993F8CC;
	sub_8992CB10(ctx, base);
loc_8993F8CC:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// blt cr6,0x8993f88c
	if (ctx.cr6.lt) goto loc_8993F88C;
	// lwz r11,3892(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 3892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993f8fc
	if (ctx.cr6.eq) goto loc_8993F8FC;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r3,3892(r28)
	REX_STORE_U32(ctx.r28.u32 + 3892, ctx.r3.u32);
	// bl 0x899407f0
	ctx.lr = 0x8993F8FC;
	sub_899407F0(ctx, base);
loc_8993F8FC:
	// lbz r11,586(r20)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 586);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8993f914
	if (!ctx.cr6.eq) goto loc_8993F914;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899401f8
	ctx.lr = 0x8993F910;
	sub_899401F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8993F914:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8993f5b8
	ctx.lr = 0x8993F91C;
	sub_8993F5B8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x899319c8
	ctx.lr = 0x8993F924;
	sub_899319C8(ctx, base);
	// lwz r11,3892(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 3892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993f94c
	if (ctx.cr6.eq) goto loc_8993F94C;
	// bl 0x89929e68
	ctx.lr = 0x8993F934;
	sub_89929E68(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993f860
	if (ctx.cr6.eq) goto loc_8993F860;
	// lbz r11,586(r20)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 586);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993f860
	if (ctx.cr6.eq) goto loc_8993F860;
loc_8993F94C:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r9,r11,19548
	ctx.r9.s64 = ctx.r11.s64 + 19548;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// clrlwi r7,r27,24
	ctx.r7.u64 = ctx.r27.u32 & 0xFF;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lbz r3,6046(r8)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + 6046);
	// addi r4,r10,-31400
	ctx.r4.s64 = ctx.r10.s64 + -31400;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lis r8,32639
	ctx.r8.s64 = 2139029504;
	// and r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 & ctx.r7.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// ori r6,r8,32768
	ctx.r6.u64 = ctx.r8.u64 | 32768;
	// stb r10,9542(r5)
	REX_STORE_U8(ctx.r5.u32 + 9542, ctx.r10.u8);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r7,r4,560
	ctx.r7.s64 = ctx.r4.s64 + 560;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993f9b4
	if (ctx.cr6.eq) goto loc_8993F9B4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
loc_8993F99C:
	// lbzu r5,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// subf r3,r6,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r6.u64;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8993f99c
	if (!ctx.cr6.eq) goto loc_8993F99C;
loc_8993F9B4:
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r8,12280
	ctx.r7.s64 = ctx.r8.s64 + 12280;
	// addi r8,r4,432
	ctx.r8.s64 = ctx.r4.s64 + 432;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,4(r7)
	REX_STORE_U8(ctx.r7.u32 + 4, ctx.r10.u8);
	// beq cr6,0x8993f9ec
	if (ctx.cr6.eq) goto loc_8993F9EC;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
loc_8993F9D4:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r5,r6,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8993f9d4
	if (!ctx.cr6.eq) goto loc_8993F9D4;
loc_8993F9EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stb r11,3(r7)
	REX_STORE_U8(ctx.r7.u32 + 3, ctx.r11.u8);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r27,r11,7384
	ctx.r27.s64 = ctx.r11.s64 + 7384;
	// addi r26,r10,27280
	ctx.r26.s64 = ctx.r10.s64 + 27280;
	// addi r28,r9,25128
	ctx.r28.s64 = ctx.r9.s64 + 25128;
loc_8993FA0C:
	// bl 0x899301c0
	ctx.lr = 0x8993FA10;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x8993FA14;
	sub_899309D8(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x8993FA18;
	sub_899306A8(ctx, base);
	// bl 0x8991dbc0
	ctx.lr = 0x8993FA1C;
	sub_8991DBC0(ctx, base);
	// bl 0x89917aa0
	ctx.lr = 0x8993FA20;
	sub_89917AA0(ctx, base);
	// bl 0x8992c6c8
	ctx.lr = 0x8993FA24;
	sub_8992C6C8(ctx, base);
	// bl 0x89916028
	ctx.lr = 0x8993FA28;
	sub_89916028(ctx, base);
	// bl 0x89917da8
	ctx.lr = 0x8993FA2C;
	sub_89917DA8(ctx, base);
	// bl 0x8992de98
	ctx.lr = 0x8993FA30;
	sub_8992DE98(ctx, base);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_8993FA38:
	// rlwinm r31,r29,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993fa50
	if (ctx.cr6.eq) goto loc_8993FA50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89917e48
	ctx.lr = 0x8993FA50;
	sub_89917E48(ctx, base);
loc_8993FA50:
	// lhzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993fa64
	if (ctx.cr6.eq) goto loc_8993FA64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8992d1c8
	ctx.lr = 0x8993FA64;
	sub_8992D1C8(ctx, base);
loc_8993FA64:
	// lhzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993fa78
	if (ctx.cr6.eq) goto loc_8993FA78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8992cb10
	ctx.lr = 0x8993FA78;
	sub_8992CB10(ctx, base);
loc_8993FA78:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// blt cr6,0x8993fa38
	if (ctx.cr6.lt) goto loc_8993FA38;
	// lwz r11,19364(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 19364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993faa0
	if (ctx.cr6.eq) goto loc_8993FAA0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,19364(r21)
	REX_STORE_U32(ctx.r21.u32 + 19364, ctx.r11.u32);
loc_8993FAA0:
	// bl 0x89940cd0
	ctx.lr = 0x8993FAA4;
	sub_89940CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8993f5b8
	ctx.lr = 0x8993FAB0;
	sub_8993F5B8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x899319c8
	ctx.lr = 0x8993FAB8;
	sub_899319C8(ctx, base);
	// lbz r3,586(r20)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r20.u32 + 586);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8993fb18
	if (!ctx.cr6.eq) goto loc_8993FB18;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8993fb18
	if (!ctx.cr6.eq) goto loc_8993FB18;
	// lbz r11,658(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 658);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993faf4
	if (ctx.cr6.eq) goto loc_8993FAF4;
	// lbz r11,128(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 128);
	// clrlwi r10,r19,24
	ctx.r10.u64 = ctx.r19.u32 & 0xFF;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8993fb44
	if (!ctx.cr6.eq) goto loc_8993FB44;
loc_8993FAF4:
	// lbz r11,1354(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 1354);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993fb18
	if (ctx.cr6.eq) goto loc_8993FB18;
	// lbz r11,128(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 128);
	// clrlwi r10,r19,24
	ctx.r10.u64 = ctx.r19.u32 & 0xFF;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8993fb44
	if (!ctx.cr6.eq) goto loc_8993FB44;
loc_8993FB18:
	// lwz r11,19364(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 19364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993fb38
	if (ctx.cr6.eq) goto loc_8993FB38;
	// bl 0x89929e68
	ctx.lr = 0x8993FB28;
	sub_89929E68(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993fa0c
	if (ctx.cr6.eq) goto loc_8993FA0C;
	// lbz r3,586(r20)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r20.u32 + 586);
loc_8993FB38:
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8993fa0c
	if (!ctx.cr6.eq) goto loc_8993FA0C;
loc_8993FB44:
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r11,12275(r10)
	REX_STORE_U8(ctx.r10.u32 + 12275, ctx.r11.u8);
	// bne cr6,0x8993fb8c
	if (!ctx.cr6.eq) goto loc_8993FB8C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,3680(r16)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r16.u32 + 3680);
	// lwz r11,-26964(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + -26964);
	// li r6,2
	ctx.r6.s64 = 2;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4104
	ctx.r4.s64 = ctx.r11.s64 + 4104;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8993FB88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r3,586(r20)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r20.u32 + 586);
loc_8993FB8C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89945140) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x89945148;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
	// mulli r31,r7,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(696));
	// addi r27,r10,8
	ctx.r27.s64 = ctx.r10.s64 + 8;
	// addi r26,r10,588
	ctx.r26.s64 = ctx.r10.s64 + 588;
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r9,r31,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r6,r4,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r5,r3,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,4(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899452a0
	if (ctx.cr6.eq) goto loc_899452A0;
	// rlwinm r30,r6,0,0,1
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC0000000;
	// mulli r29,r7,174
	ctx.r29.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(174));
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// lis r24,-16384
	ctx.r24.s64 = -1073741824;
	// lis r25,16384
	ctx.r25.s64 = 1073741824;
loc_899451CC:
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// clrlwi r5,r11,4
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// add r3,r4,r29
	ctx.r3.u64 = ctx.r4.u64 + ctx.r29.u64;
	// addi r6,r10,180
	ctx.r6.s64 = ctx.r10.s64 + 180;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,248
	ctx.r3.s64 = ctx.r10.s64 + 248;
	// addi r7,r10,44
	ctx.r7.s64 = ctx.r10.s64 + 44;
	// addi r8,r10,112
	ctx.r8.s64 = ctx.r10.s64 + 112;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// stwx r5,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u32);
	// lwzu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwx r5,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwzu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwx r5,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwzu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stwx r5,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// beq cr6,0x89945240
	if (ctx.cr6.eq) goto loc_89945240;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x89945234
	if (ctx.cr6.eq) goto loc_89945234;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x8994524c
	if (!ctx.cr6.eq) goto loc_8994524C;
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// stwx r5,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// b 0x8994524c
	goto loc_8994524C;
loc_89945234:
	// lwzx r23,r11,r8
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// neg r23,r23
	ctx.r23.s64 = static_cast<int64_t>(-ctx.r23.u64);
	// stwx r23,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r23.u32);
loc_89945240:
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// stwx r5,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
loc_8994524C:
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r23,r10,316
	ctx.r23.s64 = ctx.r10.s64 + 316;
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r22,r10,384
	ctx.r22.s64 = ctx.r10.s64 + 384;
	// lwzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addi r21,r10,520
	ctx.r21.s64 = ctx.r10.s64 + 520;
	// lwzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r3,r10,452
	ctx.r3.s64 = ctx.r10.s64 + 452;
	// add r19,r6,r5
	ctx.r19.u64 = ctx.r6.u64 + ctx.r5.u64;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subf r20,r8,r7
	ctx.r20.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stwx r19,r11,r23
	REX_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r19.u32);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r20,r11,r22
	REX_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r20.u32);
	// stwx r6,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// stwx r5,r11,r21
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r5.u32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899451cc
	if (!ctx.cr6.eq) goto loc_899451CC;
loc_899452A0:
	// lwzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r7,r10,41
	ctx.r7.s64 = ctx.r10.s64 + 41;
	// lwzx r9,r31,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r4,r10,40
	ctx.r4.s64 = ctx.r10.s64 + 40;
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r5,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u8);
	// stbx r8,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u8);
	// lwz r31,8(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899452e8
	if (ctx.cr6.eq) goto loc_899452E8;
loc_899452D4:
	// bl 0x89933df8
	ctx.lr = 0x899452D8;
	sub_89933DF8(ctx, base);
	// lhzu r3,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899452d4
	if (!ctx.cr6.eq) goto loc_899452D4;
loc_899452E8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899479C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899479D0;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-30295
	ctx.r30.s64 = -1985413120;
	// lis r28,-30295
	ctx.r28.s64 = -1985413120;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lis r26,-30295
	ctx.r26.s64 = -1985413120;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lis r21,-30295
	ctx.r21.s64 = -1985413120;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r3,-30295
	ctx.r3.s64 = -1985413120;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r9,r28,22472
	ctx.r9.s64 = ctx.r28.s64 + 22472;
	// addi r10,r30,-4688
	ctx.r10.s64 = ctx.r30.s64 + -4688;
	// addi r6,r26,22332
	ctx.r6.s64 = ctx.r26.s64 + 22332;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r4,r21,22080
	ctx.r4.s64 = ctx.r21.s64 + 22080;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r3,21424
	ctx.r3.s64 = ctx.r3.s64 + 21424;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// lis r27,-30295
	ctx.r27.s64 = -1985413120;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lbz r21,83(r1)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r23,-30320
	ctx.r23.s64 = -1987051520;
	// lis r29,-30295
	ctx.r29.s64 = -1985413120;
	// lis r24,-30295
	ctx.r24.s64 = -1985413120;
	// lis r20,-30295
	ctx.r20.s64 = -1985413120;
	// lis r19,-30270
	ctx.r19.s64 = -1983774720;
	// lis r28,16576
	ctx.r28.s64 = 1086324736;
	// lis r17,32639
	ctx.r17.s64 = 2139029504;
	// lis r25,-30295
	ctx.r25.s64 = -1985413120;
	// lis r22,-30295
	ctx.r22.s64 = -1985413120;
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lis r4,-30295
	ctx.r4.s64 = -1985413120;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// addi r14,r27,22364
	ctx.r14.s64 = ctx.r27.s64 + 22364;
	// addi r5,r5,21328
	ctx.r5.s64 = ctx.r5.s64 + 21328;
	// addi r7,r7,21940
	ctx.r7.s64 = ctx.r7.s64 + 21940;
	// addi r3,r8,21892
	ctx.r3.s64 = ctx.r8.s64 + 21892;
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r11,r11,21988
	ctx.r11.s64 = ctx.r11.s64 + 21988;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r27,r23,10116
	ctx.r27.s64 = ctx.r23.s64 + 10116;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r15,r29,22524
	ctx.r15.s64 = ctx.r29.s64 + 22524;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r26,r24,20376
	ctx.r26.s64 = ctx.r24.s64 + 20376;
	// addi r23,r20,22068
	ctx.r23.s64 = ctx.r20.s64 + 22068;
	// addi r30,r19,12280
	ctx.r30.s64 = ctx.r19.s64 + 12280;
	// ori r16,r28,16384
	ctx.r16.u64 = ctx.r28.u64 | 16384;
	// li r18,1
	ctx.r18.s64 = 1;
	// ori r17,r17,32768
	ctx.r17.u64 = ctx.r17.u64 | 32768;
	// addi r25,r25,22232
	ctx.r25.s64 = ctx.r25.s64 + 22232;
	// addi r22,r22,22144
	ctx.r22.s64 = ctx.r22.s64 + 22144;
	// addi r29,r31,-31400
	ctx.r29.s64 = ctx.r31.s64 + -31400;
	// addi r19,r4,21844
	ctx.r19.s64 = ctx.r4.s64 + 21844;
	// addi r28,r6,21404
	ctx.r28.s64 = ctx.r6.s64 + 21404;
	// addi r20,r9,20432
	ctx.r20.s64 = ctx.r9.s64 + 20432;
	// addi r24,r10,-21388
	ctx.r24.s64 = ctx.r10.s64 + -21388;
loc_89947AD4:
	// bl 0x899301c0
	ctx.lr = 0x89947AD8;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x89947ADC;
	sub_899309D8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89930930
	ctx.lr = 0x89947AE4;
	sub_89930930(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x89947AE8;
	sub_899306A8(ctx, base);
	// lis r4,-32640
	ctx.r4.s64 = -2139095040;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x89931dd8
	ctx.lr = 0x89947AF8;
	sub_89931DD8(ctx, base);
	// lbz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89947b0c
	if (!ctx.cr6.eq) goto loc_89947B0C;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
loc_89947B0C:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r8,1(r24)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r7,-1
	ctx.r7.s64 = -1;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lbz r10,4947(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4947);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// subfc r11,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subfze r11,r7
	temp.u8 = ~ctx.r7.u32 + ctx.xer.ca < ~ctx.r7.u32;
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947b48
	if (ctx.cr6.eq) goto loc_89947B48;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
loc_89947B48:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x89947b5c
	if (!ctx.cr6.eq) goto loc_89947B5C;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
loc_89947B5C:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x89947b70
	if (!ctx.cr6.eq) goto loc_89947B70;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
loc_89947B70:
	// lbz r4,256(r20)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r20.u32 + 256);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// extsb r5,r4
	ctx.r5.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947b9c
	if (ctx.cr6.eq) goto loc_89947B9C;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsb r9,r21
	ctx.r9.s64 = ctx.r21.s8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r21,r7,r9
	ctx.r21.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
loc_89947B9C:
	// rlwinm r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947bc0
	if (ctx.cr6.eq) goto loc_89947BC0;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// extsb r9,r21
	ctx.r9.s64 = ctx.r21.s8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r21,r7,r9
	ctx.r21.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
loc_89947BC0:
	// extsb r31,r21
	ctx.r31.s64 = ctx.r21.s8;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r29,8
	ctx.r8.s64 = ctx.r29.s64 + 8;
	// lbzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x89947c08
	if (ctx.cr6.eq) goto loc_89947C08;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89947BF0:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + ctx.r16.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89947bf0
	if (!ctx.cr6.eq) goto loc_89947BF0;
loc_89947C08:
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r18,r7,r30
	REX_STORE_U8(ctx.r7.u32 + ctx.r30.u32, ctx.r18.u8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r8,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r19.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x89947c64
	if (ctx.cr6.eq) goto loc_89947C64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x89947c58
	if (!ctx.cr6.eq) goto loc_89947C58;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x89947c60
	goto loc_89947C60;
loc_89947C58:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_89947C60:
	// lbz r4,256(r20)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r20.u32 + 256);
loc_89947C64:
	// rlwinm r10,r4,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89947c9c
	if (ctx.cr6.eq) goto loc_89947C9C;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x89947c94
	if (!ctx.cr6.eq) goto loc_89947C94;
	// lbzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x89947c9c
	goto loc_89947C9C;
loc_89947C94:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_89947C9C:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,1(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lbz r5,4947(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4947);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r7,r5,-2
	ctx.r7.s64 = ctx.r5.s64 + -2;
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// and r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89947cd4
	if (ctx.cr6.eq) goto loc_89947CD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,1(r24)
	REX_STORE_U8(ctx.r24.u32 + 1, ctx.r11.u8);
loc_89947CD4:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// lbz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// rlwinm r6,r8,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// beq cr6,0x89947d18
	if (ctx.cr6.eq) goto loc_89947D18;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89947D00:
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r4,r17,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r17.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwu r4,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89947d00
	if (!ctx.cr6.eq) goto loc_89947D00;
loc_89947D18:
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// stbx r18,r8,r30
	REX_STORE_U8(ctx.r8.u32 + ctx.r30.u32, ctx.r18.u8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r29,56
	ctx.r11.s64 = ctx.r29.s64 + 56;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947d5c
	if (ctx.cr6.eq) goto loc_89947D5C;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89947D44:
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r6,r11,r16
	ctx.r6.u64 = ctx.r11.u64 + ctx.r16.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89947d44
	if (!ctx.cr6.eq) goto loc_89947D44;
loc_89947D5C:
	// stbx r18,r8,r30
	REX_STORE_U8(ctx.r8.u32 + ctx.r30.u32, ctx.r18.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,1(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 1);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x89949198
	ctx.lr = 0x89947D70;
	sub_89949198(ctx, base);
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x89949198
	ctx.lr = 0x89947D80;
	sub_89949198(ctx, base);
	// bl 0x89949388
	ctx.lr = 0x89947D84;
	sub_89949388(ctx, base);
	// lbz r11,9(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 9);
	// lbz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// addi r8,r29,12
	ctx.r8.s64 = ctx.r29.s64 + 12;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x89947dc8
	if (ctx.cr6.eq) goto loc_89947DC8;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_89947DB0:
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r17,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r17.u64;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// stwu r5,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89947db0
	if (!ctx.cr6.eq) goto loc_89947DB0;
loc_89947DC8:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// stbx r18,r7,r30
	REX_STORE_U8(ctx.r7.u32 + ctx.r30.u32, ctx.r18.u8);
	// lbz r11,6055(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6055);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// addi r11,r29,68
	ctx.r11.s64 = ctx.r29.s64 + 68;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947e10
	if (ctx.cr6.eq) goto loc_89947E10;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89947DF8:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r6,r11,r16
	ctx.r6.u64 = ctx.r11.u64 + ctx.r16.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89947df8
	if (!ctx.cr6.eq) goto loc_89947DF8;
loc_89947E10:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,10(r28)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 10);
	// stbx r18,r7,r30
	REX_STORE_U8(ctx.r7.u32 + ctx.r30.u32, ctx.r18.u8);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lbz r11,7934(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7934);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x10;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89947e64
	if (ctx.cr6.eq) goto loc_89947E64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r7,r29,68
	ctx.r7.s64 = ctx.r29.s64 + 68;
	// rlwinm r6,r8,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_89947E54:
	// stwx r10,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89947e54
	if (!ctx.cr6.eq) goto loc_89947E54;
loc_89947E64:
	// lbz r11,11(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 11);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// addi r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 + 12;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r7,r8,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// stbx r18,r6,r30
	REX_STORE_U8(ctx.r6.u32 + ctx.r30.u32, ctx.r18.u8);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947eb0
	if (ctx.cr6.eq) goto loc_89947EB0;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89947E98:
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r17,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r17.u64;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89947e98
	if (!ctx.cr6.eq) goto loc_89947E98;
loc_89947EB0:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stbx r18,r8,r30
	REX_STORE_U8(ctx.r8.u32 + ctx.r30.u32, ctx.r18.u8);
	// lbz r11,539(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 539);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r11,r29,68
	ctx.r11.s64 = ctx.r29.s64 + 68;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947efc
	if (ctx.cr6.eq) goto loc_89947EFC;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89947EE4:
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
	// bne cr6,0x89947ee4
	if (!ctx.cr6.eq) goto loc_89947EE4;
loc_89947EFC:
	// lbz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 12);
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// lbz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stbx r18,r8,r30
	REX_STORE_U8(ctx.r8.u32 + ctx.r30.u32, ctx.r18.u8);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947f44
	if (ctx.cr6.eq) goto loc_89947F44;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
loc_89947F2C:
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r17,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r17.u64;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89947f2c
	if (!ctx.cr6.eq) goto loc_89947F2C;
loc_89947F44:
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// stbx r18,r9,r30
	REX_STORE_U8(ctx.r9.u32 + ctx.r30.u32, ctx.r18.u8);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,-25514(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -25514);
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r11,r29,68
	ctx.r11.s64 = ctx.r29.s64 + 68;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89947f90
	if (ctx.cr6.eq) goto loc_89947F90;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_89947F78:
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89947f78
	if (!ctx.cr6.eq) goto loc_89947F78;
loc_89947F90:
	// stbx r18,r9,r30
	REX_STORE_U8(ctx.r9.u32 + ctx.r30.u32, ctx.r18.u8);
	// lbz r3,13(r28)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + 13);
	// bl 0x899490e0
	ctx.lr = 0x89947F9C;
	sub_899490E0(ctx, base);
	// lbz r3,14(r28)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + 14);
	// bl 0x89949048
	ctx.lr = 0x89947FA4;
	sub_89949048(ctx, base);
	// lbz r7,15(r28)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r28.u32 + 15);
	// lbz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// addi r8,r29,12
	ctx.r8.s64 = ctx.r29.s64 + 12;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r6,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x89947fe8
	if (ctx.cr6.eq) goto loc_89947FE8;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89947FD0:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r17,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r17.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89947fd0
	if (!ctx.cr6.eq) goto loc_89947FD0;
loc_89947FE8:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// stbx r18,r6,r30
	REX_STORE_U8(ctx.r6.u32 + ctx.r30.u32, ctx.r18.u8);
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// lbz r11,6046(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6046);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x10;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89948038
	if (ctx.cr6.eq) goto loc_89948038;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r7,r29,68
	ctx.r7.s64 = ctx.r29.s64 + 68;
	// rlwinm r6,r8,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_89948028:
	// stwx r10,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89948028
	if (!ctx.cr6.eq) goto loc_89948028;
loc_89948038:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// stbx r18,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r18.u8);
	// beq cr6,0x89948054
	if (ctx.cr6.eq) goto loc_89948054;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// b 0x89948064
	goto loc_89948064;
loc_89948054:
	// lbz r3,82(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x899497f0
	ctx.lr = 0x8994805C;
	sub_899497F0(ctx, base);
	// stb r3,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r3.u8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_89948064:
	// cmpwi cr6,r31,17
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 17, ctx.xer);
	// beq cr6,0x89948074
	if (ctx.cr6.eq) goto loc_89948074;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x89948084
	goto loc_89948084;
loc_89948074:
	// lbz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x89949c40
	ctx.lr = 0x8994807C;
	sub_89949C40(ctx, base);
	// stb r3,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_89948084:
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x899480a0
	if (!ctx.cr6.lt) goto loc_899480A0;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// extsb r21,r10
	ctx.r21.s64 = ctx.r10.s8;
loc_899480A0:
	// extsb r31,r21
	ctx.r31.s64 = ctx.r21.s8;
	// cmpwi cr6,r31,18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 18, ctx.xer);
	// beq cr6,0x899480b4
	if (ctx.cr6.eq) goto loc_899480B4;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// b 0x899480c0
	goto loc_899480C0;
loc_899480B4:
	// lbz r3,81(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x89949f10
	ctx.lr = 0x899480BC;
	sub_89949F10(ctx, base);
	// stb r3,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
loc_899480C0:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89930720
	ctx.lr = 0x899480CC;
	sub_89930720(ctx, base);
	// bl 0x899319c8
	ctx.lr = 0x899480D0;
	sub_899319C8(ctx, base);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// addi r11,r31,-18
	ctx.r11.s64 = ctx.r31.s64 + -18;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x89947ad4
	if (!ctx.cr6.eq) goto loc_89947AD4;
	// lbz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89948124
	if (!ctx.cr6.eq) goto loc_89948124;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r11,4947(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4947);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8994813c
	if (!ctx.cr6.eq) goto loc_8994813C;
	// lbz r11,1(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8994813c
	if (ctx.cr6.eq) goto loc_8994813C;
loc_89948124:
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stb r18,-31405(r9)
	REX_STORE_U8(ctx.r9.u32 + -31405, ctx.r18.u8);
	// stb r18,12271(r8)
	REX_STORE_U8(ctx.r8.u32 + 12271, ctx.r18.u8);
loc_8994813C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8994A4F0) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x8994A4F8;
	__savegprlr_17(ctx, base);
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// addi r10,r11,3800
	ctx.r10.s64 = ctx.r11.s64 + 3800;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r9,12280
	ctx.r11.s64 = ctx.r9.s64 + 12280;
loc_8994A50C:
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_8994A51C:
	// mulli r8,r6,13
	ctx.r8.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(13));
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r4,r10,25
	ctx.r4.s64 = ctx.r10.s64 + 25;
	// rlwinm r3,r8,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r31,r10,26
	ctx.r31.s64 = ctx.r10.s64 + 26;
	// add r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r26,r10,16
	ctx.r26.s64 = ctx.r10.s64 + 16;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// lbzx r4,r3,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// lbzx r31,r3,r31
	ctx.r31.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// addi r28,r10,12
	ctx.r28.s64 = ctx.r10.s64 + 12;
	// rotlwi r4,r4,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lwzx r27,r3,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 | ctx.r31.u64;
	// lwzx r30,r3,r30
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// addi r31,r10,24
	ctx.r31.s64 = ctx.r10.s64 + 24;
	// lwzx r29,r3,r29
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r28,r3,r28
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// rlwinm r7,r4,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r4,r3,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 | ctx.r30.u64;
	// lbzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// addi r31,r11,96
	ctx.r31.s64 = ctx.r11.s64 + 96;
	// rlwinm r19,r27,8,24,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r26,r11,97
	ctx.r26.s64 = ctx.r11.s64 + 97;
	// addi r25,r11,98
	ctx.r25.s64 = ctx.r11.s64 + 98;
	// addi r24,r11,99
	ctx.r24.s64 = ctx.r11.s64 + 99;
	// stbx r19,r8,r31
	REX_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r19.u8);
	// addi r23,r11,100
	ctx.r23.s64 = ctx.r11.s64 + 100;
	// addi r22,r11,101
	ctx.r22.s64 = ctx.r11.s64 + 101;
	// addi r21,r11,102
	ctx.r21.s64 = ctx.r11.s64 + 102;
	// addi r30,r11,103
	ctx.r30.s64 = ctx.r11.s64 + 103;
	// addi r20,r11,104
	ctx.r20.s64 = ctx.r11.s64 + 104;
	// rlwinm r18,r27,16,24,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFF;
	// rlwinm r17,r27,24,24,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFF;
	// clrlwi r31,r27,24
	ctx.r31.u64 = ctx.r27.u32 & 0xFF;
	// stbx r18,r8,r26
	REX_STORE_U8(ctx.r8.u32 + ctx.r26.u32, ctx.r18.u8);
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// stbx r17,r8,r25
	REX_STORE_U8(ctx.r8.u32 + ctx.r25.u32, ctx.r17.u8);
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// stbx r31,r8,r24
	REX_STORE_U8(ctx.r8.u32 + ctx.r24.u32, ctx.r31.u8);
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stbx r29,r8,r23
	REX_STORE_U8(ctx.r8.u32 + ctx.r23.u32, ctx.r29.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stbx r28,r8,r22
	REX_STORE_U8(ctx.r8.u32 + ctx.r22.u32, ctx.r28.u8);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stbx r4,r8,r21
	REX_STORE_U8(ctx.r8.u32 + ctx.r21.u32, ctx.r4.u8);
	// stbx r7,r8,r30
	REX_STORE_U8(ctx.r8.u32 + ctx.r30.u32, ctx.r7.u8);
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// stbx r3,r8,r20
	REX_STORE_U8(ctx.r8.u32 + ctx.r20.u32, ctx.r3.u8);
	// blt cr6,0x8994a51c
	if (ctx.cr6.lt) goto loc_8994A51C;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8994a50c
	if (ctx.cr6.lt) goto loc_8994A50C;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// addi r8,r10,580
	ctx.r8.s64 = ctx.r10.s64 + 580;
	// lbz r7,580(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 580);
	// lbz r10,3(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// lbz r5,2(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// rotlwi r6,r10,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lbz r4,1(r8)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stb r7,496(r11)
	REX_STORE_U8(ctx.r11.u32 + 496, ctx.r7.u8);
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8994C298) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,3508(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994c2d4
	if (ctx.cr6.eq) goto loc_8994C2D4;
loc_8994C2BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8994C2D4:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r11,3516(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994c2bc
	if (!ctx.cr6.eq) goto loc_8994C2BC;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r10,586(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8994c2bc
	if (!ctx.cr6.eq) goto loc_8994C2BC;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r11,3520(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994c2bc
	if (!ctx.cr6.eq) goto loc_8994C2BC;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2049
	ctx.r4.s64 = 2049;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x899d9058
	ctx.lr = 0x8994C318;
	sub_899D9058(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8994c350
	if (ctx.cr6.lt) goto loc_8994C350;
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// mulli r9,r11,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// addi r8,r10,25128
	ctx.r8.s64 = ctx.r10.s64 + 25128;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8994c2bc
	if (ctx.cr6.eq) goto loc_8994C2BC;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8994c354
	if (!ctx.cr6.eq) goto loc_8994C354;
loc_8994C350:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8994C354:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89952018) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x899520a0
	if (ctx.cr6.eq) goto loc_899520A0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x899520a0
	if (ctx.cr6.eq) goto loc_899520A0;
	// lis r11,65
	ctx.r11.s64 = 4259840;
	// ori r9,r11,64532
	ctx.r9.u64 = ctx.r11.u64 | 64532;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899520a0
	if (ctx.cr6.eq) goto loc_899520A0;
	// addis r31,r10,66
	ctx.r31.s64 = ctx.r10.s64 + 4325376;
	// lis r11,65
	ctx.r11.s64 = 4259840;
	// addi r31,r31,-996
	ctx.r31.s64 = ctx.r31.s64 + -996;
	// ori r8,r11,64536
	ctx.r8.u64 = ctx.r11.u64 | 64536;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x89952098
	if (ctx.cr6.gt) goto loc_89952098;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x899dbdb0
	ctx.lr = 0x89952088;
	sub_899DBDB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x899520a0
	goto loc_899520A0;
loc_89952098:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
loc_899520A0:
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

DEFINE_REX_FUNC(sub_899528A0) {
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
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,3524(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3524);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899528f0
	if (ctx.cr6.eq) goto loc_899528F0;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lwz r10,3516(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 3516);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899528f8
	if (ctx.cr6.eq) goto loc_899528F8;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x899528f0
	if (!ctx.cr6.eq) goto loc_899528F0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_899528F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899529cc
	goto loc_899529CC;
loc_899528F8:
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addis r31,r7,66
	ctx.r31.s64 = ctx.r7.s64 + 4325376;
	// addi r31,r31,-1076
	ctx.r31.s64 = ctx.r31.s64 + -1076;
	// bgt cr6,0x899529b0
	if (ctx.cr6.gt) goto loc_899529B0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8995294c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995294C;
	// bdzf 4*cr6+eq,0x899529c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899529C8;
	// bdzf 4*cr6+eq,0x899529c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899529C8;
	// bne cr6,0x899529c8
	if (!ctx.cr6.eq) goto loc_899529C8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x899529e8
	ctx.lr = 0x89952948;
	sub_899529E8(ctx, base);
	// b 0x899529b8
	goto loc_899529B8;
loc_8995294C:
	// addi r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 + 3;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899529a8
	if (ctx.cr6.eq) goto loc_899529A8;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x899529a8
	if (ctx.cr6.gt) goto loc_899529A8;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bgt 0x899529a8
	if (ctx.cr0.gt) goto loc_899529A8;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r7,r9,8
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFFFF;
	// stw r7,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
loc_899529A8:
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// b 0x899529b8
	goto loc_899529B8;
loc_899529B0:
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_899529B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x899529c8
	if (ctx.cr6.eq) goto loc_899529C8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_899529C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_899529CC:
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

DEFINE_REX_FUNC(sub_89952E58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x89918198
	ctx.lr = 0x89952E70;
	sub_89918198(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lwz r11,12000(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12000);
	// srawi r10,r11,21
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 21;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,100
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 100, ctx.xer);
	// bgt cr6,0x89952ed8
	if (ctx.cr6.gt) goto loc_89952ED8;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r11,r10,23512
	ctx.r11.s64 = ctx.r10.s64 + 23512;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// lhzx r5,r8,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// lhzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// lhz r11,-21584(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + -21584);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// subf r11,r9,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r8,r11,352
	ctx.r8.s64 = ctx.r11.s64 + 352;
	// addi r7,r10,352
	ctx.r7.s64 = ctx.r10.s64 + 352;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// b 0x89952f04
	goto loc_89952F04;
loc_89952ED8:
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lbz r10,6419(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6419);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89952ef4
	if (ctx.cr6.eq) goto loc_89952EF4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x89952f04
	goto loc_89952F04;
loc_89952EF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89918c98
	ctx.lr = 0x89952EFC;
	sub_89918C98(ctx, base);
	// lhz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_89952F04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89952bc0
	ctx.lr = 0x89952F0C;
	sub_89952BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899535F0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x89918198
	ctx.lr = 0x89953608;
	sub_89918198(ctx, base);
	// li r5,320
	ctx.r5.s64 = 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89952bc0
	ctx.lr = 0x89953618;
	sub_89952BC0(ctx, base);
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

DEFINE_REX_FUNC(sub_89953890) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e8
	ctx.lr = 0x89953898;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// sth r3,246(r1)
	REX_STORE_U16(ctx.r1.u32 + 246, ctx.r3.u16);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r31,r11,25128
	ctx.r31.s64 = ctx.r11.s64 + 25128;
	// mulli r26,r10,696
	ctx.r26.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwzx r30,r26,r29
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// rlwinm r9,r30,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899538ec
	if (!ctx.cr6.eq) goto loc_899538EC;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x899337b0
	ctx.lr = 0x899538D8;
	sub_899337B0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89953b8c
	if (ctx.cr6.eq) goto loc_89953B8C;
	// ori r11,r30,4
	ctx.r11.u64 = ctx.r30.u64 | 4;
	// stwx r11,r26,r29
	REX_STORE_U32(ctx.r26.u32 + ctx.r29.u32, ctx.r11.u32);
loc_899538EC:
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r28,r31,637
	ctx.r28.s64 = ctx.r31.s64 + 637;
	// addi r30,r11,24520
	ctx.r30.s64 = ctx.r11.s64 + 24520;
	// lwzx r11,r26,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// lbzx r9,r26,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r28.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r27,r9,r30
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// extsb r23,r27
	ctx.r23.s64 = ctx.r27.s8;
	// rlwinm r3,r23,4,16,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFF0;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x8991a058
	ctx.lr = 0x8995392C;
	sub_8991A058(ctx, base);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x89953b8c
	if (ctx.cr6.eq) goto loc_89953B8C;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// extsb r4,r27
	ctx.r4.s64 = ctx.r27.s8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x89932798
	ctx.lr = 0x8995394C;
	sub_89932798(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89953b8c
	if (ctx.cr6.eq) goto loc_89953B8C;
	// lwzx r11,r26,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
	// lbzx r9,r26,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r28.u32);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,3360
	ctx.r8.s64 = ctx.r8.s64 + 3360;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,7904
	ctx.r10.s64 = ctx.r10.s64 + 7904;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r4,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// ble cr6,0x89953b80
	if (!ctx.cr6.gt) goto loc_89953B80;
	// addi r30,r8,-4
	ctx.r30.s64 = ctx.r8.s64 + -4;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r3,r10,-4
	ctx.r3.s64 = ctx.r10.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lwz r16,3504(r8)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r8.u32 + 3504);
	// addi r19,r31,24
	ctx.r19.s64 = ctx.r31.s64 + 24;
	// addi r20,r31,28
	ctx.r20.s64 = ctx.r31.s64 + 28;
	// lis r21,-14336
	ctx.r21.s64 = -939524096;
	// li r22,4
	ctx.r22.s64 = 4;
	// lis r23,8
	ctx.r23.s64 = 524288;
	// ori r6,r6,32896
	ctx.r6.u64 = ctx.r6.u64 | 32896;
	// lis r25,-32768
	ctx.r25.s64 = -2147483648;
	// li r27,20
	ctx.r27.s64 = 20;
	// li r28,2
	ctx.r28.s64 = 2;
	// lis r29,512
	ctx.r29.s64 = 33554432;
	// lis r17,-30270
	ctx.r17.s64 = -1983774720;
	// lis r18,-30253
	ctx.r18.s64 = -1982660608;
	// lis r24,-30270
	ctx.r24.s64 = -1983774720;
	// addi r31,r10,9016
	ctx.r31.s64 = ctx.r10.s64 + 9016;
	// addi r4,r11,11976
	ctx.r4.s64 = ctx.r11.s64 + 11976;
loc_899539F4:
	// lwzu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// stw r22,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r22.u32);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lhz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// srawi r11,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 3;
	// clrlwi r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	// stw r5,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lhz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// sth r11,124(r10)
	REX_STORE_U16(ctx.r10.u32 + 124, ctx.r11.u16);
	// stw r23,116(r10)
	REX_STORE_U32(ctx.r10.u32 + 116, ctx.r23.u32);
	// lwzx r5,r26,r19
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r19.u32);
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r5,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r5.u32);
	// lwzx r5,r26,r20
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r20.u32);
	// lhz r11,2(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r5,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r5.u32);
	// lhz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// rlwinm r11,r5,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwinm r5,r11,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lhz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// rlwinm r11,r5,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwinm r5,r11,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// stw r6,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r6.u32);
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lhz r11,20416(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 20416);
	// sth r9,50(r10)
	REX_STORE_U16(ctx.r10.u32 + 50, ctx.r9.u16);
	// sth r11,126(r10)
	REX_STORE_U16(ctx.r10.u32 + 126, ctx.r11.u16);
loc_89953AA8:
	// addi r5,r8,13
	ctx.r5.s64 = ctx.r8.s64 + 13;
	// lwzu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// stwx r11,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u32);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r5,648(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 648);
	// stw r5,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r5,644(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 644);
	// stb r9,78(r11)
	REX_STORE_U8(ctx.r11.u32 + 78, ctx.r9.u8);
	// stb r9,77(r11)
	REX_STORE_U8(ctx.r11.u32 + 77, ctx.r9.u8);
	// stb r9,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r9.u8);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r29,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stb r9,79(r11)
	REX_STORE_U8(ctx.r11.u32 + 79, ctx.r9.u8);
	// stb r9,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r9.u8);
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blt cr6,0x89953aa8
	if (ctx.cr6.lt) goto loc_89953AA8;
	// lwz r11,-9516(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + -9516);
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x89953b50
	if (ctx.cr6.eq) goto loc_89953B50;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// bgt cr6,0x89953b38
	if (ctx.cr6.gt) goto loc_89953B38;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_89953B38:
	// lwz r10,8420(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 8420);
	// stw r11,-9516(r18)
	REX_STORE_U32(ctx.r18.u32 + -9516, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x89953b60
	if (!ctx.cr6.lt) goto loc_89953B60;
	// stw r10,-9516(r18)
	REX_STORE_U32(ctx.r18.u32 + -9516, ctx.r10.u32);
	// b 0x89953b60
	goto loc_89953B60;
loc_89953B50:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x89953b60
	if (!ctx.cr6.gt) goto loc_89953B60;
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// stw r11,-9516(r18)
	REX_STORE_U32(ctx.r18.u32 + -9516, ctx.r11.u32);
loc_89953B60:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x899539f4
	if (ctx.cr6.lt) goto loc_899539F4;
	// lhz r22,246(r1)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r1.u32 + 246);
loc_89953B80:
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x89936218
	ctx.lr = 0x89953B8C;
	sub_89936218(ctx, base);
loc_89953B8C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89955270) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x89955278;
	__savegprlr_22(ctx, base);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,192
	ctx.r9.s64 = 192;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934fb8
	ctx.lr = 0x899552B0;
	sub_89934FB8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-30234
	ctx.r11.s64 = -1981415424;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r31,r11,3832
	ctx.r31.s64 = ctx.r11.s64 + 3832;
loc_899552C0:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_899552CC:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r6,r31,3376
	ctx.r6.s64 = ctx.r31.s64 + 3376;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_89955310:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x89955310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89955310;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899552cc
	if (ctx.cr6.lt) goto loc_899552CC;
	// addi r8,r31,3376
	ctx.r8.s64 = ctx.r31.s64 + 3376;
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
	// mulli r9,r30,170
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(170));
	// mulli r11,r30,780
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(780));
	// addi r6,r31,-832
	ctx.r6.s64 = ctx.r31.s64 + -832;
	// li r7,9
	ctx.r7.s64 = 9;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x89955358;
	sub_89935880(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899552c0
	if (ctx.cr6.lt) goto loc_899552C0;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r31,-160
	ctx.r11.s64 = ctx.r31.s64 + -160;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,120
	ctx.r9.s64 = 120;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,-20
	ctx.r7.s64 = -20;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899553A0;
	sub_89934FB8(ctx, base);
	// lis r7,-30303
	ctx.r7.s64 = -1985937408;
	// addi r5,r31,-160
	ctx.r5.s64 = ctx.r31.s64 + -160;
	// addi r6,r7,-16876
	ctx.r6.s64 = ctx.r7.s64 + -16876;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935688
	ctx.lr = 0x899553BC;
	sub_89935688(ctx, base);
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// addi r8,r9,9016
	ctx.r8.s64 = ctx.r9.s64 + 9016;
loc_899553CC:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// addi r5,r9,128
	ctx.r5.s64 = ctx.r9.s64 + 128;
	// rlwinm r4,r9,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// rlwinm r9,r5,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r11,r31,-832
	ctx.r11.s64 = ctx.r31.s64 + -832;
	// addi r3,r31,-832
	ctx.r3.s64 = ctx.r31.s64 + -832;
	// addi r5,r31,-832
	ctx.r5.s64 = ctx.r31.s64 + -832;
	// lhzx r7,r4,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r30,r31,-832
	ctx.r30.s64 = ctx.r31.s64 + -832;
	// extsh r25,r6
	ctx.r25.s64 = ctx.r6.s16;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// neg r24,r25
	ctx.r24.s64 = static_cast<int64_t>(-ctx.r25.u64);
	// rlwinm r25,r25,15,0,16
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 15) & 0xFFFF8000;
	// stwx r29,r28,r11
	REX_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r29.u32);
	// extsh r26,r7
	ctx.r26.s64 = ctx.r7.s16;
	// addi r5,r5,20
	ctx.r5.s64 = ctx.r5.s64 + 20;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r6,r31,-832
	ctx.r6.s64 = ctx.r31.s64 + -832;
	// srawi r25,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 8;
	// addi r9,r31,-832
	ctx.r9.s64 = ctx.r31.s64 + -832;
	// neg r23,r26
	ctx.r23.s64 = static_cast<int64_t>(-ctx.r26.u64);
	// stwx r25,r28,r3
	REX_STORE_U32(ctx.r28.u32 + ctx.r3.u32, ctx.r25.u32);
	// addi r4,r31,-832
	ctx.r4.s64 = ctx.r31.s64 + -832;
	// stwx r10,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r10.u32);
	// addi r7,r31,-832
	ctx.r7.s64 = ctx.r31.s64 + -832;
	// stwx r10,r28,r30
	REX_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r10.u32);
	// rlwinm r26,r26,15,0,16
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 15) & 0xFFFF8000;
	// addi r11,r6,16
	ctx.r11.s64 = ctx.r6.s64 + 16;
	// rlwinm r24,r24,15,0,16
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 15) & 0xFFFF8000;
	// addi r3,r9,28
	ctx.r3.s64 = ctx.r9.s64 + 28;
	// addi r22,r31,-832
	ctx.r22.s64 = ctx.r31.s64 + -832;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// stwx r10,r28,r11
	REX_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u32);
	// rlwinm r6,r23,15,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 15) & 0xFFFF8000;
	// srawi r5,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r26.s32 >> 8;
	// srawi r30,r24,8
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r24.s32 >> 8;
	// stwx r10,r28,r22
	REX_STORE_U32(ctx.r28.u32 + ctx.r22.u32, ctx.r10.u32);
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// stwx r5,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r5.u32);
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// stwx r30,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r30.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stwx r6,r28,r3
	REX_STORE_U32(ctx.r28.u32 + ctx.r3.u32, ctx.r6.u32);
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// blt cr6,0x899553cc
	if (ctx.cr6.lt) goto loc_899553CC;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89956A38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x89956afc
	if (ctx.cr6.gt) goto loc_89956AFC;
	// lis r12,-30315
	ctx.r12.s64 = -1986723840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27232
	ctx.r12.s64 = ctx.r12.s64 + 27232;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_89956A90;
	case 1:
		goto loc_89956A90;
	case 2:
		goto loc_89956A90;
	case 3:
		goto loc_89956A90;
	case 4:
		sub_89956AA0(ctx, base);
		return;
	case 5:
		sub_89956AA0(ctx, base);
		return;
	case 6:
		sub_89956AA0(ctx, base);
		return;
	case 7:
		sub_89956AA0(ctx, base);
		return;
	case 8:
		sub_89956AC8(ctx, base);
		return;
	case 9:
		sub_89956AC8(ctx, base);
		return;
	case 10:
		sub_89956AC8(ctx, base);
		return;
	case 11:
		sub_89956AC8(ctx, base);
		return;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89956A90:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// b 0x89956afc
	goto loc_89956AFC;
loc_89956AFC:
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -10485760;
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x89956b1c
	if (!ctx.cr0.lt) goto loc_89956B1C;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89956B1C:
	// lis r11,176
	ctx.r11.s64 = 11534336;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x89956b2c
	if (!ctx.cr6.gt) goto loc_89956B2C;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_89956B2C:
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-21584(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addis r11,r7,-120
	ctx.r11.s64 = ctx.r7.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x89956b58
	if (!ctx.cr0.lt) goto loc_89956B58;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89956B58:
	// lis r10,136
	ctx.r10.s64 = 8912896;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89956AA0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89956abc
	if (!ctx.cr6.eq) goto loc_89956ABC;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x89956afc
	goto loc_89956AFC;
loc_89956ABC:
	// stw r9,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// sth r9,36(r4)
	REX_STORE_U16(ctx.r4.u32 + 36, ctx.r9.u16);
	// b 0x89956afc
	goto loc_89956AFC;
loc_89956AFC:
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -10485760;
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x89956b1c
	if (!ctx.cr0.lt) goto loc_89956B1C;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89956B1C:
	// lis r11,176
	ctx.r11.s64 = 11534336;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x89956b2c
	if (!ctx.cr6.gt) goto loc_89956B2C;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_89956B2C:
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-21584(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addis r11,r7,-120
	ctx.r11.s64 = ctx.r7.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x89956b58
	if (!ctx.cr0.lt) goto loc_89956B58;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89956B58:
	// lis r10,136
	ctx.r10.s64 = 8912896;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899577D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e8
	ctx.lr = 0x899577E0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r27,r11,25128
	ctx.r27.s64 = ctx.r11.s64 + 25128;
	// mulli r31,r10,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r29,r27,4
	ctx.r29.s64 = ctx.r27.s64 + 4;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwzx r30,r31,r29
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r9,r30,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x89957834
	if (!ctx.cr6.eq) goto loc_89957834;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x899337b0
	ctx.lr = 0x89957814;
	sub_899337B0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8995782c
	if (!ctx.cr6.eq) goto loc_8995782C;
loc_89957820:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
loc_8995782C:
	// ori r11,r30,2
	ctx.r11.u64 = ctx.r30.u64 | 2;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
loc_89957834:
	// addi r29,r27,637
	ctx.r29.s64 = ctx.r27.s64 + 637;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r30,r11,28280
	ctx.r30.s64 = ctx.r11.s64 + 28280;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r6,r9
	ctx.r28.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r21,r6,r8
	ctx.r21.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// beq cr6,0x8995787c
	if (ctx.cr6.eq) goto loc_8995787C;
	// bl 0x89958ee0
	ctx.lr = 0x89957870;
	sub_89958EE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
loc_8995787C:
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x89932798
	ctx.lr = 0x8995788C;
	sub_89932798(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89957820
	if (ctx.cr6.eq) goto loc_89957820;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r9,r10,3360
	ctx.r9.s64 = ctx.r10.s64 + 3360;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r26,r10,r30
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x899579d0
	if (!ctx.cr6.gt) goto loc_899579D0;
	// lis r20,-30253
	ctx.r20.s64 = -1982660608;
	// addi r6,r9,-4
	ctx.r6.s64 = ctx.r9.s64 + -4;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// ori r28,r9,20077
	ctx.r28.u64 = ctx.r9.u64 | 20077;
	// lwz r9,-9212(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + -9212);
	// ori r30,r7,32896
	ctx.r30.u64 = ctx.r7.u64 | 32896;
	// addi r25,r27,28
	ctx.r25.s64 = ctx.r27.s64 + 28;
	// srawi r4,r21,4
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r21.s32 >> 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r22,-16384
	ctx.r22.s64 = -1073741824;
	// li r23,3
	ctx.r23.s64 = 3;
	// li r24,512
	ctx.r24.s64 = 512;
	// li r29,192
	ctx.r29.s64 = 192;
	// addi r7,r11,9016
	ctx.r7.s64 = ctx.r11.s64 + 9016;
loc_89957900:
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// lwzu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// extsh r18,r8
	ctx.r18.s64 = ctx.r8.s16;
	// srawi r5,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 16;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// rlwinm r8,r5,19,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0x3;
	// cmpw cr6,r18,r26
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r26.s32, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lhz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// addi r17,r8,4
	ctx.r17.s64 = ctx.r8.s64 + 4;
	// sth r5,124(r11)
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r5.u16);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// stw r21,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r21.u32);
	// srawi r17,r17,3
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 3;
	// rlwinm r16,r8,1,22,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// clrlwi r8,r17,26
	ctx.r8.u64 = ctx.r17.u32 & 0x3F;
	// rlwinm r17,r5,1,22,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// lwzx r3,r31,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lhz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwzx r3,r31,r25
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lhzu r5,6(r10)
	ea = 6 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// stw r5,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// lhzx r3,r16,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r16.u32 + ctx.r7.u32);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// srawi r5,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 8;
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lhzx r3,r17,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r17.u32 + ctx.r7.u32);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// sth r24,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r24.u16);
	// stb r29,38(r11)
	REX_STORE_U8(ctx.r11.u32 + 38, ctx.r29.u8);
	// stb r29,39(r11)
	REX_STORE_U8(ctx.r11.u32 + 39, ctx.r29.u8);
	// stw r30,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// srawi r5,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 8;
	// stw r5,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// blt cr6,0x89957900
	if (ctx.cr6.lt) goto loc_89957900;
	// stw r9,-9212(r20)
	REX_STORE_U32(ctx.r20.u32 + -9212, ctx.r9.u32);
loc_899579D0:
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r10,3504(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 3504);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89957a1c
	if (ctx.cr6.eq) goto loc_89957A1C;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r9,-9516(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -9516);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// bgt cr6,0x89957a00
	if (ctx.cr6.gt) goto loc_89957A00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_89957A00:
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
	// lwz r9,8420(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8420);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x89957a34
	if (!ctx.cr6.lt) goto loc_89957A34;
	// stw r9,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r9.u32);
	// b 0x89957a34
	goto loc_89957A34;
loc_89957A1C:
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lwz r10,-9516(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -9516);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x89957a34
	if (!ctx.cr6.gt) goto loc_89957A34;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,-9516(r9)
	REX_STORE_U32(ctx.r9.u32 + -9516, ctx.r11.u32);
loc_89957A34:
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x89936218
	ctx.lr = 0x89957A40;
	sub_89936218(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89959468) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lbz r11,38(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 38);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bge cr6,0x89959490
	if (!ctx.cr6.lt) goto loc_89959490;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_89959490:
	// addi r10,r11,247
	ctx.r10.s64 = ctx.r11.s64 + 247;
	// lbz r11,39(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 39);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// stb r10,38(r4)
	REX_STORE_U8(ctx.r4.u32 + 38, ctx.r10.u8);
	// stb r9,39(r4)
	REX_STORE_U8(ctx.r4.u32 + 39, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89959570) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x89959578;
	__savegprlr_22(ctx, base);
	// stwu r1,-2560(r1)
	ea = -2560 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,232
	ctx.r9.s64 = 232;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x89934860
	ctx.lr = 0x899595B0;
	sub_89934860(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,-30200
	ctx.r6.s64 = -30200;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r9,160
	ctx.r9.s64 = 160;
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x899352b8
	ctx.lr = 0x899595E4;
	sub_899352B8(ctx, base);
	// lis r11,-30233
	ctx.r11.s64 = -1981349888;
	// lis r10,-30303
	ctx.r10.s64 = -1985937408;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5768
	ctx.r31.s64 = ctx.r11.s64 + 5768;
	// addi r29,r10,-20620
	ctx.r29.s64 = ctx.r10.s64 + -20620;
loc_899595F8:
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_89959604:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r31,3120
	ctx.r6.s64 = ctx.r31.s64 + 3120;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,9
	ctx.r9.s64 = 9;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89959648:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x89959648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89959648;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r1,106
	ctx.r6.s64 = ctx.r1.s64 + 106;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r28,r1,110
	ctx.r28.s64 = ctx.r1.s64 + 110;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,3120
	ctx.r11.s64 = ctx.r31.s64 + 3120;
	// lhzx r26,r4,r8
	ctx.r26.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// addi r7,r31,3120
	ctx.r7.s64 = ctx.r31.s64 + 3120;
	// addi r8,r31,3120
	ctx.r8.s64 = ctx.r31.s64 + 3120;
	// lhzx r6,r4,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// addi r9,r31,3120
	ctx.r9.s64 = ctx.r31.s64 + 3120;
	// lhzx r3,r4,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
	// lhzx r4,r4,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// extsh r28,r27
	ctx.r28.s64 = ctx.r27.s16;
	// sthx r4,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// sthx r26,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r26.u16);
	// sthx r6,r10,r8
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u16);
	// cmpwi cr6,r28,33
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 33, ctx.xer);
	// sthx r3,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u16);
	// blt cr6,0x89959604
	if (ctx.cr6.lt) goto loc_89959604;
	// addi r9,r31,3120
	ctx.r9.s64 = ctx.r31.s64 + 3120;
	// mulli r10,r30,594
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(594));
	// mulli r11,r30,780
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(780));
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935b08
	ctx.lr = 0x899596E8;
	sub_89935B08(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899595f8
	if (ctx.cr6.lt) goto loc_899595F8;
	// li r7,32
	ctx.r7.s64 = 32;
loc_89959700:
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r31,2340
	ctx.r11.s64 = ctx.r31.s64 + 2340;
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r31,780
	ctx.r10.s64 = ctx.r31.s64 + 780;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,1560
	ctx.r9.s64 = ctx.r31.s64 + 1560;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r6,r8,r31
	ctx.r6.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwzx r5,r8,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,4(r6)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r7,64
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 64, ctx.xer);
	// lwz r28,8(r6)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r27,0(r9)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r26,4(r9)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r25,8(r9)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r24,0(r10)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r23,4(r10)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r22,8(r10)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r3,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r3.u32);
	// stw r30,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r30.u32);
	// stw r4,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r26,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// stw r25,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r25.u32);
	// stw r24,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r24.u32);
	// stw r23,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r23.u32);
	// stw r22,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r22.u32);
	// blt cr6,0x89959700
	if (ctx.cr6.lt) goto loc_89959700;
	// addi r1,r1,2560
	ctx.r1.s64 = ctx.r1.s64 + 2560;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995AD50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8995AD58;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30233
	ctx.r11.s64 = -1981349888;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r31,r11,24872
	ctx.r31.s64 = ctx.r11.s64 + 24872;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,-1368
	ctx.r7.s64 = ctx.r31.s64 + -1368;
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-64
	ctx.r8.s64 = -64;
	// li r7,-64
	ctx.r7.s64 = -64;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x89934fb8
	ctx.lr = 0x8995AD98;
	sub_89934FB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-30303
	ctx.r10.s64 = -1985937408;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,-21688
	ctx.r28.s64 = ctx.r10.s64 + -21688;
loc_8995ADAC:
	// lwzx r6,r11,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r11,r31,-1368
	ctx.r11.s64 = ctx.r31.s64 + -1368;
	// addi r9,r31,-896
	ctx.r9.s64 = ctx.r31.s64 + -896;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89935688
	ctx.lr = 0x8995ADE4;
	sub_89935688(ctx, base);
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,28
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 28, ctx.xer);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8995adac
	if (ctx.cr6.lt) goto loc_8995ADAC;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r9,r11,9016
	ctx.r9.s64 = ctx.r11.s64 + 9016;
	// addi r3,r10,29580
	ctx.r3.s64 = ctx.r10.s64 + 29580;
loc_8995AE10:
	// mulli r4,r5,132
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(132));
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8995AE18:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r8,r5,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r7,r6,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// addi r6,r8,128
	ctx.r6.s64 = ctx.r8.s64 + 128;
	// rlwinm r28,r8,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// rlwinm r27,r6,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// addi r6,r31,-528
	ctx.r6.s64 = ctx.r31.s64 + -528;
	// addi r7,r31,-528
	ctx.r7.s64 = ctx.r31.s64 + -528;
	// lhzx r28,r28,r9
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r9.u32);
	// addi r8,r31,-528
	ctx.r8.s64 = ctx.r31.s64 + -528;
	// lhzx r27,r27,r9
	ctx.r27.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r9.u32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// mullw r28,r28,r10
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r27,r10
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r10.s32);
	// addi r26,r31,-528
	ctx.r26.s64 = ctx.r31.s64 + -528;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi r27,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 8;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// srawi r28,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 8;
	// stwx r27,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r27.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stwx r30,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r30.u32);
	// stwx r28,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r28.u32);
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// stwx r30,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r30.u32);
	// blt cr6,0x8995ae18
	if (ctx.cr6.lt) goto loc_8995AE18;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// addi r7,r31,-528
	ctx.r7.s64 = ctx.r31.s64 + -528;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// stwx r30,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r30.u32);
	// blt cr6,0x8995ae10
	if (ctx.cr6.lt) goto loc_8995AE10;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8995AEC8:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r7,r31,-1088
	ctx.r7.s64 = ctx.r31.s64 + -1088;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// addi r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 128;
	// rlwinm r3,r10,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r10,r4,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r6,r31,-1088
	ctx.r6.s64 = ctx.r31.s64 + -1088;
	// addi r8,r31,-1088
	ctx.r8.s64 = ctx.r31.s64 + -1088;
	// stwx r30,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r30.u32);
	// addi r4,r31,-1088
	ctx.r4.s64 = ctx.r31.s64 + -1088;
	// lhzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r9.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// rlwinm r3,r3,18,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0xFFFFFFFC;
	// rlwinm r29,r10,18,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFFFFFFFC;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// srawi r7,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 8;
	// srawi r5,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 8;
	// stwx r30,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r30.u32);
	// stwx r7,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// stwx r5,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u32);
	// blt cr6,0x8995aec8
	if (ctx.cr6.lt) goto loc_8995AEC8;
	// addi r11,r31,-1088
	ctx.r11.s64 = ctx.r31.s64 + -1088;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r5,r11,29584
	ctx.r5.s64 = ctx.r11.s64 + 29584;
loc_8995AF4C:
	// mulli r6,r7,132
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(132));
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8995AF54:
	// lbzx r11,r7,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// rlwinm r3,r11,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// srawi r10,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 4;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// rlwinm r29,r11,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r3,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// lhzx r29,r29,r9
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// lhzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r9.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mullw r29,r29,r10
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// stwx r30,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r30.u32);
	// stwx r30,r11,r27
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r30.u32);
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// srawi r3,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 8;
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// stwx r29,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r29.u32);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// blt cr6,0x8995af54
	if (ctx.cr6.lt) goto loc_8995AF54;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// stwx r30,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// blt cr6,0x8995af4c
	if (ctx.cr6.lt) goto loc_8995AF4C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995CBD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8995CBE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r30,r11,-25648
	ctx.r30.s64 = ctx.r11.s64 + -25648;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// addi r11,r30,-196
	ctx.r11.s64 = ctx.r30.s64 + -196;
	// li r9,144
	ctx.r9.s64 = 144;
	// li r8,-56
	ctx.r8.s64 = -56;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-56
	ctx.r7.s64 = -56;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x8995CC20;
	sub_89934FB8(ctx, base);
	// lis r11,-30234
	ctx.r11.s64 = -1981415424;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,3612
	ctx.r27.s64 = ctx.r11.s64 + 3612;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r30,-196
	ctx.r9.s64 = ctx.r30.s64 + -196;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r27,-16744
	ctx.r11.s64 = ctx.r27.s64 + -16744;
	// addi r29,r8,3484
	ctx.r29.s64 = ctx.r8.s64 + 3484;
loc_8995CC40:
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
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8995cc40
	if (ctx.cr6.lt) goto loc_8995CC40;
	// addi r8,r30,-80
	ctx.r8.s64 = ctx.r30.s64 + -80;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,-60
	ctx.r8.s64 = -60;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x8995CCA0;
	sub_89934FB8(ctx, base);
	// addi r9,r30,-80
	ctx.r9.s64 = ctx.r30.s64 + -80;
	// addi r11,r27,-13360
	ctx.r11.s64 = ctx.r27.s64 + -13360;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8995CCAC:
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
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8995ccac
	if (ctx.cr6.lt) goto loc_8995CCAC;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// addi r9,r30,-740
	ctx.r9.s64 = ctx.r30.s64 + -740;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,144
	ctx.r9.s64 = 144;
	// li r8,-56
	ctx.r8.s64 = -56;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// li r7,-56
	ctx.r7.s64 = -56;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,14
	ctx.r4.s64 = 14;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x8995CD0C;
	sub_89934FB8(ctx, base);
	// addi r8,r30,-40
	ctx.r8.s64 = ctx.r30.s64 + -40;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,-60
	ctx.r8.s64 = -60;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,14
	ctx.r4.s64 = 14;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x89934fb8
	ctx.lr = 0x8995CD3C;
	sub_89934FB8(ctx, base);
	// addi r11,r30,-40
	ctx.r11.s64 = ctx.r30.s64 + -40;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-60
	ctx.r8.s64 = -60;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,14
	ctx.r4.s64 = 14;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x89934fb8
	ctx.lr = 0x8995CD70;
	sub_89934FB8(ctx, base);
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// addi r8,r30,-740
	ctx.r8.s64 = ctx.r30.s64 + -740;
	// addi r7,r11,-25800
	ctx.r7.s64 = ctx.r11.s64 + -25800;
loc_8995CD7C:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8995CD88:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// blt cr6,0x8995cd88
	if (ctx.cr6.lt) goto loc_8995CD88;
	// addi r10,r30,-740
	ctx.r10.s64 = ctx.r30.s64 + -740;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// addi r11,r10,40
	ctx.r11.s64 = ctx.r10.s64 + 40;
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8995cd7c
	if (ctx.cr6.lt) goto loc_8995CD7C;
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// addi r8,r30,-40
	ctx.r8.s64 = ctx.r30.s64 + -40;
	// addi r7,r11,-26344
	ctx.r7.s64 = ctx.r11.s64 + -26344;
loc_8995CDDC:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8995CDE8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x8995cde8
	if (ctx.cr6.lt) goto loc_8995CDE8;
	// addi r10,r30,-40
	ctx.r10.s64 = ctx.r30.s64 + -40;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// addi r11,r10,40
	ctx.r11.s64 = ctx.r10.s64 + 40;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8995cddc
	if (ctx.cr6.lt) goto loc_8995CDDC;
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// addi r10,r11,-23576
	ctx.r10.s64 = ctx.r11.s64 + -23576;
	// addi r11,r9,-26048
	ctx.r11.s64 = ctx.r9.s64 + -26048;
	// addi r8,r10,-288
	ctx.r8.s64 = ctx.r10.s64 + -288;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8995CE48:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r8,r8,18
	ctx.r8.s64 = ctx.r8.s64 + 18;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// blt cr6,0x8995ce48
	if (ctx.cr6.lt) goto loc_8995CE48;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r8,r30,152
	ctx.r8.s64 = ctx.r30.s64 + 152;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8995CE80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r29,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r29.u32);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r31,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r31.u32);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x8995ce80
	if (ctx.cr6.lt) goto loc_8995CE80;
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// addi r11,r30,-560
	ctx.r11.s64 = ctx.r30.s64 + -560;
	// stw r31,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r31.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r9,192
	ctx.r9.s64 = 192;
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,11
	ctx.r4.s64 = 11;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x8995CEE4;
	sub_89934FB8(ctx, base);
	// addi r9,r30,-560
	ctx.r9.s64 = ctx.r30.s64 + -560;
	// addi r11,r30,-944
	ctx.r11.s64 = ctx.r30.s64 + -944;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8995CEF0:
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
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x8995cef0
	if (ctx.cr6.lt) goto loc_8995CEF0;
	// addi r9,r30,-600
	ctx.r9.s64 = ctx.r30.s64 + -600;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r9,136
	ctx.r9.s64 = 136;
	// li r8,-120
	ctx.r8.s64 = -120;
	// li r7,-60
	ctx.r7.s64 = -60;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x8995CF54;
	sub_89934FB8(ctx, base);
	// addi r9,r30,-600
	ctx.r9.s64 = ctx.r30.s64 + -600;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8995CF60:
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
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8995cf60
	if (ctx.cr6.lt) goto loc_8995CF60;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,224
	ctx.r9.s64 = 224;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// li r8,-64
	ctx.r8.s64 = -64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// li r7,-16
	ctx.r7.s64 = -16;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x89934fb8
	ctx.lr = 0x8995CFBC;
	sub_89934FB8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995FF8C) {
	REX_FUNC_PROLOGUE();
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// lbz r7,5754(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 5754);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// li r7,516
	ctx.r7.s64 = 516;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// sthx r7,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89960A68) {
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
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// addi r31,r11,-24224
	ctx.r31.s64 = ctx.r11.s64 + -24224;
	// lhz r11,3520(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3520);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x89960d88
	if (ctx.cr6.gt) goto loc_89960D88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89960bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89960BC8;
	// bdzf 4*cr6+eq,0x89960cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89960CC0;
	// bdzf 4*cr6+eq,0x89960cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89960CF8;
	// bne cr6,0x89960d54
	if (!ctx.cr6.eq) goto loc_89960D54;
	// lhz r11,3522(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3522);
	// lis r9,-30303
	ctx.r9.s64 = -1985937408;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r11,r9,-31960
	ctx.r11.s64 = ctx.r9.s64 + -31960;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bgt cr6,0x89960d88
	if (ctx.cr6.gt) goto loc_89960D88;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89960b28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89960B28;
	// bdzf 4*cr6+eq,0x89960b3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89960B3C;
	// bdzf 4*cr6+eq,0x89960b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89960B50;
	// bdzf 4*cr6+eq,0x89960b88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89960B88;
	// bdzf 4*cr6+eq,0x89960ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89960BA8;
	// bne cr6,0x89960b64
	if (!ctx.cr6.eq) goto loc_89960B64;
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// sth r9,3532(r31)
	REX_STORE_U16(ctx.r31.u32 + 3532, ctx.r9.u16);
	// sth r8,3526(r31)
	REX_STORE_U16(ctx.r31.u32 + 3526, ctx.r8.u16);
	// sth r7,3536(r31)
	REX_STORE_U16(ctx.r31.u32 + 3536, ctx.r7.u16);
	// sth r6,3534(r31)
	REX_STORE_U16(ctx.r31.u32 + 3534, ctx.r6.u16);
	// sth r5,3520(r31)
	REX_STORE_U16(ctx.r31.u32 + 3520, ctx.r5.u16);
	// sth r4,3528(r31)
	REX_STORE_U16(ctx.r31.u32 + 3528, ctx.r4.u16);
	// sth r11,3530(r31)
	REX_STORE_U16(ctx.r31.u32 + 3530, ctx.r11.u16);
	// b 0x89960d84
	goto loc_89960D84;
loc_89960B28:
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r10,3520(r31)
	REX_STORE_U16(ctx.r31.u32 + 3520, ctx.r10.u16);
	// sth r11,3524(r31)
	REX_STORE_U16(ctx.r31.u32 + 3524, ctx.r11.u16);
	// b 0x89960d88
	goto loc_89960D88;
loc_89960B3C:
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r10,3520(r31)
	REX_STORE_U16(ctx.r31.u32 + 3520, ctx.r10.u16);
	// sth r11,3524(r31)
	REX_STORE_U16(ctx.r31.u32 + 3524, ctx.r11.u16);
	// b 0x89960d88
	goto loc_89960D88;
loc_89960B50:
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r10,3520(r31)
	REX_STORE_U16(ctx.r31.u32 + 3520, ctx.r10.u16);
	// sth r11,3524(r31)
	REX_STORE_U16(ctx.r31.u32 + 3524, ctx.r11.u16);
	// b 0x89960d88
	goto loc_89960D88;
loc_89960B64:
	// li r6,116
	ctx.r6.s64 = 116;
	// lis r5,504
	ctx.r5.s64 = 33030144;
	// lis r4,184
	ctx.r4.s64 = 12058624;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8992e330
	ctx.lr = 0x89960B78;
	sub_8992E330(ctx, base);
	// lhz r11,3522(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3522);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,3522(r31)
	REX_STORE_U16(ctx.r31.u32 + 3522, ctx.r11.u16);
	// b 0x89960d88
	goto loc_89960D88;
loc_89960B88:
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sth r10,3522(r31)
	REX_STORE_U16(ctx.r31.u32 + 3522, ctx.r10.u16);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// b 0x89960d88
	goto loc_89960D88;
loc_89960BA8:
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sth r10,3522(r31)
	REX_STORE_U16(ctx.r31.u32 + 3522, ctx.r10.u16);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// b 0x89960d88
	goto loc_89960D88;
loc_89960BC8:
	// lhz r11,3524(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3524);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89960be4
	if (ctx.cr6.eq) goto loc_89960BE4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,3524(r31)
	REX_STORE_U16(ctx.r31.u32 + 3524, ctx.r11.u16);
	// b 0x89960d88
	goto loc_89960D88;
loc_89960BE4:
	// lhz r11,3532(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3532);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,3532(r31)
	REX_STORE_U16(ctx.r31.u32 + 3532, ctx.r11.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x89960d88
	if (!ctx.cr6.lt) goto loc_89960D88;
	// lhz r11,3530(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3530);
	// lis r4,-30303
	ctx.r4.s64 = -1985937408;
	// lhz r9,3522(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 3522);
	// addi r3,r31,3376
	ctx.r3.s64 = ctx.r31.s64 + 3376;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r10,3536(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 3536);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lhz r8,3528(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 3528);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lhz r10,3534(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 3534);
	// addi r9,r4,-31960
	ctx.r9.s64 = ctx.r4.s64 + -31960;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r7,r9,12
	ctx.r7.s64 = ctx.r9.s64 + 12;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r10,3532(r31)
	REX_STORE_U16(ctx.r31.u32 + 3532, ctx.r10.u16);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r5,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// lhz r9,3528(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 3528);
	// lhz r11,3536(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3536);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// sth r10,3536(r31)
	REX_STORE_U16(ctx.r31.u32 + 3536, ctx.r10.u16);
	// sth r11,3528(r31)
	REX_STORE_U16(ctx.r31.u32 + 3528, ctx.r11.u16);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// blt cr6,0x89960c8c
	if (ctx.cr6.lt) goto loc_89960C8C;
	// li r11,11
	ctx.r11.s64 = 11;
	// sth r11,3528(r31)
	REX_STORE_U16(ctx.r31.u32 + 3528, ctx.r11.u16);
loc_89960C8C:
	// lhz r11,3526(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3526);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x89960d88
	if (ctx.cr6.lt) goto loc_89960D88;
	// lhz r11,3522(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3522);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// sth r10,3520(r31)
	REX_STORE_U16(ctx.r31.u32 + 3520, ctx.r10.u16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r10,3522(r31)
	REX_STORE_U16(ctx.r31.u32 + 3522, ctx.r10.u16);
	// b 0x89960d88
	goto loc_89960D88;
loc_89960CC0:
	// lhz r11,3524(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3524);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,3524(r31)
	REX_STORE_U16(ctx.r31.u32 + 3524, ctx.r11.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x89960d88
	if (ctx.cr6.gt) goto loc_89960D88;
	// li r10,36
	ctx.r10.s64 = 36;
	// addi r11,r31,3376
	ctx.r11.s64 = ctx.r31.s64 + 3376;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_89960CEC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x89960cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89960CEC;
	// b 0x89960d6c
	goto loc_89960D6C;
loc_89960CF8:
	// lhz r11,3524(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3524);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89960d3c
	if (ctx.cr6.eq) goto loc_89960D3C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,3524(r31)
	REX_STORE_U16(ctx.r31.u32 + 3524, ctx.r11.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x89960d88
	if (ctx.cr6.gt) goto loc_89960D88;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,3524(r31)
	REX_STORE_U16(ctx.r31.u32 + 3524, ctx.r11.u16);
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
loc_89960D3C:
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
loc_89960D54:
	// lhz r11,3524(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3524);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,3524(r31)
	REX_STORE_U16(ctx.r31.u32 + 3524, ctx.r11.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x89960d88
	if (!ctx.cr6.lt) goto loc_89960D88;
loc_89960D6C:
	// lhz r11,3522(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3522);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,3520(r31)
	REX_STORE_U16(ctx.r31.u32 + 3520, ctx.r9.u16);
	// sth r11,3522(r31)
	REX_STORE_U16(ctx.r31.u32 + 3522, ctx.r11.u16);
loc_89960D84:
	// sth r10,3524(r31)
	REX_STORE_U16(ctx.r31.u32 + 3524, ctx.r10.u16);
loc_89960D88:
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
}

DEFINE_REX_FUNC(sub_899625C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x899625C8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x89934208
	ctx.lr = 0x899625D4;
	sub_89934208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899625e8
	if (!ctx.cr6.eq) goto loc_899625E8;
loc_899625DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899625E8:
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// addi r10,r8,31032
	ctx.r10.s64 = ctx.r8.s64 + 31032;
	// lwz r11,7924(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 7924);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r11,7924(r9)
	REX_STORE_U32(ctx.r9.u32 + 7924, ctx.r11.u32);
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r31,r4,r7
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r30,r4,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// extsb r3,r31
	ctx.r3.s64 = ctx.r31.s8;
	// bl 0x8992c2a8
	ctx.lr = 0x89962620;
	sub_8992C2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899625dc
	if (ctx.cr6.eq) goto loc_899625DC;
	// extsb r22,r31
	ctx.r22.s64 = ctx.r31.s8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x8996274c
	if (!ctx.cr6.gt) goto loc_8996274C;
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r26,-21584(r8)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r23,-16384
	ctx.r23.s64 = -1073741824;
	// li r24,14
	ctx.r24.s64 = 14;
	// li r25,126
	ctx.r25.s64 = 126;
	// addi r31,r11,592
	ctx.r31.s64 = ctx.r11.s64 + 592;
	// addi r28,r9,-4592
	ctx.r28.s64 = ctx.r9.s64 + -4592;
loc_89962668:
	// lhzx r3,r10,r28
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// mulli r21,r9,112
	ctx.r21.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// stwx r23,r21,r31
	REX_STORE_U32(ctx.r21.u32 + ctx.r31.u32, ctx.r23.u32);
	// lbz r7,1(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lhzx r9,r5,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// sthx r9,r21,r11
	REX_STORE_U16(ctx.r21.u32 + ctx.r11.u32, ctx.r9.u16);
	// stwx r24,r21,r10
	REX_STORE_U32(ctx.r21.u32 + ctx.r10.u32, ctx.r24.u32);
	// lhz r7,3(r30)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + 3);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stwx r6,r21,r8
	REX_STORE_U32(ctx.r21.u32 + ctx.r8.u32, ctx.r6.u32);
	// lhz r5,5(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 5);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// stwx r11,r21,r4
	REX_STORE_U32(ctx.r21.u32 + ctx.r4.u32, ctx.r11.u32);
	// bl 0x8992bd50
	ctx.lr = 0x899626BC;
	sub_8992BD50(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r20,r31,66
	ctx.r20.s64 = ctx.r31.s64 + 66;
	// addi r19,r31,67
	ctx.r19.s64 = ctx.r31.s64 + 67;
	// addi r18,r31,44
	ctx.r18.s64 = ctx.r31.s64 + 44;
	// addi r17,r31,94
	ctx.r17.s64 = ctx.r31.s64 + 94;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 7);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// stwx r11,r21,r8
	REX_STORE_U32(ctx.r21.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r11,r21,r9
	REX_STORE_U32(ctx.r21.u32 + ctx.r9.u32, ctx.r11.u32);
	// lhz r9,9(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 9);
	// rotlwi r11,r9,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stbx r25,r21,r5
	REX_STORE_U8(ctx.r21.u32 + ctx.r5.u32, ctx.r25.u8);
	// stwx r11,r21,r7
	REX_STORE_U32(ctx.r21.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r8,r21,r6
	REX_STORE_U32(ctx.r21.u32 + ctx.r6.u32, ctx.r8.u32);
	// lbz r7,11(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// stbx r7,r21,r4
	REX_STORE_U8(ctx.r21.u32 + ctx.r4.u32, ctx.r7.u8);
	// lhz r6,13(r30)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 13);
	// sthx r6,r21,r3
	REX_STORE_U16(ctx.r21.u32 + ctx.r3.u32, ctx.r6.u16);
	// lbz r5,15(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// stbx r5,r21,r20
	REX_STORE_U8(ctx.r21.u32 + ctx.r20.u32, ctx.r5.u8);
	// lbzu r11,16(r30)
	ea = 16 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// stwx r27,r21,r18
	REX_STORE_U32(ctx.r21.u32 + ctx.r18.u32, ctx.r27.u32);
	// sthx r27,r21,r17
	REX_STORE_U16(ctx.r21.u32 + ctx.r17.u32, ctx.r27.u16);
	// stbx r11,r21,r19
	REX_STORE_U8(ctx.r21.u32 + ctx.r19.u32, ctx.r11.u8);
	// blt cr6,0x89962668
	if (ctx.cr6.lt) goto loc_89962668;
loc_8996274C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89963408) {
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
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r31,r11,592
	ctx.r31.s64 = ctx.r11.s64 + 592;
	// mulli r4,r10,112
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// addi r30,r31,110
	ctx.r30.s64 = ctx.r31.s64 + 110;
	// lbzx r8,r4,r30
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r30.u32);
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899634a0
	if (!ctx.cr6.eq) goto loc_899634A0;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// lwzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x899634a0
	if (ctx.cr6.eq) goto loc_899634A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r4,r9
	REX_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwzx r11,r4,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,36
	ctx.r9.s64 = ctx.r31.s64 + 36;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r31,32
	ctx.r7.s64 = ctx.r31.s64 + 32;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r5,r4,r6
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r5.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r4,r3
	REX_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r4,r9
	REX_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r5.u32);
loc_899634A0:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// lwzx r10,r4,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r7,r4,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// addi r6,r10,8192
	ctx.r6.s64 = ctx.r10.s64 + 8192;
	// rlwinm r5,r7,0,6,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2000000;
	// stwx r6,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x89963580
	if (ctx.cr6.eq) goto loc_89963580;
	// addi r10,r31,66
	ctx.r10.s64 = ctx.r31.s64 + 66;
	// lbzx r11,r4,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x89963504
	if (!ctx.cr6.lt) goto loc_89963504;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r9,r4,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899634fc
	if (ctx.cr6.eq) goto loc_899634FC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// addi r8,r9,9448
	ctx.r8.s64 = ctx.r9.s64 + 9448;
	// lhzx r7,r4,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// stbx r11,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
loc_899634FC:
	// stwx r11,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// b 0x89963620
	goto loc_89963620;
loc_89963504:
	// addi r11,r31,67
	ctx.r11.s64 = ctx.r31.s64 + 67;
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r7,r4,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// addi r6,r9,252
	ctx.r6.s64 = ctx.r9.s64 + 252;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stbx r5,r4,r11
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r5.u8);
	// stbx r5,r4,r10
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r5.u8);
	// beq cr6,0x89963620
	if (ctx.cr6.eq) goto loc_89963620;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
loc_8996353C:
	// lbzx r11,r4,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r30.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x89963554
	if (!ctx.cr6.gt) goto loc_89963554;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x89963558
	goto loc_89963558;
loc_89963554:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
loc_89963558:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x8996353c
	if (ctx.cr6.lt) goto loc_8996353C;
	// lbzx r11,r4,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89963620
	if (ctx.cr6.eq) goto loc_89963620;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stbx r11,r4,r30
	REX_STORE_U8(ctx.r4.u32 + ctx.r30.u32, ctx.r11.u8);
	// b 0x89963620
	goto loc_89963620;
loc_89963580:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r4,r30
	REX_STORE_U8(ctx.r4.u32 + ctx.r30.u32, ctx.r10.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89963620
	if (!ctx.cr6.eq) goto loc_89963620;
	// li r11,516
	ctx.r11.s64 = 516;
	// li r3,1
	ctx.r3.s64 = 1;
	// sthx r11,r4,r9
	REX_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r11.u16);
	// bl 0x8991f608
	ctx.lr = 0x899635A8;
	sub_8991F608(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89963620
	if (ctx.cr6.eq) goto loc_89963620;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// addi r8,r31,100
	ctx.r8.s64 = ctx.r31.s64 + 100;
	// addi r9,r7,12032
	ctx.r9.s64 = ctx.r7.s64 + 12032;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lhz r11,-4592(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// addi r3,r6,9448
	ctx.r3.s64 = ctx.r6.s64 + 9448;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// addi r6,r31,68
	ctx.r6.s64 = ctx.r31.s64 + 68;
	// rlwinm r10,r7,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// sthx r11,r4,r8
	REX_STORE_U16(ctx.r4.u32 + ctx.r8.u32, ctx.r11.u16);
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// stbx r8,r7,r3
	REX_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r8.u8);
	// stwx r11,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stbx r9,r4,r6
	REX_STORE_U8(ctx.r4.u32 + ctx.r6.u32, ctx.r9.u8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_89963604:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// blt cr6,0x89963604
	if (ctx.cr6.lt) goto loc_89963604;
	// stbx r9,r4,r30
	REX_STORE_U8(ctx.r4.u32 + ctx.r30.u32, ctx.r9.u8);
loc_89963620:
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

DEFINE_REX_FUNC(sub_89965528) {
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
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,592
	ctx.r10.s64 = ctx.r11.s64 + 592;
	// mulli r11,r9,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// addi r8,r10,111
	ctx.r8.s64 = ctx.r10.s64 + 111;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stbx r6,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u8);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// ble cr6,0x899655cc
	if (!ctx.cr6.gt) goto loc_899655CC;
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// addi r6,r10,28
	ctx.r6.s64 = ctx.r10.s64 + 28;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// addi r4,r10,20
	ctx.r4.s64 = ctx.r10.s64 + 20;
	// addi r31,r10,36
	ctx.r31.s64 = ctx.r10.s64 + 36;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r30,r10,32
	ctx.r30.s64 = ctx.r10.s64 + 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// lwzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
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
loc_899655CC:
	// bl 0x8992dbc0
	ctx.lr = 0x899655D0;
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

DEFINE_REX_FUNC(sub_89965920) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,592
	ctx.r10.s64 = ctx.r11.s64 + 592;
	// mulli r11,r9,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89965a4c
	if (ctx.cr6.eq) goto loc_89965A4C;
	// addi r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 + 100;
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r9,r7,112
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(112));
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8996597c
	if (ctx.cr6.eq) goto loc_8996597C;
	// addi r7,r10,102
	ctx.r7.s64 = ctx.r10.s64 + 102;
	// addi r6,r10,102
	ctx.r6.s64 = ctx.r10.s64 + 102;
	// lhzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// lhzx r4,r11,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x89965980
	if (ctx.cr6.eq) goto loc_89965980;
loc_8996597C:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_89965980:
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x899659a0
	if (!ctx.cr6.lt) goto loc_899659A0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_899659A0:
	// mulli r7,r9,112
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// addi r6,r10,48
	ctx.r6.s64 = ctx.r10.s64 + 48;
	// addi r5,r10,56
	ctx.r5.s64 = ctx.r10.s64 + 56;
	// addi r4,r10,60
	ctx.r4.s64 = ctx.r10.s64 + 60;
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// addi r31,r10,52
	ctx.r31.s64 = ctx.r10.s64 + 52;
	// lwzx r8,r7,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r6,r10,52
	ctx.r6.s64 = ctx.r10.s64 + 52;
	// lwzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// addi r5,r10,84
	ctx.r5.s64 = ctx.r10.s64 + 84;
	// addi r30,r10,84
	ctx.r30.s64 = ctx.r10.s64 + 84;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r8,r11,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r4,r10,108
	ctx.r4.s64 = ctx.r10.s64 + 108;
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwzx r9,r7,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r3,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwzx r9,r7,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// stwx r9,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// lbzx r9,r7,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89965a1c
	if (ctx.cr6.eq) goto loc_89965A1C;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x89965b14
	if (!ctx.cr6.eq) goto loc_89965B14;
	// addi r8,r10,66
	ctx.r8.s64 = ctx.r10.s64 + 66;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// ble cr6,0x89965a94
	if (!ctx.cr6.gt) goto loc_89965A94;
	// addi r9,r9,248
	ctx.r9.s64 = ctx.r9.s64 + 248;
	// b 0x89965b10
	goto loc_89965B10;
loc_89965A1C:
	// addi r9,r10,66
	ctx.r9.s64 = ctx.r10.s64 + 66;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,248
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 248, ctx.xer);
	// blt cr6,0x89965a40
	if (ctx.cr6.lt) goto loc_89965A40;
	// addi r7,r10,67
	ctx.r7.s64 = ctx.r10.s64 + 67;
	// li r8,255
	ctx.r8.s64 = 255;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// stbx r8,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u8);
	// b 0x89965b14
	goto loc_89965B14;
loc_89965A40:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x89965b14
	goto loc_89965B14;
loc_89965A4C:
	// addi r9,r10,60
	ctx.r9.s64 = ctx.r10.s64 + 60;
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// addi r6,r10,108
	ctx.r6.s64 = ctx.r10.s64 + 108;
	// addi r5,r10,52
	ctx.r5.s64 = ctx.r10.s64 + 52;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,-21584(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stwx r4,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u32);
	// blt cr6,0x89965ad8
	if (ctx.cr6.lt) goto loc_89965AD8;
	// beq cr6,0x89965aa8
	if (ctx.cr6.eq) goto loc_89965AA8;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x89965b14
	if (!ctx.cr6.lt) goto loc_89965B14;
	// addi r8,r10,66
	ctx.r8.s64 = ctx.r10.s64 + 66;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bgt cr6,0x89965aa0
	if (ctx.cr6.gt) goto loc_89965AA0;
loc_89965A94:
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x89965b14
	goto loc_89965B14;
loc_89965AA0:
	// addi r9,r9,251
	ctx.r9.s64 = ctx.r9.s64 + 251;
	// b 0x89965b10
	goto loc_89965B10;
loc_89965AA8:
	// addi r9,r10,111
	ctx.r9.s64 = ctx.r10.s64 + 111;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// cmplwi cr6,r7,60
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 60, ctx.xer);
	// bne cr6,0x89965b14
	if (!ctx.cr6.eq) goto loc_89965B14;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// stbx r7,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u8);
	// b 0x89965b14
	goto loc_89965B14;
loc_89965AD8:
	// addi r8,r10,84
	ctx.r8.s64 = ctx.r10.s64 + 84;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x89965af0
	if (!ctx.cr6.gt) goto loc_89965AF0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
loc_89965AF0:
	// addi r8,r10,66
	ctx.r8.s64 = ctx.r10.s64 + 66;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,160
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 160, ctx.xer);
	// blt cr6,0x89965b0c
	if (ctx.cr6.lt) goto loc_89965B0C;
	// li r9,1
	ctx.r9.s64 = 1;
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// b 0x89965b14
	goto loc_89965B14;
loc_89965B0C:
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
loc_89965B10:
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
loc_89965B14:
	// addi r9,r10,66
	ctx.r9.s64 = ctx.r10.s64 + 66;
	// addi r8,r10,67
	ctx.r8.s64 = ctx.r10.s64 + 67;
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stbx r7,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899678C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899678D0;
	__savegprlr_29(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mulli r6,r9,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// lwzx r8,r6,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// lwzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// addi r29,r11,206
	ctx.r29.s64 = ctx.r11.s64 + 206;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// stwx r8,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// lis r12,-8369
	ctx.r12.s64 = -548470784;
	// lwzx r8,r6,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r31,r11,200
	ctx.r31.s64 = ctx.r11.s64 + 200;
	// stwx r9,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// lwzx r5,r6,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lbzx r8,r10,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// stwx r5,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r9,r6,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// lis r12,8368
	ctx.r12.s64 = 548405248;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// stbx r5,r10,r4
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r5.u8);
	// lwzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r6,r7,0,8,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF00000;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// rlwinm r6,r6,0,10,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89969DF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89969E00;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r30,26864(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89934058
	ctx.lr = 0x89969E14;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996a0e0
	if (ctx.cr6.eq) goto loc_8996A0E0;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8991b880
	ctx.lr = 0x89969E24;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996a0e0
	if (ctx.cr6.eq) goto loc_8996A0E0;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r23,r10,-4592
	ctx.r23.s64 = ctx.r10.s64 + -4592;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lis r11,-8016
	ctx.r11.s64 = -525336576;
	// stw r23,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lhz r24,0(r23)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r23.u32 + 0);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// li r26,0
	ctx.r26.s64 = 0;
	// extsh r7,r24
	ctx.r7.s64 = ctx.r24.s16;
	// clrlwi r22,r30,16
	ctx.r22.u64 = ctx.r30.u32 & 0xFFFF;
	// mulli r28,r7,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// sth r24,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r24.u16);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stwx r26,r28,r9
	REX_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r26.u32);
	// stwx r26,r28,r8
	REX_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r26.u32);
	// stwx r22,r28,r10
	REX_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r22.u32);
	// ori r6,r11,33028
	ctx.r6.u64 = ctx.r11.u64 | 33028;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r6,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r6.u32);
	// bl 0x8991b538
	ctx.lr = 0x89969E88;
	sub_8991B538(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lis r5,96
	ctx.r5.s64 = 6291456;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r5,r28,r11
	REX_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x89915d78
	ctx.lr = 0x89969E9C;
	sub_89915D78(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991c578
	ctx.lr = 0x89969EA4;
	sub_8991C578(ctx, base);
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// addi r3,r4,9656
	ctx.r3.s64 = ctx.r4.s64 + 9656;
	// addi r9,r31,207
	ctx.r9.s64 = ctx.r31.s64 + 207;
	// addi r8,r31,200
	ctx.r8.s64 = ctx.r31.s64 + 200;
	// addi r7,r31,158
	ctx.r7.s64 = ctx.r31.s64 + 158;
	// addi r6,r31,168
	ctx.r6.s64 = ctx.r31.s64 + 168;
	// stbx r26,r28,r10
	REX_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r26.u8);
	// lbz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 76);
	// li r5,416
	ctx.r5.s64 = 416;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stbx r26,r28,r9
	REX_STORE_U8(ctx.r28.u32 + ctx.r9.u32, ctx.r26.u8);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// sthx r5,r28,r7
	REX_STORE_U16(ctx.r28.u32 + ctx.r7.u32, ctx.r5.u16);
	// stwx r4,r28,r6
	REX_STORE_U32(ctx.r28.u32 + ctx.r6.u32, ctx.r4.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stbx r3,r28,r8
	REX_STORE_U8(ctx.r28.u32 + ctx.r8.u32, ctx.r3.u8);
	// addi r29,r10,-29480
	ctx.r29.s64 = ctx.r10.s64 + -29480;
	// b 0x89969f00
	goto loc_89969F00;
loc_89969EF4:
	// lwz r22,84(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r24,80(r1)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r23,88(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_89969F00:
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r27,r11
	ctx.r8.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r7,r23,2
	ctx.r7.s64 = ctx.r23.s64 + 2;
	// rlwinm r21,r8,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// addi r5,r31,150
	ctx.r5.s64 = ctx.r31.s64 + 150;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lhzx r20,r9,r7
	ctx.r20.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lhzx r3,r21,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r10.u32);
	// addi r25,r31,148
	ctx.r25.s64 = ctx.r31.s64 + 148;
	// lwzx r7,r21,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r6.u32);
	// extsh r10,r20
	ctx.r10.s64 = ctx.r20.s16;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lwzx r9,r21,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r29.u32);
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// oris r9,r9,49152
	ctx.r9.u64 = ctx.r9.u64 | 3221225472;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ori r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 256;
	// lhzx r8,r6,r23
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r23.u32);
	// sthx r24,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r24.u16);
	// stwx r9,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r22,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r22.u32);
	// stwx r7,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r7.u32);
	// sthx r8,r30,r25
	REX_STORE_U16(ctx.r30.u32 + ctx.r25.u32, ctx.r8.u16);
	// stwx r26,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r26.u32);
	// bl 0x8991b538
	ctx.lr = 0x89969F80;
	sub_8991B538(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8991c578
	ctx.lr = 0x89969F88;
	sub_8991C578(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r6,r29,14
	ctx.r6.s64 = ctx.r29.s64 + 14;
	// std r27,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// addi r4,r29,18
	ctx.r4.s64 = ctx.r29.s64 + 18;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lhzx r8,r21,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r6.u32);
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// lhzx r9,r21,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r7.u32);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// lhzx r6,r21,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r5.u32);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// addi r24,r31,60
	ctx.r24.s64 = ctx.r31.s64 + 60;
	// lbzx r4,r21,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r4.u32);
	// addi r23,r31,162
	ctx.r23.s64 = ctx.r31.s64 + 162;
	// addi r22,r31,158
	ctx.r22.s64 = ctx.r31.s64 + 158;
	// addi r20,r31,160
	ctx.r20.s64 = ctx.r31.s64 + 160;
	// addi r19,r31,207
	ctx.r19.s64 = ctx.r31.s64 + 207;
	// addi r18,r31,206
	ctx.r18.s64 = ctx.r31.s64 + 206;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r16,r29,20
	ctx.r16.s64 = ctx.r29.s64 + 20;
	// addi r15,r29,22
	ctx.r15.s64 = ctx.r29.s64 + 22;
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwzx r14,r28,r11
	ctx.r14.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r11,r31,207
	ctx.r11.s64 = ctx.r31.s64 + 207;
	// lhzx r25,r30,r25
	ctx.r25.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r25.u32);
	// addi r17,r31,200
	ctx.r17.s64 = ctx.r31.s64 + 200;
	// lhzx r16,r21,r16
	ctx.r16.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r16.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mulli r25,r25,208
	ctx.r25.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(208));
	// stwx r14,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r14.u32);
	// lwzx r3,r28,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// stwx r9,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r9.u32);
	// stwx r3,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// sthx r6,r30,r23
	REX_STORE_U16(ctx.r30.u32 + ctx.r23.u32, ctx.r6.u16);
	// addi r9,r31,200
	ctx.r9.s64 = ctx.r31.s64 + 200;
	// sthx r6,r30,r22
	REX_STORE_U16(ctx.r30.u32 + ctx.r22.u32, ctx.r6.u16);
	// addi r7,r31,204
	ctx.r7.s64 = ctx.r31.s64 + 204;
	// stwx r8,r30,r24
	REX_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r8.u32);
	// sthx r26,r30,r20
	REX_STORE_U16(ctx.r30.u32 + ctx.r20.u32, ctx.r26.u16);
	// lbzx r6,r28,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r5,r21,r15
	ctx.r5.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r15.u32);
	// stbx r6,r30,r19
	REX_STORE_U8(ctx.r30.u32 + ctx.r19.u32, ctx.r6.u8);
	// stbx r4,r30,r18
	REX_STORE_U8(ctx.r30.u32 + ctx.r18.u32, ctx.r4.u8);
	// lbzx r11,r25,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r17.u32);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// ld r27,96(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r29,19
	ctx.r11.s64 = ctx.r29.s64 + 19;
	// stbx r3,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r3.u8);
	// addi r9,r31,66
	ctx.r9.s64 = ctx.r31.s64 + 66;
	// addi r6,r27,1
	ctx.r6.s64 = ctx.r27.s64 + 1;
	// lbzx r3,r28,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// stbx r3,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u8);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lbzx r8,r21,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r27,r31,68
	ctx.r27.s64 = ctx.r31.s64 + 68;
	// stbx r5,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r5.u8);
	// addi r7,r31,192
	ctx.r7.s64 = ctx.r31.s64 + 192;
	// sthx r16,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r16.u16);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// lwzx r6,r28,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmplwi cr6,r5,30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 30, ctx.xer);
	// stwx r6,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r6.u32);
	// stbx r8,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r8.u8);
	// blt cr6,0x89969ef4
	if (ctx.cr6.lt) goto loc_89969EF4;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// li r3,19
	ctx.r3.s64 = 19;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stb r26,12342(r10)
	REX_STORE_U8(ctx.r10.u32 + 12342, ctx.r26.u8);
	// stb r26,32555(r9)
	REX_STORE_U8(ctx.r9.u32 + 32555, ctx.r26.u8);
	// bl 0x899340e8
	ctx.lr = 0x8996A0C4;
	sub_899340E8(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x899340e8
	ctx.lr = 0x8996A0CC;
	sub_899340E8(ctx, base);
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x899340e8
	ctx.lr = 0x8996A0D4;
	sub_899340E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8996A0E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899701E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899701F0;
	__savegprlr_29(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mulli r6,r9,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// lwzx r8,r6,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// lwzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// addi r4,r11,69
	ctx.r4.s64 = ctx.r11.s64 + 69;
	// addi r29,r11,69
	ctx.r29.s64 = ctx.r11.s64 + 69;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r11,70
	ctx.r3.s64 = ctx.r11.s64 + 70;
	// stwx r8,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r31,r11,150
	ctx.r31.s64 = ctx.r11.s64 + 150;
	// lwzx r8,r6,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r9,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r8,r11,70
	ctx.r8.s64 = ctx.r11.s64 + 70;
	// lbzx r4,r6,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// addi r5,r11,71
	ctx.r5.s64 = ctx.r11.s64 + 71;
	// stbx r4,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r4.u8);
	// addi r30,r11,206
	ctx.r30.s64 = ctx.r11.s64 + 206;
	// addi r4,r11,71
	ctx.r4.s64 = ctx.r11.s64 + 71;
	// lbzx r3,r6,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// addi r29,r11,200
	ctx.r29.s64 = ctx.r11.s64 + 200;
	// lhzx r31,r10,r31
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// stbx r3,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r3.u8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r8,r6,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// lbzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// stbx r8,r10,r4
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u8);
	// extsh r5,r31
	ctx.r5.s64 = ctx.r31.s16;
	// lbzx r8,r6,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r29.u32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// and r9,r7,r12
	ctx.r9.u64 = ctx.r7.u64 & ctx.r12.u64;
	// mulli r5,r5,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// stbx r4,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u8);
	// lwzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lis r12,176
	ctx.r12.s64 = 11534336;
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// and r6,r7,r12
	ctx.r6.u64 = ctx.r7.u64 & ctx.r12.u64;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r4,r5,0,8,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF00000;
	// stwx r5,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// rlwinm r4,r4,0,10,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r3,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89970370) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r5,r10,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r4,r11,162
	ctx.r4.s64 = ctx.r11.s64 + 162;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addi r9,r11,160
	ctx.r9.s64 = ctx.r11.s64 + 160;
	// mulli r10,r3,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(208));
	// lhzx r8,r5,r4
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
	// lhzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// addi r7,r11,158
	ctx.r7.s64 = ctx.r11.s64 + 158;
	// srawi r8,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 6;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lis r3,-30320
	ctx.r3.s64 = -1987051520;
	// sthx r9,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u16);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r7,r11,164
	ctx.r7.s64 = ctx.r11.s64 + 164;
	// lwzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r3,r3,9016
	ctx.r3.s64 = ctx.r3.s64 + 9016;
	// rlwinm r8,r8,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// rlwinm r9,r9,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lwzx r7,r5,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// addis r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 3145728;
	// lhzx r31,r8,r3
	ctx.r31.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// srawi r8,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 4;
	// lhzx r3,r9,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// addi r7,r11,56
	ctx.r7.s64 = ctx.r11.s64 + 56;
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mullw r31,r9,r8
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwzx r9,r10,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// srawi r7,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 8;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// mulli r7,r7,224
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(224));
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// addi r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 + 52;
	// stwx r9,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwzx r9,r5,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r6,r11,69
	ctx.r6.s64 = ctx.r11.s64 + 69;
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// addi r3,r11,69
	ctx.r3.s64 = ctx.r11.s64 + 69;
	// addi r8,r11,70
	ctx.r8.s64 = ctx.r11.s64 + 70;
	// addi r7,r11,70
	ctx.r7.s64 = ctx.r11.s64 + 70;
	// addi r9,r11,71
	ctx.r9.s64 = ctx.r11.s64 + 71;
	// lbzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// stbx r6,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u8);
	// addi r6,r11,206
	ctx.r6.s64 = ctx.r11.s64 + 206;
	// lbzx r3,r5,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// addi r8,r11,71
	ctx.r8.s64 = ctx.r11.s64 + 71;
	// stbx r3,r10,r7
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r3.u8);
	// addi r7,r11,200
	ctx.r7.s64 = ctx.r11.s64 + 200;
	// lbzx r3,r5,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// stbx r3,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r3.u8);
	// addi r6,r11,200
	ctx.r6.s64 = ctx.r11.s64 + 200;
	// lbzx r8,r5,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// and r9,r4,r12
	ctx.r9.u64 = ctx.r4.u64 & ctx.r12.u64;
	// stbx r3,r10,r6
	REX_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r3.u8);
	// lis r12,176
	ctx.r12.s64 = 11534336;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// lwzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// and r6,r7,r12
	ctx.r6.u64 = ctx.r7.u64 & ctx.r12.u64;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r4,r5,0,8,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF00000;
	// stwx r5,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// rlwinm r4,r4,0,10,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r3,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89975880) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89975888;
	__savegprlr_29(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mulli r6,r9,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// lwzx r8,r6,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// lwzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// addi r4,r11,69
	ctx.r4.s64 = ctx.r11.s64 + 69;
	// addi r29,r11,69
	ctx.r29.s64 = ctx.r11.s64 + 69;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r11,70
	ctx.r3.s64 = ctx.r11.s64 + 70;
	// stwx r8,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r31,r11,70
	ctx.r31.s64 = ctx.r11.s64 + 70;
	// lwzx r8,r6,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r9,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r5,r11,206
	ctx.r5.s64 = ctx.r11.s64 + 206;
	// lbzx r4,r6,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// addi r8,r11,71
	ctx.r8.s64 = ctx.r11.s64 + 71;
	// stbx r4,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r4.u8);
	// addi r30,r11,71
	ctx.r30.s64 = ctx.r11.s64 + 71;
	// lis r12,-8369
	ctx.r12.s64 = -548470784;
	// lbzx r3,r6,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// stbx r3,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u8);
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// lbzx r8,r6,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r9,r10,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// stbx r8,r10,r30
	REX_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u8);
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// lbzx r8,r6,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// lis r12,8368
	ctx.r12.s64 = 548405248;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// stbx r5,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u8);
	// lwzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// and r9,r3,r12
	ctx.r9.u64 = ctx.r3.u64 & ctx.r12.u64;
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r8,0,8,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF00000;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// rlwinm r7,r7,0,10,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89975968) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x89975970;
	__savegprlr_25(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r6,r7,0,12,9
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// rlwinm r6,r6,0,9,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
	// stwx r6,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// bgt cr6,0x899759f0
	if (ctx.cr6.gt) goto loc_899759F0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899759d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899759D4;
	// bdzf 4*cr6+eq,0x899759f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899759F0;
	// bdzf 4*cr6+eq,0x899759f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899759F0;
	// bdzf 4*cr6+eq,0x899759f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899759F0;
	// bdzf 4*cr6+eq,0x899759f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899759F0;
	// bdzf 4*cr6+eq,0x899759dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899759DC;
	// bne cr6,0x899759e4
	if (!ctx.cr6.eq) goto loc_899759E4;
	// li r8,488
	ctx.r8.s64 = 488;
	// b 0x899759e8
	goto loc_899759E8;
loc_899759D4:
	// li r8,24
	ctx.r8.s64 = 24;
	// b 0x899759e8
	goto loc_899759E8;
loc_899759DC:
	// li r8,416
	ctx.r8.s64 = 416;
	// b 0x899759e8
	goto loc_899759E8;
loc_899759E4:
	// li r8,96
	ctx.r8.s64 = 96;
loc_899759E8:
	// addi r9,r11,158
	ctx.r9.s64 = ctx.r11.s64 + 158;
	// sthx r8,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_899759F0:
	// addi r8,r11,158
	ctx.r8.s64 = ctx.r11.s64 + 158;
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// addi r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 + 100;
	// addi r6,r7,9016
	ctx.r6.s64 = ctx.r7.s64 + 9016;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhzx r5,r10,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// addi r27,r11,104
	ctx.r27.s64 = ctx.r11.s64 + 104;
	// addi r31,r11,56
	ctx.r31.s64 = ctx.r11.s64 + 56;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// addi r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 + 44;
	// addi r4,r8,128
	ctx.r4.s64 = ctx.r8.s64 + 128;
	// rlwinm r3,r8,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// rlwinm r8,r4,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r30,r11,60
	ctx.r30.s64 = ctx.r11.s64 + 60;
	// stwx r9,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r29,r11,108
	ctx.r29.s64 = ctx.r11.s64 + 108;
	// addi r28,r11,68
	ctx.r28.s64 = ctx.r11.s64 + 68;
	// lhzx r4,r3,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r6.u32);
	// addi r26,r11,64
	ctx.r26.s64 = ctx.r11.s64 + 64;
	// lhzx r3,r8,r6
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// addi r25,r11,66
	ctx.r25.s64 = ctx.r11.s64 + 66;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r3,r11,67
	ctx.r3.s64 = ctx.r11.s64 + 67;
	// rlwinm r4,r7,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r5,r8,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// li r4,256
	ctx.r4.s64 = 256;
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// stwx r4,r10,r27
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r4.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// stwx r8,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u32);
	// li r4,516
	ctx.r4.s64 = 516;
	// stwx r7,r10,r29
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r7.u32);
	// stbx r5,r10,r28
	REX_STORE_U8(ctx.r10.u32 + ctx.r28.u32, ctx.r5.u8);
	// sthx r4,r10,r26
	REX_STORE_U16(ctx.r10.u32 + ctx.r26.u32, ctx.r4.u16);
	// stbx r6,r10,r25
	REX_STORE_U8(ctx.r10.u32 + ctx.r25.u32, ctx.r6.u8);
	// stbx r6,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u8);
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89975B78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x89975B80;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// addi r25,r30,8
	ctx.r25.s64 = ctx.r30.s64 + 8;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x89978f30
	if (ctx.cr6.gt) goto loc_89978F30;
	// lis r12,-30313
	ctx.r12.s64 = -1986592768;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23488
	ctx.r12.s64 = ctx.r12.s64 + 23488;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_89975C4C;
	case 1:
		goto loc_899767FC;
	case 2:
		goto loc_899767FC;
	case 3:
		goto loc_89976880;
	case 4:
		goto loc_899789D0;
	case 5:
		goto loc_89978B58;
	case 6:
		goto loc_8997724C;
	case 7:
		goto loc_89975D4C;
	case 8:
		goto loc_899761E0;
	case 9:
		goto loc_89976488;
	case 10:
		goto loc_899777AC;
	case 11:
		goto loc_899777AC;
	case 12:
		goto loc_89977950;
	case 13:
		goto loc_89977950;
	case 14:
		goto loc_89977358;
	case 15:
		goto loc_89977590;
	case 16:
		goto loc_89977590;
	case 17:
		goto loc_89976A60;
	case 18:
		goto loc_89976A60;
	case 19:
		goto loc_89976BD8;
	case 20:
		goto loc_89976BD8;
	case 21:
		goto loc_89976D68;
	case 22:
		goto loc_89976D68;
	case 23:
		goto loc_89976EF4;
	case 24:
		goto loc_89976EF4;
	case 25:
		goto loc_89977CC8;
	case 26:
		goto loc_89977CC8;
	case 27:
		goto loc_89977FB8;
	case 28:
		goto loc_89977FB8;
	case 29:
		goto loc_89977FB8;
	case 30:
		goto loc_89977FB8;
	case 31:
		goto loc_89977FB8;
	case 32:
		goto loc_89977FB8;
	case 33:
		goto loc_89978794;
	case 34:
		goto loc_89978CDC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89975C4C:
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89975d10
	if (ctx.cr6.eq) goto loc_89975D10;
	// bl 0x89974b50
	ctx.lr = 0x89975C64;
	sub_89974B50(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991db50
	ctx.lr = 0x89975C74;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89975d28
	if (ctx.cr6.eq) goto loc_89975D28;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-22864
	ctx.r29.s64 = ctx.r11.s64 + -22864;
loc_89975C88:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r30,195
	ctx.r10.s64 = ctx.r30.s64 + 195;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r5,r11,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89975cf8
	if (ctx.cr6.eq) goto loc_89975CF8;
	// addi r9,r29,2
	ctx.r9.s64 = ctx.r29.s64 + 2;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// lhzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lhzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// li r7,256
	ctx.r7.s64 = 256;
	// lwzx r11,r6,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rotlwi r4,r4,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lbzx r6,r3,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// bl 0x899a8438
	ctx.lr = 0x89975CF8;
	sub_899A8438(ctx, base);
loc_89975CF8:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89975c88
	if (ctx.cr6.lt) goto loc_89975C88;
	// b 0x89975d28
	goto loc_89975D28;
loc_89975D10:
	// bl 0x8991c8b8
	ctx.lr = 0x89975D14;
	sub_8991C8B8(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89975d28
	if (!ctx.cr6.eq) goto loc_89975D28;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x89936360
	ctx.lr = 0x89975D28;
	sub_89936360(ctx, base);
loc_89975D28:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x89933b88
	ctx.lr = 0x89975D44;
	sub_89933B88(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89975D4C:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89975D54;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// blt cr6,0x89977268
	if (ctx.cr6.lt) goto loc_89977268;
	// bl 0x89975880
	ctx.lr = 0x89975D6C;
	sub_89975880(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x89975ff8
	if (ctx.cr6.eq) goto loc_89975FF8;
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// li r15,0
	ctx.r15.s64 = 0;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x89975ea0
	if (ctx.cr6.gt) goto loc_89975EA0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89975dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89975DFC;
	// bdzf 4*cr6+eq,0x89975e40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89975E40;
	// bne cr6,0x89975e7c
	if (!ctx.cr6.eq) goto loc_89975E7C;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89975ea0
	if (ctx.cr6.eq) goto loc_89975EA0;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// li r3,45
	ctx.r3.s64 = 45;
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addis r7,r8,28
	ctx.r7.s64 = ctx.r8.s64 + 1835008;
	// stwx r7,r9,r31
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r8,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// bl 0x89936360
	ctx.lr = 0x89975DEC;
	sub_89936360(ctx, base);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stbx r5,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r5.u8);
	// b 0x89975ea0
	goto loc_89975EA0;
loc_89975DFC:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x89975ea0
	if (!ctx.cr6.eq) goto loc_89975EA0;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r4,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r4.u8);
	// b 0x89975ea0
	goto loc_89975EA0;
loc_89975E40:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89975ea0
	if (!ctx.cr6.eq) goto loc_89975EA0;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r4,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r4.u8);
	// b 0x89975ea0
	goto loc_89975EA0;
loc_89975E7C:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addis r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -65536;
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x89975ea0
	if (!ctx.cr6.eq) goto loc_89975EA0;
	// stbx r15,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r15.u8);
loc_89975EA0:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89975fa0
	if (ctx.cr6.lt) goto loc_89975FA0;
	// bne cr6,0x89975fe0
	if (!ctx.cr6.eq) goto loc_89975FE0;
	// addi r26,r30,184
	ctx.r26.s64 = ctx.r30.s64 + 184;
	// lbzx r11,r26,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r26,r31
	REX_STORE_U8(ctx.r26.u32 + ctx.r31.u32, ctx.r10.u8);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x89975eec
	if (!ctx.cr6.eq) goto loc_89975EEC;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// stbx r15,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r15.u8);
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// sthx r9,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89975EEC:
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// addi r27,r10,-26164
	ctx.r27.s64 = ctx.r10.s64 + -26164;
	// addi r28,r9,-22828
	ctx.r28.s64 = ctx.r9.s64 + -22828;
loc_89975F04:
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// lbzx r10,r26,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r31.u32);
	// addi r7,r28,4
	ctx.r7.s64 = ctx.r28.s64 + 4;
	// lwzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,158
	ctx.r6.s64 = ctx.r30.s64 + 158;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r4,r28,2
	ctx.r4.s64 = ctx.r28.s64 + 2;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lhzx r3,r6,r31
	ctx.r3.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// subfic r10,r10,48
	ctx.xer.ca = ctx.r10.u32 <= 48;
	ctx.r10.u64 = static_cast<uint64_t>(48) - ctx.r10.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// lhzx r24,r7,r11
	ctx.r24.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r10,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// lhzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// lhzx r23,r11,r28
	ctx.r23.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// rotlwi r10,r4,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// lwzx r11,r5,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// mullw r6,r24,r6
	ctx.r6.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r6.s32);
	// rotlwi r4,r23,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r23.u32, 16);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// bl 0x899cc518
	ctx.lr = 0x89975F74;
	sub_899CC518(ctx, base);
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x89975f04
	if (ctx.cr6.lt) goto loc_89975F04;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// sthx r9,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89975FA0:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89975fe0
	if (ctx.cr6.eq) goto loc_89975FE0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991db50
	ctx.lr = 0x89975FC4;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89975fe0
	if (ctx.cr6.eq) goto loc_89975FE0;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r30,184
	ctx.r10.s64 = ctx.r30.s64 + 184;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stbx r9,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r9.u8);
	// stbx r15,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r15.u8);
loc_89975FE0:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// sthx r9,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89975FF8:
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
	// lis r24,-30253
	ctx.r24.s64 = -1982660608;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// ori r29,r11,20077
	ctx.r29.u64 = ctx.r11.u64 | 20077;
	// addi r23,r10,9016
	ctx.r23.s64 = ctx.r10.s64 + 9016;
	// lwz r11,-9212(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + -9212);
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r6,r27,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// lis r4,-30294
	ctx.r4.s64 = -1985347584;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// srawi r9,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r8,r9,17
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFF;
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,12345
	ctx.r11.s64 = ctx.r9.s64 + 12345;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// rlwinm r8,r8,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhzx r8,r8,r23
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r23.u32);
	// rlwinm r9,r9,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// srawi r5,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 16;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r10,r26,16
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 16;
	// rlwinm r5,r5,4,13,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0x70000;
	// lhzx r26,r9,r23
	ctx.r26.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r23.u32);
	// stw r11,-9212(r24)
	REX_STORE_U32(ctx.r24.u32 + -9212, ctx.r11.u32);
	// clrlwi r9,r10,17
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFF;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r5,r26
	ctx.r5.s64 = ctx.r26.s16;
	// mullw r26,r8,r10
	ctx.r26.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r9,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// mullw r10,r5,r10
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r5,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r26.s32 >> 8;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r8,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 16;
	// rlwinm r11,r9,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFF;
	// rlwinm r22,r8,21,28,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0xC;
	// addi r4,r4,-22852
	ctx.r4.s64 = ctx.r4.s64 + -22852;
	// addi r26,r30,200
	ctx.r26.s64 = ctx.r30.s64 + 200;
	// addi r25,r30,207
	ctx.r25.s64 = ctx.r30.s64 + 207;
	// add r21,r10,r7
	ctx.r21.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwzx r4,r22,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r4.u32);
	// lis r9,-6
	ctx.r9.s64 = -393216;
	// lbzx r8,r26,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r31.u32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r25,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r31.u32);
	// addis r5,r21,-40
	ctx.r5.s64 = ctx.r21.s64 + -2621440;
	// bl 0x899d4640
	ctx.lr = 0x89976110;
	sub_899D4640(ctx, base);
	// lwz r11,-9212(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + -9212);
	// lbzx r8,r26,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r31.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lbzx r7,r25,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r31.u32);
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r5,r27,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// srawi r9,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r4,r9,17
	ctx.r4.u64 = ctx.r9.u32 & 0x7FFF;
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,12345
	ctx.r11.s64 = ctx.r9.s64 + 12345;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// rlwinm r9,r9,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r10,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 16;
	// lhzx r4,r4,r23
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r23.u32);
	// srawi r30,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 16;
	// rlwinm r10,r10,6,11,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1F0000;
	// lhzx r9,r9,r23
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r23.u32);
	// stw r11,-9212(r24)
	REX_STORE_U32(ctx.r24.u32 + -9212, ctx.r11.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi r31,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r4.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r4,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 16;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// rlwinm r11,r30,29,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0xFFF;
	// addi r30,r9,-22836
	ctx.r30.s64 = ctx.r9.s64 + -22836;
	// rlwinm r4,r4,20,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0x4;
	// add r29,r10,r6
	ctx.r29.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// add r6,r31,r5
	ctx.r6.u64 = ctx.r31.u64 + ctx.r5.u64;
	// lis r9,-3
	ctx.r9.s64 = -196608;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r4,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// addis r5,r29,32
	ctx.r5.s64 = ctx.r29.s64 + 2097152;
	// bl 0x899d4640
	ctx.lr = 0x899761D8;
	sub_899D4640(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899761E0:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899761E8;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// blt cr6,0x89977268
	if (ctx.cr6.lt) goto loc_89977268;
	// bl 0x89975880
	ctx.lr = 0x89976200;
	sub_89975880(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8997622c
	if (ctx.cr6.eq) goto loc_8997622C;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// cmpwi cr6,r8,15
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 15, ctx.xer);
	// bne cr6,0x8997622c
	if (!ctx.cr6.eq) goto loc_8997622C;
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_8997622C:
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// addi r9,r30,150
	ctx.r9.s64 = ctx.r30.s64 + 150;
	// li r15,0
	ctx.r15.s64 = 0;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lhzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8997634c
	if (ctx.cr6.gt) goto loc_8997634C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899762a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899762A4;
	// bdzf 4*cr6+eq,0x899762e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899762E8;
	// bne cr6,0x89976310
	if (!ctx.cr6.eq) goto loc_89976310;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// mulli r7,r9,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r5,r6,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8997634c
	if (ctx.cr6.eq) goto loc_8997634C;
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// addi r8,r30,164
	ctx.r8.s64 = ctx.r30.s64 + 164;
	// addi r7,r30,168
	ctx.r7.s64 = ctx.r30.s64 + 168;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lwzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stbx r6,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u8);
	// addis r3,r5,12
	ctx.r3.s64 = ctx.r5.s64 + 786432;
	// stwx r3,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r3.u32);
	// stwx r5,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u32);
	// b 0x8997634c
	goto loc_8997634C;
loc_899762A4:
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addis r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 65536;
	// stwx r6,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8997634c
	if (!ctx.cr6.eq) goto loc_8997634C;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r9,r29,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// stbx r6,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u8);
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stbx r3,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u8);
	// b 0x8997634c
	goto loc_8997634C;
loc_899762E8:
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// mulli r7,r9,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r5,r6,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8997634c
	if (!ctx.cr6.eq) goto loc_8997634C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// b 0x8997634c
	goto loc_8997634C;
loc_89976310:
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addis r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -65536;
	// stwx r6,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8997634c
	if (!ctx.cr6.eq) goto loc_8997634C;
	// mulli r9,r29,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rlwinm r6,r7,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stbx r6,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u8);
	// stbx r15,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r15.u8);
loc_8997634C:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899763f8
	if (ctx.cr6.lt) goto loc_899763F8;
	// bne cr6,0x89976458
	if (!ctx.cr6.eq) goto loc_89976458;
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bne cr6,0x89976384
	if (!ctx.cr6.eq) goto loc_89976384;
	// stbx r15,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r15.u8);
	// b 0x89976458
	goto loc_89976458;
loc_89976384:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89976458
	if (ctx.cr6.eq) goto loc_89976458;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// lbzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// lis r4,-30296
	ctx.r4.s64 = -1985478656;
	// addi r6,r30,162
	ctx.r6.s64 = ctx.r30.s64 + 162;
	// lwzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r7,r5,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFFFF000;
	// lwzx r29,r9,r31
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r8,r4,-26008
	ctx.r8.s64 = ctx.r4.s64 + -26008;
	// addis r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 262144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x899cbb90
	ctx.lr = 0x899763D0;
	sub_899CBB90(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// addi r8,r10,-26164
	ctx.r8.s64 = ctx.r10.s64 + -26164;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x89997ea0
	ctx.lr = 0x899763F4;
	sub_89997EA0(ctx, base);
	// b 0x89976458
	goto loc_89976458;
loc_899763F8:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89976458
	if (ctx.cr6.eq) goto loc_89976458;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991db50
	ctx.lr = 0x8997641C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89976458
	if (ctx.cr6.eq) goto loc_89976458;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89932a38
	ctx.lr = 0x8997642C;
	sub_89932A38(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89932cb0
	ctx.lr = 0x89976434;
	sub_89932CB0(ctx, base);
	// addi r9,r30,184
	ctx.r9.s64 = ctx.r30.s64 + 184;
	// addi r11,r30,185
	ctx.r11.s64 = ctx.r30.s64 + 185;
	// stbx r15,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r15.u8);
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r8,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
	// lbzx r9,r29,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stbx r5,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r5.u8);
loc_89976458:
	// addi r10,r30,185
	ctx.r10.s64 = ctx.r30.s64 + 185;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r11,r30,162
	ctx.r11.s64 = ctx.r30.s64 + 162;
	// addi r8,r9,-22808
	ctx.r8.s64 = ctx.r9.s64 + -22808;
	// lbzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r6,r7,1,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// lhzx r9,r6,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sthx r3,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u16);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89976488:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991bba0
	ctx.lr = 0x89976490;
	sub_8991BBA0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// blt cr6,0x89977268
	if (ctx.cr6.lt) goto loc_89977268;
	// bl 0x89975880
	ctx.lr = 0x899764A8;
	sub_89975880(ctx, base);
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// addi r27,r30,150
	ctx.r27.s64 = ctx.r30.s64 + 150;
	// li r15,0
	ctx.r15.s64 = 0;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// lhzx r10,r27,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x899765d4
	if (ctx.cr6.gt) goto loc_899765D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89976528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89976528;
	// bdzf 4*cr6+eq,0x8997656c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997656C;
	// bne cr6,0x899765b0
	if (!ctx.cr6.eq) goto loc_899765B0;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899765d4
	if (ctx.cr6.eq) goto loc_899765D4;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// li r3,45
	ctx.r3.s64 = 45;
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addis r7,r8,12
	ctx.r7.s64 = ctx.r8.s64 + 786432;
	// stwx r7,r9,r31
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r8,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// bl 0x89936360
	ctx.lr = 0x89976518;
	sub_89936360(ctx, base);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stbx r5,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r5.u8);
	// b 0x899765d4
	goto loc_899765D4;
loc_89976528:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x899765d4
	if (!ctx.cr6.eq) goto loc_899765D4;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// ori r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 4;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r4,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r4.u8);
	// b 0x899765d4
	goto loc_899765D4;
loc_8997656C:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x899765d4
	if (!ctx.cr6.eq) goto loc_899765D4;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r4,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r4.u8);
	// b 0x899765d4
	goto loc_899765D4;
loc_899765B0:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addis r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -65536;
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x899765d4
	if (!ctx.cr6.eq) goto loc_899765D4;
	// stbx r15,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r15.u8);
loc_899765D4:
	// addi r23,r30,184
	ctx.r23.s64 = ctx.r30.s64 + 184;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lbzx r11,r23,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89976600
	if (ctx.cr6.eq) goto loc_89976600;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8991db50
	ctx.lr = 0x899765F4;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89976760
	if (ctx.cr6.eq) goto loc_89976760;
	// b 0x89976650
	goto loc_89976650;
loc_89976600:
	// bl 0x89932b18
	ctx.lr = 0x89976604;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89932d30
	ctx.lr = 0x89976610;
	sub_89932D30(ctx, base);
	// lhzx r10,r27,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r31.u32);
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r8,r9,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r6,r7,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x89976760
	if (ctx.cr6.eq) goto loc_89976760;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991db50
	ctx.lr = 0x89976640;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89976760
	if (ctx.cr6.eq) goto loc_89976760;
	// li r11,8
	ctx.r11.s64 = 8;
	// stbx r11,r23,r31
	REX_STORE_U8(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u8);
loc_89976650:
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lis r9,-30296
	ctx.r9.s64 = -1985478656;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// addi r24,r30,52
	ctx.r24.s64 = ctx.r30.s64 + 52;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// lis r25,16
	ctx.r25.s64 = 1048576;
	// addi r27,r10,9016
	ctx.r27.s64 = ctx.r10.s64 + 9016;
	// addi r26,r9,-27640
	ctx.r26.s64 = ctx.r9.s64 + -27640;
	// addi r29,r8,-22800
	ctx.r29.s64 = ctx.r8.s64 + -22800;
loc_89976674:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lwzx r6,r24,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// addi r7,r29,2
	ctx.r7.s64 = ctx.r29.s64 + 2;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// lhzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// rlwinm r22,r3,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// rlwinm r11,r4,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// rlwinm r21,r9,1,22,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lhzx r10,r22,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r29.u32);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// lhzx r7,r22,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhzx r20,r11,r27
	ctx.r20.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// lhzx r21,r21,r27
	ctx.r21.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r27.u32);
	// rotlwi r19,r7,16
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// lhzx r5,r22,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r5.u32);
	// lwzx r7,r22,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r4.u32);
	// extsh r21,r21
	ctx.r21.s64 = ctx.r21.s16;
	// srawi r10,r19,4
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r19.s32 >> 4;
	// extsh r4,r20
	ctx.r4.s64 = ctx.r20.s16;
	// mullw r22,r11,r21
	ctx.r22.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// mullw r20,r10,r4
	ctx.r20.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r22,r22,8
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFF) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 8;
	// srawi r20,r20,8
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFF) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 8;
	// mullw r21,r10,r21
	ctx.r21.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r21.s32);
	// subf r10,r20,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r20.u64;
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r22,r5,r8
	ctx.r22.u64 = ctx.r5.u64 + ctx.r8.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// srawi r8,r21,8
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r21.s32 >> 8;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r4,r25,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r25.u64;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// extsh r6,r22
	ctx.r6.s64 = ctx.r22.s16;
	// bl 0x899cc518
	ctx.lr = 0x89976740;
	sub_899CC518(ctx, base);
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// blt cr6,0x89976674
	if (ctx.cr6.lt) goto loc_89976674;
	// lbzx r11,r23,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r31.u32);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stbx r11,r23,r31
	REX_STORE_U8(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u8);
loc_89976760:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// bge cr6,0x8997677c
	if (!ctx.cr6.lt) goto loc_8997677C;
	// li r10,128
	ctx.r10.s64 = 128;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_8997677C:
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 384, ctx.xer);
	// ble cr6,0x89976794
	if (!ctx.cr6.gt) goto loc_89976794;
	// li r10,384
	ctx.r10.s64 = 384;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_89976794:
	// lhzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r11,-124
	ctx.r5.s64 = ctx.r11.s64 + -124;
	// lwzx r9,r7,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// srawi r11,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 3;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r5,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899767FC:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991ba70
	ctx.lr = 0x89976804;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// blt cr6,0x89977268
	if (ctx.cr6.lt) goto loc_89977268;
	// bl 0x89975880
	ctx.lr = 0x8997681C;
	sub_89975880(ctx, base);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
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
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89976880:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89976888;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// blt cr6,0x89977268
	if (ctx.cr6.lt) goto loc_89977268;
	// bl 0x89975880
	ctx.lr = 0x899768A0;
	sub_89975880(ctx, base);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991db50
	ctx.lr = 0x899768C4;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// addi r22,r30,12
	ctx.r22.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r22,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// addi r6,r30,192
	ctx.r6.s64 = ctx.r30.s64 + 192;
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,29
	ctx.r11.u64 = ctx.r3.u32 & 0x7;
	// lbzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// stwx r11,r22,r31
	REX_STORE_U32(ctx.r22.u32 + ctx.r31.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
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
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// addi r11,r30,185
	ctx.r11.s64 = ctx.r30.s64 + 185;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x89978f30
	if (ctx.cr6.lt) goto loc_89978F30;
	// li r15,0
	ctx.r15.s64 = 0;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stbx r15,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r15.u8);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r18,r30,48
	ctx.r18.s64 = ctx.r30.s64 + 48;
	// addi r17,r30,52
	ctx.r17.s64 = ctx.r30.s64 + 52;
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
	// li r19,12
	ctx.r19.s64 = 12;
	// lis r20,2
	ctx.r20.s64 = 131072;
	// lis r23,256
	ctx.r23.s64 = 16777216;
	// lis r24,-30253
	ctx.r24.s64 = -1982660608;
	// addi r25,r11,9016
	ctx.r25.s64 = ctx.r11.s64 + 9016;
	// addi r16,r10,-22728
	ctx.r16.s64 = ctx.r10.s64 + -22728;
loc_8997698C:
	// lwzx r11,r22,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// rlwinm r7,r21,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 9) & 0xFFFFFE00;
	// lwzx r9,r31,r18
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r18.u32);
	// mulli r6,r11,42
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(42));
	// lwzx r8,r17,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// rlwinm r10,r6,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// divw r11,r7,r19
	ctx.r11.u64 = uint32_t((ctx.r19.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r7.s32 / ctx.r19.s32 : 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r11,r4,128
	ctx.r11.s64 = ctx.r4.s64 + 128;
	// rlwinm r3,r4,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// rlwinm r10,r11,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,96
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 96, ctx.xer);
	// lhzx r7,r3,r25
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r25.u32);
	// lhzx r5,r10,r25
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r25.u32);
	// rotlwi r6,r7,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// rotlwi r4,r5,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r27,r10,r8
	ctx.r27.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r26,r3,r20
	ctx.r26.u64 = ctx.r3.u64 + ctx.r20.u64;
	// ble cr6,0x89976a44
	if (!ctx.cr6.gt) goto loc_89976A44;
	// cmpwi cr6,r28,416
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 416, ctx.xer);
	// bge cr6,0x89976a44
	if (!ctx.cr6.lt) goto loc_89976A44;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// addi r30,r16,-4
	ctx.r30.s64 = ctx.r16.s64 + -4;
loc_899769FC:
	// lwz r10,-9516(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + -9516);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lhz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// subf r10,r10,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r10.u64;
	// lwzu r11,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// rlwinm r10,r10,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899cda00
	ctx.lr = 0x89976A2C;
	sub_899CDA00(ctx, base);
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x899769fc
	if (ctx.cr6.lt) goto loc_899769FC;
loc_89976A44:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x8997698c
	if (ctx.cr6.lt) goto loc_8997698C;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89976A60:
	// addi r27,r30,188
	ctx.r27.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r27,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89976aa8
	if (ctx.cr6.lt) goto loc_89976AA8;
	// beq cr6,0x89976a8c
	if (ctx.cr6.eq) goto loc_89976A8C;
loc_89976A74:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x89978f30
	if (!ctx.cr6.lt) goto loc_89978F30;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89975ab0
	ctx.lr = 0x89976A84;
	sub_89975AB0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89976A8C:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89975968
	ctx.lr = 0x89976A94;
	sub_89975968(ctx, base);
loc_89976A94:
	// lbzx r11,r27,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r27,r31
	REX_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89976AA8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991ba70
	ctx.lr = 0x89976AB0;
	sub_8991BA70(ctx, base);
	// extsh r26,r3
	ctx.r26.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x89976ad0
	if (!ctx.cr6.lt) goto loc_89976AD0;
loc_89976AC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89976AD0:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89975880
	ctx.lr = 0x89976AD8;
	sub_89975880(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r29,r30,193
	ctx.r29.s64 = ctx.r30.s64 + 193;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r28,r9,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r28,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// rlwinm r7,r11,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89976a94
	if (!ctx.cr6.eq) goto loc_89976A94;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r27,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89976b1c
	if (ctx.cr6.eq) goto loc_89976B1C;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// b 0x89976b3c
	goto loc_89976B3C;
loc_89976B1C:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x89936360
	ctx.lr = 0x89976B3C;
	sub_89936360(ctx, base);
loc_89976B3C:
	// lwzx r11,r27,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u32);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x89976b84
	if (!ctx.cr6.eq) goto loc_89976B84;
	// mulli r10,r26,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r26.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// lbzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stbx r4,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
	// lbzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lbzx r8,r28,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// subfic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 <= 4294967295;
	ctx.r7.u64 = static_cast<uint64_t>(-1) - ctx.r9.u64;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stbx r6,r28,r29
	REX_STORE_U8(ctx.r28.u32 + ctx.r29.u32, ctx.r6.u8);
loc_89976B84:
	// lwzx r11,r27,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
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
	// lwzx r11,r9,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
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
	// stwx r3,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89976BD8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89976BE0;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x89976ac0
	if (ctx.cr6.lt) goto loc_89976AC0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89975880
	ctx.lr = 0x89976BF8;
	sub_89975880(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// mulli r9,r29,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x89976c98
	if (ctx.cr6.eq) goto loc_89976C98;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// stwx r4,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r4.u32);
	// add r29,r8,r10
	ctx.r29.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r7,r30,36
	ctx.r7.s64 = ctx.r30.s64 + 36;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// add r28,r8,r10
	ctx.r28.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stwx r11,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stwx r10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stwx r8,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r8.u32);
loc_89976C98:
	// addi r11,r30,64
	ctx.r11.s64 = ctx.r30.s64 + 64;
	// addi r10,r30,64
	ctx.r10.s64 = ctx.r30.s64 + 64;
	// addi r7,r30,66
	ctx.r7.s64 = ctx.r30.s64 + 66;
	// addi r6,r30,66
	ctx.r6.s64 = ctx.r30.s64 + 66;
	// addi r5,r30,67
	ctx.r5.s64 = ctx.r30.s64 + 67;
	// lhzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// addi r3,r30,67
	ctx.r3.s64 = ctx.r30.s64 + 67;
	// addi r29,r30,68
	ctx.r29.s64 = ctx.r30.s64 + 68;
	// addi r8,r30,68
	ctx.r8.s64 = ctx.r30.s64 + 68;
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
	// addi r28,r30,44
	ctx.r28.s64 = ctx.r30.s64 + 44;
	// sthx r4,r10,r31
	REX_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r4.u16);
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// lbzx r10,r9,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stbx r10,r6,r31
	REX_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r7,r30,104
	ctx.r7.s64 = ctx.r30.s64 + 104;
	// lbzx r6,r9,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// addi r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 + 104;
	// stbx r6,r3,r31
	REX_STORE_U8(ctx.r3.u32 + ctx.r31.u32, ctx.r6.u8);
	// lbzx r5,r9,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// stbx r5,r8,r31
	REX_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u8);
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// stwx r11,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwzx r4,r9,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwzx r8,r9,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stwx r8,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rotlwi r7,r4,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r8,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// mullw r7,r10,r7
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lwzx r11,r9,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwzx r6,r3,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// srawi r10,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 8;
	// mullw r5,r6,r5
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwzx r11,r9,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r11,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89976D68:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991ba70
	ctx.lr = 0x89976D70;
	sub_8991BA70(ctx, base);
	// extsh r27,r3
	ctx.r27.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x89976ac0
	if (ctx.cr6.lt) goto loc_89976AC0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89975880
	ctx.lr = 0x89976D88;
	sub_89975880(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhzx r28,r10,r31
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// beq cr6,0x89976e30
	if (ctx.cr6.eq) goto loc_89976E30;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x89976e60
	if (!ctx.cr6.eq) goto loc_89976E60;
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// beq cr6,0x89976dc4
	if (ctx.cr6.eq) goto loc_89976DC4;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bne cr6,0x89976dcc
	if (!ctx.cr6.eq) goto loc_89976DCC;
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x89976dc8
	goto loc_89976DC8;
loc_89976DC4:
	// li r11,23
	ctx.r11.s64 = 23;
loc_89976DC8:
	// stwx r11,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u32);
loc_89976DCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stwx r11,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x89976DDC;
	sub_8991B610(ctx, base);
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r9,1
	ctx.r9.s64 = 1;
	// sthx r9,r10,r31
	REX_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u16);
	// mulli r10,r27,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// extsh r7,r28
	ctx.r7.s64 = ctx.r28.s16;
	// addi r8,r30,193
	ctx.r8.s64 = ctx.r30.s64 + 193;
	// mulli r7,r7,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lbzx r4,r9,r31
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// lbzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// or r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stbx r6,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// lbzx r10,r7,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// lbzx r4,r9,r31
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// subfic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stbx r6,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89976E30:
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r7,r30,192
	ctx.r7.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r7,r31
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// and r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ctx.r4.u64;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x89936360
	ctx.lr = 0x89976E60;
	sub_89936360(ctx, base);
loc_89976E60:
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r6.u32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// stwx r9,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r7,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r4,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r4.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89976EF4:
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89976f24
	if (ctx.cr6.lt) goto loc_89976F24;
	// bne cr6,0x89976a74
	if (!ctx.cr6.eq) goto loc_89976A74;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89975968
	ctx.lr = 0x89976F10;
	sub_89975968(ctx, base);
loc_89976F10:
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89976F24:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991ba70
	ctx.lr = 0x89976F2C;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89976ac0
	if (ctx.cr6.lt) goto loc_89976AC0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89975880
	ctx.lr = 0x89976F44;
	sub_89975880(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lhzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r7,r8,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// rlwinm r5,r9,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x89976f10
	if (!ctx.cr6.eq) goto loc_89976F10;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x89977174
	if (ctx.cr6.eq) goto loc_89977174;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x89976fac
	if (ctx.cr6.eq) goto loc_89976FAC;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x89978f30
	if (ctx.cr6.lt) goto loc_89978F30;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// b 0x899771ac
	goto loc_899771AC;
loc_89976FAC:
	// addi r28,r30,189
	ctx.r28.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r28,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899770b0
	if (ctx.cr6.lt) goto loc_899770B0;
	// beq cr6,0x89976ff0
	if (ctx.cr6.eq) goto loc_89976FF0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x89978f30
	if (!ctx.cr6.lt) goto loc_89978F30;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// stbx r10,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r10.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// sthx r9,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// b 0x899771ac
	goto loc_899771AC;
loc_89976FF0:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r7,r11,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x89977020
	if (!ctx.cr6.eq) goto loc_89977020;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r10.u8);
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u8);
loc_89977020:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991db50
	ctx.lr = 0x89977030;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r27,40
	ctx.r27.s64 = 2621440;
	// addi r26,r10,-22704
	ctx.r26.s64 = ctx.r10.s64 + -22704;
loc_89977050:
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lhzx r9,r11,r26
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// bne cr6,0x89977068
	if (!ctx.cr6.eq) goto loc_89977068;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89977068:
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x899cba10
	ctx.lr = 0x89977090;
	sub_899CBA10(ctx, base);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x89977050
	if (ctx.cr6.lt) goto loc_89977050;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899770B0:
	// addi r11,r30,185
	ctx.r11.s64 = ctx.r30.s64 + 185;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// blt cr6,0x89978f30
	if (ctx.cr6.lt) goto loc_89978F30;
	// addi r29,r30,184
	ctx.r29.s64 = ctx.r30.s64 + 184;
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// li r15,0
	ctx.r15.s64 = 0;
	// addi r8,r9,-22704
	ctx.r8.s64 = ctx.r9.s64 + -22704;
	// stbx r15,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r15.u8);
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// lbzx r7,r29,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// rotlwi r6,r7,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lhzx r5,r6,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// bne cr6,0x89977100
	if (!ctx.cr6.eq) goto loc_89977100;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89977100:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// li r9,-6
	ctx.r9.s64 = -6;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x899cfa40
	ctx.lr = 0x89977124;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// stbx r9,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r9.u8);
	// ori r10,r8,128
	ctx.r10.u64 = ctx.r8.u64 | 128;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r7,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u8);
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
	// lbzx r11,r28,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// stbx r15,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r15.u8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89977174:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r3,45
	ctx.r3.s64 = 45;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// bl 0x89936360
	ctx.lr = 0x899771A0;
	sub_89936360(ctx, base);
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// li r8,1
	ctx.r8.s64 = 1;
	// sthx r8,r9,r31
	REX_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u16);
loc_899771AC:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lhzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r9,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwzx r8,r29,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r28,r6,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r28.u32);
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r6,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_8997724C:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991ba70
	ctx.lr = 0x89977254;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x89977274
	if (!ctx.cr6.lt) goto loc_89977274;
loc_89977264:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_89977268:
	// bl 0x89974908
	ctx.lr = 0x8997726C;
	sub_89974908(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89977274:
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x8997729c
	if (!ctx.cr6.eq) goto loc_8997729C;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899772a0
	if (ctx.cr6.eq) goto loc_899772A0;
loc_8997729C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899772A0:
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r9,r11,30,0,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xC0000000;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// rlwinm r8,r10,0,2,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// bl 0x89975880
	ctx.lr = 0x899772BC;
	sub_89975880(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stwx r6,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r6.u32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r6,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r5,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89977358:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991ba70
	ctx.lr = 0x89977360;
	sub_8991BA70(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// blt cr6,0x89977268
	if (ctx.cr6.lt) goto loc_89977268;
	// bl 0x89975880
	ctx.lr = 0x89977378;
	sub_89975880(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89977398
	if (ctx.cr6.eq) goto loc_89977398;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x899773a4
	if (!ctx.cr6.eq) goto loc_899773A4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// b 0x8997739c
	goto loc_8997739C;
loc_89977398:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8997739C:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// sthx r9,r10,r31
	REX_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u16);
loc_899773A4:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lhzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// addi r27,r30,36
	ctx.r27.s64 = ctx.r30.s64 + 36;
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r26,r30,32
	ctx.r26.s64 = ctx.r30.s64 + 32;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r7,r29,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r25,r5,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwzx r6,r25,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r8,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r8.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r5,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r4,r26,r31
	REX_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r4.u32);
	// bgt cr6,0x89978f30
	if (ctx.cr6.gt) goto loc_89978F30;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899774c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899774C0;
	// bdzf 4*cr6+eq,0x89977510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89977510;
	// bne cr6,0x89977560
	if (!ctx.cr6.eq) goto loc_89977560;
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x8997748C;
	sub_89936360(ctx, base);
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lbzx r8,r29,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// lwzx r7,r11,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stbx r5,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r5.u8);
	// addis r6,r7,-16
	ctx.r6.s64 = ctx.r7.s64 + -1048576;
	// stwx r6,r9,r31
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u32);
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899774C0:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addis r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -65536;
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,195
	ctx.r10.s64 = ctx.r30.s64 + 195;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stbx r4,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89977510:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// lbzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
	// addi r10,r30,195
	ctx.r10.s64 = ctx.r30.s64 + 195;
	// subfic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 <= 4294967295;
	ctx.r9.u64 = static_cast<uint64_t>(-1) - ctx.r9.u64;
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// and r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 & ctx.r7.u64;
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stbx r3,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89977560:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89977590:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991ba70
	ctx.lr = 0x89977598;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// blt cr6,0x89977268
	if (ctx.cr6.lt) goto loc_89977268;
	// bl 0x89975880
	ctx.lr = 0x899775B0;
	sub_89975880(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// beq cr6,0x899776d0
	if (ctx.cr6.eq) goto loc_899776D0;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x899775f8
	if (ctx.cr6.eq) goto loc_899775F8;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x89978f30
	if (ctx.cr6.lt) goto loc_89978F30;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// b 0x8997770c
	goto loc_8997770C;
loc_899775F8:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r10,r30,194
	ctx.r10.s64 = ctx.r30.s64 + 194;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r7,r30,192
	ctx.r7.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r7,r31
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// and r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ctx.r4.u64;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89977628
	if (!ctx.cr6.eq) goto loc_89977628;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x89977704
	goto loc_89977704;
loc_89977628:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991db50
	ctx.lr = 0x89977638;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lis r4,-30294
	ctx.r4.s64 = -1985347584;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lbz r10,7935(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 7935);
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r8,r3,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r4,-22688
	ctx.r6.s64 = ctx.r4.s64 + -22688;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// rlwinm r4,r7,3,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x4;
	// srawi r3,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// clrlwi r9,r3,17
	ctx.r9.u64 = ctx.r3.u32 & 0x7FFF;
	// lis r7,-30294
	ctx.r7.s64 = -1985347584;
	// mulli r5,r9,193
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(193));
	// lwzx r9,r4,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r11,r5,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0x1FFFF;
	// rotlwi r3,r10,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r10,r7,-22680
	ctx.r10.s64 = ctx.r7.s64 + -22680;
	// addi r6,r11,160
	ctx.r6.s64 = ctx.r11.s64 + 160;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addis r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -262144;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lwzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// bl 0x899cb940
	ctx.lr = 0x899776C8;
	sub_899CB940(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899776D0:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r10,r30,194
	ctx.r10.s64 = ctx.r30.s64 + 194;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r7,r30,192
	ctx.r7.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r7,r31
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// and r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ctx.r4.u64;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x89977700;
	sub_89936360(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_89977704:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_8997770C:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r29,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lhzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r7,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwzx r8,r29,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r3,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899777AC:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899777B4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// blt cr6,0x89977268
	if (ctx.cr6.lt) goto loc_89977268;
	// bl 0x89975880
	ctx.lr = 0x899777CC;
	sub_89975880(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// beq cr6,0x89977874
	if (ctx.cr6.eq) goto loc_89977874;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// beq cr6,0x89977814
	if (ctx.cr6.eq) goto loc_89977814;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x89978f30
	if (ctx.cr6.lt) goto loc_89978F30;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// b 0x899778b0
	goto loc_899778B0;
loc_89977814:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x89978f30
	if (ctx.cr6.lt) goto loc_89978F30;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r15,0
	ctx.r15.s64 = 0;
	// stbx r15,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r15.u8);
	// lhzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x899778b0
	if (!ctx.cr6.lt) goto loc_899778B0;
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x89977850
	if (ctx.cr6.eq) goto loc_89977850;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x89977858
	if (!ctx.cr6.eq) goto loc_89977858;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x89977854
	goto loc_89977854;
loc_89977850:
	// li r11,12
	ctx.r11.s64 = 12;
loc_89977854:
	// stwx r11,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u32);
loc_89977858:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x89977860;
	sub_89936360(ctx, base);
	// stwx r15,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r15.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991b610
	ctx.lr = 0x8997786C;
	sub_8991B610(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89977874:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r10,r30,194
	ctx.r10.s64 = ctx.r30.s64 + 194;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r7,r30,192
	ctx.r7.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r7,r31
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// and r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ctx.r4.u64;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x89936360
	ctx.lr = 0x899778A4;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_899778B0:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r29,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lhzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r7,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwzx r8,r29,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r3,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r3.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89977950:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89977958;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// blt cr6,0x89977268
	if (ctx.cr6.lt) goto loc_89977268;
	// bl 0x89975880
	ctx.lr = 0x89977970;
	sub_89975880(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x89977b58
	if (ctx.cr6.gt) goto loc_89977B58;
	// beq cr6,0x89977a40
	if (ctx.cr6.eq) goto loc_89977A40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899779e4
	if (ctx.cr6.eq) goto loc_899779E4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x89977b60
	if (!ctx.cr6.eq) goto loc_89977B60;
	// addi r11,r30,194
	ctx.r11.s64 = ctx.r30.s64 + 194;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89977b60
	if (!ctx.cr6.eq) goto loc_89977B60;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// b 0x89977b60
	goto loc_89977B60;
loc_899779E4:
	// addi r11,r30,194
	ctx.r11.s64 = ctx.r30.s64 + 194;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89977b84
	if (!ctx.cr6.eq) goto loc_89977B84;
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x89977a20
	if (ctx.cr6.eq) goto loc_89977A20;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x89977a28
	if (!ctx.cr6.eq) goto loc_89977A28;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x89977a24
	goto loc_89977A24;
loc_89977A20:
	// li r11,10
	ctx.r11.s64 = 10;
loc_89977A24:
	// stwx r11,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u32);
loc_89977A28:
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stwx r11,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x89977A38;
	sub_8991B610(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89977A40:
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991db50
	ctx.lr = 0x89977A50;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r11,r9,-22672
	ctx.r11.s64 = ctx.r9.s64 + -22672;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r9,r30,200
	ctx.r9.s64 = ctx.r30.s64 + 200;
	// lwzx r10,r7,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// neg r3,r6
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// andc r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 & ~ctx.r6.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lbzx r6,r9,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r3,r7,4,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0x8;
	// lhzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// lhzx r7,r3,r5
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lwzx r5,r3,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// rotlwi r11,r7,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x899a0380
	ctx.lr = 0x89977AB8;
	sub_899A0380(ctx, base);
	// extsb r6,r3
	ctx.r6.s64 = ctx.r3.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// stwx r10,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r9,r29,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r8,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r30,32
	ctx.r7.s64 = ctx.r30.s64 + 32;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r10,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r8,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89977B58:
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x89977c20
	if (ctx.cr6.eq) goto loc_89977C20;
loc_89977B60:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// blt cr6,0x89978f30
	if (ctx.cr6.lt) goto loc_89978F30;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
loc_89977B84:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r29,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lhzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r9,r29,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r8,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r8.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r8,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89977C20:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x89978f30
	if (ctx.cr6.lt) goto loc_89978F30;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// stbx r8,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r9,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// stwx r10,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r8,r29,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,180(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stwx r28,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r28.u32);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r11,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r10,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r9,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89977CC8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89977CD0;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// blt cr6,0x89977268
	if (ctx.cr6.lt) goto loc_89977268;
	// bl 0x89975880
	ctx.lr = 0x89977CE8;
	sub_89975880(ctx, base);
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// beq cr6,0x89977d1c
	if (ctx.cr6.eq) goto loc_89977D1C;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bne cr6,0x89977d30
	if (!ctx.cr6.eq) goto loc_89977D30;
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 23, ctx.xer);
	// b 0x89977d2c
	goto loc_89977D2C;
loc_89977D1C:
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 24, ctx.xer);
loc_89977D2C:
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
loc_89977D30:
	// mulli r9,r29,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// blt cr6,0x89978f30
	if (ctx.cr6.lt) goto loc_89978F30;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,150
	ctx.r8.s64 = ctx.r30.s64 + 150;
	// oris r7,r10,16384
	ctx.r7.u64 = ctx.r10.u64 | 1073741824;
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lhzx r10,r8,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89977ddc
	if (ctx.cr6.eq) goto loc_89977DDC;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x89977d94
	if (ctx.cr6.eq) goto loc_89977D94;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x89977ed4
	if (ctx.cr6.lt) goto loc_89977ED4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// b 0x89977e3c
	goto loc_89977E3C;
loc_89977D94:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r7,r30,192
	ctx.r7.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r7,r31
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// and r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ctx.r4.u64;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89977ed4
	if (!ctx.cr6.eq) goto loc_89977ED4;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89977ed4
	if (!ctx.cr6.eq) goto loc_89977ED4;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// b 0x89977e34
	goto loc_89977E34;
loc_89977DDC:
	// addi r11,r30,64
	ctx.r11.s64 = ctx.r30.s64 + 64;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89977df8
	if (ctx.cr6.eq) goto loc_89977DF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// b 0x89977ed4
	goto loc_89977ED4;
loc_89977DF8:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r7,r30,192
	ctx.r7.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r7,r31
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// and r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ctx.r4.u64;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89977ed4
	if (ctx.cr6.eq) goto loc_89977ED4;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// addi r9,r30,180
	ctx.r9.s64 = ctx.r30.s64 + 180;
	// li r11,1
	ctx.r11.s64 = 1;
	// sthx r11,r10,r31
	REX_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u16);
	// stbx r11,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u8);
loc_89977E34:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x89977E3C;
	sub_89936360(ctx, base);
loc_89977E3C:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r29,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lhzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r28,r30,32
	ctx.r28.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r27,r6,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r27.u32);
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r9,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r9.u32);
loc_89977ED4:
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// beq cr6,0x89977f04
	if (ctx.cr6.eq) goto loc_89977F04;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bne cr6,0x89977f20
	if (!ctx.cr6.eq) goto loc_89977F20;
	// lwzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// lis r11,18
	ctx.r11.s64 = 1179648;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// sthx r7,r9,r31
	REX_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u16);
	// b 0x89977f24
	goto loc_89977F24;
loc_89977F04:
	// lwzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// lis r11,-18
	ctx.r11.s64 = -1179648;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subfic r7,r8,384
	ctx.xer.ca = ctx.r8.u32 <= 384;
	ctx.r7.u64 = static_cast<uint64_t>(384) - ctx.r8.u64;
	// sthx r7,r9,r31
	REX_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u16);
	// b 0x89977f24
	goto loc_89977F24;
loc_89977F20:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_89977F24:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r4,r8,9016
	ctx.r4.s64 = ctx.r8.s64 + 9016;
	// lhzx r3,r10,r31
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// rlwinm r10,r3,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// lwzx r5,r31,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r11,r3,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// mullw r30,r9,r10
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r4,r10,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// srawi r10,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 8;
	// rlwinm r3,r3,13,0,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0xFFFFE000;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// stwx r11,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89977FB8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991ba70
	ctx.lr = 0x89977FC0;
	sub_8991BA70(ctx, base);
	// extsh r19,r3
	ctx.r19.s64 = ctx.r3.s16;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x89977264
	if (ctx.cr6.lt) goto loc_89977264;
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// addi r9,r30,150
	ctx.r9.s64 = ctx.r30.s64 + 150;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// lbzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// lhzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x89978610
	if (ctx.cr6.gt) goto loc_89978610;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89978090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89978090;
	// bdzf 4*cr6+eq,0x899780cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899780CC;
	// bdzf 4*cr6+eq,0x89978560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89978560;
	// bne cr6,0x899785d8
	if (!ctx.cr6.eq) goto loc_899785D8;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// mulli r7,r19,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r19.u64 * static_cast<uint64_t>(208));
	// addi r6,r30,192
	ctx.r6.s64 = ctx.r30.s64 + 192;
	// lbzx r3,r7,r6
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// and r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 & ctx.r3.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89978610
	if (ctx.cr6.eq) goto loc_89978610;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// ori r7,r9,20077
	ctx.r7.u64 = ctx.r9.u64 | 20077;
	// addi r6,r8,-22656
	ctx.r6.s64 = ctx.r8.s64 + -22656;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r4,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 16;
	// clrlwi r11,r4,17
	ctx.r11.u64 = ctx.r4.u32 & 0x7FFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,17,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFF;
	// lbzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stwx r8,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x89978084;
	sub_8991B610(ctx, base);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stbx r6,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r6.u8);
loc_89978090:
	// mulli r11,r19,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r19.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r11,-128
	ctx.r7.s64 = ctx.r11.s64 + -128;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sthx r5,r9,r31
	REX_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r5.u16);
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// bne cr6,0x89978610
	if (!ctx.cr6.eq) goto loc_89978610;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u8);
	// b 0x89978610
	goto loc_89978610;
loc_899780CC:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// mulli r6,r19,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r19.u64 * static_cast<uint64_t>(208));
	// addi r5,r30,192
	ctx.r5.s64 = ctx.r30.s64 + 192;
	// lbzx r11,r6,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// and r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 & ctx.r11.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89978108
	if (!ctx.cr6.eq) goto loc_89978108;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x89978610
	goto loc_89978610;
loc_89978108:
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// addi r11,r11,-27
	ctx.r11.s64 = ctx.r11.s64 + -27;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x89978610
	if (ctx.cr6.gt) goto loc_89978610;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89978298
	if (ctx.cr6.eq) goto loc_89978298;
	// bdz 0x89978138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_89978138;
	// bdz 0x89978404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_89978404;
	// bdz 0x8997840c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8997840C;
	// bdz 0x89978414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_89978414;
	// b 0x8997841c
	goto loc_8997841C;
loc_89978138:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89932b18
	ctx.lr = 0x89978140;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89932d30
	ctx.lr = 0x8997814C;
	sub_89932D30(ctx, base);
	// addi r23,r30,158
	ctx.r23.s64 = ctx.r30.s64 + 158;
	// lhzx r11,r23,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r31.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bge cr6,0x89978168
	if (!ctx.cr6.lt) goto loc_89978168;
	// li r11,128
	ctx.r11.s64 = 128;
	// sthx r11,r23,r31
	REX_STORE_U16(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u16);
loc_89978168:
	// lhzx r11,r23,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r31.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 384, ctx.xer);
	// ble cr6,0x89978180
	if (!ctx.cr6.gt) goto loc_89978180;
	// li r11,384
	ctx.r11.s64 = 384;
	// sthx r11,r23,r31
	REX_STORE_U16(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u16);
loc_89978180:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991db50
	ctx.lr = 0x89978190;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89978610
	if (ctx.cr6.eq) goto loc_89978610;
	// lis r9,-30304
	ctx.r9.s64 = -1986002944;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r22,r30,52
	ctx.r22.s64 = ctx.r30.s64 + 52;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r21,r9,-18292
	ctx.r21.s64 = ctx.r9.s64 + -18292;
	// addi r20,r10,-4592
	ctx.r20.s64 = ctx.r10.s64 + -4592;
	// addi r27,r11,-22652
	ctx.r27.s64 = ctx.r11.s64 + -22652;
loc_899781B8:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r23,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r31.u32);
	// addi r9,r27,2
	ctx.r9.s64 = ctx.r27.s64 + 2;
	// lwzx r8,r22,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhzx r6,r11,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// lhzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rotlwi r4,r5,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// srawi r9,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 4;
	// addi r6,r29,128
	ctx.r6.s64 = ctx.r29.s64 + 128;
	// rlwinm r10,r29,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lhzx r4,r10,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// lhzx r11,r5,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r4,r9,r10
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r5,r9,r11
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r6,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0xFFFF8000;
	// srawi r6,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 8;
	// rlwinm r4,r10,15,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r26,r10,r7
	ctx.r26.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x8991b880
	ctx.lr = 0x89978250;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89978280
	if (ctx.cr6.eq) goto loc_89978280;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x89997d48
	ctx.lr = 0x89978278;
	sub_89997D48(ctx, base);
	// lbz r3,6(r21)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r21.u32 + 6);
	// bl 0x89936360
	ctx.lr = 0x89978280;
	sub_89936360(ctx, base);
loc_89978280:
	// addi r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// blt cr6,0x899781b8
	if (ctx.cr6.lt) goto loc_899781B8;
	// b 0x89978610
	goto loc_89978610;
loc_89978298:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89932b18
	ctx.lr = 0x899782A0;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89932d30
	ctx.lr = 0x899782AC;
	sub_89932D30(ctx, base);
	// addi r23,r30,158
	ctx.r23.s64 = ctx.r30.s64 + 158;
	// lhzx r11,r23,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r31.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bge cr6,0x899782c8
	if (!ctx.cr6.lt) goto loc_899782C8;
	// li r11,128
	ctx.r11.s64 = 128;
	// sthx r11,r23,r31
	REX_STORE_U16(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u16);
loc_899782C8:
	// lhzx r11,r23,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r31.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 384, ctx.xer);
	// ble cr6,0x899782e0
	if (!ctx.cr6.gt) goto loc_899782E0;
	// li r11,384
	ctx.r11.s64 = 384;
	// sthx r11,r23,r31
	REX_STORE_U16(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u16);
loc_899782E0:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991db50
	ctx.lr = 0x899782F0;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89978610
	if (ctx.cr6.eq) goto loc_89978610;
	// lis r9,-30304
	ctx.r9.s64 = -1986002944;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r22,r30,52
	ctx.r22.s64 = ctx.r30.s64 + 52;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r21,r9,-18292
	ctx.r21.s64 = ctx.r9.s64 + -18292;
	// addi r20,r10,-4592
	ctx.r20.s64 = ctx.r10.s64 + -4592;
	// addi r29,r11,-22624
	ctx.r29.s64 = ctx.r11.s64 + -22624;
loc_89978318:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r23,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r31.u32);
	// addi r7,r29,2
	ctx.r7.s64 = ctx.r29.s64 + 2;
	// lwzx r8,r22,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// add r6,r27,r11
	ctx.r6.u64 = ctx.r27.u64 + ctx.r11.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r9,128
	ctx.r4.s64 = ctx.r9.s64 + 128;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// rlwinm r6,r4,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// rlwinm r4,r10,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r7,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lhzx r26,r5,r29
	ctx.r26.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// rotlwi r11,r10,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhzx r10,r6,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhzx r4,r4,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// extsh r26,r10
	ctx.r26.s64 = ctx.r10.s16;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r5,r11,r26
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// mullw r25,r10,r4
	ctx.r25.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// srawi r26,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r5.s32 >> 8;
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r25,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 8;
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// srawi r5,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 8;
	// subf r10,r25,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r25.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r26,r10,r7
	ctx.r26.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r24,r9
	ctx.r24.s64 = ctx.r9.s16;
	// bl 0x8991b880
	ctx.lr = 0x899783BC;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899783ec
	if (ctx.cr6.eq) goto loc_899783EC;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x89997d48
	ctx.lr = 0x899783E4;
	sub_89997D48(ctx, base);
	// lbz r3,12(r21)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r21.u32 + 12);
	// bl 0x89936360
	ctx.lr = 0x899783EC;
	sub_89936360(ctx, base);
loc_899783EC:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// blt cr6,0x89978318
	if (ctx.cr6.lt) goto loc_89978318;
	// b 0x89978610
	goto loc_89978610;
loc_89978404:
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x89978420
	goto loc_89978420;
loc_8997840C:
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x89978420
	goto loc_89978420;
loc_89978414:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x89978420
	goto loc_89978420;
loc_8997841C:
	// li r11,29
	ctx.r11.s64 = 29;
loc_89978420:
	// stwx r11,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991b610
	ctx.lr = 0x8997842C;
	sub_8991B610(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89932b18
	ctx.lr = 0x89978434;
	sub_89932B18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x89932d30
	ctx.lr = 0x89978440;
	sub_89932D30(ctx, base);
	// addi r26,r30,158
	ctx.r26.s64 = ctx.r30.s64 + 158;
	// lhzx r11,r26,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r31.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bge cr6,0x8997845c
	if (!ctx.cr6.lt) goto loc_8997845C;
	// li r11,128
	ctx.r11.s64 = 128;
	// sthx r11,r26,r31
	REX_STORE_U16(ctx.r26.u32 + ctx.r31.u32, ctx.r11.u16);
loc_8997845C:
	// lhzx r11,r26,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r31.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 384, ctx.xer);
	// ble cr6,0x89978474
	if (!ctx.cr6.gt) goto loc_89978474;
	// li r11,384
	ctx.r11.s64 = 384;
	// sthx r11,r26,r31
	REX_STORE_U16(ctx.r26.u32 + ctx.r31.u32, ctx.r11.u16);
loc_89978474:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991db50
	ctx.lr = 0x89978484;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89978610
	if (ctx.cr6.eq) goto loc_89978610;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,-22580
	ctx.r27.s64 = ctx.r11.s64 + -22580;
loc_8997849C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r26,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r31.u32);
	// addi r8,r27,2
	ctx.r8.s64 = ctx.r27.s64 + 2;
	// lwzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r30,52
	ctx.r24.s64 = ctx.r30.s64 + 52;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// li r3,3
	ctx.r3.s64 = 3;
	// lhzx r10,r5,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r27.u32);
	// lhzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// lhzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lwzx r8,r24,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// rlwinm r24,r11,1,22,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// lhzx r5,r4,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lhzx r5,r24,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r28.u32);
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mullw r24,r10,r4
	ctx.r24.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r5,r10,r5
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r10,r24,8
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r24.s32 >> 8;
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x899cc3d0
	ctx.lr = 0x89978548;
	sub_899CC3D0(ctx, base);
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x8997849c
	if (ctx.cr6.lt) goto loc_8997849C;
	// b 0x89978610
	goto loc_89978610;
loc_89978560:
	// li r15,0
	ctx.r15.s64 = 0;
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
loc_8997856C:
	// lhzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x89978588
	if (!ctx.cr6.lt) goto loc_89978588;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_89978588:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x8997859c
	if (!ctx.cr6.gt) goto loc_8997859C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8997859C:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// sthx r11,r8,r31
	REX_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u16);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8997856c
	if (ctx.cr6.lt) goto loc_8997856C;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x89978610
	if (!ctx.cr6.eq) goto loc_89978610;
	// mulli r11,r19,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r19.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// stbx r15,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r15.u8);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u8);
	// b 0x89978610
	goto loc_89978610;
loc_899785D8:
	// mulli r11,r19,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r19.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r11,-128
	ctx.r7.s64 = ctx.r11.s64 + -128;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// clrlwi r4,r5,23
	ctx.r4.u64 = ctx.r5.u32 & 0x1FF;
	// sthx r5,r9,r31
	REX_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r5.u16);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x89978610
	if (!ctx.cr6.eq) goto loc_89978610;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
loc_89978610:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lwzx r6,r31,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r5,r19,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r19.u64 * static_cast<uint64_t>(208));
	// lhzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// addi r9,r8,128
	ctx.r9.s64 = ctx.r8.s64 + 128;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// rlwinm r4,r9,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rlwinm r7,r7,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r10,r9,128
	ctx.r10.s64 = ctx.r9.s64 + 128;
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lis r27,0
	ctx.r27.s64 = 0;
	// lhzx r8,r4,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// rlwinm r4,r10,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// ori r10,r27,57344
	ctx.r10.u64 = ctx.r27.u64 | 57344;
	// lhzx r7,r7,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r28.u32);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r27,r7
	ctx.r27.s64 = ctx.r7.s16;
	// lhzx r7,r4,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// mullw r4,r8,r10
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// extsh r26,r7
	ctx.r26.s64 = ctx.r7.s16;
	// mullw r8,r9,r27
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// mullw r7,r11,r26
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// subf r10,r8,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r8.u64;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwzx r8,r5,r25
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r25.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r3,r3,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r9,r26
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r26.s32);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lhzx r7,r3,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r28.u32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// mullw r3,r11,r27
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// mullw r11,r4,r24
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r24.s32);
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r5,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// addi r9,r30,206
	ctx.r9.s64 = ctx.r30.s64 + 206;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r30,68
	ctx.r8.s64 = ctx.r30.s64 + 68;
	// lis r12,-24753
	ctx.r12.s64 = -1622212608;
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// lwzx r4,r5,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// lbzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// addi r7,r30,200
	ctx.r7.s64 = ctx.r30.s64 + 200;
	// and r3,r6,r12
	ctx.r3.u64 = ctx.r6.u64 & ctx.r12.u64;
	// stwx r4,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// lis r12,24752
	ctx.r12.s64 = 1622147072;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r3,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// stbx r4,r7,r31
	REX_STORE_U8(ctx.r7.u32 + ctx.r31.u32, ctx.r4.u8);
	// lwzx r9,r5,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// extsh r6,r29
	ctx.r6.s64 = ctx.r29.s16;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// addic. r11,r6,-256
	ctx.xer.ca = ctx.r6.u32 > 255;
	ctx.r11.s64 = ctx.r6.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// bge 0x89978760
	if (!ctx.cr0.lt) goto loc_89978760;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89978760:
	// li r9,192
	ctx.r9.s64 = 192;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// subfc r8,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// eqv r7,r11,r9
	ctx.r7.u64 = ~(ctx.r11.u64 ^ ctx.r9.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r11,r5,30,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x40000000;
	// subfic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// bl 0x8991b7f8
	ctx.lr = 0x8997878C;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89978794:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997879C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89976ac0
	if (ctx.cr6.lt) goto loc_89976AC0;
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// mulli r7,r6,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lhzx r5,r7,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x899787d0
	if (!ctx.cr6.eq) goto loc_899787D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
loc_899787D0:
	// mulli r5,r11,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lis r3,-30320
	ctx.r3.s64 = -1987051520;
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// lwzx r11,r5,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// addi r3,r3,9016
	ctx.r3.s64 = ctx.r3.s64 + 9016;
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// rlwinm r29,r7,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r5,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// extsh r4,r29
	ctx.r4.s64 = ctx.r29.s16;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r28,r29,128
	ctx.r28.s64 = ctx.r29.s64 + 128;
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// rlwinm r25,r28,1,22,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// addi r24,r8,1
	ctx.r24.s64 = ctx.r8.s64 + 1;
	// lhzx r8,r4,r3
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhzx r3,r25,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r3.u32);
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// mullw r23,r8,r9
	ctx.r23.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r23,r23,8
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFF) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 8;
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// subf r10,r23,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r23.u64;
	// addi r25,r30,68
	ctx.r25.s64 = ctx.r30.s64 + 68;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r17,r6,208
	ctx.r17.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r23,r30,200
	ctx.r23.s64 = ctx.r30.s64 + 200;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// stwx r3,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r3.u32);
	// addi r22,r30,28
	ctx.r22.s64 = ctx.r30.s64 + 28;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r24,28
	ctx.r9.u64 = ctx.r24.u32 & 0xF;
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r30,16
	ctx.r24.s64 = ctx.r30.s64 + 16;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r22,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// addi r21,r30,20
	ctx.r21.s64 = ctx.r30.s64 + 20;
	// rlwinm r20,r7,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r5,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stwx r6,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwzx r4,r5,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// addi r22,r30,36
	ctx.r22.s64 = ctx.r30.s64 + 36;
	// stwx r4,r25,r31
	REX_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r4.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r5,r23
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r23.u32);
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stbx r7,r3,r31
	REX_STORE_U8(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u8);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r5,r20,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// addi r19,r30,32
	ctx.r19.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r5,r24,r31
	REX_STORE_U32(ctx.r24.u32 + ctx.r31.u32, ctx.r5.u32);
	// addi r30,r30,192
	ctx.r30.s64 = ctx.r30.s64 + 192;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r21,r31
	REX_STORE_U32(ctx.r21.u32 + ctx.r31.u32, ctx.r7.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,4(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r4,r22,r31
	REX_STORE_U32(ctx.r22.u32 + ctx.r31.u32, ctx.r4.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r11,r19,r31
	REX_STORE_U32(ctx.r19.u32 + ctx.r31.u32, ctx.r11.u32);
	// lbzx r10,r17,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r30.u32);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991db50
	ctx.lr = 0x89978964;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwzx r5,r28,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lis r8,-30296
	ctx.r8.s64 = -1985478656;
	// ori r6,r9,20077
	ctx.r6.u64 = ctx.r9.u64 | 20077;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// addi r8,r8,-26840
	ctx.r8.s64 = ctx.r8.s64 + -26840;
	// li r3,2
	ctx.r3.s64 = 2;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r6,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 16;
	// clrlwi r11,r6,17
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// bl 0x899ccf78
	ctx.lr = 0x899789C8;
	sub_899CCF78(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899789D0:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991ba70
	ctx.lr = 0x899789D8;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// blt cr6,0x89977268
	if (ctx.cr6.lt) goto loc_89977268;
	// bl 0x89975880
	ctx.lr = 0x899789F0;
	sub_89975880(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89978a90
	if (ctx.cr6.eq) goto loc_89978A90;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x89978a50
	if (ctx.cr6.eq) goto loc_89978A50;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x89978f30
	if (ctx.cr6.lt) goto loc_89978F30;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// b 0x89978ab8
	goto loc_89978AB8;
loc_89978A50:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x89978ab8
	if (!ctx.cr6.gt) goto loc_89978AB8;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r11,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stwx r10,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x89978A7C;
	sub_8991B610(ctx, base);
	// addi r9,r30,180
	ctx.r9.s64 = ctx.r30.s64 + 180;
	// li r8,1
	ctx.r8.s64 = 1;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89978A90:
	// addi r11,r30,194
	ctx.r11.s64 = ctx.r30.s64 + 194;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// li r3,130
	ctx.r3.s64 = 130;
	// bl 0x89936360
	ctx.lr = 0x89978AAC;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_89978AB8:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r29,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lhzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r28,r6,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r28.u32);
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r3,r31
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r9,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89978B58:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991ba70
	ctx.lr = 0x89978B60;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// blt cr6,0x89977268
	if (ctx.cr6.lt) goto loc_89977268;
	// bl 0x89975880
	ctx.lr = 0x89978B78;
	sub_89975880(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r28,r8,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhzx r7,r28,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
	// addi r26,r30,20
	ctx.r26.s64 = ctx.r30.s64 + 20;
	// addi r24,r30,36
	ctx.r24.s64 = ctx.r30.s64 + 36;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r23,r30,32
	ctx.r23.s64 = ctx.r30.s64 + 32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// lbzx r3,r29,r31
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwzx r22,r7,r10
	ctx.r22.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stwx r22,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r22.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r7,r26,r31
	REX_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stwx r5,r24,r31
	REX_STORE_U32(ctx.r24.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r4,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r4.u32);
	// blt cr6,0x89978c98
	if (ctx.cr6.lt) goto loc_89978C98;
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u8);
	// cmplwi cr6,r8,30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 30, ctx.xer);
	// blt cr6,0x89978f30
	if (ctx.cr6.lt) goto loc_89978F30;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,15
	ctx.r8.s64 = 15;
	// li r15,0
	ctx.r15.s64 = 0;
	// stwx r9,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r9.u32);
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stbx r15,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r15.u8);
	// bl 0x8991b610
	ctx.lr = 0x89978C80;
	sub_8991B610(ctx, base);
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stbx r15,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r15.u8);
	// sthx r6,r7,r31
	REX_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r6.u16);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89978C98:
	// addi r10,r30,194
	ctx.r10.s64 = ctx.r30.s64 + 194;
	// lbzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r29,r31
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89978CDC:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89978CE4;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// blt cr6,0x89977268
	if (ctx.cr6.lt) goto loc_89977268;
	// bl 0x89975880
	ctx.lr = 0x89978CFC;
	sub_89975880(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r9,r8,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// addi r23,r30,188
	ctx.r23.s64 = ctx.r30.s64 + 188;
	// lbzx r10,r23,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r31.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x89978ecc
	if (ctx.cr6.lt) goto loc_89978ECC;
	// beq cr6,0x89978e9c
	if (ctx.cr6.eq) goto loc_89978E9C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x89978f30
	if (!ctx.cr6.lt) goto loc_89978F30;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r24,r30,28
	ctx.r24.s64 = ctx.r30.s64 + 28;
	// addi r25,r30,16
	ctx.r25.s64 = ctx.r30.s64 + 16;
	// addi r26,r30,20
	ctx.r26.s64 = ctx.r30.s64 + 20;
	// addi r27,r30,36
	ctx.r27.s64 = ctx.r30.s64 + 36;
	// lwzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r28,r30,32
	ctx.r28.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r24,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r4,20
	ctx.r4.s64 = 20;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stwx r10,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r6,r7,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r6,r25,r31
	REX_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r6.u32);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r6,r26,r31
	REX_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r6.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r10,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r9.u32);
	// bl 0x8991db50
	ctx.lr = 0x89978DE0;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// lwzx r5,r29,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// li r6,116
	ctx.r6.s64 = 116;
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8998d8d8
	ctx.lr = 0x89978E04;
	sub_8998D8D8(ctx, base);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x89936360
	ctx.lr = 0x89978E18;
	sub_89936360(ctx, base);
	// li r15,0
	ctx.r15.s64 = 0;
	// lwzx r11,r24,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// stwx r15,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r15.u32);
	// rotlwi r8,r15,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// rotlwi r9,r15,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rotlwi r10,r15,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r25,r31
	REX_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r3.u32);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,4(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r8,r26,r31
	REX_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stwx r7,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r4,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r4.u32);
	// stbx r15,r23,r31
	REX_STORE_U8(ctx.r23.u32 + ctx.r31.u32, ctx.r15.u8);
	// stwx r6,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r6.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89978E9C:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lis r9,-16
	ctx.r9.s64 = -1048576;
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addis r7,r8,-2
	ctx.r7.s64 = ctx.r8.s64 + -131072;
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x89978f30
	if (ctx.cr6.gt) goto loc_89978F30;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r23,r31
	REX_STORE_U8(ctx.r23.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89978ECC:
	// addi r11,r30,194
	ctx.r11.s64 = ctx.r30.s64 + 194;
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89978f04
	if (!ctx.cr6.eq) goto loc_89978F04;
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89978f30
	if (ctx.cr6.eq) goto loc_89978F30;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89978F04:
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// bne cr6,0x89978f30
	if (!ctx.cr6.eq) goto loc_89978F30;
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// addi r8,r30,164
	ctx.r8.s64 = ctx.r30.s64 + 164;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stbx r7,r23,r31
	REX_STORE_U8(ctx.r23.u32 + ctx.r31.u32, ctx.r7.u8);
	// lwzx r6,r9,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stwx r6,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r6.u32);
loc_89978F30:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999E1A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x8999E1A8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8999de58
	ctx.lr = 0x8999E1B4;
	sub_8999DE58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932b18
	ctx.lr = 0x8999E1BC;
	sub_89932B18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x89932d30
	ctx.lr = 0x8999E1C8;
	sub_89932D30(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r25,r30,12
	ctx.r25.s64 = ctx.r30.s64 + 12;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// addi r27,r30,36
	ctx.r27.s64 = ctx.r30.s64 + 36;
	// lwzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r26,r30,32
	ctx.r26.s64 = ctx.r30.s64 + 32;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// lhzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// srawi r8,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r7.u32);
	// bl 0x8991db50
	ctx.lr = 0x8999E250;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999e378
	if (ctx.cr6.eq) goto loc_8999E378;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991aae8
	ctx.lr = 0x8999E260;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999e378
	if (ctx.cr6.eq) goto loc_8999E378;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// addi r11,r11,-11324
	ctx.r11.s64 = ctx.r11.s64 + -11324;
	// addi r24,r30,200
	ctx.r24.s64 = ctx.r30.s64 + 200;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// li r21,2
	ctx.r21.s64 = 2;
	// lis r23,3
	ctx.r23.s64 = 196608;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
	// addi r22,r10,-27568
	ctx.r22.s64 = ctx.r10.s64 + -27568;
loc_8999E290:
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// lhz r9,-2(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + -2);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// rotlwi r4,r9,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lbzx r5,r31,r24
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r3,r3,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// addi r10,r27,128
	ctx.r10.s64 = ctx.r27.s64 + 128;
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// rlwinm r8,r10,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// lhzx r6,r3,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r26.u32);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lhzx r3,r8,r26
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r26.u32);
	// mullw r8,r10,r4
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mullw r3,r11,r6
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// mullw r6,r10,r6
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// subf r3,r8,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r8.u64;
	// mulli r11,r3,224
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(224));
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r28,r23,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r23.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x8999E32C;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999e36c
	if (ctx.cr6.eq) goto loc_8999E36C;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x8999E340;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8999e36c
	if (!ctx.cr6.eq) goto loc_8999E36C;
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899cbb90
	ctx.lr = 0x8999E36C;
	sub_899CBB90(ctx, base);
loc_8999E36C:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// bne 0x8999e290
	if (!ctx.cr0.eq) goto loc_8999E290;
loc_8999E378:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999F670) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8999F678;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// li r4,12
	ctx.r4.s64 = 12;
	// ori r8,r9,20077
	ctx.r8.u64 = ctx.r9.u64 | 20077;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// rlwinm r6,r7,0,14,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x30000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8999f6f8
	if (ctx.cr6.eq) goto loc_8999F6F8;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r11,52
	ctx.r8.s64 = ctx.r11.s64 + 52;
	// addi r9,r11,207
	ctx.r9.s64 = ctx.r11.s64 + 207;
	// add r29,r10,r7
	ctx.r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r27,r11,200
	ctx.r27.s64 = ctx.r11.s64 + 200;
	// add r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lbzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// bl 0x899d4440
	ctx.lr = 0x8999F6F4;
	sub_899D4440(ctx, base);
	// b 0x8999f73c
	goto loc_8999F73C;
loc_8999F6F8:
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r8,r10,52
	ctx.r8.s64 = ctx.r10.s64 + 52;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r28,r10,200
	ctx.r28.s64 = ctx.r10.s64 + 200;
	// addi r7,r10,207
	ctx.r7.s64 = ctx.r10.s64 + 207;
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r31,r11,r7
	ctx.r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r8,r11,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x899d4e08
	ctx.lr = 0x8999F73C;
	sub_899D4E08(ctx, base);
loc_8999F73C:
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8992e698
	ctx.lr = 0x8999F750;
	sub_8992E698(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999FE38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x8999FE40;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r24,r3
	ctx.r24.s64 = ctx.r3.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r24,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(208));
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x899a01ec
	if (ctx.cr6.eq) goto loc_899A01EC;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// addi r6,r30,60
	ctx.r6.s64 = ctx.r30.s64 + 60;
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r9,r31,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addis r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -10485760;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// bge 0x8999fea8
	if (!ctx.cr0.lt) goto loc_8999FEA8;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8999FEA8:
	// lis r9,176
	ctx.r9.s64 = 11534336;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8999fec4
	if (!ctx.cr6.gt) goto loc_8999FEC4;
loc_8999FEB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8999FEC4:
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// lwz r10,-21584(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -21584);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addis r11,r9,-120
	ctx.r11.s64 = ctx.r9.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8999fee0
	if (!ctx.cr0.lt) goto loc_8999FEE0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8999FEE0:
	// lis r10,136
	ctx.r10.s64 = 8912896;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8999feb4
	if (ctx.cr6.gt) goto loc_8999FEB4;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// bgt cr6,0x899a02ec
	if (ctx.cr6.gt) goto loc_899A02EC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8999ff20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8999FF20;
	// bdzf 4*cr6+eq,0x8999ff20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8999FF20;
	// bdzf 4*cr6+eq,0x8999ff20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8999FF20;
	// bdzf 4*cr6+eq,0x899a0008
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A0008;
	// bdzf 4*cr6+eq,0x899a0008
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A0008;
	// bdzf 4*cr6+eq,0x899a0008
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A0008;
	// bne cr6,0x899a0008
	if (!ctx.cr6.eq) goto loc_899A0008;
loc_8999FF20:
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8999ff88
	if (!ctx.cr6.eq) goto loc_8999FF88;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// stwx r7,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stwx r3,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r8,56(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8999FF88:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// blt cr6,0x899a02ec
	if (ctx.cr6.lt) goto loc_899A02EC;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,36
	ctx.r9.s64 = ctx.r30.s64 + 36;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899A0008:
	// addi r28,r30,158
	ctx.r28.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// ori r29,r10,32768
	ctx.r29.u64 = ctx.r10.u64 | 32768;
	// lhzx r3,r31,r28
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// addi r4,r11,9016
	ctx.r4.s64 = ctx.r11.s64 + 9016;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mulli r3,r10,240
	ctx.r3.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(240));
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// rlwinm r23,r11,1,22,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r22,r10,1,22,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// lhzx r9,r23,r4
	ctx.r9.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r4.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// lhzx r4,r22,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r4.u32);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// mullw r4,r3,r10
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// stwx r10,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// bge cr6,0x899a0164
	if (!ctx.cr6.lt) goto loc_899A0164;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// li r29,0
	ctx.r29.s64 = 0;
	// oris r9,r11,8368
	ctx.r9.u64 = ctx.r11.u64 | 548405248;
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r29,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r29.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x8991b610
	ctx.lr = 0x899A00A0;
	sub_8991B610(ctx, base);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lwz r11,26936(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 26936);
	// add r7,r24,r11
	ctx.r7.u64 = ctx.r24.u64 + ctx.r11.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x899a00e8
	if (!ctx.cr6.eq) goto loc_899A00E8;
	// addi r11,r30,64
	ctx.r11.s64 = ctx.r30.s64 + 64;
	// addi r10,r30,66
	ctx.r10.s64 = ctx.r30.s64 + 66;
	// addi r9,r30,67
	ctx.r9.s64 = ctx.r30.s64 + 67;
	// addi r8,r30,68
	ctx.r8.s64 = ctx.r30.s64 + 68;
	// li r7,519
	ctx.r7.s64 = 519;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,8
	ctx.r5.s64 = 8;
	// sthx r7,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u16);
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// stbx r29,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u8);
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// b 0x899a0110
	goto loc_899A0110;
loc_899A00E8:
	// addi r10,r30,64
	ctx.r10.s64 = ctx.r30.s64 + 64;
	// addi r9,r30,66
	ctx.r9.s64 = ctx.r30.s64 + 66;
	// addi r8,r30,67
	ctx.r8.s64 = ctx.r30.s64 + 67;
	// addi r7,r30,68
	ctx.r7.s64 = ctx.r30.s64 + 68;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r6,205
	ctx.r6.s64 = 205;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// sthx r6,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u16);
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// stbx r29,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r29.u8);
loc_899A0110:
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x89936360
	ctx.lr = 0x899A0118;
	sub_89936360(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,7935(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7935);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899a02ec
	if (ctx.cr6.eq) goto loc_899A02EC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932a38
	ctx.lr = 0x899A0130;
	sub_89932A38(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932cb0
	ctx.lr = 0x899A0138;
	sub_89932CB0(ctx, base);
	// lis r11,-30296
	ctx.r11.s64 = -1985478656;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lhzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// addi r8,r11,-26008
	ctx.r8.s64 = ctx.r11.s64 + -26008;
	// lwzx r5,r31,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899cba78
	ctx.lr = 0x899A015C;
	sub_899CBA78(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899A0164:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// adde r10,r7,r9
	temp.u8 = (ctx.r7.u32 + ctx.r9.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899a019c
	if (ctx.cr6.lt) goto loc_899A019C;
	// bne cr6,0x899a01b4
	if (!ctx.cr6.eq) goto loc_899A01B4;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r10,r11,-11296
	ctx.r10.s64 = ctx.r11.s64 + -11296;
	// lbz r11,3(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x899a01b4
	goto loc_899A01B4;
loc_899A019C:
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// srawi r9,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 15;
	// addi r7,r10,-11296
	ctx.r7.s64 = ctx.r10.s64 + -11296;
	// lbzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// stwx r5,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
loc_899A01B4:
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
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
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// b 0x899a02d4
	goto loc_899A02D4;
loc_899A01EC:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,26936(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26936);
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899a0238
	if (!ctx.cr6.eq) goto loc_899A0238;
	// addi r11,r30,64
	ctx.r11.s64 = ctx.r30.s64 + 64;
	// addi r10,r30,66
	ctx.r10.s64 = ctx.r30.s64 + 66;
	// addi r9,r30,67
	ctx.r9.s64 = ctx.r30.s64 + 67;
	// addi r8,r30,68
	ctx.r8.s64 = ctx.r30.s64 + 68;
	// li r7,519
	ctx.r7.s64 = 519;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,8
	ctx.r5.s64 = 8;
	// sthx r7,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u16);
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// stbx r29,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u8);
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// b 0x899a0260
	goto loc_899A0260;
loc_899A0238:
	// addi r10,r30,64
	ctx.r10.s64 = ctx.r30.s64 + 64;
	// addi r9,r30,66
	ctx.r9.s64 = ctx.r30.s64 + 66;
	// addi r8,r30,67
	ctx.r8.s64 = ctx.r30.s64 + 67;
	// addi r7,r30,68
	ctx.r7.s64 = ctx.r30.s64 + 68;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r6,205
	ctx.r6.s64 = 205;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// sthx r6,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u16);
	// stbx r29,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r29.u8);
loc_899A0260:
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
	// blt cr6,0x899a02ec
	if (ctx.cr6.lt) goto loc_899A02EC;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// stbx r29,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x899a02a4
	if (!ctx.cr6.eq) goto loc_899A02A4;
	// stwx r29,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899A02A4:
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
loc_899A02D4:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
loc_899A02EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A6A08) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899A6A10;
	__savegprlr_24(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// lis r12,-16561
	ctx.r12.s64 = -1085341696;
	// addi r8,r11,148
	ctx.r8.s64 = ctx.r11.s64 + 148;
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// lis r3,-30320
	ctx.r3.s64 = -1987051520;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// addi r4,r11,164
	ctx.r4.s64 = ctx.r11.s64 + 164;
	// and r7,r9,r12
	ctx.r7.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lhzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r8,r5,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// addi r5,r3,9016
	ctx.r5.s64 = ctx.r3.s64 + 9016;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lis r12,16560
	ctx.r12.s64 = 1085276160;
	// mulli r3,r3,208
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r3,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// srawi r31,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 4;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// lwzx r8,r3,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// addi r6,r11,60
	ctx.r6.s64 = ctx.r11.s64 + 60;
	// lwzx r4,r3,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r4,r11,206
	ctx.r4.s64 = ctx.r11.s64 + 206;
	// lwzx r6,r10,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// addi r29,r11,52
	ctx.r29.s64 = ctx.r11.s64 + 52;
	// rlwinm r27,r9,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r28,r11,200
	ctx.r28.s64 = ctx.r11.s64 + 200;
	// lbzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// addi r26,r11,68
	ctx.r26.s64 = ctx.r11.s64 + 68;
	// addi r25,r11,68
	ctx.r25.s64 = ctx.r11.s64 + 68;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// lhzx r5,r27,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r5.u32);
	// addi r24,r11,200
	ctx.r24.s64 = ctx.r11.s64 + 200;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// mullw r5,r11,r31
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwzx r11,r3,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stwx r8,r10,r29
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r8.u32);
	// lbzx r11,r3,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r24.u32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r7,r10,r28
	REX_STORE_U8(ctx.r10.u32 + ctx.r28.u32, ctx.r7.u8);
	// lwzx r5,r3,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// stwx r5,r10,r25
	REX_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r5.u32);
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A8438) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899A8440;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x89934058
	ctx.lr = 0x899A8464;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a8660
	if (ctx.cr6.eq) goto loc_899A8660;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b968
	ctx.lr = 0x899A8474;
	sub_8991B968(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a8660
	if (ctx.cr6.eq) goto loc_899A8660;
	// bl 0x899d80c0
	ctx.lr = 0x899A8480;
	sub_899D80C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a8660
	if (ctx.cr6.eq) goto loc_899A8660;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// blt cr6,0x899a84c4
	if (ctx.cr6.lt) goto loc_899A84C4;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// ori r8,r9,20077
	ctx.r8.u64 = ctx.r9.u64 | 20077;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// clrlwi r11,r6,17
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r5,17,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0xFFFF;
loc_899A84C4:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// lis r10,-16208
	ctx.r10.s64 = -1062207488;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// li r8,24
	ctx.r8.s64 = 24;
	// lwz r3,6056(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// srawi r7,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 3;
	// clrlwi r6,r7,26
	ctx.r6.u64 = ctx.r7.u32 & 0x3F;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// bl 0x8991b6a0
	ctx.lr = 0x899A84F8;
	sub_8991B6A0(ctx, base);
	// stw r26,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r26.u32);
	// stw r25,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r25.u32);
	// bl 0x8991c610
	ctx.lr = 0x899A8504;
	sub_8991C610(ctx, base);
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// lis r4,-30320
	ctx.r4.s64 = -1987051520;
	// sth r30,158(r3)
	REX_STORE_U16(ctx.r3.u32 + 158, ctx.r30.u16);
	// rlwinm r8,r5,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// stw r28,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r28.u32);
	// addi r6,r4,9016
	ctx.r6.s64 = ctx.r4.s64 + 9016;
	// srawi r9,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 4;
	// rlwinm r5,r30,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// lis r4,-30294
	ctx.r4.s64 = -1985347584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r4,-9088
	ctx.r4.s64 = ctx.r4.s64 + -9088;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// lhzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r31,8(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// lhzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r27,204(r3)
	REX_STORE_U8(ctx.r3.u32 + 204, ctx.r27.u8);
	// stb r27,200(r3)
	REX_STORE_U8(ctx.r3.u32 + 200, ctx.r27.u8);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// stw r8,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lwzx r6,r31,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// li r31,21
	ctx.r31.s64 = 21;
	// stw r6,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r6.u32);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// sth r11,92(r3)
	REX_STORE_U16(ctx.r3.u32 + 92, ctx.r11.u16);
	// ori r8,r8,32896
	ctx.r8.u64 = ctx.r8.u64 | 32896;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r9,r9,11976
	ctx.r9.s64 = ctx.r9.s64 + 11976;
	// lis r5,512
	ctx.r5.s64 = 33554432;
	// addi r6,r6,7904
	ctx.r6.s64 = ctx.r6.s64 + 7904;
loc_899A85A4:
	// addi r29,r10,25
	ctx.r29.s64 = ctx.r10.s64 + 25;
	// lwzx r28,r7,r6
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stwx r28,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r28.u32);
	// stw r30,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// lwz r10,680(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 680);
	// stw r10,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r10.u32);
	// lwz r10,676(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 676);
	// stw r11,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r11.u32);
	// stw r8,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r8.u32);
	// stw r4,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r4.u32);
	// stw r11,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// stw r5,28(r28)
	REX_STORE_U32(ctx.r28.u32 + 28, ctx.r5.u32);
	// stw r11,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
	// stw r10,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// stw r3,64(r28)
	REX_STORE_U32(ctx.r28.u32 + 64, ctx.r3.u32);
	// stb r11,78(r28)
	REX_STORE_U8(ctx.r28.u32 + 78, ctx.r11.u8);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// stb r11,77(r28)
	REX_STORE_U8(ctx.r28.u32 + 77, ctx.r11.u8);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r11,76(r28)
	REX_STORE_U8(ctx.r28.u32 + 76, ctx.r11.u8);
	// stw r11,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// stw r11,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// stb r11,79(r28)
	REX_STORE_U8(ctx.r28.u32 + 79, ctx.r11.u8);
	// stb r11,80(r28)
	REX_STORE_U8(ctx.r28.u32 + 80, ctx.r11.u8);
	// lhz r29,154(r3)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 154);
	// sth r29,72(r28)
	REX_STORE_U16(ctx.r28.u32 + 72, ctx.r29.u16);
	// blt cr6,0x899a85a4
	if (ctx.cr6.lt) goto loc_899A85A4;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899d7d20
	ctx.lr = 0x899A864C;
	sub_899D7D20(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x89936360
	ctx.lr = 0x899A8654;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899A8660:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A9638) {
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
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,12342(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12342);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899a96a0
	if (ctx.cr6.eq) goto loc_899A96A0;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r10,12800
	ctx.r11.s64 = ctx.r10.s64 + 12800;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stwx r8,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// bl 0x89933b88
	ctx.lr = 0x899A9680;
	sub_89933B88(ctx, base);
	// lis r5,-30276
	ctx.r5.s64 = -1984167936;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32555(r5)
	REX_STORE_U8(ctx.r5.u32 + 32555, ctx.r11.u8);
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
loc_899A96A0:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r10,188
	ctx.r9.s64 = ctx.r10.s64 + 188;
	// rlwinm r7,r8,0,18,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// addi r6,r10,56
	ctx.r6.s64 = ctx.r10.s64 + 56;
	// oris r31,r7,8192
	ctx.r31.u64 = ctx.r7.u64 | 536870912;
	// addi r5,r10,60
	ctx.r5.s64 = ctx.r10.s64 + 60;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r4,r10,192
	ctx.r4.s64 = ctx.r10.s64 + 192;
	// ori r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// stwx r31,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r7,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u32);
	// stbx r7,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r3,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r3.u32);
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
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

DEFINE_REX_FUNC(sub_899A9F48) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899A9F50;
	__savegprlr_29(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// mulli r7,r10,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// mulli r6,r9,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// addi r31,r11,52
	ctx.r31.s64 = ctx.r11.s64 + 52;
	// lwzx r9,r6,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r5,r11,206
	ctx.r5.s64 = ctx.r11.s64 + 206;
	// lwzx r10,r7,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// addi r30,r11,200
	ctx.r30.s64 = ctx.r11.s64 + 200;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r7,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// stwx r9,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r29,r11,69
	ctx.r29.s64 = ctx.r11.s64 + 69;
	// lwzx r8,r6,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbzx r9,r7,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// addi r8,r11,69
	ctx.r8.s64 = ctx.r11.s64 + 69;
	// stwx r10,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r10.u32);
	// addi r5,r11,70
	ctx.r5.s64 = ctx.r11.s64 + 70;
	// lbzx r10,r6,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,70
	ctx.r9.s64 = ctx.r11.s64 + 70;
	// stbx r10,r7,r3
	REX_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r4,r11,71
	ctx.r4.s64 = ctx.r11.s64 + 71;
	// addi r3,r11,71
	ctx.r3.s64 = ctx.r11.s64 + 71;
	// lbzx r11,r6,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r29.u32);
	// stbx r11,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbzx r10,r6,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// stbx r10,r7,r9
	REX_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u8);
	// lbzx r9,r6,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// stbx r9,r7,r3
	REX_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u8);
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899AB528) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899AB530;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991f608
	ctx.lr = 0x899AB53C;
	sub_8991F608(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899ab87c
	if (ctx.cr6.eq) goto loc_899AB87C;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r26,r11,-4592
	ctx.r26.s64 = ctx.r11.s64 + -4592;
	// lhz r25,26864(r10)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 26864);
	// lhz r29,-4592(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89934058
	ctx.lr = 0x899AB564;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ab87c
	if (ctx.cr6.eq) goto loc_899AB87C;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8991b880
	ctx.lr = 0x899AB574;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ab87c
	if (ctx.cr6.eq) goto loc_899AB87C;
	// lhz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r7,r31,162
	ctx.r7.s64 = ctx.r31.s64 + 162;
	// mulli r28,r9,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lhz r11,-17120(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + -17120);
	// sthx r11,r28,r7
	REX_STORE_U16(ctx.r28.u32 + ctx.r7.u32, ctx.r11.u16);
	// addi r30,r31,158
	ctx.r30.s64 = ctx.r31.s64 + 158;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lis r4,-8016
	ctx.r4.s64 = -525336576;
	// sthx r11,r28,r30
	REX_STORE_U16(ctx.r28.u32 + ctx.r30.u32, ctx.r11.u16);
	// clrlwi r23,r25,16
	ctx.r23.u64 = ctx.r25.u32 & 0xFFFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r11,r4,260
	ctx.r11.u64 = ctx.r4.u64 | 260;
	// stwx r23,r28,r8
	REX_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r23.u32);
	// stwx r27,r28,r6
	REX_STORE_U32(ctx.r28.u32 + ctx.r6.u32, ctx.r27.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stwx r27,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r27.u32);
	// stwx r11,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u32);
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// bl 0x8991b538
	ctx.lr = 0x899AB5E0;
	sub_8991B538(ctx, base);
	// addi r24,r31,48
	ctx.r24.s64 = ctx.r31.s64 + 48;
	// lis r10,384
	ctx.r10.s64 = 25165824;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r10,r28,r24
	REX_STORE_U32(ctx.r28.u32 + ctx.r24.u32, ctx.r10.u32);
	// bl 0x89915d78
	ctx.lr = 0x899AB5F4;
	sub_89915D78(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991c578
	ctx.lr = 0x899AB5FC;
	sub_8991C578(ctx, base);
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// addi r3,r31,194
	ctx.r3.s64 = ctx.r31.s64 + 194;
	// addi r11,r5,12032
	ctx.r11.s64 = ctx.r5.s64 + 12032;
	// addi r7,r31,193
	ctx.r7.s64 = ctx.r31.s64 + 193;
	// extsh r6,r29
	ctx.r6.s64 = ctx.r29.s16;
	// addi r5,r31,192
	ctx.r5.s64 = ctx.r31.s64 + 192;
	// addi r22,r31,148
	ctx.r22.s64 = ctx.r31.s64 + 148;
	// stbx r27,r28,r3
	REX_STORE_U8(ctx.r28.u32 + ctx.r3.u32, ctx.r27.u8);
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// addi r9,r31,204
	ctx.r9.s64 = ctx.r31.s64 + 204;
	// stbx r27,r28,r7
	REX_STORE_U8(ctx.r28.u32 + ctx.r7.u32, ctx.r27.u8);
	// rlwinm r8,r6,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0xFFFFF800;
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// stbx r27,r28,r5
	REX_STORE_U8(ctx.r28.u32 + ctx.r5.u32, ctx.r27.u8);
	// addi r25,r31,168
	ctx.r25.s64 = ctx.r31.s64 + 168;
	// sthx r29,r28,r22
	REX_STORE_U16(ctx.r28.u32 + ctx.r22.u32, ctx.r29.u16);
	// addi r4,r4,9448
	ctx.r4.s64 = ctx.r4.s64 + 9448;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r7,115
	ctx.r7.s64 = 115;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r5,256
	ctx.r5.s64 = 256;
	// stbx r7,r28,r9
	REX_STORE_U8(ctx.r28.u32 + ctx.r9.u32, ctx.r7.u8);
	// li r29,1
	ctx.r29.s64 = 1;
	// stbx r7,r28,r10
	REX_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r7.u8);
	// sthx r5,r28,r30
	REX_STORE_U16(ctx.r28.u32 + ctx.r30.u32, ctx.r5.u16);
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// stwx r8,r28,r25
	REX_STORE_U32(ctx.r28.u32 + ctx.r25.u32, ctx.r8.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stbx r29,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r29.u8);
	// stwx r11,r28,r3
	REX_STORE_U32(ctx.r28.u32 + ctx.r3.u32, ctx.r11.u32);
loc_899AB67C:
	// lhzx r8,r28,r24
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r24.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lhzx r4,r28,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r9.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,32
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x899ab67c
	if (ctx.cr6.lt) goto loc_899AB67C;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,-7816
	ctx.r10.s64 = ctx.r10.s64 + -7816;
	// addi r29,r10,-3
	ctx.r29.s64 = ctx.r10.s64 + -3;
	// b 0x899ab6c4
	goto loc_899AB6C4;
loc_899AB6C0:
	// lwz r23,80(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_899AB6C4:
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// lhz r11,7(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 7);
	// addi r10,r26,2
	ctx.r10.s64 = ctx.r26.s64 + 2;
	// lwz r9,3(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 3);
	// rlwinm r8,r25,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,9(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 9);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// addi r3,r31,150
	ctx.r3.s64 = ctx.r31.s64 + 150;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// lhzx r22,r8,r10
	ctx.r22.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// extsh r6,r22
	ctx.r6.s64 = ctx.r22.s16;
	// lhzx r4,r4,r26
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r26.u32);
	// addi r21,r31,12
	ctx.r21.s64 = ctx.r31.s64 + 12;
	// mulli r30,r6,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// sthx r11,r30,r3
	REX_STORE_U16(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u16);
	// sthx r4,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r4.u16);
	// stwx r23,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r23.u32);
	// oris r3,r9,32768
	ctx.r3.u64 = ctx.r9.u64 | 2147483648;
	// stwx r27,r30,r21
	REX_STORE_U32(ctx.r30.u32 + ctx.r21.u32, ctx.r27.u32);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// ori r3,r3,256
	ctx.r3.u64 = ctx.r3.u64 | 256;
	// stwx r11,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r3,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991b538
	ctx.lr = 0x899AB738;
	sub_8991B538(ctx, base);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// addi r6,r31,158
	ctx.r6.s64 = ctx.r31.s64 + 158;
	// addi r5,r31,164
	ctx.r5.s64 = ctx.r31.s64 + 164;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwzx r23,r28,r24
	ctx.r23.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	// lhz r22,11(r29)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r29.u32 + 11);
	// lhz r21,13(r29)
	ctx.r21.u64 = REX_LOAD_U16(ctx.r29.u32 + 13);
	// rotlwi r22,r22,16
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r22.u32, 16);
	// rotlwi r21,r21,16
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r21.u32, 16);
	// stwx r23,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r23.u32);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stwx r11,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r22,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r22.u32);
	// stwx r21,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r21.u32);
	// sthx r4,r30,r6
	REX_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r4.u16);
	// stwx r27,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r27.u32);
	// bl 0x8991c578
	ctx.lr = 0x899AB790;
	sub_8991C578(ctx, base);
	// lbz r10,15(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 15);
	// addi r9,r31,206
	ctx.r9.s64 = ctx.r31.s64 + 206;
	// lbz r6,16(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + 16);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lhz r5,19(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 19);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lbz r4,17(r29)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + 17);
	// addi r8,r31,200
	ctx.r8.s64 = ctx.r31.s64 + 200;
	// lhz r3,21(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 21);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lbz r23,23(r29)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r29.u32 + 23);
	// stbx r10,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u8);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// extsh r11,r25
	ctx.r11.s64 = ctx.r25.s16;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r22,r31,200
	ctx.r22.s64 = ctx.r31.s64 + 200;
	// lbzu r9,24(r29)
	ea = 24 + ctx.r29.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r21,r31,204
	ctx.r21.s64 = ctx.r31.s64 + 204;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// addi r20,r31,192
	ctx.r20.s64 = ctx.r31.s64 + 192;
	// lwz r25,84(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r19,r31,160
	ctx.r19.s64 = ctx.r31.s64 + 160;
	// addi r18,r31,194
	ctx.r18.s64 = ctx.r31.s64 + 194;
	// addi r17,r31,64
	ctx.r17.s64 = ctx.r31.s64 + 64;
	// addi r16,r31,66
	ctx.r16.s64 = ctx.r31.s64 + 66;
	// addi r15,r31,68
	ctx.r15.s64 = ctx.r31.s64 + 68;
	// addi r14,r31,44
	ctx.r14.s64 = ctx.r31.s64 + 44;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lbzx r8,r28,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r8.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r30,r22
	REX_STORE_U8(ctx.r30.u32 + ctx.r22.u32, ctx.r7.u8);
	// lbzx r8,r28,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r25.u32);
	// stbx r9,r30,r15
	REX_STORE_U8(ctx.r30.u32 + ctx.r15.u32, ctx.r9.u8);
	// li r9,64
	ctx.r9.s64 = 64;
	// stbx r6,r30,r20
	REX_STORE_U8(ctx.r30.u32 + ctx.r20.u32, ctx.r6.u8);
	// stwx r9,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// ld r31,88(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// sthx r5,r30,r19
	REX_STORE_U16(ctx.r30.u32 + ctx.r19.u32, ctx.r5.u16);
	// stbx r4,r30,r18
	REX_STORE_U8(ctx.r30.u32 + ctx.r18.u32, ctx.r4.u8);
	// stbx r8,r30,r21
	REX_STORE_U8(ctx.r30.u32 + ctx.r21.u32, ctx.r8.u8);
	// sthx r3,r30,r17
	REX_STORE_U16(ctx.r30.u32 + ctx.r17.u32, ctx.r3.u16);
	// stbx r23,r30,r16
	REX_STORE_U8(ctx.r30.u32 + ctx.r16.u32, ctx.r23.u8);
	// stwx r10,r30,r14
	REX_STORE_U32(ctx.r30.u32 + ctx.r14.u32, ctx.r10.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blt cr6,0x899ab6c0
	if (ctx.cr6.lt) goto loc_899AB6C0;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x899340e8
	ctx.lr = 0x899AB85C;
	sub_899340E8(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r27,12342(r10)
	REX_STORE_U8(ctx.r10.u32 + 12342, ctx.r27.u8);
	// stb r27,32555(r9)
	REX_STORE_U8(ctx.r9.u32 + 32555, ctx.r27.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_899AB87C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899ADB78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x899ADB80;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x899ae9f4
	if (ctx.cr6.gt) goto loc_899AE9F4;
	// lis r12,-30309
	ctx.r12.s64 = -1986330624;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9280
	ctx.r12.s64 = ctx.r12.s64 + -9280;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899ADBF0;
	case 1:
		goto loc_899ADEB8;
	case 2:
		goto loc_899ADED8;
	case 3:
		goto loc_899ADFE4;
	case 4:
		goto loc_899AE178;
	case 5:
		goto loc_899AE178;
	case 6:
		goto loc_899AE20C;
	case 7:
		goto loc_899AE700;
	case 8:
		goto loc_899AE700;
	case 9:
		goto loc_899AE874;
	case 10:
		goto loc_899AE940;
	case 11:
		goto loc_899AE1FC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899ADBF0:
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r11,9448
	ctx.r25.s64 = ctx.r11.s64 + 9448;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899add5c
	if (ctx.cr6.eq) goto loc_899ADD5C;
	// bl 0x899ad478
	ctx.lr = 0x899ADC14;
	sub_899AD478(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899adc30
	if (!ctx.cr6.eq) goto loc_899ADC30;
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// stbx r26,r10,r25
	REX_STORE_U8(ctx.r10.u32 + ctx.r25.u32, ctx.r26.u8);
	// b 0x899ade98
	goto loc_899ADE98;
loc_899ADC30:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899adc7c
	if (ctx.cr6.eq) goto loc_899ADC7C;
loc_899ADC50:
	// lhz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x899adc50
	if (ctx.cr6.lt) goto loc_899ADC50;
	// b 0x899adcac
	goto loc_899ADCAC;
loc_899ADC7C:
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
loc_899ADC80:
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,32
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32, ctx.xer);
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lhzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// sthu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// blt cr6,0x899adc80
	if (ctx.cr6.lt) goto loc_899ADC80;
loc_899ADCAC:
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// addi r10,r30,196
	ctx.r10.s64 = ctx.r30.s64 + 196;
	// lhzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899ade98
	if (ctx.cr6.eq) goto loc_899ADE98;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,-6308
	ctx.r11.s64 = ctx.r9.s64 + -6308;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8991db50
	ctx.lr = 0x899ADCF8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ade98
	if (ctx.cr6.eq) goto loc_899ADE98;
	// bl 0x899329e0
	ctx.lr = 0x899ADD04;
	sub_899329E0(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lwzx r27,r31,r27
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// lwzx r28,r31,r28
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// mulli r9,r10,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// bl 0x89932c20
	ctx.lr = 0x899ADD38;
	sub_89932C20(ctx, base);
	// lis r5,-30296
	ctx.r5.s64 = -1985478656;
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// addi r8,r5,-26840
	ctx.r8.s64 = ctx.r5.s64 + -26840;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addis r4,r28,46
	ctx.r4.s64 = ctx.r28.s64 + 3014656;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x89997ea0
	ctx.lr = 0x899ADD58;
	sub_89997EA0(ctx, base);
	// b 0x899ade98
	goto loc_899ADE98;
loc_899ADD5C:
	// bl 0x8991c8b8
	ctx.lr = 0x899ADD60;
	sub_8991C8B8(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899add74
	if (!ctx.cr6.eq) goto loc_899ADD74;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x89936360
	ctx.lr = 0x899ADD74;
	sub_89936360(ctx, base);
loc_899ADD74:
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
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x899ade98
	if (ctx.cr6.lt) goto loc_899ADE98;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// stbx r26,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u8);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// lis r5,-30320
	ctx.r5.s64 = -1987051520;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,-9212(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -9212);
	// addi r5,r5,9016
	ctx.r5.s64 = ctx.r5.s64 + 9016;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r10,17
	ctx.r29.u64 = ctx.r10.u32 & 0x7FFF;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// addi r4,r9,128
	ctx.r4.s64 = ctx.r9.s64 + 128;
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r29,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r11,r8,12345
	ctx.r11.s64 = ctx.r8.s64 + 12345;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,-9212(r6)
	REX_STORE_U32(ctx.r6.u32 + -9212, ctx.r11.u32);
	// srawi r8,r28,16
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 16;
	// lhzx r9,r29,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r5.u32);
	// rlwinm r6,r10,4,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFF0000;
	// lhzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// mullw r6,r4,r10
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// lis r5,-30294
	ctx.r5.s64 = -1985347584;
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// addi r29,r5,-6252
	ctx.r29.s64 = ctx.r5.s64 + -6252;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r10,r30,200
	ctx.r10.s64 = ctx.r30.s64 + 200;
	// rlwinm r11,r8,30,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1FFF;
	// rlwinm r27,r9,19,30,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x3;
	// addi r28,r30,207
	ctx.r28.s64 = ctx.r30.s64 + 207;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lis r9,-6
	ctx.r9.s64 = -393216;
	// lbzx r4,r27,r29
	ctx.r4.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x899d4640
	ctx.lr = 0x899ADE98;
	sub_899D4640(ctx, base);
loc_899ADE98:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899ae9f4
	if (!ctx.cr6.eq) goto loc_899AE9F4;
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// stbx r26,r10,r25
	REX_STORE_U8(ctx.r10.u32 + ctx.r25.u32, ctx.r26.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899ADEB8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x899aa060
	ctx.lr = 0x899ADEC0;
	sub_899AA060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899ae9f4
	if (!ctx.cr6.eq) goto loc_899AE9F4;
loc_899ADEC8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_899ADECC:
	// bl 0x899ad2f8
	ctx.lr = 0x899ADED0;
	sub_899AD2F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899ADED8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899ADEE0;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x899adecc
	if (ctx.cr6.lt) goto loc_899ADECC;
	// bl 0x899a9f48
	ctx.lr = 0x899ADEF8;
	sub_899A9F48(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899adf40
	if (ctx.cr6.eq) goto loc_899ADF40;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x899adf7c
	if (!ctx.cr6.eq) goto loc_899ADF7C;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x899adf7c
	if (!ctx.cr6.lt) goto loc_899ADF7C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x899ADF38;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899ADF40:
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899adf68
	if (!ctx.cr6.eq) goto loc_899ADF68;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899ae9f4
	if (!ctx.cr6.eq) goto loc_899AE9F4;
loc_899ADF68:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x899ADF70;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899ADF7C:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lhzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899ADFE4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899ADFEC;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x899adecc
	if (ctx.cr6.lt) goto loc_899ADECC;
	// bl 0x899a9f48
	ctx.lr = 0x899AE004;
	sub_899A9F48(ctx, base);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,150
	ctx.r6.s64 = ctx.r30.s64 + 150;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r30,192
	ctx.r29.s64 = ctx.r30.s64 + 192;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhzx r8,r31,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r6.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r6,r8,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lbzx r4,r6,r29
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r29.u32);
	// rlwinm r3,r4,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899ae0d0
	if (!ctx.cr6.eq) goto loc_899AE0D0;
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899ae0d0
	if (!ctx.cr6.eq) goto loc_899AE0D0;
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r8,r9,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899ae0d0
	if (ctx.cr6.eq) goto loc_899AE0D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,16
	ctx.r9.s64 = 16;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x899AE0BC;
	sub_8991B610(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AE0D0:
	// addi r29,r30,158
	ctx.r29.s64 = ctx.r30.s64 + 158;
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lhzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r30,196
	ctx.r8.s64 = ctx.r30.s64 + 196;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r28,r30,184
	ctx.r28.s64 = ctx.r30.s64 + 184;
	// sthx r7,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u16);
	// lis r5,-30294
	ctx.r5.s64 = -1985347584;
	// lbzx r4,r10,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// lbzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r5,-6248
	ctx.r10.s64 = ctx.r5.s64 + -6248;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x899ae128
	if (!ctx.cr6.eq) goto loc_899AE128;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991db50
	ctx.lr = 0x899AE120;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ae9f4
	if (ctx.cr6.eq) goto loc_899AE9F4;
loc_899AE128:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lwz r8,4(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r3,2
	ctx.r3.s64 = 2;
	// lhzx r6,r31,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 131072;
	// bl 0x899cc438
	ctx.lr = 0x899AE150;
	sub_899CC438(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// bne cr6,0x899ae9f4
	if (!ctx.cr6.eq) goto loc_899AE9F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AE178:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991baf8
	ctx.lr = 0x899AE180;
	sub_8991BAF8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x899adecc
	if (ctx.cr6.lt) goto loc_899ADECC;
	// bl 0x899a9f48
	ctx.lr = 0x899AE198;
	sub_899A9F48(ctx, base);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// clrlwi r11,r3,29
	ctx.r11.u64 = ctx.r3.u32 & 0x7;
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
	// stwx r10,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AE1FC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x899aa4a0
	ctx.lr = 0x899AE204;
	sub_899AA4A0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AE20C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991ba70
	ctx.lr = 0x899AE214;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899adec8
	if (ctx.cr6.lt) goto loc_899ADEC8;
	// mulli r28,r11,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// addi r9,r30,194
	ctx.r9.s64 = ctx.r30.s64 + 194;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r8,r30,68
	ctx.r8.s64 = ctx.r30.s64 + 68;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
	// lwzx r7,r28,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lbzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// stwx r7,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// beq cr6,0x899ae318
	if (ctx.cr6.eq) goto loc_899AE318;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r7,r30,44
	ctx.r7.s64 = ctx.r30.s64 + 44;
	// srawi r4,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 5;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r8,r28,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// rlwinm r5,r9,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r5,r26
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r26.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mullw r7,r10,r4
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi. r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x899ae288
	if (!ctx.cr0.lt) goto loc_899AE288;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
loc_899AE288:
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lhzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// add r29,r31,r8
	ctx.r29.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwzx r4,r31,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// add r27,r31,r7
	ctx.r27.u64 = ctx.r31.u64 + ctx.r7.u64;
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// srawi r7,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 8;
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// rotlwi r8,r3,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r3,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stw r5,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lhzx r8,r7,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r26.u32);
	// sthx r3,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u16);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rotlwi r10,r11,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// rlwinm r6,r7,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// stw r5,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r5.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// b 0x899ae354
	goto loc_899AE354;
loc_899AE318:
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// add r27,r31,r9
	ctx.r27.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stw r6,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// lwzx r10,r28,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r5,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
loc_899AE354:
	// lis r12,-8369
	ctx.r12.s64 = -548470784;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r8,r30,189
	ctx.r8.s64 = ctx.r30.s64 + 189;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,8368
	ctx.r12.s64 = 548405248;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwzx r9,r28,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// and r7,r9,r12
	ctx.r7.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x899ae3b0
	if (ctx.cr6.lt) goto loc_899AE3B0;
	// bne cr6,0x899ae3d0
	if (!ctx.cr6.eq) goto loc_899AE3D0;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x899ae3d0
	if (!ctx.cr6.eq) goto loc_899AE3D0;
	// b 0x899ae3c4
	goto loc_899AE3C4;
loc_899AE3B0:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899ae3d0
	if (ctx.cr6.eq) goto loc_899AE3D0;
loc_899AE3C4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
loc_899AE3D0:
	// addi r25,r30,188
	ctx.r25.s64 = ctx.r30.s64 + 188;
	// lbzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x899ae6f0
	if (ctx.cr6.gt) goto loc_899AE6F0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899ae558
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AE558;
	// bdzf 4*cr6+eq,0x899ae5ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AE5EC;
	// bdzf 4*cr6+eq,0x899ae670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AE670;
	// bne cr6,0x899ae6b8
	if (!ctx.cr6.eq) goto loc_899AE6B8;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r28,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899ae438
	if (ctx.cr6.eq) goto loc_899AE438;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u8);
	// bl 0x8991b770
	ctx.lr = 0x899AE430;
	sub_8991B770(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AE438:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899ae6f0
	if (ctx.cr6.eq) goto loc_899AE6F0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89932b18
	ctx.lr = 0x899AE454;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89932d30
	ctx.lr = 0x899AE460;
	sub_89932D30(ctx, base);
	// addi r10,r30,196
	ctx.r10.s64 = ctx.r30.s64 + 196;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r11,r9,-6308
	ctx.r11.s64 = ctx.r9.s64 + -6308;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lbzx r7,r28,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r4,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// bl 0x8991db50
	ctx.lr = 0x899AE48C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ae6f0
	if (ctx.cr6.eq) goto loc_899AE6F0;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r9,-6192
	ctx.r11.s64 = ctx.r9.s64 + -6192;
	// lhzx r28,r31,r10
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r31,r11,-2
	ctx.r31.s64 = ctx.r11.s64 + -2;
	// rlwinm r24,r28,1,22,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// extsh r25,r28
	ctx.r25.s64 = ctx.r28.s16;
loc_899AE4B4:
	// addi r10,r25,128
	ctx.r10.s64 = ctx.r25.s64 + 128;
	// lhz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// lhzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// rlwinm r6,r10,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r24,r26
	ctx.r5.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r26.u32);
	// rotlwi r4,r11,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rotlwi r3,r9,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// srawi r10,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 4;
	// lhzx r4,r6,r26
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r26.u32);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// mullw r4,r10,r3
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// mullw r22,r11,r5
	ctx.r22.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r5,r10,r5
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r3,r11,r3
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// srawi r10,r22,8
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r22.s32 >> 8;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r3,r4,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r3,224
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(224));
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// li r3,3
	ctx.r3.s64 = 3;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x899cda00
	ctx.lr = 0x899AE534;
	sub_899CDA00(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x899ae4b4
	if (ctx.cr6.lt) goto loc_899AE4B4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b770
	ctx.lr = 0x899AE550;
	sub_8991B770(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AE558:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r8,0
	ctx.r8.s64 = 0;
loc_899AE560:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// ble cr6,0x899ae57c
	if (!ctx.cr6.gt) goto loc_899AE57C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899AE57C:
	// bge cr6,0x899ae58c
	if (!ctx.cr6.lt) goto loc_899AE58C;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
loc_899AE58C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x899ae560
	if (ctx.cr6.lt) goto loc_899AE560;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r10,r11,23
	ctx.r10.u64 = ctx.r11.u32 & 0x1FF;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x899ae6f0
	if (!ctx.cr6.eq) goto loc_899AE6F0;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r6,r28,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// subfic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 <= 4294967295;
	ctx.r5.u64 = static_cast<uint64_t>(-1) - ctx.r7.u64;
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// stbx r4,r28,r11
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r4.u8);
	// lbzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r10.u8);
	// bl 0x8991b770
	ctx.lr = 0x899AE5E4;
	sub_8991B770(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AE5EC:
	// addi r29,r30,193
	ctx.r29.s64 = ctx.r30.s64 + 193;
	// addi r27,r30,192
	ctx.r27.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r28,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// lbzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x899ae6f0
	if (ctx.cr6.eq) goto loc_899AE6F0;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-40
	ctx.r5.s64 = -40;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x899d0428
	ctx.lr = 0x899AE624;
	sub_899D0428(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899ae6f0
	if (ctx.cr6.eq) goto loc_899AE6F0;
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r6,r28,r29
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// li r8,129
	ctx.r8.s64 = 129;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// subfic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 <= 4294967295;
	ctx.r5.u64 = static_cast<uint64_t>(-1) - ctx.r7.u64;
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// stbx r4,r28,r29
	REX_STORE_U8(ctx.r28.u32 + ctx.r29.u32, ctx.r4.u8);
	// lbzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r9,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r9.u8);
	// bl 0x8991b770
	ctx.lr = 0x899AE668;
	sub_8991B770(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AE670:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r28,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899ae6f0
	if (ctx.cr6.eq) goto loc_899AE6F0;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stbx r10,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r10.u8);
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// bl 0x8991b770
	ctx.lr = 0x899AE6B0;
	sub_8991B770(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AE6B8:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899ae6f0
	if (!ctx.cr6.eq) goto loc_899AE6F0;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r5,r28,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// subfic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r4.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stbx r3,r28,r11
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r3.u8);
	// stbx r9,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r9.u8);
loc_899AE6F0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b770
	ctx.lr = 0x899AE6F8;
	sub_8991B770(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AE700:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899AE708;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899adec8
	if (ctx.cr6.lt) goto loc_899ADEC8;
	// mulli r5,r11,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// rlwinm r4,r10,0,24,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// addi r3,r30,158
	ctx.r3.s64 = ctx.r30.s64 + 158;
	// addi r6,r30,158
	ctx.r6.s64 = ctx.r30.s64 + 158;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// addis r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -65536;
	// lwzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// addi r28,r10,9016
	ctx.r28.s64 = ctx.r10.s64 + 9016;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// lwzx r8,r5,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// rlwinm r8,r8,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// or r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 | ctx.r4.u64;
	// addi r25,r30,52
	ctx.r25.s64 = ctx.r30.s64 + 52;
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// addi r24,r30,12
	ctx.r24.s64 = ctx.r30.s64 + 12;
	// lhzx r3,r5,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r3.u32);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// sthx r3,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u16);
	// rlwinm r6,r3,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// rlwinm r4,r8,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r23,r30,16
	ctx.r23.s64 = ctx.r30.s64 + 16;
	// addi r22,r30,20
	ctx.r22.s64 = ctx.r30.s64 + 20;
	// lhzx r3,r6,r28
	ctx.r3.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// addi r21,r30,36
	ctx.r21.s64 = ctx.r30.s64 + 36;
	// lhzx r8,r4,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// addi r20,r30,32
	ctx.r20.s64 = ctx.r30.s64 + 32;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lwzx r6,r5,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// addi r19,r30,68
	ctx.r19.s64 = ctx.r30.s64 + 68;
	// mulli r4,r8,224
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(224));
	// srawi r8,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 8;
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r18,r30,68
	ctx.r18.s64 = ctx.r30.s64 + 68;
	// stwx r3,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r3.u32);
	// lwzx r8,r5,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r9.u32);
	// lwzx r9,r5,r24
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r4,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r4.u32);
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r3,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r3.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r31,r21
	REX_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r7,r31,r20
	REX_STORE_U32(ctx.r31.u32 + ctx.r20.u32, ctx.r7.u32);
	// lwzx r6,r5,r19
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r19.u32);
	// stwx r6,r31,r18
	REX_STORE_U32(ctx.r31.u32 + ctx.r18.u32, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AE874:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899AE87C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899ae89c
	if (!ctx.cr6.lt) goto loc_899AE89C;
loc_899AE88C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AE89C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x899a9f48
	ctx.lr = 0x899AE8A4;
	sub_899A9F48(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r29,r7,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stwx r29,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r9,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AE940:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899AE948;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x899ae88c
	if (ctx.cr6.lt) goto loc_899AE88C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x899a9f48
	ctx.lr = 0x899AE960;
	sub_899A9F48(ctx, base);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
loc_899AE9F4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BD628) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r9,r10,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r11,72
	ctx.r8.s64 = ctx.r11.s64 + 72;
	// li r7,1
	ctx.r7.s64 = 1;
	// sthx r7,r9,r8
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899BD858) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899BD860;
	__savegprlr_28(ctx, base);
	// stwu r1,-1072(r1)
	ea = -1072 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// sth r8,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,224
	ctx.r10.s64 = 224;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,-16
	ctx.r9.s64 = -16;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x89934b48
	ctx.lr = 0x899BD8A0;
	sub_89934B48(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30225
	ctx.r10.s64 = -1980825600;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r29,r11,23644
	ctx.r29.s64 = ctx.r11.s64 + 23644;
	// addi r30,r10,21840
	ctx.r30.s64 = ctx.r10.s64 + 21840;
loc_899BD8B4:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_899BD8C0:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r30,112
	ctx.r7.s64 = ctx.r30.s64 + 112;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,9
	ctx.r10.s64 = 9;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899BD908:
	// lhzu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x899bd908
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899BD908;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899bd8c0
	if (ctx.cr6.lt) goto loc_899BD8C0;
	// addi r8,r30,112
	ctx.r8.s64 = ctx.r30.s64 + 112;
	// addi r10,r30,1032
	ctx.r10.s64 = ctx.r30.s64 + 1032;
	// mulli r9,r31,306
	ctx.r9.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(306));
	// mulli r11,r31,396
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(396));
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x899BD950;
	sub_89935B08(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x899bd8b4
	if (ctx.cr6.lt) goto loc_899BD8B4;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r30,-80
	ctx.r11.s64 = ctx.r30.s64 + -80;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,216
	ctx.r9.s64 = 216;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,-20
	ctx.r7.s64 = -20;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899BD998;
	sub_89934FB8(ctx, base);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// addi r10,r30,-80
	ctx.r10.s64 = ctx.r30.s64 + -80;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r9,r9,3484
	ctx.r9.s64 = ctx.r9.s64 + 3484;
loc_899BD9A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r28,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899bd9a8
	if (ctx.cr6.lt) goto loc_899BD9A8;
	// stw r28,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r28,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// addi r1,r1,1072
	ctx.r1.s64 = ctx.r1.s64 + 1072;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BE1A8) {
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
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r3,26864(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// bl 0x89934058
	ctx.lr = 0x899BE1C0;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899be1dc
	if (!ctx.cr6.eq) goto loc_899BE1DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899BE1DC:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,-8080
	ctx.r3.s64 = ctx.r11.s64 + -8080;
	// bl 0x89915de0
	ctx.lr = 0x899BE1E8;
	sub_89915DE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899BE1F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899BE200;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// addi r24,r30,8
	ctx.r24.s64 = ctx.r30.s64 + 8;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwzx r9,r31,r24
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x899be4d4
	if (ctx.cr6.eq) goto loc_899BE4D4;
	// addi r6,r30,188
	ctx.r6.s64 = ctx.r30.s64 + 188;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899be308
	if (ctx.cr6.lt) goto loc_899BE308;
	// beq cr6,0x899be280
	if (ctx.cr6.eq) goto loc_899BE280;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x899be324
	if (!ctx.cr6.lt) goto loc_899BE324;
	// addi r10,r30,182
	ctx.r10.s64 = ctx.r30.s64 + 182;
	// addi r11,r30,162
	ctx.r11.s64 = ctx.r30.s64 + 162;
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// add r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 + ctx.r8.u64;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// cmplwi cr6,r8,60
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60, ctx.xer);
	// bne cr6,0x899be324
	if (!ctx.cr6.eq) goto loc_899BE324;
	// b 0x899be31c
	goto loc_899BE31C;
loc_899BE280:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x899be2ec
	if (ctx.cr6.eq) goto loc_899BE2EC;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// ori r4,r8,20077
	ctx.r4.u64 = ctx.r8.u64 | 20077;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// srawi r4,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 16;
	// clrlwi r11,r4,17
	ctx.r11.u64 = ctx.r4.u32 & 0x7FFF;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r11,r3,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 17) & 0x1FFFF;
	// stbx r10,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// sthx r11,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u16);
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// b 0x899be324
	goto loc_899BE324;
loc_899BE2EC:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,2
	ctx.r10.s64 = 2;
	// stbx r10,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u8);
	// sthx r5,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u16);
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// b 0x899be324
	goto loc_899BE324;
loc_899BE308:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r10,288
	ctx.r10.s64 = 18874368;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899be324
	if (!ctx.cr6.lt) goto loc_899BE324;
loc_899BE31C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
loc_899BE324:
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 128;
	// lwzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// rlwinm r3,r4,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r3,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r28.u32);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mullw r4,r6,r9
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r3,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r3.u32);
	// lhzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// addic. r11,r8,-160
	ctx.xer.ca = ctx.r8.u32 > 159;
	ctx.r11.s64 = ctx.r8.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899be388
	if (!ctx.cr0.lt) goto loc_899BE388;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899BE388:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// ble cr6,0x899be39c
	if (!ctx.cr6.gt) goto loc_899BE39C;
loc_899BE390:
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899BE39C:
	// rlwinm r11,r10,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// lhzx r7,r11,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mullw r4,r6,r9
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r3,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
	// lhzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r11,r10,-512
	ctx.xer.ca = ctx.r10.u32 > 511;
	ctx.r11.s64 = ctx.r10.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899be3dc
	if (!ctx.cr0.lt) goto loc_899BE3DC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899BE3DC:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x899be390
	if (ctx.cr6.gt) goto loc_899BE390;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932b18
	ctx.lr = 0x899BE3EC;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932d30
	ctx.lr = 0x899BE3F8;
	sub_89932D30(ctx, base);
	// addi r27,r30,158
	ctx.r27.s64 = ctx.r30.s64 + 158;
	// lwzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lis r10,-21846
	ctx.r10.s64 = -1431699456;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// ori r7,r10,43691
	ctx.r7.u64 = ctx.r10.u64 | 43691;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mulhwu r6,r11,r7
	ctx.r6.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// rlwinm r10,r6,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 4;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r5,r7,27
	ctx.r5.u64 = ctx.r7.u32 & 0x1F;
	// subf r4,r6,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r6.u64;
	// stwx r5,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// stwx r4,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r4.u32);
	// bl 0x8991b610
	ctx.lr = 0x899BE448;
	sub_8991B610(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BE458;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899be4dc
	if (ctx.cr6.eq) goto loc_899BE4DC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899BE468;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899be4dc
	if (ctx.cr6.eq) goto loc_899BE4DC;
	// lhzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// lis r8,-30296
	ctx.r8.s64 = -1985478656;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// addi r8,r8,-27412
	ctx.r8.s64 = ctx.r8.s64 + -27412;
	// rlwinm r11,r4,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// li r3,3
	ctx.r3.s64 = 3;
	// lhzx r5,r5,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// rotlwi r4,r5,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// lhzx r5,r11,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// rotlwi r4,r5,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -262144;
	// bl 0x899cc518
	ctx.lr = 0x899BE4C4;
	sub_899CC518(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932a38
	ctx.lr = 0x899BE4CC;
	sub_89932A38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899BE4D4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x899c40c0
	ctx.lr = 0x899BE4DC;
	sub_899C40C0(ctx, base);
loc_899BE4DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C0280) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x899C0288;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwzx r9,r31,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bgt cr6,0x899c0c2c
	if (ctx.cr6.gt) goto loc_899C0C2C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899c0740
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C0740;
	// bdzf 4*cr6+eq,0x899c0740
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C0740;
	// bdzf 4*cr6+eq,0x899c0740
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C0740;
	// bdzf 4*cr6+eq,0x899c0740
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C0740;
	// bne cr6,0x899c0b30
	if (!ctx.cr6.eq) goto loc_899C0B30;
	// addi r8,r30,188
	ctx.r8.s64 = ctx.r30.s64 + 188;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x899c0530
	if (ctx.cr6.gt) goto loc_899C0530;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899c031c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C031C;
	// bdzf 4*cr6+eq,0x899c04a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C04A0;
	// bne cr6,0x899c0500
	if (!ctx.cr6.eq) goto loc_899C0500;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpwi cr6,r7,256
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 256, ctx.xer);
	// bge cr6,0x899c0530
	if (!ctx.cr6.lt) goto loc_899C0530;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x899c0530
	goto loc_899C0530;
loc_899C031C:
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r11,7200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7200, ctx.xer);
	// ble cr6,0x899c0344
	if (!ctx.cr6.gt) goto loc_899C0344;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x899c0530
	goto loc_899C0530;
loc_899C0344:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addic. r11,r9,-160
	ctx.xer.ca = ctx.r9.u32 > 159;
	ctx.r11.s64 = ctx.r9.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c035c
	if (!ctx.cr0.lt) goto loc_899C035C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C035C:
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bge cr6,0x899c0488
	if (!ctx.cr6.lt) goto loc_899C0488;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addic. r11,r9,-512
	ctx.xer.ca = ctx.r9.u32 > 511;
	ctx.r11.s64 = ctx.r9.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c037c
	if (!ctx.cr0.lt) goto loc_899C037C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C037C:
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bge cr6,0x899c0488
	if (!ctx.cr6.lt) goto loc_899C0488;
	// addi r8,r30,189
	ctx.r8.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x899c03e4
	if (ctx.cr6.lt) goto loc_899C03E4;
	// bne cr6,0x899c0438
	if (!ctx.cr6.eq) goto loc_899C0438;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// lbzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// add r7,r4,r6
	ctx.r7.u64 = ctx.r4.u64 + ctx.r6.u64;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// sthx r7,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u16);
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// cmplwi cr6,r6,64
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 64, ctx.xer);
	// bne cr6,0x899c0438
	if (!ctx.cr6.eq) goto loc_899C0438;
	// stbx r29,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x899c0438
	goto loc_899C0438;
loc_899C03E4:
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r6,16838
	ctx.r6.s64 = 1103495168;
	// lis r3,-30294
	ctx.r3.s64 = -1985347584;
	// ori r5,r6,20077
	ctx.r5.u64 = ctx.r6.u64 | 20077;
	// addi r6,r3,1944
	ctx.r6.s64 = ctx.r3.s64 + 1944;
	// lwz r11,-9212(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -9212);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// stbx r4,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u8);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r7)
	REX_STORE_U32(ctx.r7.u32 + -9212, ctx.r11.u32);
	// srawi r3,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// clrlwi r11,r3,17
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,18,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1FFFE;
	// lhzx r8,r10,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// sthx r8,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u16);
loc_899C0438:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// bne cr6,0x899c046c
	if (!ctx.cr6.eq) goto loc_899C046C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899c0530
	if (!ctx.cr6.lt) goto loc_899C0530;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x899c0530
	goto loc_899C0530;
loc_899C046C:
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x899c0530
	if (!ctx.cr6.gt) goto loc_899C0530;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x899c0530
	goto loc_899C0530;
loc_899C0488:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x89932b18
	ctx.lr = 0x899C0490;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x89932d30
	ctx.lr = 0x899C049C;
	sub_89932D30(ctx, base);
	// b 0x899c0530
	goto loc_899C0530;
loc_899C04A0:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// addic. r11,r7,-160
	ctx.xer.ca = ctx.r7.u32 > 159;
	ctx.r11.s64 = ctx.r7.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c04b8
	if (!ctx.cr0.lt) goto loc_899C04B8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C04B8:
	// cmpwi cr6,r11,416
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 416, ctx.xer);
	// bge cr6,0x899c04e0
	if (!ctx.cr6.lt) goto loc_899C04E0;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// addic. r11,r7,-512
	ctx.xer.ca = ctx.r7.u32 > 511;
	ctx.r11.s64 = ctx.r7.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c04d8
	if (!ctx.cr0.lt) goto loc_899C04D8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C04D8:
	// cmpwi cr6,r11,416
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 416, ctx.xer);
	// blt cr6,0x899c0530
	if (ctx.cr6.lt) goto loc_899C0530;
loc_899C04E0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r7,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u8);
	// stbx r29,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u8);
	// stwx r29,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u32);
	// b 0x899c0530
	goto loc_899C0530;
loc_899C0500:
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
	// bne cr6,0x899c0530
	if (!ctx.cr6.eq) goto loc_899C0530;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// stwx r29,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// lbz r11,32555(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 32555);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,32555(r10)
	REX_STORE_U8(ctx.r10.u32 + 32555, ctx.r9.u8);
loc_899C0530:
	// addi r25,r30,158
	ctx.r25.s64 = ctx.r30.s64 + 158;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// lhzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r25.u32);
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lwzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r10,r11,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lwzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// lhzx r6,r4,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// mullw r6,r4,r11
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mullw r4,r10,r11
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r9,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// bl 0x8991b7f8
	ctx.lr = 0x899C05B4;
	sub_8991B7F8(ctx, base);
	// addi r7,r30,100
	ctx.r7.s64 = ctx.r30.s64 + 100;
	// addi r6,r30,104
	ctx.r6.s64 = ctx.r30.s64 + 104;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// li r11,510
	ctx.r11.s64 = 510;
	// addi r10,r10,12032
	ctx.r10.s64 = ctx.r10.s64 + 12032;
	// lwzx r5,r31,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r4,r31,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// rlwinm r7,r9,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r6,r8,9,0,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
loc_899C05E0:
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r24,r10,4
	ctx.r24.s64 = ctx.r10.s64 + 4;
	// lwzx r23,r3,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r23,r3,r5
	REX_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r23.u32);
	// lwzx r5,r4,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// stwx r5,r4,r24
	REX_STORE_U32(ctx.r4.u32 + ctx.r24.u32, ctx.r5.u32);
	// bge cr6,0x899c05e0
	if (!ctx.cr6.lt) goto loc_899C05E0;
	// lhzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// lhzx r7,r31,r26
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r6,r8,11,0,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0xFFFFF800;
	// rotlwi r5,r11,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhzx r4,r31,r25
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r25.u32);
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// or r8,r5,r3
	ctx.r8.u64 = ctx.r5.u64 | ctx.r3.u64;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stwx r11,r6,r10
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x8991db50
	ctx.lr = 0x899C0654;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c0c2c
	if (ctx.cr6.eq) goto loc_899C0C2C;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r23,4
	ctx.r23.s64 = 262144;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r19,r8
	ctx.r19.s64 = ctx.r8.s16;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// addi r7,r19,128
	ctx.r7.s64 = ctx.r19.s64 + 128;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// rlwinm r22,r19,1,22,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0x3FE;
	// rlwinm r21,r7,1,22,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r20,r10,1936
	ctx.r20.s64 = ctx.r10.s64 + 1936;
loc_899C0690:
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lhzx r10,r22,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r28.u32);
	// lhzx r9,r21,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r28.u32);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwzx r7,r31,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// mullw r5,r11,r8
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// srawi r3,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 8;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// mullw r6,r11,r6
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// subf r5,r3,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r3.u64;
	// rlwinm r4,r8,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// mulli r3,r5,224
	ctx.r3.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(224));
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// srawi r8,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 8;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r25,r23,r10
	ctx.r25.u64 = ctx.r10.u64 - ctx.r23.u64;
	// add r24,r11,r7
	ctx.r24.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_899C06F0:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// rlwinm r7,r11,13,0,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899cc2e0
	ctx.lr = 0x899C070C;
	sub_899CC2E0(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x899c06f0
	if (ctx.cr6.lt) goto loc_899C06F0;
	// addi r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x899c0690
	if (ctx.cr6.lt) goto loc_899C0690;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899C0740:
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r24,r10,32768
	ctx.r24.u64 = ctx.r10.u64 | 32768;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899c0858
	if (ctx.cr6.eq) goto loc_899C0858;
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
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// blt cr6,0x899c0a80
	if (ctx.cr6.lt) goto loc_899C0A80;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,200
	ctx.r6.s64 = ctx.r30.s64 + 200;
	// addi r7,r30,207
	ctx.r7.s64 = ctx.r30.s64 + 207;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r27,r31,r8
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// lwzx r28,r31,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r8,r31,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lbzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// stbx r29,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u8);
	// beq cr6,0x899c0808
	if (ctx.cr6.eq) goto loc_899C0808;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x899c07bc
	if (ctx.cr6.eq) goto loc_899C07BC;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x899c080c
	goto loc_899C080C;
loc_899C07BC:
	// addi r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 + 104;
	// addi r9,r30,100
	ctx.r9.s64 = ctx.r30.s64 + 100;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// addi r26,r7,9448
	ctx.r26.s64 = ctx.r7.s64 + 9448;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// lwzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// stbx r29,r9,r26
	REX_STORE_U8(ctx.r9.u32 + ctx.r26.u32, ctx.r29.u8);
	// stbx r29,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r29.u8);
	// bl 0x899d4440
	ctx.lr = 0x899C07F4;
	sub_899D4440(ctx, base);
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// lbz r11,32555(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 32555);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,32555(r10)
	REX_STORE_U8(ctx.r10.u32 + 32555, ctx.r9.u8);
	// b 0x899c0818
	goto loc_899C0818;
loc_899C0808:
	// li r4,4
	ctx.r4.s64 = 4;
loc_899C080C:
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x899d4440
	ctx.lr = 0x899C0818;
	sub_899D4440(ctx, base);
loc_899C0818:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,7935(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7935);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899c0850
	if (ctx.cr6.eq) goto loc_899C0850;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r8,r10,-25920
	ctx.r8.s64 = ctx.r10.s64 + -25920;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x899cba78
	ctx.lr = 0x899C0850;
	sub_899CBA78(ctx, base);
loc_899C0850:
	// stwx r29,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// b 0x899c0a80
	goto loc_899C0A80;
loc_899C0858:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899C0860;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899c0878
	if (!ctx.cr6.lt) goto loc_899C0878;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x899c0130
	ctx.lr = 0x899C0874;
	sub_899C0130(ctx, base);
	// b 0x899c0a80
	goto loc_899C0A80;
loc_899C0878:
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r28,r11,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lhzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r25.u32);
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// rlwinm r11,r10,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// lhzx r7,r28,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x899c08c0
	if (!ctx.cr6.eq) goto loc_899C08C0;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lhzx r8,r28,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lhzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x899c08c4
	if (ctx.cr6.eq) goto loc_899C08C4;
loc_899C08C0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_899C08C4:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// bl 0x8991baf8
	ctx.lr = 0x899C08D8;
	sub_8991BAF8(ctx, base);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x899c08f8
	if (!ctx.cr6.lt) goto loc_899C08F8;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// ori r12,r12,49151
	ctx.r12.u64 = ctx.r12.u64 | 49151;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
loc_899C08F8:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// addi r9,r30,104
	ctx.r9.s64 = ctx.r30.s64 + 104;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// addi r4,r30,158
	ctx.r4.s64 = ctx.r30.s64 + 158;
	// lbzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r6,r8,12032
	ctx.r6.s64 = ctx.r8.s64 + 12032;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// lwzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r3,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r9,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// lwzx r11,r8,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// sthx r5,r31,r25
	REX_STORE_U16(ctx.r31.u32 + ctx.r25.u32, ctx.r5.u16);
	// sthx r7,r31,r27
	REX_STORE_U16(ctx.r31.u32 + ctx.r27.u32, ctx.r7.u16);
	// sthx r11,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u16);
	// bl 0x8991b7f8
	ctx.lr = 0x899C0968;
	sub_8991B7F8(ctx, base);
	// addi r7,r30,200
	ctx.r7.s64 = ctx.r30.s64 + 200;
	// addi r6,r30,206
	ctx.r6.s64 = ctx.r30.s64 + 206;
	// addi r5,r30,200
	ctx.r5.s64 = ctx.r30.s64 + 200;
	// lbzx r11,r28,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// lbzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r4,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u8);
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x899c0a80
	if (!ctx.cr6.eq) goto loc_899C0A80;
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
	// beq cr6,0x899c0a80
	if (ctx.cr6.eq) goto loc_899C0A80;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C09BC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c0a80
	if (ctx.cr6.eq) goto loc_899C0A80;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r23,4
	ctx.r23.s64 = 262144;
	// addi r28,r10,9016
	ctx.r28.s64 = ctx.r10.s64 + 9016;
	// addi r26,r11,1952
	ctx.r26.s64 = ctx.r11.s64 + 1952;
loc_899C09D8:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r8,r29,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r6,r8,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r26.u32);
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// rotlwi r4,r6,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r4,r6,128
	ctx.r4.s64 = ctx.r6.s64 + 128;
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// rlwinm r8,r4,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r5,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// lhzx r8,r8,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r28.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r5,r4,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// rlwinm r21,r8,16,0,15
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// srawi r5,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 8;
	// srawi r4,r21,8
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r21.s32 >> 8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r4,r8,224
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(224));
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r23,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r23.u64;
	// bl 0x899cce38
	ctx.lr = 0x899C0A6C;
	sub_899CCE38(ctx, base);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x899c09d8
	if (ctx.cr6.lt) goto loc_899C09D8;
loc_899C0A80:
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
	// beq cr6,0x899c0c2c
	if (ctx.cr6.eq) goto loc_899C0C2C;
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899c0c2c
	if (ctx.cr6.eq) goto loc_899C0C2C;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C0ABC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c0c2c
	if (ctx.cr6.eq) goto loc_899C0C2C;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,200
	ctx.r9.s64 = ctx.r30.s64 + 200;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r29,r8,10
	ctx.r29.s64 = ctx.r8.s64 + 655360;
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899C0AE8;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c0c2c
	if (ctx.cr6.eq) goto loc_899C0C2C;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899C0AFC;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c0c2c
	if (!ctx.cr6.eq) goto loc_899C0C2C;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r8,r10,-26008
	ctx.r8.s64 = ctx.r10.s64 + -26008;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x899cbb90
	ctx.lr = 0x899C0B28;
	sub_899CBB90(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899C0B30:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991baf8
	ctx.lr = 0x899C0B38;
	sub_8991BAF8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899c0b54
	if (!ctx.cr6.lt) goto loc_899C0B54;
	// bl 0x899c0130
	ctx.lr = 0x899C0B4C;
	sub_899C0130(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899C0B54:
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// lhzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthx r11,r31,r28
	REX_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u16);
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stwx r9,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// bl 0x89932b18
	ctx.lr = 0x899C0B88;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x89932d30
	ctx.lr = 0x899C0B94;
	sub_89932D30(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991b770
	ctx.lr = 0x899C0B9C;
	sub_8991B770(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C0BAC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c0c2c
	if (ctx.cr6.eq) goto loc_899C0C2C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899C0BBC;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c0c2c
	if (ctx.cr6.eq) goto loc_899C0C2C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r5,r8,9016
	ctx.r5.s64 = ctx.r8.s64 + 9016;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// lwzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// rlwinm r8,r6,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r4,r6,128
	ctx.r4.s64 = ctx.r6.s64 + 128;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r11,r4,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// rotlwi r4,r8,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lhzx r8,r11,r5
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// rotlwi r4,r8,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x899cce38
	ctx.lr = 0x899C0C24;
	sub_899CCE38(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C0C2C;
	sub_89932A38(ctx, base);
loc_899C0C2C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C6B08) {
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
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r3,26864(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// bl 0x89934058
	ctx.lr = 0x899C6B20;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c6b3c
	if (!ctx.cr6.eq) goto loc_899C6B3C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899C6B3C:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,27104
	ctx.r3.s64 = ctx.r11.s64 + 27104;
	// bl 0x89915de0
	ctx.lr = 0x899C6B48;
	sub_89915DE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899C6E40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r31,r11,19312
	ctx.r31.s64 = ctx.r11.s64 + 19312;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// addi r8,r31,-576
	ctx.r8.s64 = ctx.r31.s64 + -576;
	// stb r9,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// li r10,216
	ctx.r10.s64 = 216;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-20
	ctx.r9.s64 = -20;
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934b48
	ctx.lr = 0x899C6E94;
	sub_89934B48(ctx, base);
	// lis r7,-30305
	ctx.r7.s64 = -1986068480;
	// addi r5,r31,-576
	ctx.r5.s64 = ctx.r31.s64 + -576;
	// addi r6,r7,19608
	ctx.r6.s64 = ctx.r7.s64 + 19608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935610
	ctx.lr = 0x899C6EB0;
	sub_89935610(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899C73B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899C73C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-1376(r1)
	ea = -1376 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// sth r8,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,224
	ctx.r10.s64 = 224;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,-16
	ctx.r9.s64 = -16;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89934b48
	ctx.lr = 0x899C7400;
	sub_89934B48(ctx, base);
	// addi r7,r1,1264
	ctx.r7.s64 = ctx.r1.s64 + 1264;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,224
	ctx.r5.s64 = 224;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// sth r6,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r6.u16);
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r5,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// li r9,-16
	ctx.r9.s64 = -16;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89934b48
	ctx.lr = 0x899C743C;
	sub_89934B48(ctx, base);
	// addi r4,r1,1282
	ctx.r4.s64 = ctx.r1.s64 + 1282;
	// li r3,3
	ctx.r3.s64 = 3;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-16
	ctx.r9.s64 = -16;
	// sth r3,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r3.u16);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x89934b48
	ctx.lr = 0x899C7470;
	sub_89934B48(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30224
	ctx.r10.s64 = -1980760064;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r29,r11,19536
	ctx.r29.s64 = ctx.r11.s64 + 19536;
	// addi r30,r10,19712
	ctx.r30.s64 = ctx.r10.s64 + 19712;
loc_899C7484:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_899C7490:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r7,r30,1584
	ctx.r7.s64 = ctx.r30.s64 + 1584;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r11,9
	ctx.r11.s64 = 9;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_899C74D4:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x899c74d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899C74D4;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899c7490
	if (ctx.cr6.lt) goto loc_899C7490;
	// addi r9,r30,1584
	ctx.r9.s64 = ctx.r30.s64 + 1584;
	// mulli r10,r31,306
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(306));
	// mulli r11,r31,396
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(396));
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x899C7518;
	sub_89935B08(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899c7484
	if (ctx.cr6.lt) goto loc_899C7484;
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C85B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899C85C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r8,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u32);
	// lhzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// addic. r11,r6,-160
	ctx.xer.ca = ctx.r6.u32 > 159;
	ctx.r11.s64 = ctx.r6.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c8600
	if (!ctx.cr0.lt) goto loc_899C8600;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C8600:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// ble cr6,0x899c8618
	if (!ctx.cr6.gt) goto loc_899C8618;
loc_899C8608:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899C8618:
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// lhzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addic. r11,r8,-512
	ctx.xer.ca = ctx.r8.u32 > 511;
	ctx.r11.s64 = ctx.r8.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c8644
	if (!ctx.cr0.lt) goto loc_899C8644;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C8644:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x899c8608
	if (ctx.cr6.gt) goto loc_899C8608;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r27,r30,36
	ctx.r27.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r26,r30,32
	ctx.r26.s64 = ctx.r30.s64 + 32;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,2
	ctx.r4.s64 = 2;
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
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r6.u32);
	// bl 0x8991db50
	ctx.lr = 0x899C86B4;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c86e4
	if (ctx.cr6.eq) goto loc_899C86E4;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lwzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lwzx r4,r31,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// sthx r6,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u16);
	// bl 0x899cc2e0
	ctx.lr = 0x899C86E4;
	sub_899CC2E0(ctx, base);
loc_899C86E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C9040) {
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
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r3,26864(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// bl 0x89934058
	ctx.lr = 0x899C9058;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c9070
	if (!ctx.cr6.eq) goto loc_899C9070;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899C9070:
	// lis r11,-30307
	ctx.r11.s64 = -1986199552;
	// addi r3,r11,-28832
	ctx.r3.s64 = ctx.r11.s64 + -28832;
	// bl 0x89915de0
	ctx.lr = 0x899C907C;
	sub_89915DE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899C9478) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r31,r11,27336
	ctx.r31.s64 = ctx.r11.s64 + 27336;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// addi r8,r31,-312
	ctx.r8.s64 = ctx.r31.s64 + -312;
	// stb r9,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// li r10,208
	ctx.r10.s64 = 208;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-24
	ctx.r9.s64 = -24;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x89934b48
	ctx.lr = 0x899C94CC;
	sub_89934B48(ctx, base);
	// lis r7,-30305
	ctx.r7.s64 = -1986068480;
	// addi r5,r31,-312
	ctx.r5.s64 = ctx.r31.s64 + -312;
	// addi r6,r7,17380
	ctx.r6.s64 = ctx.r7.s64 + 17380;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x899C94E8;
	sub_89935B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899C9BD0) {
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
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r3,26864(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// bl 0x89934058
	ctx.lr = 0x899C9BE8;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c9c00
	if (!ctx.cr6.eq) goto loc_899C9C00;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899C9C00:
	// lis r11,-30307
	ctx.r11.s64 = -1986199552;
	// addi r3,r11,-25888
	ctx.r3.s64 = ctx.r11.s64 + -25888;
	// bl 0x89915de0
	ctx.lr = 0x899C9C0C;
	sub_89915DE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899CA478) {
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
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r3,26864(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// bl 0x89934058
	ctx.lr = 0x899CA490;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899ca4ac
	if (!ctx.cr6.eq) goto loc_899CA4AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899CA4AC:
	// lis r11,-30307
	ctx.r11.s64 = -1986199552;
	// addi r3,r11,-23656
	ctx.r3.s64 = ctx.r11.s64 + -23656;
	// bl 0x89915de0
	ctx.lr = 0x899CA4B8;
	sub_89915DE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899CA890) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899CA898;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r9,-30223
	ctx.r9.s64 = -1980694528;
	// addi r10,r11,2864
	ctx.r10.s64 = ctx.r11.s64 + 2864;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r9,-32600
	ctx.r29.s64 = ctx.r9.s64 + -32600;
	// lbz r11,2864(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899ca9bc
	if (ctx.cr6.eq) goto loc_899CA9BC;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
loc_899CA8C0:
	// lbz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lbz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r5,-1(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + -1);
	// add r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 + ctx.r10.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// lbz r27,-2(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + -2);
	// neg r8,r5
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbz r26,-3(r31)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r31.u32 + -3);
	// stb r9,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// neg r9,r7
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// rlwinm r28,r6,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// addi r11,r29,-312
	ctx.r11.s64 = ctx.r29.s64 + -312;
	// sth r3,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r3.u16);
	// srawi r4,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 1;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r5,r27
	ctx.r5.s64 = ctx.r27.s8;
	// extsb r4,r26
	ctx.r4.s64 = ctx.r26.s8;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// bl 0x89934b48
	ctx.lr = 0x899CA92C;
	sub_89934B48(ctx, base);
	// addi r11,r29,-624
	ctx.r11.s64 = ctx.r29.s64 + -624;
	// lbz r8,2(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lbz r3,-2(r31)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r6,-1(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + -1);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// neg r4,r7
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lbz r5,-4(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + -4);
	// neg r3,r6
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// lbz r9,-3(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + -3);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// srawi r8,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// clrlwi r28,r5,16
	ctx.r28.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// sth r28,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89934d80
	ctx.lr = 0x899CA99C;
	sub_89934D80(ctx, base);
	// lbz r10,-4(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + -4);
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -4);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899ca8c0
	if (!ctx.cr6.eq) goto loc_899CA8C0;
loc_899CA9BC:
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r24,2048
	ctx.r24.s64 = 134217728;
	// lis r25,1024
	ctx.r25.s64 = 67108864;
	// lis r26,4096
	ctx.r26.s64 = 268435456;
	// addi r27,r11,17100
	ctx.r27.s64 = ctx.r11.s64 + 17100;
loc_899CA9DC:
	// addi r11,r29,-1416
	ctx.r11.s64 = ctx.r29.s64 + -1416;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r29,-312
	ctx.r5.s64 = ctx.r29.s64 + -312;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ori r3,r31,32
	ctx.r3.u64 = ctx.r31.u64 | 32;
	// bl 0x89935b08
	ctx.lr = 0x899CA9F8;
	sub_89935B08(ctx, base);
	// ori r3,r28,32
	ctx.r3.u64 = ctx.r28.u64 | 32;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x89935a00
	ctx.lr = 0x899CAA04;
	sub_89935A00(ctx, base);
	// add r31,r31,r24
	ctx.r31.u64 = ctx.r31.u64 + ctx.r24.u64;
	// addi r30,r30,396
	ctx.r30.s64 = ctx.r30.s64 + 396;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x899ca9dc
	if (ctx.cr6.lt) goto loc_899CA9DC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CB940) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899CB948;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x899cb880
	ctx.lr = 0x899CB964;
	sub_899CB880(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x899cb97c
	if (!ctx.cr6.lt) goto loc_899CB97C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899CB97C:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// addi r9,r10,7904
	ctx.r9.s64 = ctx.r10.s64 + 7904;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r6,r8,9016
	ctx.r6.s64 = ctx.r8.s64 + 9016;
	// rlwinm r5,r30,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// rlwinm r4,r7,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// srawi r11,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 4;
	// addi r10,r3,-8688
	ctx.r10.s64 = ctx.r3.s64 + -8688;
	// lhzx r9,r5,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lhzx r8,r4,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899cb6e0
	ctx.lr = 0x899CB9E4;
	sub_899CB6E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,16744
	ctx.r11.s64 = ctx.r10.s64 + 16744;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbzx r3,r8,r7
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x89936360
	ctx.lr = 0x899CBA04;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CBD98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899cbdf4
	if (ctx.cr6.lt) goto loc_899CBDF4;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899cbdf4
	if (ctx.cr6.gt) goto loc_899CBDF4;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addis r11,r10,-120
	ctx.r11.s64 = ctx.r10.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cbddc
	if (!ctx.cr0.lt) goto loc_899CBDDC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CBDDC:
	// lis r10,112
	ctx.r10.s64 = 7340032;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r31,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 31;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// adde r11,r9,r31
	temp.u8 = (ctx.r9.u32 + ctx.r31.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x899cbdf8
	goto loc_899CBDF8;
loc_899CBDF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899CBDF8:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899cbe1c
	if (!ctx.cr6.eq) goto loc_899CBE1C;
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
loc_899CBE1C:
	// bl 0x899cbc30
	ctx.lr = 0x899CBE20;
	sub_899CBC30(ctx, base);
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

DEFINE_REX_FUNC(sub_899CC3D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899cc41c
	if (ctx.cr6.lt) goto loc_899CC41C;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899cc41c
	if (ctx.cr6.gt) goto loc_899CC41C;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addis r11,r10,-120
	ctx.r11.s64 = ctx.r10.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cc404
	if (!ctx.cr0.lt) goto loc_899CC404;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CC404:
	// lis r10,112
	ctx.r10.s64 = 7340032;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// adde r11,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x899cc420
	goto loc_899CC420;
loc_899CC41C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899CC420:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899cc434
	if (!ctx.cr6.eq) goto loc_899CC434;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_899CC434:
	// b 0x899cc2e0
	sub_899CC2E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CCADC) {
	REX_FUNC_PROLOGUE();
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899ccb04
	if (ctx.cr6.eq) goto loc_899CCB04;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899ccb04
	if (ctx.cr6.eq) goto loc_899CCB04;
	// lhz r10,134(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// lhz r9,134(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 134);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899ccb08
	if (ctx.cr6.eq) goto loc_899CCB08;
loc_899CCB04:
	// b 0x899cc7a0
	sub_899CC7A0(ctx, base);
	return;
loc_899CCB08:
	// lhz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// lhz r8,60(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 60);
	// lhz r6,64(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 64);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r5,52(r3)
	REX_STORE_U16(ctx.r3.u32 + 52, ctx.r5.u16);
	// lhz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// sth r9,56(r3)
	REX_STORE_U16(ctx.r3.u32 + 56, ctx.r9.u16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899CCB88) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x899CCB90;
	__savegprlr_18(ctx, base);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,16838
	ctx.r10.s64 = 1103495168;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// ori r10,r10,20077
	ctx.r10.u64 = ctx.r10.u64 | 20077;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// lis r31,-30305
	ctx.r31.s64 = -1986068480;
	// li r25,0
	ctx.r25.s64 = 0;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r10,r31,15848
	ctx.r10.s64 = ctx.r31.s64 + 15848;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r3,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r31.s32 >> 16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r3,19,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 19) & 0x3;
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// addi r28,r11,64
	ctx.r28.s64 = ctx.r11.s64 + 64;
	// lis r31,128
	ctx.r31.s64 = 8388608;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lhz r24,-21396(r3)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r3.u32 + -21396);
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// extsh r29,r6
	ctx.r29.s64 = ctx.r6.s16;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r26,r31,32896
	ctx.r26.u64 = ctx.r31.u64 | 32896;
	// li r19,519
	ctx.r19.s64 = 519;
	// li r20,192
	ctx.r20.s64 = 192;
	// addi r22,r11,9016
	ctx.r22.s64 = ctx.r11.s64 + 9016;
	// addi r27,r10,11272
	ctx.r27.s64 = ctx.r10.s64 + 11272;
loc_899CCC10:
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r31,r28,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r18,4(r9)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r18,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r18.u32);
	// sth r6,116(r11)
	REX_STORE_U16(ctx.r11.u32 + 116, ctx.r6.u16);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r7.u32);
	// stw r18,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r18.u32);
	// lwz r18,8(r9)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r18,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r18.u32);
	// lwz r10,40(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 40);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r10,36(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwzx r31,r31,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stw r31,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// sth r24,134(r11)
	REX_STORE_U16(ctx.r11.u32 + 134, ctx.r24.u16);
	// stw r25,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r25.u32);
	// stw r26,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r26.u32);
	// stw r4,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r4.u32);
	// stw r5,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// blt cr6,0x899cccd8
	if (ctx.cr6.lt) goto loc_899CCCD8;
	// bne cr6,0x899ccd10
	if (!ctx.cr6.eq) goto loc_899CCD10;
	// addi r10,r29,128
	ctx.r10.s64 = ctx.r29.s64 + 128;
	// rotlwi r3,r18,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r18.u32, 0);
	// rlwinm r18,r10,1,22,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// srawi r10,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 4;
	// lhzx r3,r18,r22
	ctx.r3.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r22.u32);
	// b 0x899ccce8
	goto loc_899CCCE8;
loc_899CCCD8:
	// addi r3,r29,128
	ctx.r3.s64 = ctx.r29.s64 + 128;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// rlwinm r3,r3,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r3,r22
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r22.u32);
loc_899CCCE8:
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// rlwinm r31,r29,1,22,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// stw r3,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lhzx r3,r31,r22
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// srawi r3,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 8;
	// stw r3,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
loc_899CCD10:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// stw r21,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r21.u32);
	// stb r25,138(r11)
	REX_STORE_U8(ctx.r11.u32 + 138, ctx.r25.u8);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// sth r19,68(r11)
	REX_STORE_U16(ctx.r11.u32 + 68, ctx.r19.u16);
	// stb r20,71(r11)
	REX_STORE_U8(ctx.r11.u32 + 71, ctx.r20.u8);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r20,70(r11)
	REX_STORE_U8(ctx.r11.u32 + 70, ctx.r20.u8);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x899ccc10
	if (ctx.cr6.lt) goto loc_899CCC10;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CE234) {
	REX_FUNC_PROLOGUE();
	// lbz r10,139(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 139);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,139(r3)
	REX_STORE_U8(ctx.r3.u32 + 139, ctx.r9.u8);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r8,139(r3)
	REX_STORE_U8(ctx.r3.u32 + 139, ctx.r8.u8);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899CE510) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899CE518;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x89919d28
	ctx.lr = 0x899CE53C;
	sub_89919D28(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899ce730
	if (ctx.cr6.eq) goto loc_899CE730;
	// extsh r3,r26
	ctx.r3.s64 = ctx.r26.s16;
	// bl 0x899340e8
	ctx.lr = 0x899CE550;
	sub_899340E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ce730
	if (ctx.cr6.eq) goto loc_899CE730;
	// extsh r22,r31
	ctx.r22.s64 = ctx.r31.s16;
	// addi r29,r22,1
	ctx.r29.s64 = ctx.r22.s64 + 1;
	// cmpwi cr6,r29,2048
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2048, ctx.xer);
	// bgt cr6,0x899ce730
	if (ctx.cr6.gt) goto loc_899CE730;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a5a0
	ctx.lr = 0x899CE570;
	sub_8991A5A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ce730
	if (ctx.cr6.eq) goto loc_899CE730;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// extsh r31,r23
	ctx.r31.s64 = ctx.r23.s16;
	// lis r9,-16240
	ctx.r9.s64 = -1064304640;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// ori r6,r9,8192
	ctx.r6.u64 = ctx.r9.u64 | 8192;
	// lwz r11,-8688(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -8688);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi r5,r7,26
	ctx.r5.u64 = ctx.r7.u32 & 0x3F;
	// addi r10,r10,-8688
	ctx.r10.s64 = ctx.r10.s64 + -8688;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r28,r10,4
	ctx.r28.s64 = ctx.r10.s64 + 4;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// sth r23,116(r11)
	REX_STORE_U16(ctx.r11.u32 + 116, ctx.r23.u16);
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// bl 0x8991a858
	ctx.lr = 0x899CE5C0;
	sub_8991A858(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// stw r25,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r25.u32);
	// rlwinm r10,r4,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// stw r24,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r24.u32);
	// addi r9,r11,9016
	ctx.r9.s64 = ctx.r11.s64 + 9016;
	// stw r30,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r30.u32);
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// rlwinm r8,r23,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x3FE;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// stw r10,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// lhzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r6,r8,r11
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// stb r27,139(r3)
	REX_STORE_U8(ctx.r3.u32 + 139, ctx.r27.u8);
	// stb r7,138(r3)
	REX_STORE_U8(ctx.r3.u32 + 138, ctx.r7.u8);
	// stw r3,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r3.u32);
	// stw r29,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r29.u32);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stw r5,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// ble cr6,0x899ce70c
	if (!ctx.cr6.gt) goto loc_899CE70C;
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// addi r26,r22,-1
	ctx.r26.s64 = ctx.r22.s64 + -1;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r25,8
	ctx.r25.s64 = 8;
	// li r28,4
	ctx.r28.s64 = 4;
loc_899CE63C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r31,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blt cr6,0x899ce678
	if (ctx.cr6.lt) goto loc_899CE678;
	// bne cr6,0x899ce67c
	if (!ctx.cr6.eq) goto loc_899CE67C;
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// b 0x899ce67c
	goto loc_899CE67C;
loc_899CE678:
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
loc_899CE67C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8991a858
	ctx.lr = 0x899CE688;
	sub_8991A858(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
loc_899CE69C:
	// addi r10,r11,42
	ctx.r10.s64 = ctx.r11.s64 + 42;
	// lhz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// addi r8,r11,46
	ctx.r8.s64 = ctx.r11.s64 + 46;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,50
	ctx.r6.s64 = ctx.r11.s64 + 50;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r7,r3
	REX_STORE_U16(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u16);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// lhz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 56);
	// sthx r7,r4,r3
	REX_STORE_U16(ctx.r4.u32 + ctx.r3.u32, ctx.r7.u16);
	// lhz r6,116(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 116);
	// sthx r6,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u16);
	// blt cr6,0x899ce69c
	if (ctx.cr6.lt) goto loc_899CE69C;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// sth r23,116(r3)
	REX_STORE_U16(ctx.r3.u32 + 116, ctx.r23.u16);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r10,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// stb r27,139(r3)
	REX_STORE_U8(ctx.r3.u32 + 139, ctx.r27.u8);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, ctx.xer);
	// stb r27,138(r3)
	REX_STORE_U8(ctx.r3.u32 + 138, ctx.r27.u8);
	// blt cr6,0x899ce63c
	if (ctx.cr6.lt) goto loc_899CE63C;
loc_899CE70C:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,7904(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 7904);
	// bl 0x899d6ab0
	ctx.lr = 0x899CE71C;
	sub_899D6AB0(ctx, base);
	// li r3,69
	ctx.r3.s64 = 69;
	// bl 0x89936360
	ctx.lr = 0x899CE724;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899CE730:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CFD20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899CFD28;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,124(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// blt cr6,0x899d0030
	if (ctx.cr6.lt) goto loc_899D0030;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x899cfd64
	if (ctx.cr6.eq) goto loc_899CFD64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899cfd64
	if (ctx.cr6.eq) goto loc_899CFD64;
	// lhz r11,134(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 134);
	// lhz r10,134(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 134);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x899cfd74
	if (ctx.cr6.eq) goto loc_899CFD74;
loc_899CFD64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899cfcc0
	ctx.lr = 0x899CFD6C;
	sub_899CFCC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899CFD74:
	// lhz r10,116(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 116);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// sth r10,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r10.u16);
	// bgt cr6,0x899cff44
	if (ctx.cr6.gt) goto loc_899CFF44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899cfdac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CFDAC;
	// bdzf 4*cr6+eq,0x899cfdac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CFDAC;
	// bdzf 4*cr6+eq,0x899cfdac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CFDAC;
	// bdzf 4*cr6+eq,0x899cfe10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CFE10;
	// bdzf 4*cr6+eq,0x899cfe10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CFE10;
	// bdzf 4*cr6+eq,0x899cfe10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CFE10;
	// bne cr6,0x899cfe10
	if (!ctx.cr6.eq) goto loc_899CFE10;
loc_899CFDAC:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,120(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x899cfdd8
	if (ctx.cr6.gt) goto loc_899CFDD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,512
	ctx.r10.s64 = 512;
	// rlwinm r9,r11,0,2,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// sth r10,52(r31)
	REX_STORE_U16(ctx.r31.u32 + 52, ctx.r10.u16);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899CFDD8:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r8,84(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// lwz r6,88(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// b 0x899cff44
	goto loc_899CFF44;
loc_899CFE10:
	// lhz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 116);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lwz r9,84(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r8,120(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// addi r7,r10,9016
	ctx.r7.s64 = ctx.r10.s64 + 9016;
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// lbz r5,139(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 139);
	// mullw r4,r9,r8
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r3,r6,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r3,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r8,r9,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// subf r11,r6,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r6.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// lwz r10,120(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r3,88(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lhz r9,116(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 116);
	// rlwinm r8,r9,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r7,r8,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r4,r6,12,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// lwz r8,120(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x899cff3c
	if (!ctx.cr6.eq) goto loc_899CFF3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899cff3c
	if (ctx.cr6.eq) goto loc_899CFF3C;
	// rlwinm r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899cff3c
	if (ctx.cr6.eq) goto loc_899CFF3C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x899cff20
	if (ctx.cr6.gt) goto loc_899CFF20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899cff08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CFF08;
	// bdzf 4*cr6+eq,0x899cff14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CFF14;
	// bdzf 4*cr6+eq,0x899cfef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CFEF0;
	// bdzf 4*cr6+eq,0x899cfefc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CFEFC;
	// bdzf 4*cr6+eq,0x899cff08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899CFF08;
	// bne cr6,0x899cff14
	if (!ctx.cr6.eq) goto loc_899CFF14;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x899cff24
	goto loc_899CFF24;
loc_899CFEF0:
	// li r3,41
	ctx.r3.s64 = 41;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x899cff28
	goto loc_899CFF28;
loc_899CFEFC:
	// li r3,42
	ctx.r3.s64 = 42;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x899cff28
	goto loc_899CFF28;
loc_899CFF08:
	// li r3,41
	ctx.r3.s64 = 41;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x899cff28
	goto loc_899CFF28;
loc_899CFF14:
	// li r3,42
	ctx.r3.s64 = 42;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x899cff28
	goto loc_899CFF28;
loc_899CFF20:
	// li r3,41
	ctx.r3.s64 = 41;
loc_899CFF24:
	// li r4,0
	ctx.r4.s64 = 0;
loc_899CFF28:
	// lis r8,-4
	ctx.r8.s64 = -262144;
	// lhz r7,116(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 116);
	// lhz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 56);
	// lhz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// bl 0x899d3888
	ctx.lr = 0x899CFF3C;
	sub_899D3888(ctx, base);
loc_899CFF3C:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// stb r11,139(r31)
	REX_STORE_U8(ctx.r31.u32 + 139, ctx.r11.u8);
loc_899CFF44:
	// lis r12,-16593
	ctx.r12.s64 = -1087438848;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// ori r12,r12,57343
	ctx.r12.u64 = ctx.r12.u64 | 57343;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addis r11,r9,-160
	ctx.r11.s64 = ctx.r9.s64 + -10485760;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cff6c
	if (!ctx.cr0.lt) goto loc_899CFF6C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CFF6C:
	// lis r9,192
	ctx.r9.s64 = 12582912;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x899d02bc
	if (ctx.cr6.gt) goto loc_899D02BC;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addis r11,r8,-120
	ctx.r11.s64 = ctx.r8.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cff98
	if (!ctx.cr0.lt) goto loc_899CFF98;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CFF98:
	// lis r9,152
	ctx.r9.s64 = 9961472;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x899d02bc
	if (ctx.cr6.gt) goto loc_899D02BC;
	// lis r12,16592
	ctx.r12.s64 = 1087373312;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// ori r12,r12,8192
	ctx.r12.u64 = ctx.r12.u64 | 8192;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r6,r9,0,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFC;
	// and r8,r11,r12
	ctx.r8.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r5,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// or r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r7,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899D0030:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d02b4
	if (ctx.cr6.eq) goto loc_899D02B4;
	// lhz r11,154(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 154);
	// lhz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 136);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x899d02b4
	if (!ctx.cr6.eq) goto loc_899D02B4;
	// lhz r9,158(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 158);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lhz r10,118(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 118);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r5,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF00000;
	// extsh r29,r4
	ctx.r29.s64 = ctx.r4.s16;
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// sth r29,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r29.u16);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x899d00b4
	if (ctx.cr6.eq) goto loc_899D00B4;
	// lis r10,208
	ctx.r10.s64 = 13631488;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x899d00ec
	if (!ctx.cr6.eq) goto loc_899D00EC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x899d0094
	if (!ctx.cr6.eq) goto loc_899D0094;
	// li r3,69
	ctx.r3.s64 = 69;
	// bl 0x89936360
	ctx.lr = 0x899D0094;
	sub_89936360(ctx, base);
loc_899D0094:
	// lbz r11,180(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 180);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899d00ec
	if (!ctx.cr6.eq) goto loc_899D00EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,10,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x899d00ec
	goto loc_899D00EC;
loc_899D00B4:
	// lbz r11,70(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 70);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x899d00d8
	if (!ctx.cr6.lt) goto loc_899D00D8;
	// lbz r11,180(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 180);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stb r9,180(r30)
	REX_STORE_U8(ctx.r30.u32 + 180, ctx.r9.u8);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x899d00ec
	goto loc_899D00EC;
loc_899D00D8:
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// subfic r9,r10,255
	ctx.xer.ca = ctx.r10.u32 <= 255;
	ctx.r9.u64 = static_cast<uint64_t>(255) - ctx.r10.u64;
	// stb r10,70(r31)
	REX_STORE_U8(ctx.r31.u32 + 70, ctx.r10.u8);
	// stb r9,71(r31)
	REX_STORE_U8(ctx.r31.u32 + 71, ctx.r9.u8);
loc_899D00EC:
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// lhz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 116);
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r9,9016
	ctx.r11.s64 = ctx.r9.s64 + 9016;
	// lwz r7,64(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r8,r29,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// lwz r28,92(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r9,r5,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// addi r27,r6,1
	ctx.r27.s64 = ctx.r6.s64 + 1;
	// lwz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// lwz r29,28(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// lwz r26,76(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lhzx r25,r8,r11
	ctx.r25.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// lhzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// clrlwi r27,r27,30
	ctx.r27.u64 = ctx.r27.u32 & 0x3;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r25,r25,r7
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// srawi r25,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 8;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// addi r24,r6,4
	ctx.r24.s64 = ctx.r6.s64 + 4;
	// subf r4,r25,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r25.u64;
	// rlwinm r25,r27,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// clrlwi r28,r6,24
	ctx.r28.u64 = ctx.r6.u32 & 0xFF;
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lis r6,-30214
	ctx.r6.s64 = -1980104704;
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lhzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r23,r4
	ctx.r23.s64 = ctx.r4.s16;
	// lwz r4,52(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// mullw r7,r23,r7
	ctx.r7.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r7.s32);
	// lhzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// stw r27,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// lwz r6,3504(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 3504);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r24,3
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r24.s32 >> 3;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// clrlwi r10,r3,26
	ctx.r10.u64 = ctx.r3.u32 & 0x3F;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r5,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// addic r3,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r3.s64 = ctx.r28.s64 + -1;
	// lwzx r7,r25,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r29.u32);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// subfe r7,r3,r28
	temp.u8 = (~ctx.r3.u32 + ctx.r28.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// add r4,r7,r3
	ctx.r4.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stw r5,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r7,r4,14,0,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subf r4,r7,r26
	ctx.r4.u64 = ctx.r26.u64 - ctx.r7.u64;
	// stw r5,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// srawi r7,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 4;
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lhzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mullw r5,r9,r7
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// stw r4,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// lhzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// rlwinm r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	// stw r9,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// rlwinm r10,r10,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// beq cr6,0x899d0290
	if (ctx.cr6.eq) goto loc_899D0290;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899d02bc
	if (ctx.cr6.eq) goto loc_899D02BC;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x899d02bc
	if (!ctx.cr6.lt) goto loc_899D02BC;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lwz r10,26932(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 26932);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899d02bc
	if (!ctx.cr6.eq) goto loc_899D02BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899D0290:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899d02bc
	if (ctx.cr6.eq) goto loc_899D02BC;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x899d02bc
	if (!ctx.cr6.lt) goto loc_899D02BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899D02B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_899D02BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D3560) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x899d3598
	if (ctx.cr6.eq) goto loc_899D3598;
	// lbz r11,46(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x899d3598
	if (ctx.cr6.lt) goto loc_899D3598;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// stb r11,46(r3)
	REX_STORE_U8(ctx.r3.u32 + 46, ctx.r11.u8);
	// blr 
	return;
loc_899D3598:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D5240) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e8
	ctx.lr = 0x899D5248;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// rlwinm r19,r4,4,0,27
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r11,8684
	ctx.r27.s64 = ctx.r11.s64 + 8684;
	// addis r11,r5,-160
	ctx.r11.s64 = ctx.r5.s64 + -10485760;
	// addi r10,r27,20
	ctx.r10.s64 = ctx.r27.s64 + 20;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lhzx r10,r19,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r19.u32 + ctx.r10.u32);
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d5288
	if (!ctx.cr0.lt) goto loc_899D5288;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D5288:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r10,160
	ctx.r9.s64 = ctx.r10.s64 + 160;
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x899d52cc
	if (!ctx.cr6.lt) goto loc_899D52CC;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r9,r11,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r11.u64;
	// addis r11,r9,-120
	ctx.r11.s64 = ctx.r9.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d52b8
	if (!ctx.cr0.lt) goto loc_899D52B8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D52B8:
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x899d52d0
	if (ctx.cr6.lt) goto loc_899D52D0;
loc_899D52CC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_899D52D0:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d52e8
	if (ctx.cr6.eq) goto loc_899D52E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
loc_899D52E8:
	// lis r28,-30253
	ctx.r28.s64 = -1982660608;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// addi r9,r27,20
	ctx.r9.s64 = ctx.r27.s64 + 20;
	// ori r31,r11,20077
	ctx.r31.u64 = ctx.r11.u64 | 20077;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r11,-9212(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -9212);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// li r30,0
	ctx.r30.s64 = 0;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// lhzx r7,r19,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r19.u32 + ctx.r9.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r29,r10,9016
	ctx.r29.s64 = ctx.r10.s64 + 9016;
	// mullw r9,r11,r31
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,12345
	ctx.r11.s64 = ctx.r9.s64 + 12345;
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// srawi r3,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 16;
	// addi r8,r11,12345
	ctx.r8.s64 = ctx.r11.s64 + 12345;
	// clrlwi r11,r3,17
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFF;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r6,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 16;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rotlwi r10,r7,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// clrlwi r3,r6,17
	ctx.r3.u64 = ctx.r6.u32 & 0x7FFF;
	// rlwinm r11,r4,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1FFFF;
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFF;
	// clrlwi r6,r5,17
	ctx.r6.u64 = ctx.r5.u32 & 0x7FFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r23,r6,1,22,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// extsh r24,r6
	ctx.r24.s64 = ctx.r6.s16;
	// extsh r26,r7
	ctx.r26.s64 = ctx.r7.s16;
	// srawi r25,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 4;
	// b 0x899d5384
	goto loc_899D5384;
loc_899D5380:
	// lwz r8,-9212(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + -9212);
loc_899D5384:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r10,r23,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r29.u32);
	// addi r9,r24,128
	ctx.r9.s64 = ctx.r24.s64 + 128;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r3,r30,5,22,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0x3E0;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// rlwinm r11,r4,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// rlwinm r4,r9,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r3,r29
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r29.u32);
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// lhzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// lhzx r9,r4,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mullw r4,r7,r25
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// mullw r3,r6,r25
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// divw r3,r4,r26
	ctx.r3.u64 = uint32_t((ctx.r26.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r26.s32 == -1)) ? ctx.r4.s32 / ctx.r26.s32 : 0);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// srawi r10,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 4;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mullw r7,r10,r5
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// addi r8,r8,12345
	ctx.r8.s64 = ctx.r8.s64 + 12345;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r8,-9212(r28)
	REX_STORE_U32(ctx.r28.u32 + -9212, ctx.r8.u32);
	// mullw r11,r5,r11
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// srawi r6,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 16;
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// rlwinm r5,r6,2,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x4;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// andc r11,r26,r4
	ctx.r11.u64 = ctx.r26.u64 & ~ctx.r4.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// lwzx r5,r5,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r27.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// twllei r26,0
	if (ctx.r26.s32 == 0 || ctx.r26.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x899d44e8
	ctx.lr = 0x899D5454;
	sub_899D44E8(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x899d5380
	if (ctx.cr6.lt) goto loc_899D5380;
	// addi r11,r27,20
	ctx.r11.s64 = ctx.r27.s64 + 20;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lhzx r8,r19,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r19.u32 + ctx.r11.u32);
	// bl 0x899d5a38
	ctx.lr = 0x899D548C;
	sub_899D5A38(ctx, base);
	// addi r11,r27,20
	ctx.r11.s64 = ctx.r27.s64 + 20;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhzx r6,r19,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r19.u32 + ctx.r10.u32);
	// bl 0x899d6388
	ctx.lr = 0x899D54A8;
	sub_899D6388(ctx, base);
	// addi r11,r27,20
	ctx.r11.s64 = ctx.r27.s64 + 20;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// lwz r11,-9212(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -9212);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r28)
	REX_STORE_U32(ctx.r28.u32 + -9212, ctx.r11.u32);
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// clrlwi r11,r7,17
	ctx.r11.u64 = ctx.r7.u32 & 0x7FFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,18,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0xFFFF;
	// add r5,r11,r19
	ctx.r5.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lbzx r3,r5,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// blt cr6,0x899d54ec
	if (ctx.cr6.lt) goto loc_899D54EC;
	// bl 0x89936360
	ctx.lr = 0x899D54EC;
	sub_89936360(ctx, base);
loc_899D54EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D6DF0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,46(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x899d6de4
	if (ctx.cr6.lt) {
		sub_899d6de4(ctx, base);
		return;
	}
	// addi r11,r11,254
	ctx.r11.s64 = ctx.r11.s64 + 254;
	// stb r11,46(r3)
	REX_STORE_U8(ctx.r3.u32 + 46, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D76F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899D7700;
	__savegprlr_28(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r10,54(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 54);
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// lwz r5,40(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r8,77(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 77);
	// rlwinm r30,r5,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r31,28(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,7104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7104);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mulli r4,r4,14
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(14));
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r29,78(r3)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r3.u32 + 78);
	// rlwinm r28,r11,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r5,r5,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r5.u64;
	// subf r9,r11,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r11.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// subf r4,r4,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r4.u64;
	// srawi r9,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 4;
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// srawi r5,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 4;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// subf r11,r11,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r11.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r8,54(r3)
	REX_STORE_U16(ctx.r3.u32 + 54, ctx.r8.u16);
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stb r5,77(r3)
	REX_STORE_U8(ctx.r3.u32 + 77, ctx.r5.u8);
	// stw r4,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// bne cr6,0x899d77ac
	if (!ctx.cr6.eq) goto loc_899D77AC;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stb r6,77(r3)
	REX_STORE_U8(ctx.r3.u32 + 77, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x899d77ac
	if (!ctx.cr6.eq) goto loc_899D77AC;
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
loc_899D77AC:
	// lwz r7,44(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r7,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d77d8
	if (ctx.cr6.eq) goto loc_899D77D8;
	// addi r11,r7,-1285
	ctx.r11.s64 = ctx.r7.s64 + -1285;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899d7838
	if (!ctx.cr6.eq) goto loc_899D7838;
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899D77D8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x899d77e4
	if (!ctx.cr6.lt) goto loc_899D77E4;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899D77E4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x899d77f0
	if (!ctx.cr6.lt) goto loc_899D77F0;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899D77F0:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r8,76(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 76);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// eqv r6,r10,r11
	ctx.r6.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r4,r6,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// stb r5,76(r3)
	REX_STORE_U8(ctx.r3.u32 + 76, ctx.r5.u8);
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x899d7838
	if (ctx.cr6.eq) goto loc_899D7838;
	// oris r11,r7,512
	ctx.r11.u64 = ctx.r7.u64 | 33554432;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
loc_899D7838:
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D8780) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899D8788;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,45
	ctx.r3.s64 = 45;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x89934178
	ctx.lr = 0x899D87A0;
	sub_89934178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x899d88e0
	if (ctx.cr6.eq) goto loc_899D88E0;
	// bl 0x89919d28
	ctx.lr = 0x899D87B0;
	sub_89919D28(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d88dc
	if (ctx.cr6.eq) goto loc_899D88DC;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// lis r3,16838
	ctx.r3.s64 = 1103495168;
	// lwz r9,7904(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 7904);
	// addi r5,r5,11976
	ctx.r5.s64 = ctx.r5.s64 + 11976;
	// ori r11,r3,20077
	ctx.r11.u64 = ctx.r3.u64 | 20077;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// li r3,45
	ctx.r3.s64 = 45;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// lwz r9,-9212(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + -9212);
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// stw r3,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// lis r27,-30294
	ctx.r27.s64 = -1985347584;
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// sth r31,52(r28)
	REX_STORE_U16(ctx.r28.u32 + 52, ctx.r31.u16);
	// lwz r9,1448(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 1448);
	// stw r9,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r9.u32);
	// lwz r9,1444(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 1444);
	// ori r5,r4,32896
	ctx.r5.u64 = ctx.r4.u64 | 32896;
	// stb r10,77(r28)
	REX_STORE_U8(ctx.r28.u32 + 77, ctx.r10.u8);
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// stw r5,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r5.u32);
	// stb r10,78(r28)
	REX_STORE_U8(ctx.r28.u32 + 78, ctx.r10.u8);
	// srawi r4,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 4;
	// stw r9,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r9.u32);
	// addi r9,r7,12345
	ctx.r9.s64 = ctx.r7.s64 + 12345;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stb r10,76(r28)
	REX_STORE_U8(ctx.r28.u32 + 76, ctx.r10.u8);
	// addi r7,r27,3880
	ctx.r7.s64 = ctx.r27.s64 + 3880;
	// stw r10,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r10.u32);
	// srawi r5,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 16;
	// lbz r3,3880(r27)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r27.u32 + 3880);
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// stw r3,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// clrlwi r5,r5,17
	ctx.r5.u64 = ctx.r5.u32 & 0x7FFF;
	// stw r10,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// stw r30,28(r28)
	REX_STORE_U32(ctx.r28.u32 + 28, ctx.r30.u32);
	// addi r4,r8,128
	ctx.r4.s64 = ctx.r8.s64 + 128;
	// stw r29,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r29.u32);
	// lis r3,-30320
	ctx.r3.s64 = -1987051520;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r8,r5,r10
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,17,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFF;
	// addi r7,r3,9016
	ctx.r7.s64 = ctx.r3.s64 + 9016;
	// rlwinm r5,r4,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r10,24(r28)
	REX_STORE_U32(ctx.r28.u32 + 24, ctx.r10.u32);
	// lhzx r3,r5,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r31,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x3FE;
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// stw r5,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r5.u32);
	// li r3,96
	ctx.r3.s64 = 96;
	// stw r11,-9212(r6)
	REX_STORE_U32(ctx.r6.u32 + -9212, ctx.r11.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lhzx r9,r4,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// stb r3,79(r28)
	REX_STORE_U8(ctx.r28.u32 + 79, ctx.r3.u8);
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// stw r5,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r5.u32);
	// rlwinm r11,r4,19,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 19) & 0x3;
	// stb r11,77(r28)
	REX_STORE_U8(ctx.r28.u32 + 77, ctx.r11.u8);
loc_899D88DC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_899D88E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D99B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x899D99C0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-30232
	ctx.r25.s64 = -1981284352;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r28,r11,14460
	ctx.r28.s64 = ctx.r11.s64 + 14460;
	// lwz r11,-20684(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + -20684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d9a0c
	if (ctx.cr6.eq) goto loc_899D9A0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_899D99E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899dcd98
	ctx.lr = 0x899D99EC;
	sub_899DCD98(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d99e4
	if (!ctx.cr6.eq) goto loc_899D99E4;
	// lwz r3,-20684(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + -20684);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D9A0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899D9A0C:
	// lis r23,-30214
	ctx.r23.s64 = -1980104704;
	// lwz r11,3668(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 3668);
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D9A28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-30220
	ctx.r9.s64 = -1980497920;
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r9,25576
	ctx.r10.s64 = ctx.r9.s64 + 25576;
	// addi r24,r11,25704
	ctx.r24.s64 = ctx.r11.s64 + 25704;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// addi r26,r10,-16
	ctx.r26.s64 = ctx.r10.s64 + -16;
	// addi r30,r24,4
	ctx.r30.s64 = ctx.r24.s64 + 4;
	// lis r29,-30214
	ctx.r29.s64 = -1980104704;
loc_899D9A4C:
	// lwz r3,3672(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 3672);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,720(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 720);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D9A64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,-4(r30)
	REX_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
	// addi r9,r24,100
	ctx.r9.s64 = ctx.r24.s64 + 100;
	// stw r31,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// stwu r31,16(r26)
	ea = 16 + ctx.r26.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r26.u32 = ea;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x899d9a4c
	if (ctx.cr6.lt) goto loc_899D9A4C;
	// lwz r11,3668(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 3668);
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D9A9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x899d90b0
	ctx.lr = 0x899D9AA0;
	sub_899D90B0(ctx, base);
	// lis r9,-30305
	ctx.r9.s64 = -1986068480;
	// lis r8,243
	ctx.r8.s64 = 15925248;
	// lis r7,-30214
	ctx.r7.s64 = -1980104704;
	// lis r6,-30214
	ctx.r6.s64 = -1980104704;
	// ori r5,r8,63216
	ctx.r5.u64 = ctx.r8.u64 | 63216;
	// lis r4,-30214
	ctx.r4.s64 = -1980104704;
	// lis r3,-30214
	ctx.r3.s64 = -1980104704;
	// stw r5,2148(r9)
	REX_STORE_U32(ctx.r9.u32 + 2148, ctx.r5.u32);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// stw r31,3612(r7)
	REX_STORE_U32(ctx.r7.u32 + 3612, ctx.r31.u32);
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// stw r31,3616(r6)
	REX_STORE_U32(ctx.r6.u32 + 3616, ctx.r31.u32);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// stw r31,3620(r4)
	REX_STORE_U32(ctx.r4.u32 + 3620, ctx.r31.u32);
	// lis r6,-30214
	ctx.r6.s64 = -1980104704;
	// stw r31,3624(r3)
	REX_STORE_U32(ctx.r3.u32 + 3624, ctx.r31.u32);
	// lis r5,-30214
	ctx.r5.s64 = -1980104704;
	// stw r31,3628(r11)
	REX_STORE_U32(ctx.r11.u32 + 3628, ctx.r31.u32);
	// lis r3,-30214
	ctx.r3.s64 = -1980104704;
	// stw r31,3632(r10)
	REX_STORE_U32(ctx.r10.u32 + 3632, ctx.r31.u32);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// stw r31,3636(r9)
	REX_STORE_U32(ctx.r9.u32 + 3636, ctx.r31.u32);
	// stw r31,3640(r8)
	REX_STORE_U32(ctx.r8.u32 + 3640, ctx.r31.u32);
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// stw r31,3644(r6)
	REX_STORE_U32(ctx.r6.u32 + 3644, ctx.r31.u32);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// stw r31,3648(r5)
	REX_STORE_U32(ctx.r5.u32 + 3648, ctx.r31.u32);
	// lis r8,-30305
	ctx.r8.s64 = -1986068480;
	// stw r31,3652(r3)
	REX_STORE_U32(ctx.r3.u32 + 3652, ctx.r31.u32);
	// lis r6,-30305
	ctx.r6.s64 = -1986068480;
	// stw r31,3656(r11)
	REX_STORE_U32(ctx.r11.u32 + 3656, ctx.r31.u32);
	// lis r30,-30305
	ctx.r30.s64 = -1986068480;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,3660(r10)
	REX_STORE_U32(ctx.r10.u32 + 3660, ctx.r31.u32);
	// stw r31,3664(r9)
	REX_STORE_U32(ctx.r9.u32 + 3664, ctx.r31.u32);
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// stb r11,4144(r8)
	REX_STORE_U8(ctx.r8.u32 + 4144, ctx.r11.u8);
	// lis r9,-30305
	ctx.r9.s64 = -1986068480;
	// stb r11,4145(r6)
	REX_STORE_U8(ctx.r6.u32 + 4145, ctx.r11.u8);
	// lis r8,-30305
	ctx.r8.s64 = -1986068480;
	// stb r11,4146(r30)
	REX_STORE_U8(ctx.r30.u32 + 4146, ctx.r11.u8);
	// lis r6,-30305
	ctx.r6.s64 = -1986068480;
	// lis r30,-30232
	ctx.r30.s64 = -1981284352;
	// stb r11,4147(r10)
	REX_STORE_U8(ctx.r10.u32 + 4147, ctx.r11.u8);
	// lis r27,-30215
	ctx.r27.s64 = -1980170240;
	// stb r11,4148(r9)
	REX_STORE_U8(ctx.r9.u32 + 4148, ctx.r11.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r11,4149(r8)
	REX_STORE_U8(ctx.r8.u32 + 4149, ctx.r11.u8);
	// lis r8,-30232
	ctx.r8.s64 = -1981284352;
	// stb r11,4150(r6)
	REX_STORE_U8(ctx.r6.u32 + 4150, ctx.r11.u8);
	// lis r6,-30232
	ctx.r6.s64 = -1981284352;
	// stw r31,3648(r5)
	REX_STORE_U32(ctx.r5.u32 + 3648, ctx.r31.u32);
	// lis r5,-30232
	ctx.r5.s64 = -1981284352;
	// stw r31,-3500(r30)
	REX_STORE_U32(ctx.r30.u32 + -3500, ctx.r31.u32);
	// lis r30,-30232
	ctx.r30.s64 = -1981284352;
	// stw r31,3652(r3)
	REX_STORE_U32(ctx.r3.u32 + 3652, ctx.r31.u32);
	// addi r3,r27,-31100
	ctx.r3.s64 = ctx.r27.s64 + -31100;
	// stw r31,3612(r7)
	REX_STORE_U32(ctx.r7.u32 + 3612, ctx.r31.u32);
	// lis r26,-30231
	ctx.r26.s64 = -1981218816;
	// lis r7,-30231
	ctx.r7.s64 = -1981218816;
	// stw r31,-3756(r8)
	REX_STORE_U32(ctx.r8.u32 + -3756, ctx.r31.u32);
	// lis r24,-30231
	ctx.r24.s64 = -1981218816;
	// stw r31,-4180(r6)
	REX_STORE_U32(ctx.r6.u32 + -4180, ctx.r31.u32);
	// lis r23,-30231
	ctx.r23.s64 = -1981218816;
	// stw r31,-4268(r5)
	REX_STORE_U32(ctx.r5.u32 + -4268, ctx.r31.u32);
	// lis r22,-30231
	ctx.r22.s64 = -1981218816;
	// stw r31,-4356(r30)
	REX_STORE_U32(ctx.r30.u32 + -4356, ctx.r31.u32);
	// lis r21,-30231
	ctx.r21.s64 = -1981218816;
	// lis r20,-30232
	ctx.r20.s64 = -1981284352;
	// lis r19,-30232
	ctx.r19.s64 = -1981284352;
	// lis r18,-30215
	ctx.r18.s64 = -1980170240;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r3,r18,-31168
	ctx.r3.s64 = ctx.r18.s64 + -31168;
	// stw r31,-31100(r27)
	REX_STORE_U32(ctx.r27.u32 + -31100, ctx.r31.u32);
	// stw r6,3620(r4)
	REX_STORE_U32(ctx.r4.u32 + 3620, ctx.r6.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,-25620(r26)
	REX_STORE_U32(ctx.r26.u32 + -25620, ctx.r31.u32);
	// stw r31,-25828(r7)
	REX_STORE_U32(ctx.r7.u32 + -25828, ctx.r31.u32);
	// stw r31,-28412(r24)
	REX_STORE_U32(ctx.r24.u32 + -28412, ctx.r31.u32);
	// stw r31,-29036(r23)
	REX_STORE_U32(ctx.r23.u32 + -29036, ctx.r31.u32);
	// stw r31,-29420(r22)
	REX_STORE_U32(ctx.r22.u32 + -29420, ctx.r31.u32);
	// stw r31,-30124(r21)
	REX_STORE_U32(ctx.r21.u32 + -30124, ctx.r31.u32);
	// stw r31,30356(r20)
	REX_STORE_U32(ctx.r20.u32 + 30356, ctx.r31.u32);
	// stw r31,29892(r19)
	REX_STORE_U32(ctx.r19.u32 + 29892, ctx.r31.u32);
	// bl 0x899dcca0
	ctx.lr = 0x899D9C08;
	sub_899DCCA0(ctx, base);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r3,3672(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 3672);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899D9C38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,-20684(r25)
	REX_STORE_U32(ctx.r25.u32 + -20684, ctx.r3.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r4,r10,10148
	ctx.r4.s64 = ctx.r10.s64 + 10148;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x899D9C54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-20684(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + -20684);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,3672(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 3672);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x899D9C70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DB5B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r12,16808(r30)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r30.u32 + 16808);
	// lbz r12,10384(r16)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r16.u32 + 10384);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899DB5C8;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r4,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x899dc850
	ctx.lr = 0x899DB5E4;
	sub_899DC850(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lwz r11,4828(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4828);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x899db6fc
	if (ctx.cr6.eq) goto loc_899DB6FC;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// lwz r11,4824(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4824);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x899db610
	if (!ctx.cr6.eq) goto loc_899DB610;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899e41f8
	ctx.lr = 0x899DB610;
	__imp__KeBugCheck(ctx, base);
loc_899DB610:
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4824(r9)
	REX_STORE_U32(ctx.r9.u32 + 4824, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r24,4820(r8)
	REX_STORE_U8(ctx.r8.u32 + 4820, ctx.r24.u8);
	// bne cr6,0x899db6e8
	if (!ctx.cr6.eq) goto loc_899DB6E8;
	// lis r25,-30212
	ctx.r25.s64 = -1979973632;
	// lwz r28,3804(r25)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 3804);
	// stw r28,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x899db6d4
	if (ctx.cr0.eq) goto loc_899DB6D4;
	// lis r27,-30212
	ctx.r27.s64 = -1979973632;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r30,3800(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 3800);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stw r30,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_899DB658:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// stw r30,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x899db6d4
	if (ctx.cr6.lt) goto loc_899DB6D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899db67c
	if (!ctx.cr6.eq) goto loc_899DB67C;
loc_899DB674:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x899db658
	goto loc_899DB658;
loc_899DB67C:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x899db6d4
	if (ctx.cr6.lt) goto loc_899DB6D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DB698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3804(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 3804);
	// lwz r10,3800(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 3800);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899db6b0
	if (!ctx.cr6.eq) goto loc_899DB6B0;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x899db674
	if (ctx.cr6.eq) goto loc_899DB674;
loc_899DB6B0:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x899db674
	goto loc_899DB674;
loc_899DB6D4:
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// addi r3,r10,36
	ctx.r3.s64 = ctx.r10.s64 + 36;
	// bl 0x899db560
	ctx.lr = 0x899DB6E8;
	sub_899DB560(ctx, base);
loc_899DB6E8:
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r10,44
	ctx.r3.s64 = ctx.r10.s64 + 44;
	// bl 0x899db560
	ctx.lr = 0x899DB6FC;
	sub_899DB560(ctx, base);
loc_899DB6FC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x899db744
	ctx.lr = 0x899DB708;
	sub_899DB744(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899db71c
	if (!ctx.cr6.eq) goto loc_899DB71C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899e41f8
	ctx.lr = 0x899DB71C;
	__imp__KeBugCheck(ctx, base);
loc_899DB71C:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savegprlr_18) {
	REX_FUNC_PROLOGUE();
	// std r18,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savegprlr_24) {
	REX_FUNC_PROLOGUE();
	// std r24,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_22) {
	REX_FUNC_PROLOGUE();
	// ld r22,-88(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_25) {
	REX_FUNC_PROLOGUE();
	// ld r25,-64(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DC238) {
	REX_FUNC_PROLOGUE();
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x899dc25c
	goto loc_899DC25C;
loc_899DC248:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,0(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_899DC25C:
	// andi. r0,r6,3
	ctx.r0.u64 = ctx.r6.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x899dc248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_899DC248;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x899dc28c
	if (ctx.cr0.eq) goto loc_899DC28C;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x899dc2b0
	if (!ctx.cr0.eq) goto loc_899DC2B0;
loc_899DC278:
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz+ 0x899dc278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC278;
loc_899DC28C:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
loc_899DC298:
	// lbz r0,0(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz+ 0x899dc298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC298;
	// blr 
	return;
loc_899DC2B0:
	// lbz r7,3(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r8,2(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,1(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x899dc2b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DC2B0;
	// b 0x899dc28c
	goto loc_899DC28C;
}

DEFINE_REX_FUNC(sub_899DC914) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DC948) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lwz r11,5236(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5236);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x899dc974
	if (ctx.cr0.eq) goto loc_899DC974;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_899DC974:
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DCC90) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30212
	ctx.r10.s64 = -1979973632;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3796(r10)
	REX_STORE_U32(ctx.r10.u32 + 3796, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DCD68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30212
	ctx.r11.s64 = -1979973632;
	// lwz r10,3808(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3808);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x899dcd8c
	if (!ctx.cr6.eq) goto loc_899DCD8C;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// li r10,-3
	ctx.r10.s64 = -3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,3808(r11)
	REX_STORE_U32(ctx.r11.u32 + 3808, ctx.r9.u32);
	// stw r10,5344(r8)
	REX_STORE_U32(ctx.r8.u32 + 5344, ctx.r10.u32);
loc_899DCD8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DD048) {
	REX_FUNC_PROLOGUE();
	// b 0x899e0800
	sub_899E0800(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DD050) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899DD058;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,2036
	ctx.r30.s64 = ctx.r11.s64 + 2036;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899e4228
	ctx.lr = 0x899DD074;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x899dd09c
	if (ctx.cr6.eq) goto loc_899DD09C;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r10,r11,2064
	ctx.r10.s64 = ctx.r11.s64 + 2064;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x899dd0ac
	goto loc_899DD0AC;
loc_899DD09C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_899DD0AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899e4208
	ctx.lr = 0x899DD0B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DDCF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899DDD00;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x899ddd2c
	if (!ctx.cr6.gt) goto loc_899DDD2C;
loc_899DDD24:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899de270
	goto loc_899DE270;
loc_899DDD2C:
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// lbz r9,5(r27)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 5);
	// rotlwi r10,r11,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// rlwinm. r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// add r31,r10,r27
	ctx.r31.u64 = ctx.r10.u64 + ctx.r27.u64;
	// beq 0x899ddde4
	if (ctx.cr0.eq) goto loc_899DDDE4;
	// subf r10,r11,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r11.u64;
	// lbz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x899dd3b8
	ctx.lr = 0x899DDD84;
	sub_899DD3B8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x899ddd24
	if (ctx.cr0.eq) goto loc_899DDD24;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x899dd6a0
	ctx.lr = 0x899DDDA8;
	sub_899DD6A0(ctx, base);
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r28,5(r3)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x899ddeb4
	if (!ctx.cr6.lt) goto loc_899DDEB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899ddaa8
	ctx.lr = 0x899DDDCC;
	sub_899DDAA8(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x899de270
	goto loc_899DE270;
loc_899DDDE4:
	// lbz r28,5(r31)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// clrlwi. r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x899ddd24
	if (!ctx.cr0.eq) goto loc_899DDD24;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x899ddd24
	if (ctx.cr6.lt) goto loc_899DDD24;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x899dde64
	if (!ctx.cr6.eq) goto loc_899DDE64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x899dde64
	if (!ctx.cr6.eq) goto loc_899DDE64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x899dde64
	if (!ctx.cr6.eq) goto loc_899DDE64;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x899dde64
	if (!ctx.cr6.lt) goto loc_899DDE64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_899DDE64:
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x899ddea0
	if (ctx.cr0.eq) goto loc_899DDEA0;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x899dde90
	if (ctx.cr0.eq) goto loc_899DDE90;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x899dde90
	if (!ctx.cr6.gt) goto loc_899DDE90;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_899DDE90:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x899e4298
	ctx.lr = 0x899DDEA0;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_899DDEA0:
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
loc_899DDEB4:
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// lbz r9,6(r27)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 6);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// subf r24,r9,r10
	ctx.r24.u64 = ctx.r10.u64 - ctx.r9.u64;
	// bgt cr6,0x899ddee0
	if (ctx.cr6.gt) goto loc_899DDEE0;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_899DDEE0:
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x899ddf18
	if (ctx.cr0.eq) goto loc_899DDF18;
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// ld r10,-16(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + -16);
	// std r10,-16(r9)
	REX_STORE_U64(ctx.r9.u32 + -16, ctx.r10.u64);
	// ld r11,-8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// std r11,-8(r9)
	REX_STORE_U64(ctx.r9.u32 + -8, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_899DDF18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899ddf70
	if (!ctx.cr6.eq) goto loc_899DDF70;
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 5);
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// subf r9,r23,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r23.u64;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// stb r8,5(r27)
	REX_STORE_U8(ctx.r27.u32 + 5, ctx.r8.u8);
	// stb r9,6(r27)
	REX_STORE_U8(ctx.r27.u32 + 6, ctx.r9.u8);
	// sth r11,0(r27)
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
	// bne 0x899ddf58
	if (!ctx.cr0.eq) goto loc_899DDF58;
	// rlwinm r10,r11,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x899de23c
	goto loc_899DE23C;
loc_899DDF58:
	// lbz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r27,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r27.u32);
	// b 0x899de23c
	goto loc_899DE23C;
loc_899DDF70:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r10,r23,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r23.u64;
	// sth r9,0(r27)
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r9.u16);
	// rlwinm. r8,r28,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r10,6(r27)
	REX_STORE_U8(ctx.r27.u32 + 6, ctx.r10.u8);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// sth r9,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 4);
	// stb r11,4(r31)
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// beq 0x899de000
	if (ctx.cr0.eq) goto loc_899DE000;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r31,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// stb r28,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r28.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r10,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// sth r11,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x899de054
	if (ctx.cr6.lt) goto loc_899DE054;
	// lwz r11,384(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 384);
	// addi r9,r30,384
	ctx.r9.s64 = ctx.r30.s64 + 384;
	// b 0x899ddff4
	goto loc_899DDFF4;
loc_899DDFE4:
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x899de204
	if (!ctx.cr6.gt) goto loc_899DE204;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_899DDFF4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899ddfe4
	if (!ctx.cr6.eq) goto loc_899DDFE4;
	// b 0x899de204
	goto loc_899DE204;
loc_899DE000:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r28,5(r29)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899de084
	if (ctx.cr0.eq) goto loc_899DE084;
	// andi. r11,r10,239
	ctx.r11.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x899de05c
	if (!ctx.cr6.lt) goto loc_899DE05C;
loc_899DE054:
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// b 0x899de1a4
	goto loc_899DE1A4;
loc_899DE05C:
	// lwz r11,384(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 384);
	// addi r9,r30,384
	ctx.r9.s64 = ctx.r30.s64 + 384;
	// b 0x899de078
	goto loc_899DE078;
loc_899DE068:
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x899de204
	if (!ctx.cr6.gt) goto loc_899DE204;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_899DE078:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899de068
	if (!ctx.cr6.eq) goto loc_899DE068;
	// b 0x899de204
	goto loc_899DE204;
loc_899DE084:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x899de0e4
	if (!ctx.cr6.eq) goto loc_899DE0E4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x899de0e4
	if (!ctx.cr6.eq) goto loc_899DE0E4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x899de0e4
	if (!ctx.cr6.eq) goto loc_899DE0E4;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x899de0e4
	if (!ctx.cr6.lt) goto loc_899DE0E4;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_899DE0E4:
	// lbz r11,5(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x899de120
	if (ctx.cr0.eq) goto loc_899DE120;
	// lhz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x899de110
	if (ctx.cr0.eq) goto loc_899DE110;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x899de110
	if (!ctx.cr6.gt) goto loc_899DE110;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_899DE110:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x899e4298
	ctx.lr = 0x899DE120;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_899DE120:
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r28,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r28.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x899de230
	if (ctx.cr6.gt) goto loc_899DE230;
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r5,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r5.u16);
	// bne 0x899de170
	if (!ctx.cr0.eq) goto loc_899DE170;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x899de184
	goto loc_899DE184;
loc_899DE170:
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r31,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
loc_899DE184:
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bge cr6,0x899de1e0
	if (!ctx.cr6.lt) goto loc_899DE1E0;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
loc_899DE1A4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899de204
	if (!ctx.cr6.eq) goto loc_899DE204;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// b 0x899de204
	goto loc_899DE204;
loc_899DE1E0:
	// lwz r11,384(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 384);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// b 0x899de1fc
	goto loc_899DE1FC;
loc_899DE1EC:
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x899de204
	if (!ctx.cr6.gt) goto loc_899DE204;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_899DE1FC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899de1ec
	if (!ctx.cr6.eq) goto loc_899DE1EC;
loc_899DE204:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x899de23c
	goto loc_899DE23C;
loc_899DE230:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899ddaa8
	ctx.lr = 0x899DE23C;
	sub_899DDAA8(ctx, base);
loc_899DE23C:
	// rlwinm. r11,r22,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899de260
	if (ctx.cr0.eq) goto loc_899DE260;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x899de260
	if (!ctx.cr6.gt) goto loc_899DE260;
	// add r11,r24,r27
	ctx.r11.u64 = ctx.r24.u64 + ctx.r27.u64;
	// subf r5,r24,r23
	ctx.r5.u64 = ctx.r23.u64 - ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x899dcca0
	ctx.lr = 0x899DE260;
	sub_899DCCA0(ctx, base);
loc_899DE260:
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 5);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r22,28,24,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stb r11,5(r27)
	REX_STORE_U8(ctx.r27.u32 + 5, ctx.r11.u8);
loc_899DE270:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

