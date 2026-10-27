#include "mmpps_funcs.11.h"

DEFINE_REX_FUNC(sub_89916410) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89916418;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8992c368
	ctx.lr = 0x89916424;
	sub_8992C368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8991649c
	if (ctx.cr6.eq) goto loc_8991649C;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r10,592
	ctx.r31.s64 = ctx.r10.s64 + 592;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lhz r3,-4592(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mulli r29,r6,112
	ctx.r29.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(112));
	// stwx r9,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r30,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r30.u32);
	// stwx r30,r29,r5
	REX_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r30.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// stwx r4,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r4.u32);
	// bl 0x8992bd50
	ctx.lr = 0x89916470;
	sub_8992BD50(ctx, base);
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,60
	ctx.r8.s64 = ctx.r31.s64 + 60;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r6,r31,110
	ctx.r6.s64 = ctx.r31.s64 + 110;
	// lis r11,160
	ctx.r11.s64 = 10485760;
	// stwx r11,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// stwx r11,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r11,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r11.u32);
	// stbx r30,r29,r6
	REX_STORE_U8(ctx.r29.u32 + ctx.r6.u32, ctx.r30.u8);
loc_8991649C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89916AA0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,8418(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 8418);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89916ac4
	if (!ctx.cr6.eq) goto loc_89916AC4;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3891(r10)
	REX_STORE_U8(ctx.r10.u32 + 3891, ctx.r11.u8);
	// blr 
	return;
loc_89916AC4:
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r8,r9,12080
	ctx.r8.s64 = ctx.r9.s64 + 12080;
	// rlwinm r7,r11,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// stb r11,8418(r10)
	REX_STORE_U8(ctx.r10.u32 + 8418, ctx.r11.u8);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r11,7924(r6)
	REX_STORE_U32(ctx.r6.u32 + 7924, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89916C68) {
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
	// bl 0x899d9280
	ctx.lr = 0x89916C78;
	sub_899D9280(ctx, base);
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
}

DEFINE_REX_FUNC(sub_89916D08) {
	REX_FUNC_PROLOGUE();
	// b 0x899600f8
	sub_899600F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89916D40) {
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
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r7,-30276
	ctx.r7.s64 = -1984167936;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lwz r11,7924(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 7924);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,7924(r9)
	REX_STORE_U32(ctx.r9.u32 + 7924, ctx.r10.u32);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// stb r11,9539(r8)
	REX_STORE_U8(ctx.r8.u32 + 9539, ctx.r11.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,32019(r7)
	REX_STORE_U8(ctx.r7.u32 + 32019, ctx.r11.u8);
	// stb r11,6054(r6)
	REX_STORE_U8(ctx.r6.u32 + 6054, ctx.r11.u8);
	// bne cr6,0x89916da0
	if (!ctx.cr6.eq) goto loc_89916DA0;
	// bl 0x899d9280
	ctx.lr = 0x89916D88;
	sub_899D9280(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,3891(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3891);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89916da0
	if (!ctx.cr6.eq) goto loc_89916DA0;
	// li r3,62
	ctx.r3.s64 = 62;
	// bl 0x89936360
	ctx.lr = 0x89916DA0;
	sub_89936360(ctx, base);
loc_89916DA0:
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
}

DEFINE_REX_FUNC(sub_89917360) {
	REX_FUNC_PROLOGUE();
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lhz r11,26536(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 26536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89917390
	if (!ctx.cr6.eq) goto loc_89917390;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,7924(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 7924);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r9)
	REX_STORE_U32(ctx.r9.u32 + 7924, ctx.r11.u32);
	// sth r10,26536(r8)
	REX_STORE_U16(ctx.r8.u32 + 26536, ctx.r10.u16);
	// blr 
	return;
loc_89917390:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,26536(r8)
	REX_STORE_U16(ctx.r8.u32 + 26536, ctx.r11.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991740c
	if (ctx.cr6.eq) goto loc_8991740C;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,9646(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 9646);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899173c0
	if (ctx.cr6.eq) goto loc_899173C0;
loc_899173B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_899173C0:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r9,20416(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 20416);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8991740c
	if (!ctx.cr6.gt) goto loc_8991740C;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
loc_899173E0:
	// lwz r7,-72(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -72);
	// rlwinm r6,r7,0,10,10
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x899173fc
	if (ctx.cr6.eq) goto loc_899173FC;
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x899173b8
	if (!ctx.cr6.eq) goto loc_899173B8;
loc_899173FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x899173e0
	if (ctx.cr6.lt) goto loc_899173E0;
loc_8991740C:
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,26536(r8)
	REX_STORE_U16(ctx.r8.u32 + 26536, ctx.r11.u16);
	// lwz r11,7924(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7924);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r10)
	REX_STORE_U32(ctx.r10.u32 + 7924, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89918508) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x89918510;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// addi r30,r11,9656
	ctx.r30.s64 = ctx.r11.s64 + 9656;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// mulli r31,r25,92
	ctx.r31.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(92));
	// lhz r9,-21584(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -21584);
	// addi r8,r30,20
	ctx.r8.s64 = ctx.r30.s64 + 20;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// addi r7,r30,24
	ctx.r7.s64 = ctx.r30.s64 + 24;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r8,7104(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 7104);
	// lis r29,1
	ctx.r29.s64 = 65536;
	// lwzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// srawi r6,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 8;
	// srawi r28,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 8;
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r9,-392
	ctx.r5.s64 = ctx.r9.s64 + -392;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// subf r4,r4,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r4.u64;
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mullw r27,r6,r28
	ctx.r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// mullw r6,r4,r5
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// add r5,r27,r7
	ctx.r5.u64 = ctx.r27.u64 + ctx.r7.u64;
	// add r4,r27,r8
	ctx.r4.u64 = ctx.r27.u64 + ctx.r8.u64;
	// addis r8,r6,352
	ctx.r8.s64 = ctx.r6.s64 + 23068672;
	// stwx r5,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u32);
	// rlwinm r7,r9,0,3,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	// stwx r4,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u32);
	// stwx r8,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x899185d8
	if (!ctx.cr6.eq) goto loc_899185D8;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lbz r8,6419(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 6419);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x899185d8
	if (!ctx.cr6.eq) goto loc_899185D8;
	// addi r10,r30,40
	ctx.r10.s64 = ctx.r30.s64 + 40;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x899185d8
	if (ctx.cr6.lt) goto loc_899185D8;
	// bl 0x89918c98
	ctx.lr = 0x899185D0;
	sub_89918C98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899185D8:
	// addi r8,r30,40
	ctx.r8.s64 = ctx.r30.s64 + 40;
	// lhzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lhzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// addi r5,r8,-320
	ctx.r5.s64 = ctx.r8.s64 + -320;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x89918610
	if (ctx.cr6.lt) goto loc_89918610;
	// addi r8,r30,42
	ctx.r8.s64 = ctx.r30.s64 + 42;
	// oris r7,r9,2048
	ctx.r7.u64 = ctx.r9.u64 | 134217728;
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// lhzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// subf r4,r5,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r5.u64;
	// sthx r4,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u16);
loc_89918610:
	// bl 0x89918828
	ctx.lr = 0x89918614;
	sub_89918828(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r10,r30,36
	ctx.r10.s64 = ctx.r30.s64 + 36;
	// lwzx r7,r31,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// addi r9,r9,12800
	ctx.r9.s64 = ctx.r9.s64 + 12800;
	// lhz r8,20416(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 20416);
	// lwzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r9,52
	ctx.r11.s64 = ctx.r9.s64 + 52;
	// mulli r8,r8,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// subf r26,r6,r7
	ctx.r26.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lis r7,-96
	ctx.r7.s64 = -6291456;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8991864C:
	// lwz r10,-52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -52);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89918698
	if (ctx.cr6.eq) goto loc_89918698;
	// lbz r9,155(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 155);
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x89918698
	if (!ctx.cr6.eq) goto loc_89918698;
	// lwz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r4,r10,0,16,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r27,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r27.u64;
	// add r3,r9,r26
	ctx.r3.u64 = ctx.r9.u64 + ctx.r26.u64;
	// stw r10,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bne cr6,0x89918698
	if (!ctx.cr6.eq) goto loc_89918698;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x89918698
	if (!ctx.cr6.lt) goto loc_89918698;
	// stw r6,-52(r11)
	REX_STORE_U32(ctx.r11.u32 + -52, ctx.r6.u32);
loc_89918698:
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// addi r10,r11,-52
	ctx.r10.s64 = ctx.r11.s64 + -52;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8991864c
	if (!ctx.cr6.eq) goto loc_8991864C;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30269
	ctx.r8.s64 = -1983709184;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// addi r10,r11,6424
	ctx.r10.s64 = ctx.r11.s64 + 6424;
	// lhz r7,6044(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 6044);
	// lhz r5,-10752(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + -10752);
	// mulli r11,r7,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(84));
	// mulli r9,r5,84
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_899186D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89918704
	if (ctx.cr6.eq) goto loc_89918704;
	// lbz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 80);
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x89918704
	if (!ctx.cr6.eq) goto loc_89918704;
	// lwz r7,28(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r5,r27,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r27.u64;
	// add r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 + ctx.r26.u64;
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
loc_89918704:
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x899186d0
	if (!ctx.cr6.eq) goto loc_899186D0;
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lhz r7,528(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 528);
	// lhz r8,-31408(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -31408);
	// mulli r9,r7,84
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(84));
	// mulli r11,r8,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(84));
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r9,-64
	ctx.r9.s64 = -4194304;
loc_89918734:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r10,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89918774
	if (ctx.cr6.eq) goto loc_89918774;
	// lbz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 80);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x89918774
	if (!ctx.cr6.eq) goto loc_89918774;
	// lwz r7,28(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r5,r27,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r27.u64;
	// add r4,r10,r26
	ctx.r4.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// bge cr6,0x89918774
	if (!ctx.cr6.lt) goto loc_89918774;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
loc_89918774:
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x89918734
	if (!ctx.cr6.eq) goto loc_89918734;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// addi r9,r10,592
	ctx.r9.s64 = ctx.r10.s64 + 592;
	// lhz r11,20400(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20400);
	// lhz r8,-9492(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + -9492);
	// mulli r10,r11,112
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8991881c
	if (!ctx.cr6.lt) goto loc_8991881C;
	// lis r28,-16
	ctx.r28.s64 = -1048576;
loc_899187B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89918808
	if (ctx.cr6.eq) goto loc_89918808;
	// lbz r9,98(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 98);
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x89918808
	if (!ctx.cr6.eq) goto loc_89918808;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r7,r11,0,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r11,r27,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r27.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// bne cr6,0x89918808
	if (!ctx.cr6.eq) goto loc_89918808;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x89918808
	if (!ctx.cr6.lt) goto loc_89918808;
	// extsh r3,r30
	ctx.r3.s64 = ctx.r30.s16;
	// bl 0x8992c498
	ctx.lr = 0x89918804;
	sub_8992C498(ctx, base);
	// lhz r8,-9492(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + -9492);
loc_89918808:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899187b4
	if (ctx.cr6.lt) goto loc_899187B4;
loc_8991881C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991A5A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmpwi cr6,r3,1024
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1024, ctx.xer);
	// bgt cr6,0x8991a61c
	if (ctx.cr6.gt) goto loc_8991A61C;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lhz r11,8416(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 8416);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8991a5c4
	if (!ctx.cr6.gt) goto loc_8991A5C4;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,8416(r10)
	REX_STORE_U16(ctx.r10.u32 + 8416, ctx.r11.u16);
loc_8991A5C4:
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30247
	ctx.r9.s64 = -1982267392;
	// addi r7,r10,-8688
	ctx.r7.s64 = ctx.r10.s64 + -8688;
	// lhz r11,6028(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 6028);
	// addi r9,r9,19368
	ctx.r9.s64 = ctx.r9.s64 + 19368;
	// mulli r10,r11,140
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(140));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8991a61c
	if (!ctx.cr6.lt) goto loc_8991A61C;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
loc_8991A5F4:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8991a60c
	if (!ctx.cr6.eq) goto loc_8991A60C;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// beq 0x8991a624
	if (ctx.cr0.eq) goto loc_8991A624;
loc_8991A60C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8991a5f4
	if (ctx.cr6.lt) goto loc_8991A5F4;
loc_8991A61C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8991A624:
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r8,6028(r6)
	REX_STORE_U16(ctx.r6.u32 + 6028, ctx.r8.u16);
	// lhz r11,-21396(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + -21396);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,-21396(r9)
	REX_STORE_U16(ctx.r9.u32 + -21396, ctx.r7.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991A9D0) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8991A9D8;
	__savegprlr_28(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r29,-31402(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + -31402);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8991aa7c
	if (!ctx.cr6.gt) goto loc_8991AA7C;
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r6,160
	ctx.r6.s64 = 10485760;
	// addi r7,r9,13024
	ctx.r7.s64 = ctx.r9.s64 + 13024;
	// addi r8,r10,9656
	ctx.r8.s64 = ctx.r10.s64 + 9656;
	// addi r30,r11,27804
	ctx.r30.s64 = ctx.r11.s64 + 27804;
loc_8991AA08:
	// lbzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// mulli r11,r10,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(92));
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r9,r9,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8991aa70
	if (ctx.cr6.eq) goto loc_8991AA70;
	// addi r9,r8,76
	ctx.r9.s64 = ctx.r8.s64 + 76;
	// extsb r28,r5
	ctx.r28.s64 = ctx.r5.s8;
	// lbzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8991aa70
	if (!ctx.cr6.gt) goto loc_8991AA70;
	// addi r28,r8,12
	ctx.r28.s64 = ctx.r8.s64 + 12;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// srawi r10,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 20;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8991aa84
	if (!ctx.cr6.eq) goto loc_8991AA84;
loc_8991AA70:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8991aa08
	if (ctx.cr6.lt) goto loc_8991AA08;
loc_8991AA7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_8991AA84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991B6A0) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r11,8200
	ctx.r10.s64 = ctx.r11.s64 + 8200;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r5,r8,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,9516(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 9516);
	// rlwinm r7,r6,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r4,r5,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r6,r9,32896
	ctx.r6.u64 = ctx.r9.u64 | 32896;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,60
	ctx.r30.s64 = 60;
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// stw r5,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwzx r9,r7,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r5,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// sth r8,154(r3)
	REX_STORE_U16(ctx.r3.u32 + 154, ctx.r8.u16);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r6,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r6.u32);
	// stb r11,156(r3)
	REX_STORE_U8(ctx.r3.u32 + 156, ctx.r11.u8);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stb r11,185(r3)
	REX_STORE_U8(ctx.r3.u32 + 185, ctx.r11.u8);
	// stb r11,184(r3)
	REX_STORE_U8(ctx.r3.u32 + 184, ctx.r11.u8);
	// stb r11,180(r3)
	REX_STORE_U8(ctx.r3.u32 + 180, ctx.r11.u8);
	// sth r11,182(r3)
	REX_STORE_U16(ctx.r3.u32 + 182, ctx.r11.u16);
	// stb r30,203(r3)
	REX_STORE_U8(ctx.r3.u32 + 203, ctx.r30.u8);
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stw r11,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stw r11,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991BC58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8991BC60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r8,r31,206
	ctx.r8.s64 = ctx.r31.s64 + 206;
	// mulli r7,r9,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwzx r6,r30,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lbzx r10,r30,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// rlwinm r5,r6,0,24,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// stwx r5,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// or r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 | ctx.r5.u64;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// stwx r8,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r6,r31,204
	ctx.r6.s64 = ctx.r31.s64 + 204;
	// lbzx r9,r7,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// addi r5,r31,204
	ctx.r5.s64 = ctx.r31.s64 + 204;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r8,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// stbx r4,r30,r3
	REX_STORE_U8(ctx.r30.u32 + ctx.r3.u32, ctx.r4.u8);
	// lbzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r9,r30,r5
	REX_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r9.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8991bd30
	if (ctx.cr6.eq) goto loc_8991BD30;
	// bl 0x89932b18
	ctx.lr = 0x8991BCE4;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932d30
	ctx.lr = 0x8991BCF0;
	sub_89932D30(ctx, base);
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r9,r30,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lhzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// srawi r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	// clrlwi r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8991bd70
	goto loc_8991BD70;
loc_8991BD30:
	// bl 0x89932e10
	ctx.lr = 0x8991BD34;
	sub_89932E10(ctx, base);
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r10,r30,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lhzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// clrlwi r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8991BD70:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stwx r10,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991CCB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-30269
	ctx.r8.s64 = -1983709184;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwz r9,-10744(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -10744);
	// lhz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r6,r11,56
	ctx.r6.s64 = ctx.r11.s64 + 56;
	// stw r9,-10744(r8)
	REX_STORE_U32(ctx.r8.u32 + -10744, ctx.r9.u32);
	// rotlwi r7,r7,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r4,r5,0,27,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// lwzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8991cd20
	if (ctx.cr6.eq) goto loc_8991CD20;
	// addi r6,r11,207
	ctx.r6.s64 = ctx.r11.s64 + 207;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// addi r8,r5,9656
	ctx.r8.s64 = ctx.r5.s64 + 9656;
	// lbzx r3,r10,r6
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// addi r6,r8,20
	ctx.r6.s64 = ctx.r8.s64 + 20;
	// mulli r5,r3,92
	ctx.r5.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(92));
	// lwz r8,7104(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 7104);
	// lwzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// mullw r3,r4,r8
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 16;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
loc_8991CD20:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// subf. r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8991cd34
	if (!ctx.cr0.lt) goto loc_8991CD34;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8991CD34:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8991cd40
	if (!ctx.cr6.lt) goto loc_8991CD40;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_8991CD40:
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
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

DEFINE_REX_FUNC(sub_8991D6A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x8991D6B0;
	__savegprlr_17(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r22,r3
	ctx.r22.s64 = ctx.r3.s16;
	// addi r7,r11,12800
	ctx.r7.s64 = ctx.r11.s64 + 12800;
	// mulli r21,r22,208
	ctx.r21.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(208));
	// addi r11,r7,32
	ctx.r11.s64 = ctx.r7.s64 + 32;
	// lwzx r30,r21,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// lwz r23,0(r30)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8991d81c
	if (ctx.cr6.eq) goto loc_8991D81C;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r10,r7,48
	ctx.r10.s64 = ctx.r7.s64 + 48;
	// addi r9,r7,52
	ctx.r9.s64 = ctx.r7.s64 + 52;
	// lhz r11,20416(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20416);
	// lwzx r20,r21,r10
	ctx.r20.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwzx r19,r21,r9
	ctx.r19.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r9.u32);
	// extsh r18,r8
	ctx.r18.s64 = ctx.r8.s16;
loc_8991D6F4:
	// lwzu r27,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r27.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// extsh r28,r18
	ctx.r28.s64 = ctx.r18.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// add r31,r11,r20
	ctx.r31.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwzu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r26,r10,r19
	ctx.r26.u64 = ctx.r10.u64 + ctx.r19.u64;
	// blt cr6,0x8991d810
	if (ctx.cr6.lt) goto loc_8991D810;
	// addi r11,r7,154
	ctx.r11.s64 = ctx.r7.s64 + 154;
	// addi r10,r7,200
	ctx.r10.s64 = ctx.r7.s64 + 200;
	// lhzx r25,r21,r11
	ctx.r25.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r11.u32);
	// lbzx r24,r21,r10
	ctx.r24.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r10.u32);
loc_8991D728:
	// mulli r8,r28,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r10,r7,200
	ctx.r10.s64 = ctx.r7.s64 + 200;
	// addi r9,r7,154
	ctx.r9.s64 = ctx.r7.s64 + 154;
	// rlwinm r5,r11,2,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// subf r6,r22,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r22.u64;
	// lbzx r4,r8,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lhzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// subf r11,r24,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r24.u64;
	// subf r10,r25,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r25.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addic r4,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// subfe r11,r4,r10
	temp.u8 = (~ctx.r4.u32 + ctx.r10.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// and r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 & ctx.r11.u64;
	// subfe r6,r10,r6
	temp.u8 = (~ctx.r10.u32 + ctx.r6.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 & ctx.r5.u64;
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8991d7fc
	if (ctx.cr6.eq) goto loc_8991D7FC;
	// addi r11,r7,32
	ctx.r11.s64 = ctx.r7.s64 + 32;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8991d7fc
	if (ctx.cr6.eq) goto loc_8991D7FC;
	// addi r10,r7,52
	ctx.r10.s64 = ctx.r7.s64 + 52;
	// clrlwi r29,r23,4
	ctx.r29.u64 = ctx.r23.u32 & 0xFFFFFFF;
	// lwzx r4,r8,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_8991D79C:
	// lwzu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r17,r7,48
	ctx.r17.s64 = ctx.r7.s64 + 48;
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwzx r9,r8,r17
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r17.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf. r10,r10,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8991d7c8
	if (!ctx.cr0.lt) goto loc_8991D7C8;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8991D7C8:
	// clrlwi r9,r3,4
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFFFFF;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8991d7f0
	if (!ctx.cr6.lt) goto loc_8991D7F0;
	// subf. r10,r6,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8991d7e4
	if (!ctx.cr0.lt) goto loc_8991D7E4;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8991D7E4:
	// add r9,r5,r27
	ctx.r9.u64 = ctx.r5.u64 + ctx.r27.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8991d824
	if (ctx.cr6.lt) goto loc_8991D824;
loc_8991D7F0:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8991d79c
	if (!ctx.cr6.eq) goto loc_8991D79C;
loc_8991D7FC:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8991d728
	if (!ctx.cr6.lt) goto loc_8991D728;
loc_8991D810:
	// lwz r23,0(r30)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8991d6f4
	if (!ctx.cr6.eq) goto loc_8991D6F4;
loc_8991D81C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_8991D824:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89921B18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x89921B20;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r4,-16320
	ctx.r4.s64 = -1069547520;
	// addi r3,r11,15624
	ctx.r3.s64 = ctx.r11.s64 + 15624;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x89931dd8
	ctx.lr = 0x89921B38;
	sub_89931DD8(ctx, base);
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lhz r9,19168(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 19168);
	// addi r11,r11,5344
	ctx.r11.s64 = ctx.r11.s64 + 5344;
	// lhz r10,5752(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 5752);
	// lis r17,-30276
	ctx.r17.s64 = -1984167936;
	// rlwinm r3,r9,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// lbz r7,535(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 535);
	// rlwinm r5,r9,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r4,r10,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lhz r8,26948(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 26948);
	// rlwinm r31,r10,28,4,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r9,r9,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// lbz r6,32552(r17)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r17.u32 + 32552);
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r26,r7,30,2,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r25,r31,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// rlwinm r23,r5,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r29,r8,24,8,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r30,r8,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r31,r9,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r4,30,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3C;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r4,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r24,r26,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// rlwinm r26,r3,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r4,r25,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// rlwinm r25,r3,30,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3C;
	// rlwinm r20,r29,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// lwzx r28,r8,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r21,r30,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r19,r29,30,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3C;
	// lwzx r22,r7,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r18,r6,30,2,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r27,-30275
	ctx.r27.s64 = -1984102400;
	// lwzx r7,r26,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lwzx r29,r25,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// addi r10,r27,-31400
	ctx.r10.s64 = ctx.r27.s64 + -31400;
	// lwzx r26,r20,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// lwzx r30,r23,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// addi r9,r9,12280
	ctx.r9.s64 = ctx.r9.s64 + 12280;
	// lwzx r27,r21,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// lwzx r25,r19,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// lwzx r20,r18,r11
	ctx.r20.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// stw r5,4524(r10)
	REX_STORE_U32(ctx.r10.u32 + 4524, ctx.r5.u32);
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// stw r4,4520(r10)
	REX_STORE_U32(ctx.r10.u32 + 4520, ctx.r4.u32);
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
	// addi r5,r17,32552
	ctx.r5.s64 = ctx.r17.s64 + 32552;
	// stw r8,4516(r10)
	REX_STORE_U32(ctx.r10.u32 + 4516, ctx.r8.u32);
	// stw r3,4512(r10)
	REX_STORE_U32(ctx.r10.u32 + 4512, ctx.r3.u32);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// stw r31,4396(r10)
	REX_STORE_U32(ctx.r10.u32 + 4396, ctx.r31.u32);
	// stw r30,4392(r10)
	REX_STORE_U32(ctx.r10.u32 + 4392, ctx.r30.u32);
	// stw r7,4388(r10)
	REX_STORE_U32(ctx.r10.u32 + 4388, ctx.r7.u32);
	// stw r29,4384(r10)
	REX_STORE_U32(ctx.r10.u32 + 4384, ctx.r29.u32);
	// stw r28,4268(r10)
	REX_STORE_U32(ctx.r10.u32 + 4268, ctx.r28.u32);
	// stw r27,4264(r10)
	REX_STORE_U32(ctx.r10.u32 + 4264, ctx.r27.u32);
	// stw r26,4260(r10)
	REX_STORE_U32(ctx.r10.u32 + 4260, ctx.r26.u32);
	// stw r25,4256(r10)
	REX_STORE_U32(ctx.r10.u32 + 4256, ctx.r25.u32);
	// stw r24,4128(r10)
	REX_STORE_U32(ctx.r10.u32 + 4128, ctx.r24.u32);
	// stb r23,35(r9)
	REX_STORE_U8(ctx.r9.u32 + 35, ctx.r23.u8);
	// stw r22,4132(r10)
	REX_STORE_U32(ctx.r10.u32 + 4132, ctx.r22.u32);
	// stb r23,34(r9)
	REX_STORE_U8(ctx.r9.u32 + 34, ctx.r23.u8);
	// stw r20,4000(r10)
	REX_STORE_U32(ctx.r10.u32 + 4000, ctx.r20.u32);
	// stb r23,33(r9)
	REX_STORE_U8(ctx.r9.u32 + 33, ctx.r23.u8);
	// addi r30,r4,-9512
	ctx.r30.s64 = ctx.r4.s64 + -9512;
	// lbz r5,1(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// lbz r4,-9512(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + -9512);
	// rlwinm r29,r6,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// stb r23,32(r9)
	REX_STORE_U8(ctx.r9.u32 + 32, ctx.r23.u8);
	// lis r31,-30273
	ctx.r31.s64 = -1983971328;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// rlwinm r28,r5,30,2,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r27,r5,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lbz r5,1(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// lhz r8,5208(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 5208);
	// lis r19,-30276
	ctx.r19.s64 = -1984167936;
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r22,r5,30,2,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFC;
	// lhz r6,-25516(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + -25516);
	// rlwinm r21,r5,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lhz r7,12608(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 12608);
	// rlwinm r25,r8,24,8,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// lwzx r31,r28,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r26,r8,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r30,r27,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r27,r4,30,2,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r24,r7,24,8,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stw r3,4004(r10)
	REX_STORE_U32(ctx.r10.u32 + 4004, ctx.r3.u32);
	// rlwinm r29,r7,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r3,r22,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stw r31,4012(r10)
	REX_STORE_U32(ctx.r10.u32 + 4012, ctx.r31.u32);
	// rlwinm r22,r29,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// lwzx r5,r27,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r28,r6,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r31,r21,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// rlwinm r27,r26,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// stw r30,4016(r10)
	REX_STORE_U32(ctx.r10.u32 + 4016, ctx.r30.u32);
	// rlwinm r21,r24,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// lwzx r30,r8,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r26,r7,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r28,r28,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// rlwinm r8,r25,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r5,3872(r10)
	REX_STORE_U32(ctx.r10.u32 + 3872, ctx.r5.u32);
	// rlwinm r7,r25,30,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3C;
	// lwzx r25,r22,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r29,r27,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r20,r6,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// stw r31,3888(r10)
	REX_STORE_U32(ctx.r10.u32 + 3888, ctx.r31.u32);
	// rlwinm r22,r24,30,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3C;
	// lwzx r24,r21,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// lis r18,-30251
	ctx.r18.s64 = -1982529536;
	// lwzx r17,r28,r11
	ctx.r17.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lis r16,-30270
	ctx.r16.s64 = -1983774720;
	// lwzx r28,r8,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r21,r6,24,8,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// lhz r8,32544(r19)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r19.u32 + 32544);
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r27,r7,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r19,r21,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r20,r20,r11
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// rlwinm r31,r8,24,8,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// lwzx r22,r22,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lhz r7,12736(r18)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r18.u32 + 12736);
	// rlwinm r18,r8,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r6,4944(r16)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r16.u32 + 4944);
	// stw r4,3876(r10)
	REX_STORE_U32(ctx.r10.u32 + 3876, ctx.r4.u32);
	// rlwinm r16,r7,28,4,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r5,r19,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// rlwinm r15,r6,28,4,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// stw r3,3884(r10)
	REX_STORE_U32(ctx.r10.u32 + 3884, ctx.r3.u32);
	// rlwinm r4,r18,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// stw r30,4064(r10)
	REX_STORE_U32(ctx.r10.u32 + 4064, ctx.r30.u32);
	// stw r29,4060(r10)
	REX_STORE_U32(ctx.r10.u32 + 4060, ctx.r29.u32);
	// stw r28,4056(r10)
	REX_STORE_U32(ctx.r10.u32 + 4056, ctx.r28.u32);
	// stw r27,4052(r10)
	REX_STORE_U32(ctx.r10.u32 + 4052, ctx.r27.u32);
	// stw r26,4084(r10)
	REX_STORE_U32(ctx.r10.u32 + 4084, ctx.r26.u32);
	// stw r25,4080(r10)
	REX_STORE_U32(ctx.r10.u32 + 4080, ctx.r25.u32);
	// stw r24,4076(r10)
	REX_STORE_U32(ctx.r10.u32 + 4076, ctx.r24.u32);
	// stw r22,4072(r10)
	REX_STORE_U32(ctx.r10.u32 + 4072, ctx.r22.u32);
	// stw r20,3936(r10)
	REX_STORE_U32(ctx.r10.u32 + 3936, ctx.r20.u32);
	// stw r17,3932(r10)
	REX_STORE_U32(ctx.r10.u32 + 3932, ctx.r17.u32);
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r3,r8,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// rlwinm r8,r7,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stw r5,3928(r10)
	REX_STORE_U32(ctx.r10.u32 + 3928, ctx.r5.u32);
	// rlwinm r30,r7,24,8,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stb r23,31(r9)
	REX_STORE_U8(ctx.r9.u32 + 31, ctx.r23.u8);
	// rlwinm r29,r6,24,8,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// stb r23,30(r9)
	REX_STORE_U8(ctx.r9.u32 + 30, ctx.r23.u8);
	// rlwinm r7,r6,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// stb r23,29(r9)
	REX_STORE_U8(ctx.r9.u32 + 29, ctx.r23.u8);
	// rlwinm r6,r16,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// lwzx r5,r3,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r26,r21,30,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3C;
	// stw r4,3952(r10)
	REX_STORE_U32(ctx.r10.u32 + 3952, ctx.r4.u32);
	// rlwinm r25,r31,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r4,r15,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3C;
	// rlwinm r8,r31,30,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3C;
	// lwzx r28,r7,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r24,r30,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// lwzx r31,r6,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r22,r30,30,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3C;
	// lwzx r7,r26,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// rlwinm r21,r29,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// lwzx r6,r25,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// rlwinm r20,r29,30,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3C;
	// lwzx r27,r4,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// lwzx r30,r24,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r29,r22,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwzx r25,r21,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// lwzx r24,r20,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// stw r7,3924(r10)
	REX_STORE_U32(ctx.r10.u32 + 3924, ctx.r7.u32);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// stw r6,3948(r10)
	REX_STORE_U32(ctx.r10.u32 + 3948, ctx.r6.u32);
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// stw r4,3944(r10)
	REX_STORE_U32(ctx.r10.u32 + 3944, ctx.r4.u32);
	// addi r4,r7,12332
	ctx.r4.s64 = ctx.r7.s64 + 12332;
	// stw r3,3808(r10)
	REX_STORE_U32(ctx.r10.u32 + 3808, ctx.r3.u32);
	// addi r3,r6,6404
	ctx.r3.s64 = ctx.r6.s64 + 6404;
	// stw r5,3956(r10)
	REX_STORE_U32(ctx.r10.u32 + 3956, ctx.r5.u32);
	// stw r31,3804(r10)
	REX_STORE_U32(ctx.r10.u32 + 3804, ctx.r31.u32);
	// stw r30,3800(r10)
	REX_STORE_U32(ctx.r10.u32 + 3800, ctx.r30.u32);
	// stw r29,3796(r10)
	REX_STORE_U32(ctx.r10.u32 + 3796, ctx.r29.u32);
	// stw r28,3828(r10)
	REX_STORE_U32(ctx.r10.u32 + 3828, ctx.r28.u32);
	// stw r27,3824(r10)
	REX_STORE_U32(ctx.r10.u32 + 3824, ctx.r27.u32);
	// stw r25,3820(r10)
	REX_STORE_U32(ctx.r10.u32 + 3820, ctx.r25.u32);
	// stw r24,3816(r10)
	REX_STORE_U32(ctx.r10.u32 + 3816, ctx.r24.u32);
loc_89921E74:
	// lbzx r6,r8,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// subfic r7,r8,36
	ctx.xer.ca = ctx.r8.u32 <= 36;
	ctx.r7.u64 = static_cast<uint64_t>(36) - ctx.r8.u64;
	// addi r5,r3,5
	ctx.r5.s64 = ctx.r3.s64 + 5;
	// lbzx r31,r8,r4
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// rlwinm r27,r6,30,2,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r26,r6,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r30,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// addi r7,r10,76
	ctx.r7.s64 = ctx.r10.s64 + 76;
	// lbzx r25,r8,r5
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// addi r29,r4,5
	ctx.r29.s64 = ctx.r4.s64 + 5;
	// stbx r23,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r23.u8);
	// lwzx r27,r27,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwzx r6,r26,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// rlwinm r28,r31,30,2,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFC;
	// stbx r23,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r23.u8);
	// rlwinm r24,r25,30,2,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFC;
	// stbx r23,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r23.u8);
	// lbzx r29,r8,r29
	ctx.r29.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// rlwinm r26,r31,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// stw r27,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
	// rlwinm r27,r25,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// rlwinm r7,r29,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r28,r28,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzx r24,r24,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// rlwinm r31,r30,7,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r26,r26,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// addi r5,r10,88
	ctx.r5.s64 = ctx.r10.s64 + 88;
	// lwzx r27,r27,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r21,r29,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// stbx r23,r25,r9
	REX_STORE_U8(ctx.r25.u32 + ctx.r9.u32, ctx.r23.u8);
	// rlwinm r29,r30,7,0,24
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// add r6,r31,r5
	ctx.r6.u64 = ctx.r31.u64 + ctx.r5.u64;
	// addi r30,r10,100
	ctx.r30.s64 = ctx.r10.s64 + 100;
	// rlwinm r31,r25,7,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r25,r7,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r5,r10,112
	ctx.r5.s64 = ctx.r10.s64 + 112;
	// lwzx r22,r21,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// add r7,r29,r30
	ctx.r7.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// stw r28,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r26,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r26.u32);
	// stwx r24,r29,r30
	REX_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r24.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stw r27,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r27.u32);
	// stw r25,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r25.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// stw r22,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r22.u32);
	// blt cr6,0x89921e74
	if (ctx.cr6.lt) goto loc_89921E74;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89927188) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89927190;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r18,-30270
	ctx.r18.s64 = -1983774720;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lbz r10,9642(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 9642);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,9642(r11)
	REX_STORE_U8(ctx.r11.u32 + 9642, ctx.r10.u8);
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// bne cr6,0x899271dc
	if (!ctx.cr6.eq) goto loc_899271DC;
	// lbz r10,6031(r18)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r18.u32 + 6031);
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r9,6030(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 6030);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,9642(r11)
	REX_STORE_U8(ctx.r11.u32 + 9642, ctx.r8.u8);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// stb r9,6030(r7)
	REX_STORE_U8(ctx.r7.u32 + 6030, ctx.r9.u8);
	// stb r11,6031(r18)
	REX_STORE_U8(ctx.r18.u32 + 6031, ctx.r11.u8);
loc_899271DC:
	// lis r27,-30214
	ctx.r27.s64 = -1980104704;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// addi r15,r9,17020
	ctx.r15.s64 = ctx.r9.s64 + 17020;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lwz r16,3512(r27)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r27.u32 + 3512);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lis r4,-30273
	ctx.r4.s64 = -1983971328;
	// addi r9,r7,520
	ctx.r9.s64 = ctx.r7.s64 + 520;
	// stw r16,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r17,120
	ctx.r17.s64 = 120;
	// lis r20,-30251
	ctx.r20.s64 = -1982529536;
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// lis r19,-30276
	ctx.r19.s64 = -1984167936;
	// addi r23,r11,7512
	ctx.r23.s64 = ctx.r11.s64 + 7512;
	// addi r25,r10,7132
	ctx.r25.s64 = ctx.r10.s64 + 7132;
	// addi r24,r8,7008
	ctx.r24.s64 = ctx.r8.s64 + 7008;
	// addi r22,r6,-2532
	ctx.r22.s64 = ctx.r6.s64 + -2532;
	// addi r14,r5,25128
	ctx.r14.s64 = ctx.r5.s64 + 25128;
	// addi r21,r4,6400
	ctx.r21.s64 = ctx.r4.s64 + 6400;
	// b 0x89927250
	goto loc_89927250;
loc_8992724C:
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_89927250:
	// mulli r31,r28,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(696));
	// lbzx r10,r28,r21
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r21.u32);
	// lwzx r11,r31,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r14.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899274d0
	if (ctx.cr6.eq) goto loc_899274D0;
	// addi r11,r14,664
	ctx.r11.s64 = ctx.r14.s64 + 664;
	// lbzx r5,r28,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r23.u32);
	// lis r6,-32640
	ctx.r6.s64 = -2139095040;
	// li r4,39
	ctx.r4.s64 = 39;
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x89927b98
	ctx.lr = 0x89927280;
	sub_89927B98(ctx, base);
	// addi r10,r14,8
	ctx.r10.s64 = ctx.r14.s64 + 8;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8992733c
	if (!ctx.cr6.lt) goto loc_8992733C;
	// addi r30,r14,4
	ctx.r30.s64 = ctx.r14.s64 + 4;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899272ac
	if (ctx.cr6.eq) goto loc_899272AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8992b5e8
	ctx.lr = 0x899272AC;
	sub_8992B5E8(ctx, base);
loc_899272AC:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899272c4
	if (ctx.cr6.eq) goto loc_899272C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8992b820
	ctx.lr = 0x899272C4;
	sub_8992B820(ctx, base);
loc_899272C4:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899272dc
	if (ctx.cr6.eq) goto loc_899272DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8992b4e0
	ctx.lr = 0x899272DC;
	sub_8992B4E0(ctx, base);
loc_899272DC:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899272f4
	if (ctx.cr6.eq) goto loc_899272F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8992b468
	ctx.lr = 0x899272F4;
	sub_8992B468(ctx, base);
loc_899272F4:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89927314
	if (ctx.cr6.eq) goto loc_89927314;
	// addi r11,r14,653
	ctx.r11.s64 = ctx.r14.s64 + 653;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r17,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r17.u8);
	// bl 0x8992b3e0
	ctx.lr = 0x89927314;
	sub_8992B3E0(ctx, base);
loc_89927314:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r10,586(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8992733c
	if (!ctx.cr6.eq) goto loc_8992733C;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992733c
	if (ctx.cr6.eq) goto loc_8992733C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8992b290
	ctx.lr = 0x8992733C;
	sub_8992B290(ctx, base);
loc_8992733C:
	// lwz r16,3512(r27)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r27.u32 + 3512);
loc_89927340:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x8992724c
	if (ctx.cr6.lt) goto loc_8992724C;
	// lis r28,16191
	ctx.r28.s64 = 1061093376;
	// stw r16,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lbz r16,6031(r18)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r18.u32 + 6031);
	// lis r27,-16320
	ctx.r27.s64 = -1069547520;
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// lis r31,-30295
	ctx.r31.s64 = -1985413120;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r28,r28,49152
	ctx.r28.u64 = ctx.r28.u64 | 49152;
	// ori r27,r27,16384
	ctx.r27.u64 = ctx.r27.u64 | 16384;
	// lis r18,-30270
	ctx.r18.s64 = -1983774720;
	// addi r15,r5,12280
	ctx.r15.s64 = ctx.r5.s64 + 12280;
	// addi r20,r4,-31400
	ctx.r20.s64 = ctx.r4.s64 + -31400;
	// addi r24,r3,6052
	ctx.r24.s64 = ctx.r3.s64 + 6052;
	// addi r23,r31,7344
	ctx.r23.s64 = ctx.r31.s64 + 7344;
	// addi r22,r6,-21388
	ctx.r22.s64 = ctx.r6.s64 + -21388;
	// addi r21,r7,17728
	ctx.r21.s64 = ctx.r7.s64 + 17728;
	// addi r17,r8,7200
	ctx.r17.s64 = ctx.r8.s64 + 7200;
	// addi r26,r9,7476
	ctx.r26.s64 = ctx.r9.s64 + 7476;
	// addi r25,r10,7332
	ctx.r25.s64 = ctx.r10.s64 + 7332;
	// addi r19,r11,-9500
	ctx.r19.s64 = ctx.r11.s64 + -9500;
loc_899273C8:
	// mulli r11,r29,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(696));
	// lbzx r3,r29,r19
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r19.u32);
	// lwzx r10,r11,r14
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899273ec
	if (ctx.cr6.eq) goto loc_899273EC;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lbz r9,586(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 586);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89927738
	if (ctx.cr6.eq) goto loc_89927738;
loc_899273EC:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89927404
	if (ctx.cr6.eq) goto loc_89927404;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x89927738
	if (!ctx.cr6.eq) goto loc_89927738;
loc_89927404:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r9,r14,658
	ctx.r9.s64 = ctx.r14.s64 + 658;
	// lbz r6,6055(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6055);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// subfc r5,r7,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r7.u32;
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lbz r9,7115(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 7115);
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x89927648
	if (ctx.cr6.eq) goto loc_89927648;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r20,4864
	ctx.r9.s64 = ctx.r20.s64 + 4864;
	// lbz r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// lbzx r6,r29,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// beq cr6,0x89927484
	if (ctx.cr6.eq) goto loc_89927484;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8992746C:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r6,r28,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r28.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8992746c
	if (!ctx.cr6.eq) goto loc_8992746C;
loc_89927484:
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r20,4736
	ctx.r8.s64 = ctx.r20.s64 + 4736;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r9,38(r15)
	REX_STORE_U8(ctx.r15.u32 + 38, ctx.r9.u8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899274c4
	if (ctx.cr6.eq) goto loc_899274C4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_899274AC:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r28,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r28.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899274ac
	if (!ctx.cr6.eq) goto loc_899274AC;
loc_899274C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,37(r15)
	REX_STORE_U8(ctx.r15.u32 + 37, ctx.r11.u8);
	// b 0x89927738
	goto loc_89927738;
loc_899274D0:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x899274e4
	if (ctx.cr6.eq) goto loc_899274E4;
	// addi r11,r16,-1
	ctx.r11.s64 = ctx.r16.s64 + -1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x89927340
	if (!ctx.cr6.eq) goto loc_89927340;
loc_899274E4:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r8,r14,658
	ctx.r8.s64 = ctx.r14.s64 + 658;
	// lbz r6,6055(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 6055);
	// lbzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x89927340
	if (ctx.cr6.gt) goto loc_89927340;
	// addi r8,r14,625
	ctx.r8.s64 = ctx.r14.s64 + 625;
	// lbzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x89927340
	if (ctx.cr6.eq) goto loc_89927340;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89927534
	if (!ctx.cr6.eq) goto loc_89927534;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbzx r6,r8,r22
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r22.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x89927554
	if (!ctx.cr6.lt) goto loc_89927554;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89927544
	if (ctx.cr6.eq) goto loc_89927544;
loc_89927534:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// lbzx r8,r11,r22
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x89927554
	if (!ctx.cr6.eq) goto loc_89927554;
loc_89927544:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89927340
	if (!ctx.cr6.eq) goto loc_89927340;
loc_89927554:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,7115(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7115);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89927340
	if (!ctx.cr6.eq) goto loc_89927340;
	// lbz r10,32546(r19)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r19.u32 + 32546);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899275fc
	if (ctx.cr6.eq) goto loc_899275FC;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r30,3892(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 3892);
	// bl 0x8993cc28
	ctx.lr = 0x89927580;
	sub_8993CC28(ctx, base);
	// addi r11,r14,8
	ctx.r11.s64 = ctx.r14.s64 + 8;
	// addi r10,r24,17
	ctx.r10.s64 = ctx.r24.s64 + 17;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// mulli r7,r8,30
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(30));
	// lbzx r4,r7,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// bl 0x899362a0
	ctx.lr = 0x899275A0;
	sub_899362A0(ctx, base);
	// lwz r6,20404(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 20404);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x899275bc
	if (!ctx.cr6.eq) goto loc_899275BC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x899275d8
	if (ctx.cr6.eq) goto loc_899275D8;
	// li r11,18000
	ctx.r11.s64 = 18000;
	// b 0x899275d4
	goto loc_899275D4;
loc_899275BC:
	// lwz r11,20404(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20404);
	// cmpwi cr6,r11,18000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18000, ctx.xer);
	// bge cr6,0x899275d0
	if (!ctx.cr6.lt) goto loc_899275D0;
	// li r11,18000
	ctx.r11.s64 = 18000;
	// b 0x899275d4
	goto loc_899275D4;
loc_899275D0:
	// lwz r11,20404(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20404);
loc_899275D4:
	// stw r11,20404(r26)
	REX_STORE_U32(ctx.r26.u32 + 20404, ctx.r11.u32);
loc_899275D8:
	// addi r11,r14,696
	ctx.r11.s64 = ctx.r14.s64 + 696;
	// subf r10,r31,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x89927600
	if (!ctx.cr6.eq) goto loc_89927600;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r11,r11,16960
	ctx.r11.u64 = ctx.r11.u64 | 16960;
	// stw r11,12152(r20)
	REX_STORE_U32(ctx.r20.u32 + 12152, ctx.r11.u32);
	// b 0x89927600
	goto loc_89927600;
loc_899275FC:
	// bl 0x89957a50
	ctx.lr = 0x89927600;
	sub_89957A50(ctx, base);
loc_89927600:
	// lbzx r11,r28,r15
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r15.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,38
	ctx.r4.s64 = 38;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// add r11,r28,r15
	ctx.r11.u64 = ctx.r28.u64 + ctx.r15.u64;
	// bl 0x89931d20
	ctx.lr = 0x89927618;
	sub_89931D20(ctx, base);
	// lbzx r10,r28,r15
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r15.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// bl 0x89931d20
	ctx.lr = 0x8992762C;
	sub_89931D20(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lbz r9,6030(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 6030);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,6030(r10)
	REX_STORE_U8(ctx.r10.u32 + 6030, ctx.r7.u8);
	// b 0x89927340
	goto loc_89927340;
loc_89927648:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,6030(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6030);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89927738
	if (ctx.cr6.eq) goto loc_89927738;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x89927738
	if (ctx.cr6.gt) goto loc_89927738;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899276f4
	if (ctx.cr6.eq) goto loc_899276F4;
	// bdz 0x89927728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_89927728;
	// bdnz 0x89927708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89927708;
	// lbz r11,4947(r18)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 4947);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x899276f4
	if (ctx.cr6.eq) goto loc_899276F4;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// extsb r31,r3
	ctx.r31.s64 = ctx.r3.s8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,38
	ctx.r4.s64 = 38;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r30,r29,r10
	ctx.r30.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq cr6,0x899276e8
	if (ctx.cr6.eq) goto loc_899276E8;
	// lbzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r22.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x89931d78
	ctx.lr = 0x899276C4;
	sub_89931D78(ctx, base);
	// lbzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// li r4,37
	ctx.r4.s64 = 37;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x89931d78
	ctx.lr = 0x899276E4;
	sub_89931D78(ctx, base);
	// b 0x89927738
	goto loc_89927738;
loc_899276E8:
	// addi r3,r17,120
	ctx.r3.s64 = ctx.r17.s64 + 120;
	// bl 0x89931d78
	ctx.lr = 0x899276F0;
	sub_89931D78(ctx, base);
	// b 0x89927738
	goto loc_89927738;
loc_899276F4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// lbzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8992af40
	ctx.lr = 0x89927704;
	sub_8992AF40(ctx, base);
	// b 0x89927738
	goto loc_89927738;
loc_89927708:
	// lbz r11,4947(r18)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 4947);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x89927728
	if (ctx.cr6.eq) goto loc_89927728;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// lbzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8992ae28
	ctx.lr = 0x89927724;
	sub_8992AE28(ctx, base);
	// b 0x89927738
	goto loc_89927738;
loc_89927728:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,38
	ctx.r4.s64 = 38;
	// lbzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8992aca8
	ctx.lr = 0x89927738;
	sub_8992ACA8(ctx, base);
loc_89927738:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x899273c8
	if (ctx.cr6.lt) goto loc_899273C8;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r10,-30247
	ctx.r10.s64 = -1982267392;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,6030(r9)
	REX_STORE_U8(ctx.r9.u32 + 6030, ctx.r11.u8);
	// lwz r11,19364(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 19364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89927774
	if (ctx.cr6.eq) goto loc_89927774;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,19364(r10)
	REX_STORE_U32(ctx.r10.u32 + 19364, ctx.r11.u32);
	// b 0x899278f8
	goto loc_899278F8;
loc_89927774:
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lwz r11,3892(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 3892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899277f8
	if (ctx.cr6.eq) goto loc_899277F8;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lbz r10,8419(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 8419);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899277a0
	if (ctx.cr6.eq) goto loc_899277A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1200
	ctx.r11.s64 = 1200;
	// stb r10,8419(r9)
	REX_STORE_U8(ctx.r9.u32 + 8419, ctx.r10.u8);
loc_899277A0:
	// addic. r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,3892(r8)
	REX_STORE_U32(ctx.r8.u32 + 3892, ctx.r3.u32);
	// beq 0x899278f4
	if (ctx.cr0.eq) goto loc_899278F4;
	// cmpwi cr6,r3,1080
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1080, ctx.xer);
	// bge cr6,0x899277f0
	if (!ctx.cr6.lt) goto loc_899277F0;
	// cmpwi cr6,r3,240
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 240, ctx.xer);
	// ble cr6,0x899277f0
	if (!ctx.cr6.gt) goto loc_899277F0;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r10,r11,20432
	ctx.r10.s64 = ctx.r11.s64 + 20432;
	// lbz r11,256(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 256);
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899277f0
	if (ctx.cr6.eq) goto loc_899277F0;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x899dab80
	ctx.lr = 0x899277DC;
	sub_899DAB80(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mulli r11,r11,120
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(120));
	// stw r11,3892(r10)
	REX_STORE_U32(ctx.r10.u32 + 3892, ctx.r11.u32);
loc_899277F0:
	// bl 0x8992b118
	ctx.lr = 0x899277F4;
	sub_8992B118(ctx, base);
	// b 0x899278f8
	goto loc_899278F8;
loc_899277F8:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899278f8
	if (!ctx.cr6.eq) goto loc_899278F8;
	// lwz r11,696(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899278f8
	if (!ctx.cr6.eq) goto loc_899278F8;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r9,r14,658
	ctx.r9.s64 = ctx.r14.s64 + 658;
	// lbz r6,6055(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 6055);
	// lhz r11,27844(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 27844);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mulli r4,r5,696
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(696));
	// lbzx r3,r4,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x899278f4
	if (ctx.cr6.gt) goto loc_899278F4;
	// li r11,1200
	ctx.r11.s64 = 1200;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,3892(r8)
	REX_STORE_U32(ctx.r8.u32 + 3892, ctx.r11.u32);
	// bl 0x8992c408
	ctx.lr = 0x89927848;
	sub_8992C408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899278e4
	if (ctx.cr6.eq) goto loc_899278E4;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r30,r10,592
	ctx.r30.s64 = ctx.r10.s64 + 592;
	// li r8,11
	ctx.r8.s64 = 11;
	// lhz r3,-4592(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mulli r31,r5,112
	ctx.r31.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(112));
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r29,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u32);
	// bl 0x8992bd50
	ctx.lr = 0x89927898;
	sub_8992BD50(ctx, base);
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lis r4,176
	ctx.r4.s64 = 11534336;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,-21584(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -21584);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// addi r7,r30,68
	ctx.r7.s64 = ctx.r30.s64 + 68;
	// stwx r4,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// addi r6,r30,44
	ctx.r6.s64 = ctx.r30.s64 + 44;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addis r3,r10,120
	ctx.r3.s64 = ctx.r10.s64 + 7864320;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,256
	ctx.r9.s64 = 256;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// stbx r10,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u8);
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
loc_899278E4:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8419(r10)
	REX_STORE_U8(ctx.r10.u32 + 8419, ctx.r11.u8);
	// b 0x899278f8
	goto loc_899278F8;
loc_899278F4:
	// bl 0x89927050
	ctx.lr = 0x899278F8;
	sub_89927050(ctx, base);
loc_899278F8:
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbz r11,12274(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 12274);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89927964
	if (ctx.cr6.eq) goto loc_89927964;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,12274(r10)
	REX_STORE_U8(ctx.r10.u32 + 12274, ctx.r11.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89927964
	if (!ctx.cr6.eq) goto loc_89927964;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r10,r20,640
	ctx.r10.s64 = ctx.r20.s64 + 640;
	// addi r8,r11,-2072
	ctx.r8.s64 = ctx.r11.s64 + -2072;
	// lbz r11,-2072(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -2072);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8992795c
	if (ctx.cr6.eq) goto loc_8992795C;
	// lis r9,16319
	ctx.r9.s64 = 1069481984;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// ori r7,r9,16384
	ctx.r7.u64 = ctx.r9.u64 | 16384;
loc_89927944:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89927944
	if (!ctx.cr6.eq) goto loc_89927944;
loc_8992795C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5(r15)
	REX_STORE_U8(ctx.r15.u32 + 5, ctx.r11.u8);
loc_89927964:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r10,530(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 530);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89927978
	if (ctx.cr6.eq) goto loc_89927978;
	// bl 0x89929920
	ctx.lr = 0x89927978;
	sub_89929920(ctx, base);
loc_89927978:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89929BD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x89929BE0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r9,r10,17384
	ctx.r9.s64 = ctx.r10.s64 + 17384;
	// srawi r7,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 2;
	// addi r6,r8,17388
	ctx.r6.s64 = ctx.r8.s64 + 17388;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// lis r3,-30295
	ctx.r3.s64 = -1985413120;
	// lbzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r8,r3,17368
	ctx.r8.s64 = ctx.r3.s64 + 17368;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// addi r19,r10,32560
	ctx.r19.s64 = ctx.r10.s64 + 32560;
	// lwzx r18,r9,r8
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x89929c9c
	if (ctx.cr6.gt) goto loc_89929C9C;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r5,r9,17396
	ctx.r5.s64 = ctx.r9.s64 + 17396;
	// addi r8,r10,17392
	ctx.r8.s64 = ctx.r10.s64 + 17392;
	// lbzx r3,r11,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lbzx r4,r11,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// li r8,4096
	ctx.r8.s64 = 4096;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// extsb r5,r4
	ctx.r5.s64 = ctx.r4.s8;
loc_89929C58:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x89929c88
	if (ctx.cr6.gt) goto loc_89929C88;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
loc_89929C68:
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// sthx r8,r4,r19
	REX_STORE_U16(ctx.r4.u32 + ctx.r19.u32, ctx.r8.u16);
	// ble cr6,0x89929c68
	if (!ctx.cr6.gt) goto loc_89929C68;
loc_89929C88:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x89929c58
	if (!ctx.cr6.gt) goto loc_89929C58;
loc_89929C9C:
	// lwz r4,0(r18)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89929e58
	if (ctx.cr6.eq) goto loc_89929E58;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r6,-30276
	ctx.r6.s64 = -1984167936;
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// li r20,-32768
	ctx.r20.s64 = -32768;
	// addi r25,r11,7128
	ctx.r25.s64 = ctx.r11.s64 + 7128;
	// addi r24,r10,-10056
	ctx.r24.s64 = ctx.r10.s64 + -10056;
	// addi r28,r9,-31952
	ctx.r28.s64 = ctx.r9.s64 + -31952;
	// addi r23,r8,11752
	ctx.r23.s64 = ctx.r8.s64 + 11752;
	// addi r22,r7,-9208
	ctx.r22.s64 = ctx.r7.s64 + -9208;
	// addi r27,r6,32032
	ctx.r27.s64 = ctx.r6.s64 + 32032;
	// addi r29,r5,-4592
	ctx.r29.s64 = ctx.r5.s64 + -4592;
loc_89929CE4:
	// lbz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 4);
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r21,8(r10)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r9,0(r21)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r21.u32 + 0);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89929e4c
	if (ctx.cr6.eq) goto loc_89929E4C;
loc_89929D04:
	// lbz r9,5(r18)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r18.u32 + 5);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// rlwinm r7,r8,15,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0xFFFF8000;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// extsh r31,r6
	ctx.r31.s64 = ctx.r6.s16;
	// clrlwi r30,r31,17
	ctx.r30.u64 = ctx.r31.u32 & 0x7FFF;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899334b8
	ctx.lr = 0x89929D28;
	sub_899334B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89929e3c
	if (!ctx.cr6.eq) goto loc_89929E3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89933520
	ctx.lr = 0x89929D38;
	sub_89933520(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89929e3c
	if (!ctx.cr6.eq) goto loc_89929E3C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x89933348
	ctx.lr = 0x89929D4C;
	sub_89933348(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89929e3c
	if (ctx.cr6.eq) goto loc_89929E3C;
	// rlwinm r11,r31,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8000;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x89929dcc
	if (!ctx.cr6.eq) goto loc_89929DCC;
loc_89929D74:
	// lhzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// clrlwi r7,r9,18
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFF;
	// cmplwi cr6,r7,4096
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4096, ctx.xer);
	// beq cr6,0x89929da0
	if (ctx.cr6.eq) goto loc_89929DA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x89929d74
	if (ctx.cr6.lt) goto loc_89929D74;
	// li r10,256
	ctx.r10.s64 = 256;
loc_89929DA0:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x89929e3c
	if (!ctx.cr6.lt) goto loc_89929E3C;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r10,2(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// clrlwi r8,r8,17
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFF;
	// sthx r8,r9,r27
	REX_STORE_U16(ctx.r9.u32 + ctx.r27.u32, ctx.r8.u16);
	// sthx r11,r9,r22
	REX_STORE_U16(ctx.r9.u32 + ctx.r22.u32, ctx.r11.u16);
	// sthx r10,r9,r23
	REX_STORE_U16(ctx.r9.u32 + ctx.r23.u32, ctx.r10.u16);
	// b 0x89929e20
	goto loc_89929E20;
loc_89929DCC:
	// lhzx r9,r9,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// clrlwi r7,r9,18
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFF;
	// cmplwi cr6,r7,4096
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4096, ctx.xer);
	// beq cr6,0x89929df8
	if (ctx.cr6.eq) goto loc_89929DF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x89929dcc
	if (ctx.cr6.lt) goto loc_89929DCC;
	// li r10,256
	ctx.r10.s64 = 256;
loc_89929DF8:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bge cr6,0x89929e3c
	if (!ctx.cr6.lt) goto loc_89929E3C;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r10,2(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// clrlwi r8,r8,17
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFF;
	// sthx r8,r9,r28
	REX_STORE_U16(ctx.r9.u32 + ctx.r28.u32, ctx.r8.u16);
	// sthx r11,r9,r24
	REX_STORE_U16(ctx.r9.u32 + ctx.r24.u32, ctx.r11.u16);
	// sthx r10,r9,r25
	REX_STORE_U16(ctx.r9.u32 + ctx.r25.u32, ctx.r10.u16);
loc_89929E20:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r26,r20
	ctx.r8.u64 = ctx.r26.u64 | ctx.r20.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r5,r19
	REX_STORE_U16(ctx.r5.u32 + ctx.r19.u32, ctx.r8.u16);
loc_89929E3C:
	// lhzu r11,2(r21)
	ea = 2 + ctx.r21.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r21.u32 = ea;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89929d04
	if (!ctx.cr6.eq) goto loc_89929D04;
loc_89929E4C:
	// lwzu r4,8(r18)
	ea = 8 + ctx.r18.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r18.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x89929ce4
	if (!ctx.cr6.eq) goto loc_89929CE4;
loc_89929E58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992B290) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8992B298;
	__savegprlr_27(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// addi r30,r11,25128
	ctx.r30.s64 = ctx.r11.s64 + 25128;
	// mulli r31,r6,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(696));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// addi r7,r30,635
	ctx.r7.s64 = ctx.r30.s64 + 635;
	// addi r10,r8,18168
	ctx.r10.s64 = ctx.r8.s64 + 18168;
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lbz r4,32018(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 32018);
	// rlwinm r9,r5,2,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFF0;
	// lbzx r8,r31,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne cr6,0x8992b2dc
	if (!ctx.cr6.eq) goto loc_8992B2DC;
	// li r8,5
	ctx.r8.s64 = 5;
loc_8992B2DC:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// addi r7,r11,18160
	ctx.r7.s64 = ctx.r11.s64 + 18160;
	// addi r11,r10,-31400
	ctx.r11.s64 = ctx.r10.s64 + -31400;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,4864
	ctx.r10.s64 = ctx.r11.s64 + 4864;
	// addi r9,r11,4736
	ctx.r9.s64 = ctx.r11.s64 + 4736;
	// lbzx r4,r6,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x8992b324
	if (ctx.cr6.eq) goto loc_8992B324;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8992B324:
	// rlwinm r7,r6,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// lis r4,-30295
	ctx.r4.s64 = -1985413120;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r4,18248
	ctx.r4.s64 = ctx.r4.s64 + 18248;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 + ctx.r5.u64;
loc_8992B348:
	// lbzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8992b378
	if (ctx.cr6.eq) goto loc_8992B378;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,4(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r28,8(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r27,12(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stwu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r10.u32 = ea;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// b 0x8992b388
	goto loc_8992B388;
loc_8992B378:
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
loc_8992B388:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// blt cr6,0x8992b348
	if (ctx.cr6.lt) goto loc_8992B348;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8992b3b4
	if (!ctx.cr6.eq) goto loc_8992B3B4;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
loc_8992B3B4:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r9,12280
	ctx.r8.s64 = ctx.r9.s64 + 12280;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stb r10,38(r8)
	REX_STORE_U8(ctx.r8.u32 + 38, ctx.r10.u8);
	// stb r9,37(r8)
	REX_STORE_U8(ctx.r8.u32 + 37, ctx.r9.u8);
	// stwx r6,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992BF38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8992BF40;
	__savegprlr_27(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lhz r30,-9540(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -9540);
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// sth r3,12268(r9)
	REX_STORE_U16(ctx.r9.u32 + 12268, ctx.r3.u16);
	// li r9,320
	ctx.r9.s64 = 320;
	// lhz r28,25060(r10)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 25060);
	// li r8,352
	ctx.r8.s64 = 352;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// sth r30,3528(r6)
	REX_STORE_U16(ctx.r6.u32 + 3528, ctx.r30.u16);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// sth r30,20400(r5)
	REX_STORE_U16(ctx.r5.u32 + 20400, ctx.r30.u16);
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sth r4,-9492(r7)
	REX_STORE_U16(ctx.r7.u32 + -9492, ctx.r4.u16);
	// mulli r10,r3,112
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(112));
	// sth r9,3616(r6)
	REX_STORE_U16(ctx.r6.u32 + 3616, ctx.r9.u16);
	// sth r8,9640(r5)
	REX_STORE_U16(ctx.r5.u32 + 9640, ctx.r8.u16);
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// addi r7,r9,592
	ctx.r7.s64 = ctx.r9.s64 + 592;
loc_8992BFA4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r3,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r3.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,352
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 352, ctx.xer);
	// mulli r10,r11,112
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// blt cr6,0x8992bfa4
	if (ctx.cr6.lt) goto loc_8992BFA4;
	// lis r5,-30276
	ctx.r5.s64 = -1984167936;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// lbz r29,32018(r5)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 32018);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9512
	ctx.r4.s64 = ctx.r11.s64 + -9512;
	// addi r31,r10,32552
	ctx.r31.s64 = ctx.r10.s64 + 32552;
	// addi r5,r9,12332
	ctx.r5.s64 = ctx.r9.s64 + 12332;
	// addi r8,r8,6404
	ctx.r8.s64 = ctx.r8.s64 + 6404;
loc_8992BFE8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8992bffc
	if (!ctx.cr6.eq) goto loc_8992BFFC;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8992c02c
	if (!ctx.cr6.eq) goto loc_8992C02C;
loc_8992BFFC:
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
loc_8992C008:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// stbx r3,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r3.u8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stbx r3,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r3.u8);
	// blt cr6,0x8992c008
	if (ctx.cr6.lt) goto loc_8992C008;
	// stbx r3,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r3.u8);
	// stbx r3,r6,r31
	REX_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r3.u8);
loc_8992C02C:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8992bfe8
	if (ctx.cr6.lt) goto loc_8992BFE8;
	// lis r6,-30251
	ctx.r6.s64 = -1982529536;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r5,-30276
	ctx.r5.s64 = -1984167936;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lis r4,-30273
	ctx.r4.s64 = -1983971328;
	// sth r3,12736(r6)
	REX_STORE_U16(ctx.r6.u32 + 12736, ctx.r3.u16);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// sth r3,4944(r8)
	REX_STORE_U16(ctx.r8.u32 + 4944, ctx.r3.u16);
	// mulli r8,r30,112
	ctx.r8.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(112));
	// sth r3,32544(r5)
	REX_STORE_U16(ctx.r5.u32 + 32544, ctx.r3.u16);
	// stb r3,535(r10)
	REX_STORE_U8(ctx.r10.u32 + 535, ctx.r3.u8);
	// sth r3,-25516(r4)
	REX_STORE_U16(ctx.r4.u32 + -25516, ctx.r3.u16);
	// sth r3,12608(r6)
	REX_STORE_U16(ctx.r6.u32 + 12608, ctx.r3.u16);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r11,-30282
	ctx.r11.s64 = -1984561152;
	// sth r3,5208(r5)
	REX_STORE_U16(ctx.r5.u32 + 5208, ctx.r3.u16);
	// lis r10,-30284
	ctx.r10.s64 = -1984692224;
	// lis r9,-30280
	ctx.r9.s64 = -1984430080;
	// lis r8,-30278
	ctx.r8.s64 = -1984299008;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,32008
	ctx.r5.s64 = ctx.r11.s64 + 32008;
	// addi r4,r10,32008
	ctx.r4.s64 = ctx.r10.s64 + 32008;
	// addi r9,r9,32008
	ctx.r9.s64 = ctx.r9.s64 + 32008;
	// addi r8,r8,32008
	ctx.r8.s64 = ctx.r8.s64 + 32008;
loc_8992C0B0:
	// rlwinm r10,r31,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8992C0B8:
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stwx r7,r29,r4
	REX_STORE_U32(ctx.r29.u32 + ctx.r4.u32, ctx.r7.u32);
	// stwx r7,r29,r5
	REX_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r7.u32);
	// blt cr6,0x8992c0b8
	if (ctx.cr6.lt) goto loc_8992C0B8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8992C0DC:
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// stwx r6,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r6,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r6.u32);
	// blt cr6,0x8992c0dc
	if (ctx.cr6.lt) goto loc_8992C0DC;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// blt cr6,0x8992c0b0
	if (ctx.cr6.lt) goto loc_8992C0B0;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// addis r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 65536;
	// lis r5,-30274
	ctx.r5.s64 = -1984036864;
	// addi r9,r9,-29696
	ctx.r9.s64 = ctx.r9.s64 + -29696;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// stw r9,26940(r6)
	REX_STORE_U32(ctx.r6.u32 + 26940, ctx.r9.u32);
	// addi r10,r7,28672
	ctx.r10.s64 = ctx.r7.s64 + 28672;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r6,-30251
	ctx.r6.s64 = -1982529536;
	// stb r3,538(r5)
	REX_STORE_U8(ctx.r5.u32 + 538, ctx.r3.u8);
	// lis r5,-30273
	ctx.r5.s64 = -1983971328;
	// stw r10,12328(r11)
	REX_STORE_U32(ctx.r11.u32 + 12328, ctx.r10.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// sth r3,26948(r4)
	REX_STORE_U16(ctx.r4.u32 + 26948, ctx.r3.u16);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// sth r3,19168(r6)
	REX_STORE_U16(ctx.r6.u32 + 19168, ctx.r3.u16);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// sth r3,5752(r5)
	REX_STORE_U16(ctx.r5.u32 + 5752, ctx.r3.u16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r6,r3,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,19192
	ctx.r10.s64 = ctx.r10.s64 + 19192;
	// addi r4,r9,-31432
	ctx.r4.s64 = ctx.r9.s64 + -31432;
loc_8992C170:
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r3,r6,r4
	REX_STORE_U16(ctx.r6.u32 + ctx.r4.u32, ctx.r3.u16);
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi r5,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 3;
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 3;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r5,r8,112
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(112));
	// stwx r8,r6,r10
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r11,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r11.u32);
	// mulli r8,r11,112
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r31,r10,12
	ctx.r31.s64 = ctx.r10.s64 + 12;
	// addi r29,r10,16
	ctx.r29.s64 = ctx.r10.s64 + 16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// add r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stwx r9,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r8,r6,r29
	REX_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r8.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8992c170
	if (ctx.cr6.lt) goto loc_8992C170;
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-21264
	ctx.r10.s64 = ctx.r10.s64 + -21264;
	// addi r31,r9,-21292
	ctx.r31.s64 = ctx.r9.s64 + -21292;
loc_8992C1F4:
	// mullw r8,r11,r28
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// sthx r3,r4,r31
	REX_STORE_U16(ctx.r4.u32 + ctx.r31.u32, ctx.r3.u16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// mullw r4,r9,r28
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r6,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// addi r29,r10,4
	ctx.r29.s64 = ctx.r10.s64 + 4;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 + ctx.r30.u64;
	// mulli r6,r8,112
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(112));
	// stwx r8,r4,r10
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r11,r4,r29
	REX_STORE_U32(ctx.r4.u32 + ctx.r29.u32, ctx.r11.u32);
	// mulli r8,r11,112
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// addi r29,r10,16
	ctx.r29.s64 = ctx.r10.s64 + 16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stwx r9,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r9.u32);
	// stwx r8,r4,r29
	REX_STORE_U32(ctx.r4.u32 + ctx.r29.u32, ctx.r8.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8992c1f4
	if (ctx.cr6.lt) goto loc_8992C1F4;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,12012
	ctx.r9.s64 = ctx.r9.s64 + 12012;
loc_8992C278:
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stbx r3,r6,r9
	REX_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r3.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stbx r7,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r7.u8);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8992c278
	if (ctx.cr6.lt) goto loc_8992C278;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992E0F8) {
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
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// addi r10,r10,32552
	ctx.r10.s64 = ctx.r10.s64 + 32552;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lhz r11,4944(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 4944);
	// lhz r31,32544(r8)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r8.u32 + 32544);
	// subfe r30,r30,r30
	temp.u8 = (~ctx.r30.u32 + ctx.r30.u32 < ~ctx.r30.u32) | (~ctx.r30.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r30.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r7,586(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 586);
	// and r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r11,r11,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r11.u64;
	// lbzx r31,r7,r10
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,2500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2500, ctx.xer);
	// ble cr6,0x8992e170
	if (!ctx.cr6.gt) goto loc_8992E170;
	// lis r11,160
	ctx.r11.s64 = 10485760;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8992e170
	if (!ctx.cr6.gt) goto loc_8992E170;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lbz r6,32018(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 32018);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bne cr6,0x8992e220
	if (!ctx.cr6.eq) goto loc_8992E220;
loc_8992E170:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r11,18600
	ctx.r9.s64 = ctx.r11.s64 + 18600;
	// bne cr6,0x8992e1ac
	if (!ctx.cr6.eq) goto loc_8992E1AC;
	// rlwinm r8,r31,1,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lbzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// stbx r8,r7,r10
	REX_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u8);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// bne cr6,0x8992e1ac
	if (!ctx.cr6.eq) goto loc_8992E1AC;
	// stbx r6,r7,r10
	REX_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u8);
loc_8992E1AC:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// mulli r10,r10,112
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stwx r4,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r4.u32);
	// beq cr6,0x8992e204
	if (ctx.cr6.eq) goto loc_8992E204;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x8992e1f0
	if (ctx.cr6.eq) goto loc_8992E1F0;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x8992e1e8
	if (ctx.cr6.eq) goto loc_8992E1E8;
	// stwx r6,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// b 0x8992e26c
	goto loc_8992E26C;
loc_8992E1E8:
	// stwx r5,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u32);
	// b 0x8992e26c
	goto loc_8992E26C;
loc_8992E1F0:
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lbz r7,535(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 535);
	// stwx r7,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x8992e26c
	goto loc_8992E26C;
loc_8992E204:
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r31,1,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lbzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// stwx r9,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
	// b 0x8992e26c
	goto loc_8992E26C;
loc_8992E220:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// sth r6,4944(r9)
	REX_STORE_U16(ctx.r9.u32 + 4944, ctx.r6.u16);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// sth r6,32544(r8)
	REX_STORE_U16(ctx.r8.u32 + 32544, ctx.r6.u16);
	// mulli r10,r10,112
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// stwx r6,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r6.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lis r7,-30251
	ctx.r7.s64 = -1982529536;
	// lis r31,-30273
	ctx.r31.s64 = -1983971328;
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stwx r30,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r30.u32);
	// sth r6,12736(r7)
	REX_STORE_U16(ctx.r7.u32 + 12736, ctx.r6.u16);
	// sth r6,-25516(r31)
	REX_STORE_U16(ctx.r31.u32 + -25516, ctx.r6.u16);
loc_8992E26C:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stwx r6,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// bl 0x8992bd50
	ctx.lr = 0x8992E278;
	sub_8992BD50(ctx, base);
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

DEFINE_REX_FUNC(sub_8992EB88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8992EB90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r28,r4
	ctx.r28.s64 = ctx.r4.s16;
	// addi r29,r11,592
	ctx.r29.s64 = ctx.r11.s64 + 592;
	// mulli r30,r28,112
	ctx.r30.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(112));
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r9,r10,18616
	ctx.r9.s64 = ctx.r10.s64 + 18616;
	// lwzx r8,r30,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// beq cr6,0x8992ec04
	if (ctx.cr6.eq) goto loc_8992EC04;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r9,-9516(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -9516);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// bgt cr6,0x8992ebe8
	if (ctx.cr6.gt) goto loc_8992EBE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8992EBE8:
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
	// lwz r9,8420(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8420);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8992ec1c
	if (!ctx.cr6.lt) goto loc_8992EC1C;
	// stw r9,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r9.u32);
	// b 0x8992ec1c
	goto loc_8992EC1C;
loc_8992EC04:
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lwz r10,-9516(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -9516);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8992ec1c
	if (!ctx.cr6.gt) goto loc_8992EC1C;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,-9516(r9)
	REX_STORE_U32(ctx.r9.u32 + -9516, ctx.r11.u32);
loc_8992EC1C:
	// bl 0x89963788
	ctx.lr = 0x8992EC20;
	sub_89963788(ctx, base);
	// lwzx r7,r30,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 18, ctx.xer);
	// bge cr6,0x8992ed2c
	if (!ctx.cr6.lt) goto loc_8992ED2C;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r11,12268(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12268);
	// lhz r8,-9492(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -9492);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8992ec94
	if (!ctx.cr6.lt) goto loc_8992EC94;
loc_8992EC4C:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8992ec80
	if (ctx.cr6.eq) goto loc_8992EC80;
	// mulli r10,r11,112
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lwzx r6,r10,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8992ec80
	if (ctx.cr6.eq) goto loc_8992EC80;
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
	// lwzx r5,r10,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x8992ec80
	if (!ctx.cr6.eq) goto loc_8992EC80;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
loc_8992EC80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8992ec4c
	if (ctx.cr6.lt) goto loc_8992EC4C;
loc_8992EC94:
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lbz r6,535(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 535);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// subfc r5,r11,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r11.u32;
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// and r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8992ed2c
	if (ctx.cr6.eq) goto loc_8992ED2C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,535(r10)
	REX_STORE_U8(ctx.r10.u32 + 535, ctx.r11.u8);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x8992ed2c
	if (!ctx.cr6.eq) goto loc_8992ED2C;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r10,7008
	ctx.r29.s64 = ctx.r10.s64 + 7008;
	// addi r31,r11,25128
	ctx.r31.s64 = ctx.r11.s64 + 25128;
loc_8992ECEC:
	// mulli r11,r30,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(696));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992ed18
	if (ctx.cr6.eq) goto loc_8992ED18;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r9,r29,14
	ctx.r9.s64 = ctx.r29.s64 + 14;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r7,r8,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// mulli r6,r7,30
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(30));
	// lbzx r4,r6,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// bl 0x899362a0
	ctx.lr = 0x8992ED18;
	sub_899362A0(ctx, base);
loc_8992ED18:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x8992ecec
	if (ctx.cr6.lt) goto loc_8992ECEC;
loc_8992ED2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899306A8) {
	REX_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r7,r11,12280
	ctx.r7.s64 = ctx.r11.s64 + 12280;
	// addi r6,r9,-31400
	ctx.r6.s64 = ctx.r9.s64 + -31400;
loc_899306C0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_899306C4:
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stbx r8,r10,r7
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u8);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// stwx r8,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r8.u32);
	// blt cr6,0x899306c4
	if (ctx.cr6.lt) goto loc_899306C4;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,41
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 41, ctx.xer);
	// blt cr6,0x899306c0
	if (ctx.cr6.lt) goto loc_899306C0;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// stw r11,26912(r9)
	REX_STORE_U32(ctx.r9.u32 + 26912, ctx.r11.u32);
	// stw r8,3880(r7)
	REX_STORE_U32(ctx.r7.u32 + 3880, ctx.r8.u32);
	// stw r10,12020(r6)
	REX_STORE_U32(ctx.r6.u32 + 12020, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89930B08) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r11,4938(r10)
	REX_STORE_U8(ctx.r10.u32 + 4938, ctx.r11.u8);
	// beq cr6,0x89930b38
	if (ctx.cr6.eq) goto loc_89930B38;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12327(r9)
	REX_STORE_U8(ctx.r9.u32 + 12327, ctx.r11.u8);
	// stb r10,3689(r8)
	REX_STORE_U8(ctx.r8.u32 + 3689, ctx.r10.u8);
	// blr 
	return;
loc_89930B38:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lbz r10,3689(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3689);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,3689(r11)
	REX_STORE_U8(ctx.r11.u32 + 3689, ctx.r10.u8);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x89930b6c
	if (!ctx.cr6.eq) goto loc_89930B6C;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r10,3689(r11)
	REX_STORE_U8(ctx.r11.u32 + 3689, ctx.r10.u8);
	// stb r9,32550(r8)
	REX_STORE_U8(ctx.r8.u32 + 32550, ctx.r9.u8);
	// blr 
	return;
loc_89930B6C:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lhz r10,-2544(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + -2544);
	// lbz r4,-25513(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -25513);
	// clrlwi r3,r10,22
	ctx.r3.u64 = ctx.r10.u32 & 0x3FF;
	// b 0x899da7a0
	sub_899DA7A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89930D90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x89930D98;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lbz r11,32015(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 32015);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993107c
	if (ctx.cr6.eq) goto loc_8993107C;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lbz r11,12327(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 12327);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89930edc
	if (ctx.cr6.lt) goto loc_89930EDC;
	// beq cr6,0x89930eac
	if (ctx.cr6.eq) goto loc_89930EAC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8993107c
	if (!ctx.cr6.lt) goto loc_8993107C;
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// lhz r5,-2544(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + -2544);
	// cmplwi cr6,r5,4096
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4096, ctx.xer);
	// bne cr6,0x89930dec
	if (!ctx.cr6.eq) goto loc_89930DEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,12327(r4)
	REX_STORE_U8(ctx.r4.u32 + 12327, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89930DEC:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,12264
	ctx.r6.s64 = ctx.r10.s64 + 12264;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_89930DFC:
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,4096
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4096, ctx.xer);
	// beq cr6,0x89930e20
	if (ctx.cr6.eq) goto loc_89930E20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x89930dfc
	if (ctx.cr6.lt) goto loc_89930DFC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89930E20:
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r30,-30276
	ctx.r30.s64 = -1984167936;
	// addi r29,r8,26904
	ctx.r29.s64 = ctx.r8.s64 + 26904;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lbz r7,3531(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 3531);
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// lhz r8,32016(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 32016);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lwz r10,26528(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 26528);
	// lis r26,-30253
	ctx.r26.s64 = -1982660608;
	// stbx r7,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r7.u8);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,12796(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 12796);
	// addi r11,r28,8528
	ctx.r11.s64 = ctx.r28.s64 + 8528;
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// sthx r5,r30,r6
	REX_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u16);
	// addi r29,r27,7080
	ctx.r29.s64 = ctx.r27.s64 + 7080;
	// addi r28,r26,4144
	ctx.r28.s64 = ctx.r26.s64 + 4144;
	// addi r31,r31,5728
	ctx.r31.s64 = ctx.r31.s64 + 5728;
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// sthx r9,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// ori r9,r6,255
	ctx.r9.u64 = ctx.r6.u64 | 255;
	// sthx r8,r30,r29
	REX_STORE_U16(ctx.r30.u32 + ctx.r29.u32, ctx.r8.u16);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stwx r5,r7,r28
	REX_STORE_U32(ctx.r7.u32 + ctx.r28.u32, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r9,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// sth r10,-2544(r3)
	REX_STORE_U16(ctx.r3.u32 + -2544, ctx.r10.u16);
	// stb r11,12327(r4)
	REX_STORE_U8(ctx.r4.u32 + 12327, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89930EAC:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lbz r11,4938(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 4938);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stb r11,4938(r10)
	REX_STORE_U8(ctx.r10.u32 + 4938, ctx.r11.u8);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8993107c
	if (!ctx.cr6.eq) goto loc_8993107C;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,32550(r10)
	REX_STORE_U8(ctx.r10.u32 + 32550, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89930EDC:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r11,11747(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11747);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89930ef8
	if (ctx.cr6.eq) goto loc_89930EF8;
	// bl 0x89930b88
	ctx.lr = 0x89930EF0;
	sub_89930B88(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89930EF8:
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lis r8,-30251
	ctx.r8.s64 = -1982529536;
	// addi r30,r11,32032
	ctx.r30.s64 = ctx.r11.s64 + 32032;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lwz r11,19180(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 19180);
	// addi r25,r10,11752
	ctx.r25.s64 = ctx.r10.s64 + 11752;
	// lhz r27,0(r30)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// addi r24,r9,-9208
	ctx.r24.s64 = ctx.r9.s64 + -9208;
	// neg r6,r11
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,4096
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4096, ctx.xer);
	// stb r6,6047(r7)
	REX_STORE_U8(ctx.r7.u32 + 6047, ctx.r6.u8);
	// ble cr6,0x89930f7c
	if (!ctx.cr6.gt) goto loc_89930F7C;
loc_89930F34:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// addi r4,r25,2
	ctx.r4.s64 = ctx.r25.s64 + 2;
	// bl 0x899dc238
	ctx.lr = 0x89930F44;
	sub_899DC238(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// addi r4,r24,2
	ctx.r4.s64 = ctx.r24.s64 + 2;
	// bl 0x899dc238
	ctx.lr = 0x89930F54;
	sub_899DC238(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// bl 0x899dc238
	ctx.lr = 0x89930F64;
	sub_899DC238(ctx, base);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// sth r11,510(r30)
	REX_STORE_U16(ctx.r30.u32 + 510, ctx.r11.u16);
	// lhz r27,0(r30)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,4096
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4096, ctx.xer);
	// bgt cr6,0x89930f34
	if (ctx.cr6.gt) goto loc_89930F34;
loc_89930F7C:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r31,r11,-31952
	ctx.r31.s64 = ctx.r11.s64 + -31952;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r29,r10,7128
	ctx.r29.s64 = ctx.r10.s64 + 7128;
	// addi r28,r11,-10056
	ctx.r28.s64 = ctx.r11.s64 + -10056;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// ble cr6,0x89930ff0
	if (!ctx.cr6.gt) goto loc_89930FF0;
loc_89930FA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// bl 0x899dc238
	ctx.lr = 0x89930FB4;
	sub_899DC238(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// addi r4,r28,2
	ctx.r4.s64 = ctx.r28.s64 + 2;
	// bl 0x899dc238
	ctx.lr = 0x89930FC4;
	sub_899DC238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// addi r4,r31,2
	ctx.r4.s64 = ctx.r31.s64 + 2;
	// bl 0x899dc238
	ctx.lr = 0x89930FD4;
	sub_899DC238(ctx, base);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// sth r11,510(r31)
	REX_STORE_U16(ctx.r31.u32 + 510, ctx.r11.u16);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bgt cr6,0x89930fa4
	if (ctx.cr6.gt) goto loc_89930FA4;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
loc_89930FF0:
	// beq cr6,0x89931038
	if (ctx.cr6.eq) goto loc_89931038;
	// lhz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r6,-30276
	ctx.r6.s64 = -1984167936;
	// sth r11,-2544(r8)
	REX_STORE_U16(ctx.r8.u32 + -2544, ctx.r11.u16);
	// sth r10,12796(r7)
	REX_STORE_U16(ctx.r7.u32 + 12796, ctx.r10.u16);
	// sth r9,32016(r6)
	REX_STORE_U16(ctx.r6.u32 + 32016, ctx.r9.u16);
	// bl 0x89930cc8
	ctx.lr = 0x89931018;
	sub_89930CC8(ctx, base);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8993107c
	if (!ctx.cr6.eq) goto loc_8993107C;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89931038:
	// cmplwi cr6,r26,4096
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4096, ctx.xer);
	// beq cr6,0x8993107c
	if (ctx.cr6.eq) goto loc_8993107C;
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lhz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r7,-30276
	ctx.r7.s64 = -1984167936;
	// sth r27,-2544(r9)
	REX_STORE_U16(ctx.r9.u32 + -2544, ctx.r27.u16);
	// sth r11,12796(r8)
	REX_STORE_U16(ctx.r8.u32 + 12796, ctx.r11.u16);
	// sth r10,32016(r7)
	REX_STORE_U16(ctx.r7.u32 + 32016, ctx.r10.u16);
	// bl 0x89930cc8
	ctx.lr = 0x89931064;
	sub_89930CC8(ctx, base);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8993107c
	if (!ctx.cr6.eq) goto loc_8993107C;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
loc_8993107C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89932BA0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r9,132(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 132);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mulli r7,r9,696
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// lwzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r5,r6,0,5,5
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x89932be0
	if (ctx.cr6.eq) goto loc_89932BE0;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// sth r11,132(r3)
	REX_STORE_U16(ctx.r3.u32 + 132, ctx.r11.u16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// sth r11,3500(r10)
	REX_STORE_U16(ctx.r10.u32 + 3500, ctx.r11.u16);
	// blr 
	return;
loc_89932BE0:
	// subfic r11,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r9.u64;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mulli r7,r3,696
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(696));
	// lwzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r5,r6,0,5,5
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4000000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x89932c10
	if (ctx.cr6.eq) goto loc_89932C10;
	// sth r3,3500(r11)
	REX_STORE_U16(ctx.r11.u32 + 3500, ctx.r3.u16);
	// sth r3,132(r8)
	REX_STORE_U16(ctx.r8.u32 + 132, ctx.r3.u16);
	// blr 
	return;
loc_89932C10:
	// lhz r3,3500(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 3500);
	// sth r3,132(r8)
	REX_STORE_U16(ctx.r8.u32 + 132, ctx.r3.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89932D30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89932D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x89932b18
	ctx.lr = 0x89932D48;
	sub_89932B18(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// mulli r8,r10,696
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// addi r30,r9,12800
	ctx.r30.s64 = ctx.r9.s64 + 12800;
	// extsh r6,r31
	ctx.r6.s64 = ctx.r31.s16;
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// mulli r31,r6,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lwzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r6,r8,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// addi r3,r30,186
	ctx.r3.s64 = ctx.r30.s64 + 186;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addis r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 524288;
	// stbx r10,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u8);
	// lwzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x89932c20
	ctx.lr = 0x89932D98;
	sub_89932C20(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// lhzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// subf r5,r6,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r6.u64;
	// clrlwi r10,r5,23
	ctx.r10.u64 = ctx.r5.u32 & 0x1FF;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x89932de0
	if (ctx.cr6.eq) goto loc_89932DE0;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// ble cr6,0x89932dcc
	if (!ctx.cr6.gt) goto loc_89932DCC;
	// subfic r10,r8,512
	ctx.xer.ca = ctx.r8.u32 <= 512;
	ctx.r10.u64 = static_cast<uint64_t>(512) - ctx.r8.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_89932DCC:
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x89932dec
	if (!ctx.cr6.lt) goto loc_89932DEC;
	// sthx r6,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u16);
loc_89932DE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89932DEC:
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bgt cr6,0x89932dfc
	if (ctx.cr6.gt) goto loc_89932DFC;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
loc_89932DFC:
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899339A0) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899339A8;
	__savegprlr_27(ctx, base);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,13480
	ctx.r11.s64 = ctx.r11.s64 + 13480;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r28,r10,r9
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lhz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89933a7c
	if (ctx.cr6.eq) goto loc_89933A7C;
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
loc_899339F4:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x89933a58
	if (ctx.cr6.gt) goto loc_89933A58;
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
loc_89933A14:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x89933a4c
	if (ctx.cr6.gt) goto loc_89933A4C;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
loc_89933A28:
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
	// beq cr6,0x89933a84
	if (ctx.cr6.eq) goto loc_89933A84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x89933a28
	if (!ctx.cr6.gt) goto loc_89933A28;
loc_89933A4C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x89933a14
	if (!ctx.cr6.gt) goto loc_89933A14;
loc_89933A58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_89933A5C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89933a8c
	if (ctx.cr6.eq) goto loc_89933A8C;
	// lhz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899339f4
	if (!ctx.cr6.eq) goto loc_899339F4;
loc_89933A7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89933A84:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x89933a5c
	goto loc_89933A5C;
loc_89933A8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899343E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x899343F0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// li r21,1
	ctx.r21.s64 = 1;
	// lwzx r22,r9,r8
	ctx.r22.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lhz r30,0(r22)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8993452c
	if (ctx.cr6.eq) goto loc_8993452C;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r23,-32768
	ctx.r23.s64 = -32768;
	// addi r26,r8,32560
	ctx.r26.s64 = ctx.r8.s64 + 32560;
	// addi r25,r7,11752
	ctx.r25.s64 = ctx.r7.s64 + 11752;
	// addi r24,r9,-9208
	ctx.r24.s64 = ctx.r9.s64 + -9208;
	// addi r27,r10,32032
	ctx.r27.s64 = ctx.r10.s64 + 32032;
	// addi r29,r11,-4592
	ctx.r29.s64 = ctx.r11.s64 + -4592;
loc_89934448:
	// clrlwi r31,r30,18
	ctx.r31.u64 = ctx.r30.u32 & 0x3FFF;
	// extsh r28,r30
	ctx.r28.s64 = ctx.r30.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899334b8
	ctx.lr = 0x89934458;
	sub_899334B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89934504
	if (!ctx.cr6.eq) goto loc_89934504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89933520
	ctx.lr = 0x89934468;
	sub_89933520(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89934504
	if (!ctx.cr6.eq) goto loc_89934504;
	// bl 0x89933428
	ctx.lr = 0x89934478;
	sub_89933428(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89934508
	if (ctx.cr6.eq) goto loc_89934508;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_89934490:
	// lhzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// clrlwi r8,r9,18
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFF;
	// cmplwi cr6,r8,4096
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4096, ctx.xer);
	// beq cr6,0x899344bc
	if (ctx.cr6.eq) goto loc_899344BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x89934490
	if (ctx.cr6.lt) goto loc_89934490;
	// li r10,256
	ctx.r10.s64 = 256;
loc_899344BC:
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// blt cr6,0x899344d0
	if (ctx.cr6.lt) goto loc_899344D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x89934508
	goto loc_89934508;
loc_899344D0:
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,2(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// or r6,r28,r23
	ctx.r6.u64 = ctx.r28.u64 | ctx.r23.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r11,r7,r24
	REX_STORE_U16(ctx.r7.u32 + ctx.r24.u32, ctx.r11.u16);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sthx r10,r7,r25
	REX_STORE_U16(ctx.r7.u32 + ctx.r25.u32, ctx.r10.u16);
	// sthx r30,r7,r27
	REX_STORE_U16(ctx.r7.u32 + ctx.r27.u32, ctx.r30.u16);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r10,r26
	REX_STORE_U16(ctx.r10.u32 + ctx.r26.u32, ctx.r6.u16);
loc_89934504:
	// li r11,1
	ctx.r11.s64 = 1;
loc_89934508:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8993451c
	if (!ctx.cr6.eq) goto loc_8993451C;
	// li r21,0
	ctx.r21.s64 = 0;
loc_8993451C:
	// lhz r30,0(r22)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89934448
	if (!ctx.cr6.eq) goto loc_89934448;
loc_8993452C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89935610) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x89935624
	if (!ctx.cr6.eq) goto loc_89935624;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// addi r6,r11,3484
	ctx.r6.s64 = ctx.r11.s64 + 3484;
loc_89935624:
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x89935674
	if (!ctx.cr6.gt) goto loc_89935674;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rlwinm r10,r11,16,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xC0000000;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_89935648:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// addi r5,r5,18
	ctx.r5.s64 = ctx.r5.s64 + 18;
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
	// blt cr6,0x89935648
	if (ctx.cr6.lt) goto loc_89935648;
loc_89935674:
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// stw r31,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r31.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89935A00) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89935A08;
	__savegprlr_29(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r10,r3,0,4,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC000000;
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r8,r11,255
	ctx.r8.s64 = ctx.r11.s64 + 255;
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x89935a88
	if (!ctx.cr6.gt) goto loc_89935A88;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-30224
	ctx.r10.s64 = -1980760064;
	// lis r9,-30305
	ctx.r9.s64 = -1986068480;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r8,r10,32312
	ctx.r8.s64 = ctx.r10.s64 + 32312;
	// addi r7,r9,17100
	ctx.r7.s64 = ctx.r9.s64 + 17100;
loc_89935A48:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// blt cr6,0x89935a48
	if (ctx.cr6.lt) goto loc_89935A48;
loc_89935A88:
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x89935aec
	if (!ctx.cr6.gt) goto loc_89935AEC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_89935A98:
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// xoris r3,r6,32768
	ctx.r3.u64 = ctx.r6.u64 ^ 2147483648;
	// stw r3,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// blt cr6,0x89935a98
	if (ctx.cr6.lt) goto loc_89935A98;
loc_89935AEC:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89936508) {
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
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,-31405(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -31405);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899365bc
	if (ctx.cr6.eq) goto loc_899365BC;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r10,r10,5100
	ctx.r10.s64 = ctx.r10.s64 + 5100;
	// lbz r11,9527(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9527);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,256
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 256, ctx.xer);
	// bge cr6,0x899365a4
	if (!ctx.cr6.lt) goto loc_899365A4;
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-21104
	ctx.r10.s64 = ctx.r10.s64 + -21104;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899365a4
	if (ctx.cr6.eq) goto loc_899365A4;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bgt 0x8993659c
	if (ctx.cr0.gt) goto loc_8993659C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x89936360
	ctx.lr = 0x89936588;
	sub_89936360(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8993659C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899365bc
	if (!ctx.cr6.eq) goto loc_899365BC;
loc_899365A4:
	// bl 0x89936360
	ctx.lr = 0x899365A8;
	sub_89936360(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899365BC:
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
}

DEFINE_REX_FUNC(sub_89937090) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
	// mulli r11,r9,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// addi r8,r10,655
	ctx.r8.s64 = ctx.r10.s64 + 655;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899370d4
	if (ctx.cr6.eq) goto loc_899370D4;
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// addi r5,r7,18952
	ctx.r5.s64 = ctx.r7.s64 + 18952;
	// rlwinm r4,r6,1,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x4;
	// stbx r6,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u8);
	// addi r3,r10,676
	ctx.r3.s64 = ctx.r10.s64 + 676;
	// lwzx r9,r4,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
loc_899370D4:
	// addi r9,r10,657
	ctx.r9.s64 = ctx.r10.s64 + 657;
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89937B48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x89937B50;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r26,-30251
	ctx.r26.s64 = -1982529536;
	// addi r24,r11,25128
	ctx.r24.s64 = ctx.r11.s64 + 25128;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// sth r6,12760(r26)
	REX_STORE_U16(ctx.r26.u32 + 12760, ctx.r6.u16);
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r24,24
	ctx.r30.s64 = ctx.r24.s64 + 24;
	// addi r31,r24,600
	ctx.r31.s64 = ctx.r24.s64 + 600;
	// lis r18,-30275
	ctx.r18.s64 = -1984102400;
	// lis r17,-30274
	ctx.r17.s64 = -1984036864;
	// lis r19,-30275
	ctx.r19.s64 = -1984102400;
	// lis r25,-30253
	ctx.r25.s64 = -1982660608;
	// addi r23,r11,5096
	ctx.r23.s64 = ctx.r11.s64 + 5096;
	// addi r22,r10,-26152
	ctx.r22.s64 = ctx.r10.s64 + -26152;
	// addi r21,r9,-10736
	ctx.r21.s64 = ctx.r9.s64 + -10736;
	// addi r20,r8,7008
	ctx.r20.s64 = ctx.r8.s64 + 7008;
	// addi r27,r7,-3544
	ctx.r27.s64 = ctx.r7.s64 + -3544;
loc_89937BAC:
	// lwz r11,-24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89937cd8
	if (ctx.cr6.eq) goto loc_89937CD8;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// lwz r10,-16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -16);
	// addi r9,r27,12
	ctx.r9.s64 = ctx.r27.s64 + 12;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r10,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// sth r8,12760(r26)
	REX_STORE_U16(ctx.r26.u32 + 12760, ctx.r8.u16);
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x89937BE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,-8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,640(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 640);
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,568(r30)
	REX_STORE_U32(ctx.r30.u32 + 568, ctx.r7.u32);
	// lwz r11,644(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 644);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// stw r6,584(r30)
	REX_STORE_U32(ctx.r30.u32 + 584, ctx.r6.u32);
	// blt cr6,0x89937ccc
	if (ctx.cr6.lt) goto loc_89937CCC;
	// lwz r9,-9524(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + -9524);
	// lbz r10,611(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 611);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// stw r11,644(r30)
	REX_STORE_U32(ctx.r30.u32 + 644, ctx.r11.u32);
	// bge cr6,0x89937ccc
	if (!ctx.cr6.lt) goto loc_89937CCC;
	// lwz r9,-16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + -16);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r8,-20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -20);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// lbz r9,-31405(r19)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r19.u32 + -31405);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mulli r4,r7,30
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(30));
	// stb r5,611(r30)
	REX_STORE_U8(ctx.r30.u32 + 611, ctx.r5.u8);
	// lbzx r11,r4,r20
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r20.u32);
	// oris r10,r8,32768
	ctx.r10.u64 = ctx.r8.u64 | 2147483648;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,-20(r30)
	REX_STORE_U32(ctx.r30.u32 + -20, ctx.r10.u32);
	// beq cr6,0x89937ccc
	if (ctx.cr6.eq) goto loc_89937CCC;
	// lbz r9,586(r17)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r17.u32 + 586);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89937c98
	if (ctx.cr6.eq) goto loc_89937C98;
	// lbz r9,7934(r18)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r18.u32 + 7934);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89937ccc
	if (ctx.cr6.eq) goto loc_89937CCC;
loc_89937C98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89937cb4
	if (!ctx.cr6.eq) goto loc_89937CB4;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// lbzx r3,r11,r23
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// bl 0x899d9448
	ctx.lr = 0x89937CB0;
	sub_899D9448(ctx, base);
	// b 0x89937ccc
	goto loc_89937CCC;
loc_89937CB4:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bge cr6,0x89937ccc
	if (!ctx.cr6.lt) goto loc_89937CCC;
	// lbzx r10,r10,r23
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// stbx r29,r11,r22
	REX_STORE_U8(ctx.r11.u32 + ctx.r22.u32, ctx.r29.u8);
	// stbx r10,r11,r21
	REX_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u8);
loc_89937CCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89937a50
	ctx.lr = 0x89937CD4;
	sub_89937A50(ctx, base);
	// lhz r6,12760(r26)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r26.u32 + 12760);
loc_89937CD8:
	// addi r31,r31,696
	ctx.r31.s64 = ctx.r31.s64 + 696;
	// addi r11,r24,1992
	ctx.r11.s64 = ctx.r24.s64 + 1992;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,696
	ctx.r30.s64 = ctx.r30.s64 + 696;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89937bac
	if (ctx.cr6.lt) goto loc_89937BAC;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lbz r10,32018(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32018);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x89937df4
	if (!ctx.cr6.eq) goto loc_89937DF4;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// lwz r10,696(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 696);
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r8,664(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 664);
	// lwz r7,1360(r24)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 1360);
	// subfe r5,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r4,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwz r11,12152(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12152);
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// subfe r3,r4,r10
	temp.u8 = (~ctx.r4.u32 + ctx.r10.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89937df4
	if (ctx.cr6.lt) goto loc_89937DF4;
	// addis r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 983040;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r11,r11,16960
	ctx.r11.s64 = ctx.r11.s64 + 16960;
	// stw r11,12152(r9)
	REX_STORE_U32(ctx.r9.u32 + 12152, ctx.r11.u32);
	// lwz r11,20404(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89937df4
	if (ctx.cr6.eq) goto loc_89937DF4;
	// addi r11,r11,3600
	ctx.r11.s64 = ctx.r11.s64 + 3600;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,20404(r10)
	REX_STORE_U32(ctx.r10.u32 + 20404, ctx.r11.u32);
	// addi r31,r24,8
	ctx.r31.s64 = ctx.r24.s64 + 8;
loc_89937D68:
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89937de0
	if (ctx.cr6.eq) goto loc_89937DE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// extsh r9,r30
	ctx.r9.s64 = ctx.r30.s16;
	// lbz r7,-31405(r19)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r19.u32 + -31405);
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// mulli r6,r8,30
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(30));
	// lbzx r11,r6,r20
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r20.u32);
	// beq cr6,0x89937de0
	if (ctx.cr6.eq) goto loc_89937DE0;
	// lbz r8,586(r17)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r17.u32 + 586);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89937dac
	if (ctx.cr6.eq) goto loc_89937DAC;
	// lbz r8,7934(r18)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r18.u32 + 7934);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89937de0
	if (ctx.cr6.eq) goto loc_89937DE0;
loc_89937DAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89937dc8
	if (!ctx.cr6.eq) goto loc_89937DC8;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lbzx r3,r11,r23
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// bl 0x899d9448
	ctx.lr = 0x89937DC4;
	sub_899D9448(ctx, base);
	// b 0x89937de0
	goto loc_89937DE0;
loc_89937DC8:
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bge cr6,0x89937de0
	if (!ctx.cr6.lt) goto loc_89937DE0;
	// lbzx r10,r10,r23
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// stbx r9,r11,r22
	REX_STORE_U8(ctx.r11.u32 + ctx.r22.u32, ctx.r9.u8);
	// stbx r10,r11,r21
	REX_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u8);
loc_89937DE0:
	// addi r31,r31,696
	ctx.r31.s64 = ctx.r31.s64 + 696;
	// addi r11,r24,1400
	ctx.r11.s64 = ctx.r24.s64 + 1400;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89937d68
	if (ctx.cr6.lt) goto loc_89937D68;
loc_89937DF4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993C1F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8993C1F8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r18,r11,-25880
	ctx.r18.s64 = ctx.r11.s64 + -25880;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r8,r8,-21368
	ctx.r8.s64 = ctx.r8.s64 + -21368;
	// addi r7,r10,12028
	ctx.r7.s64 = ctx.r10.s64 + 12028;
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r26,160
	ctx.r26.s64 = 10485760;
	// lis r17,120
	ctx.r17.s64 = 7864320;
	// lis r20,-30242
	ctx.r20.s64 = -1981939712;
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// lis r15,-30251
	ctx.r15.s64 = -1982529536;
	// lis r14,-30274
	ctx.r14.s64 = -1984036864;
	// addi r27,r9,-17112
	ctx.r27.s64 = ctx.r9.s64 + -17112;
	// addi r28,r11,-2936
	ctx.r28.s64 = ctx.r11.s64 + -2936;
loc_8993C258:
	// lhz r11,536(r14)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r14.u32 + 536);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// mulli r11,r11,132
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(132));
	// add r29,r11,r18
	ctx.r29.u64 = ctx.r11.u64 + ctx.r18.u64;
loc_8993C270:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993c2a0
	if (ctx.cr6.eq) goto loc_8993C2A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r28,12
	ctx.r10.s64 = ctx.r28.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// extsh r3,r16
	ctx.r3.s64 = ctx.r16.s16;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8993C29C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8993C2A0:
	// addi r31,r31,132
	ctx.r31.s64 = ctx.r31.s64 + 132;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8993c270
	if (!ctx.cr6.eq) goto loc_8993C270;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lhz r8,19184(r15)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r15.u32 + 19184);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// sthx r10,r21,r9
	REX_STORE_U16(ctx.r21.u32 + ctx.r9.u32, ctx.r10.u16);
	// beq cr6,0x8993c398
	if (ctx.cr6.eq) goto loc_8993C398;
loc_8993C2CC:
	// add r11,r25,r30
	ctx.r11.u64 = ctx.r25.u64 + ctx.r30.u64;
	// lhz r9,12600(r23)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r23.u32 + 12600);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r11,r11,1056
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1056));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mulli r11,r10,132
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(132));
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_8993C2EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993c37c
	if (ctx.cr6.eq) goto loc_8993C37C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r28,12
	ctx.r10.s64 = ctx.r28.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8993C314;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// subf. r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bge 0x8993c340
	if (!ctx.cr0.lt) goto loc_8993C340;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8993C340:
	// lis r9,176
	ctx.r9.s64 = 11534336;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8993c374
	if (ctx.cr6.gt) goto loc_8993C374;
	// lwz r11,-21584(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + -21584);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf. r11,r17,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r17.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8993c360
	if (!ctx.cr0.lt) goto loc_8993C360;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8993C360:
	// lis r10,136
	ctx.r10.s64 = 8912896;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8993c374
	if (ctx.cr6.gt) goto loc_8993C374;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x8993c37c
	goto loc_8993C37C;
loc_8993C374:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8993C37C:
	// addi r31,r31,132
	ctx.r31.s64 = ctx.r31.s64 + 132;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8993c2ec
	if (!ctx.cr6.eq) goto loc_8993C2EC;
	// lhz r11,19184(r15)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r15.u32 + 19184);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8993c2cc
	if (ctx.cr6.lt) goto loc_8993C2CC;
loc_8993C398:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addis r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 65536;
	// clrlwi r9,r24,16
	ctx.r9.u64 = ctx.r24.u32 & 0xFFFF;
	// addi r22,r22,16896
	ctx.r22.s64 = ctx.r22.s64 + 16896;
	// addi r8,r11,-31744
	ctx.r8.s64 = ctx.r11.s64 + -31744;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// sthx r9,r21,r10
	REX_STORE_U16(ctx.r21.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r19,r19,128
	ctx.r19.s64 = ctx.r19.s64 + 128;
	// addi r25,r25,3
	ctx.r25.s64 = ctx.r25.s64 + 3;
	// addi r21,r21,2
	ctx.r21.s64 = ctx.r21.s64 + 2;
	// cmpw cr6,r22,r8
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8993c258
	if (ctx.cr6.lt) goto loc_8993C258;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993D778) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x8993D780;
	__savegprlr_24(ctx, base);
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r7,-30269
	ctx.r7.s64 = -1983709184;
	// lis r31,32
	ctx.r31.s64 = 2097152;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lhz r10,3720(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 3720);
	// lwz r9,20424(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20424);
	// lwz r3,-10764(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + -10764);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r30,r9,r31
	ctx.r30.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addis r29,r3,30
	ctx.r29.s64 = ctx.r3.s64 + 1966080;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8993d808
	if (ctx.cr6.lt) goto loc_8993D808;
	// lwz r5,3724(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 3724);
	// bne cr6,0x8993d840
	if (!ctx.cr6.eq) goto loc_8993D840;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8993d7d0
	if (!ctx.cr6.lt) goto loc_8993D7D0;
	// addis r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 65536;
	// addi r5,r5,-32768
	ctx.r5.s64 = ctx.r5.s64 + -32768;
	// stw r5,3724(r11)
	REX_STORE_U32(ctx.r11.u32 + 3724, ctx.r5.u32);
loc_8993D7D0:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lbz r9,6035(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 6035);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8993d840
	if (!ctx.cr6.eq) goto loc_8993D840;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbz r9,9535(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 9535);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8993d840
	if (!ctx.cr6.eq) goto loc_8993D840;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbz r9,12266(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 12266);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8993d840
	if (!ctx.cr6.eq) goto loc_8993D840;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8993d83c
	goto loc_8993D83C;
loc_8993D808:
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lbz r6,9539(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 9539);
	// lbz r5,32019(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 32019);
	// lbz r4,6054(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 6054);
	// or r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8993d9ec
	if (!ctx.cr6.eq) goto loc_8993D9EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,3724(r11)
	REX_STORE_U32(ctx.r11.u32 + 3724, ctx.r5.u32);
loc_8993D83C:
	// sth r10,3720(r8)
	REX_STORE_U16(ctx.r8.u32 + 3720, ctx.r10.u16);
loc_8993D840:
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// lhz r11,3724(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 3724);
	// lis r27,-30214
	ctx.r27.s64 = -1980104704;
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lhz r8,-21584(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -21584);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lhz r11,3716(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 3716);
	// li r26,40
	ctx.r26.s64 = 40;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,9520(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 9520);
	// lwz r4,7120(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 7120);
	// subfic r9,r7,392
	ctx.xer.ca = ctx.r7.u32 <= 392;
	ctx.r9.u64 = static_cast<uint64_t>(392) - ctx.r7.u64;
	// lwz r7,8152(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8152);
	// lis r10,319
	ctx.r10.s64 = 20905984;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mullw r6,r9,r6
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// stw r29,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r29.u32);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lis r29,128
	ctx.r29.s64 = 8388608;
	// ori r9,r10,239
	ctx.r9.u64 = ctx.r10.u64 | 239;
	// ori r10,r29,32896
	ctx.r10.u64 = ctx.r29.u64 | 32896;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// rlwinm r25,r4,16,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// sth r8,3716(r27)
	REX_STORE_U16(ctx.r27.u32 + 3716, ctx.r8.u16);
	// lis r24,-16384
	ctx.r24.s64 = -1073741824;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// divw r26,r6,r26
	ctx.r26.u64 = uint32_t((ctx.r26.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r26.s32 == -1)) ? ctx.r6.s32 / ctx.r26.s32 : 0);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// or r9,r25,r7
	ctx.r9.u64 = ctx.r25.u64 | ctx.r7.u64;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// ori r27,r24,1
	ctx.r27.u64 = ctx.r24.u64 | 1;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lis r29,-30320
	ctx.r29.s64 = -1987051520;
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// srawi r5,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 4;
	// stw r27,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r27.u32);
	// extsh r3,r26
	ctx.r3.s64 = ctx.r26.s16;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r29,9016
	ctx.r29.s64 = ctx.r29.s64 + 9016;
loc_8993D908:
	// add r27,r9,r8
	ctx.r27.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r25,r9,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,5,22,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0x3E0;
	// addi r26,r9,1
	ctx.r26.s64 = ctx.r9.s64 + 1;
	// addi r24,r1,-144
	ctx.r24.s64 = ctx.r1.s64 + -144;
	// extsh r9,r26
	ctx.r9.s64 = ctx.r26.s16;
	// lhzx r27,r27,r29
	ctx.r27.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r29.u32);
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// mullw r27,r27,r5
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r5.s32);
	// srawi r27,r27,24
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFFFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 24;
	// subf r27,r3,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r3.u64;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// sthx r27,r25,r24
	REX_STORE_U16(ctx.r25.u32 + ctx.r24.u32, ctx.r27.u16);
	// blt cr6,0x8993d908
	if (ctx.cr6.lt) goto loc_8993D908;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,239
	ctx.r8.u64 = ctx.r8.u64 | 239;
loc_8993D950:
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rlwinm r3,r9,1,26,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3E;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r29,r1,-144
	ctx.r29.s64 = ctx.r1.s64 + -144;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// rlwinm r27,r5,1,26,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3E;
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// addi r26,r1,-144
	ctx.r26.s64 = ctx.r1.s64 + -144;
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// addi r25,r9,4
	ctx.r25.s64 = ctx.r9.s64 + 4;
	// lhzx r3,r3,r29
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r29.u32);
	// addi r29,r5,2
	ctx.r29.s64 = ctx.r5.s64 + 2;
	// rlwinm r24,r5,16,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r5,r27,r26
	ctx.r5.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r26.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r29,r29,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// add r26,r9,r30
	ctx.r26.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// or r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 | ctx.r24.u64;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// or r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 | ctx.r29.u64;
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// extsh r27,r25
	ctx.r27.s64 = ctx.r25.s16;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,320
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 320, ctx.xer);
	// blt cr6,0x8993d950
	if (ctx.cr6.lt) goto loc_8993D950;
	// lis r10,-4096
	ctx.r10.s64 = -268435456;
	// stw r11,9520(r28)
	REX_STORE_U32(ctx.r28.u32 + 9520, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8993D9EC:
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899414E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899414F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r29,r11,25128
	ctx.r29.s64 = ctx.r11.s64 + 25128;
	// lwz r11,25128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 25128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89941518
	if (ctx.cr6.eq) goto loc_89941518;
	// lwz r11,696(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8994151c
	if (!ctx.cr6.eq) goto loc_8994151C;
loc_89941518:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8994151C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89941534
	if (ctx.cr6.lt) goto loc_89941534;
	// bne cr6,0x8994156c
	if (!ctx.cr6.eq) goto loc_8994156C;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x899412b8
	ctx.lr = 0x89941530;
	sub_899412B8(ctx, base);
	// b 0x8994156c
	goto loc_8994156C;
loc_89941534:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// addi r30,r11,19664
	ctx.r30.s64 = ctx.r11.s64 + 19664;
loc_89941540:
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8994155c
	if (ctx.cr6.eq) goto loc_8994155C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lbzx r3,r10,r30
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x899412b8
	ctx.lr = 0x8994155C;
	sub_899412B8(ctx, base);
loc_8994155C:
	// addi r31,r31,696
	ctx.r31.s64 = ctx.r31.s64 + 696;
	// addi r11,r29,1400
	ctx.r11.s64 = ctx.r29.s64 + 1400;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89941540
	if (ctx.cr6.lt) goto loc_89941540;
loc_8994156C:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
loc_89941574:
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89941608
	if (ctx.cr6.eq) goto loc_89941608;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899415a8
	if (!ctx.cr6.eq) goto loc_899415A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8994c298
	ctx.lr = 0x89941598;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89941608
	if (ctx.cr6.eq) goto loc_89941608;
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x89941604
	goto loc_89941604;
loc_899415A8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x899415c8
	if (!ctx.cr6.eq) goto loc_899415C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8994c298
	ctx.lr = 0x899415B8;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89941608
	if (ctx.cr6.eq) goto loc_89941608;
	// li r3,34
	ctx.r3.s64 = 34;
	// b 0x89941604
	goto loc_89941604;
loc_899415C8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x899415e8
	if (!ctx.cr6.eq) goto loc_899415E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8994c298
	ctx.lr = 0x899415D8;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89941608
	if (ctx.cr6.eq) goto loc_89941608;
	// li r3,35
	ctx.r3.s64 = 35;
	// b 0x89941604
	goto loc_89941604;
loc_899415E8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x89941608
	if (!ctx.cr6.eq) goto loc_89941608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8994c298
	ctx.lr = 0x899415F8;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89941608
	if (ctx.cr6.eq) goto loc_89941608;
	// li r3,36
	ctx.r3.s64 = 36;
loc_89941604:
	// bl 0x8994c368
	ctx.lr = 0x89941608;
	sub_8994C368(ctx, base);
loc_89941608:
	// addi r31,r31,696
	ctx.r31.s64 = ctx.r31.s64 + 696;
	// addi r11,r29,1400
	ctx.r11.s64 = ctx.r29.s64 + 1400;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89941574
	if (ctx.cr6.lt) goto loc_89941574;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899426B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// extsb r6,r4
	ctx.r6.s64 = ctx.r4.s8;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r9,12280
	ctx.r4.s64 = ctx.r9.s64 + 12280;
	// addi r5,r10,-31400
	ctx.r5.s64 = ctx.r10.s64 + -31400;
	// addi r31,r11,20360
	ctx.r31.s64 = ctx.r11.s64 + 20360;
loc_899426E4:
	// rlwinm r11,r3,3,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89942728
	if (ctx.cr6.eq) goto loc_89942728;
	// addi r9,r7,12
	ctx.r9.s64 = ctx.r7.s64 + 12;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
loc_89942718:
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89942718
	if (!ctx.cr6.eq) goto loc_89942718;
loc_89942728:
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stbx r30,r10,r4
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r30.u8);
	// bge 0x899426e4
	if (!ctx.cr0.lt) goto loc_899426E4;
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89942F18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89942F20;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// ori r21,r6,32896
	ctx.r21.u64 = ctx.r6.u64 | 32896;
	// lis r22,-32768
	ctx.r22.s64 = -2147483648;
	// addi r24,r11,-4320
	ctx.r24.s64 = ctx.r11.s64 + -4320;
	// addi r20,r10,20544
	ctx.r20.s64 = ctx.r10.s64 + 20544;
	// addi r23,r9,12280
	ctx.r23.s64 = ctx.r9.s64 + 12280;
	// addi r19,r8,-4384
	ctx.r19.s64 = ctx.r8.s64 + -4384;
	// addi r31,r7,25128
	ctx.r31.s64 = ctx.r7.s64 + 25128;
loc_89942F60:
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r24,1
	ctx.r10.s64 = ctx.r24.s64 + 1;
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r25,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(696));
	// lbzx r7,r11,r24
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r5,r8,r20
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r20.u32);
	// lbzx r4,r7,r23
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r23.u32);
	// lbzx r3,r6,r23
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r23.u32);
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// rotlwi r11,r4,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// rotlwi r10,r3,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 5);
	// stwx r3,r9,r26
	REX_STORE_U32(ctx.r9.u32 + ctx.r26.u32, ctx.r3.u32);
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// lwzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// addi r27,r31,588
	ctx.r27.s64 = ctx.r31.s64 + 588;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// stwx r28,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r28.u32);
	// addi r30,r31,676
	ctx.r30.s64 = ctx.r31.s64 + 676;
	// stwx r28,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r28.u32);
	// addi r3,r31,654
	ctx.r3.s64 = ctx.r31.s64 + 654;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r5,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r5.u32);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// stwx r11,r9,r27
	REX_STORE_U32(ctx.r9.u32 + ctx.r27.u32, ctx.r11.u32);
	// lis r7,152
	ctx.r7.s64 = 9961472;
	// stwx r8,r9,r31
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stwx r7,r9,r4
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r7.u32);
	// stwx r21,r9,r30
	REX_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r21.u32);
	// stbx r28,r9,r3
	REX_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r28.u8);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899430e4
	if (ctx.cr6.eq) goto loc_899430E4;
	// rlwinm r30,r7,0,0,1
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC0000000;
	// mulli r29,r25,174
	ctx.r29.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(174));
loc_89943008:
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// clrlwi r5,r11,4
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// add r3,r4,r29
	ctx.r3.u64 = ctx.r4.u64 + ctx.r29.u64;
	// addi r6,r31,180
	ctx.r6.s64 = ctx.r31.s64 + 180;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// addi r7,r31,44
	ctx.r7.s64 = ctx.r31.s64 + 44;
	// addi r8,r31,112
	ctx.r8.s64 = ctx.r31.s64 + 112;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// stwx r5,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u32);
	// lwzu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwx r5,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwzu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwx r5,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwzu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r5,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// beq cr6,0x89943084
	if (ctx.cr6.eq) goto loc_89943084;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x89943078
	if (ctx.cr6.eq) goto loc_89943078;
	// lis r5,16384
	ctx.r5.s64 = 1073741824;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x89943090
	if (!ctx.cr6.eq) goto loc_89943090;
	// lwzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// stwx r5,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// b 0x89943090
	goto loc_89943090;
loc_89943078:
	// lwzx r18,r11,r8
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// neg r18,r18
	ctx.r18.s64 = static_cast<int64_t>(-ctx.r18.u64);
	// stwx r18,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r18.u32);
loc_89943084:
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// stwx r5,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
loc_89943090:
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r18,r31,316
	ctx.r18.s64 = ctx.r31.s64 + 316;
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r17,r31,384
	ctx.r17.s64 = ctx.r31.s64 + 384;
	// lwzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addi r16,r31,520
	ctx.r16.s64 = ctx.r31.s64 + 520;
	// lwzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r3,r31,452
	ctx.r3.s64 = ctx.r31.s64 + 452;
	// add r14,r6,r5
	ctx.r14.u64 = ctx.r6.u64 + ctx.r5.u64;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subf r15,r8,r7
	ctx.r15.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stwx r14,r11,r18
	REX_STORE_U32(ctx.r11.u32 + ctx.r18.u32, ctx.r14.u32);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r15,r11,r17
	REX_STORE_U32(ctx.r11.u32 + ctx.r17.u32, ctx.r15.u32);
	// stwx r6,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// stwx r5,r11,r16
	REX_STORE_U32(ctx.r11.u32 + ctx.r16.u32, ctx.r5.u32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89943008
	if (!ctx.cr6.eq) goto loc_89943008;
loc_899430E4:
	// lwzx r11,r9,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// lwzx r10,r9,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// addi r6,r31,41
	ctx.r6.s64 = ctx.r31.s64 + 41;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r8,r9,r7
	REX_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u8);
	// stbx r28,r9,r6
	REX_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r28.u8);
	// lwz r30,8(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lhz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x89943128
	if (ctx.cr6.eq) goto loc_89943128;
loc_89943114:
	// bl 0x89933df8
	ctx.lr = 0x89943118;
	sub_89933DF8(ctx, base);
	// lhzu r3,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89943114
	if (!ctx.cr6.eq) goto loc_89943114;
loc_89943128:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89942f60
	if (ctx.cr6.lt) goto loc_89942F60;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89946348) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89946350;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// addi r9,r10,12740
	ctx.r9.s64 = ctx.r10.s64 + 12740;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// lhz r25,12740(r10)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 12740);
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// stb r10,198(r1)
	REX_STORE_U8(ctx.r1.u32 + 198, ctx.r10.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,199(r1)
	REX_STORE_U8(ctx.r1.u32 + 199, ctx.r10.u8);
	// lis r29,-30295
	ctx.r29.s64 = -1985413120;
	// stb r10,200(r1)
	REX_STORE_U8(ctx.r1.u32 + 200, ctx.r10.u8);
	// lis r3,-30295
	ctx.r3.s64 = -1985413120;
	// stb r10,201(r1)
	REX_STORE_U8(ctx.r1.u32 + 201, ctx.r10.u8);
	// addi r7,r7,20824
	ctx.r7.s64 = ctx.r7.s64 + 20824;
	// stb r10,202(r1)
	REX_STORE_U8(ctx.r1.u32 + 202, ctx.r10.u8);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r6,r6,20820
	ctx.r6.s64 = ctx.r6.s64 + 20820;
	// lhz r26,2(r9)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// addi r10,r10,20376
	ctx.r10.s64 = ctx.r10.s64 + 20376;
	// stw r11,-21584(r8)
	REX_STORE_U32(ctx.r8.u32 + -21584, ctx.r11.u32);
	// addi r5,r5,20864
	ctx.r5.s64 = ctx.r5.s64 + 20864;
	// stb r11,192(r1)
	REX_STORE_U8(ctx.r1.u32 + 192, ctx.r11.u8);
	// lis r24,-30295
	ctx.r24.s64 = -1985413120;
	// stb r11,193(r1)
	REX_STORE_U8(ctx.r1.u32 + 193, ctx.r11.u8);
	// lis r4,-30295
	ctx.r4.s64 = -1985413120;
	// stb r11,194(r1)
	REX_STORE_U8(ctx.r1.u32 + 194, ctx.r11.u8);
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// stb r11,195(r1)
	REX_STORE_U8(ctx.r1.u32 + 195, ctx.r11.u8);
	// lis r22,-30295
	ctx.r22.s64 = -1985413120;
	// stb r11,196(r1)
	REX_STORE_U8(ctx.r1.u32 + 196, ctx.r11.u8);
	// lis r20,-30295
	ctx.r20.s64 = -1985413120;
	// stb r11,197(r1)
	REX_STORE_U8(ctx.r1.u32 + 197, ctx.r11.u8);
	// lis r19,-30295
	ctx.r19.s64 = -1985413120;
	// sth r11,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// lis r18,-30295
	ctx.r18.s64 = -1985413120;
	// sth r11,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// addi r16,r29,20752
	ctx.r16.s64 = ctx.r29.s64 + 20752;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r15,r3,20828
	ctx.r15.s64 = ctx.r3.s64 + 20828;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r7,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r6,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// stw r5,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r17,r24,20740
	ctx.r17.s64 = ctx.r24.s64 + 20740;
	// sth r25,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r25.u16);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// stw r17,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r17.u32);
	// addi r4,r4,20728
	ctx.r4.s64 = ctx.r4.s64 + 20728;
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// addi r29,r23,20432
	ctx.r29.s64 = ctx.r23.s64 + 20432;
	// addi r3,r22,21128
	ctx.r3.s64 = ctx.r22.s64 + 21128;
	// stw r4,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// addi r10,r20,21096
	ctx.r10.s64 = ctx.r20.s64 + 21096;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r7,r19,21016
	ctx.r7.s64 = ctx.r19.s64 + 21016;
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r6,r18,20960
	ctx.r6.s64 = ctx.r18.s64 + 20960;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lis r5,255
	ctx.r5.s64 = 16711680;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r30,r11,5344
	ctx.r30.s64 = ctx.r11.s64 + 5344;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r21,r9,12280
	ctx.r21.s64 = ctx.r9.s64 + 12280;
	// addi r31,r8,-31400
	ctx.r31.s64 = ctx.r8.s64 + -31400;
	// ori r24,r5,195
	ctx.r24.u64 = ctx.r5.u64 | 195;
	// b 0x899464ac
	goto loc_899464AC;
loc_89946480:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// lhz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r26,86(r1)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r25,84(r1)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// ori r24,r11,195
	ctx.r24.u64 = ctx.r11.u64 | 195;
	// lhz r28,90(r1)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lbz r14,80(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r15,96(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r16,100(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r17,104(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r29,108(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_899464AC:
	// bl 0x899301c0
	ctx.lr = 0x899464B0;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x899464B4;
	sub_899309D8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89930930
	ctx.lr = 0x899464BC;
	sub_89930930(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x899464C0;
	sub_899306A8(ctx, base);
	// lis r4,16576
	ctx.r4.s64 = 1086324736;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x89931dd8
	ctx.lr = 0x899464D0;
	sub_89931DD8(ctx, base);
	// lis r4,-32640
	ctx.r4.s64 = -2139095040;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x89931dd8
	ctx.lr = 0x899464E0;
	sub_89931DD8(ctx, base);
	// lis r4,-16320
	ctx.r4.s64 = -1069547520;
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x89931dd8
	ctx.lr = 0x899464F0;
	sub_89931DD8(ctx, base);
	// lis r11,16448
	ctx.r11.s64 = 1077936128;
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// ori r4,r11,49152
	ctx.r4.u64 = ctx.r11.u64 | 49152;
	// bl 0x89931dd8
	ctx.lr = 0x89946500;
	sub_89931DD8(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89946590
	if (ctx.cr6.eq) goto loc_89946590;
	// lbz r11,256(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 256);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89946538
	if (ctx.cr6.eq) goto loc_89946538;
	// extsh r11,r25
	ctx.r11.s64 = ctx.r25.s16;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// clrlwi r25,r11,19
	ctx.r25.u64 = ctx.r11.u32 & 0x1FFF;
	// sth r25,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r25.u16);
loc_89946538:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89946554
	if (ctx.cr6.eq) goto loc_89946554;
	// extsh r11,r25
	ctx.r11.s64 = ctx.r25.s16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// clrlwi r25,r11,19
	ctx.r25.u64 = ctx.r11.u32 & 0x1FFF;
	// sth r25,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r25.u16);
loc_89946554:
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89946570
	if (ctx.cr6.eq) goto loc_89946570;
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// clrlwi r26,r11,20
	ctx.r26.u64 = ctx.r11.u32 & 0xFFF;
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
loc_89946570:
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89946740
	if (ctx.cr6.eq) goto loc_89946740;
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// clrlwi r26,r11,20
	ctx.r26.u64 = ctx.r11.u32 & 0xFFF;
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
	// b 0x89946740
	goto loc_89946740;
loc_89946590:
	// rlwinm r11,r8,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89946618
	if (ctx.cr6.eq) goto loc_89946618;
	// lbz r11,256(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 256);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899465c0
	if (ctx.cr6.eq) goto loc_899465C0;
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// clrlwi r27,r11,19
	ctx.r27.u64 = ctx.r11.u32 & 0x1FFF;
	// sth r27,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r27.u16);
loc_899465C0:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899465dc
	if (ctx.cr6.eq) goto loc_899465DC;
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// clrlwi r27,r11,19
	ctx.r27.u64 = ctx.r11.u32 & 0x1FFF;
	// sth r27,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r27.u16);
loc_899465DC:
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899465f8
	if (ctx.cr6.eq) goto loc_899465F8;
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// clrlwi r28,r11,20
	ctx.r28.u64 = ctx.r11.u32 & 0xFFF;
	// sth r28,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r28.u16);
loc_899465F8:
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89946740
	if (ctx.cr6.eq) goto loc_89946740;
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// clrlwi r28,r11,20
	ctx.r28.u64 = ctx.r11.u32 & 0xFFF;
	// sth r28,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r28.u16);
	// b 0x89946740
	goto loc_89946740;
loc_89946618:
	// lbz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 128);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89946638
	if (ctx.cr6.eq) goto loc_89946638;
	// clrlwi r10,r14,24
	ctx.r10.u64 = ctx.r14.u32 & 0xFF;
	// lbzx r14,r10,r17
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r17.u32);
	// stb r14,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
loc_89946638:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89946650
	if (ctx.cr6.eq) goto loc_89946650;
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// lbzx r14,r11,r16
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r16.u32);
	// stb r14,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
loc_89946650:
	// lbz r11,256(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 256);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899466c8
	if (ctx.cr6.eq) goto loc_899466C8;
	// clrlwi r10,r14,24
	ctx.r10.u64 = ctx.r14.u32 & 0xFF;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// rlwinm r11,r8,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r6,r10,r15
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r15.u32);
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r5,r11,255
	ctx.r5.s64 = ctx.r11.s64 + 255;
	// and r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 & ctx.r5.u64;
	// stbx r11,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// beq cr6,0x899466c8
	if (ctx.cr6.eq) goto loc_899466C8;
	// addi r10,r10,-6
	ctx.r10.s64 = ctx.r10.s64 + -6;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x899466c8
	if (ctx.cr6.gt) goto loc_899466C8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899466b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899466B0;
	// bdzf 4*cr6+eq,0x899466bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899466BC;
	// bdzf 4*cr6+eq,0x899466bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899466BC;
	// bne cr6,0x899466bc
	if (!ctx.cr6.eq) goto loc_899466BC;
loc_899466B0:
	// stb r11,199(r1)
	REX_STORE_U8(ctx.r1.u32 + 199, ctx.r11.u8);
	// stb r11,198(r1)
	REX_STORE_U8(ctx.r1.u32 + 198, ctx.r11.u8);
	// b 0x899466c8
	goto loc_899466C8;
loc_899466BC:
	// stb r11,202(r1)
	REX_STORE_U8(ctx.r1.u32 + 202, ctx.r11.u8);
	// stb r11,201(r1)
	REX_STORE_U8(ctx.r1.u32 + 201, ctx.r11.u8);
	// stb r11,200(r1)
	REX_STORE_U8(ctx.r1.u32 + 200, ctx.r11.u8);
loc_899466C8:
	// rlwinm r11,r7,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89946740
	if (ctx.cr6.eq) goto loc_89946740;
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// rlwinm r10,r8,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbzx r8,r11,r15
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r15.u32);
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// stbx r7,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// and r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 & ctx.r5.u64;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// beq cr6,0x89946740
	if (ctx.cr6.eq) goto loc_89946740;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x89946740
	if (ctx.cr6.gt) goto loc_89946740;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89946728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89946728;
	// bdzf 4*cr6+eq,0x89946734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89946734;
	// bdzf 4*cr6+eq,0x89946734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89946734;
	// bne cr6,0x89946734
	if (!ctx.cr6.eq) goto loc_89946734;
loc_89946728:
	// stb r10,199(r1)
	REX_STORE_U8(ctx.r1.u32 + 199, ctx.r10.u8);
	// stb r10,198(r1)
	REX_STORE_U8(ctx.r1.u32 + 198, ctx.r10.u8);
	// b 0x89946740
	goto loc_89946740;
loc_89946734:
	// stb r10,202(r1)
	REX_STORE_U8(ctx.r1.u32 + 202, ctx.r10.u8);
	// stb r10,201(r1)
	REX_STORE_U8(ctx.r1.u32 + 201, ctx.r10.u8);
	// stb r10,200(r1)
	REX_STORE_U8(ctx.r1.u32 + 200, ctx.r10.u8);
loc_89946740:
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r7,r14,24
	ctx.r7.u64 = ctx.r14.u32 & 0xFF;
	// lbz r11,-10032(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + -10032);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r10,r30,-10032
	ctx.r10.s64 = ctx.r30.s64 + -10032;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x8994678c
	if (ctx.cr6.eq) goto loc_8994678C;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89946774:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89946774
	if (!ctx.cr6.eq) goto loc_89946774;
loc_8994678C:
	// lbz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 192);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r5,193(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 193);
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lbz r6,194(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 194);
	// lbz r4,195(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 195);
	// lis r15,4096
	ctx.r15.s64 = 268435456;
	// ori r3,r8,4
	ctx.r3.u64 = ctx.r8.u64 | 4;
	// lbz r18,196(r1)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 196);
	// lwz r9,8152(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8152);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// or r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 | ctx.r5.u64;
	// lwz r10,9520(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 9520);
	// lbz r20,197(r1)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r1.u32 + 197);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r14,198(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 198);
	// lbz r17,199(r1)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r1.u32 + 199);
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// lwz r8,7120(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 7120);
	// lbz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 200);
	// addi r6,r9,52
	ctx.r6.s64 = ctx.r9.s64 + 52;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r3,202(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 202);
	// addi r22,r8,-4
	ctx.r22.s64 = ctx.r8.s64 + -4;
	// lbz r16,201(r1)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r1.u32 + 201);
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r17,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r17.u32);
	// rlwinm r4,r27,16,3,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0x1FFF0000;
	// rlwinm r23,r5,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r3,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r3.u8);
	// rlwinm r5,r22,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r3,r28,20
	ctx.r3.u64 = ctx.r28.u32 & 0xFFF;
	// li r22,1
	ctx.r22.s64 = 1;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stbx r22,r7,r21
	REX_STORE_U8(ctx.r7.u32 + ctx.r21.u32, ctx.r22.u8);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r15,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r15.u32);
	// add r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 + ctx.r5.u64;
	// or r7,r23,r18
	ctx.r7.u64 = ctx.r23.u64 | ctx.r18.u64;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r10,r5,32896
	ctx.r10.u64 = ctx.r5.u64 | 32896;
	// or r4,r6,r20
	ctx.r4.u64 = ctx.r6.u64 | ctx.r20.u64;
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// addi r4,r8,28
	ctx.r4.s64 = ctx.r8.s64 + 28;
	// or r7,r3,r14
	ctx.r7.u64 = ctx.r3.u64 | ctx.r14.u64;
	// rlwinm r8,r25,16,3,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0x1FFF0000;
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r7,r26,20
	ctx.r7.u64 = ctx.r26.u32 & 0xFFF;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// or r20,r5,r17
	ctx.r20.u64 = ctx.r5.u64 | ctx.r17.u64;
	// addi r3,r9,20
	ctx.r3.s64 = ctx.r9.s64 + 20;
	// lbz r23,81(r1)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r4,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// stwu r20,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r20.u32);
	ctx.r11.u32 = ea;
	// rotlwi r7,r23,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r23.u32, 8);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// or r6,r7,r16
	ctx.r6.u64 = ctx.r7.u64 | ctx.r16.u64;
	// rlwinm r5,r25,28,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFF;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// lbz r16,82(r1)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r4,r25,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r5,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lbz r5,192(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 192);
	// rlwinm r7,r25,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// rlwinm r6,r4,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// or r19,r10,r16
	ctx.r19.u64 = ctx.r10.u64 | ctx.r16.u64;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// stwu r19,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r19.u32);
	ctx.r11.u32 = ea;
	// rlwinm r8,r27,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFF;
	// std r19,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r19.u64);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// rlwinm r19,r8,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// std r20,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r20.u64);
	// rlwinm r8,r8,30,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3C;
	// std r18,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r18.u64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r25,200(r1)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 200);
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r20,r27,28,20,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFF;
	// stw r11,9520(r29)
	REX_STORE_U32(ctx.r29.u32 + 9520, ctx.r11.u32);
	// rlwinm r23,r26,28,20,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFF;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r4,r4,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3C;
	// stb r22,19(r21)
	REX_STORE_U8(ctx.r21.u32 + 19, ctx.r22.u8);
	// rlwinm r11,r5,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x10;
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// rlwinm r27,r27,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// stb r22,17(r21)
	REX_STORE_U8(ctx.r21.u32 + 17, ctx.r22.u8);
	// rlwinm r3,r26,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 24) & 0xFF;
	// rlwinm r24,r28,24,24,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// rlwinm r5,r26,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// rlwinm r26,r23,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// rlwinm r23,r20,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// rlwinm r20,r3,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// rlwinm r29,r28,28,20,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFF;
	// rlwinm r18,r24,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// rlwinm r28,r28,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// rlwinm r3,r3,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3C;
	// rlwinm r24,r24,30,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3C;
	// lwzx r8,r6,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// rlwinm r29,r29,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// stw r24,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r23,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r30.u32);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// stw r9,2468(r31)
	REX_STORE_U32(ctx.r31.u32 + 2468, ctx.r9.u32);
	// lwzx r9,r4,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// lwzx r4,r27,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// lwz r27,136(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r8,2464(r31)
	REX_STORE_U32(ctx.r31.u32 + 2464, ctx.r8.u32);
	// lwzx r8,r5,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// lwzx r10,r7,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwzx r28,r27,r30
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// lwzx r6,r20,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r30.u32);
	// lwzx r7,r26,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// lwzx r26,r29,r30
	ctx.r26.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwz r20,144(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwzx r29,r19,r30
	ctx.r29.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r30.u32);
	// lwzx r25,r18,r30
	ctx.r25.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r30.u32);
	// stw r10,2472(r31)
	REX_STORE_U32(ctx.r31.u32 + 2472, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r23,140(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r20,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// ld r20,168(r1)
	ctx.r20.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// stw r9,2460(r31)
	REX_STORE_U32(ctx.r31.u32 + 2460, ctx.r9.u32);
	// lwzx r5,r5,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// lwzx r23,r23,r30
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r30.u32);
	// lwz r27,136(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r8,2216(r31)
	REX_STORE_U32(ctx.r31.u32 + 2216, ctx.r8.u32);
	// stw r7,2212(r31)
	REX_STORE_U32(ctx.r31.u32 + 2212, ctx.r7.u32);
	// stw r6,2208(r31)
	REX_STORE_U32(ctx.r31.u32 + 2208, ctx.r6.u32);
	// stw r5,2204(r31)
	REX_STORE_U32(ctx.r31.u32 + 2204, ctx.r5.u32);
	// lwzx r27,r27,r30
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// stw r4,2540(r31)
	REX_STORE_U32(ctx.r31.u32 + 2540, ctx.r4.u32);
	// stw r3,2536(r31)
	REX_STORE_U32(ctx.r31.u32 + 2536, ctx.r3.u32);
	// stw r29,2532(r31)
	REX_STORE_U32(ctx.r31.u32 + 2532, ctx.r29.u32);
	// stw r28,2528(r31)
	REX_STORE_U32(ctx.r31.u32 + 2528, ctx.r28.u32);
	// stw r27,2284(r31)
	REX_STORE_U32(ctx.r31.u32 + 2284, ctx.r27.u32);
	// stw r26,2280(r31)
	REX_STORE_U32(ctx.r31.u32 + 2280, ctx.r26.u32);
	// stw r25,2276(r31)
	REX_STORE_U32(ctx.r31.u32 + 2276, ctx.r25.u32);
	// stw r23,2272(r31)
	REX_STORE_U32(ctx.r31.u32 + 2272, ctx.r23.u32);
	// ld r19,176(r1)
	ctx.r19.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// ld r18,184(r1)
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// beq cr6,0x89946a38
	if (ctx.cr6.eq) goto loc_89946A38;
	// addi r9,r31,1956
	ctx.r9.s64 = ctx.r31.s64 + 1956;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_89946A28:
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89946a28
	if (!ctx.cr6.eq) goto loc_89946A28;
loc_89946A38:
	// lbz r10,193(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 193);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stb r11,15(r21)
	REX_STORE_U8(ctx.r21.u32 + 15, ctx.r11.u8);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r7,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89946a7c
	if (ctx.cr6.eq) goto loc_89946A7C;
	// addi r9,r31,1828
	ctx.r9.s64 = ctx.r31.s64 + 1828;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_89946A6C:
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89946a6c
	if (!ctx.cr6.eq) goto loc_89946A6C;
loc_89946A7C:
	// lbz r10,194(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 194);
	// li r11,1
	ctx.r11.s64 = 1;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stb r11,14(r21)
	REX_STORE_U8(ctx.r21.u32 + 14, ctx.r11.u8);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r7,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89946abc
	if (ctx.cr6.eq) goto loc_89946ABC;
	// addi r9,r31,1700
	ctx.r9.s64 = ctx.r31.s64 + 1700;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_89946AAC:
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89946aac
	if (!ctx.cr6.eq) goto loc_89946AAC;
loc_89946ABC:
	// lbz r10,195(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 195);
	// li r11,1
	ctx.r11.s64 = 1;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stb r11,13(r21)
	REX_STORE_U8(ctx.r21.u32 + 13, ctx.r11.u8);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r7,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89946afc
	if (ctx.cr6.eq) goto loc_89946AFC;
	// addi r9,r31,1572
	ctx.r9.s64 = ctx.r31.s64 + 1572;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_89946AEC:
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89946aec
	if (!ctx.cr6.eq) goto loc_89946AEC;
loc_89946AFC:
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,148(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r18,r11
	ctx.r11.u64 = ctx.r18.u64 + ctx.r11.u64;
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// stb r10,12(r21)
	REX_STORE_U8(ctx.r21.u32 + 12, ctx.r10.u8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,1440
	ctx.r9.s64 = ctx.r31.s64 + 1440;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r7,r11,r5
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89946b50
	if (ctx.cr6.eq) goto loc_89946B50;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89946B38:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89946b38
	if (!ctx.cr6.eq) goto loc_89946B38;
loc_89946B50:
	// rlwinm r11,r15,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r7,r15,r11
	ctx.r7.u64 = ctx.r15.u64 + ctx.r11.u64;
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// stb r10,11(r21)
	REX_STORE_U8(ctx.r21.u32 + 11, ctx.r10.u8);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,1312
	ctx.r9.s64 = ctx.r31.s64 + 1312;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89946ba0
	if (ctx.cr6.eq) goto loc_89946BA0;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89946B88:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89946b88
	if (!ctx.cr6.eq) goto loc_89946B88;
loc_89946BA0:
	// clrlwi r10,r18,30
	ctx.r10.u64 = ctx.r18.u32 & 0x3;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,10(r21)
	REX_STORE_U8(ctx.r21.u32 + 10, ctx.r11.u8);
	// bne cr6,0x89946c0c
	if (!ctx.cr6.eq) goto loc_89946C0C;
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r31,1168
	ctx.r10.s64 = ctx.r31.s64 + 1168;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89946bec
	if (ctx.cr6.eq) goto loc_89946BEC;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_89946BD0:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addis r7,r11,-32639
	ctx.r7.s64 = ctx.r11.s64 + -2139029504;
	// addi r7,r7,-32768
	ctx.r7.s64 = ctx.r7.s64 + -32768;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89946bd0
	if (!ctx.cr6.eq) goto loc_89946BD0;
loc_89946BEC:
	// rlwinm r10,r14,30,2,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r9,r14,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,9(r21)
	REX_STORE_U8(ctx.r21.u32 + 9, ctx.r11.u8);
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r10,r9,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stw r11,1188(r31)
	REX_STORE_U32(ctx.r31.u32 + 1188, ctx.r11.u32);
	// stw r10,1192(r31)
	REX_STORE_U32(ctx.r31.u32 + 1192, ctx.r10.u32);
loc_89946C0C:
	// clrlwi r11,r15,30
	ctx.r11.u64 = ctx.r15.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89946c74
	if (!ctx.cr6.eq) goto loc_89946C74;
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r10,r31,1040
	ctx.r10.s64 = ctx.r31.s64 + 1040;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89946c50
	if (ctx.cr6.eq) goto loc_89946C50;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_89946C34:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addis r7,r11,-32639
	ctx.r7.s64 = ctx.r11.s64 + -2139029504;
	// addi r7,r7,-32768
	ctx.r7.s64 = ctx.r7.s64 + -32768;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89946c34
	if (!ctx.cr6.eq) goto loc_89946C34;
loc_89946C50:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r11,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r9,r11,30,2,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r21)
	REX_STORE_U8(ctx.r21.u32 + 8, ctx.r11.u8);
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r11,r9,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stw r10,1064(r31)
	REX_STORE_U32(ctx.r31.u32 + 1064, ctx.r10.u32);
	// stw r11,1060(r31)
	REX_STORE_U32(ctx.r31.u32 + 1060, ctx.r11.u32);
loc_89946C74:
	// rlwinm r4,r19,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 24) & 0xFFFFFF;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r27,r16,30,2,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r7,r20,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r22,r20,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// rlwinm r26,r4,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r20,r20,30,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 30) & 0x3C;
	// rlwinm r18,r19,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// rlwinm r8,r17,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r6,r17,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// rlwinm r3,r7,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r25,r26,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r17,r7,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r7,r27,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// rlwinm r5,r3,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r27,r3,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r3,r20,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r30.u32);
	// rlwinm r24,r25,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r20,r18,r30
	ctx.r20.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r30.u32);
	// lwzx r18,r4,r30
	ctx.r18.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// rlwinm r10,r11,30,2,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r4,r24,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r7,676(r31)
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r7.u32);
	// rlwinm r24,r24,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r9,r11,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// stw r3,968(r31)
	REX_STORE_U32(ctx.r31.u32 + 968, ctx.r3.u32);
	// stw r24,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// rlwinm r23,r16,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r29,r5,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r14,r25,2,26,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r20,844(r31)
	REX_STORE_U32(ctx.r31.u32 + 844, ctx.r20.u32);
	// rlwinm r28,r29,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// stw r18,836(r31)
	REX_STORE_U32(ctx.r31.u32 + 836, ctx.r18.u32);
	// lwzx r10,r9,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// rlwinm r15,r26,2,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwzx r9,r8,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// rlwinm r16,r28,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// lwzx r8,r6,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// rlwinm r19,r19,30,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 30) & 0x3C;
	// lwzx r6,r23,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r30.u32);
	// rlwinm r23,r5,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lwzx r5,r22,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r30.u32);
	// rlwinm r22,r29,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// lwzx r29,r17,r30
	ctx.r29.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r30.u32);
	// rlwinm r17,r28,30,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3C;
	// lwzx r25,r16,r30
	ctx.r25.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r30.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwzx r16,r14,r30
	ctx.r16.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r30.u32);
	// lwzx r28,r27,r30
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// lwzx r27,r23,r30
	ctx.r27.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r30.u32);
	// lwzx r23,r17,r30
	ctx.r23.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r30.u32);
	// lwzx r17,r15,r30
	ctx.r17.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r30.u32);
	// lwzx r26,r22,r30
	ctx.r26.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r30.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwzx r19,r19,r30
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r30.u32);
	// stw r11,932(r31)
	REX_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,936(r31)
	REX_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// lwz r14,160(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r9,804(r31)
	REX_STORE_U32(ctx.r31.u32 + 804, ctx.r9.u32);
	// rlwinm r15,r14,2,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// stw r8,808(r31)
	REX_STORE_U32(ctx.r31.u32 + 808, ctx.r8.u32);
	// rlwinm r14,r14,30,26,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 30) & 0x3C;
	// stw r6,680(r31)
	REX_STORE_U32(ctx.r31.u32 + 680, ctx.r6.u32);
	// stw r15,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r15.u32);
	// lwzx r15,r4,r30
	ctx.r15.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r5,972(r31)
	REX_STORE_U32(ctx.r31.u32 + 972, ctx.r5.u32);
	// stw r29,964(r31)
	REX_STORE_U32(ctx.r31.u32 + 964, ctx.r29.u32);
	// stw r28,960(r31)
	REX_STORE_U32(ctx.r31.u32 + 960, ctx.r28.u32);
	// stw r27,956(r31)
	REX_STORE_U32(ctx.r31.u32 + 956, ctx.r27.u32);
	// stw r26,952(r31)
	REX_STORE_U32(ctx.r31.u32 + 952, ctx.r26.u32);
	// stw r25,948(r31)
	REX_STORE_U32(ctx.r31.u32 + 948, ctx.r25.u32);
	// stw r23,944(r31)
	REX_STORE_U32(ctx.r31.u32 + 944, ctx.r23.u32);
	// stb r24,5(r21)
	REX_STORE_U8(ctx.r21.u32 + 5, ctx.r24.u8);
	// stb r22,7(r21)
	REX_STORE_U8(ctx.r21.u32 + 7, ctx.r22.u8);
	// stw r19,840(r31)
	REX_STORE_U32(ctx.r31.u32 + 840, ctx.r19.u32);
	// stw r17,832(r31)
	REX_STORE_U32(ctx.r31.u32 + 832, ctx.r17.u32);
	// stw r16,828(r31)
	REX_STORE_U32(ctx.r31.u32 + 828, ctx.r16.u32);
	// stb r11,6(r21)
	REX_STORE_U8(ctx.r21.u32 + 6, ctx.r11.u8);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwzx r10,r14,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r30.u32);
	// stw r15,824(r31)
	REX_STORE_U32(ctx.r31.u32 + 824, ctx.r15.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r10,816(r31)
	REX_STORE_U32(ctx.r31.u32 + 816, ctx.r10.u32);
	// stw r11,820(r31)
	REX_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
	// bl 0x89930720
	ctx.lr = 0x89946DDC;
	sub_89930720(ctx, base);
	// bl 0x899319c8
	ctx.lr = 0x89946DE0;
	sub_899319C8(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lbz r11,3632(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3632);
	// rlwinm r3,r11,0,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x89946480
	if (ctx.cr6.eq) goto loc_89946480;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899529E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899529F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x89952a08
	if (ctx.cr6.lt) goto loc_89952A08;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89952A08:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r30,255
	ctx.r30.s64 = 255;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x89952a20
	if (ctx.cr6.eq) goto loc_89952A20;
	// lbz r30,0(r5)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
loc_89952A20:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r3,68
	ctx.r9.s64 = ctx.r3.s64 + 68;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r31,r10,66
	ctx.r31.s64 = ctx.r10.s64 + 4325376;
	// addi r31,r31,-1076
	ctx.r31.s64 = ctx.r31.s64 + -1076;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89952a58
	if (ctx.cr6.eq) goto loc_89952A58;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r30,255
	ctx.r30.s64 = 255;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
loc_89952A58:
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// lis r8,5
	ctx.r8.s64 = 327680;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r7,r8,32320
	ctx.r7.u64 = ctx.r8.u64 | 32320;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x89952adc
	if (!ctx.cr6.lt) goto loc_89952ADC;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x89952aac
	if (!ctx.cr6.eq) goto loc_89952AAC;
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lis r5,255
	ctx.r5.s64 = 16711680;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// ori r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 65535;
	// clrlwi r3,r7,8
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFFFF;
	// stwx r7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x89952ae8
	if (!ctx.cr6.eq) goto loc_89952AE8;
loc_89952AAC:
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwimi r6,r30,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r6,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89952ADC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// bl 0x899520b8
	ctx.lr = 0x89952AE8;
	sub_899520B8(ctx, base);
loc_89952AE8:
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89952F20) {
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
	// bl 0x89918508
	ctx.lr = 0x89952F38;
	sub_89918508(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,3200
	ctx.r10.s64 = 209715200;
	// lwz r11,12000(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12000);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// bgt cr6,0x89952fc4
	if (ctx.cr6.gt) goto loc_89952FC4;
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// addi r10,r11,9656
	ctx.r10.s64 = ctx.r11.s64 + 9656;
	// mulli r11,r9,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(92));
	// addi r9,r10,78
	ctx.r9.s64 = ctx.r10.s64 + 78;
	// addi r8,r10,73
	ctx.r8.s64 = ctx.r10.s64 + 73;
	// addi r7,r10,75
	ctx.r7.s64 = ctx.r10.s64 + 75;
	// addi r6,r10,74
	ctx.r6.s64 = ctx.r10.s64 + 74;
	// lis r5,-30320
	ctx.r5.s64 = -1987051520;
	// lhzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// addi r4,r5,9016
	ctx.r4.s64 = ctx.r5.s64 + 9016;
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// sthx r5,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u16);
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// rlwinm r10,r3,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// lhzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r5,r9,18,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFFFFFFFC;
	// srawi r10,r5,24
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 24;
	// addi r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 128;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stbx r3,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u8);
	// stbx r3,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r3.u8);
	// stbx r3,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r3.u8);
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
loc_89952FC4:
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// addi r8,r11,9656
	ctx.r8.s64 = ctx.r11.s64 + 9656;
	// mulli r11,r10,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(92));
	// addi r10,r8,73
	ctx.r10.s64 = ctx.r8.s64 + 73;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89953020
	if (ctx.cr6.eq) goto loc_89953020;
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x89953020
	if (!ctx.cr6.eq) goto loc_89953020;
	// lis r9,-30273
	ctx.r9.s64 = -1983971328;
	// lbz r7,6419(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 6419);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x89953020
	if (!ctx.cr6.eq) goto loc_89953020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89918c98
	ctx.lr = 0x8995300C;
	sub_89918C98(ctx, base);
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
loc_89953020:
	// addi r9,r8,75
	ctx.r9.s64 = ctx.r8.s64 + 75;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,74
	ctx.r8.s64 = ctx.r8.s64 + 74;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_89953E88) {
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
	// lhz r11,124(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 124);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stb r8,128(r4)
	REX_STORE_U8(ctx.r4.u32 + 128, ctx.r8.u8);
	// stw r8,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r31,r11,128
	ctx.r31.s64 = ctx.r11.s64 + 128;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r6,r6,0,5,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// addi r5,r9,9016
	ctx.r5.s64 = ctx.r9.s64 + 9016;
	// lwz r9,24(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r31,r31,1,22,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x3FE;
	// stw r6,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// li r8,512
	ctx.r8.s64 = 512;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r30,224
	ctx.r30.s64 = 224;
	// sth r8,36(r4)
	REX_STORE_U16(ctx.r4.u32 + 36, ctx.r8.u16);
	// rlwinm r8,r11,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// stb r6,39(r4)
	REX_STORE_U8(ctx.r4.u32 + 39, ctx.r6.u8);
	// stb r30,38(r4)
	REX_STORE_U8(ctx.r4.u32 + 38, ctx.r30.u8);
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// lhzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r5.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r11,r11,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// addi r6,r6,24688
	ctx.r6.s64 = ctx.r6.s64 + 24688;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lhzx r10,r8,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r5,r8,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0xFFFF8000;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lbzx r4,r7,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// bl 0x89936218
	ctx.lr = 0x89953F3C;
	sub_89936218(ctx, base);
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

DEFINE_REX_FUNC(sub_89954480) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// mulli r10,r10,696
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r9,r11,640
	ctx.r9.s64 = ctx.r11.s64 + 640;
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x899544bc
	if (!ctx.cr6.eq) goto loc_899544BC;
	// addi r9,r11,624
	ctx.r9.s64 = ctx.r11.s64 + 624;
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x899544bc
	if (!ctx.cr6.eq) goto loc_899544BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_899544BC:
	// addi r9,r11,636
	ctx.r9.s64 = ctx.r11.s64 + 636;
	// lwz r8,16(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// addi r7,r11,637
	ctx.r7.s64 = ctx.r11.s64 + 637;
	// lbzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lbzx r5,r10,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// rotlwi r4,r6,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// subf r11,r8,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r8.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899544E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r11,116(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 116);
	// lwz r9,120(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 120);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x89954514
	if (!ctx.cr6.gt) goto loc_89954514;
	// stw r11,120(r10)
	REX_STORE_U32(ctx.r10.u32 + 120, ctx.r11.u32);
loc_89954514:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// rlwinm r10,r7,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// addi r9,r11,24692
	ctx.r9.s64 = ctx.r11.s64 + 24692;
	// lbzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// b 0x89936218
	sub_89936218(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899547E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899547E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
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
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x89934fb8
	ctx.lr = 0x89954820;
	sub_89934FB8(ctx, base);
	// addi r7,r1,1456
	ctx.r7.s64 = ctx.r1.s64 + 1456;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r9,224
	ctx.r9.s64 = 224;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89934fb8
	ctx.lr = 0x89954854;
	sub_89934FB8(ctx, base);
	// addi r5,r1,2096
	ctx.r5.s64 = ctx.r1.s64 + 2096;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r4,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r4.u16);
	// li r9,128
	ctx.r9.s64 = 128;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x89954888;
	sub_89934FB8(ctx, base);
	// lis r11,-30234
	ctx.r11.s64 = -1981415424;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-6360
	ctx.r31.s64 = ctx.r11.s64 + -6360;
loc_89954894:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
loc_899548A4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_899548A8:
	// add r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 + ctx.r5.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r31,-2040
	ctx.r7.s64 = ctx.r31.s64 + -2040;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r11,5
	ctx.r11.s64 = 5;
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
loc_899548FC:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x899548fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899548FC;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899548a8
	if (ctx.cr6.lt) goto loc_899548A8;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899548a4
	if (ctx.cr6.lt) goto loc_899548A4;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x89954894
	if (ctx.cr6.lt) goto loc_89954894;
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-16444
	ctx.r29.s64 = ctx.r11.s64 + -16444;
loc_89954950:
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// addi r9,r31,-2040
	ctx.r9.s64 = ctx.r31.s64 + -2040;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r30,170
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(170));
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r30,780
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(780));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r8,r29
	ctx.r6.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x89954984;
	sub_89935880(ctx, base);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,12
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 12, ctx.xer);
	// blt cr6,0x89954950
	if (ctx.cr6.lt) goto loc_89954950;
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89955A00) {
	REX_FUNC_PROLOGUE();
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r6,r8,8192
	ctx.r6.u64 = ctx.r8.u64 | 8192;
	// stw r9,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// li r10,176
	ctx.r10.s64 = 176;
	// stb r9,128(r4)
	REX_STORE_U8(ctx.r4.u32 + 128, ctx.r9.u8);
	// li r5,516
	ctx.r5.s64 = 516;
	// stw r7,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// stw r6,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// sth r5,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r5.u16);
	// stb r10,39(r11)
	REX_STORE_U8(ctx.r11.u32 + 39, ctx.r10.u8);
	// stb r10,38(r11)
	REX_STORE_U8(ctx.r11.u32 + 38, ctx.r10.u8);
	// b 0x89936218
	sub_89936218(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89955A4C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89955A50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x89955A58;
	__savegprlr_21(ctx, base);
	// stwu r1,-2928(r1)
	ea = -2928 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r21,6
	ctx.r21.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,216
	ctx.r9.s64 = 216;
	// sth r21,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r21.u16);
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,-20
	ctx.r7.s64 = -20;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934fb8
	ctx.lr = 0x89955A90;
	sub_89934FB8(ctx, base);
	// addi r8,r1,792
	ctx.r8.s64 = ctx.r1.s64 + 792;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r21,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r21.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,216
	ctx.r9.s64 = 216;
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
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934fb8
	ctx.lr = 0x89955AC0;
	sub_89934FB8(ctx, base);
	// addi r7,r1,1472
	ctx.r7.s64 = ctx.r1.s64 + 1472;
	// li r22,8
	ctx.r22.s64 = 8;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,224
	ctx.r9.s64 = 224;
	// sth r22,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r22.u16);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934fb8
	ctx.lr = 0x89955AF4;
	sub_89934FB8(ctx, base);
	// addi r6,r1,2152
	ctx.r6.s64 = ctx.r1.s64 + 2152;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r22,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r22.u16);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r9,224
	ctx.r9.s64 = 224;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934fb8
	ctx.lr = 0x89955B24;
	sub_89934FB8(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r11,-30234
	ctx.r11.s64 = -1981415424;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// addi r31,r11,16712
	ctx.r31.s64 = ctx.r11.s64 + 16712;
loc_89955B34:
	// addi r10,r31,-8824
	ctx.r10.s64 = ctx.r31.s64 + -8824;
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r9,r25,612
	ctx.r9.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(612));
	// add r27,r11,r25
	ctx.r27.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r24,r25,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_89955B50:
	// add r4,r24,r30
	ctx.r4.u64 = ctx.r24.u64 + ctx.r30.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_89955B60:
	// add r10,r27,r6
	ctx.r10.u64 = ctx.r27.u64 + ctx.r6.u64;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r31,864
	ctx.r7.s64 = ctx.r31.s64 + 864;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89955BA8:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x89955ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89955BA8;
	// addi r7,r31,-7600
	ctx.r7.s64 = ctx.r31.s64 + -7600;
	// addi r8,r1,1472
	ctx.r8.s64 = ctx.r1.s64 + 1472;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89955BD4:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x89955bd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89955BD4;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x89955b60
	if (ctx.cr6.lt) goto loc_89955B60;
	// addi r10,r31,864
	ctx.r10.s64 = ctx.r31.s64 + 864;
	// addi r11,r31,2384
	ctx.r11.s64 = ctx.r31.s64 + 2384;
	// mulli r28,r4,170
	ctx.r28.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(170));
	// mulli r29,r4,780
	ctx.r29.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(780));
	// li r7,9
	ctx.r7.s64 = 9;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x89955C1C;
	sub_89935880(ctx, base);
	// addi r10,r31,-7600
	ctx.r10.s64 = ctx.r31.s64 + -7600;
	// addi r11,r31,-6240
	ctx.r11.s64 = ctx.r31.s64 + -6240;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x89935880
	ctx.lr = 0x89955C38;
	sub_89935880(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x89955b50
	if (ctx.cr6.lt) goto loc_89955B50;
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89955b34
	if (ctx.cr6.lt) goto loc_89955B34;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,2224
	ctx.r9.s64 = ctx.r31.s64 + 2224;
	// ori r30,r11,33796
	ctx.r30.u64 = ctx.r11.u64 | 33796;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,224
	ctx.r9.s64 = 224;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x89955C98;
	sub_89934FB8(ctx, base);
	// addi r11,r31,2224
	ctx.r11.s64 = ctx.r31.s64 + 2224;
	// li r10,128
	ctx.r10.s64 = 128;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r7,r11,80
	ctx.r7.s64 = ctx.r11.s64 + 80;
	// li r9,224
	ctx.r9.s64 = 224;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x89955CCC;
	sub_89934FB8(ctx, base);
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r3,r10,3484
	ctx.r3.s64 = ctx.r10.s64 + 3484;
	// addi r30,r11,25864
	ctx.r30.s64 = ctx.r11.s64 + 25864;
loc_89955CE0:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,2224
	ctx.r10.s64 = ctx.r31.s64 + 2224;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_89955CFC:
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 + ctx.r7.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mulli r11,r8,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(108));
	// lhzx r6,r9,r30
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// ori r9,r6,8
	ctx.r9.u64 = ctx.r6.u64 | 8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x89955d54
	if (!ctx.cr6.gt) goto loc_89955D54;
	// rlwinm r6,r9,16,0,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_89955D30:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x89955d30
	if (ctx.cr6.lt) goto loc_89955D30;
loc_89955D54:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x89955cfc
	if (ctx.cr6.lt) goto loc_89955CFC;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89955ce0
	if (ctx.cr6.lt) goto loc_89955CE0;
	// li r11,16
	ctx.r11.s64 = 16;
	// sth r22,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r22.u16);
	// li r10,24
	ctx.r10.s64 = 24;
	// sth r21,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r21.u16);
	// sth r11,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// sth r10,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
loc_89955DA8:
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// add r26,r10,r27
	ctx.r26.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
loc_89955DB8:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r6,r1,98
	ctx.r6.s64 = ctx.r1.s64 + 98;
	// addi r5,r9,128
	ctx.r5.s64 = ctx.r9.s64 + 128;
	// rlwinm r4,r9,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r5,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r24,r8,r25
	ctx.r24.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r25.u32);
	// add r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lhzx r9,r8,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r10,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r8,r9,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhzx r7,r4,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// lhzx r6,r3,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r28.u32);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// addi r5,r31,-8824
	ctx.r5.s64 = ctx.r31.s64 + -8824;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r21,r3,r11
	ctx.r21.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r6,r31,-8824
	ctx.r6.s64 = ctx.r31.s64 + -8824;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r21,8
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 8;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r7,r31,-8824
	ctx.r7.s64 = ctx.r31.s64 + -8824;
	// stwx r11,r29,r5
	REX_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r30,r31,-8824
	ctx.r30.s64 = ctx.r31.s64 + -8824;
	// addi r3,r31,-8824
	ctx.r3.s64 = ctx.r31.s64 + -8824;
	// addi r4,r31,-8824
	ctx.r4.s64 = ctx.r31.s64 + -8824;
	// addi r8,r31,-8824
	ctx.r8.s64 = ctx.r31.s64 + -8824;
	// addi r9,r31,-8824
	ctx.r9.s64 = ctx.r31.s64 + -8824;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// extsh r5,r24
	ctx.r5.s64 = ctx.r24.s16;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// stwx r10,r29,r6
	REX_STORE_U32(ctx.r29.u32 + ctx.r6.u32, ctx.r10.u32);
	// addi r21,r31,-8824
	ctx.r21.s64 = ctx.r31.s64 + -8824;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// rlwinm r6,r5,15,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// extsh r24,r22
	ctx.r24.s64 = ctx.r22.s16;
	// stwx r6,r29,r30
	REX_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r6.u32);
	// neg r5,r10
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stwx r11,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r11.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stwx r6,r29,r3
	REX_STORE_U32(ctx.r29.u32 + ctx.r3.u32, ctx.r6.u32);
	// stwx r6,r29,r4
	REX_STORE_U32(ctx.r29.u32 + ctx.r4.u32, ctx.r6.u32);
	// cmpwi cr6,r24,17
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 17, ctx.xer);
	// stwx r6,r29,r21
	REX_STORE_U32(ctx.r29.u32 + ctx.r21.u32, ctx.r6.u32);
	// stwx r5,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r5.u32);
	// stwx r23,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r23.u32);
	// blt cr6,0x89955db8
	if (ctx.cr6.lt) goto loc_89955DB8;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89955da8
	if (ctx.cr6.lt) goto loc_89955DA8;
	// addi r1,r1,2928
	ctx.r1.s64 = ctx.r1.s64 + 2928;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89958588) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x89958590;
	__savegprlr_17(ctx, base);
	// stwu r1,-1600(r1)
	ea = -1600 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r9,-32
	ctx.r9.s64 = -32;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r28,128
	ctx.r28.s64 = 128;
	// stb r10,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// li r3,40
	ctx.r3.s64 = 40;
	// stb r9,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r9.u8);
	// li r20,192
	ctx.r20.s64 = 192;
	// stb r11,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r3,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r3.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r20,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r20.u8);
	// li r6,-24
	ctx.r6.s64 = -24;
	// stb r8,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r8.u8);
	// li r31,3
	ctx.r31.s64 = 3;
	// stb r30,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r30.u8);
	// li r29,-20
	ctx.r29.s64 = -20;
	// stb r8,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r8.u8);
	// li r7,56
	ctx.r7.s64 = 56;
	// stb r11,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r11.u8);
	// li r4,48
	ctx.r4.s64 = 48;
	// stb r29,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// li r26,80
	ctx.r26.s64 = 80;
	// stb r10,107(r1)
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r10.u8);
	// li r27,32
	ctx.r27.s64 = 32;
	// stb r4,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r4.u8);
	// li r22,-16
	ctx.r22.s64 = -16;
	// stb r20,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r20.u8);
	// li r5,-28
	ctx.r5.s64 = -28;
	// stb r26,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r26.u8);
	// li r21,96
	ctx.r21.s64 = 96;
	// stb r11,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// stb r9,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// li r23,168
	ctx.r23.s64 = 168;
	// stb r6,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r6.u8);
	// stb r11,114(r1)
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r31,115(r1)
	REX_STORE_U8(ctx.r1.u32 + 115, ctx.r31.u8);
	// stb r10,116(r1)
	REX_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stb r3,117(r1)
	REX_STORE_U8(ctx.r1.u32 + 117, ctx.r3.u8);
	// stb r20,118(r1)
	REX_STORE_U8(ctx.r1.u32 + 118, ctx.r20.u8);
	// stb r28,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r28.u8);
	// stb r31,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// stb r9,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r9.u8);
	// stb r6,122(r1)
	REX_STORE_U8(ctx.r1.u32 + 122, ctx.r6.u8);
	// stb r11,123(r1)
	REX_STORE_U8(ctx.r1.u32 + 123, ctx.r11.u8);
	// stb r11,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// stb r10,125(r1)
	REX_STORE_U8(ctx.r1.u32 + 125, ctx.r10.u8);
	// stb r7,126(r1)
	REX_STORE_U8(ctx.r1.u32 + 126, ctx.r7.u8);
	// stb r28,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r28.u8);
	// stb r30,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// stb r11,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r11.u8);
	// stb r9,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r9.u8);
	// stb r5,131(r1)
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r5.u8);
	// stb r11,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// stb r11,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r11.u8);
	// stb r10,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r10.u8);
	// stb r3,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r3.u8);
	// stb r28,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r28.u8);
	// stb r7,137(r1)
	REX_STORE_U8(ctx.r1.u32 + 137, ctx.r7.u8);
	// stb r11,138(r1)
	REX_STORE_U8(ctx.r1.u32 + 138, ctx.r11.u8);
	// stb r9,139(r1)
	REX_STORE_U8(ctx.r1.u32 + 139, ctx.r9.u8);
	// stb r29,140(r1)
	REX_STORE_U8(ctx.r1.u32 + 140, ctx.r29.u8);
	// stb r11,141(r1)
	REX_STORE_U8(ctx.r1.u32 + 141, ctx.r11.u8);
	// stb r11,142(r1)
	REX_STORE_U8(ctx.r1.u32 + 142, ctx.r11.u8);
	// stb r10,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r10.u8);
	// stb r27,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// stb r28,145(r1)
	REX_STORE_U8(ctx.r1.u32 + 145, ctx.r28.u8);
	// stb r21,146(r1)
	REX_STORE_U8(ctx.r1.u32 + 146, ctx.r21.u8);
	// stb r11,147(r1)
	REX_STORE_U8(ctx.r1.u32 + 147, ctx.r11.u8);
	// stb r9,148(r1)
	REX_STORE_U8(ctx.r1.u32 + 148, ctx.r9.u8);
	// stb r22,149(r1)
	REX_STORE_U8(ctx.r1.u32 + 149, ctx.r22.u8);
	// stb r11,150(r1)
	REX_STORE_U8(ctx.r1.u32 + 150, ctx.r11.u8);
	// stb r11,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
	// stb r10,152(r1)
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r10.u8);
	// stb r3,153(r1)
	REX_STORE_U8(ctx.r1.u32 + 153, ctx.r3.u8);
	// stb r28,154(r1)
	REX_STORE_U8(ctx.r1.u32 + 154, ctx.r28.u8);
	// stb r28,155(r1)
	REX_STORE_U8(ctx.r1.u32 + 155, ctx.r28.u8);
	// stb r11,156(r1)
	REX_STORE_U8(ctx.r1.u32 + 156, ctx.r11.u8);
	// stb r9,157(r1)
	REX_STORE_U8(ctx.r1.u32 + 157, ctx.r9.u8);
	// li r24,200
	ctx.r24.s64 = 200;
	// stb r29,158(r1)
	REX_STORE_U8(ctx.r1.u32 + 158, ctx.r29.u8);
	// li r26,136
	ctx.r26.s64 = 136;
	// stb r11,159(r1)
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r11.u8);
	// li r19,4
	ctx.r19.s64 = 4;
	// stb r11,160(r1)
	REX_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// li r25,208
	ctx.r25.s64 = 208;
	// stb r10,161(r1)
	REX_STORE_U8(ctx.r1.u32 + 161, ctx.r10.u8);
	// stb r27,162(r1)
	REX_STORE_U8(ctx.r1.u32 + 162, ctx.r27.u8);
	// stb r28,163(r1)
	REX_STORE_U8(ctx.r1.u32 + 163, ctx.r28.u8);
	// stb r23,164(r1)
	REX_STORE_U8(ctx.r1.u32 + 164, ctx.r23.u8);
	// stb r11,165(r1)
	REX_STORE_U8(ctx.r1.u32 + 165, ctx.r11.u8);
	// stb r9,166(r1)
	REX_STORE_U8(ctx.r1.u32 + 166, ctx.r9.u8);
	// stb r22,167(r1)
	REX_STORE_U8(ctx.r1.u32 + 167, ctx.r22.u8);
	// stb r11,168(r1)
	REX_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// stb r11,169(r1)
	REX_STORE_U8(ctx.r1.u32 + 169, ctx.r11.u8);
	// stb r10,170(r1)
	REX_STORE_U8(ctx.r1.u32 + 170, ctx.r10.u8);
	// stb r3,171(r1)
	REX_STORE_U8(ctx.r1.u32 + 171, ctx.r3.u8);
	// stb r28,172(r1)
	REX_STORE_U8(ctx.r1.u32 + 172, ctx.r28.u8);
	// stb r24,173(r1)
	REX_STORE_U8(ctx.r1.u32 + 173, ctx.r24.u8);
	// stb r11,174(r1)
	REX_STORE_U8(ctx.r1.u32 + 174, ctx.r11.u8);
	// stb r9,175(r1)
	REX_STORE_U8(ctx.r1.u32 + 175, ctx.r9.u8);
	// stb r29,176(r1)
	REX_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// stb r11,177(r1)
	REX_STORE_U8(ctx.r1.u32 + 177, ctx.r11.u8);
	// stb r8,178(r1)
	REX_STORE_U8(ctx.r1.u32 + 178, ctx.r8.u8);
	// stb r10,179(r1)
	REX_STORE_U8(ctx.r1.u32 + 179, ctx.r10.u8);
	// stb r4,180(r1)
	REX_STORE_U8(ctx.r1.u32 + 180, ctx.r4.u8);
	// stb r10,181(r1)
	REX_STORE_U8(ctx.r1.u32 + 181, ctx.r10.u8);
	// stb r30,182(r1)
	REX_STORE_U8(ctx.r1.u32 + 182, ctx.r30.u8);
	// stb r8,183(r1)
	REX_STORE_U8(ctx.r1.u32 + 183, ctx.r8.u8);
	// stb r9,184(r1)
	REX_STORE_U8(ctx.r1.u32 + 184, ctx.r9.u8);
	// stb r6,185(r1)
	REX_STORE_U8(ctx.r1.u32 + 185, ctx.r6.u8);
	// stb r11,186(r1)
	REX_STORE_U8(ctx.r1.u32 + 186, ctx.r11.u8);
	// stb r11,187(r1)
	REX_STORE_U8(ctx.r1.u32 + 187, ctx.r11.u8);
	// stb r10,188(r1)
	REX_STORE_U8(ctx.r1.u32 + 188, ctx.r10.u8);
	// stb r3,189(r1)
	REX_STORE_U8(ctx.r1.u32 + 189, ctx.r3.u8);
	// stb r10,190(r1)
	REX_STORE_U8(ctx.r1.u32 + 190, ctx.r10.u8);
	// stb r21,191(r1)
	REX_STORE_U8(ctx.r1.u32 + 191, ctx.r21.u8);
	// stb r11,192(r1)
	REX_STORE_U8(ctx.r1.u32 + 192, ctx.r11.u8);
	// stb r9,193(r1)
	REX_STORE_U8(ctx.r1.u32 + 193, ctx.r9.u8);
	// stb r29,194(r1)
	REX_STORE_U8(ctx.r1.u32 + 194, ctx.r29.u8);
	// stb r11,195(r1)
	REX_STORE_U8(ctx.r1.u32 + 195, ctx.r11.u8);
	// stb r11,196(r1)
	REX_STORE_U8(ctx.r1.u32 + 196, ctx.r11.u8);
	// stb r10,197(r1)
	REX_STORE_U8(ctx.r1.u32 + 197, ctx.r10.u8);
	// stb r27,198(r1)
	REX_STORE_U8(ctx.r1.u32 + 198, ctx.r27.u8);
	// stb r10,199(r1)
	REX_STORE_U8(ctx.r1.u32 + 199, ctx.r10.u8);
	// stb r26,200(r1)
	REX_STORE_U8(ctx.r1.u32 + 200, ctx.r26.u8);
	// stb r11,201(r1)
	REX_STORE_U8(ctx.r1.u32 + 201, ctx.r11.u8);
	// stb r9,202(r1)
	REX_STORE_U8(ctx.r1.u32 + 202, ctx.r9.u8);
	// stb r22,203(r1)
	REX_STORE_U8(ctx.r1.u32 + 203, ctx.r22.u8);
	// stb r11,204(r1)
	REX_STORE_U8(ctx.r1.u32 + 204, ctx.r11.u8);
	// stb r11,205(r1)
	REX_STORE_U8(ctx.r1.u32 + 205, ctx.r11.u8);
	// stb r10,206(r1)
	REX_STORE_U8(ctx.r1.u32 + 206, ctx.r10.u8);
	// stb r3,207(r1)
	REX_STORE_U8(ctx.r1.u32 + 207, ctx.r3.u8);
	// stb r10,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, ctx.r10.u8);
	// stb r23,209(r1)
	REX_STORE_U8(ctx.r1.u32 + 209, ctx.r23.u8);
	// stb r11,210(r1)
	REX_STORE_U8(ctx.r1.u32 + 210, ctx.r11.u8);
	// stb r9,211(r1)
	REX_STORE_U8(ctx.r1.u32 + 211, ctx.r9.u8);
	// stb r29,212(r1)
	REX_STORE_U8(ctx.r1.u32 + 212, ctx.r29.u8);
	// stb r11,213(r1)
	REX_STORE_U8(ctx.r1.u32 + 213, ctx.r11.u8);
	// stb r11,214(r1)
	REX_STORE_U8(ctx.r1.u32 + 214, ctx.r11.u8);
	// stb r10,215(r1)
	REX_STORE_U8(ctx.r1.u32 + 215, ctx.r10.u8);
	// stb r4,216(r1)
	REX_STORE_U8(ctx.r1.u32 + 216, ctx.r4.u8);
	// stb r10,217(r1)
	REX_STORE_U8(ctx.r1.u32 + 217, ctx.r10.u8);
	// stb r25,218(r1)
	REX_STORE_U8(ctx.r1.u32 + 218, ctx.r25.u8);
	// stb r11,219(r1)
	REX_STORE_U8(ctx.r1.u32 + 219, ctx.r11.u8);
	// stb r9,220(r1)
	REX_STORE_U8(ctx.r1.u32 + 220, ctx.r9.u8);
	// stb r6,221(r1)
	REX_STORE_U8(ctx.r1.u32 + 221, ctx.r6.u8);
	// stb r11,222(r1)
	REX_STORE_U8(ctx.r1.u32 + 222, ctx.r11.u8);
	// stb r11,223(r1)
	REX_STORE_U8(ctx.r1.u32 + 223, ctx.r11.u8);
	// stb r10,224(r1)
	REX_STORE_U8(ctx.r1.u32 + 224, ctx.r10.u8);
	// stb r3,225(r1)
	REX_STORE_U8(ctx.r1.u32 + 225, ctx.r3.u8);
	// stb r30,226(r1)
	REX_STORE_U8(ctx.r1.u32 + 226, ctx.r30.u8);
	// stb r30,227(r1)
	REX_STORE_U8(ctx.r1.u32 + 227, ctx.r30.u8);
	// stb r11,228(r1)
	REX_STORE_U8(ctx.r1.u32 + 228, ctx.r11.u8);
	// stb r9,229(r1)
	REX_STORE_U8(ctx.r1.u32 + 229, ctx.r9.u8);
	// stb r29,230(r1)
	REX_STORE_U8(ctx.r1.u32 + 230, ctx.r29.u8);
	// stb r11,231(r1)
	REX_STORE_U8(ctx.r1.u32 + 231, ctx.r11.u8);
	// stb r19,232(r1)
	REX_STORE_U8(ctx.r1.u32 + 232, ctx.r19.u8);
	// stb r10,233(r1)
	REX_STORE_U8(ctx.r1.u32 + 233, ctx.r10.u8);
	// stb r4,234(r1)
	REX_STORE_U8(ctx.r1.u32 + 234, ctx.r4.u8);
	// stb r24,244(r1)
	REX_STORE_U8(ctx.r1.u32 + 244, ctx.r24.u8);
	// li r26,144
	ctx.r26.s64 = 144;
	// stb r24,253(r1)
	REX_STORE_U8(ctx.r1.u32 + 253, ctx.r24.u8);
	// stb r24,262(r1)
	REX_STORE_U8(ctx.r1.u32 + 262, ctx.r24.u8);
	// li r24,88
	ctx.r24.s64 = 88;
	// stb r20,263(r1)
	REX_STORE_U8(ctx.r1.u32 + 263, ctx.r20.u8);
	// li r20,152
	ctx.r20.s64 = 152;
	// stb r30,235(r1)
	REX_STORE_U8(ctx.r1.u32 + 235, ctx.r30.u8);
	// stb r3,236(r1)
	REX_STORE_U8(ctx.r1.u32 + 236, ctx.r3.u8);
	// stb r19,237(r1)
	REX_STORE_U8(ctx.r1.u32 + 237, ctx.r19.u8);
	// stb r9,238(r1)
	REX_STORE_U8(ctx.r1.u32 + 238, ctx.r9.u8);
	// stb r6,239(r1)
	REX_STORE_U8(ctx.r1.u32 + 239, ctx.r6.u8);
	// stb r8,240(r1)
	REX_STORE_U8(ctx.r1.u32 + 240, ctx.r8.u8);
	// stb r11,241(r1)
	REX_STORE_U8(ctx.r1.u32 + 241, ctx.r11.u8);
	// stb r7,242(r1)
	REX_STORE_U8(ctx.r1.u32 + 242, ctx.r7.u8);
	// stb r3,243(r1)
	REX_STORE_U8(ctx.r1.u32 + 243, ctx.r3.u8);
	// stb r30,245(r1)
	REX_STORE_U8(ctx.r1.u32 + 245, ctx.r30.u8);
	// stb r11,246(r1)
	REX_STORE_U8(ctx.r1.u32 + 246, ctx.r11.u8);
	// stb r5,247(r1)
	REX_STORE_U8(ctx.r1.u32 + 247, ctx.r5.u8);
	// stb r29,248(r1)
	REX_STORE_U8(ctx.r1.u32 + 248, ctx.r29.u8);
	// stb r8,249(r1)
	REX_STORE_U8(ctx.r1.u32 + 249, ctx.r8.u8);
	// stb r31,250(r1)
	REX_STORE_U8(ctx.r1.u32 + 250, ctx.r31.u8);
	// stb r7,251(r1)
	REX_STORE_U8(ctx.r1.u32 + 251, ctx.r7.u8);
	// stb r4,252(r1)
	REX_STORE_U8(ctx.r1.u32 + 252, ctx.r4.u8);
	// stb r3,254(r1)
	REX_STORE_U8(ctx.r1.u32 + 254, ctx.r3.u8);
	// stb r31,255(r1)
	REX_STORE_U8(ctx.r1.u32 + 255, ctx.r31.u8);
	// stb r5,256(r1)
	REX_STORE_U8(ctx.r1.u32 + 256, ctx.r5.u8);
	// stb r6,257(r1)
	REX_STORE_U8(ctx.r1.u32 + 257, ctx.r6.u8);
	// stb r8,258(r1)
	REX_STORE_U8(ctx.r1.u32 + 258, ctx.r8.u8);
	// stb r11,259(r1)
	REX_STORE_U8(ctx.r1.u32 + 259, ctx.r11.u8);
	// stb r7,260(r1)
	REX_STORE_U8(ctx.r1.u32 + 260, ctx.r7.u8);
	// stb r4,261(r1)
	REX_STORE_U8(ctx.r1.u32 + 261, ctx.r4.u8);
	// stb r11,264(r1)
	REX_STORE_U8(ctx.r1.u32 + 264, ctx.r11.u8);
	// stb r5,265(r1)
	REX_STORE_U8(ctx.r1.u32 + 265, ctx.r5.u8);
	// stb r29,266(r1)
	REX_STORE_U8(ctx.r1.u32 + 266, ctx.r29.u8);
	// stb r8,267(r1)
	REX_STORE_U8(ctx.r1.u32 + 267, ctx.r8.u8);
	// stb r11,268(r1)
	REX_STORE_U8(ctx.r1.u32 + 268, ctx.r11.u8);
	// stb r7,269(r1)
	REX_STORE_U8(ctx.r1.u32 + 269, ctx.r7.u8);
	// stb r7,270(r1)
	REX_STORE_U8(ctx.r1.u32 + 270, ctx.r7.u8);
	// stb r26,271(r1)
	REX_STORE_U8(ctx.r1.u32 + 271, ctx.r26.u8);
	// stb r30,272(r1)
	REX_STORE_U8(ctx.r1.u32 + 272, ctx.r30.u8);
	// stb r11,273(r1)
	REX_STORE_U8(ctx.r1.u32 + 273, ctx.r11.u8);
	// stb r5,274(r1)
	REX_STORE_U8(ctx.r1.u32 + 274, ctx.r5.u8);
	// stb r5,275(r1)
	REX_STORE_U8(ctx.r1.u32 + 275, ctx.r5.u8);
	// stb r8,276(r1)
	REX_STORE_U8(ctx.r1.u32 + 276, ctx.r8.u8);
	// stb r8,277(r1)
	REX_STORE_U8(ctx.r1.u32 + 277, ctx.r8.u8);
	// stb r7,278(r1)
	REX_STORE_U8(ctx.r1.u32 + 278, ctx.r7.u8);
	// stb r4,279(r1)
	REX_STORE_U8(ctx.r1.u32 + 279, ctx.r4.u8);
	// stb r26,280(r1)
	REX_STORE_U8(ctx.r1.u32 + 280, ctx.r26.u8);
	// stb r7,281(r1)
	REX_STORE_U8(ctx.r1.u32 + 281, ctx.r7.u8);
	// stb r8,282(r1)
	REX_STORE_U8(ctx.r1.u32 + 282, ctx.r8.u8);
	// stb r5,283(r1)
	REX_STORE_U8(ctx.r1.u32 + 283, ctx.r5.u8);
	// stb r6,284(r1)
	REX_STORE_U8(ctx.r1.u32 + 284, ctx.r6.u8);
	// stb r8,285(r1)
	REX_STORE_U8(ctx.r1.u32 + 285, ctx.r8.u8);
	// stb r11,286(r1)
	REX_STORE_U8(ctx.r1.u32 + 286, ctx.r11.u8);
	// stb r7,287(r1)
	REX_STORE_U8(ctx.r1.u32 + 287, ctx.r7.u8);
	// stb r7,288(r1)
	REX_STORE_U8(ctx.r1.u32 + 288, ctx.r7.u8);
	// stb r26,289(r1)
	REX_STORE_U8(ctx.r1.u32 + 289, ctx.r26.u8);
	// stb r20,290(r1)
	REX_STORE_U8(ctx.r1.u32 + 290, ctx.r20.u8);
	// stb r11,291(r1)
	REX_STORE_U8(ctx.r1.u32 + 291, ctx.r11.u8);
	// stb r5,292(r1)
	REX_STORE_U8(ctx.r1.u32 + 292, ctx.r5.u8);
	// stb r6,293(r1)
	REX_STORE_U8(ctx.r1.u32 + 293, ctx.r6.u8);
	// stb r8,294(r1)
	REX_STORE_U8(ctx.r1.u32 + 294, ctx.r8.u8);
	// stb r11,295(r1)
	REX_STORE_U8(ctx.r1.u32 + 295, ctx.r11.u8);
	// stb r7,296(r1)
	REX_STORE_U8(ctx.r1.u32 + 296, ctx.r7.u8);
	// stb r4,297(r1)
	REX_STORE_U8(ctx.r1.u32 + 297, ctx.r4.u8);
	// stb r26,298(r1)
	REX_STORE_U8(ctx.r1.u32 + 298, ctx.r26.u8);
	// stb r25,299(r1)
	REX_STORE_U8(ctx.r1.u32 + 299, ctx.r25.u8);
	// stb r11,300(r1)
	REX_STORE_U8(ctx.r1.u32 + 300, ctx.r11.u8);
	// stb r5,301(r1)
	REX_STORE_U8(ctx.r1.u32 + 301, ctx.r5.u8);
	// stb r6,302(r1)
	REX_STORE_U8(ctx.r1.u32 + 302, ctx.r6.u8);
	// stb r8,303(r1)
	REX_STORE_U8(ctx.r1.u32 + 303, ctx.r8.u8);
	// stb r8,304(r1)
	REX_STORE_U8(ctx.r1.u32 + 304, ctx.r8.u8);
	// stb r7,305(r1)
	REX_STORE_U8(ctx.r1.u32 + 305, ctx.r7.u8);
	// stb r4,306(r1)
	REX_STORE_U8(ctx.r1.u32 + 306, ctx.r4.u8);
	// stb r24,307(r1)
	REX_STORE_U8(ctx.r1.u32 + 307, ctx.r24.u8);
	// stb r30,308(r1)
	REX_STORE_U8(ctx.r1.u32 + 308, ctx.r30.u8);
	// stb r8,309(r1)
	REX_STORE_U8(ctx.r1.u32 + 309, ctx.r8.u8);
	// stb r5,310(r1)
	REX_STORE_U8(ctx.r1.u32 + 310, ctx.r5.u8);
	// stb r6,311(r1)
	REX_STORE_U8(ctx.r1.u32 + 311, ctx.r6.u8);
	// stb r8,312(r1)
	REX_STORE_U8(ctx.r1.u32 + 312, ctx.r8.u8);
	// stb r24,316(r1)
	REX_STORE_U8(ctx.r1.u32 + 316, ctx.r24.u8);
	// li r18,7
	ctx.r18.s64 = 7;
	// stb r21,317(r1)
	REX_STORE_U8(ctx.r1.u32 + 317, ctx.r21.u8);
	// li r24,160
	ctx.r24.s64 = 160;
	// stb r21,325(r1)
	REX_STORE_U8(ctx.r1.u32 + 325, ctx.r21.u8);
	// li r21,112
	ctx.r21.s64 = 112;
	// stb r11,313(r1)
	REX_STORE_U8(ctx.r1.u32 + 313, ctx.r11.u8);
	// li r26,24
	ctx.r26.s64 = 24;
	// stb r7,314(r1)
	REX_STORE_U8(ctx.r1.u32 + 314, ctx.r7.u8);
	// stb r7,315(r1)
	REX_STORE_U8(ctx.r1.u32 + 315, ctx.r7.u8);
	// stb r11,318(r1)
	REX_STORE_U8(ctx.r1.u32 + 318, ctx.r11.u8);
	// stb r5,319(r1)
	REX_STORE_U8(ctx.r1.u32 + 319, ctx.r5.u8);
	// stb r5,320(r1)
	REX_STORE_U8(ctx.r1.u32 + 320, ctx.r5.u8);
	// stb r8,321(r1)
	REX_STORE_U8(ctx.r1.u32 + 321, ctx.r8.u8);
	// stb r11,322(r1)
	REX_STORE_U8(ctx.r1.u32 + 322, ctx.r11.u8);
	// stb r4,323(r1)
	REX_STORE_U8(ctx.r1.u32 + 323, ctx.r4.u8);
	// stb r7,324(r1)
	REX_STORE_U8(ctx.r1.u32 + 324, ctx.r7.u8);
	// stb r20,326(r1)
	REX_STORE_U8(ctx.r1.u32 + 326, ctx.r20.u8);
	// stb r11,327(r1)
	REX_STORE_U8(ctx.r1.u32 + 327, ctx.r11.u8);
	// stb r6,328(r1)
	REX_STORE_U8(ctx.r1.u32 + 328, ctx.r6.u8);
	// stb r5,329(r1)
	REX_STORE_U8(ctx.r1.u32 + 329, ctx.r5.u8);
	// stb r8,330(r1)
	REX_STORE_U8(ctx.r1.u32 + 330, ctx.r8.u8);
	// stb r8,331(r1)
	REX_STORE_U8(ctx.r1.u32 + 331, ctx.r8.u8);
	// stb r4,332(r1)
	REX_STORE_U8(ctx.r1.u32 + 332, ctx.r4.u8);
	// stb r7,333(r1)
	REX_STORE_U8(ctx.r1.u32 + 333, ctx.r7.u8);
	// stb r27,334(r1)
	REX_STORE_U8(ctx.r1.u32 + 334, ctx.r27.u8);
	// stb r30,335(r1)
	REX_STORE_U8(ctx.r1.u32 + 335, ctx.r30.u8);
	// stb r8,336(r1)
	REX_STORE_U8(ctx.r1.u32 + 336, ctx.r8.u8);
	// stb r6,337(r1)
	REX_STORE_U8(ctx.r1.u32 + 337, ctx.r6.u8);
	// stb r5,338(r1)
	REX_STORE_U8(ctx.r1.u32 + 338, ctx.r5.u8);
	// stb r8,339(r1)
	REX_STORE_U8(ctx.r1.u32 + 339, ctx.r8.u8);
	// stb r11,340(r1)
	REX_STORE_U8(ctx.r1.u32 + 340, ctx.r11.u8);
	// stb r7,341(r1)
	REX_STORE_U8(ctx.r1.u32 + 341, ctx.r7.u8);
	// stb r7,342(r1)
	REX_STORE_U8(ctx.r1.u32 + 342, ctx.r7.u8);
	// stb r27,343(r1)
	REX_STORE_U8(ctx.r1.u32 + 343, ctx.r27.u8);
	// stb r21,344(r1)
	REX_STORE_U8(ctx.r1.u32 + 344, ctx.r21.u8);
	// stb r11,345(r1)
	REX_STORE_U8(ctx.r1.u32 + 345, ctx.r11.u8);
	// stb r6,346(r1)
	REX_STORE_U8(ctx.r1.u32 + 346, ctx.r6.u8);
	// stb r5,347(r1)
	REX_STORE_U8(ctx.r1.u32 + 347, ctx.r5.u8);
	// stb r8,348(r1)
	REX_STORE_U8(ctx.r1.u32 + 348, ctx.r8.u8);
	// stb r11,349(r1)
	REX_STORE_U8(ctx.r1.u32 + 349, ctx.r11.u8);
	// stb r7,350(r1)
	REX_STORE_U8(ctx.r1.u32 + 350, ctx.r7.u8);
	// stb r7,351(r1)
	REX_STORE_U8(ctx.r1.u32 + 351, ctx.r7.u8);
	// stb r27,352(r1)
	REX_STORE_U8(ctx.r1.u32 + 352, ctx.r27.u8);
	// stb r23,353(r1)
	REX_STORE_U8(ctx.r1.u32 + 353, ctx.r23.u8);
	// stb r11,354(r1)
	REX_STORE_U8(ctx.r1.u32 + 354, ctx.r11.u8);
	// stb r5,355(r1)
	REX_STORE_U8(ctx.r1.u32 + 355, ctx.r5.u8);
	// stb r5,356(r1)
	REX_STORE_U8(ctx.r1.u32 + 356, ctx.r5.u8);
	// stb r31,357(r1)
	REX_STORE_U8(ctx.r1.u32 + 357, ctx.r31.u8);
	// stb r18,358(r1)
	REX_STORE_U8(ctx.r1.u32 + 358, ctx.r18.u8);
	// stb r4,359(r1)
	REX_STORE_U8(ctx.r1.u32 + 359, ctx.r4.u8);
	// stb r7,360(r1)
	REX_STORE_U8(ctx.r1.u32 + 360, ctx.r7.u8);
	// stb r25,361(r1)
	REX_STORE_U8(ctx.r1.u32 + 361, ctx.r25.u8);
	// stb r30,362(r1)
	REX_STORE_U8(ctx.r1.u32 + 362, ctx.r30.u8);
	// stb r19,363(r1)
	REX_STORE_U8(ctx.r1.u32 + 363, ctx.r19.u8);
	// stb r6,364(r1)
	REX_STORE_U8(ctx.r1.u32 + 364, ctx.r6.u8);
	// stb r5,365(r1)
	REX_STORE_U8(ctx.r1.u32 + 365, ctx.r5.u8);
	// stb r31,366(r1)
	REX_STORE_U8(ctx.r1.u32 + 366, ctx.r31.u8);
	// stb r11,367(r1)
	REX_STORE_U8(ctx.r1.u32 + 367, ctx.r11.u8);
	// stb r4,368(r1)
	REX_STORE_U8(ctx.r1.u32 + 368, ctx.r4.u8);
	// stb r10,369(r1)
	REX_STORE_U8(ctx.r1.u32 + 369, ctx.r10.u8);
	// stb r24,370(r1)
	REX_STORE_U8(ctx.r1.u32 + 370, ctx.r24.u8);
	// stb r23,371(r1)
	REX_STORE_U8(ctx.r1.u32 + 371, ctx.r23.u8);
	// stb r11,372(r1)
	REX_STORE_U8(ctx.r1.u32 + 372, ctx.r11.u8);
	// stb r6,373(r1)
	REX_STORE_U8(ctx.r1.u32 + 373, ctx.r6.u8);
	// stb r9,374(r1)
	REX_STORE_U8(ctx.r1.u32 + 374, ctx.r9.u8);
	// stb r31,375(r1)
	REX_STORE_U8(ctx.r1.u32 + 375, ctx.r31.u8);
	// stb r19,376(r1)
	REX_STORE_U8(ctx.r1.u32 + 376, ctx.r19.u8);
	// stb r4,377(r1)
	REX_STORE_U8(ctx.r1.u32 + 377, ctx.r4.u8);
	// stb r10,378(r1)
	REX_STORE_U8(ctx.r1.u32 + 378, ctx.r10.u8);
	// stb r21,379(r1)
	REX_STORE_U8(ctx.r1.u32 + 379, ctx.r21.u8);
	// stb r30,380(r1)
	REX_STORE_U8(ctx.r1.u32 + 380, ctx.r30.u8);
	// stb r19,381(r1)
	REX_STORE_U8(ctx.r1.u32 + 381, ctx.r19.u8);
	// stb r29,382(r1)
	REX_STORE_U8(ctx.r1.u32 + 382, ctx.r29.u8);
	// stb r9,383(r1)
	REX_STORE_U8(ctx.r1.u32 + 383, ctx.r9.u8);
	// stb r31,384(r1)
	REX_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// stb r19,385(r1)
	REX_STORE_U8(ctx.r1.u32 + 385, ctx.r19.u8);
	// stb r4,386(r1)
	REX_STORE_U8(ctx.r1.u32 + 386, ctx.r4.u8);
	// stb r10,387(r1)
	REX_STORE_U8(ctx.r1.u32 + 387, ctx.r10.u8);
	// stb r10,388(r1)
	REX_STORE_U8(ctx.r1.u32 + 388, ctx.r10.u8);
	// stb r30,389(r1)
	REX_STORE_U8(ctx.r1.u32 + 389, ctx.r30.u8);
	// li r7,8
	ctx.r7.s64 = 8;
	// stb r11,394(r1)
	REX_STORE_U8(ctx.r1.u32 + 394, ctx.r11.u8);
	// li r5,216
	ctx.r5.s64 = 216;
	// stb r11,399(r1)
	REX_STORE_U8(ctx.r1.u32 + 399, ctx.r11.u8);
	// li r23,-22
	ctx.r23.s64 = -22;
	// stb r11,403(r1)
	REX_STORE_U8(ctx.r1.u32 + 403, ctx.r11.u8);
	// stb r11,408(r1)
	REX_STORE_U8(ctx.r1.u32 + 408, ctx.r11.u8);
	// stb r11,421(r1)
	REX_STORE_U8(ctx.r1.u32 + 421, ctx.r11.u8);
	// stb r11,426(r1)
	REX_STORE_U8(ctx.r1.u32 + 426, ctx.r11.u8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stb r11,430(r1)
	REX_STORE_U8(ctx.r1.u32 + 430, ctx.r11.u8);
	// stb r11,435(r1)
	REX_STORE_U8(ctx.r1.u32 + 435, ctx.r11.u8);
	// addi r11,r1,456
	ctx.r11.s64 = ctx.r1.s64 + 456;
	// stb r10,396(r1)
	REX_STORE_U8(ctx.r1.u32 + 396, ctx.r10.u8);
	// stb r10,405(r1)
	REX_STORE_U8(ctx.r1.u32 + 405, ctx.r10.u8);
	// stb r10,407(r1)
	REX_STORE_U8(ctx.r1.u32 + 407, ctx.r10.u8);
	// stb r10,414(r1)
	REX_STORE_U8(ctx.r1.u32 + 414, ctx.r10.u8);
	// stb r10,423(r1)
	REX_STORE_U8(ctx.r1.u32 + 423, ctx.r10.u8);
	// stb r10,432(r1)
	REX_STORE_U8(ctx.r1.u32 + 432, ctx.r10.u8);
	// stb r10,434(r1)
	REX_STORE_U8(ctx.r1.u32 + 434, ctx.r10.u8);
	// stb r10,441(r1)
	REX_STORE_U8(ctx.r1.u32 + 441, ctx.r10.u8);
	// stb r10,450(r1)
	REX_STORE_U8(ctx.r1.u32 + 450, ctx.r10.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r19,390(r1)
	REX_STORE_U8(ctx.r1.u32 + 390, ctx.r19.u8);
	// stb r6,391(r1)
	REX_STORE_U8(ctx.r1.u32 + 391, ctx.r6.u8);
	// stb r9,392(r1)
	REX_STORE_U8(ctx.r1.u32 + 392, ctx.r9.u8);
	// stb r31,393(r1)
	REX_STORE_U8(ctx.r1.u32 + 393, ctx.r31.u8);
	// stb r27,395(r1)
	REX_STORE_U8(ctx.r1.u32 + 395, ctx.r27.u8);
	// stb r27,397(r1)
	REX_STORE_U8(ctx.r1.u32 + 397, ctx.r27.u8);
	// stb r30,398(r1)
	REX_STORE_U8(ctx.r1.u32 + 398, ctx.r30.u8);
	// stb r22,400(r1)
	REX_STORE_U8(ctx.r1.u32 + 400, ctx.r22.u8);
	// stb r9,401(r1)
	REX_STORE_U8(ctx.r1.u32 + 401, ctx.r9.u8);
	// stb r31,402(r1)
	REX_STORE_U8(ctx.r1.u32 + 402, ctx.r31.u8);
	// stb r3,404(r1)
	REX_STORE_U8(ctx.r1.u32 + 404, ctx.r3.u8);
	// stb r26,406(r1)
	REX_STORE_U8(ctx.r1.u32 + 406, ctx.r26.u8);
	// stb r6,409(r1)
	REX_STORE_U8(ctx.r1.u32 + 409, ctx.r6.u8);
	// stb r9,410(r1)
	REX_STORE_U8(ctx.r1.u32 + 410, ctx.r9.u8);
	// stb r31,411(r1)
	REX_STORE_U8(ctx.r1.u32 + 411, ctx.r31.u8);
	// stb r8,412(r1)
	REX_STORE_U8(ctx.r1.u32 + 412, ctx.r8.u8);
	// stb r3,413(r1)
	REX_STORE_U8(ctx.r1.u32 + 413, ctx.r3.u8);
	// stb r26,415(r1)
	REX_STORE_U8(ctx.r1.u32 + 415, ctx.r26.u8);
	// stb r28,416(r1)
	REX_STORE_U8(ctx.r1.u32 + 416, ctx.r28.u8);
	// stb r8,417(r1)
	REX_STORE_U8(ctx.r1.u32 + 417, ctx.r8.u8);
	// stb r29,418(r1)
	REX_STORE_U8(ctx.r1.u32 + 418, ctx.r29.u8);
	// stb r9,419(r1)
	REX_STORE_U8(ctx.r1.u32 + 419, ctx.r9.u8);
	// stb r19,420(r1)
	REX_STORE_U8(ctx.r1.u32 + 420, ctx.r19.u8);
	// stb r4,422(r1)
	REX_STORE_U8(ctx.r1.u32 + 422, ctx.r4.u8);
	// stb r25,424(r1)
	REX_STORE_U8(ctx.r1.u32 + 424, ctx.r25.u8);
	// stb r30,425(r1)
	REX_STORE_U8(ctx.r1.u32 + 425, ctx.r30.u8);
	// stb r9,427(r1)
	REX_STORE_U8(ctx.r1.u32 + 427, ctx.r9.u8);
	// stb r9,428(r1)
	REX_STORE_U8(ctx.r1.u32 + 428, ctx.r9.u8);
	// stb r19,429(r1)
	REX_STORE_U8(ctx.r1.u32 + 429, ctx.r19.u8);
	// stb r3,431(r1)
	REX_STORE_U8(ctx.r1.u32 + 431, ctx.r3.u8);
	// stb r5,433(r1)
	REX_STORE_U8(ctx.r1.u32 + 433, ctx.r5.u8);
	// stb r23,436(r1)
	REX_STORE_U8(ctx.r1.u32 + 436, ctx.r23.u8);
	// stb r9,437(r1)
	REX_STORE_U8(ctx.r1.u32 + 437, ctx.r9.u8);
	// stb r19,438(r1)
	REX_STORE_U8(ctx.r1.u32 + 438, ctx.r19.u8);
	// stb r8,439(r1)
	REX_STORE_U8(ctx.r1.u32 + 439, ctx.r8.u8);
	// stb r3,440(r1)
	REX_STORE_U8(ctx.r1.u32 + 440, ctx.r3.u8);
	// stb r5,442(r1)
	REX_STORE_U8(ctx.r1.u32 + 442, ctx.r5.u8);
	// stb r28,443(r1)
	REX_STORE_U8(ctx.r1.u32 + 443, ctx.r28.u8);
	// stb r8,444(r1)
	REX_STORE_U8(ctx.r1.u32 + 444, ctx.r8.u8);
	// stb r6,445(r1)
	REX_STORE_U8(ctx.r1.u32 + 445, ctx.r6.u8);
	// stb r9,446(r1)
	REX_STORE_U8(ctx.r1.u32 + 446, ctx.r9.u8);
	// stb r19,447(r1)
	REX_STORE_U8(ctx.r1.u32 + 447, ctx.r19.u8);
	// stb r31,448(r1)
	REX_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// stb r4,449(r1)
	REX_STORE_U8(ctx.r1.u32 + 449, ctx.r4.u8);
	// stb r24,451(r1)
	REX_STORE_U8(ctx.r1.u32 + 451, ctx.r24.u8);
	// stb r30,452(r1)
	REX_STORE_U8(ctx.r1.u32 + 452, ctx.r30.u8);
	// stb r31,453(r1)
	REX_STORE_U8(ctx.r1.u32 + 453, ctx.r31.u8);
	// stb r6,454(r1)
	REX_STORE_U8(ctx.r1.u32 + 454, ctx.r6.u8);
	// stb r9,455(r1)
	REX_STORE_U8(ctx.r1.u32 + 455, ctx.r9.u8);
	// stb r30,456(r1)
	REX_STORE_U8(ctx.r1.u32 + 456, ctx.r30.u8);
loc_89958BC8:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x89958bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89958BC8;
	// lbz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89958c58
	if (ctx.cr6.eq) goto loc_89958C58;
	// addi r10,r1,101
	ctx.r10.s64 = ctx.r1.s64 + 101;
	// addi r31,r10,-8
	ctx.r31.s64 = ctx.r10.s64 + -8;
loc_89958BE8:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r26,4(r31)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lbz r5,5(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,6(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r7,10(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 10);
	// addi r28,r1,784
	ctx.r28.s64 = ctx.r1.s64 + 784;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,11(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 11);
	// lbz r9,7(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 8);
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzu r11,9(r31)
	ea = 9 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x89934fb8
	ctx.lr = 0x89958C38;
	sub_89934FB8(ctx, base);
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// add r7,r26,r10
	ctx.r7.u64 = ctx.r26.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// bne cr6,0x89958be8
	if (!ctx.cr6.eq) goto loc_89958BE8;
loc_89958C58:
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,224
	ctx.r9.s64 = 224;
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
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934fb8
	ctx.lr = 0x89958C8C;
	sub_89934FB8(ctx, base);
	// lis r11,-30233
	ctx.r11.s64 = -1981349888;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// lis r29,11
	ctx.r29.s64 = 720896;
	// addi r31,r11,-6056
	ctx.r31.s64 = ctx.r11.s64 + -6056;
	// addi r22,r10,9016
	ctx.r22.s64 = ctx.r10.s64 + 9016;
loc_89958CA4:
	// rlwinm r10,r23,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r21,r10,r23
	ctx.r21.u64 = ctx.r10.u64 + ctx.r23.u64;
loc_89958CB0:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r21,r11
	ctx.r10.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + ctx.r23.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r31,11144
	ctx.r6.s64 = ctx.r31.s64 + 11144;
	// li r8,5
	ctx.r8.s64 = 5;
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r6,r5,-2
	ctx.r6.s64 = ctx.r5.s64 + -2;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_89958CF4:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x89958cf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89958CF4;
	// addi r7,r1,784
	ctx.r7.s64 = ctx.r1.s64 + 784;
	// addi r6,r31,10464
	ctx.r6.s64 = ctx.r31.s64 + 10464;
	// li r8,5
	ctx.r8.s64 = 5;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_89958D20:
	// lhzu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x89958d20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89958D20;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r11,4,22,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3F0;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r4,r31,6240
	ctx.r4.s64 = ctx.r31.s64 + 6240;
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// mulli r20,r11,52
	ctx.r20.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lhzx r9,r3,r22
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r22.u32);
	// rlwinm r10,r5,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// rotlwi r18,r9,16
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r17,r11,1
	ctx.r17.s64 = ctx.r11.s64 + 1;
	// addi r25,r31,6240
	ctx.r25.s64 = ctx.r31.s64 + 6240;
	// lhzx r8,r10,r22
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r22.u32);
	// addi r3,r31,6240
	ctx.r3.s64 = ctx.r31.s64 + 6240;
	// addi r6,r31,6240
	ctx.r6.s64 = ctx.r31.s64 + 6240;
	// rotlwi r10,r8,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r11,r18,8
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r18.s32 >> 8;
	// addi r8,r31,6240
	ctx.r8.s64 = ctx.r31.s64 + 6240;
	// stwx r11,r20,r4
	REX_STORE_U32(ctx.r20.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r4,r25,32
	ctx.r4.s64 = ctx.r25.s64 + 32;
	// addi r24,r31,6240
	ctx.r24.s64 = ctx.r31.s64 + 6240;
	// stwx r10,r20,r3
	REX_STORE_U32(ctx.r20.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r26,r31,6240
	ctx.r26.s64 = ctx.r31.s64 + 6240;
	// addi r27,r31,6240
	ctx.r27.s64 = ctx.r31.s64 + 6240;
	// addi r28,r31,6240
	ctx.r28.s64 = ctx.r31.s64 + 6240;
	// addi r5,r31,6240
	ctx.r5.s64 = ctx.r31.s64 + 6240;
	// stwx r29,r20,r4
	REX_STORE_U32(ctx.r20.u32 + ctx.r4.u32, ctx.r29.u32);
	// addi r7,r31,6240
	ctx.r7.s64 = ctx.r31.s64 + 6240;
	// addi r9,r31,6240
	ctx.r9.s64 = ctx.r31.s64 + 6240;
	// addi r4,r6,28
	ctx.r4.s64 = ctx.r6.s64 + 28;
	// addi r6,r8,44
	ctx.r6.s64 = ctx.r8.s64 + 44;
	// addi r18,r31,6240
	ctx.r18.s64 = ctx.r31.s64 + 6240;
	// addi r24,r24,36
	ctx.r24.s64 = ctx.r24.s64 + 36;
	// addi r26,r26,20
	ctx.r26.s64 = ctx.r26.s64 + 20;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stwx r30,r20,r6
	REX_STORE_U32(ctx.r20.u32 + ctx.r6.u32, ctx.r30.u32);
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// stwx r29,r20,r18
	REX_STORE_U32(ctx.r20.u32 + ctx.r18.u32, ctx.r29.u32);
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// stwx r29,r20,r24
	REX_STORE_U32(ctx.r20.u32 + ctx.r24.u32, ctx.r29.u32);
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// stwx r29,r20,r26
	REX_STORE_U32(ctx.r20.u32 + ctx.r26.u32, ctx.r29.u32);
	// extsh r8,r17
	ctx.r8.s64 = ctx.r17.s16;
	// stwx r29,r20,r27
	REX_STORE_U32(ctx.r20.u32 + ctx.r27.u32, ctx.r29.u32);
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stwx r29,r20,r28
	REX_STORE_U32(ctx.r20.u32 + ctx.r28.u32, ctx.r29.u32);
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stwx r30,r20,r7
	REX_STORE_U32(ctx.r20.u32 + ctx.r7.u32, ctx.r30.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stwx r3,r20,r4
	REX_STORE_U32(ctx.r20.u32 + ctx.r4.u32, ctx.r3.u32);
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// stwx r10,r20,r5
	REX_STORE_U32(ctx.r20.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r30,r20,r9
	REX_STORE_U32(ctx.r20.u32 + ctx.r9.u32, ctx.r30.u32);
	// blt cr6,0x89958cb0
	if (ctx.cr6.lt) goto loc_89958CB0;
	// addi r10,r31,11144
	ctx.r10.s64 = ctx.r31.s64 + 11144;
	// addi r11,r31,3120
	ctx.r11.s64 = ctx.r31.s64 + 3120;
	// mulli r27,r23,170
	ctx.r27.s64 = static_cast<int64_t>(ctx.r23.u64 * static_cast<uint64_t>(170));
	// mulli r28,r23,780
	ctx.r28.s64 = static_cast<int64_t>(ctx.r23.u64 * static_cast<uint64_t>(780));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r27,r10
	ctx.r5.u64 = ctx.r27.u64 + ctx.r10.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x89958E38;
	sub_89935880(ctx, base);
	// addi r10,r31,10464
	ctx.r10.s64 = ctx.r31.s64 + 10464;
	// addi r11,r31,7184
	ctx.r11.s64 = ctx.r31.s64 + 7184;
	// addi r6,r31,6240
	ctx.r6.s64 = ctx.r31.s64 + 6240;
	// li r7,13
	ctx.r7.s64 = 13;
	// add r5,r27,r10
	ctx.r5.u64 = ctx.r27.u64 + ctx.r10.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x89935880
	ctx.lr = 0x89958E54;
	sub_89935880(ctx, base);
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x89958ca4
	if (ctx.cr6.lt) goto loc_89958CA4;
	// addi r11,r31,10304
	ctx.r11.s64 = ctx.r31.s64 + 10304;
	// sth r19,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r19.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,192
	ctx.r9.s64 = 192;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x89958E98;
	sub_89934FB8(ctx, base);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// addi r10,r31,10304
	ctx.r10.s64 = ctx.r31.s64 + 10304;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r9,3484
	ctx.r9.s64 = ctx.r9.s64 + 3484;
loc_89958EA8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x89958ea8
	if (ctx.cr6.lt) goto loc_89958EA8;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,1600
	ctx.r1.s64 = ctx.r1.s64 + 1600;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89960DA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x89960DA8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// lis r28,274
	ctx.r28.s64 = 17956864;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// ori r25,r9,32896
	ctx.r25.u64 = ctx.r9.u64 | 32896;
	// addis r21,r11,32
	ctx.r21.s64 = ctx.r11.s64 + 2097152;
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// lis r23,16
	ctx.r23.s64 = 1048576;
	// lis r22,226
	ctx.r22.s64 = 14811136;
	// addi r30,r10,-24208
	ctx.r30.s64 = ctx.r10.s64 + -24208;
	// addi r27,r11,32476
	ctx.r27.s64 = ctx.r11.s64 + 32476;
loc_89960DE4:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_89960DEC:
	// add r11,r24,r29
	ctx.r11.u64 = ctx.r24.u64 + ctx.r29.u64;
	// addi r10,r30,3360
	ctx.r10.s64 = ctx.r30.s64 + 3360;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89960e3c
	if (ctx.cr6.eq) goto loc_89960E3C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x89939350
	ctx.lr = 0x89960E3C;
	sub_89939350(ctx, base);
loc_89960E3C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 + ctx.r23.u64;
	// cmpwi cr6,r29,12
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 12, ctx.xer);
	// blt cr6,0x89960dec
	if (ctx.cr6.lt) goto loc_89960DEC;
	// subf r28,r23,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r23.u64;
	// addi r24,r24,12
	ctx.r24.s64 = ctx.r24.s64 + 12;
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r22.s32, ctx.xer);
	// bgt cr6,0x89960de4
	if (ctx.cr6.gt) goto loc_89960DE4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89961470) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89961478;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r30,r11,-6480
	ctx.r30.s64 = ctx.r11.s64 + -6480;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// addi r11,r30,-224
	ctx.r11.s64 = ctx.r30.s64 + -224;
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,-56
	ctx.r8.s64 = -56;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899614B8;
	sub_89934FB8(ctx, base);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// addi r7,r30,-144
	ctx.r7.s64 = ctx.r30.s64 + -144;
	// addi r8,r30,-224
	ctx.r8.s64 = ctx.r30.s64 + -224;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,3484
	ctx.r29.s64 = ctx.r11.s64 + 3484;
loc_899614CC:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_899614D8:
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
	// blt cr6,0x899614d8
	if (ctx.cr6.lt) goto loc_899614D8;
	// addi r10,r30,-224
	ctx.r10.s64 = ctx.r30.s64 + -224;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// addi r11,r10,80
	ctx.r11.s64 = ctx.r10.s64 + 80;
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899614cc
	if (ctx.cr6.lt) goto loc_899614CC;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,176
	ctx.r9.s64 = 176;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r8,-52
	ctx.r8.s64 = -52;
	// li r7,-40
	ctx.r7.s64 = -40;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x8996154C;
	sub_89934FB8(ctx, base);
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// li r9,168
	ctx.r9.s64 = 168;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-48
	ctx.r8.s64 = -48;
	// li r7,-40
	ctx.r7.s64 = -40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x8996157C;
	sub_89934FB8(ctx, base);
	// addi r8,r30,80
	ctx.r8.s64 = ctx.r30.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// li r8,-60
	ctx.r8.s64 = -60;
	// li r7,-40
	ctx.r7.s64 = -40;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899615AC;
	sub_89934FB8(ctx, base);
	// addi r7,r30,120
	ctx.r7.s64 = ctx.r30.s64 + 120;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// li r8,-44
	ctx.r8.s64 = -44;
	// li r7,-40
	ctx.r7.s64 = -40;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899615DC;
	sub_89934FB8(ctx, base);
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,-6944
	ctx.r7.s64 = ctx.r11.s64 + -6944;
loc_899615E8:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_899615F4:
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
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x899615f4
	if (ctx.cr6.lt) goto loc_899615F4;
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r7,r7,60
	ctx.r7.s64 = ctx.r7.s64 + 60;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x899615e8
	if (ctx.cr6.lt) goto loc_899615E8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89961DF0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,7924(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7924);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r10)
	REX_STORE_U32(ctx.r10.u32 + 7924, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89961E08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89961E10;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r10,586(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8996201c
	if (ctx.cr6.eq) goto loc_8996201C;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8992c408
	ctx.lr = 0x89961E2C;
	sub_8992C408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996201c
	if (ctx.cr6.eq) goto loc_8996201C;
	// lis r23,-30253
	ctx.r23.s64 = -1982660608;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r10,-4592(r23)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + -4592);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lbz r19,12270(r5)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r5.u32 + 12270);
	// lis r20,-16384
	ctx.r20.s64 = -1073741824;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// sth r8,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// li r21,10
	ctx.r21.s64 = 10;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r25,r10,12032
	ctx.r25.s64 = ctx.r10.s64 + 12032;
	// addi r24,r9,9448
	ctx.r24.s64 = ctx.r9.s64 + 9448;
	// addi r28,r8,30768
	ctx.r28.s64 = ctx.r8.s64 + 30768;
	// addi r30,r7,592
	ctx.r30.s64 = ctx.r7.s64 + 592;
loc_89961E98:
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r27,r11
	ctx.r7.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lhzx r3,r9,r6
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// lhzx r5,r29,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r28.u32);
	// mulli r31,r6,112
	ctx.r31.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(112));
	// stwx r20,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r20.u32);
	// stwx r21,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r21.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// stwx r4,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// beq cr6,0x89961ee8
	if (ctx.cr6.eq) goto loc_89961EE8;
	// stwx r26,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r26.u32);
	// b 0x89961ef0
	goto loc_89961EF0;
loc_89961EE8:
	// clrlwi r10,r19,24
	ctx.r10.u64 = ctx.r19.u32 & 0xFF;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_89961EF0:
	// bl 0x8992bd50
	ctx.lr = 0x89961EF4;
	sub_8992BD50(ctx, base);
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// addi r9,r28,6
	ctx.r9.s64 = ctx.r28.s64 + 6;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// addi r8,r28,8
	ctx.r8.s64 = ctx.r28.s64 + 8;
	// addi r7,r28,10
	ctx.r7.s64 = ctx.r28.s64 + 10;
	// addi r6,r28,11
	ctx.r6.s64 = ctx.r28.s64 + 11;
	// lhzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// lhzx r3,r29,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r10.u32);
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// lhzx r9,r29,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r8.u32);
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lbzx r7,r29,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// addi r18,r30,60
	ctx.r18.s64 = ctx.r30.s64 + 60;
	// lbzx r6,r29,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r6.u32);
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// addi r17,r30,64
	ctx.r17.s64 = ctx.r30.s64 + 64;
	// stbx r11,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
	// addi r16,r30,66
	ctx.r16.s64 = ctx.r30.s64 + 66;
	// addi r15,r30,67
	ctx.r15.s64 = ctx.r30.s64 + 67;
	// addi r14,r30,110
	ctx.r14.s64 = ctx.r30.s64 + 110;
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// sthx r9,r31,r17
	REX_STORE_U16(ctx.r31.u32 + ctx.r17.u32, ctx.r9.u16);
	// stwx r5,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// stwx r5,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// stwx r3,r31,r18
	REX_STORE_U32(ctx.r31.u32 + ctx.r18.u32, ctx.r3.u32);
	// stwx r3,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
	// stbx r7,r31,r16
	REX_STORE_U8(ctx.r31.u32 + ctx.r16.u32, ctx.r7.u8);
	// stbx r6,r31,r15
	REX_STORE_U8(ctx.r31.u32 + ctx.r15.u32, ctx.r6.u8);
	// stbx r26,r31,r14
	REX_STORE_U8(ctx.r31.u32 + ctx.r14.u32, ctx.r26.u8);
	// beq cr6,0x89961fa8
	if (ctx.cr6.eq) goto loc_89961FA8;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x89962004
	if (!ctx.cr6.eq) goto loc_89962004;
	// addi r11,r30,76
	ctx.r11.s64 = ctx.r30.s64 + 76;
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r9,r30,80
	ctx.r9.s64 = ctx.r30.s64 + 80;
	// li r8,256
	ctx.r8.s64 = 256;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stwx r8,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x89962004
	goto loc_89962004;
loc_89961FA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991f608
	ctx.lr = 0x89961FB0;
	sub_8991F608(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89962000
	if (ctx.cr6.eq) goto loc_89962000;
	// lhz r11,-4592(r23)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + -4592);
	// addi r8,r30,100
	ctx.r8.s64 = ctx.r30.s64 + 100;
	// addi r7,r30,44
	ctx.r7.s64 = ctx.r30.s64 + 44;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// rlwinm r9,r6,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0xFFFFF800;
	// sthx r11,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u16);
	// add r11,r9,r25
	ctx.r11.u64 = ctx.r9.u64 + ctx.r25.u64;
	// stbx r22,r6,r24
	REX_STORE_U8(ctx.r6.u32 + ctx.r24.u32, ctx.r22.u8);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
loc_89961FE8:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// blt cr6,0x89961fe8
	if (ctx.cr6.lt) goto loc_89961FE8;
	// b 0x89962004
	goto loc_89962004;
loc_89962000:
	// stbx r26,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r26.u8);
loc_89962004:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x89961e98
	if (ctx.cr6.lt) goto loc_89961E98;
loc_8996201C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89963260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89963268;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// addi r10,r11,32528
	ctx.r10.s64 = ctx.r11.s64 + 32528;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r9,-3360
	ctx.r26.s64 = ctx.r9.s64 + -3360;
	// lbz r11,32528(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 32528);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x899632f4
	if (ctx.cr6.eq) goto loc_899632F4;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_89963294:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,2(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r6,3(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r8,5(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// addi r28,r26,720
	ctx.r28.s64 = ctx.r26.s64 + 720;
	// lbz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,7(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// li r4,1
	ctx.r4.s64 = 1;
	// lbzu r11,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x89934fb8
	ctx.lr = 0x899632DC;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89963294
	if (!ctx.cr6.eq) goto loc_89963294;
loc_899632F4:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r31,r26,720
	ctx.r31.s64 = ctx.r26.s64 + 720;
	// addi r29,r11,3548
	ctx.r29.s64 = ctx.r11.s64 + 3548;
loc_89963304:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x89935688
	ctx.lr = 0x8996331C;
	sub_89935688(ctx, base);
	// addi r11,r26,720
	ctx.r11.s64 = ctx.r26.s64 + 720;
	// addi r31,r31,90
	ctx.r31.s64 = ctx.r31.s64 + 90;
	// addi r11,r11,540
	ctx.r11.s64 = ctx.r11.s64 + 540;
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89963304
	if (ctx.cr6.lt) goto loc_89963304;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89963638) {
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
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r31,r11,-1752
	ctx.r31.s64 = ctx.r11.s64 + -1752;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,-344
	ctx.r7.s64 = ctx.r31.s64 + -344;
	// li r9,240
	ctx.r9.s64 = 240;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x89934860
	ctx.lr = 0x89963684;
	sub_89934860(ctx, base);
	// addi r11,r31,-344
	ctx.r11.s64 = ctx.r31.s64 + -344;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r11,162
	ctx.r5.s64 = ctx.r11.s64 + 162;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r10,120
	ctx.r10.s64 = 120;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r9,224
	ctx.r9.s64 = 224;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x89934860
	ctx.lr = 0x899636BC;
	sub_89934860(ctx, base);
	// addi r11,r31,-344
	ctx.r11.s64 = ctx.r31.s64 + -344;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r11,198
	ctx.r3.s64 = ctx.r11.s64 + 198;
	// sth r4,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r4.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r9,208
	ctx.r9.s64 = 208;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x89934860
	ctx.lr = 0x899636F4;
	sub_89934860(ctx, base);
	// addi r11,r31,-344
	ctx.r11.s64 = ctx.r31.s64 + -344;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,324
	ctx.r8.s64 = ctx.r11.s64 + 324;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,96
	ctx.r10.s64 = 96;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,192
	ctx.r9.s64 = 192;
	// li r8,-28
	ctx.r8.s64 = -28;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89934860
	ctx.lr = 0x8996372C;
	sub_89934860(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r31,-344
	ctx.r9.s64 = ctx.r31.s64 + -344;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r8,r8,3484
	ctx.r8.s64 = ctx.r8.s64 + 3484;
loc_89963744:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,19
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 19, ctx.xer);
	// blt cr6,0x89963744
	if (ctx.cr6.lt) goto loc_89963744;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
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

DEFINE_REX_FUNC(sub_89964AD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89964AD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r30,r11,-552
	ctx.r30.s64 = ctx.r11.s64 + -552;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// addi r11,r30,456
	ctx.r11.s64 = ctx.r30.s64 + 456;
	// li r9,208
	ctx.r9.s64 = 208;
	// li r8,-24
	ctx.r8.s64 = -24;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x89964B18;
	sub_89934FB8(ctx, base);
	// addi r11,r30,456
	ctx.r11.s64 = ctx.r30.s64 + 456;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// addi r7,r11,40
	ctx.r7.s64 = ctx.r11.s64 + 40;
	// li r9,168
	ctx.r9.s64 = 168;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,-20
	ctx.r7.s64 = -20;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x89964B4C;
	sub_89934FB8(ctx, base);
	// addi r11,r30,456
	ctx.r11.s64 = ctx.r30.s64 + 456;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// addi r6,r11,120
	ctx.r6.s64 = ctx.r11.s64 + 120;
	// li r9,96
	ctx.r9.s64 = 96;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x89964B80;
	sub_89934FB8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r28,r11,3484
	ctx.r28.s64 = ctx.r11.s64 + 3484;
loc_89964B90:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,216
	ctx.r10.s64 = ctx.r30.s64 + 216;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mulli r11,r8,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(60));
	// addi r7,r30,456
	ctx.r7.s64 = ctx.r30.s64 + 456;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_89964BB4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x89964bb4
	if (ctx.cr6.lt) goto loc_89964BB4;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x89964b90
	if (ctx.cr6.lt) goto loc_89964B90;
	// addi r11,r30,-160
	ctx.r11.s64 = ctx.r30.s64 + -160;
	// li r29,8
	ctx.r29.s64 = 8;
	// li r10,96
	ctx.r10.s64 = 96;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,240
	ctx.r9.s64 = 240;
	// sth r29,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r29.u16);
	// li r8,-8
	ctx.r8.s64 = -8;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x89964C2C;
	sub_89934FB8(ctx, base);
	// addi r8,r30,-320
	ctx.r8.s64 = ctx.r30.s64 + -320;
	// li r10,96
	ctx.r10.s64 = 96;
	// sth r29,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r29.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,208
	ctx.r9.s64 = 208;
	// li r8,-8
	ctx.r8.s64 = -8;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x89964C5C;
	sub_89934FB8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_89964C60:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,-160
	ctx.r10.s64 = ctx.r30.s64 + -160;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r30,-536
	ctx.r11.s64 = ctx.r30.s64 + -536;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r7,r6,108
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(108));
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_89964C84:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// blt cr6,0x89964c84
	if (ctx.cr6.lt) goto loc_89964C84;
	// addi r10,r30,-320
	ctx.r10.s64 = ctx.r30.s64 + -320;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// add r11,r7,r30
	ctx.r11.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_89964CC4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
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
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x89964cc4
	if (ctx.cr6.lt) goto loc_89964CC4;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x89964c60
	if (ctx.cr6.lt) goto loc_89964C60;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89966088) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x89966090;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r25,r11,9104
	ctx.r25.s64 = ctx.r11.s64 + 9104;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,160
	ctx.r10.s64 = 160;
	// li r9,240
	ctx.r9.s64 = 240;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r8,-48
	ctx.r8.s64 = -48;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x89934fb8
	ctx.lr = 0x899660CC;
	sub_89934FB8(ctx, base);
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r10,8920
	ctx.r28.s64 = ctx.r10.s64 + 8920;
	// addi r27,r11,3548
	ctx.r27.s64 = ctx.r11.s64 + 3548;
loc_899660E4:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_899660EC:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x89935688
	ctx.lr = 0x89966114;
	sub_89935688(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,50
	ctx.r30.s64 = ctx.r30.s64 + 50;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x899660ec
	if (ctx.cr6.lt) goto loc_899660EC;
	// addi r26,r26,10
	ctx.r26.s64 = ctx.r26.s64 + 10;
	// addi r11,r25,50
	ctx.r11.s64 = ctx.r25.s64 + 50;
	// addi r29,r29,3
	ctx.r29.s64 = ctx.r29.s64 + 3;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899660e4
	if (ctx.cr6.lt) goto loc_899660E4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899666A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899666B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r11,r11,-31708
	ctx.r11.s64 = ctx.r11.s64 + -31708;
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lis r11,-30233
	ctx.r11.s64 = -1981349888;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r27,r11,-12012
	ctx.r27.s64 = ctx.r11.s64 + -12012;
	// addi r25,r10,19472
	ctx.r25.s64 = ctx.r10.s64 + 19472;
	// addi r30,r9,10576
	ctx.r30.s64 = ctx.r9.s64 + 10576;
loc_899666E4:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r6,-1(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + -1);
	// li r5,28
	ctx.r5.s64 = 28;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r8,2(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 2);
	// neg r11,r7
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lbz r10,1(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// neg r9,r6
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// sth r26,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r26.u16);
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 1;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89934b48
	ctx.lr = 0x89966738;
	sub_89934B48(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r25,-3716
	ctx.r9.s64 = ctx.r25.s64 + -3716;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,-52
	ctx.r11.s64 = ctx.r30.s64 + -52;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// bl 0x89935610
	ctx.lr = 0x89966768;
	sub_89935610(ctx, base);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x899666e4
	if (ctx.cr6.lt) goto loc_899666E4;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r10,r11,-31696
	ctx.r10.s64 = ctx.r11.s64 + -31696;
	// lbz r11,-31696(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -31696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89966814
	if (ctx.cr6.eq) goto loc_89966814;
	// addi r31,r10,-14
	ctx.r31.s64 = ctx.r10.s64 + -14;
loc_8996679C:
	// lbz r9,26(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 26);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// addi r28,r30,3968
	ctx.r28.s64 = ctx.r30.s64 + 3968;
	// lbz r8,25(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 25);
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// lhz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r5,18(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 18);
	// sth r3,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r3.u16);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 20);
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,21(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r8,22(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 22);
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbz r9,23(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 23);
	// lbz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 24);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x899667F0;
	sub_89934B48(ctx, base);
	// lbzu r10,14(r31)
	ea = 14 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 14);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8996679c
	if (!ctx.cr6.eq) goto loc_8996679C;
loc_89966814:
	// addi r6,r25,-3836
	ctx.r6.s64 = ctx.r25.s64 + -3836;
	// addi r5,r30,3968
	ctx.r5.s64 = ctx.r30.s64 + 3968;
	// addi r4,r30,-1368
	ctx.r4.s64 = ctx.r30.s64 + -1368;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x89935610
	ctx.lr = 0x8996682C;
	sub_89935610(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r10,r11,-31528
	ctx.r10.s64 = ctx.r11.s64 + -31528;
	// lbz r11,-31528(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -31528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899668b0
	if (ctx.cr6.eq) goto loc_899668B0;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_89966848:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lhz r4,3(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 3);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// lbz r5,7(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 8);
	// addi r6,r30,-960
	ctx.r6.s64 = ctx.r30.s64 + -960;
	// lbz r9,9(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 9);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzu r10,10(r31)
	ea = 10 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// li r8,-48
	ctx.r8.s64 = -48;
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x89934860
	ctx.lr = 0x89966890;
	sub_89934860(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
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
	// bne cr6,0x89966848
	if (!ctx.cr6.eq) goto loc_89966848;
loc_899668B0:
	// addi r6,r25,-3560
	ctx.r6.s64 = ctx.r25.s64 + -3560;
	// addi r5,r30,-960
	ctx.r5.s64 = ctx.r30.s64 + -960;
	// addi r4,r30,776
	ctx.r4.s64 = ctx.r30.s64 + 776;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935610
	ctx.lr = 0x899668C8;
	sub_89935610(ctx, base);
	// addi r11,r25,-3560
	ctx.r11.s64 = ctx.r25.s64 + -3560;
	// addi r10,r30,-960
	ctx.r10.s64 = ctx.r30.s64 + -960;
	// addi r9,r30,776
	ctx.r9.s64 = ctx.r30.s64 + 776;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1088
	ctx.r6.s64 = ctx.r11.s64 + 1088;
	// addi r5,r10,288
	ctx.r5.s64 = ctx.r10.s64 + 288;
	// addi r4,r9,204
	ctx.r4.s64 = ctx.r9.s64 + 204;
	// bl 0x89935610
	ctx.lr = 0x899668E8;
	sub_89935610(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r10,r11,-31328
	ctx.r10.s64 = ctx.r11.s64 + -31328;
	// lbz r11,-31328(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -31328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89966974
	if (ctx.cr6.eq) goto loc_89966974;
	// addi r31,r10,-12
	ctx.r31.s64 = ctx.r10.s64 + -12;
loc_89966904:
	// lbz r27,23(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 23);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// sth r26,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r26.u16);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r4,14(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// addi r28,r30,3680
	ctx.r28.s64 = ctx.r30.s64 + 3680;
	// lhz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,18(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 18);
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,19(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 19);
	// lbz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 20);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r9,21(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r10,22(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 22);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x89966950;
	sub_89934B48(ctx, base);
	// lbzu r10,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89966904
	if (!ctx.cr6.eq) goto loc_89966904;
loc_89966974:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8996697C:
	// addi r10,r30,2408
	ctx.r10.s64 = ctx.r30.s64 + 2408;
	// mulli r9,r31,204
	ctx.r9.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(204));
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r6,r25,-2392
	ctx.r6.s64 = ctx.r25.s64 + -2392;
	// rlwimi r3,r11,14,16,17
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF3FFF);
	// addi r5,r30,3680
	ctx.r5.s64 = ctx.r30.s64 + 3680;
	// li r7,9
	ctx.r7.s64 = 9;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x89935610
	ctx.lr = 0x899669A0;
	sub_89935610(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8996697c
	if (ctx.cr6.lt) goto loc_8996697C;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r10,r11,-31256
	ctx.r10.s64 = ctx.r11.s64 + -31256;
	// lbz r11,-31256(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -31256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89966a4c
	if (ctx.cr6.eq) goto loc_89966A4C;
	// addi r31,r10,-14
	ctx.r31.s64 = ctx.r10.s64 + -14;
loc_899669D0:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r8,26(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 26);
	// lbz r27,25(r31)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + 25);
	// addi r28,r30,2816
	ctx.r28.s64 = ctx.r30.s64 + 2816;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// lhz r5,18(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 18);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 20);
	// clrlwi r26,r7,16
	ctx.r26.u64 = ctx.r7.u32 & 0xFFFF;
	// lbz r7,21(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 21);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,22(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 22);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r9,23(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 23);
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 24);
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r26,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r26.u16);
	// bl 0x89934b48
	ctx.lr = 0x89966A28;
	sub_89934B48(ctx, base);
	// lbzu r10,14(r31)
	ea = 14 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 14);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899669d0
	if (!ctx.cr6.eq) goto loc_899669D0;
loc_89966A4C:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_89966A54:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,14,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000;
	// add r27,r26,r11
	ctx.r27.u64 = ctx.r26.u64 + ctx.r11.u64;
	// ori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 | 1;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_89966A68:
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_89966A78:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r30,2816
	ctx.r11.s64 = ctx.r30.s64 + 2816;
	// addi r9,r30,1184
	ctx.r9.s64 = ctx.r30.s64 + 1184;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r6,r6,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x89935610
	ctx.lr = 0x89966ABC;
	sub_89935610(ctx, base);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// blt cr6,0x89966a78
	if (ctx.cr6.lt) goto loc_89966A78;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x89966a68
	if (ctx.cr6.lt) goto loc_89966A68;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89966a54
	if (ctx.cr6.lt) goto loc_89966A54;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r28,5
	ctx.r28.s64 = 5;
	// addi r10,r11,-30960
	ctx.r10.s64 = ctx.r11.s64 + -30960;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lbz r11,-30960(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -30960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89966b84
	if (ctx.cr6.eq) goto loc_89966B84;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_89966B18:
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// extsb r27,r11
	ctx.r27.s64 = ctx.r11.s8;
	// lbz r4,2(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,3(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// addi r6,r30,408
	ctx.r6.s64 = ctx.r30.s64 + 408;
	// lbzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// li r8,-20
	ctx.r8.s64 = -20;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,-20
	ctx.r7.s64 = -20;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89934fb8
	ctx.lr = 0x89966B64;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// add r7,r27,r9
	ctx.r7.u64 = ctx.r27.u64 + ctx.r9.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89966b18
	if (!ctx.cr6.eq) goto loc_89966B18;
loc_89966B84:
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// addi r9,r30,408
	ctx.r9.s64 = ctx.r30.s64 + 408;
	// addi r11,r30,568
	ctx.r11.s64 = ctx.r30.s64 + 568;
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r27,r10,3484
	ctx.r27.s64 = ctx.r10.s64 + 3484;
	// ble cr6,0x89966bd4
	if (!ctx.cr6.gt) goto loc_89966BD4;
	// rlwinm r7,r7,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xC0000000;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_89966BAC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x89966bac
	if (ctx.cr6.lt) goto loc_89966BAC;
loc_89966BD4:
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addi r29,r10,-30940
	ctx.r29.s64 = ctx.r10.s64 + -30940;
	// lbz r11,-30940(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + -30940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89966c60
	if (ctx.cr6.eq) goto loc_89966C60;
loc_89966BF4:
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// lbz r4,1(r29)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// extsb r26,r11
	ctx.r26.s64 = ctx.r11.s8;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,-384
	ctx.r9.s64 = ctx.r30.s64 + -384;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,-24
	ctx.r8.s64 = -24;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r7,-8
	ctx.r7.s64 = -8;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89934fb8
	ctx.lr = 0x89966C40;
	sub_89934FB8(ctx, base);
	// lbzu r11,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// add r7,r26,r9
	ctx.r7.u64 = ctx.r26.u64 + ctx.r9.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// bne cr6,0x89966bf4
	if (!ctx.cr6.eq) goto loc_89966BF4;
loc_89966C60:
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// addi r10,r30,-384
	ctx.r10.s64 = ctx.r30.s64 + -384;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x89966ca4
	if (!ctx.cr6.gt) goto loc_89966CA4;
	// rlwinm r8,r11,16,0,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xC0000000;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_89966C7C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r8,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// stw r27,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x89966c7c
	if (ctx.cr6.lt) goto loc_89966C7C;
loc_89966CA4:
	// stw r24,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// stw r24,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899704D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899704D8;
	__savegprlr_28(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r8,r11,164
	ctx.r8.s64 = ctx.r11.s64 + 164;
	// mulli r4,r9,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lhzx r3,r10,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r8,r4,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// addi r6,r9,128
	ctx.r6.s64 = ctx.r9.s64 + 128;
	// addi r7,r7,9016
	ctx.r7.s64 = ctx.r7.s64 + 9016;
	// rlwinm r6,r6,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addis r9,r8,48
	ctx.r9.s64 = ctx.r8.s64 + 3145728;
	// rlwinm r8,r3,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// lhzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// addi r31,r11,56
	ctx.r31.s64 = ctx.r11.s64 + 56;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r7,r8,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r8,r4,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// addi r29,r11,52
	ctx.r29.s64 = ctx.r11.s64 + 52;
	// mullw r28,r6,r9
	ctx.r28.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// srawi r3,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r28.s32 >> 8;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// mulli r7,r3,224
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(224));
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// mullw r3,r31,r9
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 + 52;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// stwx r6,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r6.u32);
	// addi r3,r11,69
	ctx.r3.s64 = ctx.r11.s64 + 69;
	// lwzx r9,r4,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r6,r11,69
	ctx.r6.s64 = ctx.r11.s64 + 69;
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// addi r8,r11,70
	ctx.r8.s64 = ctx.r11.s64 + 70;
	// lbzx r3,r4,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// addi r7,r11,70
	ctx.r7.s64 = ctx.r11.s64 + 70;
	// addi r9,r11,71
	ctx.r9.s64 = ctx.r11.s64 + 71;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// stbx r3,r10,r6
	REX_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r3.u8);
	// addi r6,r11,206
	ctx.r6.s64 = ctx.r11.s64 + 206;
	// lbzx r3,r4,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// addi r8,r11,71
	ctx.r8.s64 = ctx.r11.s64 + 71;
	// stbx r3,r10,r7
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r3.u8);
	// addi r7,r11,200
	ctx.r7.s64 = ctx.r11.s64 + 200;
	// lbzx r3,r4,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
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
	// lbzx r8,r4,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// and r9,r5,r12
	ctx.r9.u64 = ctx.r5.u64 & ctx.r12.u64;
	// stbx r3,r10,r6
	REX_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r3.u8);
	// lis r12,176
	ctx.r12.s64 = 11534336;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// lwzx r7,r4,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
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
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89974B50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89974B58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r8,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// addi r27,r30,164
	ctx.r27.s64 = ctx.r30.s64 + 164;
	// addi r26,r30,188
	ctx.r26.s64 = ctx.r30.s64 + 188;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lbzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stwx r7,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r7.u32);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x899757ec
	if (ctx.cr6.gt) goto loc_899757EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89974cd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89974CD0;
	// bdzf 4*cr6+eq,0x89974f18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89974F18;
	// bdzf 4*cr6+eq,0x89975018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89975018;
	// bdzf 4*cr6+eq,0x89975314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89975314;
	// bdzf 4*cr6+eq,0x89975404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89975404;
	// bne cr6,0x8997571c
	if (!ctx.cr6.eq) goto loc_8997571C;
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x89974cb4
	if (ctx.cr6.gt) goto loc_89974CB4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89974c00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89974C00;
	// bdzf 4*cr6+eq,0x89974c34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89974C34;
	// bne cr6,0x89974c64
	if (!ctx.cr6.eq) goto loc_89974C64;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,320
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 320, ctx.xer);
	// bgt cr6,0x89974cb4
	if (ctx.cr6.gt) goto loc_89974CB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x89974cb4
	goto loc_89974CB4;
loc_89974C00:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addic. r11,r11,-4096
	ctx.xer.ca = ctx.r11.u32 > 4095;
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bne 0x89974cb4
	if (!ctx.cr0.eq) goto loc_89974CB4;
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// li r10,255
	ctx.r10.s64 = 255;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x89936698
	ctx.lr = 0x89974C24;
	sub_89936698(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x89974cb4
	goto loc_89974CB4;
loc_89974C34:
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r9,252
	ctx.r9.s64 = ctx.r9.s64 + 252;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bgt cr6,0x89974cb4
	if (ctx.cr6.gt) goto loc_89974CB4;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x89974cb4
	goto loc_89974CB4;
loc_89974C64:
	// bl 0x899368b0
	ctx.lr = 0x89974C68;
	sub_899368B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89974cb4
	if (!ctx.cr6.eq) goto loc_89974CB4;
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stwx r28,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r28.u32);
	// addi r8,r30,44
	ctx.r8.s64 = ctx.r30.s64 + 44;
	// stbx r28,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u8);
	// rlwinm r7,r10,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r3,r4,r9
	ctx.r3.u64 = uint32_t((ctx.r9.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r4.s32 / ctx.r9.s32 : 0);
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// bl 0x899365d0
	ctx.lr = 0x89974CA8;
	sub_899365D0(ctx, base);
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u8);
loc_89974CB4:
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// stwx r28,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r28.u32);
	// addi r9,r30,69
	ctx.r9.s64 = ctx.r30.s64 + 69;
	// addi r10,r30,70
	ctx.r10.s64 = ctx.r30.s64 + 70;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x899757e8
	goto loc_899757E8;
loc_89974CD0:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bgt cr6,0x899757ec
	if (ctx.cr6.gt) goto loc_899757EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89974d6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89974D6C;
	// bdzf 4*cr6+eq,0x89974d94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89974D94;
	// bdzf 4*cr6+eq,0x89974e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89974E08;
	// bdzf 4*cr6+eq,0x89974e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89974E44;
	// bdzf 4*cr6+eq,0x89974e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89974E7C;
	// bne cr6,0x89974eb8
	if (!ctx.cr6.eq) goto loc_89974EB8;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r6,16838
	ctx.r6.s64 = 1103495168;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// ori r5,r6,20077
	ctx.r5.u64 = ctx.r6.u64 | 20077;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// lwz r11,-9212(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -9212);
	// lis r3,-30294
	ctx.r3.s64 = -1985347584;
	// stbx r4,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r4.u8);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r3,-22872
	ctx.r6.s64 = ctx.r3.s64 + -22872;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r7)
	REX_STORE_U32(ctx.r7.u32 + -9212, ctx.r11.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// addi r7,r30,182
	ctx.r7.s64 = ctx.r30.s64 + 182;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r5,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u8);
	// rlwinm r9,r11,17,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFF;
	// lbzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// stbx r5,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u8);
loc_89974D6C:
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8991d830
	ctx.lr = 0x89974D84;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89974D94:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x89974db0
	if (!ctx.cr6.lt) goto loc_89974DB0;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_89974DB0:
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
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// blt cr6,0x89974de4
	if (ctx.cr6.lt) goto loc_89974DE4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89974DE4:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8991d8e0
	ctx.lr = 0x89974DEC;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899757ec
	if (ctx.cr6.eq) goto loc_899757EC;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89974E08:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89974e24
	if (ctx.cr6.eq) goto loc_89974E24;
loc_89974E18:
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x899757ec
	goto loc_899757EC;
loc_89974E24:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// clrlwi r7,r9,28
	ctx.r7.u64 = ctx.r9.u32 & 0xF;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89974E44:
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
	// cmplwi cr6,r8,30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 30, ctx.xer);
	// blt cr6,0x899757ec
	if (ctx.cr6.lt) goto loc_899757EC;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// lbzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r3,r4,4
	ctx.r3.u64 = ctx.r4.u64 | 4;
	// stbx r3,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// b 0x899757e4
	goto loc_899757E4;
loc_89974E7C:
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
	// blt cr6,0x899757ec
	if (ctx.cr6.lt) goto loc_899757EC;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// rlwinm r3,r4,0,30,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stbx r3,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// b 0x899757e4
	goto loc_899757E4;
loc_89974EB8:
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
	// blt cr6,0x899757ec
	if (ctx.cr6.lt) goto loc_899757EC;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r7,3600
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3600, ctx.xer);
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// bgt cr6,0x89974f00
	if (ctx.cr6.gt) goto loc_89974F00;
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x89974f10
	if (!ctx.cr6.lt) goto loc_89974F10;
loc_89974F00:
	// bl 0x89936508
	ctx.lr = 0x89974F04;
	sub_89936508(ctx, base);
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u8);
loc_89974F10:
	// stbx r28,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89974F18:
	// addi r7,r30,189
	ctx.r7.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x899757ec
	if (ctx.cr6.gt) goto loc_899757EC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89974f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89974F6C;
	// bdzf 4*cr6+eq,0x89974f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89974F98;
	// bdzf 4*cr6+eq,0x89974fc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89974FC0;
	// bne cr6,0x89974ff0
	if (!ctx.cr6.eq) goto loc_89974FF0;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// oris r8,r9,8192
	ctx.r8.u64 = ctx.r9.u64 | 536870912;
	// stbx r6,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u8);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// lbzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// ori r11,r3,12
	ctx.r11.u64 = ctx.r3.u64 | 12;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89974F6C:
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r8,r10,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899757ec
	if (!ctx.cr6.eq) goto loc_899757EC;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// stbx r8,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89974F98:
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899757ec
	if (!ctx.cr6.eq) goto loc_899757EC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r30,71
	ctx.r10.s64 = ctx.r30.s64 + 71;
	// li r8,255
	ctx.r8.s64 = 255;
	// stbx r9,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u8);
	// b 0x899757e8
	goto loc_899757E8;
loc_89974FC0:
	// addi r10,r30,71
	ctx.r10.s64 = ctx.r30.s64 + 71;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r9,252
	ctx.r9.s64 = ctx.r9.s64 + 252;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bgt cr6,0x899757ec
	if (ctx.cr6.gt) goto loc_899757EC;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// stbx r8,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89974FF0:
	// bl 0x89936828
	ctx.lr = 0x89974FF4;
	sub_89936828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899757ec
	if (!ctx.cr6.eq) goto loc_899757EC;
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r28,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r28.u8);
	// stwx r28,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r28.u32);
	// stbx r10,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89975018:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x899757ec
	if (ctx.cr6.gt) goto loc_899757EC;
	// lis r12,-30313
	ctx.r12.s64 = -1986592768;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20548
	ctx.r12.s64 = ctx.r12.s64 + 20548;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_89975070;
	case 1:
		goto loc_899750A0;
	case 2:
		goto loc_899750D0;
	case 3:
		goto loc_899750F8;
	case 4:
		goto loc_89975138;
	case 5:
		goto loc_89975190;
	case 6:
		goto loc_899751B8;
	case 7:
		goto loc_899751F8;
	case 8:
		goto loc_89975238;
	case 9:
		goto loc_8997527C;
	case 10:
		goto loc_899752BC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89975070:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// li r8,-64
	ctx.r8.s64 = -64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lbzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stbx r6,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u8);
	// ori r8,r3,3
	ctx.r8.u64 = ctx.r3.u64 | 3;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_899750A0:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// cmplwi cr6,r8,60
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60, ctx.xer);
	// blt cr6,0x899757ec
	if (ctx.cr6.lt) goto loc_899757EC;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_899750D0:
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8991d830
	ctx.lr = 0x899750E8;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_899750F8:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x89975114
	if (!ctx.cr6.lt) goto loc_89975114;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_89975114:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8991d8e0
	ctx.lr = 0x8997511C;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899757ec
	if (ctx.cr6.eq) goto loc_899757EC;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89975138:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89975154
	if (ctx.cr6.eq) goto loc_89975154;
loc_89975148:
	// addi r11,r10,-4096
	ctx.r11.s64 = ctx.r10.s64 + -4096;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x899757ec
	goto loc_899757EC;
loc_89975154:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// blt cr6,0x89975184
	if (ctx.cr6.lt) goto loc_89975184;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89975184:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89975190:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8991d830
	ctx.lr = 0x899751A8;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_899751B8:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899751d4
	if (!ctx.cr6.lt) goto loc_899751D4;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899751D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8991d8e0
	ctx.lr = 0x899751DC;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899757ec
	if (ctx.cr6.eq) goto loc_899757EC;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_899751F8:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89975148
	if (!ctx.cr6.eq) goto loc_89975148;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// clrlwi r4,r7,26
	ctx.r4.u64 = ctx.r7.u32 & 0x3F;
	// rlwinm r3,r5,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// stbx r4,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u8);
	// stbx r3,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89975238:
	// addi r9,r30,183
	ctx.r9.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// cmplwi cr6,r8,30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 30, ctx.xer);
	// blt cr6,0x899757ec
	if (ctx.cr6.lt) goto loc_899757EC;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// li r8,-64
	ctx.r8.s64 = -64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stbx r6,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u8);
	// lbzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// or r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_8997527C:
	// addi r9,r30,183
	ctx.r9.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// blt cr6,0x899757ec
	if (ctx.cr6.lt) goto loc_899757EC;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r4,r6,26
	ctx.r4.u64 = ctx.r6.u32 & 0x3F;
	// stbx r4,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_899752BC:
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
	// blt cr6,0x899757ec
	if (ctx.cr6.lt) goto loc_899757EC;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r7,7200
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7200, ctx.xer);
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// bgt cr6,0x899752fc
	if (ctx.cr6.gt) goto loc_899752FC;
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89974f10
	if (ctx.cr6.eq) goto loc_89974F10;
loc_899752FC:
	// bl 0x89936508
	ctx.lr = 0x89975300;
	sub_89936508(ctx, base);
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// stbx r28,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89975314:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x899757ec
	if (ctx.cr6.gt) goto loc_899757EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89975364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89975364;
	// bdzf 4*cr6+eq,0x899753a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899753A0;
	// bne cr6,0x899753d0
	if (!ctx.cr6.eq) goto loc_899753D0;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x89936360
	ctx.lr = 0x89975344;
	sub_89936360(ctx, base);
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r6,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u8);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89975364:
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
	// cmplwi cr6,r8,120
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 120, ctx.xer);
	// blt cr6,0x899757ec
	if (ctx.cr6.lt) goto loc_899757EC;
	// addi r9,r30,71
	ctx.r9.s64 = ctx.r30.s64 + 71;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_899753A0:
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r9,252
	ctx.r9.s64 = ctx.r9.s64 + 252;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bgt cr6,0x899757ec
	if (ctx.cr6.gt) goto loc_899757EC;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_899753D0:
	// bl 0x89936828
	ctx.lr = 0x899753D4;
	sub_89936828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899757ec
	if (!ctx.cr6.eq) goto loc_899757EC;
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r28,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u8);
	// rlwinm r9,r10,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stwx r28,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r28.u32);
	// stbx r8,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u8);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// b 0x899757ec
	goto loc_899757EC;
loc_89975404:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r6,r31,r29
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 7, ctx.xer);
	// bgt cr6,0x899757ec
	if (ctx.cr6.gt) goto loc_899757EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997549c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997549C;
	// bdzf 4*cr6+eq,0x899754d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899754D0;
	// bdzf 4*cr6+eq,0x899754f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899754F8;
	// bdzf 4*cr6+eq,0x89975558
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89975558;
	// bdzf 4*cr6+eq,0x8997558c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997558C;
	// bdzf 4*cr6+eq,0x89975680
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89975680;
	// bne cr6,0x899756dc
	if (!ctx.cr6.eq) goto loc_899756DC;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// lis r5,-30294
	ctx.r5.s64 = -1985347584;
	// ori r4,r7,20077
	ctx.r4.u64 = ctx.r7.u64 | 20077;
	// addi r3,r5,-22868
	ctx.r3.s64 = ctx.r5.s64 + -22868;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// addi r10,r30,194
	ctx.r10.s64 = ctx.r30.s64 + 194;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// addi r9,r30,182
	ctx.r9.s64 = ctx.r30.s64 + 182;
	// stbx r4,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r4.u8);
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// lbzx r3,r8,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// or r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_8997549C:
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
	// blt cr6,0x899757ec
	if (ctx.cr6.lt) goto loc_899757EC;
loc_899754B8:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_899754D0:
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,208
	ctx.r4.s64 = 208;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8991d830
	ctx.lr = 0x899754E8;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_899754F8:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x89975518
	if (!ctx.cr6.lt) goto loc_89975518;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_89975518:
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
	// bge cr6,0x899754b8
	if (!ctx.cr6.lt) goto loc_899754B8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8991d8e0
	ctx.lr = 0x8997553C;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899757ec
	if (ctx.cr6.eq) goto loc_899757EC;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89975558:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89974e18
	if (!ctx.cr6.eq) goto loc_89974E18;
	// addi r11,r30,194
	ctx.r11.s64 = ctx.r30.s64 + 194;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// clrlwi r7,r9,26
	ctx.r7.u64 = ctx.r9.u32 & 0x3F;
	// rlwinm r7,r7,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_8997558C:
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
	// blt cr6,0x899757ec
	if (ctx.cr6.lt) goto loc_899757EC;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// ori r7,r8,20077
	ctx.r7.u64 = ctx.r8.u64 | 20077;
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
	// clrlwi r11,r4,17
	ctx.r11.u64 = ctx.r4.u32 & 0x7FFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 17) & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89975618
	if (ctx.cr6.lt) goto loc_89975618;
	// beq cr6,0x8997564c
	if (ctx.cr6.eq) goto loc_8997564C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x89975608
	if (!ctx.cr6.lt) goto loc_89975608;
loc_899755F8:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
loc_89975608:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89975618:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,232
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 232, ctx.xer);
	// bge cr6,0x8997564c
	if (!ctx.cr6.lt) goto loc_8997564C;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_8997564C:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bge cr6,0x899755f8
	if (!ctx.cr6.lt) goto loc_899755F8;
	// addi r11,r30,194
	ctx.r11.s64 = ctx.r30.s64 + 194;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r8,r9,3
	ctx.r8.u64 = ctx.r9.u64 | 3;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_89975680:
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
	// cmplwi cr6,r10,240
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 240, ctx.xer);
	// blt cr6,0x899757ec
	if (ctx.cr6.lt) goto loc_899757EC;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,194
	ctx.r11.s64 = ctx.r30.s64 + 194;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// lbzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// stbx r6,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u8);
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// rlwinm r6,r8,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r5,r7,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_899756DC:
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
	// cmplwi cr6,r8,60
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60, ctx.xer);
	// blt cr6,0x899757ec
	if (ctx.cr6.lt) goto loc_899757EC;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r7,10800
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 10800, ctx.xer);
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// ble cr6,0x89975714
	if (!ctx.cr6.gt) goto loc_89975714;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u8);
loc_89975714:
	// stbx r28,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_8997571C:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899757bc
	if (ctx.cr6.lt) goto loc_899757BC;
	// beq cr6,0x899757a0
	if (ctx.cr6.eq) goto loc_899757A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x899757ec
	if (!ctx.cr6.lt) goto loc_899757EC;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8997575c
	if (ctx.cr6.eq) goto loc_8997575C;
	// addi r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 + 168;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8997575C:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,-256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -256, ctx.xer);
	// bgt cr6,0x899757ec
	if (ctx.cr6.gt) goto loc_899757EC;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// lbz r9,32555(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 32555);
	// lbz r11,12342(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 12342);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stb r5,32555(r8)
	REX_STORE_U8(ctx.r8.u32 + 32555, ctx.r5.u8);
	// stb r4,12342(r7)
	REX_STORE_U8(ctx.r7.u32 + 12342, ctx.r4.u8);
	// bl 0x8995e188
	ctx.lr = 0x8997579C;
	sub_8995E188(ctx, base);
	// b 0x899757ec
	goto loc_899757EC;
loc_899757A0:
	// bl 0x89936938
	ctx.lr = 0x899757A4;
	sub_89936938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899757ec
	if (!ctx.cr6.eq) goto loc_899757EC;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899757ec
	goto loc_899757EC;
loc_899757BC:
	// bl 0x89936760
	ctx.lr = 0x899757C0;
	sub_89936760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899757ec
	if (ctx.cr6.eq) goto loc_899757EC;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// li r8,23
	ctx.r8.s64 = 23;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sthx r6,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u16);
loc_899757E4:
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
loc_899757E8:
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
loc_899757EC:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r8,r30,172
	ctx.r8.s64 = ctx.r30.s64 + 172;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,9016
	ctx.r10.s64 = ctx.r10.s64 + 9016;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r29,r30,56
	ctx.r29.s64 = ctx.r30.s64 + 56;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// lwzx r3,r31,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r28,r11,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r27,r5,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lwzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lwzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// lhzx r5,r28,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r10.u32);
	// lhzx r10,r27,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r10.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mullw r9,r5,r11
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// stwx r5,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899841A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899841A8;
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
	ctx.lr = 0x899841BC;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89984498
	if (ctx.cr6.eq) goto loc_89984498;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x8991b880
	ctx.lr = 0x899841CC;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89984498
	if (ctx.cr6.eq) goto loc_89984498;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r25,r10,-4592
	ctx.r25.s64 = ctx.r10.s64 + -4592;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lis r11,-8016
	ctx.r11.s64 = -525336576;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lhz r26,0(r25)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// li r27,0
	ctx.r27.s64 = 0;
	// extsh r7,r26
	ctx.r7.s64 = ctx.r26.s16;
	// clrlwi r24,r30,16
	ctx.r24.u64 = ctx.r30.u32 & 0xFFFF;
	// mulli r29,r7,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stwx r27,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r27.u32);
	// stwx r27,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r27.u32);
	// stwx r24,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r24.u32);
	// ori r6,r11,33028
	ctx.r6.u64 = ctx.r11.u64 | 33028;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r6,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r6.u32);
	// bl 0x8991b538
	ctx.lr = 0x8998422C;
	sub_8991B538(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lis r5,384
	ctx.r5.s64 = 25165824;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r5,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x89915d78
	ctx.lr = 0x89984240;
	sub_89915D78(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991c578
	ctx.lr = 0x89984248;
	sub_8991C578(ctx, base);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// li r9,113
	ctx.r9.s64 = 113;
	// addi r4,r31,158
	ctx.r4.s64 = ctx.r31.s64 + 158;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// stbx r9,r29,r10
	REX_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r9.u8);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// li r7,256
	ctx.r7.s64 = 256;
	// stbx r27,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r27.u8);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// sthx r7,r29,r4
	REX_STORE_U16(ctx.r29.u32 + ctx.r4.u32, ctx.r7.u16);
	// stwx r8,r29,r3
	REX_STORE_U32(ctx.r29.u32 + ctx.r3.u32, ctx.r8.u32);
	// addi r30,r10,-16968
	ctx.r30.s64 = ctx.r10.s64 + -16968;
	// b 0x8998428c
	goto loc_8998428C;
loc_89984284:
	// lwz r24,80(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r25,84(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8998428C:
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// addi r7,r25,2
	ctx.r7.s64 = ctx.r25.s64 + 2;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// rlwinm r23,r8,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// lhzx r22,r9,r7
	ctx.r22.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// addi r4,r31,150
	ctx.r4.s64 = ctx.r31.s64 + 150;
	// extsh r8,r22
	ctx.r8.s64 = ctx.r22.s16;
	// lhzx r10,r23,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mulli r21,r8,208
	ctx.r21.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r23,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r30.u32);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// lwzx r10,r23,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r6.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// oris r7,r7,49152
	ctx.r7.u64 = ctx.r7.u64 | 3221225472;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// ori r7,r7,256
	ctx.r7.u64 = ctx.r7.u64 | 256;
	// lhzx r8,r8,r25
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r25.u32);
	// sthx r26,r21,r4
	REX_STORE_U16(ctx.r21.u32 + ctx.r4.u32, ctx.r26.u16);
	// stwx r7,r21,r31
	REX_STORE_U32(ctx.r21.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r24,r21,r11
	REX_STORE_U32(ctx.r21.u32 + ctx.r11.u32, ctx.r24.u32);
	// stwx r10,r21,r9
	REX_STORE_U32(ctx.r21.u32 + ctx.r9.u32, ctx.r10.u32);
	// sthx r8,r21,r5
	REX_STORE_U16(ctx.r21.u32 + ctx.r5.u32, ctx.r8.u16);
	// stwx r27,r21,r6
	REX_STORE_U32(ctx.r21.u32 + ctx.r6.u32, ctx.r27.u32);
	// bl 0x8991b538
	ctx.lr = 0x8998430C;
	sub_8991B538(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991c578
	ctx.lr = 0x89984314;
	sub_8991C578(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// std r30,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// addi r6,r30,14
	ctx.r6.s64 = ctx.r30.s64 + 14;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// lhzx r10,r23,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r7.u32);
	// addi r18,r30,18
	ctx.r18.s64 = ctx.r30.s64 + 18;
	// lhzx r8,r23,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r6.u32);
	// addi r17,r30,20
	ctx.r17.s64 = ctx.r30.s64 + 20;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// lbzx r5,r23,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r5.u32);
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r25,r31,158
	ctx.r25.s64 = ctx.r31.s64 + 158;
	// lhzx r18,r23,r18
	ctx.r18.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r18.u32);
	// addi r24,r31,160
	ctx.r24.s64 = ctx.r31.s64 + 160;
	// lbzx r17,r23,r17
	ctx.r17.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r17.u32);
	// addi r16,r30,17
	ctx.r16.s64 = ctx.r30.s64 + 17;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r22,r31,207
	ctx.r22.s64 = ctx.r31.s64 + 207;
	// addi r20,r31,207
	ctx.r20.s64 = ctx.r31.s64 + 207;
	// addi r19,r31,206
	ctx.r19.s64 = ctx.r31.s64 + 206;
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lbzx r23,r23,r16
	ctx.r23.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r16.u32);
	// li r15,256
	ctx.r15.s64 = 256;
	// lwzx r14,r29,r11
	ctx.r14.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// addi r16,r31,204
	ctx.r16.s64 = ctx.r31.s64 + 204;
	// stwx r14,r21,r4
	REX_STORE_U32(ctx.r21.u32 + ctx.r4.u32, ctx.r14.u32);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// lwzx r3,r29,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// addi r14,r31,66
	ctx.r14.s64 = ctx.r31.s64 + 66;
	// stwx r3,r21,r9
	REX_STORE_U32(ctx.r21.u32 + ctx.r9.u32, ctx.r3.u32);
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// stwx r10,r21,r7
	REX_STORE_U32(ctx.r21.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r8,r21,r6
	REX_STORE_U32(ctx.r21.u32 + ctx.r6.u32, ctx.r8.u32);
	// sthx r15,r21,r25
	REX_STORE_U16(ctx.r21.u32 + ctx.r25.u32, ctx.r15.u16);
	// sthx r27,r21,r24
	REX_STORE_U16(ctx.r21.u32 + ctx.r24.u32, ctx.r27.u16);
	// lbzx r8,r29,r22
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r22.u32);
	// stbx r8,r21,r20
	REX_STORE_U8(ctx.r21.u32 + ctx.r20.u32, ctx.r8.u8);
	// stbx r5,r21,r19
	REX_STORE_U8(ctx.r21.u32 + ctx.r19.u32, ctx.r5.u8);
	// lbzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// stbx r5,r21,r30
	REX_STORE_U8(ctx.r21.u32 + ctx.r30.u32, ctx.r5.u8);
	// lbzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,44
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 44, ctx.xer);
	// ld r30,96(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stbx r10,r21,r16
	REX_STORE_U8(ctx.r21.u32 + ctx.r16.u32, ctx.r10.u8);
	// sthx r18,r21,r4
	REX_STORE_U16(ctx.r21.u32 + ctx.r4.u32, ctx.r18.u16);
	// stbx r17,r21,r14
	REX_STORE_U8(ctx.r21.u32 + ctx.r14.u32, ctx.r17.u8);
	// stbx r23,r21,r9
	REX_STORE_U8(ctx.r21.u32 + ctx.r9.u32, ctx.r23.u8);
	// blt cr6,0x89984284
	if (ctx.cr6.lt) goto loc_89984284;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x89934058
	ctx.lr = 0x89984418;
	sub_89934058(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x899340e8
	ctx.lr = 0x89984420;
	sub_899340E8(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x899340e8
	ctx.lr = 0x89984428;
	sub_899340E8(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x899340e8
	ctx.lr = 0x89984430;
	sub_899340E8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x899340e8
	ctx.lr = 0x89984438;
	sub_899340E8(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x899340e8
	ctx.lr = 0x89984440;
	sub_899340E8(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x899340e8
	ctx.lr = 0x89984448;
	sub_899340E8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x899340e8
	ctx.lr = 0x89984450;
	sub_899340E8(ctx, base);
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x89934058
	ctx.lr = 0x89984458;
	sub_89934058(ctx, base);
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x89934058
	ctx.lr = 0x89984460;
	sub_89934058(ctx, base);
	// li r3,43
	ctx.r3.s64 = 43;
	// bl 0x89934058
	ctx.lr = 0x89984468;
	sub_89934058(ctx, base);
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x89934058
	ctx.lr = 0x89984470;
	sub_89934058(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934058
	ctx.lr = 0x89984478;
	sub_89934058(ctx, base);
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
loc_89984498:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899855E8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899855F0;
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
	// addi r8,r11,71
	ctx.r8.s64 = ctx.r11.s64 + 71;
	// lbzx r4,r6,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// addi r5,r11,206
	ctx.r5.s64 = ctx.r11.s64 + 206;
	// stbx r4,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r4.u8);
	// addi r30,r11,71
	ctx.r30.s64 = ctx.r11.s64 + 71;
	// lis r12,-24753
	ctx.r12.s64 = -1622212608;
	// lbzx r3,r6,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// stbx r3,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u8);
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r9,r6,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// lbzx r8,r10,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// stbx r9,r10,r30
	REX_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u8);
	// lbzx r9,r6,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// lis r12,24752
	ctx.r12.s64 = 1622147072;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
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
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// rlwinm r3,r8,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899858D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899858D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x89985958
	if (ctx.cr6.lt) goto loc_89985958;
	// bne cr6,0x89985984
	if (!ctx.cr6.eq) goto loc_89985984;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// mulli r6,r7,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lwzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r8,-15800
	ctx.r8.s64 = ctx.r8.s64 + -15800;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r8,2
	ctx.r31.s64 = ctx.r8.s64 + 2;
	// addi r5,r11,56
	ctx.r5.s64 = ctx.r11.s64 + 56;
	// addi r30,r11,60
	ctx.r30.s64 = ctx.r11.s64 + 60;
	// addi r29,r11,206
	ctx.r29.s64 = ctx.r11.s64 + 206;
	// lhzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// li r7,255
	ctx.r7.s64 = 255;
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// stwx r8,r6,r5
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// stbx r7,r6,r29
	REX_STORE_U8(ctx.r6.u32 + ctx.r29.u32, ctx.r7.u8);
	// rotlwi r8,r9,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// stwx r8,r6,r30
	REX_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r8.u32);
	// b 0x89985984
	goto loc_89985984;
loc_89985958:
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r7,r11,60
	ctx.r7.s64 = ctx.r11.s64 + 60;
	// addi r6,r11,206
	ctx.r6.s64 = ctx.r11.s64 + 206;
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// lis r10,-48
	ctx.r10.s64 = -3145728;
	// li r31,0
	ctx.r31.s64 = 0;
	// stwx r5,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r5.u32);
	// stwx r10,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// stbx r31,r8,r6
	REX_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r31.u8);
loc_89985984:
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r9,r11,192
	ctx.r9.s64 = ctx.r11.s64 + 192;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// bne cr6,0x899859ac
	if (!ctx.cr6.eq) goto loc_899859AC;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
loc_899859AC:
	// bl 0x899855e8
	ctx.lr = 0x899859B0;
	sub_899855E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89989850) {
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
	// lis r11,-30230
	ctx.r11.s64 = -1981153280;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r31,r11,26616
	ctx.r31.s64 = ctx.r11.s64 + 26616;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// addi r8,r31,400
	ctx.r8.s64 = ctx.r31.s64 + 400;
	// stb r9,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// li r10,192
	ctx.r10.s64 = 192;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934b48
	ctx.lr = 0x899898A4;
	sub_89934B48(ctx, base);
	// addi r11,r31,400
	ctx.r11.s64 = ctx.r31.s64 + 400;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r11,288
	ctx.r6.s64 = ctx.r11.s64 + 288;
	// li r5,192
	ctx.r5.s64 = 192;
	// sth r7,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r7.u16);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r5,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89934b48
	ctx.lr = 0x899898E4;
	sub_89934B48(ctx, base);
	// lis r4,-30304
	ctx.r4.s64 = -1986002944;
	// addi r5,r31,400
	ctx.r5.s64 = ctx.r31.s64 + 400;
	// addi r6,r4,-8888
	ctx.r6.s64 = ctx.r4.s64 + -8888;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x89989900;
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

DEFINE_REX_FUNC(sub_89989A00) {
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
	ctx.lr = 0x89989A18;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89989a30
	if (!ctx.cr6.eq) goto loc_89989A30;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_89989A30:
	// lis r11,-30311
	ctx.r11.s64 = -1986461696;
	// addi r3,r11,-26344
	ctx.r3.s64 = ctx.r11.s64 + -26344;
	// bl 0x89915de0
	ctx.lr = 0x89989A3C;
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

DEFINE_REX_FUNC(sub_89989E00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89989E08;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30230
	ctx.r11.s64 = -1981153280;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,28144
	ctx.r31.s64 = ctx.r11.s64 + 28144;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// addi r8,r31,784
	ctx.r8.s64 = ctx.r31.s64 + 784;
	// li r10,176
	ctx.r10.s64 = 176;
	// sth r11,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-28
	ctx.r9.s64 = -28;
	// li r8,-40
	ctx.r8.s64 = -40;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934b48
	ctx.lr = 0x89989E50;
	sub_89934B48(ctx, base);
	// addi r7,r31,928
	ctx.r7.s64 = ctx.r31.s64 + 928;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r9,72
	ctx.r9.s64 = 72;
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x89989E84;
	sub_89934FB8(ctx, base);
	// lis r9,-30304
	ctx.r9.s64 = -1986002944;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r29,r9,-8952
	ctx.r29.s64 = ctx.r9.s64 + -8952;
	// addi r28,r11,3484
	ctx.r28.s64 = ctx.r11.s64 + 3484;
loc_89989E9C:
	// rlwinm r26,r10,15,1,16
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF8000;
	// addi r10,r31,-816
	ctx.r10.s64 = ctx.r31.s64 + -816;
	// mulli r11,r30,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(108));
	// clrlwi r9,r26,16
	ctx.r9.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r6,r29,-52
	ctx.r6.s64 = ctx.r29.s64 + -52;
	// addi r5,r31,784
	ctx.r5.s64 = ctx.r31.s64 + 784;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r3,r9,8
	ctx.r3.u64 = ctx.r9.u64 | 8;
	// bl 0x89935610
	ctx.lr = 0x89989EC4;
	sub_89935610(ctx, base);
	// clrlwi r8,r26,16
	ctx.r8.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r7,r31,1088
	ctx.r7.s64 = ctx.r31.s64 + 1088;
	// ori r9,r8,16
	ctx.r9.u64 = ctx.r8.u64 | 16;
	// mulli r11,r30,204
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(204));
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r31,928
	ctx.r10.s64 = ctx.r31.s64 + 928;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x89989f18
	if (!ctx.cr6.gt) goto loc_89989F18;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_89989EF0:
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
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x89989ef0
	if (ctx.cr6.lt) goto loc_89989EF0;
loc_89989F18:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89989e9c
	if (ctx.cr6.lt) goto loc_89989E9C;
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r31,-600
	ctx.r11.s64 = ctx.r31.s64 + -600;
	// sth r8,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// li r10,216
	ctx.r10.s64 = 216;
	// li r9,-20
	ctx.r9.s64 = -20;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x89934b48
	ctx.lr = 0x89989F6C;
	sub_89934B48(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r31,-600
	ctx.r5.s64 = ctx.r31.s64 + -600;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935b08
	ctx.lr = 0x89989F84;
	sub_89935B08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998A0D0) {
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
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lwz r11,7924(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 7924);
	// lhz r3,26864(r8)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + 26864);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r9)
	REX_STORE_U32(ctx.r9.u32 + 7924, ctx.r11.u32);
	// sth r10,12272(r7)
	REX_STORE_U16(ctx.r7.u32 + 12272, ctx.r10.u16);
	// bl 0x89934058
	ctx.lr = 0x8998A104;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8998a11c
	if (!ctx.cr6.eq) goto loc_8998A11C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8998A11C:
	// lis r11,-30311
	ctx.r11.s64 = -1986461696;
	// addi r3,r11,-24688
	ctx.r3.s64 = ctx.r11.s64 + -24688;
	// bl 0x89915de0
	ctx.lr = 0x8998A128;
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

DEFINE_REX_FUNC(sub_8998A1F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x8998A1F8;
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
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r25,r31,r9
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// bgt cr6,0x8998a7f8
	if (ctx.cr6.gt) goto loc_8998A7F8;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8998a238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998A238;
	// bdzf 4*cr6+eq,0x8998a3f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998A3F4;
	// bdzf 4*cr6+eq,0x8998a3f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8998A3F4;
	// bne cr6,0x8998a6bc
	if (!ctx.cr6.eq) goto loc_8998A6BC;
loc_8998A238:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r26,r30,56
	ctx.r26.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r27,r31,r26
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// add r7,r9,r27
	ctx.r7.u64 = ctx.r9.u64 + ctx.r27.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addic. r11,r5,-160
	ctx.xer.ca = ctx.r5.u32 > 159;
	ctx.r11.s64 = ctx.r5.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r4,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// bge 0x8998a27c
	if (!ctx.cr0.lt) goto loc_8998A27C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8998A27C:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// ble cr6,0x8998a294
	if (!ctx.cr6.gt) goto loc_8998A294;
loc_8998A284:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8998A294:
	// lhzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r11,r10,-512
	ctx.xer.ca = ctx.r10.u32 > 511;
	ctx.r11.s64 = ctx.r10.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8998a2a8
	if (!ctx.cr0.lt) goto loc_8998A2A8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8998A2A8:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x8998a284
	if (ctx.cr6.gt) goto loc_8998A284;
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// addi r7,r30,188
	ctx.r7.s64 = ctx.r30.s64 + 188;
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r28,r30,32
	ctx.r28.s64 = ctx.r30.s64 + 32;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// lbzx r8,r31,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r24,0(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r24,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r24.u32);
	// lwz r24,4(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r24,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r24.u32);
	// lwz r24,4(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r24,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r24.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// blt cr6,0x8998a374
	if (ctx.cr6.lt) goto loc_8998A374;
	// beq cr6,0x8998a350
	if (ctx.cr6.eq) goto loc_8998A350;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bge cr6,0x8998a3b0
	if (!ctx.cr6.lt) goto loc_8998A3B0;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// blt cr6,0x8998a344
	if (ctx.cr6.lt) goto loc_8998A344;
	// bne cr6,0x8998a3b0
	if (!ctx.cr6.eq) goto loc_8998A3B0;
	// addi r11,r27,2048
	ctx.r11.s64 = ctx.r27.s64 + 2048;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// b 0x8998a3b0
	goto loc_8998A3B0;
loc_8998A344:
	// addi r11,r27,-2048
	ctx.r11.s64 = ctx.r27.s64 + -2048;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// b 0x8998a3b0
	goto loc_8998A3B0;
loc_8998A350:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8998a3b0
	if (!ctx.cr6.eq) goto loc_8998A3B0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// b 0x8998a3b0
	goto loc_8998A3B0;
loc_8998A374:
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// blt cr6,0x8998a388
	if (ctx.cr6.lt) goto loc_8998A388;
	// bne cr6,0x8998a394
	if (!ctx.cr6.eq) goto loc_8998A394;
	// addic. r11,r27,-2048
	ctx.xer.ca = ctx.r27.u32 > 2047;
	ctx.r11.s64 = ctx.r27.s64 + -2048;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8998a38c
	goto loc_8998A38C;
loc_8998A388:
	// addic. r11,r27,2048
	ctx.xer.ca = ctx.r27.u32 > 4294965247;
	ctx.r11.s64 = ctx.r27.s64 + 2048;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8998A38C:
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// bne 0x8998a7f8
	if (!ctx.cr0.eq) goto loc_8998A7F8;
loc_8998A394:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r9,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u8);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
loc_8998A3B0:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8998A3F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8998A3FC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8998a418
	if (!ctx.cr6.lt) goto loc_8998A418;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8998A40C:
	// bl 0x8998a138
	ctx.lr = 0x8998A410;
	sub_8998A138(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8998A418:
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwzx r9,r8,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stwx r9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8998a640
	if (ctx.cr6.eq) goto loc_8998A640;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x8998a50c
	if (ctx.cr6.eq) goto loc_8998A50C;
	// addi r9,r30,183
	ctx.r9.s64 = ctx.r30.s64 + 183;
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bne cr6,0x8998a7f8
	if (!ctx.cr6.eq) goto loc_8998A7F8;
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// lhzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// add. r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u32);
	// bne 0x8998a7f8
	if (!ctx.cr0.eq) goto loc_8998A7F8;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r7,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8998A50C:
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lbzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8998a5f0
	if (ctx.cr6.lt) goto loc_8998A5F0;
	// beq cr6,0x8998a5ac
	if (ctx.cr6.eq) goto loc_8998A5AC;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x8998a7f8
	if (!ctx.cr6.lt) goto loc_8998A7F8;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8998a7f8
	if (!ctx.cr6.eq) goto loc_8998A7F8;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r6,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u8);
	// addi r9,r30,20
	ctx.r9.s64 = ctx.r30.s64 + 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r30,36
	ctx.r8.s64 = ctx.r30.s64 + 36;
	// addi r7,r30,32
	ctx.r7.s64 = ctx.r30.s64 + 32;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
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
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8998A5AC:
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
	// bne cr6,0x8998a7f8
	if (!ctx.cr6.eq) goto loc_8998A7F8;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
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
loc_8998A5F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x899cfa40
	ctx.lr = 0x8998A614;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8998a7f8
	if (ctx.cr6.eq) goto loc_8998A7F8;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// li r9,129
	ctx.r9.s64 = 129;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8998A640:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8998a7f8
	if (ctx.cr6.eq) goto loc_8998A7F8;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u16);
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_8998A6BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991ba70
	ctx.lr = 0x8998A6C4;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998a40c
	if (ctx.cr6.lt) goto loc_8998A40C;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// addi r6,r30,60
	ctx.r6.s64 = ctx.r30.s64 + 60;
	// addi r23,r30,48
	ctx.r23.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r24,r30,52
	ctx.r24.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// stwx r4,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r4.u32);
	// lwzx r11,r9,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r11.u32);
	// bl 0x89932b18
	ctx.lr = 0x8998A714;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932d30
	ctx.lr = 0x8998A720;
	sub_89932D30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x8998A728;
	sub_8991B7F8(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x8998A738;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998a7f8
	if (ctx.cr6.eq) goto loc_8998A7F8;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// addi r11,r9,-15464
	ctx.r11.s64 = ctx.r9.s64 + -15464;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r30,r11,-2
	ctx.r30.s64 = ctx.r11.s64 + -2;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r27,r7
	ctx.r27.s64 = ctx.r7.s16;
	// rlwinm r25,r27,1,22,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x3FE;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_8998A770:
	// addi r10,r26,128
	ctx.r10.s64 = ctx.r26.s64 + 128;
	// lhz r9,2(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// rlwinm r6,r10,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r25,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r28.u32);
	// rotlwi r4,r11,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lwzx r8,r31,r24
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// rotlwi r3,r9,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lwzx r9,r31,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// srawi r10,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 4;
	// lhzx r4,r6,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// mullw r4,r10,r3
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// mullw r22,r11,r5
	ctx.r22.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r3,r3,r11
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// mullw r5,r10,r5
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// srawi r10,r22,8
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r22.s32 >> 8;
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r8,r10,224
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(224));
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// li r3,7
	ctx.r3.s64 = 7;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x899cb940
	ctx.lr = 0x8998A7F0;
	sub_899CB940(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8998a770
	if (!ctx.cr0.eq) goto loc_8998A770;
loc_8998A7F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998D8D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x8998D8E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,43
	ctx.r3.s64 = 43;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x89934058
	ctx.lr = 0x8998D8FC;
	sub_89934058(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8991b880
	ctx.lr = 0x8998D90C;
	sub_8991B880(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// or r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 | ctx.r31.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8998d92c
	if (ctx.cr6.eq) goto loc_8998D92C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_8998D92C:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-16208
	ctx.r9.s64 = -1062207488;
	// addi r31,r10,12800
	ctx.r31.s64 = ctx.r10.s64 + 12800;
	// ori r4,r9,260
	ctx.r4.u64 = ctx.r9.u64 | 260;
	// lhz r29,-4592(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// extsh r6,r29
	ctx.r6.s64 = ctx.r29.s16;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mulli r30,r6,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// stwx r24,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r24.u32);
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// li r11,43
	ctx.r11.s64 = 43;
	// li r28,0
	ctx.r28.s64 = 0;
	// stwx r11,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r28,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r28.u32);
	// bl 0x8991b538
	ctx.lr = 0x8998D978;
	sub_8991B538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c578
	ctx.lr = 0x8998D980;
	sub_8991C578(ctx, base);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,162
	ctx.r6.s64 = ctx.r31.s64 + 162;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// stwx r26,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r26.u32);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// sthx r28,r30,r6
	REX_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r28.u16);
	// addi r7,r31,158
	ctx.r7.s64 = ctx.r31.s64 + 158;
	// addi r6,r31,44
	ctx.r6.s64 = ctx.r31.s64 + 44;
	// stwx r25,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r25.u32);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// stwx r28,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r28.u32);
	// addi r8,r31,168
	ctx.r8.s64 = ctx.r31.s64 + 168;
	// stbx r27,r30,r3
	REX_STORE_U8(ctx.r30.u32 + ctx.r3.u32, ctx.r27.u8);
	// stbx r27,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r27.u8);
	// li r10,256
	ctx.r10.s64 = 256;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// sthx r10,r30,r7
	REX_STORE_U16(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u16);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// stwx r11,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u32);
	// lis r3,-2
	ctx.r3.s64 = -131072;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// ori r6,r3,32768
	ctx.r6.u64 = ctx.r3.u64 | 32768;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// li r7,7
	ctx.r7.s64 = 7;
	// stwx r6,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r6.u32);
	// li r3,75
	ctx.r3.s64 = 75;
	// stwx r4,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r4.u32);
	// stbx r7,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u8);
	// stwx r10,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x89936360
	ctx.lr = 0x8998DA0C;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998DE38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x8998DE40;
	__savegprlr_25(ctx, base);
	// stwu r1,-2288(r1)
	ea = -2288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,992
	ctx.r11.s64 = ctx.r1.s64 + 992;
	// li r31,6
	ctx.r31.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,216
	ctx.r9.s64 = 216;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,-20
	ctx.r7.s64 = -20;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934860
	ctx.lr = 0x8998DE78;
	sub_89934860(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,216
	ctx.r9.s64 = 216;
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
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x89934860
	ctx.lr = 0x8998DEA8;
	sub_89934860(ctx, base);
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r9,88
	ctx.r9.s64 = 88;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-28
	ctx.r7.s64 = -28;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x899352b8
	ctx.lr = 0x8998DEDC;
	sub_899352B8(ctx, base);
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// lis r10,-30229
	ctx.r10.s64 = -1981087744;
	// lis r9,-30229
	ctx.r9.s64 = -1981087744;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,-12484
	ctx.r26.s64 = ctx.r11.s64 + -12484;
	// addi r29,r10,-2584
	ctx.r29.s64 = ctx.r10.s64 + -2584;
	// addi r30,r9,-280
	ctx.r30.s64 = ctx.r9.s64 + -280;
loc_8998DEF8:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_8998DF04:
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,992
	ctx.r8.s64 = ctx.r1.s64 + 992;
	// li r9,9
	ctx.r9.s64 = 9;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8998DF44:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x8998df44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8998DF44;
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lhz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// lhz r7,10(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// lhz r5,12(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 12);
	// lhz r4,14(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// sth r3,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r3.u16);
	// sth r7,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// sth r5,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r5.u16);
	// sth r4,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r4.u16);
	// blt cr6,0x8998df04
	if (ctx.cr6.lt) goto loc_8998DF04;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mulli r10,r31,90
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(90));
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// li r7,9
	ctx.r7.s64 = 9;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8998DFB8:
	// lhzu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r7,2(r6)
	ea = 2 + ctx.r6.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x8998dfb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8998DFB8;
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// lhz r3,10(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// addi r6,r26,-656
	ctx.r6.s64 = ctx.r26.s64 + -656;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lhz r28,12(r9)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r9.u32 + 12);
	// lhz r27,14(r9)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// sth r4,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r4.u16);
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// sth r3,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r3.u16);
	// add r4,r9,r29
	ctx.r4.u64 = ctx.r9.u64 + ctx.r29.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// sth r28,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r28.u16);
	// sth r27,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r27.u16);
	// bl 0x89935610
	ctx.lr = 0x8998E008;
	sub_89935610(ctx, base);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,17
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 17, ctx.xer);
	// blt cr6,0x8998def8
	if (ctx.cr6.lt) goto loc_8998DEF8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8998E020:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_8998E02C:
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r30,1530
	ctx.r11.s64 = ctx.r30.s64 + 1530;
	// addi r7,r1,2072
	ctx.r7.s64 = ctx.r1.s64 + 2072;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,9
	ctx.r9.s64 = 9;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8998E070:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x8998e070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8998E070;
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r1,722
	ctx.r9.s64 = ctx.r1.s64 + 722;
	// add r6,r31,r8
	ctx.r6.u64 = ctx.r31.u64 + ctx.r8.u64;
	// xori r7,r3,16384
	ctx.r7.u64 = ctx.r3.u64 ^ 16384;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lhz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// lhz r4,10(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// lhz r3,12(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 12);
	// lhz r7,14(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// sth r6,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r6.u16);
	// sth r4,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r4.u16);
	// sth r3,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r3.u16);
	// sth r7,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r7.u16);
	// blt cr6,0x8998e02c
	if (ctx.cr6.lt) goto loc_8998E02C;
	// addi r6,r1,366
	ctx.r6.s64 = ctx.r1.s64 + 366;
	// mulli r10,r31,90
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(90));
	// addi r11,r30,1602
	ctx.r11.s64 = ctx.r30.s64 + 1602;
	// li r7,9
	ctx.r7.s64 = 9;
	// subf r8,r8,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8998E0F0:
	// lhzu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r7,2(r6)
	ea = 2 + ctx.r6.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x8998e0f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8998E0F0;
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// addi r5,r30,1530
	ctx.r5.s64 = ctx.r30.s64 + 1530;
	// add r3,r31,r8
	ctx.r3.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lhz r28,10(r9)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// lhz r27,12(r9)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r9.u32 + 12);
	// addi r8,r29,1224
	ctx.r8.s64 = ctx.r29.s64 + 1224;
	// lhz r25,14(r9)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// xori r3,r7,16384
	ctx.r3.u64 = ctx.r7.u64 ^ 16384;
	// addi r6,r26,-656
	ctx.r6.s64 = ctx.r26.s64 + -656;
	// sth r3,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r4,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r4.u16);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r28,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r28.u16);
	// li r3,5
	ctx.r3.s64 = 5;
	// sth r27,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r27.u16);
	// sth r25,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r25.u16);
	// bl 0x89935610
	ctx.lr = 0x8998E154;
	sub_89935610(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x8998e020
	if (ctx.cr6.lt) goto loc_8998E020;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lis r11,-30229
	ctx.r11.s64 = -1981087744;
	// addi r10,r10,-14536
	ctx.r10.s64 = ctx.r10.s64 + -14536;
	// addi r27,r11,3000
	ctx.r27.s64 = ctx.r11.s64 + 3000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8998e1f8
	if (ctx.cr6.eq) goto loc_8998E1F8;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_8998E190:
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r5,3(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// lbz r7,5(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r9,7(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// lbz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 8);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzu r11,9(r31)
	ea = 9 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x89934fb8
	ctx.lr = 0x8998E1DC;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8998e190
	if (!ctx.cr6.eq) goto loc_8998E190;
loc_8998E1F8:
	// lis r11,-30229
	ctx.r11.s64 = -1981087744;
	// addi r6,r26,-328
	ctx.r6.s64 = ctx.r26.s64 + -328;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-4592
	ctx.r4.s64 = ctx.r11.s64 + -4592;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935c28
	ctx.lr = 0x8998E214;
	sub_89935C28(ctx, base);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lis r11,-30229
	ctx.r11.s64 = -1981087744;
	// addi r10,r10,-14464
	ctx.r10.s64 = ctx.r10.s64 + -14464;
	// addi r28,r11,3336
	ctx.r28.s64 = ctx.r11.s64 + 3336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8998e2a0
	if (ctx.cr6.eq) goto loc_8998E2A0;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_8998E23C:
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lbz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,3(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// li r8,-8
	ctx.r8.s64 = -8;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r6,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// li r7,-8
	ctx.r7.s64 = -8;
	// add r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 + ctx.r5.u64;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r4,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r4.u16);
	// li r4,5
	ctx.r4.s64 = 5;
	// add r5,r6,r28
	ctx.r5.u64 = ctx.r6.u64 + ctx.r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x89934fb8
	ctx.lr = 0x8998E284;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8998e23c
	if (!ctx.cr6.eq) goto loc_8998E23C;
loc_8998E2A0:
	// lis r11,-30229
	ctx.r11.s64 = -1981087744;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-3808
	ctx.r30.s64 = ctx.r11.s64 + -3808;
loc_8998E2AC:
	// mulli r10,r31,170
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(170));
	// mulli r11,r31,408
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(408));
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935c28
	ctx.lr = 0x8998E2CC;
	sub_89935C28(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8998e2ac
	if (ctx.cr6.lt) goto loc_8998E2AC;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lis r11,-30229
	ctx.r11.s64 = -1981087744;
	// addi r10,r10,-14452
	ctx.r10.s64 = ctx.r10.s64 + -14452;
	// addi r28,r11,3848
	ctx.r28.s64 = ctx.r11.s64 + 3848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8998e368
	if (ctx.cr6.eq) goto loc_8998E368;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_8998E308:
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lbz r5,2(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// lbz r6,3(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r9,5(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbzu r10,6(r31)
	ea = 6 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// li r7,-12
	ctx.r7.s64 = -12;
	// sth r3,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,5
	ctx.r4.s64 = 5;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x89934fb8
	ctx.lr = 0x8998E34C;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8998e308
	if (!ctx.cr6.eq) goto loc_8998E308;
loc_8998E368:
	// lis r11,-30229
	ctx.r11.s64 = -1981087744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,2600
	ctx.r4.s64 = ctx.r11.s64 + 2600;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935c28
	ctx.lr = 0x8998E384;
	sub_89935C28(ctx, base);
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899905B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899905C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r7,r9,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r31,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r6,r7,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// rlwimi r6,r8,0,24,22
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r6.u64 & 0x100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// lwzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwzx r10,r7,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// lwzx r11,r31,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r6,r30,206
	ctx.r6.s64 = ctx.r30.s64 + 206;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// addi r25,r30,52
	ctx.r25.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r7,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r5,r30,200
	ctx.r5.s64 = ctx.r30.s64 + 200;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// stwx r9,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r9.u32);
	// lbzx r10,r7,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stbx r8,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u8);
	// beq cr6,0x899907f0
	if (ctx.cr6.eq) goto loc_899907F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932b18
	ctx.lr = 0x89990660;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932d30
	ctx.lr = 0x8999066C;
	sub_89932D30(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r28,r30,32
	ctx.r28.s64 = ctx.r30.s64 + 32;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	// stwx r6,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u32);
	// bl 0x8991db50
	ctx.lr = 0x899906E4;
	sub_8991DB50(ctx, base);
	// addi r5,r30,196
	ctx.r5.s64 = ctx.r30.s64 + 196;
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lbzx r3,r31,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// stbx r11,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x899908ac
	if (!ctx.cr6.eq) goto loc_899908AC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899908ac
	if (ctx.cr6.eq) goto loc_899908AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991aae8
	ctx.lr = 0x89990714;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899908ac
	if (ctx.cr6.eq) goto loc_899908AC;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-13508
	ctx.r11.s64 = ctx.r11.s64 + -13508;
	// lis r24,4
	ctx.r24.s64 = 262144;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
loc_89990738:
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lhz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// li r3,7
	ctx.r3.s64 = 7;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lwzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rotlwi r4,r11,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// rlwinm r23,r5,1,22,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r10,r5,128
	ctx.r10.s64 = ctx.r5.s64 + 128;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// rlwinm r22,r10,1,22,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// lhzx r4,r23,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r28.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// lhzx r4,r22,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r28.u32);
	// mullw r23,r10,r5
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// mullw r22,r11,r4
	ctx.r22.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mullw r4,r10,r4
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r11,r23,8
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 8;
	// srawi r10,r22,8
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r22.s32 >> 8;
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r9,r10,224
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(224));
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r4,r24,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r24.u64;
	// bl 0x899cce38
	ctx.lr = 0x899907D4;
	sub_899CCE38(ctx, base);
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// blt cr6,0x89990738
	if (ctx.cr6.lt) goto loc_89990738;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899907F0:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r8,0
	ctx.r8.s64 = 0;
loc_899907F8:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bge cr6,0x89990818
	if (!ctx.cr6.lt) goto loc_89990818;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_89990818:
	// ble cr6,0x89990828
	if (!ctx.cr6.gt) goto loc_89990828;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
loc_89990828:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x899907f8
	if (ctx.cr6.lt) goto loc_899907F8;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// srawi r3,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 4;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r7,r30,36
	ctx.r7.s64 = ctx.r30.s64 + 36;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r3,r30,180
	ctx.r3.s64 = ctx.r30.s64 + 180;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stbx r9,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u8);
loc_899908AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899919A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899919A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// mulli r29,r9,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r30,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwzx r7,r29,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r6,r31,158
	ctx.r6.s64 = ctx.r31.s64 + 158;
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// rlwimi r7,r8,0,24,22
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r7.u64 & 0x100);
	// addi r5,r31,180
	ctx.r5.s64 = ctx.r31.s64 + 180;
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lhzx r3,r29,r6
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r6.u32);
	// addi r10,r31,184
	ctx.r10.s64 = ctx.r31.s64 + 184;
	// sthx r3,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u16);
	// addi r8,r31,180
	ctx.r8.s64 = ctx.r31.s64 + 180;
	// lbzx r9,r29,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// lbzx r6,r30,r4
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// lbzx r4,r29,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lwzx r10,r30,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// lhzx r28,r30,r11
	ctx.r28.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// lis r6,0
	ctx.r6.s64 = 0;
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// ori r27,r6,32768
	ctx.r27.u64 = ctx.r6.u64 | 32768;
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// and r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 & ctx.r9.u64;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// stbx r9,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r26,r31,36
	ctx.r26.s64 = ctx.r31.s64 + 36;
	// lwzx r9,r29,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stwx r9,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r25,r30,r8
	ctx.r25.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r9,r8
	ctx.r24.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r24,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stwx r8,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r8.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,4(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r5,r30,r26
	REX_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r5.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r11,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u32);
	// beq cr6,0x89991b34
	if (ctx.cr6.eq) goto loc_89991B34;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// ori r7,r10,32896
	ctx.r7.u64 = ctx.r10.u64 | 32896;
	// lis r8,-8
	ctx.r8.s64 = -524288;
	// lis r6,16838
	ctx.r6.s64 = 1103495168;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stwx r8,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// ori r4,r6,20077
	ctx.r4.u64 = ctx.r6.u64 | 20077;
	// addi r10,r31,207
	ctx.r10.s64 = ctx.r31.s64 + 207;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lbzx r8,r30,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// lbzx r7,r30,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// srawi r10,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 16;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r10,r10,30,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1FFF;
	// lwzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x899d7a90
	ctx.lr = 0x89991B34;
	sub_899D7A90(ctx, base);
loc_89991B34:
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r5,r10,9016
	ctx.r5.s64 = ctx.r10.s64 + 9016;
	// rlwinm r4,r28,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// rlwinm r9,r9,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lwzx r11,r30,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// lhzx r4,r4,r5
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// lwzx r3,r30,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// lhzx r5,r9,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// extsh r26,r4
	ctx.r26.s64 = ctx.r4.s16;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// lwzx r4,r29,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mullw r5,r9,r26
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r26.s32);
	// mullw r25,r10,r3
	ctx.r25.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// srawi r25,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 8;
	// mullw r3,r9,r3
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// mullw r9,r26,r10
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r10.s32);
	// subf r5,r5,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r5.u64;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// stwx r5,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r5.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r9,r29,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// addi r8,r31,200
	ctx.r8.s64 = ctx.r31.s64 + 200;
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r5,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r5.u32);
	// addi r3,r31,206
	ctx.r3.s64 = ctx.r31.s64 + 206;
	// lbzx r10,r29,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// addi r8,r31,200
	ctx.r8.s64 = ctx.r31.s64 + 200;
	// lwzx r7,r29,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// subfc r5,r4,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r4.u32;
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// eqv r4,r4,r7
	ctx.r4.u64 = ~(ctx.r4.u64 ^ ctx.r7.u64);
	// lbzx r9,r30,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// subf r5,r7,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stbx r5,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r5.u8);
	// beq cr6,0x89991c10
	if (ctx.cr6.eq) goto loc_89991C10;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stwx r11,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u32);
loc_89991C10:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89993D90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89993D98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r29,r30,r31
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// addi r10,r31,207
	ctx.r10.s64 = ctx.r31.s64 + 207;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r5,r30,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r28,r30,r7
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// lbzx r4,r30,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// lbzx r27,r30,r10
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// bgt cr6,0x89993eec
	if (ctx.cr6.gt) goto loc_89993EEC;
	// lis r12,-30311
	ctx.r12.s64 = -1986461696;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,15864
	ctx.r12.s64 = ctx.r12.s64 + 15864;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_89993E20;
	case 1:
		goto loc_89993E20;
	case 2:
		goto loc_89993E20;
	case 3:
		goto loc_89993E20;
	case 4:
		goto loc_89993EEC;
	case 5:
		goto loc_89993E9C;
	case 6:
		goto loc_89993EC8;
	case 7:
		goto loc_89993EC8;
	case 8:
		goto loc_89993EC8;
	case 9:
		goto loc_89993ED4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89993E20:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// rlwinm r9,r29,0,12,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// addi r6,r10,9016
	ctx.r6.s64 = ctx.r10.s64 + 9016;
	// rlwinm r9,r9,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stwx r9,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// li r4,15
	ctx.r4.s64 = 15;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r10,r9,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// rlwinm r11,r9,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r11,r9,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// rlwinm r9,r10,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x899d4440
	ctx.lr = 0x89993E94;
	sub_899D4440(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89993E9C:
	// bl 0x8991b9f0
	ctx.lr = 0x89993EA0;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89993ebc
	if (ctx.cr6.lt) goto loc_89993EBC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// oris r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 3145728;
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
loc_89993EBC:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x89993edc
	goto loc_89993EDC;
loc_89993EC8:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x89993edc
	goto loc_89993EDC;
loc_89993ED4:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,10
	ctx.r4.s64 = 10;
loc_89993EDC:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4c10
	ctx.lr = 0x89993EEC;
	sub_899D4C10(ctx, base);
loc_89993EEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899951C8) {
	REX_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x89994f88
	sub_89994F88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899951E8) {
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
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// addi r10,r31,207
	ctx.r10.s64 = ctx.r31.s64 + 207;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// lwzx r8,r30,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// lbzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r7,r30,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r5,r30,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// lwzx r6,r30,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// beq cr6,0x8999524c
	if (ctx.cr6.eq) goto loc_8999524C;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x899d4440
	ctx.lr = 0x89995248;
	sub_899D4440(ctx, base);
	// b 0x89995254
	goto loc_89995254;
loc_8999524C:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x899d4c10
	ctx.lr = 0x89995254;
	sub_899D4C10(ctx, base);
loc_89995254:
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
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

DEFINE_REX_FUNC(sub_89995948) {
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
	// lis r11,-30228
	ctx.r11.s64 = -1981022208;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r31,r11,-14336
	ctx.r31.s64 = ctx.r11.s64 + -14336;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,240
	ctx.r10.s64 = 240;
	// li r9,240
	ctx.r9.s64 = 240;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,-8
	ctx.r8.s64 = -8;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x89995990;
	sub_89934FB8(ctx, base);
	// lis r7,-30228
	ctx.r7.s64 = -1981022208;
	// lis r8,-30304
	ctx.r8.s64 = -1986002944;
	// addi r4,r7,-14448
	ctx.r4.s64 = ctx.r7.s64 + -14448;
	// addi r6,r8,-16504
	ctx.r6.s64 = ctx.r8.s64 + -16504;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935688
	ctx.lr = 0x899959B0;
	sub_89935688(ctx, base);
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

DEFINE_REX_FUNC(sub_89995B70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89995B78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r10,12800
	ctx.r10.s64 = ctx.r10.s64 + 12800;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,56(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addis r8,r9,-160
	ctx.r8.s64 = ctx.r9.s64 + -10485760;
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x89995bb0
	if (!ctx.cr0.lt) goto loc_89995BB0;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
loc_89995BB0:
	// lis r9,172
	ctx.r9.s64 = 11272192;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x89995bcc
	if (!ctx.cr6.gt) goto loc_89995BCC;
loc_89995BBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89995BCC:
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// lwz r9,52(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r7,60(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r8,-21584(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// stw r9,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addis r9,r7,-120
	ctx.r9.s64 = ctx.r7.s64 + -7864320;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x89995bf8
	if (!ctx.cr0.lt) goto loc_89995BF8;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_89995BF8:
	// lis r8,132
	ctx.r8.s64 = 8650752;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x89995bbc
	if (ctx.cr6.gt) goto loc_89995BBC;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r9,r10,28
	ctx.r9.s64 = ctx.r10.s64 + 28;
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
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// ori r8,r9,20077
	ctx.r8.u64 = ctx.r9.u64 | 20077;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,-9212(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + -9212);
	// lis r28,-30320
	ctx.r28.s64 = -1987051520;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r9,-9212(r29)
	REX_STORE_U32(ctx.r29.u32 + -9212, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r28,9016
	ctx.r6.s64 = ctx.r28.s64 + 9016;
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// lwz r29,0(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// ori r8,r8,49216
	ctx.r8.u64 = ctx.r8.u64 | 49216;
	// stwx r29,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r29.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r7,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r5,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r4,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u32);
	// lwz r7,168(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r5,52(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r4,158(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 158);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addi r9,r9,248
	ctx.r9.s64 = ctx.r9.s64 + 248;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r4,r7,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// rlwinm r7,r9,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lhzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// rlwinm r9,r9,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// rlwinm r4,r4,15,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0xFFFF8000;
	// srawi r7,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// srawi r6,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x899d79f8
	ctx.lr = 0x89995D0C;
	sub_899D79F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89996538) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89996540;
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
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899965a8
	if (ctx.cr6.lt) goto loc_899965A8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x89996638
	if (!ctx.cr6.lt) goto loc_89996638;
	// bl 0x8991b9f0
	ctx.lr = 0x89996574;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x89996630
	if (ctx.cr6.lt) goto loc_89996630;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x899c2258
	ctx.lr = 0x89996588;
	sub_899C2258(ctx, base);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// oris r8,r9,48
	ctx.r8.u64 = ctx.r9.u64 | 3145728;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r8,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r8.u32);
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899965A8:
	// addi r27,r30,207
	ctx.r27.s64 = ctx.r30.s64 + 207;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// li r3,8
	ctx.r3.s64 = 8;
	// lbzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r4,r31,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x899d8e20
	ctx.lr = 0x899965C8;
	sub_899D8E20(ctx, base);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
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
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// rlwinm r6,r7,0,14,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x30000;
	// lbzx r7,r31,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// beq cr6,0x89996618
	if (ctx.cr6.eq) goto loc_89996618;
	// bl 0x899d4440
	ctx.lr = 0x89996614;
	sub_899D4440(ctx, base);
	// b 0x8999661c
	goto loc_8999661C;
loc_89996618:
	// bl 0x899d4e08
	ctx.lr = 0x8999661C;
	sub_899D4E08(ctx, base);
loc_8999661C:
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r4,r31,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x8992e698
	ctx.lr = 0x89996630;
	sub_8992E698(ctx, base);
loc_89996630:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_89996638:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899967C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30228
	ctx.r11.s64 = -1981022208;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r31,r11,-14112
	ctx.r31.s64 = ctx.r11.s64 + -14112;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,112
	ctx.r7.s64 = ctx.r31.s64 + 112;
	// li r9,176
	ctx.r9.s64 = 176;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-40
	ctx.r8.s64 = -40;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934860
	ctx.lr = 0x89996814;
	sub_89934860(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r10,160
	ctx.r10.s64 = 160;
	// sth r5,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r5.u16);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,-48
	ctx.r8.s64 = -48;
	// li r7,-40
	ctx.r7.s64 = -40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899352b8
	ctx.lr = 0x89996848;
	sub_899352B8(ctx, base);
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r10,106(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lis r4,-30304
	ctx.r4.s64 = -1986002944;
	// lhz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// lhz r8,110(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// addi r6,r4,-16844
	ctx.r6.s64 = ctx.r4.s64 + -16844;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r11,120(r31)
	REX_STORE_U16(ctx.r31.u32 + 120, ctx.r11.u16);
	// li r3,8
	ctx.r3.s64 = 8;
	// sth r10,122(r31)
	REX_STORE_U16(ctx.r31.u32 + 122, ctx.r10.u16);
	// sth r9,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r9.u16);
	// sth r8,126(r31)
	REX_STORE_U16(ctx.r31.u32 + 126, ctx.r8.u16);
	// sth r11,138(r31)
	REX_STORE_U16(ctx.r31.u32 + 138, ctx.r11.u16);
	// sth r10,140(r31)
	REX_STORE_U16(ctx.r31.u32 + 140, ctx.r10.u16);
	// sth r9,142(r31)
	REX_STORE_U16(ctx.r31.u32 + 142, ctx.r9.u16);
	// sth r8,144(r31)
	REX_STORE_U16(ctx.r31.u32 + 144, ctx.r8.u16);
	// sth r11,156(r31)
	REX_STORE_U16(ctx.r31.u32 + 156, ctx.r11.u16);
	// sth r10,158(r31)
	REX_STORE_U16(ctx.r31.u32 + 158, ctx.r10.u16);
	// sth r9,160(r31)
	REX_STORE_U16(ctx.r31.u32 + 160, ctx.r9.u16);
	// sth r8,162(r31)
	REX_STORE_U16(ctx.r31.u32 + 162, ctx.r8.u16);
	// sth r11,174(r31)
	REX_STORE_U16(ctx.r31.u32 + 174, ctx.r11.u16);
	// sth r10,176(r31)
	REX_STORE_U16(ctx.r31.u32 + 176, ctx.r10.u16);
	// sth r9,178(r31)
	REX_STORE_U16(ctx.r31.u32 + 178, ctx.r9.u16);
	// sth r8,180(r31)
	REX_STORE_U16(ctx.r31.u32 + 180, ctx.r8.u16);
	// sth r11,192(r31)
	REX_STORE_U16(ctx.r31.u32 + 192, ctx.r11.u16);
	// sth r10,194(r31)
	REX_STORE_U16(ctx.r31.u32 + 194, ctx.r10.u16);
	// sth r9,196(r31)
	REX_STORE_U16(ctx.r31.u32 + 196, ctx.r9.u16);
	// sth r8,198(r31)
	REX_STORE_U16(ctx.r31.u32 + 198, ctx.r8.u16);
	// sth r11,210(r31)
	REX_STORE_U16(ctx.r31.u32 + 210, ctx.r11.u16);
	// sth r10,212(r31)
	REX_STORE_U16(ctx.r31.u32 + 212, ctx.r10.u16);
	// sth r9,214(r31)
	REX_STORE_U16(ctx.r31.u32 + 214, ctx.r9.u16);
	// sth r8,216(r31)
	REX_STORE_U16(ctx.r31.u32 + 216, ctx.r8.u16);
	// sth r11,228(r31)
	REX_STORE_U16(ctx.r31.u32 + 228, ctx.r11.u16);
	// sth r10,230(r31)
	REX_STORE_U16(ctx.r31.u32 + 230, ctx.r10.u16);
	// sth r9,232(r31)
	REX_STORE_U16(ctx.r31.u32 + 232, ctx.r9.u16);
	// sth r8,234(r31)
	REX_STORE_U16(ctx.r31.u32 + 234, ctx.r8.u16);
	// sth r11,246(r31)
	REX_STORE_U16(ctx.r31.u32 + 246, ctx.r11.u16);
	// sth r10,248(r31)
	REX_STORE_U16(ctx.r31.u32 + 248, ctx.r10.u16);
	// sth r9,250(r31)
	REX_STORE_U16(ctx.r31.u32 + 250, ctx.r9.u16);
	// sth r8,252(r31)
	REX_STORE_U16(ctx.r31.u32 + 252, ctx.r8.u16);
	// bl 0x89935610
	ctx.lr = 0x899968F4;
	sub_89935610(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89997060) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89997068;
	__savegprlr_27(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r31,3
	ctx.r31.s64 = 3;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r8,21331
	ctx.r8.s64 = 21331;
	// ori r5,r7,44032
	ctx.r5.u64 = ctx.r7.u64 | 44032;
loc_8999708C:
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r3,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r10,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// mulli r7,r7,21504
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(21504));
	// sth r8,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// sth r10,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// sth r8,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r8.u16);
	// sth r10,22(r11)
	REX_STORE_U16(ctx.r11.u32 + 22, ctx.r10.u16);
	// sth r8,24(r11)
	REX_STORE_U16(ctx.r11.u32 + 24, ctx.r8.u16);
	// sth r10,30(r11)
	REX_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// sth r8,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r8.u16);
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// mulli r4,r4,84
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(84));
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r27,r7,16
	ctx.r27.u64 = ctx.r7.u32 & 0xFFFF;
	// ori r7,r29,16384
	ctx.r7.u64 = ctx.r29.u64 | 16384;
	// ori r4,r29,32768
	ctx.r4.u64 = ctx.r29.u64 | 32768;
	// sth r27,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r27.u16);
	// sth r7,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// ori r29,r29,49152
	ctx.r29.u64 = ctx.r29.u64 | 49152;
	// clrlwi r7,r31,16
	ctx.r7.u64 = ctx.r31.u32 & 0xFFFF;
	// sth r27,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r27.u16);
	// sth r4,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, ctx.r4.u16);
	// sth r27,20(r11)
	REX_STORE_U16(ctx.r11.u32 + 20, ctx.r27.u16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// sth r29,26(r11)
	REX_STORE_U16(ctx.r11.u32 + 26, ctx.r29.u16);
	// sth r27,28(r11)
	REX_STORE_U16(ctx.r11.u32 + 28, ctx.r27.u16);
	// beq cr6,0x89997144
	if (ctx.cr6.eq) goto loc_89997144;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x89997144
	if (!ctx.cr6.eq) goto loc_89997144;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mulli r4,r9,84
	ctx.r4.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(84));
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,172
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 172, ctx.xer);
	// ble cr6,0x89997144
	if (!ctx.cr6.gt) goto loc_89997144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
loc_89997144:
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// sthu r10,34(r11)
	ea = 34 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,48
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 48, ctx.xer);
	// blt cr6,0x8999708c
	if (ctx.cr6.lt) goto loc_8999708C;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89997678) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r9,r10,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x899976a0
	if (ctx.cr6.lt) goto loc_899976A0;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_899976A0:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8991c1b8
	sub_8991C1B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899977A0) {
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
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r9,12800
	ctx.r11.s64 = ctx.r9.s64 + 12800;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x899977d8
	if (ctx.cr6.lt) goto loc_899977D8;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x89997824
	if (!ctx.cr6.gt) goto loc_89997824;
loc_899977D8:
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r10,-17928
	ctx.r11.s64 = ctx.r10.s64 + -17928;
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r9,116
	ctx.r9.s64 = 116;
	// lwz r5,48(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// bl 0x899d5650
	ctx.lr = 0x89997808;
	sub_899D5650(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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
loc_89997824:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_89997B40) {
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
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r9,12800
	ctx.r11.s64 = ctx.r9.s64 + 12800;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// blt cr6,0x89997b78
	if (ctx.cr6.lt) goto loc_89997B78;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// ble cr6,0x89997bc4
	if (!ctx.cr6.gt) goto loc_89997BC4;
loc_89997B78:
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r4,r11,31,1,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFE;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r10,-18292
	ctx.r11.s64 = ctx.r10.s64 + -18292;
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r9,116
	ctx.r9.s64 = 116;
	// lwz r5,48(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// bl 0x899d5650
	ctx.lr = 0x89997BA8;
	sub_899D5650(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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
loc_89997BC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_89997D48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x89997D50;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lhz r23,0(r8)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// ori r7,r9,20077
	ctx.r7.u64 = ctx.r9.u64 | 20077;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r3,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 16;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r31,r8,12800
	ctx.r31.s64 = ctx.r8.s64 + 12800;
	// extsh r6,r23
	ctx.r6.s64 = ctx.r23.s16;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r3,19,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 19) & 0x3;
	// mulli r22,r6,208
	ctx.r22.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// srawi r10,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 3;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// addi r6,r11,60
	ctx.r6.s64 = ctx.r11.s64 + 60;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
	// li r4,93
	ctx.r4.s64 = 93;
	// clrlwi r11,r10,26
	ctx.r11.u64 = ctx.r10.u32 & 0x3F;
	// stwx r5,r22,r31
	REX_STORE_U32(ctx.r22.u32 + ctx.r31.u32, ctx.r5.u32);
	// stwx r4,r22,r9
	REX_STORE_U32(ctx.r22.u32 + ctx.r9.u32, ctx.r4.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r6,r22,r8
	REX_STORE_U32(ctx.r22.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r11,r22,r7
	REX_STORE_U32(ctx.r22.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8991b538
	ctx.lr = 0x89997DE8;
	sub_8991B538(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8991c578
	ctx.lr = 0x89997DF0;
	sub_8991C578(ctx, base);
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// rlwinm r8,r10,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r7,r9,9016
	ctx.r7.s64 = ctx.r9.s64 + 9016;
	// rlwinm r6,r25,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x3FE;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// srawi r11,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 4;
	// lhzx r3,r8,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// lhzx r8,r6,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// lwz r10,26932(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 26932);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// stwx r27,r22,r9
	REX_STORE_U32(ctx.r22.u32 + ctx.r9.u32, ctx.r27.u32);
	// mullw r3,r6,r11
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stwx r26,r22,r7
	REX_STORE_U32(ctx.r22.u32 + ctx.r7.u32, ctx.r26.u32);
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// addi r9,r31,158
	ctx.r9.s64 = ctx.r31.s64 + 158;
	// mullw r7,r5,r11
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// sthx r25,r22,r9
	REX_STORE_U16(ctx.r22.u32 + ctx.r9.u32, ctx.r25.u16);
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r5,r31,204
	ctx.r5.s64 = ctx.r31.s64 + 204;
	// stwx r3,r22,r8
	REX_STORE_U32(ctx.r22.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// addi r31,r31,164
	ctx.r31.s64 = ctx.r31.s64 + 164;
	// lis r27,519
	ctx.r27.s64 = 34013184;
	// srawi r8,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 8;
	// li r9,116
	ctx.r9.s64 = 116;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r22,r6
	REX_STORE_U32(ctx.r22.u32 + ctx.r6.u32, ctx.r8.u32);
	// ori r7,r27,49344
	ctx.r7.u64 = ctx.r27.u64 | 49344;
	// stbx r9,r22,r5
	REX_STORE_U8(ctx.r22.u32 + ctx.r5.u32, ctx.r9.u8);
	// stwx r28,r22,r4
	REX_STORE_U32(ctx.r22.u32 + ctx.r4.u32, ctx.r28.u32);
	// addi r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 2;
	// stbx r9,r22,r11
	REX_STORE_U8(ctx.r22.u32 + ctx.r11.u32, ctx.r9.u8);
	// stwx r7,r22,r30
	REX_STORE_U32(ctx.r22.u32 + ctx.r30.u32, ctx.r7.u32);
	// stwx r10,r22,r31
	REX_STORE_U32(ctx.r22.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89999008) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x89999010;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8991b880
	ctx.lr = 0x89999020;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999926c
	if (ctx.cr6.eq) goto loc_8999926C;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r8,-30269
	ctx.r8.s64 = -1983709184;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lhz r26,-4592(r10)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// li r24,0
	ctx.r24.s64 = 0;
	// lhz r21,26864(r9)
	ctx.r21.u64 = REX_LOAD_U16(ctx.r9.u32 + 26864);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// extsh r7,r26
	ctx.r7.s64 = ctx.r26.s16;
	// lhz r11,-17120(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + -17120);
	// addi r5,r31,162
	ctx.r5.s64 = ctx.r31.s64 + 162;
	// mulli r30,r7,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// sthx r11,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u16);
	// stwx r21,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r21.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lis r9,-16208
	ctx.r9.s64 = -1062207488;
	// addi r28,r31,158
	ctx.r28.s64 = ctx.r31.s64 + 158;
	// ori r8,r9,260
	ctx.r8.u64 = ctx.r9.u64 | 260;
	// stwx r24,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r24.u32);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// stwx r24,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r24.u32);
	// lis r6,-30294
	ctx.r6.s64 = -1985347584;
	// stwx r8,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sthx r11,r30,r28
	REX_STORE_U16(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u16);
	// addi r25,r10,-4592
	ctx.r25.s64 = ctx.r10.s64 + -4592;
	// addi r23,r6,-12076
	ctx.r23.s64 = ctx.r6.s64 + -12076;
	// lhz r27,12272(r7)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r7.u32 + 12272);
	// extsh r5,r27
	ctx.r5.s64 = ctx.r27.s16;
	// srawi r29,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r29.s64 = ctx.r5.s32 >> 7;
	// rlwinm r22,r29,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8991b538
	ctx.lr = 0x899990B0;
	sub_8991B538(ctx, base);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bgt cr6,0x89999110
	if (ctx.cr6.gt) goto loc_89999110;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899990ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899990EC;
	// bdzf 4*cr6+eq,0x899990cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899990CC;
	// bne cr6,0x899990ec
	if (!ctx.cr6.eq) goto loc_899990EC;
loc_899990CC:
	// lhzx r11,r22,r23
	ctx.r11.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r23.u32);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// rlwinm r7,r20,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// stwx r8,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r7,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x89999110
	goto loc_89999110;
loc_899990EC:
	// extsh r11,r20
	ctx.r11.s64 = ctx.r20.s16;
	// lhzx r10,r22,r23
	ctx.r10.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r23.u32);
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r8,r11,-352
	ctx.r8.s64 = ctx.r11.s64 + -352;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// rlwinm r6,r8,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rotlwi r5,r10,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// stwx r6,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u32);
	// stwx r5,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r5.u32);
loc_89999110:
	// sthx r27,r30,r28
	REX_STORE_U16(ctx.r30.u32 + ctx.r28.u32, ctx.r27.u16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991c578
	ctx.lr = 0x8999911C;
	sub_8991C578(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r23,r31,204
	ctx.r23.s64 = ctx.r31.s64 + 204;
	// addi r22,r31,200
	ctx.r22.s64 = ctx.r31.s64 + 200;
	// addi r11,r11,-12124
	ctx.r11.s64 = ctx.r11.s64 + -12124;
	// li r10,115
	ctx.r10.s64 = 115;
	// addi r6,r31,168
	ctx.r6.s64 = ctx.r31.s64 + 168;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stbx r10,r30,r23
	REX_STORE_U8(ctx.r30.u32 + ctx.r23.u32, ctx.r10.u8);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// stbx r10,r30,r22
	REX_STORE_U8(ctx.r30.u32 + ctx.r22.u32, ctx.r10.u8);
	// addi r3,r31,193
	ctx.r3.s64 = ctx.r31.s64 + 193;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// stwx r11,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u32);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// addi r7,r8,9016
	ctx.r7.s64 = ctx.r8.s64 + 9016;
	// stbx r9,r30,r3
	REX_STORE_U8(ctx.r30.u32 + ctx.r3.u32, ctx.r9.u8);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// li r27,3
	ctx.r27.s64 = 3;
	// lhzx r10,r30,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// rlwinm r8,r11,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r6,r9,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r8,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// lhzx r11,r6,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r8,r10,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r7,r9,13,0,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// srawi r3,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 8;
	// stwx r6,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r6.u32);
	// stwx r3,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r3.u32);
loc_899991A4:
	// lhzu r28,2(r25)
	ea = 2 + ctx.r25.u32;
	ctx.r28.u64 = REX_LOAD_U16(ea);
	ctx.r25.u32 = ea;
	// addi r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 + 148;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// extsh r8,r28
	ctx.r8.s64 = ctx.r28.s16;
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// mulli r20,r8,208
	ctx.r20.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// sthx r26,r20,r11
	REX_STORE_U16(ctx.r20.u32 + ctx.r11.u32, ctx.r26.u16);
	// stwx r21,r20,r9
	REX_STORE_U32(ctx.r20.u32 + ctx.r9.u32, ctx.r21.u32);
	// stwx r7,r20,r6
	REX_STORE_U32(ctx.r20.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// oris r4,r10,49152
	ctx.r4.u64 = ctx.r10.u64 | 3221225472;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r4,r20,r31
	REX_STORE_U32(ctx.r20.u32 + ctx.r31.u32, ctx.r4.u32);
	// stwx r24,r20,r5
	REX_STORE_U32(ctx.r20.u32 + ctx.r5.u32, ctx.r24.u32);
	// bl 0x8991b538
	ctx.lr = 0x899991E8;
	sub_8991B538(ctx, base);
	// lhz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 12);
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// lhz r10,14(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 14);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// stwx r11,r20,r9
	REX_STORE_U32(ctx.r20.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r9,r30,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r10,r20,r6
	REX_STORE_U32(ctx.r20.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r9,r20,r7
	REX_STORE_U32(ctx.r20.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwzx r11,r30,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r8,r20,r4
	REX_STORE_U32(ctx.r20.u32 + ctx.r4.u32, ctx.r8.u32);
	// bl 0x8991c578
	ctx.lr = 0x89999238;
	sub_8991C578(ctx, base);
	// addi r7,r31,206
	ctx.r7.s64 = ctx.r31.s64 + 206;
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// lbzu r11,16(r29)
	ea = 16 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r5,r31,204
	ctx.r5.s64 = ctx.r31.s64 + 204;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stbx r24,r20,r7
	REX_STORE_U8(ctx.r20.u32 + ctx.r7.u32, ctx.r24.u8);
	// lbzx r3,r30,r22
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r22.u32);
	// stbx r3,r20,r6
	REX_STORE_U8(ctx.r20.u32 + ctx.r6.u32, ctx.r3.u8);
	// lbzx r10,r30,r23
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// stbx r10,r20,r5
	REX_STORE_U8(ctx.r20.u32 + ctx.r5.u32, ctx.r10.u8);
	// stbx r11,r20,r4
	REX_STORE_U8(ctx.r20.u32 + ctx.r4.u32, ctx.r11.u8);
	// bne 0x899991a4
	if (!ctx.cr0.eq) goto loc_899991A4;
loc_8999926C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999A188) {
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
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8999a298
	if (ctx.cr6.eq) goto loc_8999A298;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// bl 0x89932b18
	ctx.lr = 0x8999A1C8;
	sub_89932B18(ctx, base);
	// addi r8,r30,186
	ctx.r8.s64 = ctx.r30.s64 + 186;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// addi r11,r7,25128
	ctx.r11.s64 = ctx.r7.s64 + 25128;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r4,r31,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwzx r3,r31,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lbzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// mulli r7,r8,696
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(696));
	// lwzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r5,r7,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x89932c20
	ctx.lr = 0x8999A200;
	sub_89932C20(ctx, base);
	// addi r8,r30,168
	ctx.r8.s64 = ctx.r30.s64 + 168;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lis r6,2
	ctx.r6.s64 = 131072;
loc_8999A214:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lhzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// subf r9,r7,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r7.u64;
	// clrlwi r9,r9,23
	ctx.r9.u64 = ctx.r9.u32 & 0x1FF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8999a248
	if (ctx.cr6.eq) goto loc_8999A248;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// ble cr6,0x8999a240
	if (!ctx.cr6.gt) goto loc_8999A240;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8999a244
	goto loc_8999A244;
loc_8999A240:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8999A244:
	// sthx r11,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u16);
loc_8999A248:
	// addic. r11,r9,-256
	ctx.xer.ca = ctx.r9.u32 > 255;
	ctx.r11.s64 = ctx.r9.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8999a254
	if (!ctx.cr0.lt) goto loc_8999A254;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8999A254:
	// cmpwi cr6,r11,248
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 248, ctx.xer);
	// ble cr6,0x8999a270
	if (!ctx.cr6.gt) goto loc_8999A270;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8999a270
	if (!ctx.cr6.lt) goto loc_8999A270;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
loc_8999A270:
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8999a284
	if (!ctx.cr6.gt) goto loc_8999A284;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
loc_8999A284:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8999a214
	if (ctx.cr6.lt) goto loc_8999A214;
loc_8999A298:
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

DEFINE_REX_FUNC(sub_8999B280) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8999B288;
	__savegprlr_27(ctx, base);
	// stwu r1,-1376(r1)
	ea = -1376 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
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
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934860
	ctx.lr = 0x8999B2C0;
	sub_89934860(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r9,216
	ctx.r9.s64 = 216;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x899352b8
	ctx.lr = 0x8999B2F4;
	sub_899352B8(ctx, base);
	// addi r5,r1,636
	ctx.r5.s64 = ctx.r1.s64 + 636;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r10,80
	ctx.r10.s64 = 80;
	// li r9,16
	ctx.r9.s64 = 16;
	// sth r4,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r4.u16);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899352b8
	ctx.lr = 0x8999B324;
	sub_899352B8(ctx, base);
	// lis r11,-30227
	ctx.r11.s64 = -1980956672;
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,7256
	ctx.r30.s64 = ctx.r11.s64 + 7256;
	// addi r27,r10,-21440
	ctx.r27.s64 = ctx.r10.s64 + -21440;
loc_8999B338:
	// rlwinm r5,r31,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8999B340:
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// blt cr6,0x8999b3a8
	if (ctx.cr6.lt) goto loc_8999B3A8;
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r30,-2304
	ctx.r10.s64 = ctx.r30.s64 + -2304;
	// addi r7,r1,2400
	ctx.r7.s64 = ctx.r1.s64 + 2400;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,9
	ctx.r9.s64 = 9;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8999B38C:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x8999b38c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8999B38C;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// ori r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 16384;
	// sth r8,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// b 0x8999b3f0
	goto loc_8999B3F0;
loc_8999B3A8:
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,-2304
	ctx.r6.s64 = ctx.r30.s64 + -2304;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,9
	ctx.r9.s64 = 9;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8999B3E4:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x8999b3e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8999B3E4;
loc_8999B3F0:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// lhz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// lhz r8,10(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// lhz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 12);
	// lhz r6,14(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// sth r3,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r3.u16);
	// sth r8,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r8.u16);
	// sth r7,12(r10)
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r7.u16);
	// sth r6,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r6.u16);
	// blt cr6,0x8999b340
	if (ctx.cr6.lt) goto loc_8999B340;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r30,-2304
	ctx.r8.s64 = ctx.r30.s64 + -2304;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r10,r30,-4672
	ctx.r10.s64 = ctx.r30.s64 + -4672;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mulli r11,r31,396
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(396));
	// addi r6,r27,-20
	ctx.r6.s64 = ctx.r27.s64 + -20;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935610
	ctx.lr = 0x8999B468;
	sub_89935610(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8999b338
	if (ctx.cr6.lt) goto loc_8999B338;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-11972
	ctx.r10.s64 = ctx.r11.s64 + -11972;
	// lbz r11,-11972(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -11972);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8999b4fc
	if (ctx.cr6.eq) goto loc_8999B4FC;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_8999B49C:
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// lbz r6,2(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lbz r9,3(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r8,-8
	ctx.r8.s64 = -8;
	// sth r3,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,-16
	ctx.r7.s64 = -16;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x89934fb8
	ctx.lr = 0x8999B4E0;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r3,r28,r29
	ctx.r3.u64 = ctx.r28.u64 + ctx.r29.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8999b49c
	if (!ctx.cr6.eq) goto loc_8999B49C;
loc_8999B4FC:
	// lis r11,-30227
	ctx.r11.s64 = -1980956672;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,4168
	ctx.r4.s64 = ctx.r11.s64 + 4168;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935c28
	ctx.lr = 0x8999B518;
	sub_89935C28(ctx, base);
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999C580) {
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
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8999c610
	if (!ctx.cr6.eq) goto loc_8999C610;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// oris r6,r10,8192
	ctx.r6.u64 = ctx.r10.u64 | 536870912;
	// stwx r8,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stwx r7,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// bl 0x8991b610
	ctx.lr = 0x8999C5DC;
	sub_8991B610(ctx, base);
	// addi r5,r30,182
	ctx.r5.s64 = ctx.r30.s64 + 182;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// addi r10,r30,67
	ctx.r10.s64 = ctx.r30.s64 + 67;
	// addi r9,r30,66
	ctx.r9.s64 = ctx.r30.s64 + 66;
	// li r11,192
	ctx.r11.s64 = 192;
	// li r8,15
	ctx.r8.s64 = 15;
	// li r7,516
	ctx.r7.s64 = 516;
	// li r3,73
	ctx.r3.s64 = 73;
	// stbx r8,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u8);
	// sthx r7,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u16);
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// bl 0x89936360
	ctx.lr = 0x8999C610;
	sub_89936360(ctx, base);
loc_8999C610:
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

DEFINE_REX_FUNC(sub_8999CF60) {
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
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r31,r10,12800
	ctx.r31.s64 = ctx.r10.s64 + 12800;
	// mulli r30,r11,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r9,r31,200
	ctx.r9.s64 = ctx.r31.s64 + 200;
	// addi r7,r31,207
	ctx.r7.s64 = ctx.r31.s64 + 207;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// li r4,15
	ctx.r4.s64 = 15;
	// lbzx r8,r30,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// lwzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lwzx r5,r30,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// bl 0x899d4440
	ctx.lr = 0x8999CFB4;
	sub_899D4440(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
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

DEFINE_REX_FUNC(sub_8999D8C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8999D8D0;
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
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r7,r30,206
	ctx.r7.s64 = ctx.r30.s64 + 206;
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// addi r28,r30,200
	ctx.r28.s64 = ctx.r30.s64 + 200;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r31,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r8,r31,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lbzx r9,r11,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// stbx r4,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u8);
	// cmplwi cr6,r9,13
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 13, ctx.xer);
	// bgt cr6,0x8999dab8
	if (ctx.cr6.gt) goto loc_8999DAB8;
	// beq cr6,0x8999d9fc
	if (ctx.cr6.eq) goto loc_8999D9FC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8999d9d0
	if (ctx.cr6.eq) goto loc_8999D9D0;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// beq cr6,0x8999d9a0
	if (ctx.cr6.eq) goto loc_8999D9A0;
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bne cr6,0x8999dac8
	if (!ctx.cr6.eq) goto loc_8999DAC8;
	// addi r9,r30,183
	ctx.r9.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x8999dc40
	if (ctx.cr6.lt) goto loc_8999DC40;
	// neg r11,r10
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// andc r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// addi r10,r8,-11368
	ctx.r10.s64 = ctx.r8.s64 + -11368;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// b 0x8999da2c
	goto loc_8999DA2C;
loc_8999D9A0:
	// addi r9,r30,183
	ctx.r9.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x8999dc40
	if (ctx.cr6.lt) goto loc_8999DC40;
	// neg r11,r10
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// andc r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// addi r10,r8,-11368
	ctx.r10.s64 = ctx.r8.s64 + -11368;
	// b 0x8999da2c
	goto loc_8999DA2C;
loc_8999D9D0:
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
	// beq cr6,0x8999dc40
	if (ctx.cr6.eq) goto loc_8999DC40;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// b 0x8999daec
	goto loc_8999DAEC;
loc_8999D9FC:
	// addi r9,r30,183
	ctx.r9.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x8999dc40
	if (ctx.cr6.lt) goto loc_8999DC40;
	// neg r11,r10
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// andc r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// addi r10,r8,-11368
	ctx.r10.s64 = ctx.r8.s64 + -11368;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
loc_8999DA2C:
	// rlwinm r11,r7,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// lwzx r7,r31,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r4,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lbzx r5,r31,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r28,4(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r10,r4,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// add r29,r8,r7
	ctx.r29.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x8999DA78;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999da94
	if (ctx.cr6.eq) goto loc_8999DA94;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x8999DA8C;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999da9c
	if (ctx.cr6.eq) goto loc_8999DA9C;
loc_8999DA94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8999daa8
	goto loc_8999DAA8;
loc_8999DA9C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899959c8
	ctx.lr = 0x8999DAA8;
	sub_899959C8(ctx, base);
loc_8999DAA8:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8999dc40
	if (ctx.cr6.eq) goto loc_8999DC40;
	// b 0x8999daec
	goto loc_8999DAEC;
loc_8999DAB8:
	// cmplwi cr6,r9,37
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 37, ctx.xer);
	// beq cr6,0x8999dba4
	if (ctx.cr6.eq) goto loc_8999DBA4;
	// cmplwi cr6,r9,38
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 38, ctx.xer);
	// beq cr6,0x8999db48
	if (ctx.cr6.eq) goto loc_8999DB48;
loc_8999DAC8:
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
	// blt cr6,0x8999dc40
	if (ctx.cr6.lt) goto loc_8999DC40;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8999DAEC:
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
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
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_8999DB48:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8999dc40
	if (!ctx.cr6.eq) goto loc_8999DC40;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,20
	ctx.r8.s64 = ctx.r30.s64 + 20;
	// stwx r9,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// addi r7,r30,36
	ctx.r7.s64 = ctx.r30.s64 + 36;
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stwx r4,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r3,4(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_8999DBA4:
	// addi r6,r30,183
	ctx.r6.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// stbx r5,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u8);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x8999dc40
	if (ctx.cr6.lt) goto loc_8999DC40;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwx r10,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r5,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u8);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lwzx r9,r31,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// lbzx r4,r31,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// addi r8,r8,255
	ctx.r8.s64 = ctx.r8.s64 + 255;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// subfic r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 <= 4294967295;
	ctx.r4.u64 = static_cast<uint64_t>(-1) - ctx.r4.u64;
	// lwz r30,0(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r30,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stbx r8,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u8);
	// stwx r3,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// and r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stbx r7,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
loc_8999DC40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A0698) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899A06A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// lis r10,-30226
	ctx.r10.s64 = -1980891136;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,-32404
	ctx.r26.s64 = ctx.r11.s64 + -32404;
	// addi r28,r10,-29624
	ctx.r28.s64 = ctx.r10.s64 + -29624;
loc_899A06B8:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r26,8012
	ctx.r10.s64 = ctx.r26.s64 + 8012;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r9,r28,792
	ctx.r9.s64 = ctx.r28.s64 + 792;
	// mulli r11,r31,34
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(34));
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r26,-104
	ctx.r6.s64 = ctx.r26.s64 + -104;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89935610
	ctx.lr = 0x899A06E8;
	sub_89935610(ctx, base);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x899a06b8
	if (ctx.cr6.lt) goto loc_899A06B8;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-11288
	ctx.r10.s64 = ctx.r11.s64 + -11288;
	// lbz r11,-11288(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -11288);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x899a0780
	if (ctx.cr6.eq) goto loc_899A0780;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_899A071C:
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lhz r4,3(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 3);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// lbz r5,5(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,6(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// addi r27,r28,-344
	ctx.r27.s64 = ctx.r28.s64 + -344;
	// lbz r7,7(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 8);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r9,9(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 9);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzu r10,10(r31)
	ea = 10 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// sth r3,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x89934fb8
	ctx.lr = 0x899A0764;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x899a071c
	if (!ctx.cr6.eq) goto loc_899A071C;
loc_899A0780:
	// li r31,0
	ctx.r31.s64 = 0;
loc_899A0784:
	// addi r9,r28,-344
	ctx.r9.s64 = ctx.r28.s64 + -344;
	// mulli r10,r31,170
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(170));
	// mulli r11,r31,396
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(396));
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935c28
	ctx.lr = 0x899A07A8;
	sub_89935C28(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x899a0784
	if (ctx.cr6.lt) goto loc_899A0784;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A1DA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899A1DA8;
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
	// lis r12,-177
	ctx.r12.s64 = -11599872;
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
	// lis r12,176
	ctx.r12.s64 = 11534336;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// stbx r3,r10,r4
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r3.u8);
	// lwzx r4,r6,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// addi r5,r11,193
	ctx.r5.s64 = ctx.r11.s64 + 193;
	// and r3,r4,r12
	ctx.r3.u64 = ctx.r4.u64 & ctx.r12.u64;
	// or r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 | ctx.r7.u64;
	// addi r8,r11,193
	ctx.r8.s64 = ctx.r11.s64 + 193;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lbzx r7,r6,r5
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r5,r6,0,8,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF00000;
	// stbx r7,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u8);
	// rlwinm r5,r5,0,10,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r3,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A3DB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899A3DB8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r28,26864(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89934058
	ctx.lr = 0x899A3DCC;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a403c
	if (ctx.cr6.eq) goto loc_899A403C;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8991b880
	ctx.lr = 0x899A3DDC;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a403c
	if (ctx.cr6.eq) goto loc_899A403C;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lis r8,-8016
	ctx.r8.s64 = -525336576;
	// lhz r27,-4592(r10)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r5,r31,162
	ctx.r5.s64 = ctx.r31.s64 + 162;
	// addi r29,r31,158
	ctx.r29.s64 = ctx.r31.s64 + 158;
	// extsh r6,r27
	ctx.r6.s64 = ctx.r27.s16;
	// lhz r11,-17120(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + -17120);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mulli r30,r6,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// sthx r11,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u16);
	// sthx r11,r30,r29
	REX_STORE_U16(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u16);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r9,r8,33028
	ctx.r9.u64 = ctx.r8.u64 | 33028;
	// clrlwi r23,r28,16
	ctx.r23.u64 = ctx.r28.u32 & 0xFFFF;
	// stwx r25,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r25.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r25,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r25.u32);
	// addi r26,r10,-4592
	ctx.r26.s64 = ctx.r10.s64 + -4592;
	// stwx r9,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r23,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r23.u32);
	// bl 0x8991b538
	ctx.lr = 0x899A3E4C;
	sub_8991B538(ctx, base);
	// addi r22,r31,48
	ctx.r22.s64 = ctx.r31.s64 + 48;
	// lis r8,384
	ctx.r8.s64 = 25165824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r8,r30,r22
	REX_STORE_U32(ctx.r30.u32 + ctx.r22.u32, ctx.r8.u32);
	// bl 0x89915d78
	ctx.lr = 0x899A3E60;
	sub_89915D78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991c578
	ctx.lr = 0x899A3E68;
	sub_8991C578(ctx, base);
	// addi r21,r31,204
	ctx.r21.s64 = ctx.r31.s64 + 204;
	// addi r20,r31,200
	ctx.r20.s64 = ctx.r31.s64 + 200;
	// addi r7,r31,192
	ctx.r7.s64 = ctx.r31.s64 + 192;
	// addi r6,r31,168
	ctx.r6.s64 = ctx.r31.s64 + 168;
	// li r11,114
	ctx.r11.s64 = 114;
	// li r18,256
	ctx.r18.s64 = 256;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stbx r11,r30,r21
	REX_STORE_U8(ctx.r30.u32 + ctx.r21.u32, ctx.r11.u8);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// stbx r11,r30,r20
	REX_STORE_U8(ctx.r30.u32 + ctx.r20.u32, ctx.r11.u8);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// sthx r18,r30,r29
	REX_STORE_U16(ctx.r30.u32 + ctx.r29.u32, ctx.r18.u16);
	// stbx r25,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r25.u8);
	// addi r19,r31,68
	ctx.r19.s64 = ctx.r31.s64 + 68;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stwx r5,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// ori r24,r9,16384
	ctx.r24.u64 = ctx.r9.u64 | 16384;
	// li r17,-1
	ctx.r17.s64 = -1;
	// addi r29,r10,-10064
	ctx.r29.s64 = ctx.r10.s64 + -10064;
loc_899A3EB4:
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// addi r7,r26,2
	ctx.r7.s64 = ctx.r26.s64 + 2;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// rlwinm r16,r8,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// lhzx r15,r9,r7
	ctx.r15.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// addi r4,r31,150
	ctx.r4.s64 = ctx.r31.s64 + 150;
	// extsh r8,r15
	ctx.r8.s64 = ctx.r15.s16;
	// lbzx r10,r16,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mulli r14,r8,208
	ctx.r14.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r16,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r29.u32);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// lwzx r10,r16,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r6.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// or r7,r7,r24
	ctx.r7.u64 = ctx.r7.u64 | ctx.r24.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lhzx r8,r8,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r26.u32);
	// sthx r27,r14,r4
	REX_STORE_U16(ctx.r14.u32 + ctx.r4.u32, ctx.r27.u16);
	// stwx r7,r14,r31
	REX_STORE_U32(ctx.r14.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r23,r14,r11
	REX_STORE_U32(ctx.r14.u32 + ctx.r11.u32, ctx.r23.u32);
	// stwx r10,r14,r9
	REX_STORE_U32(ctx.r14.u32 + ctx.r9.u32, ctx.r10.u32);
	// sthx r8,r14,r5
	REX_STORE_U16(ctx.r14.u32 + ctx.r5.u32, ctx.r8.u16);
	// stwx r25,r14,r6
	REX_STORE_U32(ctx.r14.u32 + ctx.r6.u32, ctx.r25.u32);
	// bl 0x8991b538
	ctx.lr = 0x899A3F30;
	sub_8991B538(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// addi r5,r31,158
	ctx.r5.s64 = ctx.r31.s64 + 158;
	// addi r6,r29,14
	ctx.r6.s64 = ctx.r29.s64 + 14;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// sthx r17,r14,r4
	REX_STORE_U16(ctx.r14.u32 + ctx.r4.u32, ctx.r17.u16);
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// sthx r18,r14,r5
	REX_STORE_U16(ctx.r14.u32 + ctx.r5.u32, ctx.r18.u16);
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lhzx r4,r16,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r16.u32 + ctx.r7.u32);
	// lhzx r7,r16,r6
	ctx.r7.u64 = REX_LOAD_U16(ctx.r16.u32 + ctx.r6.u32);
	// lwzx r6,r30,r22
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// rotlwi r4,r4,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// rotlwi r7,r7,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// stwx r6,r14,r11
	REX_STORE_U32(ctx.r14.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwzx r6,r30,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stwx r6,r14,r9
	REX_STORE_U32(ctx.r14.u32 + ctx.r9.u32, ctx.r6.u32);
	// stwx r4,r14,r8
	REX_STORE_U32(ctx.r14.u32 + ctx.r8.u32, ctx.r4.u32);
	// stwx r7,r14,r5
	REX_STORE_U32(ctx.r14.u32 + ctx.r5.u32, ctx.r7.u32);
	// bl 0x8991c578
	ctx.lr = 0x899A3F8C;
	sub_8991C578(ctx, base);
	// addi r5,r31,207
	ctx.r5.s64 = ctx.r31.s64 + 207;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// addi r4,r29,19
	ctx.r4.s64 = ctx.r29.s64 + 19;
	// addi r11,r29,18
	ctx.r11.s64 = ctx.r29.s64 + 18;
	// addi r10,r31,207
	ctx.r10.s64 = ctx.r31.s64 + 207;
	// addi r9,r31,200
	ctx.r9.s64 = ctx.r31.s64 + 200;
	// lhzx r6,r16,r3
	ctx.r6.u64 = REX_LOAD_U16(ctx.r16.u32 + ctx.r3.u32);
	// addi r7,r31,192
	ctx.r7.s64 = ctx.r31.s64 + 192;
	// lbzx r8,r16,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r4.u32);
	// addi r4,r31,204
	ctx.r4.s64 = ctx.r31.s64 + 204;
	// lbzx r3,r16,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r11.u32);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r16,r31,64
	ctx.r16.s64 = ctx.r31.s64 + 64;
	// addi r15,r31,66
	ctx.r15.s64 = ctx.r31.s64 + 66;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lbzx r5,r30,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// stbx r5,r14,r10
	REX_STORE_U8(ctx.r14.u32 + ctx.r10.u32, ctx.r5.u8);
	// lbzx r10,r30,r20
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r20.u32);
	// stbx r10,r14,r9
	REX_STORE_U8(ctx.r14.u32 + ctx.r9.u32, ctx.r10.u8);
	// stbx r8,r14,r7
	REX_STORE_U8(ctx.r14.u32 + ctx.r7.u32, ctx.r8.u8);
	// lbzx r9,r30,r21
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r21.u32);
	// stbx r9,r14,r4
	REX_STORE_U8(ctx.r14.u32 + ctx.r4.u32, ctx.r9.u8);
	// sthx r6,r14,r16
	REX_STORE_U16(ctx.r14.u32 + ctx.r16.u32, ctx.r6.u16);
	// stbx r3,r14,r15
	REX_STORE_U8(ctx.r14.u32 + ctx.r15.u32, ctx.r3.u8);
	// lwzx r8,r30,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r19.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stwx r8,r14,r28
	REX_STORE_U32(ctx.r14.u32 + ctx.r28.u32, ctx.r8.u32);
	// blt cr6,0x899a3eb4
	if (ctx.cr6.lt) goto loc_899A3EB4;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stb r25,12342(r10)
	REX_STORE_U8(ctx.r10.u32 + 12342, ctx.r25.u8);
	// stb r25,32555(r9)
	REX_STORE_U8(ctx.r9.u32 + 32555, ctx.r25.u8);
	// bl 0x89934058
	ctx.lr = 0x899A4028;
	sub_89934058(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x899340e8
	ctx.lr = 0x899A4030;
	sub_899340E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_899A403C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A6B08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899A6B10;
	__savegprlr_29(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r9,12800
	ctx.r11.s64 = ctx.r9.s64 + 12800;
	// lis r12,-24753
	ctx.r12.s64 = -1622212608;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// mulli r4,r8,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and r8,r3,r12
	ctx.r8.u64 = ctx.r3.u64 & ctx.r12.u64;
	// lis r12,24752
	ctx.r12.s64 = 1622147072;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r7,r11,158
	ctx.r7.s64 = ctx.r11.s64 + 158;
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// lwzx r5,r4,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r9,r11,158
	ctx.r9.s64 = ctx.r11.s64 + 158;
	// and r3,r5,r12
	ctx.r3.u64 = ctx.r5.u64 & ctx.r12.u64;
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lis r5,-30320
	ctx.r5.s64 = -1987051520;
	// lhzx r7,r4,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// sthx r7,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u16);
	// addi r5,r5,9016
	ctx.r5.s64 = ctx.r5.s64 + 9016;
	// lwzx r3,r10,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r8,r8,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// clrlwi r31,r7,16
	ctx.r31.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r7,r7,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// li r30,5
	ctx.r30.s64 = 5;
	// lhzx r3,r8,r5
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// lhzx r7,r7,r5
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// ori r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 32768;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// mullw r7,r5,r9
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// lhzx r6,r4,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// divw r30,r9,r30
	ctx.r30.u64 = uint32_t((ctx.r30.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r9.s32 / ctx.r30.s32 : 0);
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// clrlwi r7,r30,16
	ctx.r7.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r3,r8,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// srawi r29,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r7.s32 >> 31;
	// subfc r8,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// adde r7,r3,r29
	temp.u8 = (ctx.r3.u32 + ctx.r29.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 16;
	// lis r8,0
	ctx.r8.s64 = 0;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ori r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 32768;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// srawi r29,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r3.s32 >> 31;
	// extsh r5,r31
	ctx.r5.s64 = ctx.r31.s16;
	// subfc r3,r8,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r8.u32;
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// rlwinm r31,r8,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// sthx r7,r10,r6
	REX_STORE_U16(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u16);
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// adde r8,r31,r29
	temp.u8 = (ctx.r31.u32 + ctx.r29.u32 < ctx.r31.u32) | (ctx.r31.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r31.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lhzx r3,r4,r30
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r30.u32);
	// srawi r7,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 16;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// li r9,256
	ctx.r9.s64 = 256;
	// clrlwi r5,r5,23
	ctx.r5.u64 = ctx.r5.u32 & 0x1FF;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subfc r3,r5,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r9.u64 - ctx.r5.u64;
	// addi r6,r11,206
	ctx.r6.s64 = ctx.r11.s64 + 206;
	// eqv r9,r5,r9
	ctx.r9.u64 = ~(ctx.r5.u64 ^ ctx.r9.u64);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r8,r10,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// addi r9,r11,52
	ctx.r9.s64 = ctx.r11.s64 + 52;
	// addi r6,r11,200
	ctx.r6.s64 = ctx.r11.s64 + 200;
	// sthx r7,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u16);
	// addze r5,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// addi r5,r11,68
	ctx.r5.s64 = ctx.r11.s64 + 68;
	// lbzx r9,r4,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r8,r11,200
	ctx.r8.s64 = ctx.r11.s64 + 200;
	// addi r6,r11,68
	ctx.r6.s64 = ctx.r11.s64 + 68;
	// subf r7,r3,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r3.u64;
	// stbx r7,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u8);
	// lwzx r11,r4,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// stwx r11,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r11.u32);
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A8670) {
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
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r9,12800
	ctx.r11.s64 = ctx.r9.s64 + 12800;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r11,r4,-160
	ctx.r11.s64 = ctx.r4.s64 + -10485760;
	// stw r4,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899a86b8
	if (!ctx.cr0.lt) goto loc_899A86B8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899A86B8:
	// lis r10,172
	ctx.r10.s64 = 11272192;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x899a86d0
	if (!ctx.cr6.gt) goto loc_899A86D0;
loc_899A86C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x899a87b4
	goto loc_899A87B4;
loc_899A86D0:
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-21584(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -21584);
	// stw r5,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// subf r8,r11,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addis r11,r8,-120
	ctx.r11.s64 = ctx.r8.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899a86fc
	if (!ctx.cr0.lt) goto loc_899A86FC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899A86FC:
	// lis r10,132
	ctx.r10.s64 = 8650752;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899a86c4
	if (ctx.cr6.gt) goto loc_899A86C4;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r7,168(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// lhz r9,158(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 158);
	// lwz r6,164(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// lis r30,-30320
	ctx.r30.s64 = -1987051520;
	// ori r31,r8,20077
	ctx.r31.u64 = ctx.r8.u64 | 20077;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// addi r30,r30,9016
	ctx.r30.s64 = ctx.r30.s64 + 9016;
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// ori r8,r8,49216
	ctx.r8.u64 = ctx.r8.u64 | 49216;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r10,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 16;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// addi r9,r9,248
	ctx.r9.s64 = ctx.r9.s64 + 248;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// rlwinm r7,r9,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r6,r6,r30
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r30.u32);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// lhzx r7,r7,r30
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r30.u32);
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r31,r10,r7
	ctx.r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// srawi r7,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// srawi r6,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 8;
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// srawi r11,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 8;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x899d79f8
	ctx.lr = 0x899A87B4;
	sub_899D79F8(ctx, base);
loc_899A87B4:
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

DEFINE_REX_FUNC(sub_899A9880) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899A9888;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// ori r7,r8,20077
	ctx.r7.u64 = ctx.r8.u64 | 20077;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// lwz r10,-9212(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r10,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r10.u32);
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r4,r9,696
	ctx.r4.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// lwzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r8,r3,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x899a98e0
	if (!ctx.cr6.eq) goto loc_899A98E0;
	// subfic r10,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r9.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_899A98E0:
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// extsh r27,r25
	ctx.r27.s64 = ctx.r25.s16;
	// addi r30,r9,12800
	ctx.r30.s64 = ctx.r9.s64 + 12800;
	// mulli r31,r27,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// addi r22,r30,48
	ctx.r22.s64 = ctx.r30.s64 + 48;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// mulli r8,r10,696
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// lwzx r29,r31,r23
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// lwzx r26,r31,r22
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x89932c20
	ctx.lr = 0x899A9924;
	sub_89932C20(ctx, base);
	// addi r8,r30,188
	ctx.r8.s64 = ctx.r30.s64 + 188;
	// addi r6,r30,162
	ctx.r6.s64 = ctx.r30.s64 + 162;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r24,r11,9016
	ctx.r24.s64 = ctx.r11.s64 + 9016;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// sthx r10,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u16);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x899a9d90
	if (ctx.cr6.lt) goto loc_899A9D90;
	// beq cr6,0x899a9a34
	if (ctx.cr6.eq) goto loc_899A9A34;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x899a9964
	if (ctx.cr6.lt) goto loc_899A9964;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x899a9ed4
	goto loc_899A9ED4;
loc_899A9964:
	// addi r8,r30,189
	ctx.r8.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x899a99fc
	if (ctx.cr6.lt) goto loc_899A99FC;
	// beq cr6,0x899a99c8
	if (ctx.cr6.eq) goto loc_899A99C8;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x899a9ed4
	if (!ctx.cr6.lt) goto loc_899A9ED4;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899a99a0
	if (!ctx.cr6.lt) goto loc_899A99A0;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899A99A0:
	// lis r11,-112
	ctx.r11.s64 = -7340032;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899a9ed4
	if (ctx.cr6.gt) goto loc_899A9ED4;
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
	// b 0x899a9ed4
	goto loc_899A9ED4;
loc_899A99C8:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// cmplwi cr6,r7,240
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 240, ctx.xer);
	// blt cr6,0x899a9ed4
	if (ctx.cr6.lt) goto loc_899A9ED4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r7,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u8);
	// b 0x899a9ed4
	goto loc_899A9ED4;
loc_899A99FC:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// addi r7,r30,158
	ctx.r7.s64 = ctx.r30.s64 + 158;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// sthx r4,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u16);
	// ori r4,r5,2
	ctx.r4.u64 = ctx.r5.u64 | 2;
	// ori r3,r3,63
	ctx.r3.u64 = ctx.r3.u64 | 63;
	// stbx r9,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// stbx r3,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u8);
	// b 0x899a9ed4
	goto loc_899A9ED4;
loc_899A9A34:
	// addi r11,r30,164
	ctx.r11.s64 = ctx.r30.s64 + 164;
	// addi r28,r30,189
	ctx.r28.s64 = ctx.r30.s64 + 189;
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stwx r5,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u32);
	// cmplwi cr6,r7,9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 9, ctx.xer);
	// bgt cr6,0x899a9ed4
	if (ctx.cr6.gt) goto loc_899A9ED4;
	// lis r12,-30309
	ctx.r12.s64 = -1986330624;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26000
	ctx.r12.s64 = ctx.r12.s64 + -26000;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u32) {
	case 0:
		goto loc_899A9A98;
	case 1:
		goto loc_899A9AB0;
	case 2:
		goto loc_899A9AD8;
	case 3:
		goto loc_899A9B4C;
	case 4:
		goto loc_899A9B88;
	case 5:
		goto loc_899A9C54;
	case 6:
		goto loc_899A9CC8;
	case 7:
		goto loc_899A9CE4;
	case 8:
		goto loc_899A9D28;
	case 9:
		goto loc_899A9D64;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899A9A98:
	// cmpwi cr6,r5,3600
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3600, ctx.xer);
	// ble cr6,0x899a9d54
	if (!ctx.cr6.gt) goto loc_899A9D54;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x899a9ed4
	goto loc_899A9ED4;
loc_899A9AB0:
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991d830
	ctx.lr = 0x899A9AC8;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x899a9ed4
	goto loc_899A9ED4;
loc_899A9AD8:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899a9af4
	if (!ctx.cr6.lt) goto loc_899A9AF4;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899A9AF4:
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
	// blt cr6,0x899a9b24
	if (ctx.cr6.lt) goto loc_899A9B24;
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
loc_899A9B24:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991d8e0
	ctx.lr = 0x899A9B30;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899a9ed4
	if (ctx.cr6.eq) goto loc_899A9ED4;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x899a9ed4
	goto loc_899A9ED4;
loc_899A9B4C:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899a9cd8
	if (!ctx.cr6.eq) goto loc_899A9CD8;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r9,r30,194
	ctx.r9.s64 = ctx.r30.s64 + 194;
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// lbzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r4,r5,63
	ctx.r4.u64 = ctx.r5.u64 | 63;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// stbx r3,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// stbx r3,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u8);
	// b 0x899a9ed4
	goto loc_899A9ED4;
loc_899A9B88:
	// addi r8,r30,183
	ctx.r8.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stbx r9,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
	// cmplwi cr6,r9,60
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 60, ctx.xer);
	// blt cr6,0x899a9ed4
	if (ctx.cr6.lt) goto loc_899A9ED4;
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,120
	ctx.r11.s64 = 7864320;
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// lis r6,-30294
	ctx.r6.s64 = -1985347584;
	// lwz r10,-21584(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + -21584);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r6,-8056
	ctx.r4.s64 = ctx.r6.s64 + -8056;
	// subf r3,r10,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// subfc r10,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// eqv r8,r3,r11
	ctx.r8.u64 = ~(ctx.r3.u64 ^ ctx.r11.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r5,r8,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r8,r11,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x2;
	// lhzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// rlwinm r10,r11,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// rlwinm r5,r9,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r8,r10,r24
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lhzx r4,r5,r24
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r24.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// rlwinm r8,r10,17,0,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 8;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r11,r5,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0xFFFE0000;
	// srawi r5,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 16;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// srawi r4,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 16;
	// bl 0x8991d830
	ctx.lr = 0x899A9C44;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// b 0x899a9ed4
	goto loc_899A9ED4;
loc_899A9C54:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899a9c70
	if (!ctx.cr6.lt) goto loc_899A9C70;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899A9C70:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991d8e0
	ctx.lr = 0x899A9C7C;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899a9cb8
	if (!ctx.cr6.eq) goto loc_899A9CB8;
	// lhzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r23.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 384, ctx.xer);
	// blt cr6,0x899a9cb8
	if (ctx.cr6.lt) goto loc_899A9CB8;
	// cmpwi cr6,r11,640
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 640, ctx.xer);
	// bgt cr6,0x899a9cb8
	if (ctx.cr6.gt) goto loc_899A9CB8;
	// lhzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x899a9cb8
	if (ctx.cr6.lt) goto loc_899A9CB8;
	// cmpwi cr6,r11,288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 288, ctx.xer);
	// ble cr6,0x899a9ed4
	if (!ctx.cr6.gt) goto loc_899A9ED4;
loc_899A9CB8:
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x899a9ed4
	goto loc_899A9ED4;
loc_899A9CC8:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899a9d54
	if (ctx.cr6.eq) goto loc_899A9D54;
loc_899A9CD8:
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x899a9ed4
	goto loc_899A9ED4;
loc_899A9CE4:
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
	// cmplwi cr6,r9,60
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 60, ctx.xer);
	// blt cr6,0x899a9ed4
	if (ctx.cr6.lt) goto loc_899A9ED4;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// rlwinm r3,r4,0,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFC0;
	// stbx r3,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// b 0x899a9ed0
	goto loc_899A9ED0;
loc_899A9D28:
	// addi r11,r30,197
	ctx.r11.s64 = ctx.r30.s64 + 197;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// subfic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r4.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899a9ed4
	if (!ctx.cr6.eq) goto loc_899A9ED4;
loc_899A9D54:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x899a9ed4
	goto loc_899A9ED4;
loc_899A9D64:
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
	// blt cr6,0x899a9ed4
	if (ctx.cr6.lt) goto loc_899A9ED4;
	// li r7,0
	ctx.r7.s64 = 0;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// b 0x899a9ed4
	goto loc_899A9ED4;
loc_899A9D90:
	// addi r10,r30,189
	ctx.r10.s64 = ctx.r30.s64 + 189;
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bgt cr6,0x899a9ebc
	if (ctx.cr6.gt) goto loc_899A9EBC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899a9dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A9DD8;
	// bdzf 4*cr6+eq,0x899a9e0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A9E0C;
	// bdzf 4*cr6+eq,0x899a9e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A9E4C;
	// bne cr6,0x899a9e80
	if (!ctx.cr6.eq) goto loc_899A9E80;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x899a9ebc
	if (!ctx.cr6.lt) goto loc_899A9EBC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x899a9ebc
	goto loc_899A9EBC;
loc_899A9DD8:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addic. r11,r11,-4096
	ctx.xer.ca = ctx.r11.u32 > 4095;
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne 0x899a9ebc
	if (!ctx.cr0.eq) goto loc_899A9EBC;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// b 0x899a9ebc
	goto loc_899A9EBC;
loc_899A9E0C:
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
	// cmplwi cr6,r8,64
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 64, ctx.xer);
	// blt cr6,0x899a9ebc
	if (ctx.cr6.lt) goto loc_899A9EBC;
	// addi r8,r30,71
	ctx.r8.s64 = ctx.r30.s64 + 71;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// b 0x899a9ebc
	goto loc_899A9EBC;
loc_899A9E4C:
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r9,252
	ctx.r9.s64 = ctx.r9.s64 + 252;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bgt cr6,0x899a9ebc
	if (ctx.cr6.gt) goto loc_899A9EBC;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// b 0x899a9ebc
	goto loc_899A9EBC;
loc_899A9E80:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lwzx r6,r31,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,-128
	ctx.r5.s64 = -128;
	// stbx r4,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u8);
	// addi r3,r30,164
	ctx.r3.s64 = ctx.r30.s64 + 164;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r6,r6,0,3,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// or r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 | ctx.r5.u64;
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// add r9,r31,r30
	ctx.r9.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_899A9EBC:
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// addi r9,r30,69
	ctx.r9.s64 = ctx.r30.s64 + 69;
	// addi r10,r30,70
	ctx.r10.s64 = ctx.r30.s64 + 70;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
loc_899A9ED0:
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
loc_899A9ED4:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lwzx r8,r31,r22
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r9,r31,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// addi r6,r30,60
	ctx.r6.s64 = ctx.r30.s64 + 60;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// rlwinm r10,r10,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r5,r3,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r10,r24
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// lhzx r3,r5,r24
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r24.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// mullw r4,r10,r11
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r8,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r8.u32);
	// stwx r7,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899AF7D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x899AF7E0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x899b0780
	if (ctx.cr6.gt) goto loc_899B0780;
	// lis r12,-30309
	ctx.r12.s64 = -1986330624;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2016
	ctx.r12.s64 = ctx.r12.s64 + -2016;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899AF84C;
	case 1:
		goto loc_899B01BC;
	case 2:
		goto loc_899B01DC;
	case 3:
		goto loc_899B0330;
	case 4:
		goto loc_899B0564;
	case 5:
		goto loc_899B0564;
	case 6:
		goto loc_899AFB3C;
	case 7:
		goto loc_899AFA78;
	case 8:
		goto loc_899AFCF8;
	case 9:
		goto loc_899AFC00;
	case 10:
		goto loc_899B0320;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899AF84C:
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899af8fc
	if (ctx.cr6.eq) goto loc_899AF8FC;
	// bl 0x899af3f8
	ctx.lr = 0x899AF864;
	sub_899AF3F8(ctx, base);
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,44
	ctx.r9.s64 = ctx.r30.s64 + 44;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x899af8b0
	if (ctx.cr6.eq) goto loc_899AF8B0;
loc_899AF884:
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
	// blt cr6,0x899af884
	if (ctx.cr6.lt) goto loc_899AF884;
	// b 0x899af8e0
	goto loc_899AF8E0;
loc_899AF8B0:
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
loc_899AF8B4:
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
	// sth r4,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x899af8b4
	if (ctx.cr6.lt) goto loc_899AF8B4;
loc_899AF8E0:
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lhzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// b 0x899afa4c
	goto loc_899AFA4C;
loc_899AF8FC:
	// bl 0x8991c8b8
	ctx.lr = 0x899AF900;
	sub_8991C8B8(ctx, base);
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x899af928
	if (!ctx.cr6.eq) goto loc_899AF928;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// li r3,78
	ctx.r3.s64 = 78;
	// lbz r11,32555(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 32555);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,32555(r10)
	REX_STORE_U8(ctx.r10.u32 + 32555, ctx.r9.u8);
	// bl 0x89936360
	ctx.lr = 0x899AF924;
	sub_89936360(ctx, base);
	// b 0x899afa4c
	goto loc_899AFA4C;
loc_899AF928:
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
	// blt cr6,0x899afa4c
	if (ctx.cr6.lt) goto loc_899AFA4C;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-9212(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -9212);
	// addi r6,r8,9016
	ctx.r6.s64 = ctx.r8.s64 + 9016;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r10,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r10,17
	ctx.r5.u64 = ctx.r10.u32 & 0x7FFF;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// srawi r10,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r29,r9,128
	ctx.r29.s64 = ctx.r9.s64 + 128;
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rlwinm r5,r5,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r29,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// addi r11,r8,12345
	ctx.r11.s64 = ctx.r8.s64 + 12345;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhzx r9,r5,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// stw r11,-9212(r7)
	REX_STORE_U32(ctx.r7.u32 + -9212, ctx.r11.u32);
	// srawi r8,r29,16
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 16;
	// lhzx r6,r4,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// rlwinm r7,r10,4,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFF0000;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r4,r10
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// srawi r5,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 8;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// srawi r28,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 8;
	// lwzx r29,r31,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r7,-30294
	ctx.r7.s64 = -1985347584;
	// srawi r9,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 16;
	// lwzx r6,r31,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r10,r30,200
	ctx.r10.s64 = ctx.r30.s64 + 200;
	// rlwinm r11,r8,30,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1FFF;
	// addi r4,r7,-5532
	ctx.r4.s64 = ctx.r7.s64 + -5532;
	// rlwinm r27,r9,19,30,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x3;
	// addi r7,r30,207
	ctx.r7.s64 = ctx.r30.s64 + 207;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lis r9,-6
	ctx.r9.s64 = -393216;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r4,r27,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r4.u32);
	// add r5,r28,r29
	ctx.r5.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lbzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// bl 0x899d4640
	ctx.lr = 0x899AFA4C;
	sub_899D4640(ctx, base);
loc_899AFA4C:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899b0780
	if (!ctx.cr6.eq) goto loc_899B0780;
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,9448
	ctx.r8.s64 = ctx.r10.s64 + 9448;
	// lhzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// stbx r9,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899AFA78:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899AFA80;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b01cc
	if (ctx.cr6.lt) goto loc_899B01CC;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// mulli r5,r11,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// lwzx r8,r5,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwzx r11,r31,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r8,r31,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r29,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u32);
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r6,r5,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// stwx r8,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u32);
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
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
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899AFB3C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899AFB44;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b01cc
	if (ctx.cr6.lt) goto loc_899B01CC;
	// mulli r7,r11,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// lwzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// addi r5,r30,68
	ctx.r5.s64 = ctx.r30.s64 + 68;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r31,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// stwx r11,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwzx r5,r7,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r11,r31,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r7,r30,36
	ctx.r7.s64 = ctx.r30.s64 + 36;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899AFC00:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899AFC08;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b01cc
	if (ctx.cr6.lt) goto loc_899B01CC;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r6,r30,68
	ctx.r6.s64 = ctx.r30.s64 + 68;
	// addi r29,r30,68
	ctx.r29.s64 = ctx.r30.s64 + 68;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r31,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r8,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// lwzx r9,r8,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// stwx r9,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// addi r27,r30,20
	ctx.r27.s64 = ctx.r30.s64 + 20;
	// lwzx r9,r8,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r30,36
	ctx.r26.s64 = ctx.r30.s64 + 36;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r5,r6,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r5,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r5.u32);
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r4,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r4.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899AFCF8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991ba70
	ctx.lr = 0x899AFD00;
	sub_8991BA70(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x899b01cc
	if (ctx.cr6.lt) goto loc_899B01CC;
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// addi r27,r11,9016
	ctx.r27.s64 = ctx.r11.s64 + 9016;
	// mulli r29,r10,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r5,r7,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// addi r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 + 68;
	// srawi r3,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 5;
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// lhzx r9,r5,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r27.u32);
	// lwzx r8,r29,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mullw r5,r7,r3
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// stwx r8,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// srawi. r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x899afd60
	if (!ctx.cr0.lt) goto loc_899AFD60;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
loc_899AFD60:
	// addi r11,r30,194
	ctx.r11.s64 = ctx.r30.s64 + 194;
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r12,-8369
	ctx.r12.s64 = -548470784;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// lbzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// and r4,r9,r12
	ctx.r4.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r7,r9,-5572
	ctx.r7.s64 = ctx.r9.s64 + -5572;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r30,52
	ctx.r24.s64 = ctx.r30.s64 + 52;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r12,8368
	ctx.r12.s64 = 548405248;
	// addi r26,r30,196
	ctx.r26.s64 = ctx.r30.s64 + 196;
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r9,r3,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// lbzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stwx r8,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r8.u32);
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r11,r5,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// stwx r3,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r3.u32);
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// and r8,r11,r12
	ctx.r8.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// lbzx r5,r29,r26
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r26.u32);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r23,r11,r7
	ctx.r23.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bgt cr6,0x899b0124
	if (ctx.cr6.gt) goto loc_899B0124;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899aff48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AFF48;
	// bdzf 4*cr6+eq,0x899affd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AFFD0;
	// bdzf 4*cr6+eq,0x899b000c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B000C;
	// bne cr6,0x899b00fc
	if (!ctx.cr6.eq) goto loc_899B00FC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x89932b18
	ctx.lr = 0x899AFE20;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x89932d30
	ctx.lr = 0x899AFE2C;
	sub_89932D30(ctx, base);
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r7,r29,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899affc0
	if (!ctx.cr6.eq) goto loc_899AFFC0;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899b0124
	if (ctx.cr6.eq) goto loc_899B0124;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lbz r5,1(r23)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r23.u32 + 1);
	// lbz r4,0(r23)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// bl 0x8991db50
	ctx.lr = 0x899AFE70;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b0124
	if (ctx.cr6.eq) goto loc_899B0124;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-5528
	ctx.r11.s64 = ctx.r11.s64 + -5528;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_899AFE88:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lhz r9,6(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// lhz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// rotlwi r7,r9,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 8);
	// rotlwi r6,r8,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lwzu r9,12(r29)
	ea = 12 + ctx.r29.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// srawi r11,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
	// lwz r7,4(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// lhzx r21,r31,r10
	ctx.r21.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r5,r31,r24
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// extsh r8,r21
	ctx.r8.s64 = ctx.r21.s16;
	// lwzx r26,r31,r25
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r20,r21,1,22,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0x3FE;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// rlwinm r9,r8,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// rotlwi r4,r4,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// lhzx r8,r20,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r27.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// mullw r21,r10,r8
	ctx.r21.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// srawi r11,r21,8
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r9,r10,224
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(224));
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x899cda00
	ctx.lr = 0x899AFF2C;
	sub_899CDA00(ctx, base);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// clrlwi r7,r28,16
	ctx.r7.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x899afe88
	if (ctx.cr6.lt) goto loc_899AFE88;
	// b 0x899b0124
	goto loc_899B0124;
loc_899AFF48:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r8,0
	ctx.r8.s64 = 0;
loc_899AFF50:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// ble cr6,0x899aff6c
	if (!ctx.cr6.gt) goto loc_899AFF6C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899AFF6C:
	// bge cr6,0x899aff7c
	if (!ctx.cr6.lt) goto loc_899AFF7C;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
loc_899AFF7C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x899aff50
	if (ctx.cr6.lt) goto loc_899AFF50;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r10,r11,23
	ctx.r10.u64 = ctx.r11.u32 & 0x1FF;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x899b0124
	if (!ctx.cr6.eq) goto loc_899B0124;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,194
	ctx.r11.s64 = ctx.r30.s64 + 194;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
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
loc_899AFFC0:
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x899b0124
	goto loc_899B0124;
loc_899AFFD0:
	// addi r11,r30,197
	ctx.r11.s64 = ctx.r30.s64 + 197;
	// addi r9,r30,194
	ctx.r9.s64 = ctx.r30.s64 + 194;
	// lbzx r8,r29,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r7,r29,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// subfic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r4.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899b0124
	if (!ctx.cr6.eq) goto loc_899B0124;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x899b0124
	goto loc_899B0124;
loc_899B000C:
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
	// cmplwi cr6,r8,120
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 120, ctx.xer);
	// blt cr6,0x899b003c
	if (ctx.cr6.lt) goto loc_899B003C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// b 0x899b0124
	goto loc_899B0124;
loc_899B003C:
	// li r5,8
	ctx.r5.s64 = 8;
	// lbz r4,2(r23)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + 2);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991db50
	ctx.lr = 0x899B004C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b0124
	if (ctx.cr6.eq) goto loc_899B0124;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwzx r5,r31,r24
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// lwzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// ori r4,r7,20077
	ctx.r4.u64 = ctx.r7.u64 | 20077;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// ori r29,r6,57344
	ctx.r29.u64 = ctx.r6.u64 | 57344;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwzx r3,r31,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// rlwinm r7,r3,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// srawi r3,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 16;
	// addi r7,r6,128
	ctx.r7.s64 = ctx.r6.s64 + 128;
	// clrlwi r11,r3,17
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFF;
	// rlwinm r4,r7,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r28,r6,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lhzx r7,r4,r27
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r27.u32);
	// rlwinm r11,r11,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lhzx r4,r28,r27
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r27.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r4,r4,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// mullw r11,r7,r29
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// srawi r7,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// li r6,116
	ctx.r6.s64 = 116;
	// li r3,3
	ctx.r3.s64 = 3;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// bl 0x899a8438
	ctx.lr = 0x899B00F8;
	sub_899A8438(ctx, base);
	// b 0x899b0124
	goto loc_899B0124;
loc_899B00FC:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbzx r8,r29,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// andc r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// stbx r4,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r4.u8);
	// stbx r9,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
loc_899B0124:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991b770
	ctx.lr = 0x899B012C;
	sub_8991B770(ctx, base);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r6,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r29,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r3,8(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r3,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899B01BC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x899aa060
	ctx.lr = 0x899B01C4;
	sub_899AA060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899b0780
	if (!ctx.cr6.eq) goto loc_899B0780;
loc_899B01CC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_899B01D0:
	// bl 0x899af268
	ctx.lr = 0x899B01D4;
	sub_899AF268(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899B01DC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B01E4;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// blt cr6,0x899b01d0
	if (ctx.cr6.lt) goto loc_899B01D0;
	// bl 0x899a9f48
	ctx.lr = 0x899B01FC;
	sub_899A9F48(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899b0244
	if (ctx.cr6.eq) goto loc_899B0244;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x899b0280
	if (!ctx.cr6.eq) goto loc_899B0280;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x899b0280
	if (!ctx.cr6.lt) goto loc_899B0280;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x899B023C;
	sub_8991B610(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899B0244:
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
	// bne cr6,0x899b026c
	if (!ctx.cr6.eq) goto loc_899B026C;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899b0780
	if (!ctx.cr6.eq) goto loc_899B0780;
loc_899B026C:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x899B0274;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899B0280:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lhzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r8,r31,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r3,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899B0320:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x899aa4a0
	ctx.lr = 0x899B0328;
	sub_899AA4A0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899B0330:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B0338;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// blt cr6,0x899b01d0
	if (ctx.cr6.lt) goto loc_899B01D0;
	// bl 0x899a9f48
	ctx.lr = 0x899B0350;
	sub_899A9F48(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mulli r8,r9,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x899b03b4
	if (!ctx.cr6.eq) goto loc_899B03B4;
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899b03b4
	if (ctx.cr6.eq) goto loc_899B03B4;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,16
	ctx.r9.s64 = 16;
	// stwx r10,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x899B03A0;
	sub_8991B610(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899B03B4:
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,196
	ctx.r9.s64 = ctx.r30.s64 + 196;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r10,r8,-5492
	ctx.r10.s64 = ctx.r8.s64 + -5492;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r11,r10
	ctx.r20.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8991db50
	ctx.lr = 0x899B03E4;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b0780
	if (ctx.cr6.eq) goto loc_899B0780;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lbz r9,1(r20)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r20.u32 + 1);
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r28,r30,32
	ctx.r28.s64 = ctx.r30.s64 + 32;
	// addi r22,r30,48
	ctx.r22.s64 = ctx.r30.s64 + 48;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// li r24,0
	ctx.r24.s64 = 0;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r7,r11
	ctx.r27.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwzx r7,r30,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,4(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// lis r21,2
	ctx.r21.s64 = 131072;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r25,r11,9016
	ctx.r25.s64 = ctx.r11.s64 + 9016;
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r6,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u32);
loc_899B049C:
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r31,r22
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r8,r31,r23
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// rlwinm r6,r30,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// addi r5,r30,128
	ctx.r5.s64 = ctx.r30.s64 + 128;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r6,r25
	ctx.r3.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r25.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lhzx r11,r4,r25
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r25.u32);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r6,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0xFFFFC000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,14,0,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r27,r11,r8
	ctx.r27.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r26,r10,r21
	ctx.r26.u64 = ctx.r10.u64 + ctx.r21.u64;
	// ble cr6,0x899b0548
	if (!ctx.cr6.gt) goto loc_899B0548;
	// li r28,0
	ctx.r28.s64 = 0;
loc_899B0514:
	// addi r11,r28,20
	ctx.r11.s64 = ctx.r28.s64 + 20;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r7,r11,13,0,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899cc2e0
	ctx.lr = 0x899B0530;
	sub_899CC2E0(ctx, base);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// lbz r9,1(r20)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r20.u32 + 1);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x899b0514
	if (ctx.cr6.lt) goto loc_899B0514;
loc_899B0548:
	// addi r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899b049c
	if (ctx.cr6.lt) goto loc_899B049C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899B0564:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899B056C;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// blt cr6,0x899b01d0
	if (ctx.cr6.lt) goto loc_899B01D0;
	// bl 0x899a9f48
	ctx.lr = 0x899B0584;
	sub_899A9F48(ctx, base);
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// rlwinm r8,r9,0,12,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// rlwinm r8,r8,0,9,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// lwzx r7,r11,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r6,r7,0,8,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF00000;
	// rlwinm r6,r6,0,10,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// lhzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x899b0780
	if (ctx.cr6.eq) goto loc_899B0780;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899b06b4
	if (ctx.cr6.eq) goto loc_899B06B4;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// beq cr6,0x899b05fc
	if (ctx.cr6.eq) goto loc_899B05FC;
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
	// blt cr6,0x899b0780
	if (ctx.cr6.lt) goto loc_899B0780;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899b06e8
	goto loc_899B06E8;
loc_899B05FC:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x899b0624
	if (!ctx.cr6.eq) goto loc_899B0624;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x899b06e0
	goto loc_899B06E0;
loc_899B0624:
	// addi r9,r30,196
	ctx.r9.s64 = ctx.r30.s64 + 196;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r10,r8,-5572
	ctx.r10.s64 = ctx.r8.s64 + -5572;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r11,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// bl 0x8991db50
	ctx.lr = 0x899B0650;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b0780
	if (ctx.cr6.eq) goto loc_899B0780;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// ori r7,r9,20077
	ctx.r7.u64 = ctx.r9.u64 | 20077;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r4,r31,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addis r3,r5,-24
	ctx.r3.s64 = ctx.r5.s64 + -1572864;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r8,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 16;
	// clrlwi r11,r8,17
	ctx.r11.u64 = ctx.r8.u32 & 0x7FFF;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x1FFFF;
	// addi r6,r11,240
	ctx.r6.s64 = ctx.r11.s64 + 240;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// bl 0x899b74c0
	ctx.lr = 0x899B06AC;
	sub_899B74C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899B06B4:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899b0780
	if (ctx.cr6.eq) goto loc_899B0780;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x899B06DC;
	sub_89936360(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_899B06E0:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899B06E8:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lhzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r3,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_899B0780:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BF278) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899BF280;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lhz r28,26864(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89934058
	ctx.lr = 0x899BF298;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899bf2ac
	if (!ctx.cr6.eq) goto loc_899BF2AC;
loc_899BF2A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_899BF2AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991f608
	ctx.lr = 0x899BF2B4;
	sub_8991F608(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899bf2a0
	if (ctx.cr6.eq) goto loc_899BF2A0;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r24,r11,-4592
	ctx.r24.s64 = ctx.r11.s64 + -4592;
	// lhz r29,-4592(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// bl 0x8991b880
	ctx.lr = 0x899BF2D4;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bf2a0
	if (ctx.cr6.eq) goto loc_899BF2A0;
	// lhz r27,0(r24)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-16208
	ctx.r10.s64 = -1062207488;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// mulli r30,r9,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r5,r10,260
	ctx.r5.u64 = ctx.r10.u64 | 260;
	// clrlwi r20,r28,16
	ctx.r20.u64 = ctx.r28.u32 & 0xFFFF;
	// stwx r26,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r26,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r26.u32);
	// stwx r5,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u32);
	// stwx r20,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r20.u32);
	// bl 0x8991b538
	ctx.lr = 0x899BF324;
	sub_8991B538(ctx, base);
	// addi r23,r31,48
	ctx.r23.s64 = ctx.r31.s64 + 48;
	// addi r22,r31,52
	ctx.r22.s64 = ctx.r31.s64 + 52;
	// lis r4,576
	ctx.r4.s64 = 37748736;
	// rlwinm r11,r25,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r4,r30,r23
	REX_STORE_U32(ctx.r30.u32 + ctx.r23.u32, ctx.r4.u32);
	// stwx r11,r30,r22
	REX_STORE_U32(ctx.r30.u32 + ctx.r22.u32, ctx.r11.u32);
	// bl 0x8991c578
	ctx.lr = 0x899BF344;
	sub_8991C578(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// addi r9,r31,158
	ctx.r9.s64 = ctx.r31.s64 + 158;
	// addi r7,r31,162
	ctx.r7.s64 = ctx.r31.s64 + 162;
	// addi r8,r10,9448
	ctx.r8.s64 = ctx.r10.s64 + 9448;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r10,256
	ctx.r10.s64 = 256;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addi r19,r31,204
	ctx.r19.s64 = ctx.r31.s64 + 204;
	// sthx r10,r30,r9
	REX_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u16);
	// addi r18,r31,200
	ctx.r18.s64 = ctx.r31.s64 + 200;
	// sthx r10,r30,r7
	REX_STORE_U16(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u16);
	// extsh r25,r29
	ctx.r25.s64 = ctx.r29.s16;
	// addi r6,r31,168
	ctx.r6.s64 = ctx.r31.s64 + 168;
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// li r11,116
	ctx.r11.s64 = 116;
	// ori r3,r4,32768
	ctx.r3.u64 = ctx.r4.u64 | 32768;
	// li r4,1
	ctx.r4.s64 = 1;
	// stbx r11,r30,r19
	REX_STORE_U8(ctx.r30.u32 + ctx.r19.u32, ctx.r11.u8);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stbx r11,r30,r18
	REX_STORE_U8(ctx.r30.u32 + ctx.r18.u32, ctx.r11.u8);
	// lis r9,-16208
	ctx.r9.s64 = -1062207488;
	// stwx r3,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r3.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stwx r25,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r25.u32);
	// stbx r4,r25,r8
	REX_STORE_U8(ctx.r25.u32 + ctx.r8.u32, ctx.r4.u8);
	// lis r17,39
	ctx.r17.s64 = 2555904;
	// ori r21,r9,256
	ctx.r21.u64 = ctx.r9.u64 | 256;
	// addi r29,r10,1096
	ctx.r29.s64 = ctx.r10.s64 + 1096;
loc_899BF3B4:
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// rlwinm r16,r28,4,0,27
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r24,2
	ctx.r9.s64 = ctx.r24.s64 + 2;
	// addi r8,r29,8
	ctx.r8.s64 = ctx.r29.s64 + 8;
	// addi r7,r31,148
	ctx.r7.s64 = ctx.r31.s64 + 148;
	// lbzx r6,r16,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r11.u32);
	// addi r5,r31,150
	ctx.r5.s64 = ctx.r31.s64 + 150;
	// lwzx r4,r16,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r29.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// lhzx r15,r10,r9
	ctx.r15.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r10,r16,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r8.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r15
	ctx.r6.s64 = ctx.r15.s16;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// mulli r14,r6,208
	ctx.r14.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lhzx r8,r8,r24
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r24.u32);
	// stwx r20,r14,r3
	REX_STORE_U32(ctx.r14.u32 + ctx.r3.u32, ctx.r20.u32);
	// sthx r27,r14,r5
	REX_STORE_U16(ctx.r14.u32 + ctx.r5.u32, ctx.r27.u16);
	// sthx r8,r14,r7
	REX_STORE_U16(ctx.r14.u32 + ctx.r7.u32, ctx.r8.u16);
	// or r7,r4,r21
	ctx.r7.u64 = ctx.r4.u64 | ctx.r21.u64;
	// stwx r10,r14,r9
	REX_STORE_U32(ctx.r14.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r26,r14,r11
	REX_STORE_U32(ctx.r14.u32 + ctx.r11.u32, ctx.r26.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stwx r7,r14,r31
	REX_STORE_U32(ctx.r14.u32 + ctx.r31.u32, ctx.r7.u32);
	// bl 0x8991b538
	ctx.lr = 0x899BF428;
	sub_8991B538(ctx, base);
	// lwzx r9,r30,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// lis r10,33
	ctx.r10.s64 = 2162688;
	// stwx r9,r14,r6
	REX_STORE_U32(ctx.r14.u32 + ctx.r6.u32, ctx.r9.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwzx r8,r30,r22
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// stwx r8,r14,r5
	REX_STORE_U32(ctx.r14.u32 + ctx.r5.u32, ctx.r8.u32);
	// stwx r10,r14,r4
	REX_STORE_U32(ctx.r14.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r17,r14,r11
	REX_STORE_U32(ctx.r14.u32 + ctx.r11.u32, ctx.r17.u32);
	// bl 0x8991c578
	ctx.lr = 0x899BF45C;
	sub_8991C578(ctx, base);
	// addi r6,r29,12
	ctx.r6.s64 = ctx.r29.s64 + 12;
	// addi r5,r29,14
	ctx.r5.s64 = ctx.r29.s64 + 14;
	// addi r7,r31,207
	ctx.r7.s64 = ctx.r31.s64 + 207;
	// addi r4,r31,207
	ctx.r4.s64 = ctx.r31.s64 + 207;
	// addi r3,r31,206
	ctx.r3.s64 = ctx.r31.s64 + 206;
	// lhzx r9,r16,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r16.u32 + ctx.r6.u32);
	// addi r10,r31,158
	ctx.r10.s64 = ctx.r31.s64 + 158;
	// lbzx r6,r16,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r5.u32);
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// addi r8,r31,192
	ctx.r8.s64 = ctx.r31.s64 + 192;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r28,r31,200
	ctx.r28.s64 = ctx.r31.s64 + 200;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r16,r31,204
	ctx.r16.s64 = ctx.r31.s64 + 204;
	// addi r15,r31,44
	ctx.r15.s64 = ctx.r31.s64 + 44;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// lbzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// stbx r6,r14,r8
	REX_STORE_U8(ctx.r14.u32 + ctx.r8.u32, ctx.r6.u8);
	// stbx r9,r14,r3
	REX_STORE_U8(ctx.r14.u32 + ctx.r3.u32, ctx.r9.u8);
	// sthx r26,r14,r10
	REX_STORE_U16(ctx.r14.u32 + ctx.r10.u32, ctx.r26.u16);
	// stbx r7,r14,r4
	REX_STORE_U8(ctx.r14.u32 + ctx.r4.u32, ctx.r7.u8);
	// lbzx r6,r30,r18
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r18.u32);
	// stbx r6,r14,r28
	REX_STORE_U8(ctx.r14.u32 + ctx.r28.u32, ctx.r6.u8);
	// lbzx r5,r30,r19
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r19.u32);
	// stbx r5,r14,r16
	REX_STORE_U8(ctx.r14.u32 + ctx.r16.u32, ctx.r5.u8);
	// stwx r25,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r25.u32);
	// blt cr6,0x899bf3b4
	if (ctx.cr6.lt) goto loc_899BF3B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r25,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 9) & 0xFFFFFE00;
	// lhzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addi r11,r11,12032
	ctx.r11.s64 = ctx.r11.s64 + 12032;
loc_899BF4E4:
	// lhzx r8,r30,r23
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r23.u32);
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lhzx r6,r30,r22
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r22.u32);
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r3,r8,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// or r5,r3,r8
	ctx.r5.u64 = ctx.r3.u64 | ctx.r8.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stwx r5,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r5.u32);
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// stwx r9,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r9.u32);
	// blt cr6,0x899bf4e4
	if (ctx.cr6.lt) goto loc_899BF4E4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C1900) {
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
	ctx.lr = 0x899C1918;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c1934
	if (!ctx.cr6.eq) goto loc_899C1934;
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
loc_899C1934:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,5968
	ctx.r3.s64 = ctx.r11.s64 + 5968;
	// bl 0x89915de0
	ctx.lr = 0x899C1940;
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

DEFINE_REX_FUNC(sub_899C1B08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899C1B10;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r25,r11,-15832
	ctx.r25.s64 = ctx.r11.s64 + -15832;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// addi r8,r25,-720
	ctx.r8.s64 = ctx.r25.s64 + -720;
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
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x89934b48
	ctx.lr = 0x899C1B58;
	sub_89934B48(ctx, base);
	// addi r11,r25,-720
	ctx.r11.s64 = ctx.r25.s64 + -720;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,648
	ctx.r6.s64 = ctx.r11.s64 + 648;
	// li r5,80
	ctx.r5.s64 = 80;
	// sth r7,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r7.u16);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r5,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// li r9,-20
	ctx.r9.s64 = -20;
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934b48
	ctx.lr = 0x899C1B98;
	sub_89934B48(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// addi r29,r25,-720
	ctx.r29.s64 = ctx.r25.s64 + -720;
	// ori r28,r10,32768
	ctx.r28.u64 = ctx.r10.u64 | 32768;
	// addi r26,r11,22448
	ctx.r26.s64 = ctx.r11.s64 + 22448;
loc_899C1BB0:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_899C1BB8:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r3,r11,4
	ctx.r3.u64 = ctx.r11.u64 | 4;
	// bl 0x89935610
	ctx.lr = 0x899C1BD4;
	sub_89935610(ctx, base);
	// addi r31,r31,16384
	ctx.r31.s64 = ctx.r31.s64 + 16384;
	// addi r30,r30,600
	ctx.r30.s64 = ctx.r30.s64 + 600;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x899c1bb8
	if (ctx.cr6.lt) goto loc_899C1BB8;
	// addi r11,r25,-720
	ctx.r11.s64 = ctx.r25.s64 + -720;
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// addi r11,r11,720
	ctx.r11.s64 = ctx.r11.s64 + 720;
	// addi r27,r27,60
	ctx.r27.s64 = ctx.r27.s64 + 60;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899c1bb0
	if (ctx.cr6.lt) goto loc_899C1BB0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C22E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899C22E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8991bc58
	ctx.lr = 0x899C22F4;
	sub_8991BC58(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899c23dc
	if (ctx.cr6.eq) goto loc_899C23DC;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C2310;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c23dc
	if (ctx.cr6.eq) goto loc_899C23DC;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r9,r10,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r11,158
	ctx.r8.s64 = ctx.r11.s64 + 158;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// lhzx r31,r9,r8
	ctx.r31.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r8,r9,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r3,r7,9016
	ctx.r3.s64 = ctx.r7.s64 + 9016;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// lwzx r10,r9,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// rlwinm r6,r31,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x3FE;
	// lbzx r5,r9,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// rlwinm r4,r11,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// ori r7,r7,20480
	ctx.r7.u64 = ctx.r7.u64 | 20480;
	// lhzx r11,r6,r3
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r3.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhzx r6,r4,r3
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r11,r4,r7
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// rlwinm r7,r3,15,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0xFFFF8000;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899C23A0;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c23d4
	if (ctx.cr6.eq) goto loc_899C23D4;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899C23B4;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c23d4
	if (!ctx.cr6.eq) goto loc_899C23D4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x899cc3d0
	ctx.lr = 0x899C23D4;
	sub_899CC3D0(ctx, base);
loc_899C23D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C23DC;
	sub_89932A38(ctx, base);
loc_899C23DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C2A80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899C2A88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// mulli r29,r10,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x899c2b18
	if (ctx.cr6.gt) goto loc_899C2B18;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899c2ad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C2AD4;
	// bdzf 4*cr6+eq,0x899c2ad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C2AD4;
	// bdzf 4*cr6+eq,0x899c2ad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C2AD4;
	// bdzf 4*cr6+eq,0x899c2b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C2B10;
	// bdzf 4*cr6+eq,0x899c2ae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C2AE4;
	// bdzf 4*cr6+eq,0x899c2ae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C2AE4;
	// bne cr6,0x899c2ae4
	if (!ctx.cr6.eq) goto loc_899C2AE4;
loc_899C2AD4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8991c048
	ctx.lr = 0x899C2ADC;
	sub_8991C048(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899C2AE4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899C2AEC;
	sub_8991B9F0(ctx, base);
	// extsh r30,r3
	ctx.r30.s64 = ctx.r3.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x899c2b10
	if (ctx.cr6.lt) goto loc_899C2B10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x899c2258
	ctx.lr = 0x899C2B00;
	sub_899C2258(ctx, base);
	// mulli r11,r30,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// oris r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 3145728;
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
loc_899C2B10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u32);
loc_899C2B18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C3108) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899C3110;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lhz r25,26864(r11)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// lbz r23,4946(r10)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 4946);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89934058
	ctx.lr = 0x899C312C;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c3358
	if (ctx.cr6.eq) goto loc_899C3358;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8991b880
	ctx.lr = 0x899C313C;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c3358
	if (ctx.cr6.eq) goto loc_899C3358;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r26,r11,-4592
	ctx.r26.s64 = ctx.r11.s64 + -4592;
	// lhz r10,9536(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 9536);
	// lhz r28,-4592(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x899c3198
	if (ctx.cr6.lt) goto loc_899C3198;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// ori r7,r8,20077
	ctx.r7.u64 = ctx.r8.u64 | 20077;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// clrlwi r11,r5,17
	ctx.r11.u64 = ctx.r5.u32 & 0x7FFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r4,17,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0xFFFF;
	// sth r10,9536(r9)
	REX_STORE_U16(ctx.r9.u32 + 9536, ctx.r10.u16);
loc_899C3198:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// extsh r8,r28
	ctx.r8.s64 = ctx.r28.s16;
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// mulli r30,r8,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhz r27,-17120(r9)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r9.u32 + -17120);
	// sthx r27,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u16);
	// clrlwi r7,r27,16
	ctx.r7.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r25,r25,16
	ctx.r25.u64 = ctx.r25.u32 & 0xFFFF;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r5,r25,-19
	ctx.r5.s64 = ctx.r25.s64 + -19;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r11,r31,162
	ctx.r11.s64 = ctx.r31.s64 + 162;
	// srawi r4,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// sthx r27,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u16);
	// cntlzw r6,r5
	ctx.r6.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// ori r5,r7,20
	ctx.r5.u64 = ctx.r7.u64 | 20;
	// stwx r25,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r25.u32);
	// clrlwi r4,r4,27
	ctx.r4.u64 = ctx.r4.u32 & 0x1F;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r5,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stwx r4,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r4.u32);
	// stwx r29,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r29.u32);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r3,-30294
	ctx.r3.s64 = -1985347584;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r3,2336
	ctx.r10.s64 = ctx.r3.s64 + 2336;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8991b538
	ctx.lr = 0x899C323C;
	sub_8991B538(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991c578
	ctx.lr = 0x899C3244;
	sub_8991C578(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// extsb r4,r23
	ctx.r4.s64 = ctx.r23.s8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991c678
	ctx.lr = 0x899C3254;
	sub_8991C678(ctx, base);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,12024(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12024);
	// bl 0x8991cac0
	ctx.lr = 0x899C3264;
	sub_8991CAC0(ctx, base);
	// lhz r26,2(r26)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r26.u32 + 2);
	// addi r9,r31,172
	ctx.r9.s64 = ctx.r31.s64 + 172;
	// addi r6,r31,176
	ctx.r6.s64 = ctx.r31.s64 + 176;
	// lhz r8,0(r24)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// extsh r7,r26
	ctx.r7.s64 = ctx.r26.s16;
	// addi r5,r31,168
	ctx.r5.s64 = ctx.r31.s64 + 168;
	// mulli r23,r7,208
	ctx.r23.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// stwx r29,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r29.u32);
	// stwx r29,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r29.u32);
	// stwx r29,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r29.u32);
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// extsh r10,r27
	ctx.r10.s64 = ctx.r27.s16;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lis r9,-16336
	ctx.r9.s64 = -1070596096;
	// addi r7,r31,158
	ctx.r7.s64 = ctx.r31.s64 + 158;
	// sthx r28,r23,r4
	REX_STORE_U16(ctx.r23.u32 + ctx.r4.u32, ctx.r28.u16);
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// srawi r5,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 6;
	// stwx r25,r23,r3
	REX_STORE_U32(ctx.r23.u32 + ctx.r3.u32, ctx.r25.u32);
	// ori r4,r9,16
	ctx.r4.u64 = ctx.r9.u64 | 16;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stwx r4,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r4.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r10,r23,r11
	REX_STORE_U32(ctx.r23.u32 + ctx.r11.u32, ctx.r10.u32);
	// sthx r5,r23,r7
	REX_STORE_U16(ctx.r23.u32 + ctx.r7.u32, ctx.r5.u16);
	// stwx r29,r23,r6
	REX_STORE_U32(ctx.r23.u32 + ctx.r6.u32, ctx.r29.u32);
	// bl 0x8991b538
	ctx.lr = 0x899C32D4;
	sub_8991B538(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991c578
	ctx.lr = 0x899C32DC;
	sub_8991C578(ctx, base);
	// lhz r9,2(r24)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r24.u32 + 2);
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// rotlwi r11,r9,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// stwx r11,r23,r8
	REX_STORE_U32(ctx.r23.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r30,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stwx r11,r23,r6
	REX_STORE_U32(ctx.r23.u32 + ctx.r6.u32, ctx.r11.u32);
	// addi r10,r31,207
	ctx.r10.s64 = ctx.r31.s64 + 207;
	// stwx r29,r23,r5
	REX_STORE_U32(ctx.r23.u32 + ctx.r5.u32, ctx.r29.u32);
	// addi r9,r31,207
	ctx.r9.s64 = ctx.r31.s64 + 207;
	// lwzx r7,r30,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// addi r8,r31,206
	ctx.r8.s64 = ctx.r31.s64 + 206;
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// stwx r7,r23,r3
	REX_STORE_U32(ctx.r23.u32 + ctx.r3.u32, ctx.r7.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbzx r4,r30,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// stbx r4,r23,r9
	REX_STORE_U8(ctx.r23.u32 + ctx.r9.u32, ctx.r4.u8);
	// addi r9,r31,204
	ctx.r9.s64 = ctx.r31.s64 + 204;
	// stbx r5,r23,r8
	REX_STORE_U8(ctx.r23.u32 + ctx.r8.u32, ctx.r5.u8);
	// addi r7,r31,204
	ctx.r7.s64 = ctx.r31.s64 + 204;
	// lbzx r11,r30,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r23,r10
	REX_STORE_U8(ctx.r23.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r5,r30,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// stbx r5,r23,r7
	REX_STORE_U8(ctx.r23.u32 + ctx.r7.u32, ctx.r5.u8);
loc_899C3358:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C3F48) {
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
	ctx.lr = 0x899C3F60;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c3f78
	if (!ctx.cr6.eq) goto loc_899C3F78;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899C3F78:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,15968
	ctx.r3.s64 = ctx.r11.s64 + 15968;
	// bl 0x89915de0
	ctx.lr = 0x899C3F84;
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

DEFINE_REX_FUNC(sub_899C41B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899C41B8;
	__savegprlr_25(ctx, base);
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
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899c41f0
	if (ctx.cr6.lt) goto loc_899C41F0;
	// bne cr6,0x899c4410
	if (!ctx.cr6.eq) goto loc_899C4410;
	// bl 0x899c3fd0
	ctx.lr = 0x899C41E8;
	sub_899C3FD0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899C41F0:
	// addi r29,r30,162
	ctx.r29.s64 = ctx.r30.s64 + 162;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// lhzx r8,r31,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// lwzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r4,r28
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r5,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r5.u32);
	// lhzx r4,r31,r26
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// addic. r11,r3,-160
	ctx.xer.ca = ctx.r3.u32 > 159;
	ctx.r11.s64 = ctx.r3.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c4254
	if (!ctx.cr0.lt) goto loc_899C4254;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C4254:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// ble cr6,0x899c426c
	if (!ctx.cr6.gt) goto loc_899C426C;
loc_899C425C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899C426C:
	// rlwinm r11,r10,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// lhzx r7,r11,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r4,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r4.u32);
	// lhzx r3,r31,r27
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addic. r11,r11,-512
	ctx.xer.ca = ctx.r11.u32 > 511;
	ctx.r11.s64 = ctx.r11.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c42ac
	if (!ctx.cr0.lt) goto loc_899C42AC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C42AC:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x899c425c
	if (ctx.cr6.gt) goto loc_899C425C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932b18
	ctx.lr = 0x899C42BC;
	sub_89932B18(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932d30
	ctx.lr = 0x899C42C8;
	sub_89932D30(ctx, base);
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899c4364
	if (ctx.cr6.lt) goto loc_899C4364;
	// bne cr6,0x899c437c
	if (!ctx.cr6.eq) goto loc_899C437C;
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
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x899c4304
	if (!ctx.cr6.eq) goto loc_899C4304;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
loc_899C4304:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lhzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// clrlwi r10,r5,23
	ctx.r10.u64 = ctx.r5.u32 & 0x1FF;
loc_899C4324:
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// beq cr6,0x899c4350
	if (ctx.cr6.eq) goto loc_899C4350;
	// bge cr6,0x899c433c
	if (!ctx.cr6.lt) goto loc_899C433C;
	// lhzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// sthx r8,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u16);
loc_899C433C:
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x899c4350
	if (!ctx.cr6.gt) goto loc_899C4350;
	// lhzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sthx r8,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u16);
loc_899C4350:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x899c4324
	if (ctx.cr6.lt) goto loc_899C4324;
	// b 0x899c437c
	goto loc_899C437C;
loc_899C4364:
	// lhzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// bgt cr6,0x899c437c
	if (ctx.cr6.gt) goto loc_899C437C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
loc_899C437C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b770
	ctx.lr = 0x899C4384;
	sub_8991B770(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C4394;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c4410
	if (ctx.cr6.eq) goto loc_899C4410;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899C43A4;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c4410
	if (ctx.cr6.eq) goto loc_899C4410;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lwzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lis r8,-30296
	ctx.r8.s64 = -1985478656;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r8,r8,-27576
	ctx.r8.s64 = ctx.r8.s64 + -27576;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// rlwinm r11,r4,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
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
	// bl 0x899cbb90
	ctx.lr = 0x899C4408;
	sub_899CBB90(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C4410;
	sub_89932A38(ctx, base);
loc_899C4410:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C6090) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x899C6098;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r29,26864(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89934058
	ctx.lr = 0x899C60AC;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c6260
	if (ctx.cr6.eq) goto loc_899C6260;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8991b880
	ctx.lr = 0x899C60BC;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c6260
	if (ctx.cr6.eq) goto loc_899C6260;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// clrlwi r24,r29,16
	ctx.r24.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lis r11,-16336
	ctx.r11.s64 = -1070596096;
	// lhz r3,-4592(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// mulli r29,r7,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// stwx r24,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r24.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r5,r11,272
	ctx.r5.u64 = ctx.r11.u64 | 272;
	// stwx r30,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r30.u32);
	// addi r27,r10,-4592
	ctx.r27.s64 = ctx.r10.s64 + -4592;
	// stwx r30,r29,r6
	REX_STORE_U32(ctx.r29.u32 + ctx.r6.u32, ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stwx r5,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r5.u32);
	// bl 0x8991b538
	ctx.lr = 0x899C6114;
	sub_8991B538(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991c578
	ctx.lr = 0x899C611C;
	sub_8991C578(ctx, base);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r11,4946(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4946);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8991c678
	ctx.lr = 0x899C6134;
	sub_8991C678(ctx, base);
	// lis r3,-30294
	ctx.r3.s64 = -1985347584;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r3,2524
	ctx.r10.s64 = ctx.r3.s64 + 2524;
	// addi r23,r31,200
	ctx.r23.s64 = ctx.r31.s64 + 200;
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r22,256
	ctx.r22.s64 = 256;
	// ori r25,r10,256
	ctx.r25.u64 = ctx.r10.u64 | 256;
loc_899C6154:
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r27,2
	ctx.r9.s64 = ctx.r27.s64 + 2;
	// lbz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// rlwinm r7,r28,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,9(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// addi r4,r31,150
	ctx.r4.s64 = ctx.r31.s64 + 150;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r21,r31,8
	ctx.r21.s64 = ctx.r31.s64 + 8;
	// lhzx r20,r7,r9
	ctx.r20.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// or r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 | ctx.r25.u64;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// extsh r10,r20
	ctx.r10.s64 = ctx.r20.s16;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mulli r19,r10,208
	ctx.r19.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// stwx r7,r19,r31
	REX_STORE_U32(ctx.r19.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r24,r19,r3
	REX_STORE_U32(ctx.r19.u32 + ctx.r3.u32, ctx.r24.u32);
	// sthx r11,r19,r5
	REX_STORE_U16(ctx.r19.u32 + ctx.r5.u32, ctx.r11.u16);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// sthx r26,r19,r4
	REX_STORE_U16(ctx.r19.u32 + ctx.r4.u32, ctx.r26.u16);
	// stwx r8,r19,r21
	REX_STORE_U32(ctx.r19.u32 + ctx.r21.u32, ctx.r8.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stwx r7,r19,r9
	REX_STORE_U32(ctx.r19.u32 + ctx.r9.u32, ctx.r7.u32);
	// bl 0x8991b538
	ctx.lr = 0x899C61BC;
	sub_8991B538(ctx, base);
	// addi r6,r31,158
	ctx.r6.s64 = ctx.r31.s64 + 158;
	// lhz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 10);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lhzu r10,12(r30)
	ea = 12 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// sthx r22,r19,r6
	REX_STORE_U16(ctx.r19.u32 + ctx.r6.u32, ctx.r22.u16);
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// stwx r11,r19,r5
	REX_STORE_U32(ctx.r19.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// lwzx r9,r29,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r21,r31,52
	ctx.r21.s64 = ctx.r31.s64 + 52;
	// stwx r9,r19,r8
	REX_STORE_U32(ctx.r19.u32 + ctx.r8.u32, ctx.r9.u32);
	// stwx r10,r19,r7
	REX_STORE_U32(ctx.r19.u32 + ctx.r7.u32, ctx.r10.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwzx r11,r29,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r8,r19,r21
	REX_STORE_U32(ctx.r19.u32 + ctx.r21.u32, ctx.r8.u32);
	// bl 0x8991c578
	ctx.lr = 0x899C6214;
	sub_8991C578(ctx, base);
	// addi r7,r31,207
	ctx.r7.s64 = ctx.r31.s64 + 207;
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// addi r5,r31,207
	ctx.r5.s64 = ctx.r31.s64 + 207;
	// addi r4,r31,204
	ctx.r4.s64 = ctx.r31.s64 + 204;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// lbzx r9,r29,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// stbx r9,r19,r5
	REX_STORE_U8(ctx.r19.u32 + ctx.r5.u32, ctx.r9.u8);
	// lbzx r8,r29,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r23.u32);
	// stbx r8,r19,r4
	REX_STORE_U8(ctx.r19.u32 + ctx.r4.u32, ctx.r8.u8);
	// stbx r8,r19,r3
	REX_STORE_U8(ctx.r19.u32 + ctx.r3.u32, ctx.r8.u8);
	// blt cr6,0x899c6154
	if (ctx.cr6.lt) goto loc_899C6154;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x899340e8
	ctx.lr = 0x899C6254;
	sub_899340E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899C6260:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C77B0) {
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
	ctx.lr = 0x899C77C8;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c77e4
	if (!ctx.cr6.eq) goto loc_899C77E4;
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
loc_899C77E4:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,30192
	ctx.r3.s64 = ctx.r11.s64 + 30192;
	// bl 0x89915de0
	ctx.lr = 0x899C77F0;
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

DEFINE_REX_FUNC(sub_899C7E60) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r31,r11,22520
	ctx.r31.s64 = ctx.r11.s64 + 22520;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// addi r8,r31,208
	ctx.r8.s64 = ctx.r31.s64 + 208;
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
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x89934b48
	ctx.lr = 0x899C7EB8;
	sub_89934B48(ctx, base);
	// lis r7,-30305
	ctx.r7.s64 = -1986068480;
	// addi r5,r31,208
	ctx.r5.s64 = ctx.r31.s64 + 208;
	// addi r30,r7,19396
	ctx.r30.s64 = ctx.r7.s64 + 19396;
	// addi r4,r31,640
	ctx.r4.s64 = ctx.r31.s64 + 640;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89935610
	ctx.lr = 0x899C7ED8;
	sub_89935610(ctx, base);
	// addi r11,r31,208
	ctx.r11.s64 = ctx.r31.s64 + 208;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,72
	ctx.r5.s64 = ctx.r11.s64 + 72;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935610
	ctx.lr = 0x899C7EF4;
	sub_89935610(ctx, base);
	// addi r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 + 208;
	// addi r11,r31,640
	ctx.r11.s64 = ctx.r31.s64 + 640;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,360
	ctx.r5.s64 = ctx.r10.s64 + 360;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89935610
	ctx.lr = 0x899C7F14;
	sub_89935610(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_899C8568) {
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
	ctx.lr = 0x899C8580;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c8598
	if (!ctx.cr6.eq) goto loc_899C8598;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899C8598:
	// lis r11,-30307
	ctx.r11.s64 = -1986199552;
	// addi r3,r11,-31632
	ctx.r3.s64 = ctx.r11.s64 + -31632;
	// bl 0x89915de0
	ctx.lr = 0x899C85A4;
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

DEFINE_REX_FUNC(sub_899C86F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r11,25000
	ctx.r9.s64 = ctx.r11.s64 + 25000;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r10,216
	ctx.r10.s64 = 216;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
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
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x89934b48
	ctx.lr = 0x899C873C;
	sub_89934B48(ctx, base);
	// bl 0x89934a08
	ctx.lr = 0x899C8740;
	sub_89934A08(ctx, base);
	// bl 0x89935468
	ctx.lr = 0x899C8744;
	sub_89935468(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899C8990) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899C8998;
	__savegprlr_25(ctx, base);
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
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stwx r7,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addic. r11,r4,-160
	ctx.xer.ca = ctx.r4.u32 > 159;
	ctx.r11.s64 = ctx.r4.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r6,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r6.u32);
	// bge 0x899c89f4
	if (!ctx.cr0.lt) goto loc_899C89F4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C89F4:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// ble cr6,0x899c8a0c
	if (!ctx.cr6.gt) goto loc_899C8A0C;
loc_899C89FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899C8A0C:
	// lhzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r11,r10,-512
	ctx.xer.ca = ctx.r10.u32 > 511;
	ctx.r11.s64 = ctx.r10.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c8a20
	if (!ctx.cr0.lt) goto loc_899C8A20;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C8A20:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x899c89fc
	if (ctx.cr6.gt) goto loc_899C89FC;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r26,r30,36
	ctx.r26.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r25,r30,32
	ctx.r25.s64 = ctx.r30.s64 + 32;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r7.u32);
	// bl 0x8991db50
	ctx.lr = 0x899C8A94;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c8b24
	if (ctx.cr6.eq) goto loc_899C8B24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899C8AA4;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c8b24
	if (ctx.cr6.eq) goto loc_899C8B24;
	// addi r30,r30,158
	ctx.r30.s64 = ctx.r30.s64 + 158;
	// lwzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r11,9016
	ctx.r9.s64 = ctx.r11.s64 + 9016;
	// lhzx r7,r31,r30
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r30.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// rlwinm r5,r11,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// lhzx r9,r4,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// rlwinm r5,r7,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r4,r6,15,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0xFFFF8000;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C8B04;
	sub_89932A38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932cb0
	ctx.lr = 0x899C8B0C;
	sub_89932CB0(ctx, base);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lhzx r6,r31,r30
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x899cb940
	ctx.lr = 0x899C8B24;
	sub_899CB940(ctx, base);
loc_899C8B24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CA398) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899CA3A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x899CA3B0;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899ca3c0
	if (!ctx.cr6.eq) goto loc_899CA3C0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899CA3C0:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r31,r10,12800
	ctx.r31.s64 = ctx.r10.s64 + 12800;
	// lis r8,-16208
	ctx.r8.s64 = -1062207488;
	// lhz r30,-4592(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// extsh r5,r30
	ctx.r5.s64 = ctx.r30.s16;
	// lhz r3,26864(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 26864);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mulli r28,r5,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// stwx r3,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r8,260
	ctx.r11.u64 = ctx.r8.u64 | 260;
	// stwx r10,r28,r6
	REX_STORE_U32(ctx.r28.u32 + ctx.r6.u32, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r11,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u32);
	// stwx r10,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r10.u32);
	// bl 0x8991b538
	ctx.lr = 0x899CA410;
	sub_8991B538(ctx, base);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// lis r8,352
	ctx.r8.s64 = 23068672;
	// rlwinm r7,r29,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r8,r28,r10
	REX_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r7,r28,r9
	REX_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r7.u32);
	// bl 0x8991c578
	ctx.lr = 0x899CA430;
	sub_8991C578(ctx, base);
	// addi r6,r31,162
	ctx.r6.s64 = ctx.r31.s64 + 162;
	// addi r5,r31,158
	ctx.r5.s64 = ctx.r31.s64 + 158;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// addi r9,r31,204
	ctx.r9.s64 = ctx.r31.s64 + 204;
	// addi r8,r31,200
	ctx.r8.s64 = ctx.r31.s64 + 200;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r11,116
	ctx.r11.s64 = 116;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// sthx r10,r28,r6
	REX_STORE_U16(ctx.r28.u32 + ctx.r6.u32, ctx.r10.u16);
	// sthx r10,r28,r5
	REX_STORE_U16(ctx.r28.u32 + ctx.r5.u32, ctx.r10.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r7,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r7.u32);
	// stbx r11,r28,r9
	REX_STORE_U8(ctx.r28.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r11,r28,r8
	REX_STORE_U8(ctx.r28.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CB210) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// addi r7,r10,56
	ctx.r7.s64 = ctx.r10.s64 + 56;
	// addi r8,r10,52
	ctx.r8.s64 = ctx.r10.s64 + 52;
	// addi r5,r10,60
	ctx.r5.s64 = ctx.r10.s64 + 60;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r7,r11,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stwx r4,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// lhzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addic. r9,r5,-160
	ctx.xer.ca = ctx.r5.u32 > 159;
	ctx.r9.s64 = ctx.r5.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r4,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u32);
	// bge 0x899cb264
	if (!ctx.cr0.lt) goto loc_899CB264;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899CB264:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// ble cr6,0x899cb278
	if (!ctx.cr6.gt) goto loc_899CB278;
loc_899CB26C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_899CB278:
	// lhzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addic. r9,r8,-512
	ctx.xer.ca = ctx.r8.u32 > 511;
	ctx.r9.s64 = ctx.r8.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x899cb28c
	if (!ctx.cr0.lt) goto loc_899CB28C;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899CB28C:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// bgt cr6,0x899cb26c
	if (ctx.cr6.gt) goto loc_899CB26C;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// addi r8,r10,24
	ctx.r8.s64 = ctx.r10.s64 + 24;
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// clrlwi r4,r5,30
	ctx.r4.u64 = ctx.r5.u32 & 0x3;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r4,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwzx r9,r6,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// b 0x8991b770
	sub_8991B770(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CB6E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899CB6E8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// lwz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// ori r5,r8,20077
	ctx.r5.u64 = ctx.r8.u64 | 20077;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// lis r4,-30305
	ctx.r4.s64 = -1986068480;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// rlwinm r22,r7,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r4,16744
	ctx.r29.s64 = ctx.r4.s64 + 16744;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// li r5,3
	ctx.r5.s64 = 3;
	// rlwinm r11,r7,19,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x3;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r4,r22,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r29.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r9,r4,49360
	ctx.r9.u64 = ctx.r4.u64 | 3234856960;
	// sth r6,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r6.u16);
	// stw r5,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// addi r28,r10,4
	ctx.r28.s64 = ctx.r10.s64 + 4;
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8991a858
	ctx.lr = 0x899CB778;
	sub_8991A858(ctx, base);
	// addi r8,r29,6
	ctx.r8.s64 = ctx.r29.s64 + 6;
	// li r7,519
	ctx.r7.s64 = 519;
	// stw r27,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// stw r26,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// stw r24,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r24.u32);
	// addi r5,r29,8
	ctx.r5.s64 = ctx.r29.s64 + 8;
	// stw r23,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r23.u32);
	// stw r25,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r25.u32);
	// stb r30,138(r31)
	REX_STORE_U8(ctx.r31.u32 + 138, ctx.r30.u8);
	// sth r7,68(r31)
	REX_STORE_U16(ctx.r31.u32 + 68, ctx.r7.u16);
	// stb r6,70(r31)
	REX_STORE_U8(ctx.r31.u32 + 70, ctx.r6.u8);
	// lhzx r4,r22,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r8.u32);
	// sth r4,118(r31)
	REX_STORE_U16(ctx.r31.u32 + 118, ctx.r4.u16);
	// lbzx r3,r22,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r3,132(r31)
	REX_STORE_U16(ctx.r31.u32 + 132, ctx.r3.u16);
	// beq cr6,0x899cb870
	if (ctx.cr6.eq) goto loc_899CB870;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// ori r7,r9,32896
	ctx.r7.u64 = ctx.r9.u64 | 32896;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// li r3,22
	ctx.r3.s64 = 22;
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// li r5,116
	ctx.r5.s64 = 116;
	// addi r9,r11,11976
	ctx.r9.s64 = ctx.r11.s64 + 11976;
loc_899CB7EC:
	// addi r8,r10,21
	ctx.r8.s64 = ctx.r10.s64 + 21;
	// lwzu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r27,r10
	ctx.r27.s64 = ctx.r10.s16;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// stwx r11,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u32);
	// lhz r26,132(r31)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 132);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r10,712(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 712);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r8,708(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 708);
	// stw r31,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// stb r30,78(r11)
	REX_STORE_U8(ctx.r11.u32 + 78, ctx.r30.u8);
	// stb r30,77(r11)
	REX_STORE_U8(ctx.r11.u32 + 77, ctx.r30.u8);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r30.u8);
	// stw r30,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r30.u32);
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r4,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// stw r30,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r30,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stw r30,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// stb r30,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r30.u8);
	// stb r5,79(r11)
	REX_STORE_U8(ctx.r11.u32 + 79, ctx.r5.u8);
	// lhz r8,134(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 134);
	// sth r8,72(r11)
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r8.u16);
	// blt cr6,0x899cb7ec
	if (ctx.cr6.lt) goto loc_899CB7EC;
	// sth r30,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r30.u16);
loc_899CB870:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CC1E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899CC1F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// sth r6,116(r8)
	REX_STORE_U16(ctx.r8.u32 + 116, ctx.r6.u16);
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// ori r8,r9,20077
	ctx.r8.u64 = ctx.r9.u64 | 20077;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// extsh r31,r6
	ctx.r31.s64 = ctx.r6.s16;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// rlwinm r11,r11,19,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x3;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-16176
	ctx.r5.s64 = -1060110336;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// stw r6,48(r25)
	REX_STORE_U32(ctx.r25.u32 + 48, ctx.r6.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r6,12(r25)
	REX_STORE_U32(ctx.r25.u32 + 12, ctx.r6.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r5.u32);
	// stw r9,16(r25)
	REX_STORE_U32(ctx.r25.u32 + 16, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r30,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r30.u32);
	// stw r8,8(r25)
	REX_STORE_U32(ctx.r25.u32 + 8, ctx.r8.u32);
	// bl 0x8991a858
	ctx.lr = 0x899CC274;
	sub_8991A858(ctx, base);
	// addi r7,r31,128
	ctx.r7.s64 = ctx.r31.s64 + 128;
	// lis r6,-30320
	ctx.r6.s64 = -1987051520;
	// stw r29,52(r25)
	REX_STORE_U32(ctx.r25.u32 + 52, ctx.r29.u32);
	// rlwinm r5,r7,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// stw r28,56(r25)
	REX_STORE_U32(ctx.r25.u32 + 56, ctx.r28.u32);
	// addi r4,r6,9016
	ctx.r4.s64 = ctx.r6.s64 + 9016;
	// srawi r11,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 4;
	// rlwinm r3,r27,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x3FE;
	// li r10,192
	ctx.r10.s64 = 192;
	// li r9,519
	ctx.r9.s64 = 519;
	// lhzx r8,r5,r4
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stw r5,60(r25)
	REX_STORE_U32(ctx.r25.u32 + 60, ctx.r5.u32);
	// lhzx r4,r3,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r4.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// stb r10,71(r25)
	REX_STORE_U8(ctx.r25.u32 + 71, ctx.r10.u8);
	// stb r10,70(r25)
	REX_STORE_U8(ctx.r25.u32 + 70, ctx.r10.u8);
	// stb r30,138(r25)
	REX_STORE_U8(ctx.r25.u32 + 138, ctx.r30.u8);
	// sth r9,68(r25)
	REX_STORE_U16(ctx.r25.u32 + 68, ctx.r9.u16);
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// stw r10,64(r25)
	REX_STORE_U32(ctx.r25.u32 + 64, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CD148) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899CD150;
	__savegprlr_26(ctx, base);
	// lbz r11,139(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 139);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lwz r8,120(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,2968
	ctx.r6.s64 = ctx.r10.s64 + 2968;
	// rlwinm r7,r8,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// stb r5,139(r3)
	REX_STORE_U8(ctx.r3.u32 + 139, ctx.r5.u8);
	// lbzx r11,r7,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x899cd2c8
	if (ctx.cr6.lt) goto loc_899CD2C8;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,139(r3)
	REX_STORE_U8(ctx.r3.u32 + 139, ctx.r30.u8);
	// lhz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 116);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lwz r7,52(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// lhz r29,80(r3)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 80);
	// addi r28,r10,9016
	ctx.r28.s64 = ctx.r10.s64 + 9016;
	// lwz r5,56(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lis r10,16838
	ctx.r10.s64 = 1103495168;
	// addi r27,r11,128
	ctx.r27.s64 = ctx.r11.s64 + 128;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r31,r11,1,22,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lwz r11,-9212(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -9212);
	// ori r10,r10,20077
	ctx.r10.u64 = ctx.r10.u64 | 20077;
	// rlwinm r27,r27,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x3FE;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lhzx r31,r31,r28
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// lhzx r27,r27,r28
	ctx.r27.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r28.u32);
	// rlwinm r26,r8,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// srawi r10,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 4;
	// stw r11,-9212(r6)
	REX_STORE_U32(ctx.r6.u32 + -9212, ctx.r11.u32);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r6,r27
	ctx.r6.s64 = ctx.r27.s16;
	// mullw r31,r31,r10
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r6,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 8;
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// rlwinm r8,r10,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// rlwinm r8,r6,17,15,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0x1FFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// addi r6,r9,-32
	ctx.r6.s64 = ctx.r9.s64 + -32;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwinm r6,r9,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// add r10,r31,r5
	ctx.r10.u64 = ctx.r31.u64 + ctx.r5.u64;
	// rlwinm r5,r9,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r9,r6,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhzx r5,r5,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// sth r8,80(r3)
	REX_STORE_U16(ctx.r3.u32 + 80, ctx.r8.u16);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// mullw r5,r9,r11
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// blt cr6,0x899cd27c
	if (ctx.cr6.lt) goto loc_899CD27C;
	// sth r30,80(r3)
	REX_STORE_U16(ctx.r3.u32 + 80, ctx.r30.u16);
loc_899CD27C:
	// lhz r8,80(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 80);
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,512
	ctx.r5.s64 = 512;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r8,r8,21
	ctx.r8.s64 = ctx.r8.s64 + 21;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// oris r8,r8,16384
	ctx.r8.u64 = ctx.r8.u64 | 1073741824;
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// sth r5,44(r3)
	REX_STORE_U16(ctx.r3.u32 + 44, ctx.r5.u16);
	// stb r6,46(r3)
	REX_STORE_U8(ctx.r3.u32 + 46, ctx.r6.u8);
	// stb r6,47(r3)
	REX_STORE_U8(ctx.r3.u32 + 47, ctx.r6.u8);
	// stw r4,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
loc_899CD2C8:
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CEC08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899CEC10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899cec40
	if (ctx.cr6.eq) goto loc_899CEC40;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899cec40
	if (ctx.cr6.eq) goto loc_899CEC40;
	// lhz r10,134(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// lhz r9,134(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 134);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899ced30
	if (ctx.cr6.eq) goto loc_899CED30;
loc_899CEC40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899ce740
	ctx.lr = 0x899CEC48;
	sub_899CE740(ctx, base);
	// lhz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 100);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// sth r5,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r5.u16);
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lhz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// addi r8,r11,9016
	ctx.r8.s64 = ctx.r11.s64 + 9016;
	// lhz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 92);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwimi r9,r10,0,24,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// sth r4,52(r31)
	REX_STORE_U16(ctx.r31.u32 + 52, ctx.r4.u16);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// sth r3,56(r31)
	REX_STORE_U16(ctx.r31.u32 + 56, ctx.r3.u16);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// addi r29,r11,128
	ctx.r29.s64 = ctx.r11.s64 + 128;
	// rlwinm r4,r11,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// rlwinm r3,r29,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// lhz r9,86(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 86);
	// lhz r7,94(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 94);
	// lhz r5,102(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 102);
	// lwz r30,28(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// sth r9,84(r31)
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r9.u16);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r7.u16);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r5,100(r31)
	REX_STORE_U16(ctx.r31.u32 + 100, ctx.r5.u16);
	// lwzx r10,r6,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,120(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// srawi r9,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// lhzx r6,r3,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r8.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lhzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stw r6,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899CED30:
	// lhz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 100);
	// lhz r9,102(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 102);
	// lhz r8,94(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 94);
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r7,86(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 86);
	// lhz r6,84(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// lhz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 92);
	// sth r10,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r10.u16);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// sth r9,100(r31)
	REX_STORE_U16(ctx.r31.u32 + 100, ctx.r9.u16);
	// sth r7,84(r31)
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r7.u16);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// sth r8,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r8.u16);
	// sth r6,52(r31)
	REX_STORE_U16(ctx.r31.u32 + 52, ctx.r6.u16);
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// sth r4,56(r31)
	REX_STORE_U16(ctx.r31.u32 + 56, ctx.r4.u16);
	// lhz r3,52(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// clrlwi r10,r5,26
	ctx.r10.u64 = ctx.r5.u32 & 0x3F;
	// sth r3,86(r31)
	REX_STORE_U16(ctx.r31.u32 + 86, ctx.r3.u16);
	// lhz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// sth r9,94(r31)
	REX_STORE_U16(ctx.r31.u32 + 94, ctx.r9.u16);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,116(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 116);
	// sth r8,102(r31)
	REX_STORE_U16(ctx.r31.u32 + 102, ctx.r8.u16);
	// lwz r6,60(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stw r6,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,64(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stw r4,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r8,r3,0,24,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// lwzx r8,r4,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// lwz r5,128(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// stw r5,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r5.u32);
	// blt cr6,0x899cee34
	if (ctx.cr6.lt) goto loc_899CEE34;
	// cmplwi cr6,r9,11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 11, ctx.xer);
	// bgt cr6,0x899cee34
	if (ctx.cr6.gt) goto loc_899CEE34;
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,76(r9)
	REX_STORE_U32(ctx.r9.u32 + 76, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899CEE34:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x899cee5c
	if (ctx.cr6.lt) goto loc_899CEE5C;
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// stw r10,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899CEE5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D0DC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899d0e20
	if (ctx.cr6.lt) goto loc_899D0E20;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899d0e20
	if (ctx.cr6.gt) goto loc_899D0E20;
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
	// bge 0x899d0e08
	if (!ctx.cr0.lt) goto loc_899D0E08;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D0E08:
	// lis r10,112
	ctx.r10.s64 = 7340032;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// adde r11,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x899d0e24
	goto loc_899D0E24;
loc_899D0E20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899D0E24:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d0e48
	if (!ctx.cr6.eq) goto loc_899D0E48;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_899D0E48:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x899340e8
	ctx.lr = 0x899D0E50;
	sub_899340E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899d0e70
	if (!ctx.cr6.eq) goto loc_899D0E70;
	// li r3,-2
	ctx.r3.s64 = -2;
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
loc_899D0E70:
	// extsh r3,r31
	ctx.r3.s64 = ctx.r31.s16;
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// bgt cr6,0x899d0e88
	if (ctx.cr6.gt) goto loc_899D0E88;
	// bl 0x8991a5a0
	ctx.lr = 0x899D0E80;
	sub_8991A5A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899d0ea0
	if (!ctx.cr6.eq) goto loc_899D0EA0;
loc_899D0E88:
	// li r3,-3
	ctx.r3.s64 = -3;
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
loc_899D0EA0:
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

DEFINE_REX_FUNC(sub_899D17B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d1844
	if (ctx.cr6.eq) goto loc_899D1844;
	// bdz 0x899d1844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D1844;
	// bdz 0x899d1844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D1844;
	// bdz 0x899d1844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D1844;
	// bdz 0x899d1844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D1844;
	// bdz 0x899d17e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D17E4;
	// bdz 0x899d17e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D17E4;
	// bdz 0x899d17e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D17E4;
loc_899D17E4:
	// lbz r11,138(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 138);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,138(r3)
	REX_STORE_U8(ctx.r3.u32 + 138, ctx.r10.u8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
loc_899D1844:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,56(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,64(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lwz r9,60(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r8,138(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 138);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r9,r4,30
	ctx.r9.u64 = ctx.r4.u32 & 0x3;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r4,138(r3)
	REX_STORE_U8(ctx.r3.u32 + 138, ctx.r4.u8);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addis r11,r10,-160
	ctx.r11.s64 = ctx.r10.s64 + -10485760;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d18d4
	if (!ctx.cr0.lt) goto loc_899D18D4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D18D4:
	// lis r10,168
	ctx.r10.s64 = 11010048;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899d1908
	if (ctx.cr6.gt) goto loc_899D1908;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r10,r11,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addis r11,r10,-120
	ctx.r11.s64 = ctx.r10.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d18fc
	if (!ctx.cr0.lt) goto loc_899D18FC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D18FC:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_899D1908:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D3458) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r10,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d358c
	if (ctx.cr6.eq) goto loc_899D358C;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899d3480
	if (!ctx.cr6.eq) goto loc_899D3480;
	// rlwinm r10,r10,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_899D3480:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r8,40(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// bgt cr6,0x899d3560
	if (ctx.cr6.gt) goto loc_899D3560;
	// lis r12,-30307
	ctx.r12.s64 = -1986199552;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,13508
	ctx.r12.s64 = ctx.r12.s64 + 13508;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_899D3514;
	case 1:
		goto loc_899D3514;
	case 2:
		goto loc_899D3514;
	case 3:
		goto loc_899D3514;
	case 4:
		goto loc_899D353C;
	case 5:
		goto loc_899D353C;
	case 6:
		goto loc_899D353C;
	case 7:
		goto loc_899D353C;
	case 8:
		goto loc_899D3560;
	case 9:
		goto loc_899D3560;
	case 10:
		goto loc_899D3560;
	case 11:
		goto loc_899D3560;
	case 12:
		goto loc_899D3514;
	case 13:
		goto loc_899D3514;
	case 14:
		goto loc_899D3514;
	case 15:
		goto loc_899D3514;
	case 16:
		goto loc_899D353C;
	case 17:
		goto loc_899D353C;
	case 18:
		goto loc_899D353C;
	case 19:
		goto loc_899D353C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899D3514:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_899D3528:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_899D353C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899d3528
	if (ctx.cr6.eq) goto loc_899D3528;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_899D3560:
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
loc_899D358C:
	// lbz r11,46(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x899d35a4
	if (!ctx.cr6.lt) goto loc_899D35A4;
loc_899D3598:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D35A4:
	// addi r11,r11,254
	ctx.r11.s64 = ctx.r11.s64 + 254;
	// stb r11,46(r3)
	REX_STORE_U8(ctx.r3.u32 + 46, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D3968) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x899d3988
	if (!ctx.cr6.eq) goto loc_899D3988;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D3988:
	// lbz r11,46(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r7,r11,241
	ctx.r7.s64 = ctx.r11.s64 + 241;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r7,46(r3)
	REX_STORE_U8(ctx.r3.u32 + 46, ctx.r7.u8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r4,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D4018) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899D4020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r10,32018(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32018);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x899d42a8
	if (!ctx.cr6.eq) goto loc_899D42A8;
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x899d41f8
	if (ctx.cr6.gt) goto loc_899D41F8;
	// lis r12,-30307
	ctx.r12.s64 = -1986199552;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16488
	ctx.r12.s64 = ctx.r12.s64 + 16488;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899D40B8;
	case 1:
		goto loc_899D416C;
	case 2:
		goto loc_899D41F8;
	case 3:
		goto loc_899D41F8;
	case 4:
		goto loc_899D41F8;
	case 5:
		goto loc_899D41F8;
	case 6:
		goto loc_899D41F8;
	case 7:
		goto loc_899D41F8;
	case 8:
		goto loc_899D4090;
	case 9:
		goto loc_899D4144;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899D4090:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899D409C;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d42a8
	if (ctx.cr6.eq) goto loc_899D42A8;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899D40B0;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899d42a8
	if (!ctx.cr6.eq) goto loc_899D42A8;
loc_899D40B8:
	// bl 0x899d3fa8
	ctx.lr = 0x899D40BC;
	sub_899D3FA8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899d42a8
	if (ctx.cr6.lt) goto loc_899D42A8;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// mulli r7,r11,696
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r10,r5,25128
	ctx.r10.s64 = ctx.r5.s64 + 25128;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// addi r5,r10,24
	ctx.r5.s64 = ctx.r10.s64 + 24;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// srawi r29,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 16;
	// lwzx r5,r7,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// bl 0x89932c20
	ctx.lr = 0x899D4114;
	sub_89932C20(ctx, base);
	// rlwinm r11,r29,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0x7;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// addi r8,r10,-26008
	ctx.r8.s64 = ctx.r10.s64 + -26008;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// clrlwi r3,r28,30
	ctx.r3.u64 = ctx.r28.u32 & 0x3;
	// rlwinm r7,r9,14,0,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// bl 0x899cc518
	ctx.lr = 0x899D413C;
	sub_899CC518(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899D4144:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899D4150;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d42a8
	if (ctx.cr6.eq) goto loc_899D42A8;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899D4164;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899d42a8
	if (!ctx.cr6.eq) goto loc_899D42A8;
loc_899D416C:
	// bl 0x899d3fa8
	ctx.lr = 0x899D4170;
	sub_899D3FA8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899d42a8
	if (ctx.cr6.lt) goto loc_899D42A8;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// mulli r7,r11,696
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r10,r5,25128
	ctx.r10.s64 = ctx.r5.s64 + 25128;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// addi r5,r10,24
	ctx.r5.s64 = ctx.r10.s64 + 24;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// srawi r29,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 16;
	// lwzx r5,r7,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// bl 0x89932c20
	ctx.lr = 0x899D41C8;
	sub_89932C20(ctx, base);
	// rlwinm r11,r29,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0x1;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// addi r8,r10,-25920
	ctx.r8.s64 = ctx.r10.s64 + -25920;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// clrlwi r3,r28,30
	ctx.r3.u64 = ctx.r28.u32 & 0x3;
	// rlwinm r7,r9,14,0,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// bl 0x899cc518
	ctx.lr = 0x899D41F0;
	sub_899CC518(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899D41F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899D4204;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d42a8
	if (ctx.cr6.eq) goto loc_899D42A8;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899D4218;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899d42a8
	if (!ctx.cr6.eq) goto loc_899D42A8;
	// bl 0x899d3fa8
	ctx.lr = 0x899D4224;
	sub_899D3FA8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899d42a8
	if (ctx.cr6.lt) goto loc_899D42A8;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// mulli r7,r11,696
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r10,r5,25128
	ctx.r10.s64 = ctx.r5.s64 + 25128;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// addi r5,r10,24
	ctx.r5.s64 = ctx.r10.s64 + 24;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// clrlwi r29,r11,17
	ctx.r29.u64 = ctx.r11.u32 & 0x7FFF;
	// lwzx r5,r7,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// bl 0x89932c20
	ctx.lr = 0x899D4280;
	sub_89932C20(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r11,r10,18,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// clrlwi r3,r28,30
	ctx.r3.u64 = ctx.r28.u32 & 0x3;
	// rlwinm r7,r9,14,0,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// bl 0x899cc3d0
	ctx.lr = 0x899D42A8;
	sub_899CC3D0(ctx, base);
loc_899D42A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D5EB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30220
	ctx.r10.s64 = -1980497920;
	// addi r9,r11,6416
	ctx.r9.s64 = ctx.r11.s64 + 6416;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r10,568
	ctx.r10.s64 = ctx.r10.s64 + 568;
	// lis r5,-30214
	ctx.r5.s64 = -1980104704;
	// addi r7,r9,-160
	ctx.r7.s64 = ctx.r9.s64 + -160;
	// addi r11,r10,208
	ctx.r11.s64 = ctx.r10.s64 + 208;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r5,r5,3484
	ctx.r5.s64 = ctx.r5.s64 + 3484;
loc_899D5EE0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 + 10;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// blt cr6,0x899d5ee0
	if (ctx.cr6.lt) goto loc_899D5EE0;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_899D5F14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x899d5f14
	if (ctx.cr6.lt) goto loc_899D5F14;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D6188) {
	REX_FUNC_PROLOGUE();
	// lbz r7,46(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bge cr6,0x899d61a0
	if (!ctx.cr6.lt) goto loc_899D61A0;
loc_899D6194:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D61A0:
	// lbz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 76);
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r5,76(r3)
	REX_STORE_U8(ctx.r3.u32 + 76, ctx.r5.u8);
	// clrlwi r4,r5,30
	ctx.r4.u64 = ctx.r5.u32 & 0x3;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x899d6218
	if (!ctx.cr6.eq) goto loc_899D6218;
	// lis r9,160
	ctx.r9.s64 = 10485760;
	// subf. r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d61ec
	if (!ctx.cr0.lt) goto loc_899D61EC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D61EC:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x899d6194
	if (ctx.cr6.gt) goto loc_899D6194;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lis r9,120
	ctx.r9.s64 = 7864320;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf. r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d6210
	if (!ctx.cr0.lt) goto loc_899D6210;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D6210:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x899d6194
	if (ctx.cr6.gt) goto loc_899D6194;
loc_899D6218:
	// addi r11,r7,252
	ctx.r11.s64 = ctx.r7.s64 + 252;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r10,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3F;
	// stb r10,46(r3)
	REX_STORE_U8(ctx.r3.u32 + 46, ctx.r10.u8);
	// subfic r8,r9,255
	ctx.xer.ca = ctx.r9.u32 <= 255;
	ctx.r8.u64 = static_cast<uint64_t>(255) - ctx.r9.u64;
	// stb r8,47(r3)
	REX_STORE_U8(ctx.r3.u32 + 47, ctx.r8.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D66D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x899d66f8
	if (!ctx.cr6.eq) goto loc_899D66F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D66F8:
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D6AB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899D6AB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 16384;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x899d6b00
	if (ctx.cr6.eq) goto loc_899D6B00;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// beq cr6,0x899d6af8
	if (ctx.cr6.eq) goto loc_899D6AF8;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// beq cr6,0x899d6af0
	if (ctx.cr6.eq) goto loc_899D6AF0;
	// li r10,35
	ctx.r10.s64 = 35;
	// b 0x899d6b04
	goto loc_899D6B04;
loc_899D6AF0:
	// li r10,38
	ctx.r10.s64 = 38;
	// b 0x899d6b04
	goto loc_899D6B04;
loc_899D6AF8:
	// li r10,37
	ctx.r10.s64 = 37;
	// b 0x899d6b04
	goto loc_899D6B04;
loc_899D6B00:
	// li r10,36
	ctx.r10.s64 = 36;
loc_899D6B04:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r8,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r10,11976
	ctx.r9.s64 = ctx.r10.s64 + 11976;
	// lis r3,16838
	ctx.r3.s64 = 1103495168;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// ori r10,r3,20077
	ctx.r10.u64 = ctx.r3.u64 | 20077;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r3,128
	ctx.r3.s64 = 8388608;
	// lwzx r5,r6,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// li r30,117
	ctx.r30.s64 = 117;
	// stw r5,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// ori r5,r3,32896
	ctx.r5.u64 = ctx.r3.u64 | 32896;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// li r29,519
	ctx.r29.s64 = 519;
	// stw r5,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// li r28,192
	ctx.r28.s64 = 192;
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// li r31,7
	ctx.r31.s64 = 7;
	// lwz r8,-9212(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -9212);
	// mullw r9,r8,r10
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r9,-9212(r7)
	REX_STORE_U32(ctx.r7.u32 + -9212, ctx.r9.u32);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// li r7,160
	ctx.r7.s64 = 160;
	// srawi r3,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 16;
	// stb r10,78(r11)
	REX_STORE_U8(ctx.r11.u32 + 78, ctx.r10.u8);
	// stb r10,77(r11)
	REX_STORE_U8(ctx.r11.u32 + 77, ctx.r10.u8);
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// rlwinm r8,r3,19,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 19) & 0x3;
	// stb r10,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r10.u8);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// li r3,69
	ctx.r3.s64 = 69;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r5,52(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r10,56(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stb r30,79(r11)
	REX_STORE_U8(ctx.r11.u32 + 79, ctx.r30.u8);
	// sth r29,44(r11)
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r29.u16);
	// stb r28,46(r11)
	REX_STORE_U8(ctx.r11.u32 + 46, ctx.r28.u8);
	// stb r31,48(r11)
	REX_STORE_U8(ctx.r11.u32 + 48, ctx.r31.u8);
	// stw r7,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// stw r7,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r4,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// lhz r9,134(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 134);
	// sth r9,72(r11)
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r9.u16);
	// bl 0x89936360
	ctx.lr = 0x899D6BD8;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D7BD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899D7BE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,160
	ctx.r10.s64 = 10485760;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// subf. r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d7c08
	if (!ctx.cr0.lt) goto loc_899D7C08;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D7C08:
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r7,r9,3832
	ctx.r7.s64 = ctx.r9.s64 + 3832;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x899d7c54
	if (!ctx.cr6.lt) goto loc_899D7C54;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lis r9,120
	ctx.r9.s64 = 7864320;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r8,r11,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r11.u64;
	// subf. r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d7c44
	if (!ctx.cr0.lt) goto loc_899D7C44;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D7C44:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// blt cr6,0x899d7c58
	if (ctx.cr6.lt) goto loc_899D7C58;
loc_899D7C54:
	// li r11,1
	ctx.r11.s64 = 1;
loc_899D7C58:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d7d14
	if (!ctx.cr6.eq) goto loc_899D7D14;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991a058
	ctx.lr = 0x899D7C6C;
	sub_8991A058(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d7d14
	if (ctx.cr6.eq) goto loc_899D7D14;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r10,11976
	ctx.r8.s64 = ctx.r10.s64 + 11976;
	// rlwimi r30,r9,30,28,26
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xFFFFFFFFFFFFFFEF) | (ctx.r30.u64 & 0x10);
	// lwz r11,7904(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7904);
	// li r7,19
	ctx.r7.s64 = 19;
	// lis r6,192
	ctx.r6.s64 = 12582912;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r10,192
	ctx.r10.s64 = 192;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// li r9,115
	ctx.r9.s64 = 115;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// li r30,512
	ctx.r30.s64 = 512;
	// lwz r11,616(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 616);
	// ori r7,r6,32960
	ctx.r7.u64 = ctx.r6.u64 | 32960;
	// stw r11,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,612(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 612);
	// stw r31,44(r5)
	REX_STORE_U32(ctx.r5.u32 + 44, ctx.r31.u32);
	// stb r31,78(r5)
	REX_STORE_U8(ctx.r5.u32 + 78, ctx.r31.u8);
	// stb r31,77(r5)
	REX_STORE_U8(ctx.r5.u32 + 77, ctx.r31.u8);
	// stb r31,76(r5)
	REX_STORE_U8(ctx.r5.u32 + 76, ctx.r31.u8);
	// stw r11,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// stw r4,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// stw r31,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r31.u32);
	// stw r28,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r28.u32);
	// stw r29,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r29.u32);
	// stw r27,36(r5)
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r27.u32);
	// stw r26,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r26.u32);
	// stb r31,80(r5)
	REX_STORE_U8(ctx.r5.u32 + 80, ctx.r31.u8);
	// stb r9,79(r5)
	REX_STORE_U8(ctx.r5.u32 + 79, ctx.r9.u8);
	// sth r30,44(r5)
	REX_STORE_U16(ctx.r5.u32 + 44, ctx.r30.u16);
	// stb r10,46(r5)
	REX_STORE_U8(ctx.r5.u32 + 46, ctx.r10.u8);
	// stb r10,47(r5)
	REX_STORE_U8(ctx.r5.u32 + 47, ctx.r10.u8);
	// stw r7,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899D7D14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D8DA0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 80);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// addi r9,r10,9656
	ctx.r9.s64 = ctx.r10.s64 + 9656;
	// mulli r8,r11,92
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(92));
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x899d8dc8
	if (!ctx.cr6.eq) goto loc_899D8DC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D8DC8:
	// lbz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// stb r10,76(r3)
	REX_STORE_U8(ctx.r3.u32 + 76, ctx.r10.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899d8df4
	if (!ctx.cr6.eq) goto loc_899D8DF4;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_899D8DF4:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lbz r8,9535(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 9535);
	// lbz r10,6035(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 6035);
	// lbz r11,12266(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 12266);
	// rlwimi r8,r10,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwimi r11,r7,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D9118) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899D9120;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-30232
	ctx.r31.s64 = -1981284352;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-26756(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -26756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d9240
	if (ctx.cr6.eq) goto loc_899D9240;
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,3604(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 3604);
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addis r7,r11,125
	ctx.r7.s64 = ctx.r11.s64 + 8192000;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x899d91f8
	if (ctx.cr6.lt) goto loc_899D91F8;
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// lwz r11,-26348(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -26348);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d919c
	if (ctx.cr6.eq) goto loc_899D919C;
loc_899D9170:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r7,r30,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r30.u64;
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x899d91a8
	if (!ctx.cr6.lt) goto loc_899D91A8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899d9170
	if (!ctx.cr6.eq) goto loc_899D9170;
loc_899D919C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899D91A8:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x899dae90
	ctx.lr = 0x899D91B0;
	sub_899DAE90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d91e4
	if (ctx.cr6.eq) goto loc_899D91E4;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_899D91E4:
	// stw r30,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899D91F8:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x899dae90
	ctx.lr = 0x899D9200;
	sub_899DAE90(ctx, base);
	// lwz r10,-26756(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -26756);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,-26756(r31)
	REX_STORE_U32(ctx.r31.u32 + -26756, ctx.r3.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899D9240:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x899dae90
	ctx.lr = 0x899D9248;
	sub_899DAE90(ctx, base);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// lis r8,-30232
	ctx.r8.s64 = -1981284352;
	// stw r3,-26756(r31)
	REX_STORE_U32(ctx.r31.u32 + -26756, ctx.r3.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,3604(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 3604);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,-26348(r8)
	REX_STORE_U32(ctx.r8.u32 + -26348, ctx.r3.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DA880) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r5,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x899da938
	if (!ctx.cr6.eq) goto loc_899DA938;
	// bl 0x899dcf58
	ctx.lr = 0x899DA8AC;
	sub_899DCF58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x899da8bc
	if (!ctx.cr0.eq) goto loc_899DA8BC;
loc_899DA8B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899da8fc
	goto loc_899DA8FC;
loc_899DA8BC:
	// bl 0x899db430
	ctx.lr = 0x899DA8C0;
	sub_899DB430(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x899da8d0
	if (!ctx.cr0.eq) goto loc_899DA8D0;
loc_899DA8C8:
	// bl 0x899dcef8
	ctx.lr = 0x899DA8CC;
	sub_899DCEF8(ctx, base);
	// b 0x899da8b4
	goto loc_899DA8B4;
loc_899DA8D0:
	// bl 0x899dce80
	ctx.lr = 0x899DA8D4;
	sub_899DCE80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x899da914
	if (!ctx.cr0.eq) goto loc_899DA914;
	// bl 0x899dcda0
	ctx.lr = 0x899DA8E0;
	sub_899DCDA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x899da914
	if (!ctx.cr0.eq) goto loc_899DA914;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lwz r11,4784(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4784);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4784(r10)
	REX_STORE_U32(ctx.r10.u32 + 4784, ctx.r11.u32);
loc_899DA8F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_899DA8FC:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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
loc_899DA914:
	// lis r11,-30212
	ctx.r11.s64 = -1979973632;
	// lwz r10,3812(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3812);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899da930
	if (ctx.cr6.eq) goto loc_899DA930;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DA930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899DA930:
	// bl 0x899db1a0
	ctx.lr = 0x899DA934;
	sub_899DB1A0(ctx, base);
	// b 0x899da8c8
	goto loc_899DA8C8;
loc_899DA938:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x899da8f8
	if (!ctx.cr6.eq) goto loc_899DA8F8;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lwz r11,4784(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x899da8b4
	if (!ctx.cr6.gt) goto loc_899DA8B4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4784(r10)
	REX_STORE_U32(ctx.r10.u32 + 4784, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lwz r11,4824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899da970
	if (!ctx.cr6.eq) goto loc_899DA970;
	// bl 0x899db788
	ctx.lr = 0x899DA970;
	sub_899DB788(ctx, base);
loc_899DA970:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x899da99c
	if (!ctx.cr6.eq) goto loc_899DA99C;
	// lis r11,-30212
	ctx.r11.s64 = -1979973632;
	// lwz r10,3812(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3812);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899da994
	if (ctx.cr6.eq) goto loc_899DA994;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DA994;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899DA994:
	// bl 0x899db1a0
	ctx.lr = 0x899DA998;
	sub_899DB1A0(ctx, base);
	// bl 0x899dcef8
	ctx.lr = 0x899DA99C;
	sub_899DCEF8(ctx, base);
loc_899DA99C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x899da9cc
	ctx.lr = 0x899DA9A8;
	sub_899DA9CC(ctx, base);
	// b 0x899da8f8
	goto loc_899DA8F8;
}

DEFINE_REX_FUNC(sub_899DB300) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899db3ac
	if (ctx.cr6.eq) goto loc_899DB3AC;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899db32c
	if (ctx.cr6.eq) goto loc_899DB32C;
	// bl 0x899dba90
	ctx.lr = 0x899DB32C;
	sub_899DBA90(ctx, base);
loc_899DB32C:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899db33c
	if (ctx.cr6.eq) goto loc_899DB33C;
	// bl 0x899dba90
	ctx.lr = 0x899DB33C;
	sub_899DBA90(ctx, base);
loc_899DB33C:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899db34c
	if (ctx.cr6.eq) goto loc_899DB34C;
	// bl 0x899dba90
	ctx.lr = 0x899DB34C;
	sub_899DBA90(ctx, base);
loc_899DB34C:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899db35c
	if (ctx.cr6.eq) goto loc_899DB35C;
	// bl 0x899dba90
	ctx.lr = 0x899DB35C;
	sub_899DBA90(ctx, base);
loc_899DB35C:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899db36c
	if (ctx.cr6.eq) goto loc_899DB36C;
	// bl 0x899dba90
	ctx.lr = 0x899DB36C;
	sub_899DBA90(ctx, base);
loc_899DB36C:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899db37c
	if (ctx.cr6.eq) goto loc_899DB37C;
	// bl 0x899dba90
	ctx.lr = 0x899DB37C;
	sub_899DBA90(ctx, base);
loc_899DB37C:
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899db38c
	if (ctx.cr6.eq) goto loc_899DB38C;
	// bl 0x899dba90
	ctx.lr = 0x899DB38C;
	sub_899DBA90(ctx, base);
loc_899DB38C:
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,1264
	ctx.r11.s64 = ctx.r11.s64 + 1264;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x899db3a4
	if (ctx.cr6.eq) goto loc_899DB3A4;
	// bl 0x899dba90
	ctx.lr = 0x899DB3A4;
	sub_899DBA90(ctx, base);
loc_899DB3A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899dba90
	ctx.lr = 0x899DB3AC;
	sub_899DBA90(ctx, base);
loc_899DB3AC:
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

DEFINE_REX_FUNC(__savegprlr_21) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savegprlr_30) {
	REX_FUNC_PROLOGUE();
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_17) {
	REX_FUNC_PROLOGUE();
	// ld r17,-128(r1)
	ctx.r17.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
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

DEFINE_REX_FUNC(__restgprlr_30) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_899DBC70) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// stw r3,4832(r11)
	REX_STORE_U32(ctx.r11.u32 + 4832, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DC3D0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x899dc404
	if (!ctx.cr6.eq) goto loc_899DC404;
	// bl 0x899dcab8
	ctx.lr = 0x899DC3F0;
	sub_899DCAB8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x899dc948
	ctx.lr = 0x899DC3FC;
	sub_899DC948(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x899dc414
	goto loc_899DC414;
loc_899DC404:
	// bl 0x899e04d0
	ctx.lr = 0x899DC408;
	sub_899E04D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x899de278
	ctx.lr = 0x899DC414;
	sub_899DE278(ctx, base);
loc_899DC414:
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

DEFINE_REX_FUNC(sub_899DC550) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// stw r3,4836(r11)
	REX_STORE_U32(ctx.r11.u32 + 4836, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DC560) {
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
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r30,r11,152
	ctx.r30.s64 = ctx.r11.s64 + 152;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_899DC580:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899dc5a4
	if (ctx.cr6.eq) goto loc_899DC5A4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x899dc5a4
	if (ctx.cr6.eq) goto loc_899DC5A4;
	// bl 0x899dba90
	ctx.lr = 0x899DC59C;
	sub_899DBA90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_899DC5A4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,288
	ctx.r11.s64 = ctx.r30.s64 + 288;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899dc580
	if (ctx.cr6.lt) goto loc_899DC580;
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

DEFINE_REX_FUNC(sub_899DCAB8) {
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
	// bl 0x899db1e8
	ctx.lr = 0x899DCAC8;
	sub_899DB1E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x899dcadc
	if (!ctx.cr0.eq) goto loc_899DCADC;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r3,r11,800
	ctx.r3.s64 = ctx.r11.s64 + 800;
	// b 0x899dcae0
	goto loc_899DCAE0;
loc_899DCADC:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
loc_899DCAE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DCE80) {
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
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x899dcedc
	if (!ctx.cr6.lt) goto loc_899DCEDC;
loc_899DCEB4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899dcedc
	if (!ctx.cr6.eq) goto loc_899DCEDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899dced0
	if (ctx.cr6.eq) goto loc_899DCED0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DCED0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899DCED0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x899dceb4
	if (ctx.cr6.lt) goto loc_899DCEB4;
loc_899DCEDC:
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

DEFINE_REX_FUNC(sub_899DDBE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899DDBE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899ddce8
	if (ctx.cr6.eq) goto loc_899DDCE8;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899ddc2c
	if (ctx.cr0.eq) goto loc_899DDC2C;
	// bl 0x899e4278
	ctx.lr = 0x899DDC08;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x899ddc2c
	if (ctx.cr6.eq) goto loc_899DDC2C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1313
	ctx.r6.s64 = 1313;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x899e4268
	ctx.lr = 0x899DDC2C;
	__imp__KeBugCheckEx(ctx, base);
loc_899DDC2C:
	// lwz r30,88(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x899ddc60
	goto loc_899DDC60;
loc_899DDC3C:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,1424(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// bl 0x899e4288
	ctx.lr = 0x899DDC60;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_899DDC60:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x899ddc3c
	if (!ctx.cr6.eq) goto loc_899DDC3C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899ddc78
	if (!ctx.cr0.eq) goto loc_899DDC78;
	// stw r28,1408(r31)
	REX_STORE_U32(ctx.r31.u32 + 1408, ctx.r28.u32);
loc_899DDC78:
	// lwz r30,72(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// stw r28,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// b 0x899ddca8
	goto loc_899DDCA8;
loc_899DDC84:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,1424(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// bl 0x899e4288
	ctx.lr = 0x899DDCA8;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_899DDCA8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x899ddc84
	if (!ctx.cr6.eq) goto loc_899DDC84;
	// lwz r29,1424(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// li r30,64
	ctx.r30.s64 = 64;
loc_899DDCB8:
	// addi r11,r30,255
	ctx.r11.s64 = ctx.r30.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899ddce0
	if (ctx.cr6.eq) goto loc_899DDCE0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x899dd648
	ctx.lr = 0x899DDCE0;
	sub_899DD648(ctx, base);
loc_899DDCE0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x899ddcb8
	if (!ctx.cr6.eq) goto loc_899DDCB8;
loc_899DDCE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DF8A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r28,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// std r22,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r22.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x899df8d4
	if (ctx.cr6.eq) goto loc_899DF8D4;
	// lwz r3,1408(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x899e4208
	ctx.lr = 0x899DF8D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_899DF8D4:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DFB9C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r26,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r26.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x899dfbc8
	if (ctx.cr6.eq) goto loc_899DFBC8;
	// lwz r3,1408(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x899e4208
	ctx.lr = 0x899DFBC8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_899DFBC8:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r26,-24(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E049C) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E04C0) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E04D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30212
	ctx.r11.s64 = -1979973632;
	// lwz r3,3820(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 3820);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E05D0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x899e4308
	ctx.lr = 0x899E05F8;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x899e0820
	ctx.lr = 0x899E0600;
	sub_899E0820(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E0610) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30212
	ctx.r10.s64 = -1979973632;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,3832(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 3832);
	// stw r11,3832(r10)
	REX_STORE_U32(ctx.r10.u32 + 3832, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E0628) {
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
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1072(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1072);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899e0668
	if (ctx.cr6.eq) goto loc_899E0668;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899E0664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x899e066c
	goto loc_899E066C;
loc_899E0668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_899E066C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x899e06a0
	if (!ctx.cr6.eq) goto loc_899E06A0;
	// lis r11,-30212
	ctx.r11.s64 = -1979973632;
	// lwz r10,3832(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3832);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899e06a0
	if (ctx.cr6.eq) goto loc_899E06A0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899E0694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x899e06a4
	if (ctx.cr6.eq) goto loc_899E06A4;
loc_899E06A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_899E06A4:
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

DEFINE_REX_FUNC(sub_899E0978) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,1400(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 1400);
	// beq 0x899e09b0
	if (ctx.cr0.eq) goto loc_899E09B0;
	// lwz r10,188(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_899E099C:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x899e09b0
	if (ctx.cr6.eq) goto loc_899E09B0;
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899e099c
	if (!ctx.cr0.eq) goto loc_899E099C;
loc_899E09B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x899e09d8
	goto loc_899E09D8;
loc_899E09C4:
	// cmpwi cr6,r10,101
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 101, ctx.xer);
	// beq cr6,0x899e09e0
	if (ctx.cr6.eq) goto loc_899E09E0;
	// cmpwi cr6,r10,69
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 69, ctx.xer);
	// beq cr6,0x899e09e0
	if (ctx.cr6.eq) goto loc_899E09E0;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_899E09D8:
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x899e09c4
	if (!ctx.cr0.eq) goto loc_899E09C4;
loc_899E09E0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_899E09E4:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// beq cr6,0x899e09e4
	if (ctx.cr6.eq) goto loc_899E09E4;
	// lwz r8,188(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x899e0a10
	if (!ctx.cr6.eq) goto loc_899E0A10;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_899E0A10:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_899E0A14:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bne 0x899e0a14
	if (!ctx.cr0.eq) goto loc_899E0A14;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E1498) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899E14A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x899e1a90
	ctx.lr = 0x899E14C8;
	sub_899E1A90(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x899e14e8
	if (!ctx.cr6.eq) goto loc_899E14E8;
loc_899E14D0:
	// bl 0x899dcab8
	ctx.lr = 0x899E14D4;
	sub_899DCAB8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x899dc948
	ctx.lr = 0x899E14E0;
	sub_899DC948(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x899e15c0
	goto loc_899E15C0;
loc_899E14E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x899e14d0
	if (ctx.cr6.eq) goto loc_899E14D0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x899e151c
	if (ctx.cr6.eq) goto loc_899E151C;
	// subf r4,r11,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r11.u64;
loc_899E151C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899e1850
	ctx.lr = 0x899E152C;
	sub_899E1850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x899e1540
	if (ctx.cr0.eq) goto loc_899E1540;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// b 0x899e15c0
	goto loc_899E15C0;
loc_899E1540:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfc r10,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r30.u64 - ctx.r11.u64;
	// eqv r9,r11,r30
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// cmpwi cr6,r11,-4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -4, ctx.xer);
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// blt cr6,0x899e15a4
	if (ctx.cr6.lt) goto loc_899E15A4;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x899e15a4
	if (!ctx.cr6.lt) goto loc_899E15A4;
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899e1588
	if (ctx.cr0.eq) goto loc_899E1588;
loc_899E1574:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x899e1574
	if (!ctx.cr0.eq) goto loc_899E1574;
	// stb r11,-2(r28)
	REX_STORE_U8(ctx.r28.u32 + -2, ctx.r11.u8);
loc_899E1588:
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899e1210
	ctx.lr = 0x899E15A0;
	sub_899E1210(ctx, base);
	// b 0x899e15c0
	goto loc_899E15C0;
loc_899E15A4:
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899e0ac0
	ctx.lr = 0x899E15C0;
	sub_899E0AC0(ctx, base);
loc_899E15C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E1B30) {
	REX_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x899db798
	sub_899DB798(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E1B38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x899E1B40;
	__savegprlr_19(ctx, base);
	// lhz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lhz r8,10(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r7,2(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2);
	// lwz r6,6(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 6);
	// addi r20,r10,4032
	ctx.r20.s64 = ctx.r10.s64 + 4032;
	// addi r30,r11,-16383
	ctx.r30.s64 = ctx.r11.s64 + -16383;
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rlwinm r19,r9,0,0,16
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// stw r7,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r7.u32);
	// cmpwi cr6,r30,-16383
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -16383, ctx.xer);
	// lwz r21,12(r20)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r20.u32 + 12);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r6,-148(r1)
	REX_STORE_U32(ctx.r1.u32 + -148, ctx.r6.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// bne cr6,0x899e1bc8
	if (!ctx.cr6.eq) goto loc_899E1BC8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_899E1B90:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899e1bb0
	if (!ctx.cr6.eq) goto loc_899E1BB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x899e1b90
	if (ctx.cr6.lt) goto loc_899E1B90;
	// b 0x899e21fc
	goto loc_899E21FC;
loc_899E1BB0:
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x899e2200
	goto loc_899E2200;
loc_899E1BC8:
	// lwz r25,8(r20)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// addi r8,r1,-136
	ctx.r8.s64 = ctx.r1.s64 + -136;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r1,-152
	ctx.r28.s64 = ctx.r1.s64 + -152;
	// addi r26,r25,-1
	ctx.r26.s64 = ctx.r25.s64 + -1;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// li r22,-1
	ctx.r22.s64 = -1;
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r31.s64 = temp.s64;
	// stw r10,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwzx r10,r27,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// subfic r29,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r29.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899e1d14
	if (ctx.cr0.eq) goto loc_899E1D14;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899e1c80
	if (!ctx.cr0.eq) goto loc_899E1C80;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x899e1d14
	if (!ctx.cr6.lt) goto loc_899E1D14;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_899E1C60:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899e1c80
	if (!ctx.cr6.eq) goto loc_899E1C80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x899e1c60
	if (ctx.cr6.lt) goto loc_899E1C60;
	// b 0x899e1d14
	goto loc_899E1D14;
loc_899E1C80:
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r11.u64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x899e1cc4
	if (ctx.cr6.lt) goto loc_899E1CC4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x899e1cc8
	if (!ctx.cr6.lt) goto loc_899E1CC8;
loc_899E1CC4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_899E1CC8:
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x899e1d14
	if (ctx.cr0.lt) goto loc_899E1D14;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_899E1CE0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x899e1d14
	if (ctx.cr6.eq) goto loc_899E1D14;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x899e1d04
	if (ctx.cr6.lt) goto loc_899E1D04;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x899e1d08
	if (!ctx.cr6.lt) goto loc_899E1D08;
loc_899E1D04:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_899E1D08:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x899e1ce0
	if (!ctx.cr0.lt) goto loc_899E1CE0;
loc_899E1D14:
	// lwzx r10,r27,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r27,r28
	REX_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r10.u32);
	// bge cr6,0x899e1d5c
	if (!ctx.cr6.lt) goto loc_899E1D5C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899e1d5c
	if (ctx.cr6.eq) goto loc_899E1D5C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_899E1D54:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x899e1d54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E1D54;
loc_899E1D5C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x899e1d68
	if (ctx.cr6.eq) goto loc_899E1D68;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_899E1D68:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r25.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899e1d94
	if (!ctx.cr6.lt) goto loc_899E1D94;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x899e2200
	goto loc_899E2200;
loc_899E1D94:
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bgt cr6,0x899e207c
	if (ctx.cr6.gt) goto loc_899E207C;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r24.u64;
	// addi r9,r1,-136
	ctx.r9.s64 = ctx.r1.s64 + -136;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r6,r1,-152
	ctx.r6.s64 = ctx.r1.s64 + -152;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r31,4(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,8(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r31,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r30,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_899E1DFC:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r9,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x899e1dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E1DFC;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899E1E3C:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x899e1e50
	if (ctx.cr6.lt) goto loc_899E1E50;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x899e1e54
	goto loc_899E1E54;
loc_899E1E50:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_899E1E54:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x899e1e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E1E3C;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// addi r29,r1,-152
	ctx.r29.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// subfic r30,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r30.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899e1f84
	if (ctx.cr0.eq) goto loc_899E1F84;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899e1eec
	if (!ctx.cr0.eq) goto loc_899E1EEC;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x899e1f84
	if (!ctx.cr6.lt) goto loc_899E1F84;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_899E1ECC:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899e1eec
	if (!ctx.cr6.eq) goto loc_899E1EEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x899e1ecc
	if (ctx.cr6.lt) goto loc_899E1ECC;
	// b 0x899e1f84
	goto loc_899E1F84;
loc_899E1EEC:
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r11.u64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x899e1f30
	if (ctx.cr6.lt) goto loc_899E1F30;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x899e1f34
	if (!ctx.cr6.lt) goto loc_899E1F34;
loc_899E1F30:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_899E1F34:
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x899e1f84
	if (ctx.cr0.lt) goto loc_899E1F84;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_899E1F50:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899e1f84
	if (ctx.cr6.eq) goto loc_899E1F84;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x899e1f74
	if (ctx.cr6.lt) goto loc_899E1F74;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x899e1f78
	if (!ctx.cr6.lt) goto loc_899E1F78;
loc_899E1F74:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_899E1F78:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x899e1f50
	if (!ctx.cr0.lt) goto loc_899E1F50;
loc_899E1F84:
	// lwzx r10,r28,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r28,r29
	REX_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u32);
	// bge cr6,0x899e1fcc
	if (!ctx.cr6.lt) goto loc_899E1FCC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899e1fcc
	if (ctx.cr6.eq) goto loc_899E1FCC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_899E1FC4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x899e1fc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E1FC4;
loc_899E1FCC:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// slw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_899E2008:
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r3,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// srw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x899e2008
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E2008;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899E2048:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x899e205c
	if (ctx.cr6.lt) goto loc_899E205C;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x899e2060
	goto loc_899E2060;
loc_899E205C:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_899E2060:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x899e2048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E2048;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x899e2200
	goto loc_899E2200;
loc_899E207C:
	// lwz r5,0(r20)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x899e214c
	if (ctx.cr6.lt) goto loc_899E214C;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// srawi r9,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r9,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subf r11,r11,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,-152(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// oris r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 2147483648;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// stw r31,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r31.u32);
loc_899E20D8:
	// lwz r31,4(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r30,r31,r9
	ctx.r30.u64 = ctx.r31.u64 & ctx.r9.u64;
	// stw r30,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r30.u32);
	// srw r31,r31,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x899e20d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E20D8;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899E2118:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x899e212c
	if (ctx.cr6.lt) goto loc_899E212C;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x899e2130
	goto loc_899E2130;
loc_899E212C:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_899E2130:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x899e2118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E2118;
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x899e2200
	goto loc_899E2200;
loc_899E214C:
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// lwz r7,-152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,20(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// clrlwi r10,r7,1
	ctx.r10.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r11,r11,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r11.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
loc_899E2194:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x899e2194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E2194;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899E21D4:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x899e21e8
	if (ctx.cr6.lt) goto loc_899E21E8;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x899e21ec
	goto loc_899E21EC;
loc_899E21E8:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_899E21EC:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x899e21d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E21D4;
loc_899E21FC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_899E2200:
	// subfic r10,r21,31
	ctx.xer.ca = ctx.r21.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r21.u64;
	// lwz r11,16(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 16);
	// subfic r9,r19,0
	ctx.xer.ca = ctx.r19.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r19.u64;
	// lwz r8,-152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bne cr6,0x899e223c
	if (!ctx.cr6.eq) goto loc_899E223C;
	// lwz r11,-148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x899e2244
	goto loc_899E2244;
loc_899E223C:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x899e2248
	if (!ctx.cr6.eq) goto loc_899E2248;
loc_899E2244:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_899E2248:
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

