#include "mmpps_funcs.9.h"

DEFINE_REX_FUNC(sub_899163C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r10,586(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899163ec
	if (!ctx.cr6.eq) goto loc_899163EC;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lbz r10,32018(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32018);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x899163ec
	if (ctx.cr6.eq) goto loc_899163EC;
	// b 0x899656d0
	sub_899656D0(ctx, base);
	return;
loc_899163EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899168F8) {
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
	// bl 0x89910000
	ctx.lr = 0x89916908;
	sub_89910000(ctx, base);
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r3,r11,-21104
	ctx.r3.s64 = ctx.r11.s64 + -21104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x899dcca0
	ctx.lr = 0x8991691C;
	sub_899DCCA0(ctx, base);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lwz r11,7924(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 7924);
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r9)
	REX_STORE_U32(ctx.r9.u32 + 7924, ctx.r11.u32);
	// stb r7,9527(r8)
	REX_STORE_U8(ctx.r8.u32 + 9527, ctx.r7.u8);
	// bl 0x89916650
	ctx.lr = 0x8991693C;
	sub_89916650(ctx, base);
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

DEFINE_REX_FUNC(sub_89916A08) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,8420(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8420);
	// lwz r10,-9516(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + -9516);
	// lwz r9,20952(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20952);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,8420(r5)
	REX_STORE_U32(ctx.r5.u32 + 8420, ctx.r11.u32);
	// stw r10,-9516(r4)
	REX_STORE_U32(ctx.r4.u32 + -9516, ctx.r10.u32);
	// stw r9,20952(r31)
	REX_STORE_U32(ctx.r31.u32 + 20952, ctx.r9.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89916C90) {
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
	// bl 0x8995d020
	ctx.lr = 0x89916CA0;
	sub_8995D020(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89916cc0
	if (!ctx.cr6.eq) goto loc_89916CC0;
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
loc_89916CC0:
	// bl 0x899d9280
	ctx.lr = 0x89916CC4;
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

DEFINE_REX_FUNC(sub_899170C8) {
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
	// bl 0x89915fa0
	ctx.lr = 0x899170E0;
	sub_89915FA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89917170
	if (ctx.cr6.eq) goto loc_89917170;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// addi r9,r6,5768
	ctx.r9.s64 = ctx.r6.s64 + 5768;
	// lhz r10,-4592(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// lwz r11,7924(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 7924);
	// addi r3,r9,10
	ctx.r3.s64 = ctx.r9.s64 + 10;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r6,r9,12
	ctx.r6.s64 = ctx.r9.s64 + 12;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// addi r5,r9,6
	ctx.r5.s64 = ctx.r9.s64 + 6;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// addi r30,r9,14
	ctx.r30.s64 = ctx.r9.s64 + 14;
	// stwx r4,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sthx r9,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u16);
	// lhzu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthx r3,r10,r6
	REX_STORE_U16(ctx.r10.u32 + ctx.r6.u32, ctx.r3.u16);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// sthx r9,r10,r8
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u16);
	// lhzu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthx r8,r10,r5
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r8.u16);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sthx r6,r10,r31
	REX_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u16);
	// sthx r4,r10,r30
	REX_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r4.u16);
	// stw r11,7924(r7)
	REX_STORE_U32(ctx.r7.u32 + 7924, ctx.r11.u32);
	// bl 0x89934058
	ctx.lr = 0x8991716C;
	sub_89934058(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_89917170:
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

DEFINE_REX_FUNC(sub_89917738) {
	REX_FUNC_PROLOGUE();
	// b 0x89960790
	sub_89960790(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89917AA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x89917AA8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lis r24,-30274
	ctx.r24.s64 = -1984036864;
	// lis r9,28672
	ctx.r9.s64 = 1879048192;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,12000(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12000);
	// lwz r29,7104(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 7104);
	// stb r25,534(r24)
	REX_STORE_U8(ctx.r24.u32 + 534, ctx.r25.u8);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,12000(r10)
	REX_STORE_U32(ctx.r10.u32 + 12000, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x89917ae4
	if (!ctx.cr6.gt) goto loc_89917AE4;
	// addis r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -268435456;
	// stw r11,12000(r10)
	REX_STORE_U32(ctx.r10.u32 + 12000, ctx.r11.u32);
loc_89917AE4:
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lbz r3,32019(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 32019);
	// lbz r31,9539(r9)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r9.u32 + 9539);
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r4,6054(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 6054);
	// lbz r10,12266(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 12266);
	// lbz r9,9535(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 9535);
	// lbz r8,6035(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 6035);
loc_89917B18:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x89917b40
	if (ctx.cr6.eq) goto loc_89917B40;
	// ble cr6,0x89917b34
	if (!ctx.cr6.gt) goto loc_89917B34;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// b 0x89917b40
	goto loc_89917B40;
loc_89917B34:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stb r8,6035(r5)
	REX_STORE_U8(ctx.r5.u32 + 6035, ctx.r8.u8);
loc_89917B40:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x89917b68
	if (ctx.cr6.eq) goto loc_89917B68;
	// ble cr6,0x89917b5c
	if (!ctx.cr6.gt) goto loc_89917B5C;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// b 0x89917b68
	goto loc_89917B68;
loc_89917B5C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r9,9535(r6)
	REX_STORE_U8(ctx.r6.u32 + 9535, ctx.r9.u8);
loc_89917B68:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x89917b90
	if (ctx.cr6.eq) goto loc_89917B90;
	// ble cr6,0x89917b84
	if (!ctx.cr6.gt) goto loc_89917B84;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// b 0x89917b90
	goto loc_89917B90;
loc_89917B84:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,12266(r7)
	REX_STORE_U8(ctx.r7.u32 + 12266, ctx.r10.u8);
loc_89917B90:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x89917b18
	if (ctx.cr6.lt) goto loc_89917B18;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// stb r9,9535(r6)
	REX_STORE_U8(ctx.r6.u32 + 9535, ctx.r9.u8);
	// stb r10,12266(r7)
	REX_STORE_U8(ctx.r7.u32 + 12266, ctx.r10.u8);
	// stb r8,6035(r5)
	REX_STORE_U8(ctx.r5.u32 + 6035, ctx.r8.u8);
	// lwz r9,524(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 524);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x89917c00
	if (ctx.cr6.eq) goto loc_89917C00;
	// subf. r11,r9,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bge 0x89917bd0
	if (!ctx.cr0.lt) goto loc_89917BD0;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89917BD0:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lwz r11,540(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 540);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x89917be8
	if (!ctx.cr6.lt) goto loc_89917BE8;
	// stw r9,7104(r28)
	REX_STORE_U32(ctx.r28.u32 + 7104, ctx.r9.u32);
	// b 0x89917c00
	goto loc_89917C00;
loc_89917BE8:
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x89917bf8
	if (!ctx.cr6.lt) goto loc_89917BF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x89917bfc
	goto loc_89917BFC;
loc_89917BF8:
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
loc_89917BFC:
	// stw r11,7104(r28)
	REX_STORE_U32(ctx.r28.u32 + 7104, ctx.r11.u32);
loc_89917C00:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r11,3884
	ctx.r30.s64 = ctx.r11.s64 + 3884;
	// addi r31,r10,26920
	ctx.r31.s64 = ctx.r10.s64 + 26920;
	// addi r27,r9,14120
	ctx.r27.s64 = ctx.r9.s64 + 14120;
	// addi r23,r8,9656
	ctx.r23.s64 = ctx.r8.s64 + 9656;
loc_89917C28:
	// mulli r29,r26,92
	ctx.r29.s64 = static_cast<int64_t>(ctx.r26.u64 * static_cast<uint64_t>(92));
	// lwzx r11,r29,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89917c74
	if (ctx.cr6.eq) goto loc_89917C74;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x89917C54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r23,76
	ctx.r7.s64 = ctx.r23.s64 + 76;
	// lbz r11,534(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 534);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r25,r5,24
	ctx.r25.u64 = ctx.r5.u32 & 0xFF;
	// lbzx r4,r29,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// stbx r28,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u8);
	// stb r25,534(r24)
	REX_STORE_U8(ctx.r24.u32 + 534, ctx.r25.u8);
	// stbx r4,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u8);
loc_89917C74:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// blt cr6,0x89917c28
	if (ctx.cr6.lt) goto loc_89917C28;
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// clrlwi r29,r25,24
	ctx.r29.u64 = ctx.r25.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stb r3,-31402(r28)
	REX_STORE_U8(ctx.r28.u32 + -31402, ctx.r3.u8);
	// beq cr6,0x89917da0
	if (ctx.cr6.eq) goto loc_89917DA0;
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
loc_89917CA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x89917d28
	if (!ctx.cr6.gt) goto loc_89917D28;
	// li r11,0
	ctx.r11.s64 = 0;
loc_89917CB4:
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// lbzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lbzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x89917ce8
	if (ctx.cr6.lt) goto loc_89917CE8;
	// bne cr6,0x89917d14
	if (!ctx.cr6.eq) goto loc_89917D14;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lbzx r7,r11,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x89917d14
	if (!ctx.cr6.lt) goto loc_89917D14;
loc_89917CE8:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stbx r8,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r8.u8);
	// lbzx r27,r11,r31
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// stbx r27,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u8);
	// stbx r8,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
loc_89917D14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x89917cb4
	if (ctx.cr6.lt) goto loc_89917CB4;
loc_89917D28:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89917ca4
	if (!ctx.cr6.eq) goto loc_89917CA4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x89917da0
	if (ctx.cr6.eq) goto loc_89917DA0;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,27804
	ctx.r8.s64 = ctx.r11.s64 + 27804;
loc_89917D48:
	// lbzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// mulli r6,r10,92
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(92));
	// lwzx r11,r6,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// rlwinm r5,r11,0,1,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x89917d88
	if (ctx.cr6.eq) goto loc_89917D88;
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89917d78
	if (!ctx.cr6.eq) goto loc_89917D78;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x89917d88
	if (!ctx.cr6.eq) goto loc_89917D88;
loc_89917D78:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
loc_89917D88:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x89917d48
	if (ctx.cr6.lt) goto loc_89917D48;
	// stb r3,-31402(r28)
	REX_STORE_U8(ctx.r28.u32 + -31402, ctx.r3.u8);
loc_89917DA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89919C68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89919C70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lhz r10,-21392(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -21392);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89919d20
	if (ctx.cr6.eq) goto loc_89919D20;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r10,r10,12160
	ctx.r10.s64 = ctx.r10.s64 + 12160;
	// addi r27,r11,26868
	ctx.r27.s64 = ctx.r11.s64 + 26868;
	// addi r30,r10,16
	ctx.r30.s64 = ctx.r10.s64 + 16;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_89919C9C:
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89919d0c
	if (ctx.cr6.eq) goto loc_89919D0C;
	// lwz r31,-4(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r29,0(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
loc_89919CB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89919d00
	if (ctx.cr6.eq) goto loc_89919D00;
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
	ctx.lr = 0x89919D00;
	sub_89939350(ctx, base);
loc_89919D00:
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x89919cb0
	if (!ctx.cr6.eq) goto loc_89919CB0;
loc_89919D0C:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r11,r27,32
	ctx.r11.s64 = ctx.r27.s64 + 32;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89919c9c
	if (ctx.cr6.lt) goto loc_89919C9C;
loc_89919D20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991A718) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x8991A720;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lhz r10,3624(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 3624);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991a850
	if (ctx.cr6.eq) goto loc_8991A850;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lis r24,-30276
	ctx.r24.s64 = -1984167936;
	// addi r23,r11,5760
	ctx.r23.s64 = ctx.r11.s64 + 5760;
	// li r28,21
	ctx.r28.s64 = 21;
	// addi r27,r23,12
	ctx.r27.s64 = ctx.r23.s64 + 12;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r30,32028(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 32028);
	// li r25,0
	ctx.r25.s64 = 0;
loc_8991A754:
	// lwz r11,-12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8991a7c8
	if (ctx.cr6.eq) goto loc_8991A7C8;
	// lwz r31,0(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r26,4(r27)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
loc_8991A768:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991a7bc
	if (ctx.cr6.eq) goto loc_8991A7BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subfc r11,r28,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r28.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// subfze r11,r29
	temp.u8 = ~ctx.r29.u32 + ctx.xer.ca < ~ctx.r29.u32;
	ctx.r11.u64 = ~ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8991a79c
	if (ctx.cr6.lt) goto loc_8991A79C;
	// bne cr6,0x8991a7bc
	if (!ctx.cr6.eq) goto loc_8991A7BC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r25,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// b 0x8991a7bc
	goto loc_8991A7BC;
loc_8991A79C:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,68(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x89939350
	ctx.lr = 0x8991A7BC;
	sub_89939350(ctx, base);
loc_8991A7BC:
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8991a768
	if (!ctx.cr6.eq) goto loc_8991A768;
loc_8991A7C8:
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// addi r11,r23,652
	ctx.r11.s64 = ctx.r23.s64 + 652;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8991a754
	if (ctx.cr6.lt) goto loc_8991A754;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// stw r30,32028(r24)
	REX_STORE_U32(ctx.r24.u32 + 32028, ctx.r30.u32);
	// lbz r11,9643(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9643);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991a850
	if (ctx.cr6.eq) goto loc_8991A850;
	// addi r30,r23,12
	ctx.r30.s64 = ctx.r23.s64 + 12;
loc_8991A7F0:
	// lwz r11,-12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8991a840
	if (ctx.cr6.eq) goto loc_8991A840;
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,4(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_8991A804:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF00000;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991a834
	if (ctx.cr6.eq) goto loc_8991A834;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lbz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 72);
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x899390e0
	ctx.lr = 0x8991A834;
	sub_899390E0(ctx, base);
loc_8991A834:
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8991a804
	if (!ctx.cr6.eq) goto loc_8991A804;
loc_8991A840:
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r11,r23,652
	ctx.r11.s64 = ctx.r23.s64 + 652;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8991a7f0
	if (ctx.cr6.lt) goto loc_8991A7F0;
loc_8991A850:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991B880) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r8,r11,-4592
	ctx.r8.s64 = ctx.r11.s64 + -4592;
	// rlwinm r7,r3,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lhz r11,20416(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 20416);
	// subfc r5,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r3.u64;
	// eqv r4,r3,r11
	ctx.r4.u64 = ~(ctx.r3.u64 ^ ctx.r11.u64);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwinm r6,r4,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 31;
	// subfc r10,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// clrlwi r6,r5,31
	ctx.r6.u64 = ctx.r5.u32 & 0x1;
	// adde r10,r7,r4
	temp.u8 = (ctx.r7.u32 + ctx.r4.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r7.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 & ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8991b8d0
	if (ctx.cr6.eq) goto loc_8991B8D0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,20416(r9)
	REX_STORE_U16(ctx.r9.u32 + 20416, ctx.r11.u16);
loc_8991B8D0:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// subfc r6,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r6.u64 = ctx.r10.u64 - ctx.r3.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// adde r11,r9,r7
	temp.u8 = (ctx.r9.u32 + ctx.r7.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// rlwinm r4,r3,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// adde r9,r4,r5
	temp.u8 = (ctx.r4.u32 + ctx.r5.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8991b944
	if (ctx.cr6.eq) goto loc_8991B944;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,12800
	ctx.r9.s64 = ctx.r9.s64 + 12800;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8991b944
	if (!ctx.cr6.gt) goto loc_8991B944;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_8991B91C:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8991b934
	if (!ctx.cr6.eq) goto loc_8991B934;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// sthu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r8.u32 = ea;
	// beq 0x8991b94c
	if (ctx.cr0.eq) goto loc_8991B94C;
loc_8991B934:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,208
	ctx.r9.s64 = ctx.r9.s64 + 208;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8991b91c
	if (ctx.cr6.lt) goto loc_8991B91C;
loc_8991B944:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8991B94C:
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r11,9516(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 9516);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,9516(r10)
	REX_STORE_U16(ctx.r10.u32 + 9516, ctx.r9.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991C488) {
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
	// li r4,1
	ctx.r4.s64 = 1;
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
	ctx.lr = 0x8991C4DC;
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

DEFINE_REX_FUNC(sub_8991C678) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8991C680;
	__savegprlr_29(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// addi r11,r9,9656
	ctx.r11.s64 = ctx.r9.s64 + 9656;
	// lhz r10,12272(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 12272);
	// mulli r6,r8,92
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(92));
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhz r10,27272(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 27272);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// addi r8,r11,76
	ctx.r8.s64 = ctx.r11.s64 + 76;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r30,r9,-352
	ctx.r30.s64 = ctx.r9.s64 + -352;
	// lwzx r29,r6,r7
	ctx.r29.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lbzx r8,r6,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// lwzx r7,r6,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// mulli r5,r3,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(208));
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// addi r31,r11,52
	ctx.r31.s64 = ctx.r11.s64 + 52;
	// addi r30,r11,207
	ctx.r30.s64 = ctx.r11.s64 + 207;
	// addi r8,r11,204
	ctx.r8.s64 = ctx.r11.s64 + 204;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// subf r6,r29,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r29.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stbx r4,r5,r30
	REX_STORE_U8(ctx.r5.u32 + ctx.r30.u32, ctx.r4.u8);
	// stwx r6,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r6.u32);
	// stwx r10,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r10.u32);
	// stbx r9,r5,r8
	REX_STORE_U8(ctx.r5.u32 + ctx.r8.u32, ctx.r9.u8);
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991CE40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// lis r6,-30269
	ctx.r6.s64 = -1983709184;
	// mulli r9,r5,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// lwz r11,-10744(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -10744);
	// addi r4,r10,207
	ctx.r4.s64 = ctx.r10.s64 + 207;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r8,r5,9656
	ctx.r8.s64 = ctx.r5.s64 + 9656;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// stw r11,-10744(r6)
	REX_STORE_U32(ctx.r6.u32 + -10744, ctx.r11.u32);
	// lbzx r3,r9,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// mulli r4,r3,92
	ctx.r4.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(92));
	// addi r3,r8,24
	ctx.r3.s64 = ctx.r8.s64 + 24;
	// addi r8,r7,-512
	ctx.r8.s64 = ctx.r7.s64 + -512;
	// addi r7,r10,52
	ctx.r7.s64 = ctx.r10.s64 + 52;
	// lwzx r5,r4,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// mullw r4,r5,r8
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lwzx r3,r9,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addis r11,r4,512
	ctx.r11.s64 = ctx.r4.s64 + 33554432;
	// subf. r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8991cea4
	if (!ctx.cr0.lt) goto loc_8991CEA4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8991CEA4:
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8991ceb8
	if (!ctx.cr6.lt) goto loc_8991CEB8;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8991CEB8:
	// addis r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 131072;
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

DEFINE_REX_FUNC(sub_8991D590) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8991D598;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// lis r6,-30320
	ctx.r6.s64 = -1987051520;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// addi r8,r6,9016
	ctx.r8.s64 = ctx.r6.s64 + 9016;
	// lis r31,-30269
	ctx.r31.s64 = -1983709184;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r11,-10744(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -10744);
	// lhz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lhzu r29,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r29.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lhzu r28,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r28.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// srawi r7,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 16;
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// clrlwi r6,r7,17
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFF;
	// stw r10,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r10.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// addi r7,r10,128
	ctx.r7.s64 = ctx.r10.s64 + 128;
	// clrlwi r10,r9,17
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFF;
	// rlwinm r9,r7,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// rlwinm r7,r6,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mullw r6,r10,r4
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lhzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// stw r11,-10744(r31)
	REX_STORE_U32(ctx.r31.u32 + -10744, ctx.r11.u32);
	// addi r10,r5,12800
	ctx.r10.s64 = ctx.r5.s64 + 12800;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// mulli r27,r7,208
	ctx.r27.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lwzx r3,r27,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// addi r5,r10,48
	ctx.r5.s64 = ctx.r10.s64 + 48;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r7,r10,52
	ctx.r7.s64 = ctx.r10.s64 + 52;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lwzx r8,r27,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	// lwzx r7,r27,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r7,r10,200
	ctx.r7.s64 = ctx.r10.s64 + 200;
	// rotlwi r4,r28,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r28.u32, 16);
	// addi r10,r10,207
	ctx.r10.s64 = ctx.r10.s64 + 207;
	// rotlwi r5,r29,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r29.u32, 16);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbzx r8,r27,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r7.u32);
	// extsh r4,r30
	ctx.r4.s64 = ctx.r30.s16;
	// lbzx r7,r27,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// bl 0x899d5240
	ctx.lr = 0x8991D69C;
	sub_899D5240(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991FE08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8991FE10;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r4,-16320
	ctx.r4.s64 = -1069547520;
	// addi r3,r11,14848
	ctx.r3.s64 = ctx.r11.s64 + 14848;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x89931dd8
	ctx.lr = 0x8991FE28;
	sub_89931DD8(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r5,32639
	ctx.r5.s64 = 2139029504;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lbz r27,-31402(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + -31402);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,14844
	ctx.r31.s64 = ctx.r10.s64 + 14844;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r9,r10,12280
	ctx.r9.s64 = ctx.r10.s64 + 12280;
	// ori r29,r5,32768
	ctx.r29.u64 = ctx.r5.u64 | 32768;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r11,r11,5344
	ctx.r11.s64 = ctx.r11.s64 + 5344;
	// addi r10,r7,-31400
	ctx.r10.s64 = ctx.r7.s64 + -31400;
	// addi r30,r6,27804
	ctx.r30.s64 = ctx.r6.s64 + 27804;
	// lbz r28,0(r31)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
loc_8991FE70:
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x8991fec0
	if (!ctx.cr6.lt) goto loc_8991FEC0;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r8,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r3,32(r9)
	REX_STORE_U8(ctx.r9.u32 + 32, ctx.r3.u8);
	// addi r6,r6,10
	ctx.r6.s64 = ctx.r6.s64 + 10;
	// rlwinm r26,r4,30,2,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwinm r6,r4,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// addi r5,r10,4096
	ctx.r5.s64 = ctx.r10.s64 + 4096;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r26,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r4,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// b 0x8991ff0c
	goto loc_8991FF0C;
loc_8991FEC0:
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r4,r10,4096
	ctx.r4.s64 = ctx.r10.s64 + 4096;
	// addi r5,r5,10
	ctx.r5.s64 = ctx.r5.s64 + 10;
	// extsb r7,r28
	ctx.r7.s64 = ctx.r28.s8;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// beq cr6,0x8991ff04
	if (ctx.cr6.eq) goto loc_8991FF04;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
loc_8991FEEC:
	// lbzu r4,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// subf r26,r29,r7
	ctx.r26.u64 = ctx.r7.u64 - ctx.r29.u64;
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// stwu r26,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r5.u32 = ea;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8991feec
	if (!ctx.cr6.eq) goto loc_8991FEEC;
loc_8991FF04:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r3,32(r9)
	REX_STORE_U8(ctx.r9.u32 + 32, ctx.r3.u8);
loc_8991FF0C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// blt cr6,0x8991fe70
	if (ctx.cr6.lt) goto loc_8991FE70;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// addi r30,r8,26920
	ctx.r30.s64 = ctx.r8.s64 + 26920;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r7,9656
	ctx.r8.s64 = ctx.r7.s64 + 9656;
	// mulli r4,r6,92
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(92));
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
loc_8991FF3C:
	// lwzx r5,r4,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// subfic r4,r6,6
	ctx.xer.ca = ctx.r6.u32 <= 6;
	ctx.r4.u64 = static_cast<uint64_t>(6) - ctx.r6.u64;
	// lbzx r31,r6,r30
	ctx.r31.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// addi r7,r10,80
	ctx.r7.s64 = ctx.r10.s64 + 80;
	// rlwinm r29,r5,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r28,r29,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// rlwinm r26,r28,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r29,r29,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// rlwinm r25,r26,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r22,r5,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r5,r26,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// rlwinm r24,r25,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// stbx r3,r4,r9
	REX_STORE_U8(ctx.r4.u32 + ctx.r9.u32, ctx.r3.u8);
	// rlwinm r26,r25,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// rlwinm r23,r24,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r29,r29,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r25,r24,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// rlwinm r24,r23,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// lwzx r20,r5,r11
	ctx.r20.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r23,r23,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3C;
	// rlwinm r28,r28,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// lwzx r26,r26,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// rlwinm r19,r31,30,2,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r25,r25,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// rlwinm r18,r31,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// rlwinm r5,r4,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwzx r27,r24,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lwzx r24,r23,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// rlwinm r31,r21,7,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r28,r28,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lwzx r23,r19,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// add r5,r31,r4
	ctx.r5.u64 = ctx.r31.u64 + ctx.r4.u64;
	// stbx r3,r21,r9
	REX_STORE_U8(ctx.r21.u32 + ctx.r9.u32, ctx.r3.u8);
	// lwzx r21,r18,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// stw r22,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r22.u32);
	// stw r29,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r29.u32);
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// stw r28,-8(r7)
	REX_STORE_U32(ctx.r7.u32 + -8, ctx.r28.u32);
	// mulli r4,r6,92
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(92));
	// stw r20,-12(r7)
	REX_STORE_U32(ctx.r7.u32 + -12, ctx.r20.u32);
	// stw r26,-16(r7)
	REX_STORE_U32(ctx.r7.u32 + -16, ctx.r26.u32);
	// stw r25,-20(r7)
	REX_STORE_U32(ctx.r7.u32 + -20, ctx.r25.u32);
	// stw r27,-24(r7)
	REX_STORE_U32(ctx.r7.u32 + -24, ctx.r27.u32);
	// stw r24,-28(r7)
	REX_STORE_U32(ctx.r7.u32 + -28, ctx.r24.u32);
	// stw r23,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r23.u32);
	// stw r21,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r21.u32);
	// blt cr6,0x8991ff3c
	if (ctx.cr6.lt) goto loc_8991FF3C;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lwz r7,12000(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12000);
	// lwz r6,-21584(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + -21584);
	// rlwinm r4,r7,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// lwz r5,7104(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 7104);
	// rlwinm r31,r6,24,8,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r30,r4,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r26,r7,30,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3C;
	// rlwinm r25,r6,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r29,r31,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r19,r6,30,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3C;
	// rlwinm r28,r30,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r27,r29,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r6,r26,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// rlwinm r24,r28,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r26,r25,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// rlwinm r23,r27,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r25,r19,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// rlwinm r29,r29,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// rlwinm r19,r24,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// rlwinm r18,r23,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// stw r6,4536(r10)
	REX_STORE_U32(ctx.r10.u32 + 4536, ctx.r6.u32);
	// rlwinm r22,r24,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r26,4412(r10)
	REX_STORE_U32(ctx.r10.u32 + 4412, ctx.r26.u32);
	// rlwinm r21,r23,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r31,r31,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// lwzx r23,r29,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r30,r30,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// lwzx r29,r19,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// rlwinm r28,r28,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// stw r25,4408(r10)
	REX_STORE_U32(ctx.r10.u32 + 4408, ctx.r25.u32);
	// rlwinm r17,r22,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// rlwinm r15,r21,2,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// rlwinm r27,r27,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// lwzx r24,r31,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r31,r30,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r19,r21,30,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3C;
	// lwzx r21,r18,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// rlwinm r16,r22,30,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3C;
	// lwzx r30,r28,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r28,r17,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// rlwinm r20,r5,24,8,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// lwzx r22,r27,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r18,r5,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r14,r20,28,4,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r19,r19,r11
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// lwzx r27,r16,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// rlwinm r17,r20,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r5,r5,30,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// lwzx r20,r15,r11
	ctx.r20.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	// rlwinm r16,r14,28,4,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r18,r18,r11
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// rlwinm r15,r14,2,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// rlwinm r14,r16,28,4,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 28) & 0xFFFFFFF;
	// stw r7,4540(r10)
	REX_STORE_U32(ctx.r10.u32 + 4540, ctx.r7.u32);
	// stw r29,4520(r10)
	REX_STORE_U32(ctx.r10.u32 + 4520, ctx.r29.u32);
	// rlwinm r7,r16,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// lwzx r29,r5,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r6,r14,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// stw r4,4532(r10)
	REX_STORE_U32(ctx.r10.u32 + 4532, ctx.r4.u32);
	// rlwinm r16,r14,28,4,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,4516(r10)
	REX_STORE_U32(ctx.r10.u32 + 4516, ctx.r28.u32);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lwzx r28,r17,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// stw r31,4528(r10)
	REX_STORE_U32(ctx.r10.u32 + 4528, ctx.r31.u32);
	// stw r30,4524(r10)
	REX_STORE_U32(ctx.r10.u32 + 4524, ctx.r30.u32);
	// stw r27,4512(r10)
	REX_STORE_U32(ctx.r10.u32 + 4512, ctx.r27.u32);
	// stw r24,4404(r10)
	REX_STORE_U32(ctx.r10.u32 + 4404, ctx.r24.u32);
	// stw r23,4400(r10)
	REX_STORE_U32(ctx.r10.u32 + 4400, ctx.r23.u32);
	// stw r22,4396(r10)
	REX_STORE_U32(ctx.r10.u32 + 4396, ctx.r22.u32);
	// stw r21,4392(r10)
	REX_STORE_U32(ctx.r10.u32 + 4392, ctx.r21.u32);
	// stw r20,4388(r10)
	REX_STORE_U32(ctx.r10.u32 + 4388, ctx.r20.u32);
	// stw r19,4384(r10)
	REX_STORE_U32(ctx.r10.u32 + 4384, ctx.r19.u32);
	// stw r18,4284(r10)
	REX_STORE_U32(ctx.r10.u32 + 4284, ctx.r18.u32);
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lwzx r26,r7,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lis r24,-30276
	ctx.r24.s64 = -1984167936;
	// lwzx r25,r6,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lbz r7,6035(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 6035);
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// lbz r6,9535(r5)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 9535);
	// lis r23,-30275
	ctx.r23.s64 = -1984102400;
	// rlwinm r22,r7,30,2,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r29,4280(r10)
	REX_STORE_U32(ctx.r10.u32 + 4280, ctx.r29.u32);
	// lbz r5,12266(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 12266);
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lbz r31,32019(r24)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r24.u32 + 32019);
	// rlwinm r24,r6,30,2,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lbz r4,6054(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 6054);
	// rlwinm r21,r5,30,2,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFC;
	// lbz r30,9539(r23)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r23.u32 + 9539);
	// rlwinm r19,r4,30,2,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r27,r15,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	// lwzx r29,r7,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r31,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r20,r5,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lwzx r5,r22,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwzx r23,r6,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r6,r31,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// lwzx r31,r21,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// rlwinm r21,r16,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r24,r24,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// rlwinm r18,r30,30,2,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r22,r20,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// rlwinm r15,r30,2,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// lwzx r20,r7,r11
	ctx.r20.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lis r14,-30253
	ctx.r14.s64 = -1982660608;
	// lwzx r30,r19,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// lwzx r21,r4,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r4,r16,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 30) & 0x3C;
	// lwzx r19,r6,r11
	ctx.r19.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lwzx r17,r18,r11
	ctx.r17.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwzx r15,r15,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	// stw r28,4276(r10)
	REX_STORE_U32(ctx.r10.u32 + 4276, ctx.r28.u32);
	// lwzx r6,r4,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lhz r4,-9488(r14)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r14.u32 + -9488);
	// stw r27,4272(r10)
	REX_STORE_U32(ctx.r10.u32 + 4272, ctx.r27.u32);
	// stw r26,4268(r10)
	REX_STORE_U32(ctx.r10.u32 + 4268, ctx.r26.u32);
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// stw r25,4264(r10)
	REX_STORE_U32(ctx.r10.u32 + 4264, ctx.r25.u32);
	// stw r6,4256(r10)
	REX_STORE_U32(ctx.r10.u32 + 4256, ctx.r6.u32);
	// stw r5,4576(r10)
	REX_STORE_U32(ctx.r10.u32 + 4576, ctx.r5.u32);
	// stw r29,4580(r10)
	REX_STORE_U32(ctx.r10.u32 + 4580, ctx.r29.u32);
	// stw r24,4448(r10)
	REX_STORE_U32(ctx.r10.u32 + 4448, ctx.r24.u32);
	// stw r23,4452(r10)
	REX_STORE_U32(ctx.r10.u32 + 4452, ctx.r23.u32);
	// stw r31,4320(r10)
	REX_STORE_U32(ctx.r10.u32 + 4320, ctx.r31.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r22,4324(r10)
	REX_STORE_U32(ctx.r10.u32 + 4324, ctx.r22.u32);
	// stw r30,4588(r10)
	REX_STORE_U32(ctx.r10.u32 + 4588, ctx.r30.u32);
	// stw r21,4592(r10)
	REX_STORE_U32(ctx.r10.u32 + 4592, ctx.r21.u32);
	// stw r20,4460(r10)
	REX_STORE_U32(ctx.r10.u32 + 4460, ctx.r20.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r19,4464(r10)
	REX_STORE_U32(ctx.r10.u32 + 4464, ctx.r19.u32);
	// stb r3,35(r9)
	REX_STORE_U8(ctx.r9.u32 + 35, ctx.r3.u8);
	// stb r3,34(r9)
	REX_STORE_U8(ctx.r9.u32 + 34, ctx.r3.u8);
	// stw r17,4332(r10)
	REX_STORE_U32(ctx.r10.u32 + 4332, ctx.r17.u32);
	// stw r7,4260(r10)
	REX_STORE_U32(ctx.r10.u32 + 4260, ctx.r7.u32);
	// stb r3,33(r9)
	REX_STORE_U8(ctx.r9.u32 + 33, ctx.r3.u8);
	// stw r15,4336(r10)
	REX_STORE_U32(ctx.r10.u32 + 4336, ctx.r15.u32);
	// blt cr6,0x89920280
	if (ctx.cr6.lt) goto loc_89920280;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r4,-9488(r14)
	REX_STORE_U16(ctx.r14.u32 + -9488, ctx.r4.u16);
loc_89920280:
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// addi r6,r7,20432
	ctx.r6.s64 = ctx.r7.s64 + 20432;
	// lbz r7,20432(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 20432);
	// lbz r6,256(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 256);
	// rlwinm r5,r7,29,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x8;
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// and r7,r5,r3
	ctx.r7.u64 = ctx.r5.u64 & ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x899202f4
	if (ctx.cr6.eq) goto loc_899202F4;
	// li r6,0
	ctx.r6.s64 = 0;
loc_899202A8:
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bne cr6,0x899202c4
	if (!ctx.cr6.eq) goto loc_899202C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r4,-9488(r14)
	REX_STORE_U16(ctx.r14.u32 + -9488, ctx.r4.u16);
loc_899202C4:
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// mulli r5,r7,92
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(92));
	// lwzx r3,r5,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x899202f0
	if (!ctx.cr6.eq) goto loc_899202F0;
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// blt cr6,0x899202a8
	if (ctx.cr6.lt) goto loc_899202A8;
loc_899202F0:
	// sth r4,-9488(r14)
	REX_STORE_U16(ctx.r14.u32 + -9488, ctx.r4.u16);
loc_899202F4:
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_89920304:
	// mulli r5,r6,92
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(92));
	// lwzx r7,r5,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89920cd4
	if (ctx.cr6.eq) goto loc_89920CD4;
	// addi r31,r10,3456
	ctx.r31.s64 = ctx.r10.s64 + 3456;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// addi r6,r8,28
	ctx.r6.s64 = ctx.r8.s64 + 28;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// rlwinm r3,r7,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r23,r4,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3C;
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r29,r3,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r27,r5,r6
	ctx.r27.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// rlwinm r22,r7,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// rlwinm r28,r29,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r26,r27,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r23,r23,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// rlwinm r7,r7,30,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3C;
	// lwzx r20,r4,r11
	ctx.r20.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r3,r3,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// rlwinm r4,r28,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// rlwinm r24,r26,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// rlwinm r30,r28,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r28,r22,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwzx r22,r7,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r21,r24,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r18,r3,r11
	ctx.r18.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,3712
	ctx.r7.s64 = ctx.r10.s64 + 3712;
	// lwzx r17,r4,r11
	ctx.r17.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r3,r10,3612
	ctx.r3.s64 = ctx.r10.s64 + 3612;
	// rlwinm r16,r21,28,4,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFFFFFF;
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r7,r6,r3
	ctx.r7.u64 = ctx.r6.u64 + ctx.r3.u64;
	// rlwinm r3,r16,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r14,88(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r8,4
	ctx.r31.s64 = ctx.r8.s64 + 4;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// rlwinm r25,r30,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r29,r29,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// stw r23,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r23.u32);
	// rlwinm r19,r25,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r20,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r20.u32);
	// rlwinm r30,r30,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// stw r28,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// lwzx r31,r5,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// addi r15,r8,12
	ctx.r15.s64 = ctx.r8.s64 + 12;
	// rlwinm r4,r21,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// stw r22,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r22.u32);
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// lwzx r29,r29,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwzx r19,r19,r11
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// rlwinm r28,r16,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// lwzx r30,r30,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r8,r31,30,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3C;
	// rlwinm r21,r31,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// lwzx r15,r5,r15
	ctx.r15.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r15.u32);
	// rlwinm r25,r25,30,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3C;
	// lwzx r16,r4,r11
	ctx.r16.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r27,r27,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// stw r29,-12(r7)
	REX_STORE_U32(ctx.r7.u32 + -12, ctx.r29.u32);
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwzx r28,r28,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r24,r24,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// lwzx r23,r8,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r20,r3,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r21,r21,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// add r3,r6,r14
	ctx.r3.u64 = ctx.r6.u64 + ctx.r14.u64;
	// lwzx r25,r25,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// rlwinm r22,r20,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// lwzx r27,r27,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwzx r26,r26,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r24,r24,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r18,-8(r7)
	REX_STORE_U32(ctx.r7.u32 + -8, ctx.r18.u32);
	// rlwinm r20,r20,30,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 30) & 0x3C;
	// lwz r14,88(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r29,r15,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3C;
	// stw r17,-16(r7)
	REX_STORE_U32(ctx.r7.u32 + -16, ctx.r17.u32);
	// rlwinm r14,r14,2,26,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// stw r30,-20(r7)
	REX_STORE_U32(ctx.r7.u32 + -20, ctx.r30.u32);
	// stw r19,-24(r7)
	REX_STORE_U32(ctx.r7.u32 + -24, ctx.r19.u32);
	// stb r4,29(r9)
	REX_STORE_U8(ctx.r9.u32 + 29, ctx.r4.u8);
	// stb r31,28(r9)
	REX_STORE_U8(ctx.r9.u32 + 28, ctx.r31.u8);
	// addi r9,r10,3356
	ctx.r9.s64 = ctx.r10.s64 + 3356;
	// ld r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// add r30,r6,r9
	ctx.r30.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r25,-28(r7)
	REX_STORE_U32(ctx.r7.u32 + -28, ctx.r25.u32);
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r9,r10,3228
	ctx.r9.s64 = ctx.r10.s64 + 3228;
	// rlwinm r7,r15,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 28) & 0xFFFFFFF;
	// stw r21,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwzx r31,r14,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r11.u32);
	// rlwinm r30,r7,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r25,r22,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// rlwinm r23,r30,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r3,r5,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r22,r20,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// addi r9,r10,3100
	ctx.r9.s64 = ctx.r10.s64 + 3100;
	// lwzx r29,r29,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r4,r23,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r20,84(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwzx r17,r7,r11
	ctx.r17.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r19,r3,28,4,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r21,r4,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// rlwinm r6,r19,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r9,r30,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// rlwinm r18,r21,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r15,r6,28,4,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r30,r23,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// rlwinm r23,r21,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// rlwinm r14,r6,2,26,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r15,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3C;
	// rlwinm r21,r18,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r18,30,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 30) & 0x3C;
	// lwzx r18,r9,r11
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r3,r3,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r30,r30,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r19,r19,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// lwzx r23,r23,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r15,r15,28,4,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r5,r5,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r22,-28(r9)
	REX_STORE_U32(ctx.r9.u32 + -28, ctx.r22.u32);
	// stw r27,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// addi r27,r8,88
	ctx.r27.s64 = ctx.r8.s64 + 88;
	// stw r26,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r26.u32);
	// addi r26,r8,40
	ctx.r26.s64 = ctx.r8.s64 + 40;
	// stw r24,-8(r9)
	REX_STORE_U32(ctx.r9.u32 + -8, ctx.r24.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r28,-16(r9)
	REX_STORE_U32(ctx.r9.u32 + -16, ctx.r28.u32);
	// rlwinm r28,r15,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 28) & 0xFFFFFFF;
	// stw r31,-20(r9)
	REX_STORE_U32(ctx.r9.u32 + -20, ctx.r31.u32);
	// rlwinm r31,r15,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3C;
	// stw r25,-24(r9)
	REX_STORE_U32(ctx.r9.u32 + -24, ctx.r25.u32);
	// stw r16,-12(r9)
	REX_STORE_U32(ctx.r9.u32 + -12, ctx.r16.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r5,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// mulli r7,r20,92
	ctx.r7.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(92));
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r21,r21,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwzx r25,r19,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// lwz r22,88(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r24,r14,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r11.u32);
	// stw r29,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// stw r17,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r17.u32);
	// lwzx r22,r22,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// stw r4,-16(r9)
	REX_STORE_U32(ctx.r9.u32 + -16, ctx.r4.u32);
	// rlwinm r29,r28,30,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3C;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r23,-20(r9)
	REX_STORE_U32(ctx.r9.u32 + -20, ctx.r23.u32);
	// stw r21,-24(r9)
	REX_STORE_U32(ctx.r9.u32 + -24, ctx.r21.u32);
	// stw r18,-8(r9)
	REX_STORE_U32(ctx.r9.u32 + -8, ctx.r18.u32);
	// stw r30,-12(r9)
	REX_STORE_U32(ctx.r9.u32 + -12, ctx.r30.u32);
	// rlwinm r30,r28,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// stw r4,-28(r9)
	REX_STORE_U32(ctx.r9.u32 + -28, ctx.r4.u32);
	// addi r4,r10,2828
	ctx.r4.s64 = ctx.r10.s64 + 2828;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhzx r28,r7,r27
	ctx.r28.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r27,r31,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r29,r29,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r23,r28,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r30,r30,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r28,r28,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// stb r8,27(r9)
	REX_STORE_U8(ctx.r9.u32 + 27, ctx.r8.u8);
	// rlwinm r21,r23,28,20,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFF;
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r23,r23,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// stb r6,26(r9)
	REX_STORE_U8(ctx.r9.u32 + 26, ctx.r6.u8);
	// rlwinm r20,r21,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// addi r19,r8,20
	ctx.r19.s64 = ctx.r8.s64 + 20;
	// lwz r6,136(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r14,144(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r18,r8,42
	ctx.r18.s64 = ctx.r8.s64 + 42;
	// lhzx r26,r7,r26
	ctx.r26.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r26.u32);
	// rlwinm r21,r21,30,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3C;
	// lwz r31,120(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r17,r26,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// stb r5,25(r9)
	REX_STORE_U8(ctx.r9.u32 + 25, ctx.r5.u8);
	// lwzx r19,r7,r19
	ctx.r19.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r19.u32);
	// addi r5,r10,2956
	ctx.r5.s64 = ctx.r10.s64 + 2956;
	// stw r3,-4(r6)
	REX_STORE_U32(ctx.r6.u32 + -4, ctx.r3.u32);
	// rlwinm r16,r17,28,20,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFF;
	// stw r25,-8(r6)
	REX_STORE_U32(ctx.r6.u32 + -8, ctx.r25.u32);
	// rlwinm r15,r19,28,4,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,-12(r6)
	REX_STORE_U32(ctx.r6.u32 + -12, ctx.r24.u32);
	// rlwinm r25,r17,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// stw r22,-16(r6)
	REX_STORE_U32(ctx.r6.u32 + -16, ctx.r22.u32);
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// stw r27,-20(r6)
	REX_STORE_U32(ctx.r6.u32 + -20, ctx.r27.u32);
	// rlwinm r27,r16,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// stw r29,-28(r6)
	REX_STORE_U32(ctx.r6.u32 + -28, ctx.r29.u32);
	// rlwinm r19,r19,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// stw r14,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r14.u32);
	// rlwinm r14,r15,28,4,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 28) & 0xFFFFFFF;
	// stw r30,-24(r6)
	REX_STORE_U32(ctx.r6.u32 + -24, ctx.r30.u32);
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r18,r7,r18
	ctx.r18.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r18.u32);
	// rlwinm r24,r14,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r28,r28,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwzx r29,r23,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// rlwinm r3,r18,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r22,r20,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// rlwinm r23,r16,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 30) & 0x3C;
	// lwzx r21,r21,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// rlwinm r20,r18,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// rlwinm r18,r3,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r26,r26,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// stw r28,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// rlwinm r30,r24,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r28,r24,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r29,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r29.u32);
	// rlwinm r3,r3,28,20,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFF;
	// lwzx r24,r23,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// lwzx r23,r20,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// rlwinm r17,r15,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3C;
	// stw r22,-8(r5)
	REX_STORE_U32(ctx.r5.u32 + -8, ctx.r22.u32);
	// rlwinm r16,r14,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// stw r21,-12(r5)
	REX_STORE_U32(ctx.r5.u32 + -12, ctx.r21.u32);
	// rlwinm r29,r30,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r25,r25,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lwzx r27,r27,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r22,r30,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// lwzx r21,r18,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// rlwinm r20,r3,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r19,r19,r11
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// rlwinm r18,r3,30,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3C;
	// std r9,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r31,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// rlwinm r15,r29,28,4,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// stb r3,23(r9)
	REX_STORE_U8(ctx.r9.u32 + 23, ctx.r3.u8);
	// rlwinm r3,r29,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r26,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r26.u32);
	// rlwinm r29,r15,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3C;
	// stw r25,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r25.u32);
	// addi r14,r8,24
	ctx.r14.s64 = ctx.r8.s64 + 24;
	// stb r5,24(r9)
	REX_STORE_U8(ctx.r9.u32 + 24, ctx.r5.u8);
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r5,r8,44
	ctx.r5.s64 = ctx.r8.s64 + 44;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// addi r29,r10,2700
	ctx.r29.s64 = ctx.r10.s64 + 2700;
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r5,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// addi r5,r10,2588
	ctx.r5.s64 = ctx.r10.s64 + 2588;
	// lwzx r14,r7,r14
	ctx.r14.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r14.u32);
	// rlwinm r15,r15,30,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 30) & 0x3C;
	// lwz r31,144(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r3,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// add r3,r6,r29
	ctx.r3.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lwzx r31,r7,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r7,r14,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 28) & 0xFFFFFFF;
	// std r30,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r30.u64);
	// rlwinm r30,r7,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// stw r27,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r27.u32);
	// stw r24,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r24.u32);
	// rlwinm r25,r31,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// stw r21,-4(r3)
	REX_STORE_U32(ctx.r3.u32 + -4, ctx.r21.u32);
	// rlwinm r26,r30,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r21,r30,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// ld r30,136(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// lwzx r20,r20,r11
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// rlwinm r27,r26,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r18,r18,r11
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// rlwinm r24,r14,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r4,r10,2460
	ctx.r4.s64 = ctx.r10.s64 + 2460;
	// lwzx r22,r22,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// stwx r23,r6,r29
	REX_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r23.u32);
	// rlwinm r29,r27,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// stw r20,-8(r3)
	REX_STORE_U32(ctx.r3.u32 + -8, ctx.r20.u32);
	// rlwinm r23,r7,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stw r18,-12(r3)
	REX_STORE_U32(ctx.r3.u32 + -12, ctx.r18.u32);
	// rlwinm r3,r29,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r17,r17,r11
	ctx.r17.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// rlwinm r20,r25,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r28,r28,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r27,r27,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// lwzx r16,r16,r11
	ctx.r16.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// rlwinm r18,r31,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// lwzx r15,r15,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	// rlwinm r25,r25,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r9,-24(r5)
	REX_STORE_U32(ctx.r5.u32 + -24, ctx.r9.u32);
	// ld r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// stw r22,-16(r5)
	REX_STORE_U32(ctx.r5.u32 + -16, ctx.r22.u32);
	// lwz r22,144(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r19,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r19.u32);
	// rlwinm r19,r3,30,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3C;
	// stw r17,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r17.u32);
	// rlwinm r17,r20,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,-12(r5)
	REX_STORE_U32(ctx.r5.u32 + -12, ctx.r28.u32);
	// addi r28,r8,48
	ctx.r28.s64 = ctx.r8.s64 + 48;
	// stw r22,-20(r5)
	REX_STORE_U32(ctx.r5.u32 + -20, ctx.r22.u32);
	// rlwinm r22,r29,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// stw r16,-8(r5)
	REX_STORE_U32(ctx.r5.u32 + -8, ctx.r16.u32);
	// stw r15,-28(r5)
	REX_STORE_U32(ctx.r5.u32 + -28, ctx.r15.u32);
	// add r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lwzx r24,r24,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// rlwinm r4,r3,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r23,r23,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// lwzx r21,r21,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// stb r30,22(r9)
	REX_STORE_U8(ctx.r9.u32 + 22, ctx.r30.u8);
	// ld r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// rlwinm r16,r17,28,4,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r26,r26,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// addi r30,r10,2332
	ctx.r30.s64 = ctx.r10.s64 + 2332;
	// lwzx r27,r27,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r14,r16,28,4,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r22,r22,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwzx r15,r4,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// add r4,r6,r30
	ctx.r4.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lwzx r19,r19,r11
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r21,-8(r5)
	REX_STORE_U32(ctx.r5.u32 + -8, ctx.r21.u32);
	// rlwinm r21,r17,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// stw r23,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r23.u32);
	// addi r23,r8,56
	ctx.r23.s64 = ctx.r8.s64 + 56;
	// lwzx r28,r7,r28
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// rlwinm r17,r14,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// stw r26,-12(r5)
	REX_STORE_U32(ctx.r5.u32 + -12, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,-16(r5)
	REX_STORE_U32(ctx.r5.u32 + -16, ctx.r27.u32);
	// rlwinm r26,r28,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r27,r14,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r24.u32);
	// stw r22,-20(r5)
	REX_STORE_U32(ctx.r5.u32 + -20, ctx.r22.u32);
	// rlwinm r24,r20,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// stw r19,-28(r5)
	REX_STORE_U32(ctx.r5.u32 + -28, ctx.r19.u32);
	// rlwinm r22,r26,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// stw r15,-24(r5)
	REX_STORE_U32(ctx.r5.u32 + -24, ctx.r15.u32);
	// rlwinm r5,r16,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// lwzx r18,r18,r11
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// rlwinm r16,r27,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// lwzx r25,r25,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// rlwinm r27,r27,30,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3C;
	// lwzx r21,r21,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// rlwinm r20,r22,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r23,r7,r23
	ctx.r23.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwzx r5,r5,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r22,r22,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// rlwinm r19,r23,28,4,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// stw r18,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r18.u32);
	// lwzx r24,r24,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// rlwinm r18,r20,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xFFFFFFF;
	// stw r25,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r25.u32);
	// rlwinm r25,r19,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xFFFFFFF;
	// stw r21,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r21.u32);
	// rlwinm r30,r18,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r21,r17,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// rlwinm r20,r20,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// lwzx r27,r27,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r3,r25,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r16,r16,r11
	ctx.r16.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// rlwinm r28,r28,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// addi r17,r8,68
	ctx.r17.s64 = ctx.r8.s64 + 68;
	// stw r5,-16(r4)
	REX_STORE_U32(ctx.r4.u32 + -16, ctx.r5.u32);
	// rlwinm r18,r18,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// stw r24,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r24.u32);
	// stb r29,21(r9)
	REX_STORE_U8(ctx.r9.u32 + 21, ctx.r29.u8);
	// rlwinm r15,r30,28,4,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// stb r29,20(r9)
	REX_STORE_U8(ctx.r9.u32 + 20, ctx.r29.u8);
	// rlwinm r24,r3,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// stb r29,19(r9)
	REX_STORE_U8(ctx.r9.u32 + 19, ctx.r29.u8);
	// addi r5,r10,2204
	ctx.r5.s64 = ctx.r10.s64 + 2204;
	// stb r29,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// rlwinm r14,r24,28,4,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r29,r26,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// rlwinm r23,r23,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// lwzx r26,r22,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r21,-20(r4)
	REX_STORE_U32(ctx.r4.u32 + -20, ctx.r21.u32);
	// rlwinm r19,r19,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// stw r27,-28(r4)
	REX_STORE_U32(ctx.r4.u32 + -28, ctx.r27.u32);
	// rlwinm r27,r15,30,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 30) & 0x3C;
	// stw r16,-24(r4)
	REX_STORE_U32(ctx.r4.u32 + -24, ctx.r16.u32);
	// rlwinm r4,r30,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// lwzx r22,r20,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// rlwinm r30,r15,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3C;
	// lwzx r28,r28,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lhzx r21,r7,r17
	ctx.r21.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r17.u32);
	// lwzx r20,r18,r11
	ctx.r20.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// stw r28,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// rlwinm r28,r14,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r3,r3,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r18,r4,r11
	ctx.r18.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r15,r28,2,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// stw r29,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r29.u32);
	// rlwinm r28,r28,30,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3C;
	// lwzx r27,r27,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r4,r25,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// lwzx r30,r30,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r25,r24,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// lwzx r24,r23,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// lwzx r16,r3,r11
	ctx.r16.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// addi r3,r10,1920
	ctx.r3.s64 = ctx.r10.s64 + 1920;
	// rlwinm r23,r14,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// stw r22,-12(r5)
	REX_STORE_U32(ctx.r5.u32 + -12, ctx.r22.u32);
	// lwzx r28,r28,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// addi r29,r8,71
	ctx.r29.s64 = ctx.r8.s64 + 71;
	// lwzx r17,r4,r11
	ctx.r17.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// stw r3,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r31,r8,70
	ctx.r31.s64 = ctx.r8.s64 + 70;
	// addi r4,r10,2076
	ctx.r4.s64 = ctx.r10.s64 + 2076;
	// stw r27,-28(r5)
	REX_STORE_U32(ctx.r5.u32 + -28, ctx.r27.u32);
	// lwzx r23,r23,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// addi r3,r8,73
	ctx.r3.s64 = ctx.r8.s64 + 73;
	// stw r28,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lbzx r29,r7,r29
	ctx.r29.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// clrlwi r21,r21,24
	ctx.r21.u64 = ctx.r21.u32 & 0xFF;
	// lbzx r22,r7,r31
	ctx.r22.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// addi r28,r10,1536
	ctx.r28.s64 = ctx.r10.s64 + 1536;
	// rlwinm r31,r29,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// stw r26,-8(r5)
	REX_STORE_U32(ctx.r5.u32 + -8, ctx.r26.u32);
	// stw r20,-16(r5)
	REX_STORE_U32(ctx.r5.u32 + -16, ctx.r20.u32);
	// rlwinm r20,r22,30,2,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r30,-24(r5)
	REX_STORE_U32(ctx.r5.u32 + -24, ctx.r30.u32);
	// rlwinm r14,r21,30,26,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3C;
	// stw r18,-20(r5)
	REX_STORE_U32(ctx.r5.u32 + -20, ctx.r18.u32);
	// rlwinm r26,r21,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// stw r23,-20(r4)
	REX_STORE_U32(ctx.r4.u32 + -20, ctx.r23.u32);
	// rlwinm r22,r22,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r21,r8,74
	ctx.r21.s64 = ctx.r8.s64 + 74;
	// ld r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// rlwinm r18,r29,30,2,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r19,r19,r11
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// addi r29,r10,1664
	ctx.r29.s64 = ctx.r10.s64 + 1664;
	// lwzx r25,r25,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// addi r27,r31,3
	ctx.r27.s64 = ctx.r31.s64 + 3;
	// lwzx r15,r15,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	// addi r5,r10,1792
	ctx.r5.s64 = ctx.r10.s64 + 1792;
	// lbzx r3,r7,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// stw r24,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r24.u32);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r30,r3,30,2,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r19,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r19.u32);
	// stw r25,-16(r4)
	REX_STORE_U32(ctx.r4.u32 + -16, ctx.r25.u32);
	// rlwinm r24,r3,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// stw r17,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r17.u32);
	// addi r25,r8,75
	ctx.r25.s64 = ctx.r8.s64 + 75;
	// stw r16,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r16.u32);
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r15,-24(r4)
	REX_STORE_U32(ctx.r4.u32 + -24, ctx.r15.u32);
	// addi r19,r8,76
	ctx.r19.s64 = ctx.r8.s64 + 76;
	// lwz r23,144(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// addi r9,r8,60
	ctx.r9.s64 = ctx.r8.s64 + 60;
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwzx r14,r14,r11
	ctx.r14.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r11.u32);
	// lwzx r26,r26,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// stw r23,-28(r4)
	REX_STORE_U32(ctx.r4.u32 + -28, ctx.r23.u32);
	// add r4,r6,r29
	ctx.r4.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lwzx r23,r22,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// addi r29,r10,1536
	ctx.r29.s64 = ctx.r10.s64 + 1536;
	// lbzx r22,r7,r21
	ctx.r22.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r21.u32);
	// lwzx r20,r20,r11
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwzx r21,r18,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// lwz r18,120(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r17,r22,30,2,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r14,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r14.u32);
	// rlwinm r22,r22,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// add r3,r6,r28
	ctx.r3.u64 = ctx.r6.u64 + ctx.r28.u64;
	// lwz r26,144(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r16,r31,6
	ctx.r16.s64 = ctx.r31.s64 + 6;
	// stw r20,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r20.u32);
	// lwzx r18,r18,r11
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// lwzx r14,r7,r9
	ctx.r14.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r23,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r23.u32);
	// add r5,r27,r29
	ctx.r5.u64 = ctx.r27.u64 + ctx.r29.u64;
	// ld r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// rlwinm r20,r14,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 28) & 0xFFFFFFF;
	// stw r21,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r21.u32);
	// stw r18,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r18.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r26,r26,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// rlwinm r23,r20,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r24,r24,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// rlwinm r20,r20,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// stb r4,16(r9)
	REX_STORE_U8(ctx.r9.u32 + 16, ctx.r4.u8);
	// addi r4,r10,1408
	ctx.r4.s64 = ctx.r10.s64 + 1408;
	// lbzx r25,r7,r25
	ctx.r25.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// stb r30,17(r9)
	REX_STORE_U8(ctx.r9.u32 + 17, ctx.r30.u8);
	// stwx r26,r6,r28
	REX_STORE_U32(ctx.r6.u32 + ctx.r28.u32, ctx.r26.u32);
	// rlwinm r30,r23,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r28,r17,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// stw r24,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r24.u32);
	// addi r3,r8,84
	ctx.r3.s64 = ctx.r8.s64 + 84;
	// lwzx r26,r22,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// rlwinm r22,r14,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// stw r4,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// rlwinm r4,r25,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFC;
	// lbz r15,80(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stwx r28,r27,r29
	REX_STORE_U32(ctx.r27.u32 + ctx.r29.u32, ctx.r28.u32);
	// addi r28,r10,1180
	ctx.r28.s64 = ctx.r10.s64 + 1180;
	// lbzx r29,r7,r19
	ctx.r29.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r19.u32);
	// stw r26,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r26.u32);
	// extsh r5,r16
	ctx.r5.s64 = ctx.r16.s16;
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// rlwinm r26,r30,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r28,r7,r3
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r3,r25,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r7,r10,1536
	ctx.r7.s64 = ctx.r10.s64 + 1536;
	// lwzx r22,r22,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// rlwinm r27,r28,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r20,r20,r11
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stb r15,18(r9)
	REX_STORE_U8(ctx.r9.u32 + 18, ctx.r15.u8);
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r7,r29,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r29,r29,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// rlwinm r25,r27,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r24,r26,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// stw r4,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// rlwinm r4,r25,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// stw r3,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r19,r7,r11
	ctx.r19.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r21,r24,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r29,r29,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r18,r4,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// addi r7,r10,1308
	ctx.r7.s64 = ctx.r10.s64 + 1308;
	// stb r3,15(r9)
	REX_STORE_U8(ctx.r9.u32 + 15, ctx.r3.u8);
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r3,r23,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// rlwinm r17,r18,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xFFFFFFF;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r30,r30,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// stw r19,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r19.u32);
	// rlwinm r24,r24,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r29,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r29.u32);
	// rlwinm r5,r21,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwz r23,136(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r29,r21,30,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3C;
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r19,r30,r11
	ctx.r19.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r30,r27,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// lwzx r27,r26,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwzx r21,r3,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r26,r25,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// lwzx r16,r29,r11
	ctx.r16.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r3,r28,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// lwzx r25,r24,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwzx r24,r5,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r5,r17,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFFFFFF;
	// add r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 + ctx.r23.u64;
	// lwzx r14,r30,r11
	ctx.r14.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stb r29,14(r9)
	REX_STORE_U8(ctx.r9.u32 + 14, ctx.r29.u8);
	// rlwinm r30,r18,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// stb r28,13(r9)
	REX_STORE_U8(ctx.r9.u32 + 13, ctx.r28.u8);
	// rlwinm r28,r5,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// stw r4,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// rlwinm r23,r5,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// rlwinm r29,r17,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// stw r22,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r22.u32);
	// stw r27,-16(r7)
	REX_STORE_U32(ctx.r7.u32 + -16, ctx.r27.u32);
	// lwzx r22,r30,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r30,r31,9
	ctx.r30.s64 = ctx.r31.s64 + 9;
	// lwzx r15,r3,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r26,r26,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// lwzx r29,r29,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwzx r28,r28,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r23,r23,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r20,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r20.u32);
	// stw r21,-8(r7)
	REX_STORE_U32(ctx.r7.u32 + -8, ctx.r21.u32);
	// stw r19,-12(r7)
	REX_STORE_U32(ctx.r7.u32 + -12, ctx.r19.u32);
	// stw r25,-20(r7)
	REX_STORE_U32(ctx.r7.u32 + -20, ctx.r25.u32);
	// stw r24,-24(r7)
	REX_STORE_U32(ctx.r7.u32 + -24, ctx.r24.u32);
	// stw r16,-28(r7)
	REX_STORE_U32(ctx.r7.u32 + -28, ctx.r16.u32);
	// stw r15,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r15.u32);
	// stw r14,-4(r6)
	REX_STORE_U32(ctx.r6.u32 + -4, ctx.r14.u32);
	// stw r26,-8(r6)
	REX_STORE_U32(ctx.r6.u32 + -8, ctx.r26.u32);
	// stw r22,-16(r6)
	REX_STORE_U32(ctx.r6.u32 + -16, ctx.r22.u32);
	// stw r29,-20(r6)
	REX_STORE_U32(ctx.r6.u32 + -20, ctx.r29.u32);
	// lwz r27,144(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r28,-24(r6)
	REX_STORE_U32(ctx.r6.u32 + -24, ctx.r28.u32);
	// stw r23,-28(r6)
	REX_STORE_U32(ctx.r6.u32 + -28, ctx.r23.u32);
	// stb r3,12(r9)
	REX_STORE_U8(ctx.r9.u32 + 12, ctx.r3.u8);
	// stb r3,11(r9)
	REX_STORE_U8(ctx.r9.u32 + 11, ctx.r3.u8);
	// stw r27,-12(r6)
	REX_STORE_U32(ctx.r6.u32 + -12, ctx.r27.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r3,10(r9)
	REX_STORE_U8(ctx.r9.u32 + 10, ctx.r3.u8);
	// stb r3,9(r9)
	REX_STORE_U8(ctx.r9.u32 + 9, ctx.r3.u8);
loc_89920CD4:
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// beq cr6,0x89920d00
	if (ctx.cr6.eq) goto loc_89920D00;
	// extsh r7,r30
	ctx.r7.s64 = ctx.r30.s16;
	// cmpwi cr6,r7,23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 23, ctx.xer);
	// blt cr6,0x89920304
	if (ctx.cr6.lt) goto loc_89920304;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_89920D00:
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// cmpwi cr6,r31,23
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 23, ctx.xer);
	// bge cr6,0x89920d7c
	if (!ctx.cr6.lt) goto loc_89920D7C;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r5,r11,7132
	ctx.r5.s64 = ctx.r11.s64 + 7132;
	// lwz r4,7132(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 7132);
loc_89920D18:
	// li r7,9
	ctx.r7.s64 = 9;
loc_89920D1C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x89920d50
	if (ctx.cr6.eq) goto loc_89920D50;
	// rlwinm r8,r7,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_89920D40:
	// stwx r11,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwzu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89920d40
	if (!ctx.cr6.eq) goto loc_89920D40;
loc_89920D50:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stbx r3,r7,r9
	REX_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r3.u8);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 30, ctx.xer);
	// blt cr6,0x89920d1c
	if (ctx.cr6.lt) goto loc_89920D1C;
	// addi r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 9;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,23
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 23, ctx.xer);
	// blt cr6,0x89920d18
	if (ctx.cr6.lt) goto loc_89920D18;
loc_89920D7C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992D1C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8992D1D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lhz r10,19168(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 19168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992d2b4
	if (ctx.cr6.eq) goto loc_8992D2B4;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30280
	ctx.r8.s64 = -1984430080;
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r9,7640
	ctx.r29.s64 = ctx.r9.s64 + 7640;
	// addi r11,r8,32008
	ctx.r11.s64 = ctx.r8.s64 + 32008;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8992d24c
	if (!ctx.cr6.gt) goto loc_8992D24C;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_8992D218:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r8,68(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,64(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r4,40(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x89939350
	ctx.lr = 0x8992D23C;
	sub_89939350(ctx, base);
	// lhzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r29.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8992d218
	if (ctx.cr6.lt) goto loc_8992D218;
loc_8992D24C:
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lbz r10,6414(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 6414);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992d2b4
	if (ctx.cr6.eq) goto loc_8992D2B4;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8992d2b4
	if (!ctx.cr6.gt) goto loc_8992D2B4;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_8992D26C:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,6,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3800000;
	// rlwinm r9,r9,0,8,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8992d2a4
	if (ctx.cr6.eq) goto loc_8992D2A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lbz r8,68(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 68);
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x899390e0
	ctx.lr = 0x8992D2A4;
	sub_899390E0(ctx, base);
loc_8992D2A4:
	// lhzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r29.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8992d26c
	if (ctx.cr6.lt) goto loc_8992D26C;
loc_8992D2B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992D978) {
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
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// addi r10,r11,592
	ctx.r10.s64 = ctx.r11.s64 + 592;
	// addi r9,r7,12332
	ctx.r9.s64 = ctx.r7.s64 + 12332;
	// lbz r11,586(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 586);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mulli r11,r6,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(112));
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// addi r9,r10,110
	ctx.r9.s64 = ctx.r10.s64 + 110;
	// addi r7,r8,7128
	ctx.r7.s64 = ctx.r8.s64 + 7128;
	// lbzx r8,r4,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// stbx r6,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u8);
	// lbzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8992da58
	if (ctx.cr6.lt) goto loc_8992DA58;
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
loc_8992DA58:
	// bl 0x8992dbc0
	ctx.lr = 0x8992DA5C;
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

DEFINE_REX_FUNC(sub_8992DFC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x8992DFC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// lis r11,-30269
	ctx.r11.s64 = -1983709184;
	// addi r10,r10,-21264
	ctx.r10.s64 = ctx.r10.s64 + -21264;
	// addi r23,r11,-21292
	ctx.r23.s64 = ctx.r11.s64 + -21292;
	// addi r25,r10,16
	ctx.r25.s64 = ctx.r10.s64 + 16;
	// lis r8,-30280
	ctx.r8.s64 = -1984430080;
	// lis r9,-30278
	ctx.r9.s64 = -1984299008;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// addi r28,r8,32008
	ctx.r28.s64 = ctx.r8.s64 + 32008;
	// addi r27,r9,32008
	ctx.r27.s64 = ctx.r9.s64 + 32008;
	// addi r30,r10,5496
	ctx.r30.s64 = ctx.r10.s64 + 5496;
	// addi r29,r11,7640
	ctx.r29.s64 = ctx.r11.s64 + 7640;
loc_8992E004:
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8992e0d8
	if (ctx.cr6.eq) goto loc_8992E0D8;
	// lwz r31,-4(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + -4);
	// lwz r26,0(r25)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
loc_8992E018:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992e0cc
	if (ctx.cr6.eq) goto loc_8992E0CC;
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
	// beq cr6,0x8992e0cc
	if (ctx.cr6.eq) goto loc_8992E0CC;
	// rlwinm r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8992e080
	if (ctx.cr6.eq) goto loc_8992E080;
	// lbz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 88);
	// stb r11,89(r31)
	REX_STORE_U8(ctx.r31.u32 + 89, ctx.r11.u8);
	// b 0x8992e094
	goto loc_8992E094;
loc_8992E080:
	// lbz r6,88(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 88);
	// lhz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// lhz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// bl 0x8993c990
	ctx.lr = 0x8992E090;
	sub_8993C990(ctx, base);
	// stb r3,89(r31)
	REX_STORE_U8(ctx.r31.u32 + 89, ctx.r3.u8);
loc_8992E094:
	// lbz r11,89(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 89);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8992e0cc
	if (ctx.cr6.eq) goto loc_8992E0CC;
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
loc_8992E0CC:
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8992e018
	if (!ctx.cr6.eq) goto loc_8992E018;
loc_8992E0D8:
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// addi r25,r25,20
	ctx.r25.s64 = ctx.r25.s64 + 20;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8992e004
	if (ctx.cr6.lt) goto loc_8992E004;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992E838) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8992E840;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,-9516(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9516);
	// beq cr6,0x8992e890
	if (ctx.cr6.eq) goto loc_8992E890;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// bgt cr6,0x8992e874
	if (ctx.cr6.gt) goto loc_8992E874;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8992E874:
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
	// lwz r9,8420(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8420);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8992e8a0
	if (!ctx.cr6.lt) goto loc_8992E8A0;
	// stw r9,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r9.u32);
	// b 0x8992e8a0
	goto loc_8992E8A0;
loc_8992E890:
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// ble cr6,0x8992e8a0
	if (!ctx.cr6.gt) goto loc_8992E8A0;
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
loc_8992E8A0:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// addi r30,r11,25128
	ctx.r30.s64 = ctx.r11.s64 + 25128;
	// mulli r31,r10,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r11,r30,637
	ctx.r11.s64 = ctx.r30.s64 + 637;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8992e8fc
	if (!ctx.cr6.lt) goto loc_8992E8FC;
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r7,r8,12332
	ctx.r7.s64 = ctx.r8.s64 + 12332;
	// lbz r9,586(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 586);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x8992e8fc
	if (!ctx.cr6.eq) goto loc_8992E8FC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8992e758
	ctx.lr = 0x8992E8F4;
	sub_8992E758(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_8992E8FC:
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// extsh r8,r28
	ctx.r8.s64 = ctx.r28.s16;
	// addi r9,r9,592
	ctx.r9.s64 = ctx.r9.s64 + 592;
	// mulli r7,r8,112
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(112));
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8992e988
	if (ctx.cr6.eq) goto loc_8992E988;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x8992e9f4
	if (!ctx.cr6.eq) goto loc_8992E9F4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8992e974
	if (!ctx.cr6.eq) goto loc_8992E974;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8992E938:
	// addi r11,r30,636
	ctx.r11.s64 = ctx.r30.s64 + 636;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r8,7008
	ctx.r11.s64 = ctx.r8.s64 + 7008;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// mulli r4,r5,30
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(30));
	// lbzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// bl 0x899362a0
	ctx.lr = 0x8992E96C;
	sub_899362A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8992e9c8
	goto loc_8992E9C8;
loc_8992E974:
	// addi r9,r30,636
	ctx.r9.s64 = ctx.r30.s64 + 636;
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8992e9f4
	if (ctx.cr6.eq) goto loc_8992E9F4;
	// b 0x8992e938
	goto loc_8992E938;
loc_8992E988:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8992e9e4
	if (!ctx.cr6.eq) goto loc_8992E9E4;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
loc_8992E994:
	// addi r10,r30,636
	ctx.r10.s64 = ctx.r30.s64 + 636;
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r7,7008
	ctx.r11.s64 = ctx.r7.s64 + 7008;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// rlwinm r4,r6,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// mulli r11,r4,30
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(30));
	// lbzx r4,r11,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// bl 0x899362a0
	ctx.lr = 0x8992E9C4;
	sub_899362A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_8992E9C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89963340
	ctx.lr = 0x8992E9D4;
	sub_89963340(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8995ba10
	ctx.lr = 0x8992E9DC;
	sub_8995BA10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_8992E9E4:
	// addi r9,r30,636
	ctx.r9.s64 = ctx.r30.s64 + 636;
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8992e994
	if (!ctx.cr6.eq) goto loc_8992E994;
loc_8992E9F4:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8992ea60
	if (ctx.cr6.lt) goto loc_8992EA60;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8992ea18
	if (ctx.cr6.lt) goto loc_8992EA18;
	// bl 0x89963788
	ctx.lr = 0x8992EA10;
	sub_89963788(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_8992EA18:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x89963340
	ctx.lr = 0x8992EA28;
	sub_89963340(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8995ba10
	ctx.lr = 0x8992EA30;
	sub_8995BA10(ctx, base);
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r7,7008
	ctx.r11.s64 = ctx.r7.s64 + 7008;
	// lwzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r5,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// mulli r11,r4,30
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(30));
	// lbzx r4,r11,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// bl 0x899362a0
	ctx.lr = 0x8992EA58;
	sub_899362A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_8992EA60:
	// addi r10,r30,636
	ctx.r10.s64 = ctx.r30.s64 + 636;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8992e938
	if (ctx.cr6.lt) goto loc_8992E938;
	// beq cr6,0x8992e994
	if (ctx.cr6.eq) goto loc_8992E994;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89930930) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89930938;
	__savegprlr_29(ctx, base);
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// li r4,40
	ctx.r4.s64 = 40;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// lwz r10,12740(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12740);
	// lis r29,8
	ctx.r29.s64 = 524288;
	// lwz r9,7120(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 7120);
	// oris r7,r10,248
	ctx.r7.u64 = ctx.r10.u64 | 16252928;
	// lwz r11,9520(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 9520);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r7,r7,8
	ctx.r7.u64 = ctx.r7.u64 | 8;
	// ori r9,r9,7
	ctx.r9.u64 = ctx.r9.u64 | 7;
	// lwz r31,8152(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8152);
loc_89930978:
	// li r6,30
	ctx.r6.s64 = 30;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_89930984:
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x89930984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89930984;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// bne 0x89930978
	if (!ctx.cr0.eq) goto loc_89930978;
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// stw r11,9520(r30)
	REX_STORE_U32(ctx.r30.u32 + 9520, ctx.r11.u32);
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// lhz r11,-21584(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + -21584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subf r11,r8,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r8.u64;
	// stw r11,12756(r9)
	REX_STORE_U32(ctx.r9.u32 + 12756, ctx.r11.u32);
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89930CC8) {
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
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,-21272
	ctx.r6.s64 = ctx.r10.s64 + -21272;
loc_89930CE8:
	// lbzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89930d20
	if (ctx.cr6.eq) goto loc_89930D20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// blt cr6,0x89930ce8
	if (ctx.cr6.lt) goto loc_89930CE8;
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
loc_89930D20:
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// ori r8,r4,20
	ctx.r8.u64 = ctx.r4.u64 | 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r3,-30269
	ctx.r3.s64 = -1983709184;
	// stbx r4,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r4.u8);
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lbz r10,12327(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 12327);
	// addi r9,r3,-10480
	ctx.r9.s64 = ctx.r3.s64 + -10480;
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r3,12327(r5)
	REX_STORE_U8(ctx.r5.u32 + 12327, ctx.r3.u8);
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// stb r7,3531(r6)
	REX_STORE_U8(ctx.r6.u32 + 3531, ctx.r7.u8);
	// lis r4,-30273
	ctx.r4.s64 = -1983971328;
	// stw r10,26528(r31)
	REX_STORE_U32(ctx.r31.u32 + 26528, ctx.r10.u32);
	// lhz r10,-2544(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + -2544);
	// lbz r4,-25513(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + -25513);
	// clrlwi r3,r10,22
	ctx.r3.u64 = ctx.r10.u32 & 0x3FF;
	// bl 0x899da7a0
	ctx.lr = 0x89930D78;
	sub_899DA7A0(ctx, base);
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

DEFINE_REX_FUNC(sub_89931A80) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89931A88;
	__savegprlr_27(ctx, base);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lis r11,6503
	ctx.r11.s64 = 426180608;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
	// lwz r11,5212(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 5212);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x89931ac4
	if (ctx.cr6.eq) goto loc_89931AC4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89931bb4
	if (ctx.cr6.eq) goto loc_89931BB4;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5212(r5)
	REX_STORE_U32(ctx.r5.u32 + 5212, ctx.r11.u32);
	// lbz r11,523(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 523);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,523(r10)
	REX_STORE_U8(ctx.r10.u32 + 523, ctx.r9.u8);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89931AC4:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-4096
	ctx.r10.s64 = -268435456;
	// lwz r11,9520(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9520);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x89931af4
	if (ctx.cr6.eq) goto loc_89931AF4;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,5212(r5)
	REX_STORE_U32(ctx.r5.u32 + 5212, ctx.r10.u32);
	// stb r11,32550(r9)
	REX_STORE_U8(ctx.r9.u32 + 32550, ctx.r11.u8);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89931AF4:
	// lis r4,-30276
	ctx.r4.s64 = -1984167936;
	// lwz r11,32008(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89931b18
	if (ctx.cr6.eq) goto loc_89931B18;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r10,3620(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3620);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89931bb4
	if (ctx.cr6.eq) goto loc_89931BB4;
loc_89931B18:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30273
	ctx.r9.s64 = -1983971328;
	// lis r6,-30214
	ctx.r6.s64 = -1980104704;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lwz r11,7920(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7920);
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// lwz r10,-9528(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -9528);
	// lis r31,-30214
	ctx.r31.s64 = -1980104704;
	// lwz r9,3796(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 3796);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r30,-30214
	ctx.r30.s64 = -1980104704;
	// lwz r8,20396(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 20396);
	// lis r28,-30214
	ctx.r28.s64 = -1980104704;
	// stw r11,3624(r6)
	REX_STORE_U32(ctx.r6.u32 + 3624, ctx.r11.u32);
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lwz r11,-9536(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -9536);
	// lis r27,-30214
	ctx.r27.s64 = -1980104704;
	// stw r10,3628(r31)
	REX_STORE_U32(ctx.r31.u32 + 3628, ctx.r10.u32);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// lwz r7,26916(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 26916);
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// stw r9,3640(r30)
	REX_STORE_U32(ctx.r30.u32 + 3640, ctx.r9.u32);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// stw r8,3644(r28)
	REX_STORE_U32(ctx.r28.u32 + 3644, ctx.r8.u32);
	// lwz r6,8156(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 8156);
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// lis r31,-30214
	ctx.r31.s64 = -1980104704;
	// stw r3,3656(r27)
	REX_STORE_U32(ctx.r27.u32 + 3656, ctx.r3.u32);
	// stw r7,3648(r10)
	REX_STORE_U32(ctx.r10.u32 + 3648, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,3652(r9)
	REX_STORE_U32(ctx.r9.u32 + 3652, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,32008(r4)
	REX_STORE_U32(ctx.r4.u32 + 32008, ctx.r10.u32);
	// stw r6,3616(r8)
	REX_STORE_U32(ctx.r8.u32 + 3616, ctx.r6.u32);
	// stw r11,5212(r5)
	REX_STORE_U32(ctx.r5.u32 + 5212, ctx.r11.u32);
	// stw r7,3612(r31)
	REX_STORE_U32(ctx.r31.u32 + 3612, ctx.r7.u32);
loc_89931BB4:
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89931E60) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// addi r10,r11,7912
	ctx.r10.s64 = ctx.r11.s64 + 7912;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r11,r9,12004
	ctx.r11.s64 = ctx.r9.s64 + 12004;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,5
	ctx.r7.s64 = 5;
	// stb r6,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r6.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r8,6(r10)
	REX_STORE_U8(ctx.r10.u32 + 6, ctx.r8.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r7,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r7.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r6,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r6,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// li r6,16
	ctx.r6.s64 = 16;
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r7,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r7,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// li r7,25
	ctx.r7.s64 = 25;
	// stb r8,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// li r8,7
	ctx.r8.s64 = 7;
	// stb r6,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// stb r7,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r8,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,18864
	ctx.r6.s64 = ctx.r6.s64 + 18864;
loc_89931EDC:
	// lwzx r5,r8,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// lbz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// clrlwi r3,r4,28
	ctx.r3.u64 = ctx.r4.u32 & 0xF;
	// rlwinm r5,r4,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFF0;
	// subfc r4,r3,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r3.u32;
	ctx.r4.u64 = ctx.r8.u64 - ctx.r3.u64;
	// eqv r3,r3,r8
	ctx.r3.u64 = ~(ctx.r3.u64 ^ ctx.r8.u64);
	// rlwinm r8,r3,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addze r4,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r4.s64 = temp.s64;
	// subfic r3,r5,144
	ctx.xer.ca = ctx.r5.u32 <= 144;
	ctx.r3.u64 = static_cast<uint64_t>(144) - ctx.r5.u64;
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// subfe r4,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// or r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 | ctx.r5.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x89931f20
	if (ctx.cr6.eq) goto loc_89931F20;
	// li r7,1
	ctx.r7.s64 = 1;
loc_89931F20:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x89931edc
	if (ctx.cr6.lt) goto loc_89931EDC;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// addi r8,r9,18888
	ctx.r8.s64 = ctx.r9.s64 + 18888;
	// lbz r6,16(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 16);
	// cmplwi cr6,r6,25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 25, ctx.xer);
	// bge cr6,0x89931f4c
	if (!ctx.cr6.lt) goto loc_89931F4C;
	// li r7,1
	ctx.r7.s64 = 1;
loc_89931F4C:
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89932B18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r11,r11,186
	ctx.r11.s64 = ctx.r11.s64 + 186;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r9,r9,25128
	ctx.r9.s64 = ctx.r9.s64 + 25128;
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// mulli r7,r8,696
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(696));
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,5,5
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x89932b68
	if (ctx.cr6.eq) goto loc_89932B68;
loc_89932B54:
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// sth r9,3496(r8)
	REX_STORE_U16(ctx.r8.u32 + 3496, ctx.r9.u16);
	// blr 
	return;
loc_89932B68:
	// subfic r8,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r8.u64 = static_cast<uint64_t>(1) - ctx.r8.u64;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// mulli r6,r3,696
	ctx.r6.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(696));
	// lwzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// rlwinm r4,r5,0,5,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4000000;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x89932b54
	if (!ctx.cr6.eq) goto loc_89932B54;
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// lhz r3,3496(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 3496);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stbx r3,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89932CB0) {
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
	// addi r9,r31,186
	ctx.r9.s64 = ctx.r31.s64 + 186;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r11,r8,25128
	ctx.r11.s64 = ctx.r8.s64 + 25128;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// lbzx r5,r30,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// mulli r8,r5,696
	ctx.r8.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(696));
	// lwzx r4,r30,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lwzx r3,r30,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addis r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 524288;
	// bl 0x89932c20
	ctx.lr = 0x89932D10;
	sub_89932C20(ctx, base);
	// addi r6,r31,158
	ctx.r6.s64 = ctx.r31.s64 + 158;
	// sthx r3,r30,r6
	REX_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r3.u16);
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

DEFINE_REX_FUNC(sub_89933520) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-31952
	ctx.r9.s64 = ctx.r9.s64 + -31952;
	// addi r8,r8,32032
	ctx.r8.s64 = ctx.r8.s64 + 32032;
loc_89933538:
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// lhzx r5,r7,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// clrlwi r4,r6,18
	ctx.r4.u64 = ctx.r6.u32 & 0x3FFF;
	// clrlwi r3,r5,18
	ctx.r3.u64 = ctx.r5.u32 & 0x3FFF;
	// subf r7,r4,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subf r6,r3,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r3.u64;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// rlwinm r7,r4,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// or r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 | ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8993358c
	if (!ctx.cr6.eq) goto loc_8993358C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,256
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 256, ctx.xer);
	// blt cr6,0x89933538
	if (ctx.cr6.lt) goto loc_89933538;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8993358C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89933B88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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
	// lwzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lhz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// addi r8,r8,32560
	ctx.r8.s64 = ctx.r8.s64 + 32560;
	// addi r9,r9,20960
	ctx.r9.s64 = ctx.r9.s64 + 20960;
	// addi r7,r10,-21216
	ctx.r7.s64 = ctx.r10.s64 + -21216;
loc_89933BCC:
	// lbzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89933c0c
	if (ctx.cr6.lt) goto loc_89933C0C;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x89933c0c
	if (ctx.cr6.gt) goto loc_89933C0C;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x89933c0c
	if (ctx.cr6.lt) goto loc_89933C0C;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bgt cr6,0x89933c0c
	if (ctx.cr6.gt) goto loc_89933C0C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r10,r8
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u16);
loc_89933C0C:
	// lhzu r11,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89933bcc
	if (!ctx.cr6.eq) goto loc_89933BCC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89933EF8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x89933F00;
	__savegprlr_23(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r25,8(r10)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x89934054
	if (ctx.cr6.eq) goto loc_89934054;
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// addi r29,r5,-10056
	ctx.r29.s64 = ctx.r5.s64 + -10056;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r5,r3,-31952
	ctx.r5.s64 = ctx.r3.s64 + -31952;
	// addi r3,r7,11752
	ctx.r3.s64 = ctx.r7.s64 + 11752;
	// addi r28,r4,7128
	ctx.r28.s64 = ctx.r4.s64 + 7128;
	// addi r7,r8,32032
	ctx.r7.s64 = ctx.r8.s64 + 32032;
	// li r31,4096
	ctx.r31.s64 = 4096;
	// addi r4,r6,-9208
	ctx.r4.s64 = ctx.r6.s64 + -9208;
	// addi r27,r9,-21216
	ctx.r27.s64 = ctx.r9.s64 + -21216;
	// addi r8,r10,32560
	ctx.r8.s64 = ctx.r10.s64 + 32560;
	// addi r26,r11,20960
	ctx.r26.s64 = ctx.r11.s64 + 20960;
loc_89933F6C:
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// cmpwi cr6,r30,918
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 918, ctx.xer);
	// beq cr6,0x89934044
	if (ctx.cr6.eq) goto loc_89934044;
	// lbzx r11,r30,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x89933fa8
	if (ctx.cr6.lt) goto loc_89933FA8;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x89933fa8
	if (ctx.cr6.gt) goto loc_89933FA8;
	// lbzx r10,r30,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r31,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r31.u16);
loc_89933FA8:
	// li r6,0
	ctx.r6.s64 = 0;
loc_89933FAC:
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x89933ff0
	if (!ctx.cr6.eq) goto loc_89933FF0;
	// lhzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// blt cr6,0x89933ff0
	if (ctx.cr6.lt) goto loc_89933FF0;
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bgt cr6,0x89933ff0
	if (ctx.cr6.gt) goto loc_89933FF0;
	// lhzx r24,r11,r4
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// clrlwi r23,r10,16
	ctx.r23.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r10,r24,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r24.u32, 4);
	// ori r24,r23,32768
	ctx.r24.u64 = ctx.r23.u64 | 32768;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthx r24,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r24.u16);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r31,r9,r8
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u16);
loc_89933FF0:
	// lhzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x89934030
	if (!ctx.cr6.eq) goto loc_89934030;
	// lhzx r9,r11,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// blt cr6,0x89934030
	if (ctx.cr6.lt) goto loc_89934030;
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bgt cr6,0x89934030
	if (ctx.cr6.gt) goto loc_89934030;
	// lhzx r24,r11,r29
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// clrlwi r23,r10,16
	ctx.r23.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r10,r24,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r24.u32, 4);
	// ori r24,r23,32768
	ctx.r24.u64 = ctx.r23.u64 | 32768;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthx r24,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r24.u16);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r31,r9,r8
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u16);
loc_89934030:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// blt cr6,0x89933fac
	if (ctx.cr6.lt) goto loc_89933FAC;
loc_89934044:
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x89933f6c
	if (!ctx.cr6.eq) goto loc_89933F6C;
loc_89934054:
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899352B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x899352C0;
	__savegprlr_17(ctx, base);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// li r22,0
	ctx.r22.s64 = 0;
	// extsh r19,r3
	ctx.r19.s64 = ctx.r3.s16;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// rlwinm r18,r11,17,15,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r17,r11,24,25,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7F;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// clrlwi r20,r11,24
	ctx.r20.u64 = ctx.r11.u32 & 0xFF;
	// ble cr6,0x89935460
	if (!ctx.cr6.gt) goto loc_89935460;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsb r25,r6
	ctx.r25.s64 = ctx.r6.s8;
	// rlwimi r8,r7,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// addi r6,r25,-1
	ctx.r6.s64 = ctx.r25.s64 + -1;
	// clrlwi r23,r8,16
	ctx.r23.u64 = ctx.r8.u32 & 0xFFFF;
	// lis r8,0
	ctx.r8.s64 = 0;
	// clrlwi r24,r6,24
	ctx.r24.u64 = ctx.r6.u32 & 0xFF;
	// extsb r30,r5
	ctx.r30.s64 = ctx.r5.s8;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// ori r26,r8,65535
	ctx.r26.u64 = ctx.r8.u64 | 65535;
loc_89935318:
	// sth r23,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r23.u16);
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r7,r27,16
	ctx.r7.u64 = ctx.r27.u32 & 0xFFFF;
	// mullw r3,r8,r30
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// mullw r7,r7,r25
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// subf r3,r3,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r3.u64;
	// add r31,r30,r26
	ctx.r31.u64 = ctx.r30.u64 + ctx.r26.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r3,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r3,r31,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r31,r4,16
	ctx.r31.u64 = ctx.r4.u32 & 0xFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r7,r3,r24
	ctx.r7.u64 = ctx.r3.u64 | ctx.r24.u64;
	// ori r3,r31,8192
	ctx.r3.u64 = ctx.r31.u64 | 8192;
	// sth r8,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r8.u16);
	// sth r7,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r7.u16);
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r3,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r3.u16);
	// li r3,4096
	ctx.r3.s64 = 4096;
	// lhz r31,12(r11)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm r7,r31,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r28,r8,24
	ctx.r28.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8993539c
	if (ctx.cr6.eq) goto loc_8993539C;
	// rlwinm r8,r8,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 31, ctx.xer);
	// ble cr6,0x8993539c
	if (!ctx.cr6.gt) goto loc_8993539C;
	// li r3,6144
	ctx.r3.s64 = 6144;
loc_8993539C:
	// clrlwi r8,r31,27
	ctx.r8.u64 = ctx.r31.u32 & 0x1F;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899353c0
	if (ctx.cr6.eq) goto loc_899353C0;
	// clrlwi r7,r28,24
	ctx.r7.u64 = ctx.r28.u32 & 0xFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r8,31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 31, ctx.xer);
	// ble cr6,0x899353c0
	if (!ctx.cr6.gt) goto loc_899353C0;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r3,r8,1024
	ctx.r3.u64 = ctx.r8.u64 | 1024;
loc_899353C0:
	// lhz r7,10(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r8,r20,16
	ctx.r8.u64 = ctx.r20.u32 & 0xFFFF;
	// or r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 | ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// sth r3,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r3.u16);
	// beq cr6,0x89935448
	if (ctx.cr6.eq) goto loc_89935448;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r27,r7
	ctx.r27.s64 = ctx.r7.s16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x89935448
	if (!ctx.cr6.eq) goto loc_89935448;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// mullw r3,r29,r30
	ctx.r3.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x89935430
	if (!ctx.cr6.gt) goto loc_89935430;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// neg r6,r8
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
loc_89935430:
	// extsb r8,r18
	ctx.r8.s64 = ctx.r18.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x89935448
	if (ctx.cr6.eq) goto loc_89935448;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
loc_89935448:
	// addi r8,r21,1
	ctx.r8.s64 = ctx.r21.s64 + 1;
	// sthu r22,18(r11)
	ea = 18 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r22.u16);
	ctx.r11.u32 = ea;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x89935318
	if (ctx.cr6.lt) goto loc_89935318;
loc_89935460:
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899363F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,-31405(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -31405);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89936438
	if (ctx.cr6.eq) goto loc_89936438;
	// cmplwi cr6,r3,256
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 256, ctx.xer);
	// bge cr6,0x89936438
	if (!ctx.cr6.lt) goto loc_89936438;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-21104
	ctx.r11.s64 = ctx.r11.s64 + -21104;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89936438
	if (ctx.cr6.eq) goto loc_89936438;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bgtlr 
	if (ctx.cr0.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_89936438:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89936698) {
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
	// beq cr6,0x8993674c
	if (ctx.cr6.eq) goto loc_8993674C;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r10,r10,5100
	ctx.r10.s64 = ctx.r10.s64 + 5100;
	// lbz r11,9527(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9527);
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
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
	// bge cr6,0x89936734
	if (!ctx.cr6.lt) goto loc_89936734;
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
	// beq cr6,0x89936734
	if (ctx.cr6.eq) goto loc_89936734;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bgt 0x8993672c
	if (ctx.cr0.gt) goto loc_8993672C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x89936360
	ctx.lr = 0x89936718;
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
loc_8993672C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8993674c
	if (!ctx.cr6.eq) goto loc_8993674C;
loc_89936734:
	// bl 0x89936360
	ctx.lr = 0x89936738;
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
loc_8993674C:
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

DEFINE_REX_FUNC(sub_899379A8) {
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
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,25128
	ctx.r30.s64 = ctx.r11.s64 + 25128;
	// mulli r31,r10,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x89937a10
	if (ctx.cr6.gt) goto loc_89937A10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899379fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899379FC;
	// bdzf 4*cr6+eq,0x89937a04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89937A04;
	// bne cr6,0x89937a0c
	if (!ctx.cr6.eq) goto loc_89937A0C;
	// bl 0x89955ec0
	ctx.lr = 0x899379F8;
	sub_89955EC0(ctx, base);
	// b 0x89937a10
	goto loc_89937A10;
loc_899379FC:
	// bl 0x89956750
	ctx.lr = 0x89937A00;
	sub_89956750(ctx, base);
	// b 0x89937a10
	goto loc_89937A10;
loc_89937A04:
	// bl 0x89957010
	ctx.lr = 0x89937A08;
	sub_89957010(ctx, base);
	// b 0x89937a10
	goto loc_89937A10;
loc_89937A0C:
	// bl 0x899577d8
	ctx.lr = 0x89937A10;
	sub_899577D8(ctx, base);
loc_89937A10:
	// addi r11,r30,624
	ctx.r11.s64 = ctx.r30.s64 + 624;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89937a34
	if (ctx.cr6.eq) goto loc_89937A34;
	// addi r11,r30,638
	ctx.r11.s64 = ctx.r30.s64 + 638;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
loc_89937A34:
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

DEFINE_REX_FUNC(sub_899384B8) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// addi r7,r3,3620
	ctx.r7.s64 = ctx.r3.s64 + 3620;
	// addi r31,r8,6420
	ctx.r31.s64 = ctx.r8.s64 + 6420;
	// stw r4,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lhz r10,25056(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 25056);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lhz r9,3620(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 3620);
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// lhz r8,6420(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 6420);
	// clrlwi r30,r10,27
	ctx.r30.u64 = ctx.r10.u32 & 0x1F;
	// lhz r10,2(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r8,2(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// subfic r30,r30,31
	ctx.xer.ca = ctx.r30.u32 <= 31;
	ctx.r30.u64 = static_cast<uint64_t>(31) - ctx.r30.u64;
	// lhz r6,-9496(r4)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + -9496);
	// subf r31,r9,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lwz r7,3352(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3352);
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r9,25056(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 25056);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// subf r10,r3,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r3.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf r10,r3,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r3.u64;
	// rlwimi r5,r6,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// addis r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 65536;
	// addi r4,r4,-9496
	ctx.r4.s64 = ctx.r4.s64 + -9496;
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lis r31,-30274
	ctx.r31.s64 = -1984036864;
	// rlwinm r8,r3,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r3,r6,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// lhz r7,2(r4)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// subf r5,r3,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r3.u64;
	// lwz r10,512(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// or r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 | ctx.r8.u64;
	// add r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64;
	// subf r6,r4,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r4.u64;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r6,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r5,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89938B70) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// addi r7,r10,3620
	ctx.r7.s64 = ctx.r10.s64 + 3620;
	// addi r6,r8,6420
	ctx.r6.s64 = ctx.r8.s64 + 6420;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r9,3620(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 3620);
	// lis r3,-30274
	ctx.r3.s64 = -1984036864;
	// lhz r8,6420(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 6420);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// lhz r10,2(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// lhz r9,2(r6)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lis r30,-30253
	ctx.r30.s64 = -1982660608;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lwz r10,512(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 512);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lwz r9,25056(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 25056);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r8,-9496(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -9496);
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// rlwimi r4,r5,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899390E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x899390E8;
	__savegprlr_15(ctx, base);
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r4,-30251
	ctx.r4.s64 = -1982529536;
	// addic r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// subfe r30,r3,r11
	temp.u8 = (~ctx.r3.u32 + ctx.r11.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r3.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 16;
	// lwz r6,12756(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 12756);
	// srawi r7,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 16;
	// lis r4,-30273
	ctx.r4.s64 = -1983971328;
	// lwz r11,7120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7120);
	// extsh r31,r3
	ctx.r31.s64 = ctx.r3.s16;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// lis r17,-30275
	ctx.r17.s64 = -1984102400;
	// add r7,r30,r31
	ctx.r7.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r6,r4,6420
	ctx.r6.s64 = ctx.r4.s64 + 6420;
	// extsh r22,r3
	ctx.r22.s64 = ctx.r3.s16;
	// add r21,r7,r29
	ctx.r21.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lwz r11,9520(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 9520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r21,6420(r4)
	REX_STORE_U16(ctx.r4.u32 + 6420, ctx.r21.u16);
	// sth r22,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r22.u16);
	// beq cr6,0x89939344
	if (ctx.cr6.eq) goto loc_89939344;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// extsb r18,r8
	ctx.r18.s64 = ctx.r8.s8;
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// addi r28,r5,-4
	ctx.r28.s64 = ctx.r5.s64 + -4;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// lwz r29,20424(r7)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 20424);
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// lwz r23,588(r8)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r8.u32 + 588);
	// lis r16,-32768
	ctx.r16.s64 = -2147483648;
	// lwz r24,-25884(r6)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r6.u32 + -25884);
	// lis r20,-16384
	ctx.r20.s64 = -1073741824;
	// lis r19,1
	ctx.r19.s64 = 65536;
	// lis r25,4096
	ctx.r25.s64 = 268435456;
	// ori r7,r5,32896
	ctx.r7.u64 = ctx.r5.u64 | 32896;
	// ori r26,r4,1
	ctx.r26.u64 = ctx.r4.u64 | 1;
loc_89939190:
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r6,r8,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x899391b0
	if (ctx.cr6.eq) goto loc_899391B0;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r27,8224
	ctx.r27.s64 = 8224;
	// b 0x899391dc
	goto loc_899391DC;
loc_899391B0:
	// rlwinm r8,r8,0,4,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF800000;
	// rlwinm r8,r8,0,8,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFF8FFFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899391d0
	if (ctx.cr6.eq) goto loc_899391D0;
	// lis r27,0
	ctx.r27.s64 = 0;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// ori r27,r27,41120
	ctx.r27.u64 = ctx.r27.u64 | 41120;
	// b 0x899391dc
	goto loc_899391DC;
loc_899391D0:
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r27,16448
	ctx.r27.s64 = 16448;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
loc_899391DC:
	// addi r6,r28,4
	ctx.r6.s64 = ctx.r28.s64 + 4;
	// lhz r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + 8);
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// addi r28,r6,4
	ctx.r28.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r18,7
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 7, ctx.xer);
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// lhz r31,8(r6)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r6.u32 + 8);
	// lhzu r6,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// beq cr6,0x89939208
	if (ctx.cr6.eq) goto loc_89939208;
	// cmpwi cr6,r18,9
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 9, ctx.xer);
	// bne cr6,0x89939244
	if (!ctx.cr6.eq) goto loc_89939244;
loc_89939208:
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r4,r3,r4
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mullw r8,r10,r8
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// srawi r3,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 8;
	// srawi r4,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 8;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89939348
	if (ctx.cr6.eq) goto loc_89939348;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x89939348
	if (ctx.cr6.eq) goto loc_89939348;
loc_89939244:
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// rlwinm r30,r4,0,0,1
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC0000000;
	// cmpw cr6,r30,r16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x89939294
	if (ctx.cr6.eq) goto loc_89939294;
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x89939278
	if (ctx.cr6.eq) goto loc_89939278;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x899392a0
	if (!ctx.cr6.eq) goto loc_899392A0;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// neg r4,r6
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// b 0x899392a0
	goto loc_899392A0;
loc_89939278:
	// extsh r4,r31
	ctx.r4.s64 = ctx.r31.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// neg r6,r4
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// neg r4,r3
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// extsh r31,r6
	ctx.r31.s64 = ctx.r6.s16;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// b 0x899392a0
	goto loc_899392A0;
loc_89939294:
	// extsh r4,r31
	ctx.r4.s64 = ctx.r31.s16;
	// neg r3,r4
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// extsh r31,r3
	ctx.r31.s64 = ctx.r3.s16;
loc_899392A0:
	// stw r5,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r3,r22
	ctx.r3.s64 = ctx.r22.s16;
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// extsh r30,r21
	ctx.r30.s64 = ctx.r21.s16;
	// stw r23,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r23.u32);
	// rlwinm r15,r10,17,0,14
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// stw r29,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r29.u32);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// subf r5,r5,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r5.u64;
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// subf r30,r4,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r4.u64;
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r7,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// subf r4,r19,r15
	ctx.r4.u64 = ctx.r15.u64 - ctx.r19.u64;
	// stw r26,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r26.u32);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// or r5,r4,r8
	ctx.r5.u64 = ctx.r4.u64 | ctx.r8.u64;
	// add r6,r30,r31
	ctx.r6.u64 = ctx.r30.u64 + ctx.r31.u64;
	// or r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 | ctx.r29.u64;
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// oris r10,r8,3
	ctx.r10.u64 = ctx.r8.u64 | 196608;
	// stw r5,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// oris r8,r27,4868
	ctx.r8.u64 = ctx.r27.u64 | 319029248;
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// rlwimi r3,r6,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r3,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89939190
	if (!ctx.cr6.eq) goto loc_89939190;
loc_89939344:
	// stw r11,9520(r17)
	REX_STORE_U32(ctx.r17.u32 + 9520, ctx.r11.u32);
loc_89939348:
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993D558) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8993D560;
	__savegprlr_26(ctx, base);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lhz r10,3708(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 3708);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8993d5dc
	if (ctx.cr6.lt) goto loc_8993D5DC;
	// beq cr6,0x8993d5b0
	if (ctx.cr6.eq) goto loc_8993D5B0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8993d5f8
	if (!ctx.cr6.lt) goto loc_8993D5F8;
	// lwz r10,3712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3712);
	// addic. r7,r10,-4096
	ctx.xer.ca = ctx.r10.u32 > 4095;
	ctx.r7.s64 = ctx.r10.s64 + -4096;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,3712(r11)
	REX_STORE_U32(ctx.r11.u32 + 3712, ctx.r7.u32);
	// bne 0x8993d5fc
	if (!ctx.cr0.eq) goto loc_8993D5FC;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r8,-2540
	ctx.r6.s64 = ctx.r8.s64 + -2540;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r8,3708(r9)
	REX_STORE_U16(ctx.r9.u32 + 3708, ctx.r8.u16);
	// stw r10,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// b 0x8993d5fc
	goto loc_8993D5FC;
loc_8993D5B0:
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lwz r10,3712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3712);
	// addi r6,r8,-2540
	ctx.r6.s64 = ctx.r8.s64 + -2540;
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// stw r7,3712(r11)
	REX_STORE_U32(ctx.r11.u32 + 3712, ctx.r7.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8993d5fc
	if (ctx.cr6.lt) goto loc_8993D5FC;
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r10,3708(r9)
	REX_STORE_U16(ctx.r9.u32 + 3708, ctx.r10.u16);
	// b 0x8993d5fc
	goto loc_8993D5FC;
loc_8993D5DC:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r8,r10,-2540
	ctx.r8.s64 = ctx.r10.s64 + -2540;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8993d770
	if (ctx.cr6.eq) goto loc_8993D770;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,3708(r9)
	REX_STORE_U16(ctx.r9.u32 + 3708, ctx.r10.u16);
loc_8993D5F8:
	// lwz r7,3712(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 3712);
loc_8993D5FC:
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// lhz r11,3712(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 3712);
	// lis r6,-30214
	ctx.r6.s64 = -1980104704;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// lhz r10,-21584(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + -21584);
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// lhz r11,3704(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 3704);
	// li r8,40
	ctx.r8.s64 = 40;
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// lwz r9,8152(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8152);
	// lwz r5,7120(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 7120);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subfic r4,r31,392
	ctx.xer.ca = ctx.r31.u32 <= 392;
	ctx.r4.u64 = static_cast<uint64_t>(392) - ctx.r31.u64;
	// addi r31,r5,-32
	ctx.r31.s64 = ctx.r5.s64 + -32;
	// lwz r11,9520(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 9520);
	// mullw r3,r4,r3
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// rlwinm r31,r31,16,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// addi r28,r9,-32
	ctx.r28.s64 = ctx.r9.s64 + -32;
	// divw r3,r3,r8
	ctx.r3.u64 = uint32_t((ctx.r8.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r3.s32 / ctx.r8.s32 : 0);
	// ori r8,r4,32896
	ctx.r8.u64 = ctx.r4.u64 | 32896;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// or r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 | ctx.r28.u64;
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lis r26,-16384
	ctx.r26.s64 = -1073741824;
	// sth r10,3704(r6)
	REX_STORE_U16(ctx.r6.u32 + 3704, ctx.r10.u16);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// lis r6,-16384
	ctx.r6.s64 = -1073741824;
	// ori r4,r26,1
	ctx.r4.u64 = ctx.r26.u64 | 1;
	// lis r27,383
	ctx.r27.s64 = 25100288;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r4,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lis r31,768
	ctx.r31.s64 = 50331648;
	// ori r6,r27,303
	ctx.r6.u64 = ctx.r27.u64 | 303;
	// lis r30,4096
	ctx.r30.s64 = 268435456;
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lis r3,-30320
	ctx.r3.s64 = -1987051520;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r3,9016
	ctx.r31.s64 = ctx.r3.s64 + 9016;
loc_8993D6BC:
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,3,22,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x3F8;
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// addi r26,r1,-320
	ctx.r26.s64 = ctx.r1.s64 + -320;
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// lhzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// srawi r3,r3,24
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 24;
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sthx r3,r27,r26
	REX_STORE_U16(ctx.r27.u32 + ctx.r26.u32, ctx.r3.u16);
	// blt cr6,0x8993d6bc
	if (ctx.cr6.lt) goto loc_8993D6BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r4,r1,-320
	ctx.r4.s64 = ctx.r1.s64 + -320;
	// rlwinm r9,r10,1,24,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// ori r7,r7,303
	ctx.r7.u64 = ctx.r7.u64 | 303;
loc_8993D714:
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r10,r10,200
	ctx.r10.s64 = ctx.r10.s64 + 200;
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r6,r6,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r31,r10,18,0,13
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFFFC0000;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,80
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 80, ctx.xer);
	// rlwinm r9,r3,1,24,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// blt cr6,0x8993d714
	if (ctx.cr6.lt) goto loc_8993D714;
	// lis r10,-4096
	ctx.r10.s64 = -268435456;
	// stw r11,9520(r29)
	REX_STORE_U32(ctx.r29.u32 + 9520, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8993D770:
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89940B38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x89940B40;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// sth r31,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,3680(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 3680);
	// lwz r11,-26964(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -26964);
	// addi r5,r11,4110
	ctx.r5.s64 = ctx.r11.s64 + 4110;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x89940B78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x89940cc4
	if (!ctx.cr6.eq) goto loc_89940CC4;
	// bl 0x89935d50
	ctx.lr = 0x89940B88;
	sub_89935D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89940cc4
	if (!ctx.cr6.eq) goto loc_89940CC4;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,8419(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8419);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89940cc4
	if (!ctx.cr6.eq) goto loc_89940CC4;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// addi r6,r9,19576
	ctx.r6.s64 = ctx.r9.s64 + 19576;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// stw r31,-21584(r8)
	REX_STORE_U32(ctx.r8.u32 + -21584, ctx.r31.u32);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// stw r31,12000(r7)
	REX_STORE_U32(ctx.r7.u32 + 12000, ctx.r31.u32);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// li r24,240
	ctx.r24.s64 = 240;
	// lis r27,1
	ctx.r27.s64 = 65536;
	// lis r25,-30251
	ctx.r25.s64 = -1982529536;
	// lis r28,-30274
	ctx.r28.s64 = -1984036864;
	// addi r30,r11,9016
	ctx.r30.s64 = ctx.r11.s64 + 9016;
	// addi r26,r10,19588
	ctx.r26.s64 = ctx.r10.s64 + 19588;
	// addi r29,r9,19572
	ctx.r29.s64 = ctx.r9.s64 + 19572;
loc_89940BF0:
	// bl 0x899301c0
	ctx.lr = 0x89940BF4;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x89940BF8;
	sub_899309D8(ctx, base);
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// bl 0x89930930
	ctx.lr = 0x89940C04;
	sub_89930930(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x89940C08;
	sub_899306A8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x89940c14
	if (ctx.cr6.eq) goto loc_89940C14;
	// addi r27,r27,-512
	ctx.r27.s64 = ctx.r27.s64 + -512;
loc_89940C14:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// srawi r10,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 4;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// lis r8,1920
	ctx.r8.s64 = 125829120;
	// addi r7,r31,128
	ctx.r7.s64 = ctx.r31.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r3,r7,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ori r8,r8,32896
	ctx.r8.u64 = ctx.r8.u64 | 32896;
	// lis r7,120
	ctx.r7.s64 = 7864320;
	// lis r6,160
	ctx.r6.s64 = 10485760;
	// lhzx r11,r3,r30
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r11,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 16;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x89939350
	ctx.lr = 0x89940C68;
	sub_89939350(ctx, base);
	// lbz r9,530(r28)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + 530);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89940c9c
	if (ctx.cr6.eq) goto loc_89940C9C;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x89931d78
	ctx.lr = 0x89940C8C;
	sub_89931D78(ctx, base);
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12072(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 12072);
	// bl 0x89931bb8
	ctx.lr = 0x89940C9C;
	sub_89931BB8(ctx, base);
loc_89940C9C:
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x89930720
	ctx.lr = 0x89940CA8;
	sub_89930720(ctx, base);
	// bl 0x899319c8
	ctx.lr = 0x89940CAC;
	sub_899319C8(ctx, base);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x89940cc4
	if (ctx.cr0.eq) goto loc_89940CC4;
	// bl 0x89929e68
	ctx.lr = 0x89940CB8;
	sub_89929E68(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89940bf0
	if (ctx.cr6.eq) goto loc_89940BF0;
loc_89940CC4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89941D10) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89941D18;
	__savegprlr_27(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r7,r11,12896
	ctx.r7.s64 = ctx.r11.s64 + 12896;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,27280(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 27280);
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
	// lbzx r5,r7,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// lbz r7,7384(r6)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + 7384);
	// clrlwi r11,r5,25
	ctx.r11.u64 = ctx.r5.u32 & 0x7F;
	// stb r8,633(r10)
	REX_STORE_U8(ctx.r10.u32 + 633, ctx.r8.u8);
	// stb r11,624(r10)
	REX_STORE_U8(ctx.r10.u32 + 624, ctx.r11.u8);
	// stb r7,1329(r10)
	REX_STORE_U8(ctx.r10.u32 + 1329, ctx.r7.u8);
	// stb r11,1320(r10)
	REX_STORE_U8(ctx.r10.u32 + 1320, ctx.r11.u8);
loc_89941D54:
	// mulli r11,r9,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// addi r6,r10,624
	ctx.r6.s64 = ctx.r10.s64 + 624;
	// addi r8,r10,628
	ctx.r8.s64 = ctx.r10.s64 + 628;
	// addi r5,r10,626
	ctx.r5.s64 = ctx.r10.s64 + 626;
	// addi r7,r10,625
	ctx.r7.s64 = ctx.r10.s64 + 625;
	// addi r4,r10,627
	ctx.r4.s64 = ctx.r10.s64 + 627;
	// lbzx r30,r11,r6
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r31,r10,632
	ctx.r31.s64 = ctx.r10.s64 + 632;
	// lbzx r3,r11,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r6,r10,631
	ctx.r6.s64 = ctx.r10.s64 + 631;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// xor r29,r30,r3
	ctx.r29.u64 = ctx.r30.u64 ^ ctx.r3.u64;
	// and r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 & ctx.r3.u64;
	// stbx r30,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r30.u8);
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stbx r3,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u8);
	// and r29,r8,r30
	ctx.r29.u64 = ctx.r8.u64 & ctx.r30.u64;
	// andc r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ~ctx.r30.u64;
	// addi r8,r10,629
	ctx.r8.s64 = ctx.r10.s64 + 629;
	// stbx r29,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r29.u8);
	// addi r5,r10,630
	ctx.r5.s64 = ctx.r10.s64 + 630;
	// stbx r30,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r30.u8);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r31,r11,r6
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stbx r4,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r4.u8);
	// lbzx r3,r11,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stbx r31,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r31.u8);
	// stb r3,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r3.u8);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// lbzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stb r11,3(r8)
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// blt cr6,0x89941d54
	if (ctx.cr6.lt) goto loc_89941D54;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89942750) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89942758;
	__savegprlr_29(ctx, base);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r9,12280
	ctx.r30.s64 = ctx.r9.s64 + 12280;
	// addi r5,r10,-31400
	ctx.r5.s64 = ctx.r10.s64 + -31400;
	// addi r31,r11,20376
	ctx.r31.s64 = ctx.r11.s64 + 20376;
loc_89942778:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// addi r10,r6,12
	ctx.r10.s64 = ctx.r6.s64 + 12;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// rlwinm r11,r9,4,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x10;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899427c8
	if (ctx.cr6.eq) goto loc_899427C8;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
loc_899427B8:
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x899427b8
	if (!ctx.cr6.eq) goto loc_899427B8;
loc_899427C8:
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stbx r29,r10,r30
	REX_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r29.u8);
	// bge 0x89942778
	if (!ctx.cr0.lt) goto loc_89942778;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89943598) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899435A0;
	__savegprlr_14(ctx, base);
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lwz r5,12740(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12740);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lwz r3,12020(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 12020);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lwz r19,588(r8)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r8.u32 + 588);
	// lwz r26,20424(r7)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 20424);
	// li r14,0
	ctx.r14.s64 = 0;
	// lwz r25,-25884(r6)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r6.u32 + -25884);
	// lis r31,240
	ctx.r31.s64 = 15728640;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// stw r5,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// stw r3,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r3.u32);
	// lis r6,-16384
	ctx.r6.s64 = -1073741824;
	// lwz r11,9520(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9520);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lwz r20,8152(r4)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 8152);
	// lwz r21,7120(r9)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r9.u32 + 7120);
	// ori r15,r31,88
	ctx.r15.u64 = ctx.r31.u64 | 88;
	// stw r14,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r14.u32);
	// ori r16,r8,7
	ctx.r16.u64 = ctx.r8.u64 | 7;
	// ori r3,r7,32896
	ctx.r3.u64 = ctx.r7.u64 | 32896;
	// lis r17,1
	ctx.r17.s64 = 65536;
	// lis r18,-16384
	ctx.r18.s64 = -1073741824;
	// lis r23,4096
	ctx.r23.s64 = 268435456;
	// ori r24,r6,1
	ctx.r24.u64 = ctx.r6.u64 | 1;
	// addi r5,r10,25128
	ctx.r5.s64 = ctx.r10.s64 + 25128;
loc_89943624:
	// mulli r7,r14,696
	ctx.r7.s64 = static_cast<int64_t>(ctx.r14.u64 * static_cast<uint64_t>(696));
	// addi r6,r5,654
	ctx.r6.s64 = ctx.r5.s64 + 654;
	// lbzx r10,r7,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8994368c
	if (ctx.cr6.eq) goto loc_8994368C;
	// lwz r10,-172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// addi r8,r5,24
	ctx.r8.s64 = ctx.r5.s64 + 24;
	// lwz r4,-168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// addi r31,r5,28
	ctx.r31.s64 = ctx.r5.s64 + 28;
	// addi r9,r21,-4
	ctx.r9.s64 = ctx.r21.s64 + -4;
	// add r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 + ctx.r15.u64;
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lhzx r4,r7,r31
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r31.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// rlwinm r8,r8,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// or r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r16,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r16.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8994368C:
	// addi r22,r5,40
	ctx.r22.s64 = ctx.r5.s64 + 40;
	// lbzx r10,r7,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lbzx r8,r7,r22
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r22.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// addic r4,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// subfe r9,r4,r10
	temp.u8 = (~ctx.r4.u32 + ctx.r10.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r4.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x89943870
	if (ctx.cr6.eq) goto loc_89943870;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x89943870
	if (!ctx.cr6.gt) goto loc_89943870;
	// li r31,0
	ctx.r31.s64 = 0;
loc_899436C8:
	// addi r9,r5,41
	ctx.r9.s64 = ctx.r5.s64 + 41;
	// mulli r10,r14,174
	ctx.r10.s64 = static_cast<int64_t>(ctx.r14.u64 * static_cast<uint64_t>(174));
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// addi r9,r5,452
	ctx.r9.s64 = ctx.r5.s64 + 452;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r5,316
	ctx.r6.s64 = ctx.r5.s64 + 316;
	// addi r8,r5,384
	ctx.r8.s64 = ctx.r5.s64 + 384;
	// addi r29,r5,520
	ctx.r29.s64 = ctx.r5.s64 + 520;
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
	// lwzx r27,r4,r9
	ctx.r27.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lwzx r10,r4,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// lwzx r30,r4,r8
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r9,r4,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// bne cr6,0x8994371c
	if (!ctx.cr6.eq) goto loc_8994371C;
	// lis r29,0
	ctx.r29.s64 = 0;
	// lis r28,224
	ctx.r28.s64 = 14680064;
	// ori r29,r29,41120
	ctx.r29.u64 = ctx.r29.u64 | 41120;
	// ori r28,r28,16448
	ctx.r28.u64 = ctx.r28.u64 | 16448;
	// b 0x89943724
	goto loc_89943724;
loc_8994371C:
	// li r29,16448
	ctx.r29.s64 = 16448;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_89943724:
	// subf. r10,r10,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x89943730
	if (!ctx.cr0.lt) goto loc_89943730;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89943730:
	// srawi r8,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 16;
	// subf. r10,r9,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// bge 0x89943744
	if (!ctx.cr0.lt) goto loc_89943744;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89943744:
	// addi r6,r5,24
	ctx.r6.s64 = ctx.r5.s64 + 24;
	// addi r8,r5,28
	ctx.r8.s64 = ctx.r5.s64 + 28;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// stw r8,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r8.u32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwzx r10,r7,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// lwz r6,-164(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwzx r6,r7,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// srawi r6,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 16;
	// srawi r10,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 16;
	// add r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 + ctx.r21.u64;
	// add r30,r10,r20
	ctx.r30.u64 = ctx.r10.u64 + ctx.r20.u64;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// ble cr6,0x899437d8
	if (!ctx.cr6.gt) goto loc_899437D8;
	// oris r9,r29,4868
	ctx.r9.u64 = ctx.r29.u64 | 319029248;
	// lwz r14,-176(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r30,r10,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsh r27,r6
	ctx.r27.s64 = ctx.r6.s16;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// or r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 | ctx.r27.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r4,r4,-256
	ctx.r4.s64 = ctx.r4.s64 + -256;
	// oris r27,r9,255
	ctx.r27.u64 = ctx.r9.u64 | 16711680;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_899437D8:
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// rlwinm r4,r9,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// subf r4,r17,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r17.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 | ctx.r8.u64;
	// or r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 | ctx.r26.u64;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// oris r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 196608;
	// oris r8,r8,7
	ctx.r8.u64 = ctx.r8.u64 | 458752;
	// oris r30,r29,4868
	ctx.r30.u64 = ctx.r29.u64 | 319029248;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// extsh r6,r31
	ctx.r6.s64 = ctx.r31.s16;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r19,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r19.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// lbzx r4,r7,r22
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r22.u32);
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x899436c8
	if (ctx.cr6.lt) goto loc_899436C8;
loc_89943870:
	// addi r10,r14,1
	ctx.r10.s64 = ctx.r14.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r14,r9
	ctx.r14.u64 = ctx.r9.u64;
	// stw r9,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x89943624
	if (ctx.cr6.lt) goto loc_89943624;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// stw r11,9520(r10)
	REX_STORE_U32(ctx.r10.u32 + 9520, ctx.r11.u32);
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89948148) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89948150;
	__savegprlr_26(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// addi r6,r11,12280
	ctx.r6.s64 = ctx.r11.s64 + 12280;
	// lis r3,-30274
	ctx.r3.s64 = -1984036864;
	// lis r29,-30242
	ctx.r29.s64 = -1981939712;
	// lbz r9,12280(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 12280);
	// addi r30,r3,520
	ctx.r30.s64 = ctx.r3.s64 + 520;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// lbz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// addi r27,r29,-21388
	ctx.r27.s64 = ctx.r29.s64 + -21388;
	// lbz r8,1(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// addi r26,r28,6052
	ctx.r26.s64 = ctx.r28.s64 + 6052;
	// rlwinm r5,r10,26,6,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// lbz r11,5(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// rlwinm r4,r10,28,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// lbz r7,3(r6)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// stb r5,4947(r31)
	REX_STORE_U8(ctx.r31.u32 + 4947, ctx.r5.u8);
	// rlwinm r5,r9,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r10,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// stb r4,520(r3)
	REX_STORE_U8(ctx.r3.u32 + 520, ctx.r4.u8);
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// stb r5,-21388(r29)
	REX_STORE_U8(ctx.r29.u32 + -21388, ctx.r5.u8);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// stb r10,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// rlwinm r10,r8,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// stb r9,6052(r28)
	REX_STORE_U8(ctx.r28.u32 + 6052, ctx.r9.u8);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// lbz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// stb r10,1(r27)
	REX_STORE_U8(ctx.r27.u32 + 1, ctx.r10.u8);
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// stb r9,6055(r4)
	REX_STORE_U8(ctx.r4.u32 + 6055, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// stb r8,1(r26)
	REX_STORE_U8(ctx.r26.u32 + 1, ctx.r8.u8);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r31,-30274
	ctx.r31.s64 = -1984036864;
	// stb r10,7934(r3)
	REX_STORE_U8(ctx.r3.u32 + 7934, ctx.r10.u8);
	// rlwinm r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// stb r9,-31405(r5)
	REX_STORE_U8(ctx.r5.u32 + -31405, ctx.r9.u8);
	// rlwinm r10,r7,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// stb r11,6046(r4)
	REX_STORE_U8(ctx.r4.u32 + 6046, ctx.r11.u8);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// stb r10,539(r31)
	REX_STORE_U8(ctx.r31.u32 + 539, ctx.r10.u8);
	// lis r5,-30273
	ctx.r5.s64 = -1983971328;
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// clrlwi r9,r7,28
	ctx.r9.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// stb r8,12271(r3)
	REX_STORE_U8(ctx.r3.u32 + 12271, ctx.r8.u8);
	// clrlwi r10,r6,29
	ctx.r10.u64 = ctx.r6.u32 & 0x7;
	// stb r9,-25514(r5)
	REX_STORE_U8(ctx.r5.u32 + -25514, ctx.r9.u8);
	// stb r11,12799(r4)
	REX_STORE_U8(ctx.r4.u32 + 12799, ctx.r11.u8);
	// stb r10,12322(r31)
	REX_STORE_U8(ctx.r31.u32 + 12322, ctx.r10.u8);
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89948238) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89948240;
	__savegprlr_29(ctx, base);
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lbz r31,530(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 530);
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// addic r7,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r7.s64 = ctx.r31.s64 + -1;
	// lbz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// lbz r8,22(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// subfe r29,r7,r31
	temp.u8 = (~ctx.r7.u32 + ctx.r31.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r7.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r10,17(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mullw r29,r29,r8
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// lbz r7,18(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// stw r9,3796(r6)
	REX_STORE_U32(ctx.r6.u32 + 3796, ctx.r9.u32);
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// stw r8,20396(r5)
	REX_STORE_U32(ctx.r5.u32 + 20396, ctx.r8.u32);
	// rlwinm r9,r29,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 25) & 0x1;
	// lis r6,-30274
	ctx.r6.s64 = -1984036864;
	// stw r10,12636(r4)
	REX_STORE_U32(ctx.r4.u32 + 12636, ctx.r10.u32);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// stb r9,12323(r3)
	REX_STORE_U8(ctx.r3.u32 + 12323, ctx.r9.u8);
	// rlwinm r10,r29,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// rlwinm r9,r29,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0x1;
	// rlwinm r8,r29,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 26) & 0x1;
	// stb r10,531(r6)
	REX_STORE_U8(ctx.r6.u32 + 531, ctx.r10.u8);
	// lis r4,-30247
	ctx.r4.s64 = -1982267392;
	// stb r9,6026(r5)
	REX_STORE_U8(ctx.r5.u32 + 6026, ctx.r9.u8);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// stb r8,-31401(r30)
	REX_STORE_U8(ctx.r30.u32 + -31401, ctx.r8.u8);
	// lis r5,-30273
	ctx.r5.s64 = -1983971328;
	// rlwinm r8,r29,29,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1;
	// rlwinm r10,r29,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x1;
	// stw r7,19360(r4)
	REX_STORE_U32(ctx.r4.u32 + 19360, ctx.r7.u32);
	// rlwinm r9,r29,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x1;
	// stb r8,9643(r3)
	REX_STORE_U8(ctx.r3.u32 + 9643, ctx.r8.u8);
	// stb r10,9526(r6)
	REX_STORE_U8(ctx.r6.u32 + 9526, ctx.r10.u8);
	// stb r9,6414(r5)
	REX_STORE_U8(ctx.r5.u32 + 6414, ctx.r9.u8);
	// beq cr6,0x89948384
	if (ctx.cr6.eq) goto loc_89948384;
	// lbz r9,31(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 31);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lbz r10,30(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 30);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lbz r8,23(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// lis r4,-30276
	ctx.r4.s64 = -1984167936;
	// lbz r7,21(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// stb r9,6034(r5)
	REX_STORE_U8(ctx.r5.u32 + 6034, ctx.r9.u8);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// stb r10,9518(r6)
	REX_STORE_U8(ctx.r6.u32 + 9518, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r8,32547(r4)
	REX_STORE_U8(ctx.r4.u32 + 32547, ctx.r8.u8);
	// addi r9,r9,-5616
	ctx.r9.s64 = ctx.r9.s64 + -5616;
	// stb r7,9654(r3)
	REX_STORE_U8(ctx.r3.u32 + 9654, ctx.r7.u8);
loc_8994832C:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r7,r9,38
	ctx.r7.s64 = ctx.r9.s64 + 38;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,28
	ctx.r4.s64 = ctx.r9.s64 + 28;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lbzx r8,r3,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r5,r3,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 14, ctx.xer);
	// lbzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// rotlwi r7,r3,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// sth r4,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r4.u16);
	// blt cr6,0x8994832c
	if (ctx.cr6.lt) goto loc_8994832C;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89948384:
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r7,-30276
	ctx.r7.s64 = -1984167936;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// stb r11,9654(r8)
	REX_STORE_U8(ctx.r8.u32 + 9654, ctx.r11.u8);
	// stb r10,32547(r7)
	REX_STORE_U8(ctx.r7.u32 + 32547, ctx.r10.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// stb r9,6034(r6)
	REX_STORE_U8(ctx.r6.u32 + 6034, ctx.r9.u8);
	// stb r8,9518(r5)
	REX_STORE_U8(ctx.r5.u32 + 9518, ctx.r8.u8);
	// addi r10,r10,-5616
	ctx.r10.s64 = ctx.r10.s64 + -5616;
loc_899483BC:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r10,36
	ctx.r8.s64 = ctx.r10.s64 + 36;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// lhzx r9,r4,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// lwzx r8,r4,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// sth r9,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// blt cr6,0x899483bc
	if (ctx.cr6.lt) goto loc_899483BC;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89948B70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89948B78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8993fb98
	ctx.lr = 0x89948B80;
	sub_8993FB98(ctx, base);
	// bl 0x8994a4f0
	ctx.lr = 0x89948B84;
	sub_8994A4F0(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r30,-30234
	ctx.r30.s64 = -1981415424;
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// addi r29,r30,-14904
	ctx.r29.s64 = ctx.r30.s64 + -14904;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,32
	ctx.r4.s64 = 32;
	// lbz r10,65(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 65);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stb r9,65(r31)
	REX_STORE_U8(ctx.r31.u32 + 65, ctx.r9.u8);
	// stb r10,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r10.u8);
	// lbz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 64);
	// stb r11,-14904(r30)
	REX_STORE_U8(ctx.r30.u32 + -14904, ctx.r11.u8);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,64(r31)
	REX_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// bl 0x899d8f48
	ctx.lr = 0x89948BC4;
	sub_899D8F48(ctx, base);
	// li r5,404
	ctx.r5.s64 = 404;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x899d8f48
	ctx.lr = 0x89948BD4;
	sub_899D8F48(ctx, base);
	// lbz r11,-14904(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + -14904);
	// lbz r10,1(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stb r11,64(r31)
	REX_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// stb r10,65(r31)
	REX_STORE_U8(ctx.r31.u32 + 65, ctx.r10.u8);
	// bl 0x899d8f48
	ctx.lr = 0x89948BF4;
	sub_899D8F48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89948C00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89948C08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89932850
	ctx.lr = 0x89948C18;
	sub_89932850(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// ble cr6,0x89948c54
	if (!ctx.cr6.gt) goto loc_89948C54;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-25852
	ctx.r10.s64 = ctx.r10.s64 + -25852;
loc_89948C34:
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x89948c34
	if (ctx.cr6.lt) goto loc_89948C34;
loc_89948C54:
	// bl 0x8994c070
	ctx.lr = 0x89948C58;
	sub_8994C070(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,9544
	ctx.r10.s64 = ctx.r10.s64 + 9544;
loc_89948C64:
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// blt cr6,0x89948c64
	if (ctx.cr6.lt) goto loc_89948C64;
	// li r11,16
	ctx.r11.s64 = 16;
loc_89948C84:
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,64
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 64, ctx.xer);
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// blt cr6,0x89948c84
	if (ctx.cr6.lt) goto loc_89948C84;
	// lis r30,-30234
	ctx.r30.s64 = -1981415424;
	// lbz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 64);
	// lbz r10,65(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 65);
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r29,r30,-14904
	ctx.r29.s64 = ctx.r30.s64 + -14904;
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r9,65(r31)
	REX_STORE_U8(ctx.r31.u32 + 65, ctx.r9.u8);
	// lis r28,-30214
	ctx.r28.s64 = -1980104704;
	// stb r11,-14904(r30)
	REX_STORE_U8(ctx.r30.u32 + -14904, ctx.r11.u8);
	// lis r27,-30232
	ctx.r27.s64 = -1981284352;
	// stb r8,64(r31)
	REX_STORE_U8(ctx.r31.u32 + 64, ctx.r8.u8);
	// li r6,2
	ctx.r6.s64 = 2;
	// stb r10,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r10.u8);
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// lwz r3,3680(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 3680);
	// lwz r11,-26964(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -26964);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x89948CF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3680(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 3680);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,96
	ctx.r6.s64 = 96;
	// lwz r4,-26964(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + -26964);
	// lwz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x89948D14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,-14904(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + -14904);
	// li r6,2
	ctx.r6.s64 = 2;
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// lwz r3,3680(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 3680);
	// lwz r11,-26964(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -26964);
	// stb r10,64(r31)
	REX_STORE_U8(ctx.r31.u32 + 64, ctx.r10.u8);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// stb r9,65(r31)
	REX_STORE_U8(ctx.r31.u32 + 65, ctx.r9.u8);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x89948D48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x89948148
	ctx.lr = 0x89948D4C;
	sub_89948148(ctx, base);
	// bl 0x89948238
	ctx.lr = 0x89948D50;
	sub_89948238(ctx, base);
	// bl 0x89948b70
	ctx.lr = 0x89948D54;
	sub_89948B70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89949490) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89949498;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r4,-16320
	ctx.r4.s64 = -1069547520;
	// addi r3,r11,22644
	ctx.r3.s64 = ctx.r11.s64 + 22644;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x89931dd8
	ctx.lr = 0x899494B0;
	sub_89931DD8(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r11,7120(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7120);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// lwz r10,12740(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12740);
	// lis r29,8
	ctx.r29.s64 = 524288;
	// lwz r9,8152(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8152);
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// addis r6,r10,248
	ctx.r6.s64 = ctx.r10.s64 + 16252928;
	// lwz r11,9520(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 9520);
	// addi r31,r9,40
	ctx.r31.s64 = ctx.r9.s64 + 40;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r9,80
	ctx.r9.s64 = 5242880;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// ori r6,r6,8
	ctx.r6.u64 = ctx.r6.u64 | 8;
	// ori r8,r10,7
	ctx.r8.u64 = ctx.r10.u64 | 7;
	// ori r9,r9,20560
	ctx.r9.u64 = ctx.r9.u64 | 20560;
loc_89949500:
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8994950C:
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// or r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8994950c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8994950C;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// bne 0x89949500
	if (!ctx.cr0.eq) goto loc_89949500;
	// stw r11,9520(r30)
	REX_STORE_U32(ctx.r30.u32 + 9520, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899496D0) {
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
	// extsb r31,r3
	ctx.r31.s64 = ctx.r3.s8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bgt cr6,0x899497d4
	if (ctx.cr6.gt) goto loc_899497D4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89949760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89949760;
	// bdzf 4*cr6+eq,0x899497a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899497A0;
	// bdzf 4*cr6+eq,0x899497a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899497A0;
	// bne cr6,0x899497cc
	if (!ctx.cr6.eq) goto loc_899497CC;
	// bl 0x89949490
	ctx.lr = 0x89949710;
	sub_89949490(ctx, base);
	// lis r11,-16320
	ctx.r11.s64 = -1069547520;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// ori r6,r11,16384
	ctx.r6.u64 = ctx.r11.u64 | 16384;
	// addi r3,r10,10132
	ctx.r3.s64 = ctx.r10.s64 + 10132;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x89931d78
	ctx.lr = 0x8994972C;
	sub_89931D78(ctx, base);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r9,22700
	ctx.r3.s64 = ctx.r9.s64 + 22700;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x89931d78
	ctx.lr = 0x89949740;
	sub_89931D78(ctx, base);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r7,r8,20432
	ctx.r7.s64 = ctx.r8.s64 + 20432;
	// lbz r11,128(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 128);
	// rlwinm r6,r11,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x899497d4
	if (ctx.cr6.eq) goto loc_899497D4;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x899497d4
	goto loc_899497D4;
loc_89949760:
	// bl 0x89949490
	ctx.lr = 0x89949764;
	sub_89949490(ctx, base);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r3,r11,-4772
	ctx.r3.s64 = ctx.r11.s64 + -4772;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x89931d78
	ctx.lr = 0x89949780;
	sub_89931D78(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r9,r10,20432
	ctx.r9.s64 = ctx.r10.s64 + 20432;
	// lbz r11,128(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 128);
	// rlwinm r8,r11,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899497d4
	if (ctx.cr6.eq) goto loc_899497D4;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x899497d4
	goto loc_899497D4;
loc_899497A0:
	// bl 0x89949490
	ctx.lr = 0x899497A4;
	sub_89949490(ctx, base);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r3,r11,22720
	ctx.r3.s64 = ctx.r11.s64 + 22720;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x89931d78
	ctx.lr = 0x899497C0;
	sub_89931D78(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// b 0x899497d4
	goto loc_899497D4;
loc_899497CC:
	// bl 0x89948b70
	ctx.lr = 0x899497D0;
	sub_89948B70(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_899497D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

DEFINE_REX_FUNC(sub_89949DE8) {
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
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89949ebc
	if (ctx.cr6.lt) goto loc_89949EBC;
	// beq cr6,0x89949e54
	if (ctx.cr6.eq) goto loc_89949E54;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x89949ef8
	if (!ctx.cr6.lt) goto loc_89949EF8;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r3,r11,-4772
	ctx.r3.s64 = ctx.r11.s64 + -4772;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x89931d78
	ctx.lr = 0x89949E30;
	sub_89931D78(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r9,r10,20432
	ctx.r9.s64 = ctx.r10.s64 + 20432;
	// lbz r11,128(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 128);
	// rlwinm r8,r11,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89949ef8
	if (ctx.cr6.eq) goto loc_89949EF8;
	// bl 0x89948468
	ctx.lr = 0x89949E4C;
	sub_89948468(ctx, base);
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x89949ef8
	goto loc_89949EF8;
loc_89949E54:
	// bl 0x899483f8
	ctx.lr = 0x89949E58;
	sub_899483F8(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89949e7c
	if (ctx.cr6.eq) goto loc_89949E7C;
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_89949E7C:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r11,r11,-4772
	ctx.r11.s64 = ctx.r11.s64 + -4772;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x89931d78
	ctx.lr = 0x89949E9C;
	sub_89931D78(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r9,r10,20432
	ctx.r9.s64 = ctx.r10.s64 + 20432;
	// lbz r11,128(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 128);
	// rlwinm r8,r11,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89949ef8
	if (ctx.cr6.eq) goto loc_89949EF8;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x89949ef8
	goto loc_89949EF8;
loc_89949EBC:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r11,r11,-4772
	ctx.r11.s64 = ctx.r11.s64 + -4772;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x89931d78
	ctx.lr = 0x89949EDC;
	sub_89931D78(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r9,r10,20432
	ctx.r9.s64 = ctx.r10.s64 + 20432;
	// lbz r11,128(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 128);
	// rlwinm r8,r11,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89949ef8
	if (ctx.cr6.eq) goto loc_89949EF8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_89949EF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_8994A2D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8994A2D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,6046(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 6046);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8994a300
	if (!ctx.cr6.eq) goto loc_8994A300;
	// bl 0x8993fb98
	ctx.lr = 0x8994A2F4;
	sub_8993FB98(ctx, base);
loc_8994A2F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8994A300:
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lis r11,9029
	ctx.r11.s64 = 591724544;
	// ori r30,r11,26505
	ctx.r30.u64 = ctx.r11.u64 | 26505;
	// lwz r11,-25896(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -25896);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8994a2f4
	if (ctx.cr6.eq) goto loc_8994A2F4;
	// lis r27,-30214
	ctx.r27.s64 = -1980104704;
	// lbz r11,3733(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 3733);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8994a4d4
	if (ctx.cr6.gt) goto loc_8994A4D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8994a36c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8994A36C;
	// bdzf 4*cr6+eq,0x8994a408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8994A408;
	// bdzf 4*cr6+eq,0x8994a4d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8994A4D4;
	// bdzf 4*cr6+eq,0x8994a494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8994A494;
	// bne cr6,0x8994a4a8
	if (!ctx.cr6.eq) goto loc_8994A4A8;
	// bl 0x8993fb98
	ctx.lr = 0x8994A34C;
	sub_8993FB98(ctx, base);
	// lis r9,-30212
	ctx.r9.s64 = -1979973632;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,3733(r27)
	REX_STORE_U8(ctx.r27.u32 + 3733, ctx.r10.u8);
	// sth r11,3784(r9)
	REX_STORE_U16(ctx.r9.u32 + 3784, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8994A36C:
	// lis r31,-30212
	ctx.r31.s64 = -1979973632;
	// li r11,96
	ctx.r11.s64 = 96;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r29,-30232
	ctx.r29.s64 = -1981284352;
	// sth r11,3784(r31)
	REX_STORE_U16(ctx.r31.u32 + 3784, ctx.r11.u16);
	// ori r26,r9,4096
	ctx.r26.u64 = ctx.r9.u64 | 4096;
	// lis r30,-30214
	ctx.r30.s64 = -1980104704;
	// addi r28,r10,12280
	ctx.r28.s64 = ctx.r10.s64 + 12280;
loc_8994A390:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// add. r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwinm r10,r8,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FE;
	// beq 0x8994a3d8
	if (ctx.cr0.eq) goto loc_8994A3D8;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8994a3d8
	if (ctx.cr6.gt) goto loc_8994A3D8;
	// lwz r3,3680(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 3680);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,-26964(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -26964);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8994A3D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,3784(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3784);
loc_8994A3D8:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,3784(r31)
	REX_STORE_U16(ctx.r31.u32 + 3784, ctx.r11.u16);
	// cmpwi cr6,r11,497
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 497, ctx.xer);
	// blt cr6,0x8994a390
	if (ctx.cr6.lt) goto loc_8994A390;
	// lbz r11,3733(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 3733);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,3733(r27)
	REX_STORE_U8(ctx.r27.u32 + 3733, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8994A408:
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,96
	ctx.r11.s64 = 96;
	// lis r7,-30212
	ctx.r7.s64 = -1979973632;
	// addi r9,r9,8544
	ctx.r9.s64 = ctx.r9.s64 + 8544;
	// addi r8,r10,12280
	ctx.r8.s64 = ctx.r10.s64 + 12280;
loc_8994A420:
	// lbzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// sth r10,3784(r7)
	REX_STORE_U16(ctx.r7.u32 + 3784, ctx.r10.u16);
	// cmpwi cr6,r10,497
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 497, ctx.xer);
	// stbx r6,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x8994a420
	if (ctx.cr6.lt) goto loc_8994A420;
	// bl 0x89948808
	ctx.lr = 0x8994A444;
	sub_89948808(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994a480
	if (ctx.cr6.eq) goto loc_8994A480;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r3,r11,22888
	ctx.r3.s64 = ctx.r11.s64 + 22888;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x89931d78
	ctx.lr = 0x8994A46C;
	sub_89931D78(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3733(r27)
	REX_STORE_U8(ctx.r27.u32 + 3733, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8994A480:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3733(r27)
	REX_STORE_U8(ctx.r27.u32 + 3733, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8994A494:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3733(r27)
	REX_STORE_U8(ctx.r27.u32 + 3733, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8994A4A8:
	// bl 0x89948b70
	ctx.lr = 0x8994A4AC;
	sub_89948B70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,-25896(r31)
	REX_STORE_U32(ctx.r31.u32 + -25896, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r11,6046(r29)
	REX_STORE_U8(ctx.r29.u32 + 6046, ctx.r11.u8);
	// stb r9,3733(r27)
	REX_STORE_U8(ctx.r27.u32 + 3733, ctx.r9.u8);
	// bl 0x8993fb98
	ctx.lr = 0x8994A4C8;
	sub_8993FB98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8994A4D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,-25896(r31)
	REX_STORE_U32(ctx.r31.u32 + -25896, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3733(r27)
	REX_STORE_U8(ctx.r27.u32 + 3733, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89951EC8) {
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
	// lis r5,65
	ctx.r5.s64 = 4259840;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,64548
	ctx.r5.u64 = ctx.r5.u64 | 64548;
	// lwz r31,3524(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 3524);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x899dcca0
	ctx.lr = 0x89951EF8;
	sub_899DCCA0(ctx, base);
	// lis r7,-30214
	ctx.r7.s64 = -1980104704;
	// lis r30,-30214
	ctx.r30.s64 = -1980104704;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,17
	ctx.r8.s64 = 17;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lis r5,-30232
	ctx.r5.s64 = -1981284352;
	// stw r10,3520(r30)
	REX_STORE_U32(ctx.r30.u32 + 3520, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,3516(r7)
	REX_STORE_U32(ctx.r7.u32 + 3516, ctx.r10.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,3680(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 3680);
	// lwz r11,-26964(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + -26964);
	// addi r5,r11,4112
	ctx.r5.s64 = ctx.r11.s64 + 4112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x89951F48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89951f5c
	if (ctx.cr6.eq) goto loc_89951F5C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3520(r30)
	REX_STORE_U32(ctx.r30.u32 + 3520, ctx.r11.u32);
loc_89951F5C:
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

DEFINE_REX_FUNC(sub_89952130) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89952138;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// lis r8,65
	ctx.r8.s64 = 4259840;
	// lis r7,65
	ctx.r7.s64 = 4259840;
	// lwz r31,3524(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 3524);
	// lis r6,65
	ctx.r6.s64 = 4259840;
	// ori r5,r8,64540
	ctx.r5.u64 = ctx.r8.u64 | 64540;
	// lwz r10,-4948(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4948);
	// addis r4,r31,66
	ctx.r4.s64 = ctx.r31.s64 + 4325376;
	// lwz r9,-5060(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -5060);
	// addis r11,r31,66
	ctx.r11.s64 = ctx.r31.s64 + 4325376;
	// ori r8,r7,64544
	ctx.r8.u64 = ctx.r7.u64 | 64544;
	// ori r7,r6,64548
	ctx.r7.u64 = ctx.r6.u64 | 64548;
	// addi r4,r4,-1004
	ctx.r4.s64 = ctx.r4.s64 + -1004;
	// addi r11,r11,-1000
	ctx.r11.s64 = ctx.r11.s64 + -1000;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r6,17
	ctx.r6.s64 = 17;
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r28,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r6,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stwx r30,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r30,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwx r30,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// bne cr6,0x899521c8
	if (!ctx.cr6.eq) goto loc_899521C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899521C8:
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lwz r10,3520(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 3520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89952250
	if (!ctx.cr6.eq) goto loc_89952250;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r28,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// bl 0x899dcca0
	ctx.lr = 0x899521E8;
	sub_899DCCA0(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2060
	ctx.r4.s64 = 2060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x899d8fd0
	ctx.lr = 0x899521FC;
	sub_899D8FD0(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,12
	ctx.r11.s64 = 786432;
	// stw r30,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// ori r10,r11,3140
	ctx.r10.u64 = ctx.r11.u64 | 3140;
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bl 0x89951f78
	ctx.lr = 0x8995222C;
	sub_89951F78(ctx, base);
	// bl 0x8994c440
	ctx.lr = 0x89952230;
	sub_8994C440(ctx, base);
	// lis r7,-30214
	ctx.r7.s64 = -1980104704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,3528(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 3528);
	// bl 0x89951f78
	ctx.lr = 0x89952244;
	sub_89951F78(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89952250:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89952018
	ctx.lr = 0x8995226C;
	sub_89952018(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x89952294
	if (ctx.cr6.eq) goto loc_89952294;
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89952294:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899522ac
	if (ctx.cr6.eq) goto loc_899522AC;
	// stw r28,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_899522AC:
	// lis r11,12
	ctx.r11.s64 = 786432;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// ori r9,r11,3140
	ctx.r9.u64 = ctx.r11.u64 | 3140;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x899522dc
	if (ctx.cr6.gt) goto loc_899522DC;
	// bl 0x8994c440
	ctx.lr = 0x899522C4;
	sub_8994C440(ctx, base);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r4,3528(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3528);
	// bl 0x89952018
	ctx.lr = 0x899522D8;
	sub_89952018(ctx, base);
	// bl 0x8994f040
	ctx.lr = 0x899522DC;
	sub_8994F040(ctx, base);
loc_899522DC:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89952BC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x89952BC8;
	__savegprlr_24(ctx, base);
	// extsh r26,r4
	ctx.r26.s64 = ctx.r4.s16;
	// extsh r25,r5
	ctx.r25.s64 = ctx.r5.s16;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x89952e54
	if (!ctx.cr6.lt) goto loc_89952E54;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// addi r9,r11,9656
	ctx.r9.s64 = ctx.r11.s64 + 9656;
	// mulli r8,r7,92
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(92));
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r5,r9,68
	ctx.r5.s64 = ctx.r9.s64 + 68;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// addi r4,r9,73
	ctx.r4.s64 = ctx.r9.s64 + 73;
	// addi r3,r9,74
	ctx.r3.s64 = ctx.r9.s64 + 74;
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lhzx r5,r8,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// addi r30,r9,75
	ctx.r30.s64 = ctx.r9.s64 + 75;
	// lbz r28,6035(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 6035);
	// addi r29,r9,70
	ctx.r29.s64 = ctx.r9.s64 + 70;
	// lbz r10,9535(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 9535);
	// lbzx r4,r8,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r3,r8,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// lis r24,-30275
	ctx.r24.s64 = -1984102400;
	// lbz r11,12266(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 12266);
	// mullw r4,r4,r28
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// lbzx r31,r8,r30
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// lbzx r30,r8,r29
	ctx.r30.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// oris r5,r5,17
	ctx.r5.u64 = ctx.r5.u64 | 1114112;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwinm r10,r4,8,9,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x7F8000;
	// rlwinm r11,r3,0,17,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x7F80;
	// or r3,r5,r30
	ctx.r3.u64 = ctx.r5.u64 | ctx.r30.u64;
	// mullw r4,r31,r29
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// addi r5,r9,71
	ctx.r5.s64 = ctx.r9.s64 + 71;
	// srawi r4,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 7;
	// rlwinm r30,r6,0,6,6
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2000000;
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,9520(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 9520);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lbzx r5,r8,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// or r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 | ctx.r30.u64;
	// rlwinm r6,r31,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// or r31,r4,r5
	ctx.r31.u64 = ctx.r4.u64 | ctx.r5.u64;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// subf r4,r26,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r26.u64;
	// add r30,r6,r10
	ctx.r30.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r7,8152(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 8152);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// rlwinm r27,r3,6,0,25
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r5,r7,r26
	ctx.r5.u64 = ctx.r7.u64 + ctx.r26.u64;
	// lis r3,96
	ctx.r3.s64 = 6291456;
	// lis r7,-30273
	ctx.r7.s64 = -1983971328;
	// lwz r28,7120(r6)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r6.u32 + 7120);
	// lwz r29,20424(r4)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 20424);
	// ori r3,r3,136
	ctx.r3.u64 = ctx.r3.u64 | 136;
	// addi r6,r7,-312
	ctx.r6.s64 = ctx.r7.s64 + -312;
loc_89952CC8:
	// clrlwi r7,r10,26
	ctx.r7.u64 = ctx.r10.u32 & 0x3F;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// add r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 + ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r7,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r4,r4,16,0,10
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFE00000;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// lhzx r4,r7,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// clrlwi r4,r4,27
	ctx.r4.u64 = ctx.r4.u32 & 0x1F;
	// subf r4,r4,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r4.u64;
	// rlwinm r4,r4,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// lhzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r7,r7,0,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1C;
	// addi r4,r7,323
	ctx.r4.s64 = ctx.r7.s64 + 323;
	// rlwinm r7,r4,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x89952cc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89952CC8;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// stw r11,9520(r24)
	REX_STORE_U32(ctx.r24.u32 + 9520, ctx.r11.u32);
	// lbz r7,6419(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 6419);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89952e54
	if (ctx.cr6.eq) goto loc_89952E54;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r5,r11,23504
	ctx.r5.s64 = ctx.r11.s64 + 23504;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lhzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// lbz r11,23504(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 23504);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// subf r10,r8,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r8.u64;
	// subf r9,r8,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r8.u64;
	// addi r7,r10,352
	ctx.r7.s64 = ctx.r10.s64 + 352;
	// addi r4,r9,352
	ctx.r4.s64 = ctx.r9.s64 + 352;
	// lis r9,16319
	ctx.r9.s64 = 1069481984;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r8,16448
	ctx.r8.s64 = 1077936128;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// srawi r3,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// srawi r26,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r4.s32 >> 3;
	// ori r28,r9,49152
	ctx.r28.u64 = ctx.r9.u64 | 49152;
	// ori r29,r8,49152
	ctx.r29.u64 = ctx.r8.u64 | 49152;
	// addi r27,r10,12280
	ctx.r27.s64 = ctx.r10.s64 + 12280;
	// addi r31,r11,-31400
	ctx.r31.s64 = ctx.r11.s64 + -31400;
loc_89952DA0:
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// extsb r4,r30
	ctx.r4.s64 = ctx.r30.s8;
	// addme r8,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// rlwinm r7,r4,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// and r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 & ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x89952df4
	if (ctx.cr6.eq) goto loc_89952DF4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89952DDC:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r25,r28,r11
	ctx.r25.u64 = ctx.r11.u64 - ctx.r28.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r25,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r25.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89952ddc
	if (!ctx.cr6.eq) goto loc_89952DDC;
loc_89952DF4:
	// cmpwi cr6,r26,29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 29, ctx.xer);
	// stbx r24,r4,r27
	REX_STORE_U8(ctx.r4.u32 + ctx.r27.u32, ctx.r24.u8);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x89952e08
	if (ctx.cr6.lt) goto loc_89952E08;
	// li r11,29
	ctx.r11.s64 = 29;
loc_89952E08:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x89952e44
	if (ctx.cr6.eq) goto loc_89952E44;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89952E2C:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89952e2c
	if (!ctx.cr6.eq) goto loc_89952E2C;
loc_89952E44:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stbx r24,r4,r27
	REX_STORE_U8(ctx.r4.u32 + ctx.r27.u32, ctx.r24.u8);
	// cmpwi cr6,r30,40
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 40, ctx.xer);
	// blt cr6,0x89952da0
	if (ctx.cr6.lt) goto loc_89952DA0;
loc_89952E54:
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89954528) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89954530) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89954538;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899546ac
	if (ctx.cr6.eq) goto loc_899546AC;
	// lwz r30,44(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89954570
	if (!ctx.cr6.eq) goto loc_89954570;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89954570:
	// lhz r10,124(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// sth r10,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r10.u16);
	// bgt cr6,0x89954650
	if (ctx.cr6.gt) goto loc_89954650;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8995459c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995459C;
	// bdzf 4*cr6+eq,0x899545dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899545DC;
	// bdzf 4*cr6+eq,0x899545f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899545F8;
	// bne cr6,0x89954614
	if (!ctx.cr6.eq) goto loc_89954614;
loc_8995459C:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899545d0
	if (ctx.cr6.gt) goto loc_899545D0;
	// rlwinm r9,r11,0,5,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// li r10,512
	ctx.r10.s64 = 512;
	// rlwinm r9,r9,0,2,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// sth r10,20(r31)
	REX_STORE_U16(ctx.r31.u32 + 20, ctx.r10.u16);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899545D0:
	// oris r10,r11,18432
	ctx.r10.u64 = ctx.r11.u64 | 1207959552;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x89954650
	goto loc_89954650;
loc_899545DC:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x899545f0
	if (ctx.cr6.gt) goto loc_899545F0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_899545F0:
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x89954650
	goto loc_89954650;
loc_899545F8:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8995460c
	if (ctx.cr6.gt) goto loc_8995460C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8995460C:
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x89954650
	goto loc_89954650;
loc_89954614:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x89954624
	if (ctx.cr6.gt) goto loc_89954624;
	// li r11,3
	ctx.r11.s64 = 3;
loc_89954624:
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lis r8,-3
	ctx.r8.s64 = -196608;
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r11,128(r31)
	REX_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// ori r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 32768;
	// li r3,44
	ctx.r3.s64 = 44;
	// lhz r7,124(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// lhz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 24);
	// lhz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 20);
	// bl 0x899d38f8
	ctx.lr = 0x89954650;
	sub_899D38F8(ctx, base);
loc_89954650:
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r6,r8,0,19,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r6,0,5,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r7,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r3,r4,0,4,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFE000;
	// rlwinm r3,r3,0,18,4
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFF8003FFF;
	// or r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899546AC:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// mulli r10,r10,696
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899546d4
	if (!ctx.cr6.eq) goto loc_899546D4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x899546ec
	goto loc_899546EC;
loc_899546D4:
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// li r8,16
	ctx.r8.s64 = 16;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// subfc r6,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
loc_899546EC:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899547b8
	if (ctx.cr6.eq) goto loc_899547B8;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// clrlwi r4,r5,29
	ctx.r4.u64 = ctx.r5.u32 & 0x7;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwzx r11,r10,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r4,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bne cr6,0x89954744
	if (!ctx.cr6.eq) goto loc_89954744;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89936218
	ctx.lr = 0x89954744;
	sub_89936218(ctx, base);
loc_89954744:
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899547ac
	if (ctx.cr6.eq) goto loc_899547AC;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x899547d8
	if (!ctx.cr6.eq) goto loc_899547D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89954480
	ctx.lr = 0x8995476C;
	sub_89954480(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8995479c
	if (ctx.cr6.eq) goto loc_8995479C;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bge cr6,0x8995478c
	if (!ctx.cr6.lt) goto loc_8995478C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_8995478C:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8992b0c0
	ctx.lr = 0x89954794;
	sub_8992B0C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_8995479C:
	// rlwinm r11,r30,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899547AC:
	// lbz r11,38(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 38);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x899547c4
	if (!ctx.cr6.lt) goto loc_899547C4;
loc_899547B8:
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899547C4:
	// lbz r10,39(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 39);
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// stb r11,38(r31)
	REX_STORE_U8(ctx.r31.u32 + 38, ctx.r11.u8);
	// stb r10,39(r31)
	REX_STORE_U8(ctx.r31.u32 + 39, ctx.r10.u8);
loc_899547D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995621C) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x89956234
	if (!ctx.cr6.eq) goto loc_89956234;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_89956234:
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
	// bge 0x89956254
	if (!ctx.cr0.lt) goto loc_89956254;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89956254:
	// lis r11,176
	ctx.r11.s64 = 11534336;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x89956264
	if (!ctx.cr6.gt) goto loc_89956264;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_89956264:
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
	// bge 0x89956290
	if (!ctx.cr0.lt) goto loc_89956290;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89956290:
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

DEFINE_REX_FUNC(sub_899562A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899562B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,16838
	ctx.r10.s64 = 1103495168;
	// lhz r8,124(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 124);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ori r30,r10,20077
	ctx.r30.u64 = ctx.r10.u64 | 20077;
	// rlwinm r5,r11,0,5,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// lwz r10,-9212(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -9212);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// stb r9,128(r31)
	REX_STORE_U8(ctx.r31.u32 + 128, ctx.r9.u8);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r5,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// addi r28,r9,9016
	ctx.r28.s64 = ctx.r9.s64 + 9016;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r4,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// srawi r4,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 16;
	// addi r27,r11,128
	ctx.r27.s64 = ctx.r11.s64 + 128;
	// rlwinm r9,r4,19,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 19) & 0x3;
	// rlwinm r4,r27,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x3FE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r11,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rlwinm r7,r7,0,2,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000000;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// lhzx r4,r4,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// rlwinm r4,r9,15,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r10,-9212(r29)
	REX_STORE_U32(ctx.r29.u32 + -9212, ctx.r10.u32);
	// li r27,512
	ctx.r27.s64 = 512;
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lhzx r8,r8,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r28.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r6,r7,15,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0xFFFF8000;
	// sth r27,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r27.u16);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// mulli r5,r8,696
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(696));
	// addi r9,r9,25128
	ctx.r9.s64 = ctx.r9.s64 + 25128;
	// srawi r10,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 16;
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// lis r9,-30303
	ctx.r9.s64 = -1985937408;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// rlwinm r7,r4,31,1,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFE;
	// beq cr6,0x899563bc
	if (ctx.cr6.eq) goto loc_899563BC;
	// addi r9,r9,-16452
	ctx.r9.s64 = ctx.r9.s64 + -16452;
	// addi r6,r11,192
	ctx.r6.s64 = ctx.r11.s64 + 192;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// b 0x899563c4
	goto loc_899563C4;
loc_899563BC:
	// addi r8,r9,-16452
	ctx.r8.s64 = ctx.r9.s64 + -16452;
	// addi r6,r11,-64
	ctx.r6.s64 = ctx.r11.s64 + -64;
loc_899563C4:
	// lbzx r4,r7,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// extsh r27,r6
	ctx.r27.s64 = ctx.r6.s16;
	// bl 0x89936218
	ctx.lr = 0x899563D0;
	sub_89936218(ctx, base);
	// lwz r11,-9212(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -9212);
	// extsh r10,r27
	ctx.r10.s64 = ctx.r27.s16;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r7,r10,128
	ctx.r7.s64 = ctx.r10.s64 + 128;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r29)
	REX_STORE_U32(ctx.r29.u32 + -9212, ctx.r11.u32);
	// rlwinm r5,r7,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// srawi r3,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 8;
	// rlwinm r11,r4,24,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0x7F;
	// rlwinm r8,r27,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lhzx r10,r5,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stw r5,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lhzx r4,r8,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r28.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89956AC8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stb r10,128(r4)
	REX_STORE_U8(ctx.r4.u32 + 128, ctx.r10.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x89956afc
	if (!ctx.cr6.eq) goto loc_89956AFC;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x89956afc
	if (!ctx.cr6.eq) goto loc_89956AFC;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_89957A50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x89957A58;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lis r7,-30303
	ctx.r7.s64 = -1985937408;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r8,r11,6400
	ctx.r8.s64 = ctx.r11.s64 + 6400;
	// rlwinm r6,r3,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// addi r11,r7,-17524
	ctx.r11.s64 = ctx.r7.s64 + -17524;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// lbzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r8,r5,-2532
	ctx.r8.s64 = ctx.r5.s64 + -2532;
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// lhzx r5,r6,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// addi r4,r7,520
	ctx.r4.s64 = ctx.r7.s64 + 520;
	// lhzx r7,r6,r3
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r3.u32);
	// addi r30,r11,-17508
	ctx.r30.s64 = ctx.r11.s64 + -17508;
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r28,r10,r8
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lbzx r4,r10,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// mulli r27,r9,696
	ctx.r27.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// lwz r7,-21584(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + -21584);
	// lwzx r3,r29,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// subf r4,r4,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r4.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stwx r3,r27,r9
	REX_STORE_U32(ctx.r27.u32 + ctx.r9.u32, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// stbx r4,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r4.u8);
	// addi r26,r11,651
	ctx.r26.s64 = ctx.r11.s64 + 651;
	// stwx r9,r27,r30
	REX_STORE_U32(ctx.r27.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r25,r11,635
	ctx.r25.s64 = ctx.r11.s64 + 635;
	// stwx r9,r27,r29
	REX_STORE_U32(ctx.r27.u32 + ctx.r29.u32, ctx.r9.u32);
	// addi r24,r11,654
	ctx.r24.s64 = ctx.r11.s64 + 654;
	// addi r23,r11,24
	ctx.r23.s64 = ctx.r11.s64 + 24;
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// addi r22,r11,676
	ctx.r22.s64 = ctx.r11.s64 + 676;
	// stbx r31,r27,r26
	REX_STORE_U8(ctx.r27.u32 + ctx.r26.u32, ctx.r31.u8);
	// lis r28,128
	ctx.r28.s64 = 8388608;
	// stbx r9,r27,r25
	REX_STORE_U8(ctx.r27.u32 + ctx.r25.u32, ctx.r9.u8);
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// stbx r9,r27,r24
	REX_STORE_U8(ctx.r27.u32 + ctx.r24.u32, ctx.r9.u8);
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// ori r29,r28,32896
	ctx.r29.u64 = ctx.r28.u64 | 32896;
	// stwx r5,r27,r3
	REX_STORE_U32(ctx.r27.u32 + ctx.r3.u32, ctx.r5.u32);
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// stwx r5,r27,r23
	REX_STORE_U32(ctx.r27.u32 + ctx.r23.u32, ctx.r5.u32);
	// stwx r7,r27,r6
	REX_STORE_U32(ctx.r27.u32 + ctx.r6.u32, ctx.r7.u32);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// stwx r30,r27,r11
	REX_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r29,r27,r22
	REX_STORE_U32(ctx.r27.u32 + ctx.r22.u32, ctx.r29.u32);
	// stw r9,26932(r28)
	REX_STORE_U32(ctx.r28.u32 + 26932, ctx.r9.u32);
	// bl 0x89961640
	ctx.lr = 0x89957B54;
	sub_89961640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89964e30
	ctx.lr = 0x89957B5C;
	sub_89964E30(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899580F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899580F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30233
	ctx.r11.s64 = -1981349888;
	// li r31,6
	ctx.r31.s64 = 6;
	// addi r30,r11,-11976
	ctx.r30.s64 = ctx.r11.s64 + -11976;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// addi r11,r30,592
	ctx.r11.s64 = ctx.r30.s64 + 592;
	// li r9,216
	ctx.r9.s64 = 216;
	// li r8,-20
	ctx.r8.s64 = -20;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-20
	ctx.r7.s64 = -20;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x89934860
	ctx.lr = 0x89958138;
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
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x899352b8
	ctx.lr = 0x89958168;
	sub_899352B8(ctx, base);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-19828
	ctx.r29.s64 = ctx.r11.s64 + -19828;
loc_89958174:
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8995817C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r9,r30,592
	ctx.r9.s64 = ctx.r30.s64 + 592;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lhz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r8,10(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lhz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lhz r5,14(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// sth r3,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r3.u16);
	// sth r8,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r8.u16);
	// sth r7,12(r10)
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r7.u16);
	// sth r5,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r5.u16);
	// blt cr6,0x8995817c
	if (ctx.cr6.lt) goto loc_8995817C;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,592
	ctx.r9.s64 = ctx.r30.s64 + 592;
	// mulli r8,r31,68
	ctx.r8.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(68));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r10,r31,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(60));
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r30,1240
	ctx.r6.s64 = ctx.r30.s64 + 1240;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89935610
	ctx.lr = 0x89958218;
	sub_89935610(ctx, base);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// blt cr6,0x89958174
	if (ctx.cr6.lt) goto loc_89958174;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// addi r3,r30,1240
	ctx.r3.s64 = ctx.r30.s64 + 1240;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// beq cr6,0x89958260
	if (ctx.cr6.eq) goto loc_89958260;
	// addi r11,r11,-18420
	ctx.r11.s64 = ctx.r11.s64 + -18420;
	// addi r5,r11,36
	ctx.r5.s64 = ctx.r11.s64 + 36;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x89957ea0
	ctx.lr = 0x89958258;
	sub_89957EA0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89958260:
	// addi r4,r11,-18420
	ctx.r4.s64 = ctx.r11.s64 + -18420;
	// addi r5,r4,36
	ctx.r5.s64 = ctx.r4.s64 + 36;
	// bl 0x89957ea0
	ctx.lr = 0x8995826C;
	sub_89957EA0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899597A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899597A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r10,r10,25128
	ctx.r10.s64 = ctx.r10.s64 + 25128;
	// mulli r9,r11,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// addi r8,r10,651
	ctx.r8.s64 = ctx.r10.s64 + 651;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lbzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// bgt cr6,0x89959994
	if (ctx.cr6.gt) goto loc_89959994;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89959810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89959810;
	// bdzf 4*cr6+eq,0x8995983c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995983C;
	// bdzf 4*cr6+eq,0x89959868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89959868;
	// bdzf 4*cr6+eq,0x899598b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899598B8;
	// bne cr6,0x89959900
	if (!ctx.cr6.eq) goto loc_89959900;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,29236
	ctx.r8.s64 = ctx.r10.s64 + 29236;
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r7,42(r31)
	REX_STORE_U16(ctx.r31.u32 + 42, ctx.r7.u16);
	// lhzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// sth r6,50(r31)
	REX_STORE_U16(ctx.r31.u32 + 50, ctx.r6.u16);
	// b 0x89959994
	goto loc_89959994;
loc_89959810:
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,29220
	ctx.r8.s64 = ctx.r10.s64 + 29220;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// addi r6,r7,29244
	ctx.r6.s64 = ctx.r7.s64 + 29244;
	// lhzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// sth r5,42(r31)
	REX_STORE_U16(ctx.r31.u32 + 42, ctx.r5.u16);
	// lhzx r4,r9,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// sth r4,50(r31)
	REX_STORE_U16(ctx.r31.u32 + 50, ctx.r4.u16);
	// b 0x89959994
	goto loc_89959994;
loc_8995983C:
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,29228
	ctx.r8.s64 = ctx.r10.s64 + 29228;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// addi r6,r7,29252
	ctx.r6.s64 = ctx.r7.s64 + 29252;
	// lhzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// sth r5,42(r31)
	REX_STORE_U16(ctx.r31.u32 + 42, ctx.r5.u16);
	// lhzx r4,r9,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// sth r4,50(r31)
	REX_STORE_U16(ctx.r31.u32 + 50, ctx.r4.u16);
	// b 0x89959994
	goto loc_89959994;
loc_89959868:
	// addi r11,r10,624
	ctx.r11.s64 = ctx.r10.s64 + 624;
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89959890
	if (ctx.cr6.eq) goto loc_89959890;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,29268
	ctx.r8.s64 = ctx.r10.s64 + 29268;
	// lhzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// sth r7,42(r31)
	REX_STORE_U16(ctx.r31.u32 + 42, ctx.r7.u16);
loc_89959890:
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lhz r10,42(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 42);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,29300
	ctx.r7.s64 = ctx.r9.s64 + 29300;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r5,50(r31)
	REX_STORE_U16(ctx.r31.u32 + 50, ctx.r5.u16);
	// b 0x89959994
	goto loc_89959994;
loc_899598B8:
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// rlwinm r8,r9,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// lhz r7,19184(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 19184);
	// lwz r10,26936(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 26936);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r11,r8,r7
	ctx.r11.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// andc r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// sth r3,42(r31)
	REX_STORE_U16(ctx.r31.u32 + 42, ctx.r3.u16);
	// sth r3,50(r31)
	REX_STORE_U16(ctx.r31.u32 + 50, ctx.r3.u16);
	// b 0x89959994
	goto loc_89959994;
loc_89959900:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r27,r4
	ctx.r27.s64 = ctx.r4.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r28,r11,9056
	ctx.r28.s64 = ctx.r11.s64 + 9056;
	// mulli r30,r10,60
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// addi r29,r28,52
	ctx.r29.s64 = ctx.r28.s64 + 52;
	// lhzx r3,r30,r29
	ctx.r3.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r29.u32);
	// bl 0x8993c7f0
	ctx.lr = 0x89959928;
	sub_8993C7F0(ctx, base);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// sthx r3,r30,r29
	REX_STORE_U16(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u16);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lhz r8,20416(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 20416);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x89959948
	if (ctx.cr6.lt) goto loc_89959948;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8995997c
	goto loc_8995997C;
loc_89959948:
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r10,12800
	ctx.r11.s64 = ctx.r10.s64 + 12800;
	// addi r8,r28,24
	ctx.r8.s64 = ctx.r28.s64 + 24;
	// addi r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 + 52;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// lwzx r4,r30,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r5,r9,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// lwzx r3,r30,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// bl 0x89932c20
	ctx.lr = 0x89959978;
	sub_89932C20(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
loc_8995997C:
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// sth r11,42(r31)
	REX_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,29260
	ctx.r8.s64 = ctx.r10.s64 + 29260;
	// lhzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// sth r7,50(r31)
	REX_STORE_U16(ctx.r31.u32 + 50, ctx.r7.u16);
loc_89959994:
	// lhz r11,42(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 42);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r10,50(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
loc_899599A8:
	// lhz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 40);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r10,r10,-256
	ctx.r10.s64 = ctx.r10.s64 + -256;
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x899599cc
	if (!ctx.cr6.gt) goto loc_899599CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x899599d4
	goto loc_899599D4;
loc_899599CC:
	// bge cr6,0x899599d8
	if (!ctx.cr6.lt) goto loc_899599D8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_899599D4:
	// sth r11,40(r31)
	REX_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
loc_899599D8:
	// lhz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 48);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addi r10,r10,-256
	ctx.r10.s64 = ctx.r10.s64 + -256;
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x899599fc
	if (!ctx.cr6.gt) goto loc_899599FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x89959a04
	goto loc_89959A04;
loc_899599FC:
	// bge cr6,0x89959a08
	if (!ctx.cr6.lt) goto loc_89959A08;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_89959A04:
	// sth r11,48(r31)
	REX_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
loc_89959A08:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x899599a8
	if (ctx.cr6.lt) goto loc_899599A8;
	// lhz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 40);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// clrlwi r8,r9,26
	ctx.r8.u64 = ctx.r9.u32 & 0x3F;
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995B7D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8995B7D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,25128
	ctx.r30.s64 = ctx.r11.s64 + 25128;
	// mulli r31,r10,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r26,r30,4
	ctx.r26.s64 = ctx.r30.s64 + 4;
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-21720
	ctx.r27.s64 = ctx.r11.s64 + -21720;
	// lwzx r29,r31,r26
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r9,r29,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8995b840
	if (!ctx.cr6.eq) goto loc_8995B840;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwzx r4,r9,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// bl 0x899339a0
	ctx.lr = 0x8995B820;
	sub_899339A0(ctx, base);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8995b838
	if (!ctx.cr6.eq) goto loc_8995B838;
loc_8995B82C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8995B838:
	// ori r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 | 32;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
loc_8995B840:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899192e8
	ctx.lr = 0x8995B84C;
	sub_899192E8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8995b82c
	if (ctx.cr6.eq) goto loc_8995B82C;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lis r9,-15360
	ctx.r9.s64 = -1006632960;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,25064(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 25064);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r6,r7,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// lwzx r5,r6,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// bl 0x89918f48
	ctx.lr = 0x8995B898;
	sub_89918F48(ctx, base);
	// addi r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 + 24;
	// li r10,128
	ctx.r10.s64 = 128;
	// stb r29,95(r3)
	REX_STORE_U8(ctx.r3.u32 + 95, ctx.r29.u8);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stb r29,94(r3)
	REX_STORE_U8(ctx.r3.u32 + 94, ctx.r29.u8);
	// li r8,513
	ctx.r8.s64 = 513;
	// stb r10,67(r3)
	REX_STORE_U8(ctx.r3.u32 + 67, ctx.r10.u8);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// stb r10,66(r3)
	REX_STORE_U8(ctx.r3.u32 + 66, ctx.r10.u8);
	// li r6,116
	ctx.r6.s64 = 116;
	// sth r8,64(r3)
	REX_STORE_U16(ctx.r3.u32 + 64, ctx.r8.u16);
	// li r4,53
	ctx.r4.s64 = 53;
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r11,48(r26)
	REX_STORE_U32(ctx.r26.u32 + 48, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,60(r26)
	REX_STORE_U32(ctx.r26.u32 + 60, ctx.r29.u32);
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// stw r10,52(r26)
	REX_STORE_U32(ctx.r26.u32 + 52, ctx.r10.u32);
	// stb r6,96(r26)
	REX_STORE_U8(ctx.r26.u32 + 96, ctx.r6.u8);
	// stw r29,80(r26)
	REX_STORE_U32(ctx.r26.u32 + 80, ctx.r29.u32);
	// bl 0x899362a0
	ctx.lr = 0x8995B8F4;
	sub_899362A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995C218) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8995C220;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x89934208
	ctx.lr = 0x8995C22C;
	sub_89934208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8995c240
	if (!ctx.cr6.eq) goto loc_8995C240;
loc_8995C234:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_8995C240:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8992c408
	ctx.lr = 0x8995C248;
	sub_8992C408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995c234
	if (ctx.cr6.eq) goto loc_8995C234;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r10,592
	ctx.r31.s64 = ctx.r10.s64 + 592;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
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
	// mulli r28,r6,112
	ctx.r28.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(112));
	// stwx r30,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r30.u32);
	// stwx r30,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r9,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r9.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stwx r4,r28,r8
	REX_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r4.u32);
	// bl 0x8992bd50
	ctx.lr = 0x8995C294;
	sub_8992BD50(ctx, base);
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// lis r9,120
	ctx.r9.s64 = 7864320;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lwz r11,-21584(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -21584);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// stwx r9,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r9.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// stwx r11,r28,r6
	REX_STORE_U32(ctx.r28.u32 + ctx.r6.u32, ctx.r11.u32);
	// addi r29,r10,25128
	ctx.r29.s64 = ctx.r10.s64 + 25128;
	// lis r10,224
	ctx.r10.s64 = 14680064;
	// li r9,127
	ctx.r9.s64 = 127;
	// li r7,516
	ctx.r7.s64 = 516;
	// stwx r10,r28,r8
	REX_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r9,r28,r5
	REX_STORE_U8(ctx.r28.u32 + ctx.r5.u32, ctx.r9.u8);
	// sthx r7,r28,r4
	REX_STORE_U16(ctx.r28.u32 + ctx.r4.u32, ctx.r7.u16);
	// addi r31,r29,658
	ctx.r31.s64 = ctx.r29.s64 + 658;
	// stb r11,9647(r3)
	REX_STORE_U8(ctx.r3.u32 + 9647, ctx.r11.u8);
	// lis r28,-30276
	ctx.r28.s64 = -1984167936;
loc_8995C2F4:
	// lwz r11,-658(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -658);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8995c398
	if (ctx.cr6.eq) goto loc_8995C398;
	// lbz r10,32018(r28)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 32018);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8995c330
	if (!ctx.cr6.lt) goto loc_8995C330;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8995c330
	if (!ctx.cr6.eq) goto loc_8995C330;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8994c298
	ctx.lr = 0x8995C320;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995c330
	if (ctx.cr6.eq) goto loc_8995C330;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8994c368
	ctx.lr = 0x8995C330;
	sub_8994C368(ctx, base);
loc_8995C330:
	// lbz r10,32018(r28)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 32018);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8995c360
	if (!ctx.cr6.eq) goto loc_8995C360;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8995c360
	if (!ctx.cr6.eq) goto loc_8995C360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8994c298
	ctx.lr = 0x8995C350;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995c360
	if (ctx.cr6.eq) goto loc_8995C360;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x8994c368
	ctx.lr = 0x8995C360;
	sub_8994C368(ctx, base);
loc_8995C360:
	// lbz r11,32018(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 32018);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8995c398
	if (ctx.cr6.eq) goto loc_8995C398;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8995c398
	if (!ctx.cr6.lt) goto loc_8995C398;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8995c398
	if (!ctx.cr6.eq) goto loc_8995C398;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8994c298
	ctx.lr = 0x8995C388;
	sub_8994C298(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995c398
	if (ctx.cr6.eq) goto loc_8995C398;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x8994c368
	ctx.lr = 0x8995C398;
	sub_8994C368(ctx, base);
loc_8995C398:
	// addi r31,r31,696
	ctx.r31.s64 = ctx.r31.s64 + 696;
	// addi r11,r29,2050
	ctx.r11.s64 = ctx.r29.s64 + 2050;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8995c2f4
	if (ctx.cr6.lt) goto loc_8995C2F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995E188) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e8
	ctx.lr = 0x8995E190;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r7,-30303
	ctx.r7.s64 = -1985937408;
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
	// addi r9,r7,-23288
	ctx.r9.s64 = ctx.r7.s64 + -23288;
	// lbz r11,9527(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 9527);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srawi r5,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r31,r11,r6
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// bne cr6,0x8995e1f4
	if (!ctx.cr6.eq) goto loc_8995E1F4;
	// lwz r11,696(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8995e1f4
	if (!ctx.cr6.eq) goto loc_8995E1F4;
loc_8995E1E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
loc_8995E1F4:
	// extsb r3,r31
	ctx.r3.s64 = ctx.r31.s8;
	// bl 0x89934208
	ctx.lr = 0x8995E1FC;
	sub_89934208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995e1e8
	if (ctx.cr6.eq) goto loc_8995E1E8;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8992c2a8
	ctx.lr = 0x8995E20C;
	sub_8992C2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995e1e8
	if (ctx.cr6.eq) goto loc_8995E1E8;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// addi r22,r11,30352
	ctx.r22.s64 = ctx.r11.s64 + 30352;
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// addi r7,r11,-23876
	ctx.r7.s64 = ctx.r11.s64 + -23876;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r16,-21584(r8)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lbz r18,12342(r6)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r6.u32 + 12342);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r17,8(r7)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// extsb r21,r31
	ctx.r21.s64 = ctx.r31.s8;
	// addi r29,r22,-3
	ctx.r29.s64 = ctx.r22.s64 + -3;
	// li r19,127
	ctx.r19.s64 = 127;
	// li r20,7
	ctx.r20.s64 = 7;
	// addi r30,r11,592
	ctx.r30.s64 = ctx.r11.s64 + 592;
	// addi r23,r9,-4592
	ctx.r23.s64 = ctx.r9.s64 + -4592;
loc_8995E260:
	// extsh r24,r10
	ctx.r24.s64 = ctx.r10.s16;
	// lbz r11,9(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 9);
	// lwz r10,3(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 3);
	// addi r6,r30,100
	ctx.r6.s64 = ctx.r30.s64 + 100;
	// rlwinm r9,r24,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
	// lhzx r3,r9,r23
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r23.u32);
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// oris r4,r10,32768
	ctx.r4.u64 = ctx.r10.u64 | 2147483648;
	// extsh r27,r3
	ctx.r27.s64 = ctx.r3.s16;
	// mulli r31,r27,112
	ctx.r31.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(112));
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// lhzx r11,r7,r23
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r23.u32);
	// sthx r11,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u16);
	// stwx r21,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r21.u32);
	// stwx r25,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r25.u32);
	// stwx r25,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r25.u32);
	// bl 0x8992bd50
	ctx.lr = 0x8995E2B4;
	sub_8992BD50(ctx, base);
	// lbz r11,7(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 7);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// beq cr6,0x8995e2d0
	if (ctx.cr6.eq) goto loc_8995E2D0;
	// lbz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 8);
	// stwx r9,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u32);
	// b 0x8995e2e8
	goto loc_8995E2E8;
loc_8995E2D0:
	// clrlwi r10,r18,24
	ctx.r10.u64 = ctx.r18.u32 & 0xFF;
	// addi r9,r30,68
	ctx.r9.s64 = ctx.r30.s64 + 68;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r7,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u32);
	// stwx r17,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r17.u32);
loc_8995E2E8:
	// addi r8,r30,24
	ctx.r8.s64 = ctx.r30.s64 + 24;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// add r4,r27,r9
	ctx.r4.u64 = ctx.r27.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// lwzx r10,r5,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// addi r7,r22,6
	ctx.r7.s64 = ctx.r22.s64 + 6;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// lbzx r3,r8,r7
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// ble cr6,0x8995e3bc
	if (!ctx.cr6.gt) goto loc_8995E3BC;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r10,11(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 11);
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// lhz r8,13(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 13);
	// mulli r7,r11,112
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// rotlwi r11,r10,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rotlwi r10,r8,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwzx r11,r7,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r8,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x8995e3f0
	goto loc_8995E3F0;
loc_8995E3BC:
	// lhz r11,13(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 13);
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// lhz r9,11(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 11);
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// rotlwi r5,r9,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// add r4,r11,r16
	ctx.r4.u64 = ctx.r11.u64 + ctx.r16.u64;
	// stwx r5,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u32);
	// stwx r5,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r4,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
loc_8995E3F0:
	// lhz r10,15(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 15);
	// addi r5,r30,88
	ctx.r5.s64 = ctx.r30.s64 + 88;
	// addi r4,r30,94
	ctx.r4.s64 = ctx.r30.s64 + 94;
	// lhz r7,17(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 17);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// lbz r6,19(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + 19);
	// addi r11,r30,76
	ctx.r11.s64 = ctx.r30.s64 + 76;
	// lbzu r9,20(r29)
	ea = 20 + ctx.r29.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r8,r24,1
	ctx.r8.s64 = ctx.r24.s64 + 1;
	// stbx r19,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r19.u8);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// sthx r10,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u16);
	// addi r28,r30,66
	ctx.r28.s64 = ctx.r30.s64 + 66;
	// addi r27,r30,67
	ctx.r27.s64 = ctx.r30.s64 + 67;
	// sthx r7,r31,r3
	REX_STORE_U16(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u16);
	// addi r26,r30,68
	ctx.r26.s64 = ctx.r30.s64 + 68;
	// addi r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 + 44;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stbx r6,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u8);
	// stbx r9,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u8);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// stbx r20,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r20.u8);
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r25,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r25.u32);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// blt cr6,0x8995e260
	if (ctx.cr6.lt) goto loc_8995E260;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r8,r10,12752
	ctx.r8.s64 = ctx.r10.s64 + 12752;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// stb r11,3890(r9)
	REX_STORE_U8(ctx.r9.u32 + 3890, ctx.r11.u8);
	// lbz r11,1(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// stw r25,20404(r7)
	REX_STORE_U32(ctx.r7.u32 + 20404, ctx.r25.u32);
	// stb r11,12752(r10)
	REX_STORE_U8(ctx.r10.u32 + 12752, ctx.r11.u8);
	// bl 0x899d9280
	ctx.lr = 0x8995E488;
	sub_899D9280(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995FFEC) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r9,19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 19, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r8,r10,66
	ctx.r8.s64 = ctx.r10.s64 + 66;
	// lbzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,248
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 248, ctx.xer);
	// bge cr6,0x89960020
	if (!ctx.cr6.lt) goto loc_89960020;
	// addi r10,r10,67
	ctx.r10.s64 = ctx.r10.s64 + 67;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// stbx r7,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// blr 
	return;
loc_89960020:
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// sthx r7,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89961188) {
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
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// addi r7,r10,60
	ctx.r7.s64 = ctx.r10.s64 + 60;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lwzx r3,r11,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r31,r10,48
	ctx.r31.s64 = ctx.r10.s64 + 48;
	// lwz r8,-21584(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + -21584);
	// addi r30,r10,52
	ctx.r30.s64 = ctx.r10.s64 + 52;
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwzx r6,r11,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// cmplwi cr6,r9,188
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 188, ctx.xer);
	// stwx r8,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r8.u32);
	// beq cr6,0x899613fc
	if (ctx.cr6.eq) goto loc_899613FC;
	// addi r7,r10,100
	ctx.r7.s64 = ctx.r10.s64 + 100;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r8,r8,3560
	ctx.r8.s64 = ctx.r8.s64 + 3560;
	// lhzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// rotlwi r7,r5,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lbzx r4,r7,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x899613e8
	if (!ctx.cr6.eq) goto loc_899613E8;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// addi r8,r10,102
	ctx.r8.s64 = ctx.r10.s64 + 102;
	// lbzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lhzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x899613e8
	if (!ctx.cr6.eq) goto loc_899613E8;
	// addi r5,r10,108
	ctx.r5.s64 = ctx.r10.s64 + 108;
	// lbzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x89961464
	if (ctx.cr6.gt) goto loc_89961464;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996129c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996129C;
	// bdzf 4*cr6+eq,0x899612d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899612D4;
	// bdzf 4*cr6+eq,0x8996131c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996131C;
	// bne cr6,0x899613b4
	if (!ctx.cr6.eq) goto loc_899613B4;
	// addi r9,r10,66
	ctx.r9.s64 = ctx.r10.s64 + 66;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,224
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 224, ctx.xer);
	// bge cr6,0x89961278
	if (!ctx.cr6.lt) goto loc_89961278;
	// addi r10,r10,67
	ctx.r10.s64 = ctx.r10.s64 + 67;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// stbx r7,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_89961278:
	// addi r8,r10,67
	ctx.r8.s64 = ctx.r10.s64 + 67;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r7,1
	ctx.r7.s64 = 1;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// stbx r7,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u8);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8996129C:
	// addi r10,r10,111
	ctx.r10.s64 = ctx.r10.s64 + 111;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// cmplwi cr6,r8,60
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60, ctx.xer);
	// bne cr6,0x89961464
	if (!ctx.cr6.eq) goto loc_89961464;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// stbx r8,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_899612D4:
	// lbz r8,7(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// cmplwi cr6,r8,116
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 116, ctx.xer);
	// blt cr6,0x89961308
	if (ctx.cr6.lt) goto loc_89961308;
	// addi r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 + 76;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpwi cr6,r8,116
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 116, ctx.xer);
	// blt cr6,0x89961308
	if (ctx.cr6.lt) goto loc_89961308;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_89961308:
	// li r10,3
	ctx.r10.s64 = 3;
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8996131C:
	// addi r8,r10,72
	ctx.r8.s64 = ctx.r10.s64 + 72;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lbz r6,-31405(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + -31405);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x899613a0
	if (ctx.cr6.eq) goto loc_899613A0;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// lis r10,-30220
	ctx.r10.s64 = -1980497920;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r8,r10,25704
	ctx.r8.s64 = ctx.r10.s64 + 25704;
loc_89961348:
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x89961358
	if (ctx.cr6.lt) goto loc_89961358;
	// li r10,7
	ctx.r10.s64 = 7;
loc_89961358:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r10,r10,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FE;
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x89961398
	if (ctx.cr6.eq) goto loc_89961398;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x89961348
	if (ctx.cr6.lt) goto loc_89961348;
	// li r10,4
	ctx.r10.s64 = 4;
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_89961398:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89961464
	if (!ctx.cr6.eq) goto loc_89961464;
loc_899613A0:
	// li r10,4
	ctx.r10.s64 = 4;
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_899613B4:
	// addi r9,r10,66
	ctx.r9.s64 = ctx.r10.s64 + 66;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// ble cr6,0x899613e8
	if (!ctx.cr6.gt) goto loc_899613E8;
	// addi r10,r10,67
	ctx.r10.s64 = ctx.r10.s64 + 67;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,224
	ctx.r8.s64 = ctx.r8.s64 + 224;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// stbx r7,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_899613E8:
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
loc_899613FC:
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
	// beq cr6,0x89961430
	if (ctx.cr6.eq) goto loc_89961430;
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
	// beq cr6,0x89961434
	if (ctx.cr6.eq) goto loc_89961434;
loc_89961430:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_89961434:
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x899613e8
	if (ctx.cr6.lt) goto loc_899613E8;
	// mulli r9,r9,112
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// addi r8,r10,66
	ctx.r8.s64 = ctx.r10.s64 + 66;
	// addi r7,r10,66
	ctx.r7.s64 = ctx.r10.s64 + 66;
	// addi r6,r10,67
	ctx.r6.s64 = ctx.r10.s64 + 67;
	// addi r5,r10,67
	ctx.r5.s64 = ctx.r10.s64 + 67;
	// lbzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbx r4,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u8);
	// lbzx r3,r9,r6
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r3,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u8);
loc_89961464:
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89962970) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89962978;
	__savegprlr_29(ctx, base);
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
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lwzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x89962e7c
	if (ctx.cr6.gt) goto loc_89962E7C;
	// lis r12,-30314
	ctx.r12.s64 = -1986658304;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10680
	ctx.r12.s64 = ctx.r12.s64 + 10680;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_89962C24;
	case 1:
		goto loc_89962C24;
	case 2:
		goto loc_89962C24;
	case 3:
		goto loc_89962D9C;
	case 4:
		goto loc_89962D9C;
	case 5:
		goto loc_89962C88;
	case 6:
		goto loc_89962AC0;
	case 7:
		goto loc_89962B54;
	case 8:
		goto loc_89962C88;
	case 9:
		goto loc_89962AC0;
	case 10:
		goto loc_89962B54;
	case 11:
		goto loc_89962C88;
	case 12:
		goto loc_89962A08;
	case 13:
		goto loc_89962B54;
	case 14:
		goto loc_89962CDC;
	case 15:
		goto loc_89962CDC;
	case 16:
		goto loc_89962CDC;
	case 17:
		goto loc_89962CDC;
	case 18:
		goto loc_89962CDC;
	case 19:
		goto loc_89962CDC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89962A08:
	// addi r9,r31,108
	ctx.r9.s64 = ctx.r31.s64 + 108;
	// lbzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89962a70
	if (ctx.cr6.lt) goto loc_89962A70;
	// beq cr6,0x89962a4c
	if (ctx.cr6.eq) goto loc_89962A4C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x89962a90
	if (!ctx.cr6.lt) goto loc_89962A90;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// lis r10,240
	ctx.r10.s64 = 15728640;
	// lwzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addis r8,r9,-16
	ctx.r8.s64 = ctx.r9.s64 + -1048576;
	// stwx r8,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x89962a90
	if (!ctx.cr6.eq) goto loc_89962A90;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// b 0x89962a90
	goto loc_89962A90;
loc_89962A4C:
	// addi r11,r31,111
	ctx.r11.s64 = ctx.r31.s64 + 111;
	// lbzx r10,r4,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r4,r11
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplwi cr6,r8,90
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 90, ctx.xer);
	// bne cr6,0x89962a90
	if (!ctx.cr6.eq) goto loc_89962A90;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x89962a8c
	goto loc_89962A8C;
loc_89962A70:
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// lwzx r10,r4,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addis r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 1048576;
	// stwx r8,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x89962a90
	if (!ctx.cr0.eq) goto loc_89962A90;
	// li r11,1
	ctx.r11.s64 = 1;
loc_89962A8C:
	// stbx r11,r4,r9
	REX_STORE_U8(ctx.r4.u32 + ctx.r9.u32, ctx.r11.u8);
loc_89962A90:
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// lwzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwz r11,-21584(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r6,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89962AC0:
	// addi r9,r31,108
	ctx.r9.s64 = ctx.r31.s64 + 108;
	// lbzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89962b04
	if (ctx.cr6.lt) goto loc_89962B04;
	// beq cr6,0x89962a4c
	if (ctx.cr6.eq) goto loc_89962A4C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x89962a90
	if (!ctx.cr6.lt) goto loc_89962A90;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// lis r10,240
	ctx.r10.s64 = 15728640;
	// lwzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addis r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 1048576;
	// stwx r8,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x89962a90
	if (!ctx.cr6.eq) goto loc_89962A90;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// b 0x89962a90
	goto loc_89962A90;
loc_89962B04:
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// lwzx r10,r4,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addis r8,r10,-16
	ctx.r8.s64 = ctx.r10.s64 + -1048576;
	// stwx r8,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x89962a90
	if (!ctx.cr0.eq) goto loc_89962A90;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// stbx r11,r4,r9
	REX_STORE_U8(ctx.r4.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r11,-21584(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r6,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89962B54:
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// addi r8,r31,108
	ctx.r8.s64 = ctx.r31.s64 + 108;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// lwzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r10,-21584(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -21584);
	// lbzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stwx r6,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// blt cr6,0x89962bf4
	if (ctx.cr6.lt) goto loc_89962BF4;
	// beq cr6,0x89962bbc
	if (ctx.cr6.eq) goto loc_89962BBC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x89962e7c
	if (!ctx.cr6.lt) goto loc_89962E7C;
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// addi r9,r31,76
	ctx.r9.s64 = ctx.r31.s64 + 76;
	// lwzx r11,r4,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stwx r11,r4,r10
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r4,r9
	REX_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne cr6,0x89962e7c
	if (!ctx.cr6.eq) goto loc_89962E7C;
loc_89962BAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89962BBC:
	// addi r11,r31,111
	ctx.r11.s64 = ctx.r31.s64 + 111;
	// lbzx r10,r4,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r4,r11
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,90
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 90, ctx.xer);
	// bne cr6,0x89962e7c
	if (!ctx.cr6.eq) goto loc_89962E7C;
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,2
	ctx.r9.s64 = 2;
	// stbx r9,r4,r8
	REX_STORE_U8(ctx.r4.u32 + ctx.r8.u32, ctx.r9.u8);
	// stbx r10,r4,r11
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89962BF4:
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// addi r9,r31,76
	ctx.r9.s64 = ctx.r31.s64 + 76;
	// lwzx r11,r4,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stwx r11,r4,r10
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// stwx r11,r4,r9
	REX_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne cr6,0x89962e7c
	if (!ctx.cr6.eq) goto loc_89962E7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r4,r8
	REX_STORE_U8(ctx.r4.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89962C24:
	// addi r10,r31,94
	ctx.r10.s64 = ctx.r31.s64 + 94;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// addi r6,r31,68
	ctx.r6.s64 = ctx.r31.s64 + 68;
	// addi r8,r9,9016
	ctx.r8.s64 = ctx.r9.s64 + 9016;
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// lhzx r9,r4,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// li r30,7
	ctx.r30.s64 = 7;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stbx r30,r4,r6
	REX_STORE_U8(ctx.r4.u32 + ctx.r6.u32, ctx.r30.u8);
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// stwx r11,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r29,128
	ctx.r6.s64 = ctx.r29.s64 + 128;
	// sthx r29,r4,r10
	REX_STORE_U16(ctx.r4.u32 + ctx.r10.u32, ctx.r29.u16);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r5,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 16;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// stwx r10,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_89962C88:
	// bl 0x8992bee8
	ctx.lr = 0x89962C8C;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89962bac
	if (ctx.cr6.lt) goto loc_89962BAC;
	// mulli r9,r11,112
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// lwzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r9,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r4,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// stwx r7,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r6,r4,r8
	REX_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89962CDC:
	// bl 0x8992bee8
	ctx.lr = 0x89962CE0;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89962bac
	if (ctx.cr6.lt) goto loc_89962BAC;
	// mulli r9,r11,112
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// lwzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// addi r8,r31,108
	ctx.r8.s64 = ctx.r31.s64 + 108;
	// lwzx r10,r9,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r4,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// stwx r11,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r11.u32);
	// lbzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stwx r6,r4,r30
	REX_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r6.u32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r5,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r5.u32);
	// blt cr6,0x89962d74
	if (ctx.cr6.lt) goto loc_89962D74;
	// beq cr6,0x89962bbc
	if (ctx.cr6.eq) goto loc_89962BBC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x89962e7c
	if (!ctx.cr6.lt) goto loc_89962E7C;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// lwzx r11,r4,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// addic. r11,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r11.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r4,r10
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r11.u32);
	// bne 0x89962e7c
	if (!ctx.cr0.eq) goto loc_89962E7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89962D74:
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// lwzx r11,r4,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stwx r11,r4,r10
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x89962e7c
	if (!ctx.cr6.eq) goto loc_89962E7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r4,r8
	REX_STORE_U8(ctx.r4.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89962D9C:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89962ddc
	if (ctx.cr6.lt) goto loc_89962DDC;
	// bne cr6,0x89962e34
	if (!ctx.cr6.eq) goto loc_89962E34;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// lwzx r6,r4,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwz r11,-21584(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -21584);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r5,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r5.u32);
	// b 0x89962e30
	goto loc_89962E30;
loc_89962DDC:
	// bl 0x8992bee8
	ctx.lr = 0x89962DE0;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x89962df8
	if (!ctx.cr6.lt) goto loc_89962DF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// b 0x89962e34
	goto loc_89962E34;
loc_89962DF8:
	// mulli r9,r11,112
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// lwzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r9,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r4,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// stwx r7,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_89962E30:
	// stwx r6,r4,r8
	REX_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r6.u32);
loc_89962E34:
	// addi r11,r31,94
	ctx.r11.s64 = ctx.r31.s64 + 94;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r9,r31,44
	ctx.r9.s64 = ctx.r31.s64 + 44;
	// addi r8,r10,9016
	ctx.r8.s64 = ctx.r10.s64 + 9016;
	// lhzx r10,r4,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addi r3,r5,128
	ctx.r3.s64 = ctx.r5.s64 + 128;
	// sthx r5,r4,r11
	REX_STORE_U16(ctx.r4.u32 + ctx.r11.u32, ctx.r5.u16);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r11,r3,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,14,0,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// srawi r6,r7,24
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 24;
	// stwx r6,r4,r9
	REX_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r6.u32);
loc_89962E7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89966140) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89966148;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x89934208
	ctx.lr = 0x89966154;
	sub_89934208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89966168
	if (!ctx.cr6.eq) goto loc_89966168;
loc_8996615C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_89966168:
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lwz r11,7924(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7924);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r10)
	REX_STORE_U32(ctx.r10.u32 + 7924, ctx.r11.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x899661b0
	if (ctx.cr6.eq) goto loc_899661B0;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-21846
	ctx.r10.s64 = -1431699456;
	// ori r9,r10,43691
	ctx.r9.u64 = ctx.r10.u64 | 43691;
	// lbz r8,9534(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 9534);
	// mulhwu r7,r8,r9
	ctx.r7.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r6,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r6.u64;
	// clrlwi r23,r5,24
	ctx.r23.u64 = ctx.r5.u32 & 0xFF;
	// b 0x899661b4
	goto loc_899661B4;
loc_899661B0:
	// li r23,3
	ctx.r23.s64 = 3;
loc_899661B4:
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// rlwinm r10,r23,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0x7F8;
	// addi r11,r11,-31780
	ctx.r11.s64 = ctx.r11.s64 + -31780;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r30,r10,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r31,r10,r9
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8992c2a8
	ctx.lr = 0x899661D4;
	sub_8992C2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996615c
	if (ctx.cr6.eq) goto loc_8996615C;
	// clrlwi r22,r31,24
	ctx.r22.u64 = ctx.r31.u32 & 0xFF;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x89966340
	if (!ctx.cr6.gt) goto loc_89966340;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// addi r24,r11,-4592
	ctx.r24.s64 = ctx.r11.s64 + -4592;
	// li r26,0
	ctx.r26.s64 = 0;
	// lbz r7,12270(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 12270);
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// addi r29,r30,-1
	ctx.r29.s64 = ctx.r30.s64 + -1;
	// lwz r25,-21584(r8)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lhz r21,0(r24)
	ctx.r21.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// li r27,256
	ctx.r27.s64 = 256;
	// addi r30,r11,592
	ctx.r30.s64 = ctx.r11.s64 + 592;
	// stb r7,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
loc_89966224:
	// lhzx r3,r10,r24
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// mulli r31,r9,112
	ctx.r31.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// sthx r21,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u16);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// li r7,26
	ctx.r7.s64 = 26;
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lhz r5,1(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 1);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// stwx r4,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
	// beq cr6,0x89966278
	if (ctx.cr6.eq) goto loc_89966278;
	// lhz r11,3(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 3);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x89966288
	goto loc_89966288;
loc_89966278:
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
loc_89966288:
	// bl 0x8992bd50
	ctx.lr = 0x8996628C;
	sub_8992BD50(ctx, base);
	// addi r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 1;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// addi r6,r30,88
	ctx.r6.s64 = ctx.r30.s64 + 88;
	// addi r5,r30,68
	ctx.r5.s64 = ctx.r30.s64 + 68;
	// addi r11,r30,76
	ctx.r11.s64 = ctx.r30.s64 + 76;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r20,r30,67
	ctx.r20.s64 = ctx.r30.s64 + 67;
	// addi r19,r30,66
	ctx.r19.s64 = ctx.r30.s64 + 66;
	// addi r18,r30,44
	ctx.r18.s64 = ctx.r30.s64 + 44;
	// addi r17,r30,80
	ctx.r17.s64 = ctx.r30.s64 + 80;
	// addi r16,r30,94
	ctx.r16.s64 = ctx.r30.s64 + 94;
	// addi r15,r30,110
	ctx.r15.s64 = ctx.r30.s64 + 110;
	// addi r14,r30,109
	ctx.r14.s64 = ctx.r30.s64 + 109;
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r22.s32, ctx.xer);
	// lhz r3,5(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 5);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// stwx r3,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// lhz r10,7(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 7);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// add r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// stbx r26,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r26.u8);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// lbz r8,9(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 9);
	// stbx r8,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u8);
	// lhz r7,11(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 11);
	// sthx r7,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u16);
	// lbz r6,13(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + 13);
	// stwx r11,r31,r18
	REX_STORE_U32(ctx.r31.u32 + ctx.r18.u32, ctx.r11.u32);
	// stbx r6,r31,r20
	REX_STORE_U8(ctx.r31.u32 + ctx.r20.u32, ctx.r6.u8);
	// stbx r6,r31,r19
	REX_STORE_U8(ctx.r31.u32 + ctx.r19.u32, ctx.r6.u8);
	// stwx r27,r31,r17
	REX_STORE_U32(ctx.r31.u32 + ctx.r17.u32, ctx.r27.u32);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// sthx r26,r31,r16
	REX_STORE_U16(ctx.r31.u32 + ctx.r16.u32, ctx.r26.u16);
	// stbx r23,r31,r15
	REX_STORE_U8(ctx.r31.u32 + ctx.r15.u32, ctx.r23.u8);
	// lbzu r11,14(r29)
	ea = 14 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// stbx r11,r31,r14
	REX_STORE_U8(ctx.r31.u32 + ctx.r14.u32, ctx.r11.u8);
	// blt cr6,0x89966224
	if (ctx.cr6.lt) goto loc_89966224;
loc_89966340:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899693F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x89969400;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// addi r24,r11,14524
	ctx.r24.s64 = ctx.r11.s64 + 14524;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r31,r10,20888
	ctx.r31.s64 = ctx.r10.s64 + 20888;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r24,268
	ctx.r9.s64 = ctx.r24.s64 + 268;
	// addi r10,r31,-4992
	ctx.r10.s64 = ctx.r31.s64 + -4992;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r25,r8,3484
	ctx.r25.s64 = ctx.r8.s64 + 3484;
loc_8996942C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r25,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r25.u32);
	// addi r9,r9,34
	ctx.r9.s64 = ctx.r9.s64 + 34;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r26,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x8996942c
	if (ctx.cr6.lt) goto loc_8996942C;
	// stw r26,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// addi r9,r24,812
	ctx.r9.s64 = ctx.r24.s64 + 812;
	// stw r26,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// addi r11,r31,-1048
	ctx.r11.s64 = ctx.r31.s64 + -1048;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_89969468:
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
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// blt cr6,0x89969468
	if (ctx.cr6.lt) goto loc_89969468;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// lis r8,-30233
	ctx.r8.s64 = -1981349888;
	// addi r9,r10,-30376
	ctx.r9.s64 = ctx.r10.s64 + -30376;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r28,r8,-11436
	ctx.r28.s64 = ctx.r8.s64 + -11436;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89969518
	if (ctx.cr6.eq) goto loc_89969518;
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
	// li r27,1
	ctx.r27.s64 = 1;
loc_899694C0:
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// lbz r6,2(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lbz r7,3(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r9,5(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lbzu r10,6(r30)
	ea = 6 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r27,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r27.u16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x89934fb8
	ctx.lr = 0x89969500;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899694c0
	if (!ctx.cr6.eq) goto loc_899694C0;
loc_89969518:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8996951C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r5,r30,r9
	ctx.r5.u64 = ctx.r30.u64 + ctx.r9.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r24,148
	ctx.r11.s64 = ctx.r24.s64 + 148;
	// addi r8,r31,9632
	ctx.r8.s64 = ctx.r31.s64 + 9632;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89935688
	ctx.lr = 0x89969560;
	sub_89935688(ctx, base);
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// blt cr6,0x8996951c
	if (ctx.cr6.lt) goto loc_8996951C;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r11,r31,9472
	ctx.r11.s64 = ctx.r31.s64 + 9472;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,144
	ctx.r9.s64 = 144;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899695A8;
	sub_89934FB8(ctx, base);
	// addi r9,r31,9472
	ctx.r9.s64 = ctx.r31.s64 + 9472;
	// addi r11,r31,7144
	ctx.r11.s64 = ctx.r31.s64 + 7144;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_899695B4:
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
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x899695b4
	if (ctx.cr6.lt) goto loc_899695B4;
	// addi r9,r31,-5152
	ctx.r9.s64 = ctx.r31.s64 + -5152;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r9,176
	ctx.r9.s64 = 176;
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,-40
	ctx.r7.s64 = -40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,11
	ctx.r4.s64 = 11;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x89969618;
	sub_89934FB8(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_89969620:
	// addi r10,r31,-408
	ctx.r10.s64 = ctx.r31.s64 + -408;
	// mulli r9,r30,204
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(204));
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r6,r24,-984
	ctx.r6.s64 = ctx.r24.s64 + -984;
	// rlwimi r3,r11,14,16,17
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF3FFF);
	// addi r5,r31,-5152
	ctx.r5.s64 = ctx.r31.s64 + -5152;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x89935688
	ctx.lr = 0x89969644;
	sub_89935688(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x89969620
	if (ctx.cr6.lt) goto loc_89969620;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-30340
	ctx.r10.s64 = ctx.r11.s64 + -30340;
	// lbz r11,-30340(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -30340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899696ec
	if (ctx.cr6.eq) goto loc_899696EC;
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
loc_89969674:
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// lbz r5,6(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// lbz r6,7(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// addi r7,r31,8136
	ctx.r7.s64 = ctx.r31.s64 + 8136;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r10,5(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r5,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// li r9,-20
	ctx.r9.s64 = -20;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r4,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r4.u16);
	// li r6,40
	ctx.r6.s64 = 40;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// li r8,-20
	ctx.r8.s64 = -20;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// li r7,40
	ctx.r7.s64 = 40;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x89934b48
	ctx.lr = 0x899696C8;
	sub_89934B48(ctx, base);
	// lbzu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// extsh r29,r4
	ctx.r29.s64 = ctx.r4.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89969674
	if (!ctx.cr6.eq) goto loc_89969674;
loc_899696EC:
	// addi r6,r24,128
	ctx.r6.s64 = ctx.r24.s64 + 128;
	// addi r5,r31,8136
	ctx.r5.s64 = ctx.r31.s64 + 8136;
	// addi r4,r31,-2336
	ctx.r4.s64 = ctx.r31.s64 + -2336;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x89969704;
	sub_89935610(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-30328
	ctx.r10.s64 = ctx.r11.s64 + -30328;
	// lbz r11,-30328(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -30328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899697a4
	if (ctx.cr6.eq) goto loc_899697A4;
	// addi r30,r10,-10
	ctx.r30.s64 = ctx.r10.s64 + -10;
loc_89969720:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r8,19(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 19);
	// lbz r28,18(r30)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + 18);
	// addi r4,r31,-4776
	ctx.r4.s64 = ctx.r31.s64 + -4776;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r3,11(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lbz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,13(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
	// lbz r7,14(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// sth r27,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r27.u16);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// add r23,r10,r4
	ctx.r23.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r8,15(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// extsb r4,r3
	ctx.r4.s64 = ctx.r3.s8;
	// lbz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 16);
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r10,17(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 17);
	// bl 0x89934b48
	ctx.lr = 0x89969780;
	sub_89934B48(ctx, base);
	// lbzu r10,10(r30)
	ea = 10 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89969720
	if (!ctx.cr6.eq) goto loc_89969720;
loc_899697A4:
	// addi r9,r31,-4776
	ctx.r9.s64 = ctx.r31.s64 + -4776;
	// addi r11,r31,-2224
	ctx.r11.s64 = ctx.r31.s64 + -2224;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_899697B0:
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
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899697b0
	if (ctx.cr6.lt) goto loc_899697B0;
	// addi r10,r31,-4776
	ctx.r10.s64 = ctx.r31.s64 + -4776;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r6,r24,248
	ctx.r6.s64 = ctx.r24.s64 + 248;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r4,r31,6736
	ctx.r4.s64 = ctx.r31.s64 + 6736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,144
	ctx.r5.s64 = ctx.r10.s64 + 144;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935610
	ctx.lr = 0x899697FC;
	sub_89935610(ctx, base);
	// addi r11,r31,-4776
	ctx.r11.s64 = ctx.r31.s64 + -4776;
	// addi r10,r31,6736
	ctx.r10.s64 = ctx.r31.s64 + 6736;
	// addi r6,r24,248
	ctx.r6.s64 = ctx.r24.s64 + 248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,432
	ctx.r5.s64 = ctx.r11.s64 + 432;
	// addi r4,r10,204
	ctx.r4.s64 = ctx.r10.s64 + 204;
	// bl 0x89935610
	ctx.lr = 0x89969818;
	sub_89935610(ctx, base);
	// addi r11,r31,-4776
	ctx.r11.s64 = ctx.r31.s64 + -4776;
	// addi r6,r24,248
	ctx.r6.s64 = ctx.r24.s64 + 248;
	// addi r4,r31,-2904
	ctx.r4.s64 = ctx.r31.s64 + -2904;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,720
	ctx.r5.s64 = ctx.r11.s64 + 720;
	// bl 0x89935610
	ctx.lr = 0x89969830;
	sub_89935610(ctx, base);
	// addi r11,r31,-4776
	ctx.r11.s64 = ctx.r31.s64 + -4776;
	// addi r10,r31,-2904
	ctx.r10.s64 = ctx.r31.s64 + -2904;
	// addi r6,r24,248
	ctx.r6.s64 = ctx.r24.s64 + 248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,1008
	ctx.r5.s64 = ctx.r11.s64 + 1008;
	// addi r4,r10,204
	ctx.r4.s64 = ctx.r10.s64 + 204;
	// bl 0x89935610
	ctx.lr = 0x8996984C;
	sub_89935610(ctx, base);
	// addi r11,r31,-4776
	ctx.r11.s64 = ctx.r31.s64 + -4776;
	// addi r6,r24,248
	ctx.r6.s64 = ctx.r24.s64 + 248;
	// addi r4,r31,-816
	ctx.r4.s64 = ctx.r31.s64 + -816;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,1296
	ctx.r5.s64 = ctx.r11.s64 + 1296;
	// bl 0x89935610
	ctx.lr = 0x89969864;
	sub_89935610(ctx, base);
	// addi r11,r31,-4776
	ctx.r11.s64 = ctx.r31.s64 + -4776;
	// addi r10,r31,-816
	ctx.r10.s64 = ctx.r31.s64 + -816;
	// addi r6,r24,248
	ctx.r6.s64 = ctx.r24.s64 + 248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,1584
	ctx.r5.s64 = ctx.r11.s64 + 1584;
	// addi r4,r10,204
	ctx.r4.s64 = ctx.r10.s64 + 204;
	// bl 0x89935610
	ctx.lr = 0x89969880;
	sub_89935610(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r31,-2496
	ctx.r11.s64 = ctx.r31.s64 + -2496;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,176
	ctx.r9.s64 = 176;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-40
	ctx.r8.s64 = -40;
	// li r7,-40
	ctx.r7.s64 = -40;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x89934fb8
	ctx.lr = 0x899698B0;
	sub_89934FB8(ctx, base);
	// addi r9,r31,-2496
	ctx.r9.s64 = ctx.r31.s64 + -2496;
	// addi r11,r31,8800
	ctx.r11.s64 = ctx.r31.s64 + 8800;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_899698BC:
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
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x899698bc
	if (ctx.cr6.lt) goto loc_899698BC;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r10,-30072
	ctx.r10.s64 = ctx.r10.s64 + -30072;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8996997c
	if (ctx.cr6.eq) goto loc_8996997C;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_89969908:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r4,2(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// addi r28,r31,-5312
	ctx.r28.s64 = ctx.r31.s64 + -5312;
	// lbz r5,3(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r7,5(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// extsb r23,r11
	ctx.r23.s64 = ctx.r11.s8;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,6(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// lbz r9,7(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// lbzu r11,9(r30)
	ea = 9 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x89934fb8
	ctx.lr = 0x8996995C;
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
	// bne cr6,0x89969908
	if (!ctx.cr6.eq) goto loc_89969908;
loc_8996997C:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_89969980:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,-5312
	ctx.r10.s64 = ctx.r31.s64 + -5312;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r31,-1264
	ctx.r7.s64 = ctx.r31.s64 + -1264;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r6,r8,108
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(108));
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_899699A4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
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
	// blt cr6,0x899699a4
	if (ctx.cr6.lt) goto loc_899699A4;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x89969980
	if (ctx.cr6.lt) goto loc_89969980;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-29984
	ctx.r10.s64 = ctx.r11.s64 + -29984;
	// lbz r11,-29984(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -29984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89969a74
	if (ctx.cr6.eq) goto loc_89969A74;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_89969A04:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r4,2(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// lbz r5,3(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// addi r3,r31,8280
	ctx.r3.s64 = ctx.r31.s64 + 8280;
	// lbz r7,5(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,6(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// clrlwi r28,r28,16
	ctx.r28.u64 = ctx.r28.u32 & 0xFFFF;
	// lbz r9,7(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzu r10,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x89934fb8
	ctx.lr = 0x89969A54;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// bne cr6,0x89969a04
	if (!ctx.cr6.eq) goto loc_89969A04;
loc_89969A74:
	// addi r9,r31,8280
	ctx.r9.s64 = ctx.r31.s64 + 8280;
	// addi r11,r31,-2112
	ctx.r11.s64 = ctx.r31.s64 + -2112;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_89969A80:
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
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x89969a80
	if (ctx.cr6.lt) goto loc_89969A80;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r10,r31,8280
	ctx.r10.s64 = ctx.r31.s64 + 8280;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r4,r31,7352
	ctx.r4.s64 = ctx.r31.s64 + 7352;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,160
	ctx.r5.s64 = ctx.r10.s64 + 160;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935c28
	ctx.lr = 0x89969ACC;
	sub_89935C28(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-29792
	ctx.r10.s64 = ctx.r11.s64 + -29792;
	// lbz r11,-29792(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -29792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89969b58
	if (ctx.cr6.eq) goto loc_89969B58;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_89969AE8:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r4,2(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r5,3(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// extsb r23,r11
	ctx.r23.s64 = ctx.r11.s8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r7,5(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// addi r28,r31,9008
	ctx.r28.s64 = ctx.r31.s64 + 9008;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,6(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// lbz r9,7(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// lbz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzu r11,9(r30)
	ea = 9 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x89934fb8
	ctx.lr = 0x89969B38;
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
	// bne cr6,0x89969ae8
	if (!ctx.cr6.eq) goto loc_89969AE8;
loc_89969B58:
	// addi r9,r31,9008
	ctx.r9.s64 = ctx.r31.s64 + 9008;
	// addi r11,r31,-5720
	ctx.r11.s64 = ctx.r31.s64 + -5720;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
loc_89969B68:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// blt cr6,0x89969b68
	if (ctx.cr6.lt) goto loc_89969B68;
	// addi r10,r31,-5720
	ctx.r10.s64 = ctx.r31.s64 + -5720;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r9,r31,9008
	ctx.r9.s64 = ctx.r31.s64 + 9008;
	// addi r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 + 204;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_89969BA8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r25,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r25.u32);
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
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// blt cr6,0x89969ba8
	if (ctx.cr6.lt) goto loc_89969BA8;
	// addi r9,r31,9008
	ctx.r9.s64 = ctx.r31.s64 + 9008;
	// stw r26,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r26,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// addi r11,r31,-1888
	ctx.r11.s64 = ctx.r31.s64 + -1888;
	// addi r9,r9,160
	ctx.r9.s64 = ctx.r9.s64 + 160;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_89969BE8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,25
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 25, ctx.xer);
	// blt cr6,0x89969be8
	if (ctx.cr6.lt) goto loc_89969BE8;
	// addi r10,r31,9008
	ctx.r10.s64 = ctx.r31.s64 + 9008;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r8,r31,-1888
	ctx.r8.s64 = ctx.r31.s64 + -1888;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r9,r10,160
	ctx.r9.s64 = ctx.r10.s64 + 160;
	// addi r11,r8,312
	ctx.r11.s64 = ctx.r8.s64 + 312;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_89969C2C:
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
	// cmpwi cr6,r8,25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 25, ctx.xer);
	// blt cr6,0x89969c2c
	if (ctx.cr6.lt) goto loc_89969C2C;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r10,-29544
	ctx.r10.s64 = ctx.r10.s64 + -29544;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89969cdc
	if (ctx.cr6.eq) goto loc_89969CDC;
	// addi r30,r10,-2
	ctx.r30.s64 = ctx.r10.s64 + -2;
	// li r28,-32768
	ctx.r28.s64 = -32768;
loc_89969C7C:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lhz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// lbz r5,6(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// extsb r27,r11
	ctx.r27.s64 = ctx.r11.s8;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,7(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// or r3,r7,r28
	ctx.r3.u64 = ctx.r7.u64 | ctx.r28.u64;
	// lbzu r9,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r31,9752
	ctx.r10.s64 = ctx.r31.s64 + 9752;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89935158
	ctx.lr = 0x89969CBC;
	sub_89935158(ctx, base);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// add r7,r27,r10
	ctx.r7.u64 = ctx.r27.u64 + ctx.r10.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89969c7c
	if (!ctx.cr6.eq) goto loc_89969C7C;
loc_89969CDC:
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r10,r11,-29616
	ctx.r10.s64 = ctx.r11.s64 + -29616;
	// lbz r11,-29616(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -29616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89969d64
	if (ctx.cr6.eq) goto loc_89969D64;
	// addi r30,r10,-2
	ctx.r30.s64 = ctx.r10.s64 + -2;
loc_89969CF4:
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// lhz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// lbz r9,6(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,7(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// lbzu r7,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r6,r31,9752
	ctx.r6.s64 = ctx.r31.s64 + 9752;
	// add r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 + ctx.r5.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,-16
	ctx.r8.s64 = -16;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// sth r7,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// li r7,-16
	ctx.r7.s64 = -16;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89934fb8
	ctx.lr = 0x89969D44;
	sub_89934FB8(ctx, base);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// add r4,r28,r9
	ctx.r4.u64 = ctx.r28.u64 + ctx.r9.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// extsh r29,r4
	ctx.r29.s64 = ctx.r4.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x89969cf4
	if (!ctx.cr6.eq) goto loc_89969CF4;
loc_89969D64:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_89969D68:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,9752
	ctx.r9.s64 = ctx.r31.s64 + 9752;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mulli r11,r30,204
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(204));
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935688
	ctx.lr = 0x89969D94;
	sub_89935688(ctx, base);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// blt cr6,0x89969d68
	if (ctx.cr6.lt) goto loc_89969D68;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_89969DAC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,9752
	ctx.r8.s64 = ctx.r31.s64 + 9752;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mulli r11,r30,204
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(204));
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r31,3468
	ctx.r10.s64 = ctx.r31.s64 + 3468;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,16400
	ctx.r3.s64 = 16400;
	// bl 0x89935688
	ctx.lr = 0x89969DDC;
	sub_89935688(ctx, base);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x89969dac
	if (ctx.cr6.lt) goto loc_89969DAC;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8997A238) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8997A240;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// addi r7,r30,164
	ctx.r7.s64 = ctx.r30.s64 + 164;
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stwx r6,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x8997a974
	if (ctx.cr6.gt) goto loc_8997A974;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997a38c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A38C;
	// bdzf 4*cr6+eq,0x8997a650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A650;
	// bdzf 4*cr6+eq,0x8997a674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A674;
	// bne cr6,0x8997a8ac
	if (!ctx.cr6.eq) goto loc_8997A8AC;
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8997a344
	if (ctx.cr6.lt) goto loc_8997A344;
	// beq cr6,0x8997a314
	if (ctx.cr6.eq) goto loc_8997A314;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8997a974
	if (!ctx.cr6.lt) goto loc_8997A974;
	// bl 0x899368b0
	ctx.lr = 0x8997A2B4;
	sub_899368B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8997a974
	if (!ctx.cr6.eq) goto loc_8997A974;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r8,r30,193
	ctx.r8.s64 = ctx.r30.s64 + 193;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r3,r9,0,3,1
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// li r6,3
	ctx.r6.s64 = 3;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lhzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 + 44;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// stwx r3,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r8,r9,r6
	ctx.r8.u64 = uint32_t((ctx.r6.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r9.s32 / ctx.r6.s32 : 0);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// bl 0x899365d0
	ctx.lr = 0x8997A304;
	sub_899365D0(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stbx r6,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A314:
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
	// bgt cr6,0x8997a974
	if (ctx.cr6.gt) goto loc_8997A974;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A344:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,320
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 320, ctx.xer);
	// bgt cr6,0x8997a974
	if (ctx.cr6.gt) goto loc_8997A974;
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
	// bne 0x8997a974
	if (!ctx.cr0.eq) goto loc_8997A974;
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// li r10,255
	ctx.r10.s64 = 255;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x89936698
	ctx.lr = 0x8997A37C;
	sub_89936698(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A38C:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bgt cr6,0x8997a974
	if (ctx.cr6.gt) goto loc_8997A974;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997a3f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A3F0;
	// bdzf 4*cr6+eq,0x8997a418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A418;
	// bdzf 4*cr6+eq,0x8997a498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A498;
	// bdzf 4*cr6+eq,0x8997a4d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A4D8;
	// bdzf 4*cr6+eq,0x8997a50c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A50C;
	// bdzf 4*cr6+eq,0x8997a574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A574;
	// bdzf 4*cr6+eq,0x8997a5b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A5B4;
	// bne cr6,0x8997a5f0
	if (!ctx.cr6.eq) goto loc_8997A5F0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r30,182
	ctx.r10.s64 = ctx.r30.s64 + 182;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A3F0:
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,240
	ctx.r4.s64 = 240;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8991d830
	ctx.lr = 0x8997A408;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A418:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8997a434
	if (!ctx.cr6.lt) goto loc_8997A434;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8997A434:
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
	// ble cr6,0x8997a474
	if (!ctx.cr6.gt) goto loc_8997A474;
	// addi r8,r30,193
	ctx.r8.s64 = ctx.r30.s64 + 193;
	// addi r7,r30,192
	ctx.r7.s64 = ctx.r30.s64 + 192;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// stbx r6,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A474:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8991d8e0
	ctx.lr = 0x8997A47C;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997a974
	if (ctx.cr6.eq) goto loc_8997A974;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A498:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997a4b4
	if (ctx.cr6.eq) goto loc_8997A4B4;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A4B4:
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
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r6,r7,0,30,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A4D8:
	// cmpwi cr6,r6,5400
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5400, ctx.xer);
	// bgt cr6,0x8997a634
	if (ctx.cr6.gt) goto loc_8997A634;
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8997a634
	if (ctx.cr6.lt) goto loc_8997A634;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A50C:
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
	// cmplwi cr6,r8,60
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60, ctx.xer);
	// blt cr6,0x8997a974
	if (ctx.cr6.lt) goto loc_8997A974;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,100
	ctx.r7.s64 = ctx.r30.s64 + 100;
	// addi r6,r30,104
	ctx.r6.s64 = ctx.r30.s64 + 104;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhzx r3,r31,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// subfic r5,r8,1024
	ctx.xer.ca = ctx.r8.u32 <= 1024;
	ctx.r5.u64 = static_cast<uint64_t>(1024) - ctx.r8.u64;
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// rlwinm r10,r5,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A574:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8997a590
	if (!ctx.cr6.lt) goto loc_8997A590;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8997A590:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8991d8e0
	ctx.lr = 0x8997A598;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997a974
	if (ctx.cr6.eq) goto loc_8997A974;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A5B4:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997a5d0
	if (ctx.cr6.eq) goto loc_8997A5D0;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A5D0:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// li r8,-96
	ctx.r8.s64 = -96;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// lbzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stbx r3,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// b 0x8997a970
	goto loc_8997A970;
loc_8997A5F0:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8997a974
	if (!ctx.cr6.eq) goto loc_8997A974;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r6,5400
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5400, ctx.xer);
	// rlwinm r9,r11,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// bgt cr6,0x8997a634
	if (ctx.cr6.gt) goto loc_8997A634;
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
	// bge cr6,0x8997a644
	if (!ctx.cr6.lt) goto loc_8997A644;
loc_8997A634:
	// bl 0x89936508
	ctx.lr = 0x8997A638;
	sub_89936508(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
loc_8997A644:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A650:
	// bl 0x89936828
	ctx.lr = 0x8997A654;
	sub_89936828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8997a974
	if (!ctx.cr6.eq) goto loc_8997A974;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stwx r10,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// stbx r9,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A674:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x8997a974
	if (ctx.cr6.gt) goto loc_8997A974;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997a3f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A3F0;
	// bdzf 4*cr6+eq,0x8997a6d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A6D8;
	// bdzf 4*cr6+eq,0x8997a734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A734;
	// bdzf 4*cr6+eq,0x8997a774
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A774;
	// bdzf 4*cr6+eq,0x8997a790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A790;
	// bdzf 4*cr6+eq,0x8997a7f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A7F8;
	// bdzf 4*cr6+eq,0x8997a838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997A838;
	// bne cr6,0x8997a878
	if (!ctx.cr6.eq) goto loc_8997A878;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r30,182
	ctx.r10.s64 = ctx.r30.s64 + 182;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,19
	ctx.r6.s64 = 19;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A6D8:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8997a6f4
	if (!ctx.cr6.lt) goto loc_8997A6F4;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
loc_8997A6F4:
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
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// ble cr6,0x8997a474
	if (!ctx.cr6.gt) goto loc_8997A474;
	// addi r8,r30,193
	ctx.r8.s64 = ctx.r30.s64 + 193;
	// addi r7,r30,192
	ctx.r7.s64 = ctx.r30.s64 + 192;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// stbx r6,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A734:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997a750
	if (ctx.cr6.eq) goto loc_8997A750;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A750:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r6,r7,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r6,r6,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A774:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// lbzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 | 32;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A790:
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
	// cmplwi cr6,r8,60
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60, ctx.xer);
	// blt cr6,0x8997a974
	if (ctx.cr6.lt) goto loc_8997A974;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,100
	ctx.r7.s64 = ctx.r30.s64 + 100;
	// addi r6,r30,104
	ctx.r6.s64 = ctx.r30.s64 + 104;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhzx r3,r31,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// subfic r5,r8,1024
	ctx.xer.ca = ctx.r8.u32 <= 1024;
	ctx.r5.u64 = static_cast<uint64_t>(1024) - ctx.r8.u64;
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// rlwinm r9,r5,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A7F8:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8997a814
	if (!ctx.cr6.lt) goto loc_8997A814;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8997A814:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8991d8e0
	ctx.lr = 0x8997A81C;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997a974
	if (ctx.cr6.eq) goto loc_8997A974;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A838:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997a854
	if (ctx.cr6.eq) goto loc_8997A854;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A854:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// lbzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// rlwimi r5,r9,6,25,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x60) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF9F);
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A878:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8997a974
	if (!ctx.cr6.eq) goto loc_8997A974;
	// cmpwi cr6,r6,7200
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7200, ctx.xer);
	// ble cr6,0x8997a8a0
	if (!ctx.cr6.gt) goto loc_8997A8A0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
loc_8997A8A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A8AC:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8997a938
	if (ctx.cr6.lt) goto loc_8997A938;
	// beq cr6,0x8997a91c
	if (ctx.cr6.eq) goto loc_8997A91C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8997a974
	if (!ctx.cr6.lt) goto loc_8997A974;
	// addi r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 + 168;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r7,r10,2048
	ctx.r7.s64 = ctx.r10.s64 + 2048;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// cmpwi cr6,r6,-192
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -192, ctx.xer);
	// bgt cr6,0x8997a974
	if (ctx.cr6.gt) goto loc_8997A974;
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
	ctx.lr = 0x8997A918;
	sub_8995E188(ctx, base);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A91C:
	// bl 0x89936938
	ctx.lr = 0x8997A920;
	sub_89936938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8997a974
	if (!ctx.cr6.eq) goto loc_8997A974;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8997a974
	goto loc_8997A974;
loc_8997A938:
	// bl 0x89936760
	ctx.lr = 0x8997A93C;
	sub_89936760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8997a974
	if (ctx.cr6.eq) goto loc_8997A974;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r8,r30,193
	ctx.r8.s64 = ctx.r30.s64 + 193;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// sthx r6,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u16);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r5,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u8);
	// stbx r4,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u8);
loc_8997A970:
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
loc_8997A974:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,168
	ctx.r7.s64 = ctx.r30.s64 + 168;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r3,r30,71
	ctx.r3.s64 = ctx.r30.s64 + 71;
	// addi r5,r10,9016
	ctx.r5.s64 = ctx.r10.s64 + 9016;
	// lhzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// lbzx r3,r31,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// addi r29,r11,128
	ctx.r29.s64 = ctx.r11.s64 + 128;
	// rlwinm r28,r11,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r29,r29,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// addi r10,r30,70
	ctx.r10.s64 = ctx.r30.s64 + 70;
	// addi r27,r30,60
	ctx.r27.s64 = ctx.r30.s64 + 60;
	// lhzx r28,r28,r5
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r5.u32);
	// addi r30,r30,69
	ctx.r30.s64 = ctx.r30.s64 + 69;
	// lhzx r5,r29,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r5.u32);
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// stbx r3,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u8);
	// mullw r29,r29,r11
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// stbx r3,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u8);
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// srawi r10,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 8;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stwx r10,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r5,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8997FE48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8997FE50;
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
	// blt cr6,0x8997fef4
	if (ctx.cr6.lt) goto loc_8997FEF4;
	// bne cr6,0x8997fffc
	if (!ctx.cr6.eq) goto loc_8997FFFC;
	// addi r10,r30,189
	ctx.r10.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8997fed0
	if (ctx.cr6.lt) goto loc_8997FED0;
	// bne cr6,0x8997fffc
	if (!ctx.cr6.eq) goto loc_8997FFFC;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8997feb0
	if (!ctx.cr6.lt) goto loc_8997FEB0;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8997FEB0:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,-192
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -192, ctx.xer);
	// bgt cr6,0x8997fffc
	if (ctx.cr6.gt) goto loc_8997FFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// b 0x8997fffc
	goto loc_8997FFFC;
loc_8997FED0:
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r8,r30,193
	ctx.r8.s64 = ctx.r30.s64 + 193;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,0
	ctx.r5.s64 = 0;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// sthx r6,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u16);
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// b 0x8997fffc
	goto loc_8997FFFC;
loc_8997FEF4:
	// addi r11,r30,164
	ctx.r11.s64 = ctx.r30.s64 + 164;
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r8,r31,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x8997fffc
	if (ctx.cr6.gt) goto loc_8997FFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997ff54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997FF54;
	// bdzf 4*cr6+eq,0x8997ff94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997FF94;
	// bne cr6,0x8997ffc0
	if (!ctx.cr6.eq) goto loc_8997FFC0;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991d830
	ctx.lr = 0x8997FF44;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8997fffc
	goto loc_8997FFFC;
loc_8997FF54:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8997ff70
	if (!ctx.cr6.lt) goto loc_8997FF70;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8997FF70:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8991d8e0
	ctx.lr = 0x8997FF78;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997fffc
	if (ctx.cr6.eq) goto loc_8997FFFC;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8997fffc
	goto loc_8997FFFC;
loc_8997FF94:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997ffb0
	if (ctx.cr6.eq) goto loc_8997FFB0;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x8997fffc
	goto loc_8997FFFC;
loc_8997FFB0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x8997fffc
	goto loc_8997FFFC;
loc_8997FFC0:
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r8,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u16);
	// cmplwi cr6,r8,480
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 480, ctx.xer);
	// blt cr6,0x8997fffc
	if (ctx.cr6.lt) goto loc_8997FFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,1800
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1800, ctx.xer);
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// ble cr6,0x8997fffc
	if (!ctx.cr6.gt) goto loc_8997FFFC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
loc_8997FFFC:
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
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
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

DEFINE_REX_FUNC(sub_899844A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x899844B0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r29,r11,12800
	ctx.r29.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r27,r31,r29
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// addi r23,r29,48
	ctx.r23.s64 = ctx.r29.s64 + 48;
	// addi r22,r29,52
	ctx.r22.s64 = ctx.r29.s64 + 52;
	// addi r8,r29,207
	ctx.r8.s64 = ctx.r29.s64 + 207;
	// addi r7,r29,200
	ctx.r7.s64 = ctx.r29.s64 + 200;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r5,r31,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// lwzx r4,r31,r22
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// lbzx r26,r31,r8
	ctx.r26.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r25,r31,r7
	ctx.r25.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// bgt cr6,0x89984830
	if (ctx.cr6.gt) goto loc_89984830;
	// lis r12,-30312
	ctx.r12.s64 = -1986527232;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17680
	ctx.r12.s64 = ctx.r12.s64 + 17680;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899845A8;
	case 1:
		goto loc_899845A8;
	case 2:
		goto loc_899845A8;
	case 3:
		goto loc_89984608;
	case 4:
		goto loc_89984608;
	case 5:
		goto loc_89984608;
	case 6:
		goto loc_89984668;
	case 7:
		goto loc_89984668;
	case 8:
		goto loc_89984668;
	case 9:
		goto loc_89984674;
	case 10:
		goto loc_8998465C;
	case 11:
		goto loc_8998465C;
	case 12:
		goto loc_89984668;
	case 13:
		goto loc_89984668;
	case 14:
		goto loc_8998473C;
	case 15:
		goto loc_89984710;
	case 16:
		goto loc_89984710;
	case 17:
		goto loc_89984830;
	case 18:
		goto loc_89984710;
	case 19:
		goto loc_89984710;
	case 20:
		goto loc_89984710;
	case 21:
		goto loc_89984830;
	case 22:
		goto loc_89984710;
	case 23:
		goto loc_89984830;
	case 24:
		goto loc_89984830;
	case 25:
		goto loc_89984764;
	case 26:
		goto loc_89984764;
	case 27:
		goto loc_899847B8;
	case 28:
		goto loc_89984764;
	case 29:
		goto loc_89984764;
	case 30:
		goto loc_89984818;
	case 31:
		goto loc_89984818;
	case 32:
		goto loc_89984818;
	case 33:
		goto loc_89984818;
	case 34:
		goto loc_89984830;
	case 35:
		goto loc_8998480C;
	case 36:
		goto loc_8998480C;
	case 37:
		goto loc_89984818;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899845A8:
	// addi r10,r29,193
	ctx.r10.s64 = ctx.r29.s64 + 193;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// li r11,-128
	ctx.r11.s64 = -128;
	// addi r9,r29,88
	ctx.r9.s64 = ctx.r29.s64 + 88;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// lbzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r7,r29,94
	ctx.r7.s64 = ctx.r29.s64 + 94;
	// addi r5,r29,96
	ctx.r5.s64 = ctx.r29.s64 + 96;
	// addi r4,r29,92
	ctx.r4.s64 = ctx.r29.s64 + 92;
	// addi r6,r29,72
	ctx.r6.s64 = ctx.r29.s64 + 72;
	// ori r12,r12,32767
	ctx.r12.u64 = ctx.r12.u64 | 32767;
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,-15912
	ctx.r8.s64 = ctx.r8.s64 + -15912;
	// stbx r3,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u8);
	// and r30,r27,r12
	ctx.r30.u64 = ctx.r27.u64 & ctx.r12.u64;
	// sthx r11,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u16);
	// stwx r8,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// stbx r11,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u8);
	// sthx r11,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u16);
	// sthx r11,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u16);
	// stwx r30,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_89984608:
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// addi r10,r29,88
	ctx.r10.s64 = ctx.r29.s64 + 88;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r8,r29,94
	ctx.r8.s64 = ctx.r29.s64 + 94;
	// addi r7,r29,96
	ctx.r7.s64 = ctx.r29.s64 + 96;
	// addi r6,r29,92
	ctx.r6.s64 = ctx.r29.s64 + 92;
	// addi r5,r29,72
	ctx.r5.s64 = ctx.r29.s64 + 72;
	// ori r12,r12,32767
	ctx.r12.u64 = ctx.r12.u64 | 32767;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-15856
	ctx.r4.s64 = ctx.r9.s64 + -15856;
	// and r3,r27,r12
	ctx.r3.u64 = ctx.r27.u64 & ctx.r12.u64;
	// sthx r11,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u16);
	// stwx r4,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// sthx r11,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u16);
	// sthx r11,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u16);
	// stwx r3,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
	// bl 0x8995e188
	ctx.lr = 0x89984650;
	sub_8995E188(ctx, base);
	// bl 0x89936440
	ctx.lr = 0x89984654;
	sub_89936440(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8998465C:
	// rlwinm r11,r27,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89984830
	if (ctx.cr6.eq) goto loc_89984830;
loc_89984668:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x89984820
	goto loc_89984820;
loc_89984674:
	// addi r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 + 12;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r30,-48
	ctx.r30.s64 = -3145728;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// lis r19,16
	ctx.r19.s64 = 1048576;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r20,48
	ctx.r20.s64 = 3145728;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r6,r7,128
	ctx.r6.s64 = ctx.r7.s64 + 128;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// rlwinm r11,r7,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// rlwinm r21,r6,1,22,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
loc_899846A8:
	// lhzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// lhzx r9,r21,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r28.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lwzx r6,r31,r22
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lwzx r10,r31,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// mullw r4,r7,r11
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899d4440
	ctx.lr = 0x899846F0;
	sub_899D4440(ctx, base);
	// add r30,r30,r19
	ctx.r30.u64 = ctx.r30.u64 + ctx.r19.u64;
	// rlwinm r11,r24,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x3FE;
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x899846a8
	if (!ctx.cr6.gt) goto loc_899846A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_89984710:
	// bl 0x8991b9f0
	ctx.lr = 0x89984714;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998473c
	if (ctx.cr6.lt) goto loc_8998473C;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r29,196
	ctx.r10.s64 = ctx.r29.s64 + 196;
	// addi r9,r29,192
	ctx.r9.s64 = ctx.r29.s64 + 192;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// or r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_8998473C:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899d4440
	ctx.lr = 0x89984754;
	sub_899D4440(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_89984764:
	// bl 0x8991b9f0
	ctx.lr = 0x89984768;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89984790
	if (ctx.cr6.lt) goto loc_89984790;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r29,196
	ctx.r10.s64 = ctx.r29.s64 + 196;
	// addi r9,r29,192
	ctx.r9.s64 = ctx.r29.s64 + 192;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// or r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_89984790:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899d4440
	ctx.lr = 0x899847A8;
	sub_899D4440(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899847B8:
	// bl 0x8991b9f0
	ctx.lr = 0x899847BC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899847e4
	if (ctx.cr6.lt) goto loc_899847E4;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r29,196
	ctx.r10.s64 = ctx.r29.s64 + 196;
	// addi r9,r29,192
	ctx.r9.s64 = ctx.r29.s64 + 192;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// or r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_899847E4:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899d4440
	ctx.lr = 0x899847FC;
	sub_899D4440(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8998480C:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x89984820
	goto loc_89984820;
loc_89984818:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
loc_89984820:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899d4c10
	ctx.lr = 0x89984830;
	sub_899D4C10(ctx, base);
loc_89984830:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899859B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r10,r10,158
	ctx.r10.s64 = ctx.r10.s64 + 158;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// ble cr6,0x899859e4
	if (!ctx.cr6.gt) goto loc_899859E4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
loc_899859E4:
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// bge cr6,0x899859fc
	if (!ctx.cr6.lt) goto loc_899859FC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
loc_899859FC:
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// ble cr6,0x89985a14
	if (!ctx.cr6.gt) goto loc_89985A14;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
loc_89985A14:
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// bge cr6,0x89985a2c
	if (!ctx.cr6.lt) goto loc_89985A2C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
loc_89985A2C:
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// ble cr6,0x89985a44
	if (!ctx.cr6.gt) goto loc_89985A44;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
loc_89985A44:
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// bge cr6,0x89985a5c
	if (!ctx.cr6.lt) goto loc_89985A5C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
loc_89985A5C:
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89989918) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89989920;
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
	ctx.lr = 0x89989930;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89989940
	if (!ctx.cr6.eq) goto loc_89989940;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89989940:
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
	ctx.lr = 0x89989990;
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
	ctx.lr = 0x899899B0;
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
	// li r11,115
	ctx.r11.s64 = 115;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// sthx r10,r28,r6
	REX_STORE_U16(ctx.r28.u32 + ctx.r6.u32, ctx.r10.u16);
	// sthx r10,r28,r5
	REX_STORE_U16(ctx.r28.u32 + ctx.r5.u32, ctx.r10.u16);
	// li r3,24
	ctx.r3.s64 = 24;
	// stwx r7,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r7.u32);
	// stbx r11,r28,r9
	REX_STORE_U8(ctx.r28.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r11,r28,r8
	REX_STORE_U8(ctx.r28.u32 + ctx.r8.u32, ctx.r11.u8);
	// bl 0x89934058
	ctx.lr = 0x899899F0;
	sub_89934058(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89989A50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x89989A58;
	__savegprlr_21(ctx, base);
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
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r23,r11,9016
	ctx.r23.s64 = ctx.r11.s64 + 9016;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x89989d1c
	if (ctx.cr6.gt) goto loc_89989D1C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89989ac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89989AC8;
	// bdzf 4*cr6+eq,0x89989aec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89989AEC;
	// bdzf 4*cr6+eq,0x89989c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89989C10;
	// bne cr6,0x89989c3c
	if (!ctx.cr6.eq) goto loc_89989C3C;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,320
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 320, ctx.xer);
	// bge cr6,0x89989d1c
	if (!ctx.cr6.lt) goto loc_89989D1C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// b 0x89989d1c
	goto loc_89989D1C;
loc_89989AC8:
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
	// bne 0x89989d1c
	if (!ctx.cr0.eq) goto loc_89989D1C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// b 0x89989d1c
	goto loc_89989D1C;
loc_89989AEC:
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
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x89989b14
	if (!ctx.cr6.eq) goto loc_89989B14;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
loc_89989B14:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991db50
	ctx.lr = 0x89989B24;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89989df4
	if (ctx.cr6.eq) goto loc_89989DF4;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r28,r11,-15568
	ctx.r28.s64 = ctx.r11.s64 + -15568;
	// extsh r27,r9
	ctx.r27.s64 = ctx.r9.s16;
	// rlwinm r24,r27,1,22,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x3FE;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_89989B54:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r24,r23
	ctx.r10.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r23.u32);
	// addi r8,r28,2
	ctx.r8.s64 = ctx.r28.s64 + 2;
	// lwzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// addi r7,r26,128
	ctx.r7.s64 = ctx.r26.s64 + 128;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// rlwinm r5,r7,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r11,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lhzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// rotlwi r10,r4,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// rotlwi r4,r11,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhzx r21,r5,r23
	ctx.r21.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r23.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// lwzx r5,r31,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// extsh r3,r21
	ctx.r3.s64 = ctx.r21.s16;
	// mullw r4,r10,r6
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mullw r21,r11,r3
	ctx.r21.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// mullw r4,r10,r3
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// srawi r10,r21,8
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 8;
	// srawi r3,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 8;
	// srawi r6,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r3,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r3.u64;
	// li r6,116
	ctx.r6.s64 = 116;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// srawi r11,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 3;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x899a8438
	ctx.lr = 0x89989BE8;
	sub_899A8438(ctx, base);
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x89989b54
	if (ctx.cr6.lt) goto loc_89989B54;
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x89989d1c
	goto loc_89989D1C;
loc_89989C10:
	// addi r8,r30,168
	ctx.r8.s64 = ctx.r30.s64 + 168;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x89989d1c
	if (ctx.cr6.lt) goto loc_89989D1C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// b 0x89989d1c
	goto loc_89989D1C;
loc_89989C3C:
	// addi r8,r30,183
	ctx.r8.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x89989c54
	if (!ctx.cr6.eq) goto loc_89989C54;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
loc_89989C54:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// bl 0x89932b18
	ctx.lr = 0x89989C64;
	sub_89932B18(ctx, base);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r9,r30,186
	ctx.r9.s64 = ctx.r30.s64 + 186;
	// addi r11,r8,25128
	ctx.r11.s64 = ctx.r8.s64 + 25128;
	// addi r28,r30,158
	ctx.r28.s64 = ctx.r30.s64 + 158;
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// lhzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// lwzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r3,r31,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// mulli r9,r11,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwzx r5,r9,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// bl 0x89932c20
	ctx.lr = 0x89989CA8;
	sub_89932C20(ctx, base);
	// subf r8,r3,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r3.u64;
	// clrlwi r11,r8,23
	ctx.r11.u64 = ctx.r8.u32 & 0x1FF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89989ccc
	if (ctx.cr6.eq) goto loc_89989CCC;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// bgt cr6,0x89989cc8
	if (ctx.cr6.gt) goto loc_89989CC8;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
loc_89989CC8:
	// sthx r10,r31,r28
	REX_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u16);
loc_89989CCC:
	// addic. r11,r11,-256
	ctx.xer.ca = ctx.r11.u32 > 255;
	ctx.r11.s64 = ctx.r11.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x89989cd8
	if (!ctx.cr0.lt) goto loc_89989CD8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89989CD8:
	// cmpwi cr6,r11,248
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 248, ctx.xer);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// ble cr6,0x89989d00
	if (!ctx.cr6.gt) goto loc_89989D00;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r9,r11,49152
	ctx.r9.u64 = ctx.r11.u64 | 49152;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x89989d1c
	if (!ctx.cr6.lt) goto loc_89989D1C;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// b 0x89989d18
	goto loc_89989D18;
loc_89989D00:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,49152
	ctx.r9.u64 = ctx.r11.u64 | 49152;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x89989d1c
	if (!ctx.cr6.gt) goto loc_89989D1C;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
loc_89989D18:
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_89989D1C:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// lhzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r29,r30,60
	ctx.r29.s64 = ctx.r30.s64 + 60;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r9,r7,128
	ctx.r9.s64 = ctx.r7.s64 + 128;
	// rlwinm r3,r7,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// rlwinm r9,r9,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r3,r23
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r23.u32);
	// lhzx r9,r9,r23
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r23.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stwx r9,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// stwx r5,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u32);
	// lhzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addic. r11,r11,-160
	ctx.xer.ca = ctx.r11.u32 > 159;
	ctx.r11.s64 = ctx.r11.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r4,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// bge 0x89989da4
	if (!ctx.cr0.lt) goto loc_89989DA4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89989DA4:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x89989dec
	if (ctx.cr6.gt) goto loc_89989DEC;
	// lhzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r11,r10,-512
	ctx.xer.ca = ctx.r10.u32 > 511;
	ctx.r11.s64 = ctx.r10.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x89989dc0
	if (!ctx.cr0.lt) goto loc_89989DC0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89989DC0:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x89989dec
	if (ctx.cr6.gt) goto loc_89989DEC;
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// clrlwi r8,r9,27
	ctx.r8.u64 = ctx.r9.u32 & 0x1F;
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x89989DE4;
	sub_8991B610(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89989DEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_89989DF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998B288) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8998B290;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r9,-30229
	ctx.r9.s64 = -1981087744;
	// addi r10,r11,-15168
	ctx.r10.s64 = ctx.r11.s64 + -15168;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r9,-26800
	ctx.r29.s64 = ctx.r9.s64 + -26800;
	// lbz r11,-15168(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -15168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8998b330
	if (ctx.cr6.eq) goto loc_8998B330;
	// addi r31,r10,-10
	ctx.r31.s64 = ctx.r10.s64 + -10;
loc_8998B2B8:
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r8,19(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 19);
	// lbz r28,18(r31)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 18);
	// addi r9,r29,-1296
	ctx.r9.s64 = ctx.r29.s64 + -1296;
	// add r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r4,11(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 11);
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// lbz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,13(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 13);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// lbz r7,14(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 14);
	// add r26,r10,r9
	ctx.r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,15(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 15);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// lbz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 16);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// lbz r10,17(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 17);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// sth r27,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r27.u16);
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// bl 0x89934b48
	ctx.lr = 0x8998B314;
	sub_89934B48(ctx, base);
	// lbzu r10,10(r31)
	ea = 10 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 10);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8998b2b8
	if (!ctx.cr6.eq) goto loc_8998B2B8;
loc_8998B330:
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// addi r30,r29,-1296
	ctx.r30.s64 = ctx.r29.s64 + -1296;
	// addi r28,r11,-9944
	ctx.r28.s64 = ctx.r11.s64 + -9944;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8998B340:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89935610
	ctx.lr = 0x8998B358;
	sub_89935610(ctx, base);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// addi r11,r28,360
	ctx.r11.s64 = ctx.r28.s64 + 360;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8998b340
	if (ctx.cr6.lt) goto loc_8998B340;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998B930) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x8998B938;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8991b880
	ctx.lr = 0x8998B948;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998bb20
	if (ctx.cr6.eq) goto loc_8998BB20;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30269
	ctx.r8.s64 = -1983709184;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r26,-4592(r10)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lhz r24,26864(r9)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r9.u32 + 26864);
	// addi r25,r10,-4592
	ctx.r25.s64 = ctx.r10.s64 + -4592;
	// extsh r7,r26
	ctx.r7.s64 = ctx.r26.s16;
	// lhz r11,-17120(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + -17120);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// mulli r30,r7,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// stwx r24,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r24.u32);
	// addi r5,r31,162
	ctx.r5.s64 = ctx.r31.s64 + 162;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// lis r8,-16208
	ctx.r8.s64 = -1062207488;
	// addi r23,r31,158
	ctx.r23.s64 = ctx.r31.s64 + 158;
	// ori r7,r8,260
	ctx.r7.u64 = ctx.r8.u64 | 260;
	// sthx r11,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u16);
	// stwx r27,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r27,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r27.u32);
	// sthx r11,r30,r23
	REX_STORE_U16(ctx.r30.u32 + ctx.r23.u32, ctx.r11.u16);
	// bl 0x8991b538
	ctx.lr = 0x8998B9BC;
	sub_8991B538(ctx, base);
	// addi r22,r31,48
	ctx.r22.s64 = ctx.r31.s64 + 48;
	// addi r21,r31,52
	ctx.r21.s64 = ctx.r31.s64 + 52;
	// lis r6,352
	ctx.r6.s64 = 23068672;
	// rlwinm r5,r29,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r6,r30,r22
	REX_STORE_U32(ctx.r30.u32 + ctx.r22.u32, ctx.r6.u32);
	// stwx r5,r30,r21
	REX_STORE_U32(ctx.r30.u32 + ctx.r21.u32, ctx.r5.u32);
	// bl 0x8991c578
	ctx.lr = 0x8998B9DC;
	sub_8991C578(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// addi r20,r31,204
	ctx.r20.s64 = ctx.r31.s64 + 204;
	// addi r19,r31,200
	ctx.r19.s64 = ctx.r31.s64 + 200;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// li r11,115
	ctx.r11.s64 = 115;
	// stwx r10,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r10.u32);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stbx r11,r30,r20
	REX_STORE_U8(ctx.r30.u32 + ctx.r20.u32, ctx.r11.u8);
	// stbx r11,r30,r19
	REX_STORE_U8(ctx.r30.u32 + ctx.r19.u32, ctx.r11.u8);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stwx r27,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r27.u32);
	// addi r29,r10,-15016
	ctx.r29.s64 = ctx.r10.s64 + -15016;
loc_8998BA10:
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// addi r11,r25,2
	ctx.r11.s64 = ctx.r25.s64 + 2;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r18,r28,4,0,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// addi r8,r31,148
	ctx.r8.s64 = ctx.r31.s64 + 148;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// lhzx r17,r10,r11
	ctx.r17.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// lwzx r5,r18,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r29.u32);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// extsh r3,r17
	ctx.r3.s64 = ctx.r17.s16;
	// lwzx r11,r18,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r9.u32);
	// oris r10,r5,49152
	ctx.r10.u64 = ctx.r5.u64 | 3221225472;
	// mulli r16,r3,208
	ctx.r16.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(208));
	// sthx r26,r16,r8
	REX_STORE_U16(ctx.r16.u32 + ctx.r8.u32, ctx.r26.u16);
	// stwx r10,r16,r31
	REX_STORE_U32(ctx.r16.u32 + ctx.r31.u32, ctx.r10.u32);
	// stwx r24,r16,r7
	REX_STORE_U32(ctx.r16.u32 + ctx.r7.u32, ctx.r24.u32);
	// stwx r11,r16,r6
	REX_STORE_U32(ctx.r16.u32 + ctx.r6.u32, ctx.r11.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stwx r27,r16,r4
	REX_STORE_U32(ctx.r16.u32 + ctx.r4.u32, ctx.r27.u32);
	// bl 0x8991b538
	ctx.lr = 0x8998BA68;
	sub_8991B538(ctx, base);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// addi r8,r29,10
	ctx.r8.s64 = ctx.r29.s64 + 10;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r7,r31,158
	ctx.r7.s64 = ctx.r31.s64 + 158;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// lhzx r11,r18,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r9.u32);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// rotlwi r10,r11,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// addi r15,r31,52
	ctx.r15.s64 = ctx.r31.s64 + 52;
	// lhzx r17,r30,r23
	ctx.r17.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r23.u32);
	// lhzx r9,r18,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r8.u32);
	// stwx r10,r16,r6
	REX_STORE_U32(ctx.r16.u32 + ctx.r6.u32, ctx.r10.u32);
	// rotlwi r11,r9,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// sthx r17,r16,r7
	REX_STORE_U16(ctx.r16.u32 + ctx.r7.u32, ctx.r17.u16);
	// lwzx r9,r30,r22
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r11,r16,r4
	REX_STORE_U32(ctx.r16.u32 + ctx.r4.u32, ctx.r11.u32);
	// stwx r8,r16,r5
	REX_STORE_U32(ctx.r16.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwzx r10,r30,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r21.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r7,r16,r15
	REX_STORE_U32(ctx.r16.u32 + ctx.r15.u32, ctx.r7.u32);
	// bl 0x8991c578
	ctx.lr = 0x8998BAC4;
	sub_8991C578(ctx, base);
	// addi r6,r31,207
	ctx.r6.s64 = ctx.r31.s64 + 207;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r4,r31,207
	ctx.r4.s64 = ctx.r31.s64 + 207;
	// addi r3,r31,206
	ctx.r3.s64 = ctx.r31.s64 + 206;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lbzx r9,r18,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r5.u32);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r8,r31,204
	ctx.r8.s64 = ctx.r31.s64 + 204;
	// addi r7,r31,192
	ctx.r7.s64 = ctx.r31.s64 + 192;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// lbzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// stbx r27,r16,r3
	REX_STORE_U8(ctx.r16.u32 + ctx.r3.u32, ctx.r27.u8);
	// stbx r6,r16,r4
	REX_STORE_U8(ctx.r16.u32 + ctx.r4.u32, ctx.r6.u8);
	// lbzx r5,r30,r19
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r19.u32);
	// stbx r5,r16,r10
	REX_STORE_U8(ctx.r16.u32 + ctx.r10.u32, ctx.r5.u8);
	// lbzx r4,r30,r20
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r20.u32);
	// stbx r4,r16,r8
	REX_STORE_U8(ctx.r16.u32 + ctx.r8.u32, ctx.r4.u8);
	// stbx r9,r16,r7
	REX_STORE_U8(ctx.r16.u32 + ctx.r7.u32, ctx.r9.u8);
	// blt cr6,0x8998ba10
	if (ctx.cr6.lt) goto loc_8998BA10;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934058
	ctx.lr = 0x8998BB20;
	sub_89934058(ctx, base);
loc_8998BB20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998C510) {
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
	ctx.lr = 0x8998C528;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8998c540
	if (!ctx.cr6.eq) goto loc_8998C540;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8998C540:
	// lis r11,-30311
	ctx.r11.s64 = -1986461696;
	// addi r3,r11,-15424
	ctx.r3.s64 = ctx.r11.s64 + -15424;
	// bl 0x89915de0
	ctx.lr = 0x8998C54C;
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

DEFINE_REX_FUNC(sub_8998C5F8) {
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
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mulli r4,r10,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r5,r11,12800
	ctx.r5.s64 = ctx.r11.s64 + 12800;
	// add r31,r4,r5
	ctx.r31.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwzx r9,r4,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// rlwinm r8,r9,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8998c6b4
	if (ctx.cr6.eq) goto loc_8998C6B4;
	// bl 0x8991b9f0
	ctx.lr = 0x8998C634;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998c840
	if (ctx.cr6.lt) goto loc_8998C840;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r5,28
	ctx.r10.s64 = ctx.r5.s64 + 28;
	// addi r8,r5,12
	ctx.r8.s64 = ctx.r5.s64 + 12;
	// addi r7,r5,16
	ctx.r7.s64 = ctx.r5.s64 + 16;
	// addi r6,r5,20
	ctx.r6.s64 = ctx.r5.s64 + 20;
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addi r30,r5,36
	ctx.r30.s64 = ctx.r5.s64 + 36;
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r3,52(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwzx r9,r4,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r4,r6
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r4,r30
	REX_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r6.u32);
	// b 0x8998c848
	goto loc_8998C848;
loc_8998C6B4:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addis r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -10485760;
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8998c6e4
	if (!ctx.cr0.lt) goto loc_8998C6E4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8998C6E4:
	// lis r9,192
	ctx.r9.s64 = 12582912;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8998c840
	if (ctx.cr6.gt) goto loc_8998C840;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addis r11,r10,-120
	ctx.r11.s64 = ctx.r10.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8998c70c
	if (!ctx.cr0.lt) goto loc_8998C70C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8998C70C:
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8998c840
	if (ctx.cr6.gt) goto loc_8998C840;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8998c794
	if (ctx.cr6.lt) goto loc_8998C794;
	// beq cr6,0x8998c7a8
	if (ctx.cr6.eq) goto loc_8998C7A8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8998c848
	if (!ctx.cr6.lt) goto loc_8998C848;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 + 12;
	// addi r8,r5,28
	ctx.r8.s64 = ctx.r5.s64 + 28;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r5,16
	ctx.r6.s64 = ctx.r5.s64 + 16;
	// clrlwi r3,r7,28
	ctx.r3.u64 = ctx.r7.u32 & 0xF;
	// addi r7,r5,20
	ctx.r7.s64 = ctx.r5.s64 + 20;
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r3,r5,36
	ctx.r3.s64 = ctx.r5.s64 + 36;
	// lwzx r11,r4,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// addi r9,r5,32
	ctx.r9.s64 = ctx.r5.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r4,r6
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r4,r3
	REX_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r4,r9
	REX_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r3.u32);
	// b 0x8998c848
	goto loc_8998C848;
loc_8998C794:
	// addi r11,r5,48
	ctx.r11.s64 = ctx.r5.s64 + 48;
	// lhzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,320
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 320, ctx.xer);
	// bgt cr6,0x8998c848
	if (ctx.cr6.gt) goto loc_8998C848;
loc_8998C7A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8998c7ec
	if (!ctx.cr6.eq) goto loc_8998C7EC;
	// addi r11,r5,24
	ctx.r11.s64 = ctx.r5.s64 + 24;
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r7,r5,28
	ctx.r7.s64 = ctx.r5.s64 + 28;
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwzx r6,r4,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r3,r4,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stwx r10,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r10.u32);
loc_8998C7EC:
	// addi r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 + 12;
	// addi r10,r5,28
	ctx.r10.s64 = ctx.r5.s64 + 28;
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// addi r7,r5,20
	ctx.r7.s64 = ctx.r5.s64 + 20;
	// addi r6,r5,36
	ctx.r6.s64 = ctx.r5.s64 + 36;
	// lwzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// lwzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
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
	// stwx r10,r4,r8
	REX_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r4,r6
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r7.u32);
	// b 0x8998c848
	goto loc_8998C848;
loc_8998C840:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8998C848:
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

DEFINE_REX_FUNC(sub_8998E610) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30269
	ctx.r5.s64 = -1983709184;
	// addi r9,r6,9656
	ctx.r9.s64 = ctx.r6.s64 + 9656;
	// lwz r11,27852(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 27852);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lbz r10,4946(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 4946);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// addi r3,r9,64
	ctx.r3.s64 = ctx.r9.s64 + 64;
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
	// sth r10,9536(r7)
	REX_STORE_U16(ctx.r7.u32 + 9536, ctx.r10.u16);
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
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,27852(r8)
	REX_STORE_U32(ctx.r8.u32 + 27852, ctx.r11.u32);
	// sth r9,-17120(r5)
	REX_STORE_U16(ctx.r5.u32 + -17120, ctx.r9.u16);
	// lwzx r11,r3,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stw r11,12024(r4)
	REX_STORE_U32(ctx.r4.u32 + 12024, ctx.r11.u32);
	// b 0x8998e390
	sub_8998E390(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998E838) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x8998E840;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// addi r24,r31,8
	ctx.r24.s64 = ctx.r31.s64 + 8;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwzx r11,r30,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x8998ec00
	if (ctx.cr6.gt) goto loc_8998EC00;
	// beq cr6,0x8998eae4
	if (ctx.cr6.eq) goto loc_8998EAE4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8998ea58
	if (ctx.cr6.eq) goto loc_8998EA58;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// bne cr6,0x8998ef14
	if (!ctx.cr6.eq) goto loc_8998EF14;
	// bl 0x8991b9f0
	ctx.lr = 0x8998E880;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998ef28
	if (ctx.cr6.lt) goto loc_8998EF28;
	// addi r10,r31,158
	ctx.r10.s64 = ctx.r31.s64 + 158;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// addi r8,r31,164
	ctx.r8.s64 = ctx.r31.s64 + 164;
	// addi r7,r9,9016
	ctx.r7.s64 = ctx.r9.s64 + 9016;
	// mulli r4,r11,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lhzx r3,r30,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r9,r30,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// rlwinm r5,r10,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r6,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// lhzx r5,r5,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// lhzx r3,r3,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lwzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lwzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// mullw r27,r5,r11
	ctx.r27.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// lwzx r5,r30,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// addi r3,r31,206
	ctx.r3.s64 = ctx.r31.s64 + 206;
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r10,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// stwx r11,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r27,r31,200
	ctx.r27.s64 = ctx.r31.s64 + 200;
	// lwzx r11,r4,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r7,r30,r3
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// addi r29,r31,188
	ctx.r29.s64 = ctx.r31.s64 + 188;
	// stwx r5,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// addi r6,r31,150
	ctx.r6.s64 = ctx.r31.s64 + 150;
	// lbzx r11,r4,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r27.u32);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r10,r30,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// lhzx r28,r30,r6
	ctx.r28.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r6.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stbx r5,r30,r3
	REX_STORE_U8(ctx.r30.u32 + ctx.r3.u32, ctx.r5.u8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8998e9e4
	if (ctx.cr6.lt) goto loc_8998E9E4;
	// beq cr6,0x8998e990
	if (ctx.cr6.eq) goto loc_8998E990;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8998ea48
	if (!ctx.cr6.lt) goto loc_8998EA48;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addic. r11,r11,-32768
	ctx.xer.ca = ctx.r11.u32 > 32767;
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// bne 0x8998ea48
	if (!ctx.cr0.eq) goto loc_8998EA48;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x89932a38
	ctx.lr = 0x8998E978;
	sub_89932A38(ctx, base);
loc_8998E978:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stbx r11,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u8);
	// bl 0x8991b7f8
	ctx.lr = 0x8998E988;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8998E990:
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r7,r31,192
	ctx.r7.s64 = ctx.r31.s64 + 192;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8998ea48
	if (!ctx.cr6.eq) goto loc_8998EA48;
	// addi r7,r31,193
	ctx.r7.s64 = ctx.r31.s64 + 193;
	// lbzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8998e978
	if (ctx.cr6.eq) goto loc_8998E978;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addis r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -524288;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stwx r10,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stbx r9,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r9.u8);
	// bl 0x8991b7f8
	ctx.lr = 0x8998E9DC;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8998E9E4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x89932b18
	ctx.lr = 0x8998E9EC;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x89932d30
	ctx.lr = 0x8998E9F8;
	sub_89932D30(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8991db50
	ctx.lr = 0x8998EA08;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998ea48
	if (ctx.cr6.eq) goto loc_8998EA48;
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r31,193
	ctx.r9.s64 = ctx.r31.s64 + 193;
	// ori r6,r7,3
	ctx.r6.u64 = ctx.r7.u64 | 3;
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lbzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// rlwinm r10,r3,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stbx r6,r30,r29
	REX_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r6.u8);
loc_8998EA48:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x8998EA50;
	sub_8991B7F8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8998EA58:
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r7,r9,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// rlwinm r8,r8,0,31,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8998eaa4
	if (ctx.cr6.eq) goto loc_8998EAA4;
	// bl 0x8991c8b8
	ctx.lr = 0x8998EA94;
	sub_8991C8B8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8991c718
	ctx.lr = 0x8998EA9C;
	sub_8991C718(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8998EAA4:
	// bl 0x8991d6a8
	ctx.lr = 0x8998EAA8;
	sub_8991D6A8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8998f0e8
	if (ctx.cr6.eq) goto loc_8998F0E8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8998e678
	ctx.lr = 0x8998EABC;
	sub_8998E678(ctx, base);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// li r3,3
	ctx.r3.s64 = 3;
	// lbzx r6,r30,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r5,r30,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r4,r30,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x8992e330
	ctx.lr = 0x8998EADC;
	sub_8992E330(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8998EAE4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8998EAEC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998ef28
	if (ctx.cr6.lt) goto loc_8998EF28;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r5,r30,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r4,r31,158
	ctx.r4.s64 = ctx.r31.s64 + 158;
	// lis r3,-30320
	ctx.r3.s64 = -1987051520;
	// addi r9,r31,158
	ctx.r9.s64 = ctx.r31.s64 + 158;
	// addi r6,r3,9016
	ctx.r6.s64 = ctx.r3.s64 + 9016;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// lhzx r7,r11,r4
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// rlwinm r29,r7,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// lwzx r3,r30,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// sthx r7,r30,r9
	REX_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u16);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// rlwinm r28,r10,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lwzx r9,r30,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// srawi r10,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 4;
	// lhzx r4,r29,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r6.u32);
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhzx r6,r28,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r6.u32);
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// mullw r28,r9,r4
	ctx.r28.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// extsh r27,r6
	ctx.r27.s64 = ctx.r6.s16;
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r28,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 8;
	// mullw r27,r9,r27
	ctx.r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// subf r9,r28,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r28.u64;
	// rlwinm r5,r5,0,12,9
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// mulli r10,r9,224
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(224));
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi r10,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 8;
	// stwx r6,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r6.u32);
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r6,r11,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r9,r30,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// addi r7,r31,200
	ctx.r7.s64 = ctx.r31.s64 + 200;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stwx r5,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u32);
	// stwx r6,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r6.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r6,r10,0,10,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300000;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r5,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// subfc r10,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// eqv r9,r9,r11
	ctx.r9.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// stbx r4,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r4.u8);
	// bl 0x8991b770
	ctx.lr = 0x8998EBF8;
	sub_8991B770(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8998EC00:
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// blt cr6,0x8998ef14
	if (ctx.cr6.lt) goto loc_8998EF14;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// ble cr6,0x8998ed30
	if (!ctx.cr6.gt) goto loc_8998ED30;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x8998ef14
	if (!ctx.cr6.eq) goto loc_8998EF14;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8998EC20;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998ef28
	if (ctx.cr6.lt) goto loc_8998EF28;
	// mulli r5,r11,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r4,r31,158
	ctx.r4.s64 = ctx.r31.s64 + 158;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// lis r3,-30320
	ctx.r3.s64 = -1987051520;
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// lhzx r6,r5,r4
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r7,r3,9016
	ctx.r7.s64 = ctx.r3.s64 + 9016;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwzx r8,r30,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r6,r6,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r29,r11,128
	ctx.r29.s64 = ctx.r11.s64 + 128;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lwzx r9,r5,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// rlwinm r4,r29,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r29,r8,1
	ctx.r29.s64 = ctx.r8.s64 + 1;
	// lhzx r8,r6,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,206
	ctx.r6.s64 = ctx.r31.s64 + 206;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhzx r7,r4,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// mullw r27,r8,r11
	ctx.r27.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// addi r26,r31,200
	ctx.r26.s64 = ctx.r31.s64 + 200;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// addi r25,r31,200
	ctx.r25.s64 = ctx.r31.s64 + 200;
	// mulli r8,r11,224
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(224));
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// clrlwi r11,r29,27
	ctx.r11.u64 = ctx.r29.u32 & 0x1F;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r8,r30,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// srawi r7,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r27.s32 >> 8;
	// addis r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 524288;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwzx r9,r5,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwzx r7,r30,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// stwx r9,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r9,r5,r26
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r26.u32);
	// stwx r11,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stbx r5,r30,r25
	REX_STORE_U8(ctx.r30.u32 + ctx.r25.u32, ctx.r5.u8);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// lwzx r7,r6,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r9,r31,36
	ctx.r9.s64 = ctx.r31.s64 + 36;
	// stwx r7,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r7.u32);
	// addi r8,r31,32
	ctx.r8.s64 = ctx.r31.s64 + 32;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8998ED30:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8998ED38;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8998ef28
	if (ctx.cr6.lt) goto loc_8998EF28;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r30,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r7,r31,158
	ctx.r7.s64 = ctx.r31.s64 + 158;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r27,r31,158
	ctx.r27.s64 = ctx.r31.s64 + 158;
	// addi r29,r10,9016
	ctx.r29.s64 = ctx.r10.s64 + 9016;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// lhzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r23,r8,0,12,9
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// lwzx r10,r30,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// sthx r5,r30,r27
	REX_STORE_U16(ctx.r30.u32 + ctx.r27.u32, ctx.r5.u16);
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// rlwinm r5,r3,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// lhzx r4,r4,r29
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// addi r25,r31,52
	ctx.r25.s64 = ctx.r31.s64 + 52;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// lhzx r8,r5,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r29.u32);
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// mullw r4,r3,r10
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// addi r26,r31,200
	ctx.r26.s64 = ctx.r31.s64 + 200;
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// srawi r8,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mulli r10,r8,224
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(224));
	// srawi r8,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r8,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r8.u32);
	// lwzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r23,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r23.u32);
	// lwzx r6,r30,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stwx r7,r30,r25
	REX_STORE_U32(ctx.r30.u32 + ctx.r25.u32, ctx.r7.u32);
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r4,0,10,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x300000;
	// or r8,r10,r23
	ctx.r8.u64 = ctx.r10.u64 | ctx.r23.u64;
	// stwx r8,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbzx r7,r11,r5
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subfc r4,r6,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r5.u64 - ctx.r6.u64;
	// eqv r11,r6,r5
	ctx.r11.u64 = ~(ctx.r6.u64 ^ ctx.r5.u64);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stbx r7,r30,r26
	REX_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r7.u8);
	// bl 0x8991b770
	ctx.lr = 0x8998EE20;
	sub_8991B770(ctx, base);
	// lwzx r5,r30,r24
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// cmplwi cr6,r5,36
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 36, ctx.xer);
	// bne cr6,0x8998f0e8
	if (!ctx.cr6.eq) goto loc_8998F0E8;
	// addi r11,r31,150
	ctx.r11.s64 = ctx.r31.s64 + 150;
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// addi r23,r31,192
	ctx.r23.s64 = ctx.r31.s64 + 192;
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lbzx r7,r30,r23
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// mulli r24,r8,208
	ctx.r24.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r24,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r9.u32);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998f0e8
	if (ctx.cr6.eq) goto loc_8998F0E8;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stbx r11,r24,r9
	REX_STORE_U8(ctx.r24.u32 + ctx.r9.u32, ctx.r11.u8);
	// lwzx r8,r30,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// lwzx r10,r30,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// lbzx r5,r30,r26
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// lhzx r27,r30,r27
	ctx.r27.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r27.u32);
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// rlwinm r7,r27,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x3FE;
	// rlwinm r6,r9,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r7,r29
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// lhzx r3,r6,r29
	ctx.r3.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// rlwinm r7,r11,15,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// mulli r6,r9,28672
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(28672));
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x8998EEBC;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998f0e8
	if (ctx.cr6.eq) goto loc_8998F0E8;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x8998EED0;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8998f0e8
	if (!ctx.cr6.eq) goto loc_8998F0E8;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x899cda00
	ctx.lr = 0x8998EEEC;
	sub_899CDA00(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8998f0e8
	if (ctx.cr6.eq) goto loc_8998F0E8;
	// addi r11,r31,193
	ctx.r11.s64 = ctx.r31.s64 + 193;
	// lbzx r9,r30,r23
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// lbzx r7,r24,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// or r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stbx r6,r24,r11
	REX_STORE_U8(ctx.r24.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8998EF14:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8998EF1C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8998ef38
	if (!ctx.cr6.lt) goto loc_8998EF38;
loc_8998EF28:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8998e678
	ctx.lr = 0x8998EF30;
	sub_8998E678(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8998EF38:
	// mulli r29,r11,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r30,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r22,r31,48
	ctx.r22.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// lwzx r11,r29,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// addi r23,r31,52
	ctx.r23.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r30,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// rlwinm r4,r9,0,12,9
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// addi r3,r31,206
	ctx.r3.s64 = ctx.r31.s64 + 206;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r30,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r9,r31,200
	ctx.r9.s64 = ctx.r31.s64 + 200;
	// stwx r11,r30,r22
	REX_STORE_U32(ctx.r30.u32 + ctx.r22.u32, ctx.r11.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// lwzx r11,r29,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// addi r25,r31,200
	ctx.r25.s64 = ctx.r31.s64 + 200;
	// stwx r8,r30,r23
	REX_STORE_U32(ctx.r30.u32 + ctx.r23.u32, ctx.r8.u32);
	// lwzx r7,r29,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// rlwinm r6,r7,0,10,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x300000;
	// or r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 | ctx.r4.u64;
	// lbzx r10,r30,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// lwzx r4,r30,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stwx r5,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// stbx r3,r30,r25
	REX_STORE_U8(ctx.r30.u32 + ctx.r25.u32, ctx.r3.u8);
	// beq cr6,0x8998f0e8
	if (ctx.cr6.eq) goto loc_8998F0E8;
	// addi r21,r31,158
	ctx.r21.s64 = ctx.r31.s64 + 158;
	// addi r27,r31,196
	ctx.r27.s64 = ctx.r31.s64 + 196;
	// addi r26,r31,197
	ctx.r26.s64 = ctx.r31.s64 + 197;
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// lhzx r9,r29,r21
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r21.u32);
	// lbzx r6,r30,r27
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lbzx r8,r30,r26
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// addi r5,r11,512
	ctx.r5.s64 = ctx.r11.s64 + 512;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// srawi r3,r5,10
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 10;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r24
	REX_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r11.u32);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lhzx r6,r29,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r10.u32);
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// subf r8,r4,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r4.u64;
	// stwx r5,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r5.u32);
	// subf r4,r7,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r7.u64;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r11,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// subfe r9,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8998f0e8
	if (ctx.cr6.eq) goto loc_8998F0E8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8991b610
	ctx.lr = 0x8998F034;
	sub_8991B610(ctx, base);
	// lwzx r10,r30,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// lwzx r11,r30,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r30,r26
	REX_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r10.u8);
	// stbx r11,r30,r27
	REX_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u8);
	// bne cr6,0x8998f0e8
	if (!ctx.cr6.eq) goto loc_8998F0E8;
	// addi r11,r31,168
	ctx.r11.s64 = ctx.r31.s64 + 168;
	// lhzx r10,r29,r21
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r21.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// srawi r9,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
	// lwzx r8,r29,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8998f078
	if (!ctx.cr6.gt) goto loc_8998F078;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
loc_8998F078:
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r8,r9,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lwzx r4,r30,r23
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// addi r6,r11,9016
	ctx.r6.s64 = ctx.r11.s64 + 9016;
	// lwzx r10,r30,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lbzx r7,r30,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r25.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// ori r29,r5,39321
	ctx.r29.u64 = ctx.r5.u64 | 39321;
	// lhzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// rlwinm r28,r11,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// addi r31,r31,207
	ctx.r31.s64 = ctx.r31.s64 + 207;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r28,r28,r6
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r6.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r6,r30,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// rlwinm r5,r5,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x899d7480
	ctx.lr = 0x8998F0E8;
	sub_899D7480(ctx, base);
loc_8998F0E8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899923B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x899923B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// lwzx r26,r30,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r25,r31,48
	ctx.r25.s64 = ctx.r31.s64 + 48;
	// addi r24,r31,52
	ctx.r24.s64 = ctx.r31.s64 + 52;
	// addi r23,r31,200
	ctx.r23.s64 = ctx.r31.s64 + 200;
	// addi r22,r31,207
	ctx.r22.s64 = ctx.r31.s64 + 207;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwzx r29,r30,r25
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// lwzx r28,r30,r24
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,69
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 69, ctx.xer);
	// lbzx r5,r30,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// lbzx r27,r30,r22
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r22.u32);
	// bgt cr6,0x899926e0
	if (ctx.cr6.gt) goto loc_899926E0;
	// lis r12,-30311
	ctx.r12.s64 = -1986461696;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9244
	ctx.r12.s64 = ctx.r12.s64 + 9244;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_89992534;
	case 1:
		goto loc_89992534;
	case 2:
		goto loc_899926E0;
	case 3:
		goto loc_899926E0;
	case 4:
		goto loc_899926E0;
	case 5:
		goto loc_899926E0;
	case 6:
		goto loc_899926E0;
	case 7:
		goto loc_899926E0;
	case 8:
		goto loc_899926E0;
	case 9:
		goto loc_899926E0;
	case 10:
		goto loc_899926E0;
	case 11:
		goto loc_899926E0;
	case 12:
		goto loc_899926E0;
	case 13:
		goto loc_899926E0;
	case 14:
		goto loc_899926E0;
	case 15:
		goto loc_899926E0;
	case 16:
		goto loc_899926E0;
	case 17:
		goto loc_899926E0;
	case 18:
		goto loc_899926E0;
	case 19:
		goto loc_899926E0;
	case 20:
		goto loc_899926E0;
	case 21:
		goto loc_899926E0;
	case 22:
		goto loc_899926E0;
	case 23:
		goto loc_899926E0;
	case 24:
		goto loc_899926E0;
	case 25:
		goto loc_899926E0;
	case 26:
		goto loc_899926E0;
	case 27:
		goto loc_899926E0;
	case 28:
		goto loc_899926E0;
	case 29:
		goto loc_899926E0;
	case 30:
		goto loc_899926E0;
	case 31:
		goto loc_899926E0;
	case 32:
		goto loc_899926E0;
	case 33:
		goto loc_899926E0;
	case 34:
		goto loc_89992640;
	case 35:
		goto loc_899925F0;
	case 36:
		goto loc_899925F0;
	case 37:
		goto loc_89992618;
	case 38:
		goto loc_89992544;
	case 39:
		goto loc_89992544;
	case 40:
		goto loc_89992544;
	case 41:
		goto loc_89992544;
	case 42:
		goto loc_89992544;
	case 43:
		goto loc_89992544;
	case 44:
		goto loc_89992668;
	case 45:
		goto loc_89992690;
	case 46:
		goto loc_89992668;
	case 47:
		goto loc_89992668;
	case 48:
		goto loc_89992668;
	case 49:
		goto loc_89992668;
	case 50:
		goto loc_89992668;
	case 51:
		goto loc_89992690;
	case 52:
		goto loc_89992668;
	case 53:
		goto loc_89992668;
	case 54:
		goto loc_89992690;
	case 55:
		goto loc_89992668;
	case 56:
		goto loc_89992668;
	case 57:
		goto loc_89992668;
	case 58:
		goto loc_89992690;
	case 59:
		goto loc_89992668;
	case 60:
		goto loc_89992668;
	case 61:
		goto loc_89992668;
	case 62:
		goto loc_89992668;
	case 63:
		goto loc_89992690;
	case 64:
		goto loc_89992668;
	case 65:
		goto loc_89992668;
	case 66:
		goto loc_89992668;
	case 67:
		goto loc_89992668;
	case 68:
		goto loc_89992690;
	case 69:
		goto loc_89992668;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89992534:
	// bl 0x8991c100
	ctx.lr = 0x89992538;
	sub_8991C100(ctx, base);
	// stwx r21,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89992544:
	// bl 0x8991b9f0
	ctx.lr = 0x89992548;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89992720
	if (ctx.cr6.lt) goto loc_89992720;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// lwzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// oris r4,r7,48
	ctx.r4.u64 = ctx.r7.u64 | 3145728;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// stwx r4,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r4.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899925f0
	if (ctx.cr6.lt) goto loc_899925F0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// beq cr6,0x899925dc
	if (ctx.cr6.eq) goto loc_899925DC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x899925c8
	if (ctx.cr6.lt) goto loc_899925C8;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x899d4440
	ctx.lr = 0x899925BC;
	sub_899D4440(ctx, base);
	// stwx r21,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899925C8:
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x899d4fb0
	ctx.lr = 0x899925D0;
	sub_899D4FB0(ctx, base);
	// stwx r21,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899925DC:
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x899d4e08
	ctx.lr = 0x899925E4;
	sub_899D4E08(ctx, base);
	// stwx r21,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899925F0:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x899d4c10
	ctx.lr = 0x8999260C;
	sub_899D4C10(ctx, base);
	// stwx r21,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89992618:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x899d4c10
	ctx.lr = 0x89992634;
	sub_899D4C10(ctx, base);
	// stwx r21,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89992640:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x899d4c10
	ctx.lr = 0x8999265C;
	sub_899D4C10(ctx, base);
	// stwx r21,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89992668:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x899d4c10
	ctx.lr = 0x89992684;
	sub_899D4C10(ctx, base);
	// stwx r21,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89992690:
	// bl 0x8991b9f0
	ctx.lr = 0x89992694;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899926b4
	if (ctx.cr6.lt) goto loc_899926B4;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
loc_899926B4:
	// li r4,12
	ctx.r4.s64 = 12;
	// lbzx r8,r30,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// lbzx r7,r30,r22
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r22.u32);
	// lwzx r6,r30,r24
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// lwzx r5,r30,r25
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x899d4c10
	ctx.lr = 0x899926D0;
	sub_899D4C10(ctx, base);
	// stwx r21,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r21.u32);
	// stwx r21,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899926E0:
	// bl 0x8991b9f0
	ctx.lr = 0x899926E4;
	sub_8991B9F0(ctx, base);
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bge cr6,0x8999272c
	if (!ctx.cr6.lt) goto loc_8999272C;
	// bl 0x899d4c10
	ctx.lr = 0x8999270C;
	sub_899D4C10(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x899d8e20
	ctx.lr = 0x89992720;
	sub_899D8E20(ctx, base);
loc_89992720:
	// stwx r21,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r21.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8999272C:
	// bl 0x899d4440
	ctx.lr = 0x89992730;
	sub_899D4440(ctx, base);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// li r5,4
	ctx.r5.s64 = 4;
	// stwx r5,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r5.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// mulli r10,r25,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(208));
	// addi r9,r31,196
	ctx.r9.s64 = ctx.r31.s64 + 196;
	// addi r29,r31,192
	ctx.r29.s64 = ctx.r31.s64 + 192;
	// addi r8,r31,197
	ctx.r8.s64 = ctx.r31.s64 + 197;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r28,r30,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// lwz r7,48(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stwx r7,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r7.u32);
	// ori r7,r28,16384
	ctx.r7.u64 = ctx.r28.u64 | 16384;
	// lwz r6,52(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stwx r6,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwz r6,52(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stwx r6,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwz r4,56(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// stwx r4,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r4.u32);
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lbzx r5,r30,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// lbzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stbx r3,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r3.u8);
	// stbx r4,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89995D18) {
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
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r31,r11,-14256
	ctx.r31.s64 = ctx.r11.s64 + -14256;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934860
	ctx.lr = 0x89995D60;
	sub_89934860(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,192
	ctx.r10.s64 = 192;
	// sth r7,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899352b8
	ctx.lr = 0x89995D94;
	sub_899352B8(ctx, base);
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r10,106(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lis r6,-30304
	ctx.r6.s64 = -1986002944;
	// lhz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// lis r4,-30233
	ctx.r4.s64 = -1981349888;
	// lhz r8,110(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// addi r6,r6,-16716
	ctx.r6.s64 = ctx.r6.s64 + -16716;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r4,21220
	ctx.r4.s64 = ctx.r4.s64 + 21220;
	// sth r11,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r10,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r10.u16);
	// li r3,4
	ctx.r3.s64 = 4;
	// sth r9,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r9.u16);
	// sth r8,14(r31)
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r8.u16);
	// sth r11,26(r31)
	REX_STORE_U16(ctx.r31.u32 + 26, ctx.r11.u16);
	// sth r10,28(r31)
	REX_STORE_U16(ctx.r31.u32 + 28, ctx.r10.u16);
	// sth r9,30(r31)
	REX_STORE_U16(ctx.r31.u32 + 30, ctx.r9.u16);
	// sth r8,32(r31)
	REX_STORE_U16(ctx.r31.u32 + 32, ctx.r8.u16);
	// sth r11,44(r31)
	REX_STORE_U16(ctx.r31.u32 + 44, ctx.r11.u16);
	// sth r10,46(r31)
	REX_STORE_U16(ctx.r31.u32 + 46, ctx.r10.u16);
	// sth r9,48(r31)
	REX_STORE_U16(ctx.r31.u32 + 48, ctx.r9.u16);
	// sth r8,50(r31)
	REX_STORE_U16(ctx.r31.u32 + 50, ctx.r8.u16);
	// sth r11,62(r31)
	REX_STORE_U16(ctx.r31.u32 + 62, ctx.r11.u16);
	// sth r10,64(r31)
	REX_STORE_U16(ctx.r31.u32 + 64, ctx.r10.u16);
	// sth r9,66(r31)
	REX_STORE_U16(ctx.r31.u32 + 66, ctx.r9.u16);
	// sth r8,68(r31)
	REX_STORE_U16(ctx.r31.u32 + 68, ctx.r8.u16);
	// bl 0x89935610
	ctx.lr = 0x89995E04;
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

DEFINE_REX_FUNC(sub_89996018) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89996020;
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89996098
	if (ctx.cr6.lt) goto loc_89996098;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x899960a0
	if (!ctx.cr6.lt) goto loc_899960A0;
	// bl 0x899c38c8
	ctx.lr = 0x89996054;
	sub_899C38C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8999605C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x89996078
	if (!ctx.cr6.lt) goto loc_89996078;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89996078:
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// oris r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 3145728;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r8,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89996098:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991c048
	ctx.lr = 0x899960A0;
	sub_8991C048(ctx, base);
loc_899960A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89996348) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x89996350;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lwz r11,27852(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 27852);
	// lhz r28,26864(r9)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r9.u32 + 26864);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,27852(r10)
	REX_STORE_U32(ctx.r10.u32 + 27852, ctx.r11.u32);
	// sth r29,9536(r31)
	REX_STORE_U16(ctx.r31.u32 + 9536, ctx.r29.u16);
	// bl 0x89934058
	ctx.lr = 0x89996380;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89996528
	if (ctx.cr6.eq) goto loc_89996528;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8991b880
	ctx.lr = 0x89996390;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89996528
	if (ctx.cr6.eq) goto loc_89996528;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x899963dc
	if (ctx.cr6.lt) goto loc_899963DC;
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
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r5,17,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0xFFFF;
	// sth r29,9536(r31)
	REX_STORE_U16(ctx.r31.u32 + 9536, ctx.r29.u16);
loc_899963DC:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r31,r10,12800
	ctx.r31.s64 = ctx.r10.s64 + 12800;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r3,-4592(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mulli r27,r6,208
	ctx.r27.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// stwx r30,r27,r7
	REX_STORE_U32(ctx.r27.u32 + ctx.r7.u32, ctx.r30.u32);
	// stwx r30,r27,r5
	REX_STORE_U32(ctx.r27.u32 + ctx.r5.u32, ctx.r30.u32);
	// ori r4,r9,276
	ctx.r4.u64 = ctx.r9.u64 | 276;
	// clrlwi r28,r28,16
	ctx.r28.u64 = ctx.r28.u32 & 0xFFFF;
	// stwx r4,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r4.u32);
	// addi r11,r11,-4592
	ctx.r11.s64 = ctx.r11.s64 + -4592;
	// stwx r28,r27,r8
	REX_STORE_U32(ctx.r27.u32 + ctx.r8.u32, ctx.r28.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lhz r25,2(r11)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// bl 0x8991b538
	ctx.lr = 0x89996430;
	sub_8991B538(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991c578
	ctx.lr = 0x89996438;
	sub_8991C578(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r11,4946(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 4946);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8991c678
	ctx.lr = 0x89996450;
	sub_8991C678(ctx, base);
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// rlwinm r24,r29,2,14,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FFFC;
	// addi r29,r9,-12584
	ctx.r29.s64 = ctx.r9.s64 + -12584;
	// extsh r8,r25
	ctx.r8.s64 = ctx.r25.s16;
	// addi r7,r31,148
	ctx.r7.s64 = ctx.r31.s64 + 148;
	// mulli r23,r8,208
	ctx.r23.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r24,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r29.u32);
	// sthx r26,r23,r7
	REX_STORE_U16(ctx.r23.u32 + ctx.r7.u32, ctx.r26.u16);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lis r10,-16336
	ctx.r10.s64 = -1070596096;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// ori r8,r10,276
	ctx.r8.u64 = ctx.r10.u64 | 276;
	// stwx r28,r23,r5
	REX_STORE_U32(ctx.r23.u32 + ctx.r5.u32, ctx.r28.u32);
	// stwx r9,r23,r4
	REX_STORE_U32(ctx.r23.u32 + ctx.r4.u32, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r8,r23,r31
	REX_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r8.u32);
	// stwx r30,r23,r11
	REX_STORE_U32(ctx.r23.u32 + ctx.r11.u32, ctx.r30.u32);
	// bl 0x8991b538
	ctx.lr = 0x899964A0;
	sub_8991B538(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991c578
	ctx.lr = 0x899964A8;
	sub_8991C578(ctx, base);
	// addi r7,r29,2
	ctx.r7.s64 = ctx.r29.s64 + 2;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// lhzx r11,r24,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r7.u32);
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// addi r7,r31,207
	ctx.r7.s64 = ctx.r31.s64 + 207;
	// stwx r11,r23,r6
	REX_STORE_U32(ctx.r23.u32 + ctx.r6.u32, ctx.r11.u32);
	// addi r6,r31,207
	ctx.r6.s64 = ctx.r31.s64 + 207;
	// lwzx r10,r27,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,206
	ctx.r11.s64 = ctx.r31.s64 + 206;
	// stwx r5,r23,r4
	REX_STORE_U32(ctx.r23.u32 + ctx.r4.u32, ctx.r5.u32);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// stwx r30,r23,r3
	REX_STORE_U32(ctx.r23.u32 + ctx.r3.u32, ctx.r30.u32);
	// lwzx r9,r27,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r9,r23,r8
	REX_STORE_U32(ctx.r23.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// lbzx r3,r27,r7
	ctx.r3.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r7.u32);
	// addi r9,r31,204
	ctx.r9.s64 = ctx.r31.s64 + 204;
	// stbx r3,r23,r6
	REX_STORE_U8(ctx.r23.u32 + ctx.r6.u32, ctx.r3.u8);
	// addi r7,r31,204
	ctx.r7.s64 = ctx.r31.s64 + 204;
	// stbx r5,r23,r11
	REX_STORE_U8(ctx.r23.u32 + ctx.r11.u32, ctx.r5.u8);
	// lbzx r11,r27,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r8,r23,r4
	REX_STORE_U8(ctx.r23.u32 + ctx.r4.u32, ctx.r8.u8);
	// lbzx r5,r27,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r9.u32);
	// stbx r5,r23,r7
	REX_STORE_U8(ctx.r23.u32 + ctx.r7.u32, ctx.r5.u8);
loc_89996528:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89996C78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x89996C80;
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
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89996d78
	if (ctx.cr6.lt) goto loc_89996D78;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x89997058
	if (!ctx.cr6.lt) goto loc_89997058;
	// bl 0x8991b9f0
	ctx.lr = 0x89996CB4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x89996cd4
	if (!ctx.cr6.lt) goto loc_89996CD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89996ba0
	ctx.lr = 0x89996CCC;
	sub_89996BA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_89996CD4:
	// mulli r7,r11,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r6,r30,206
	ctx.r6.s64 = ctx.r30.s64 + 206;
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// addi r27,r30,200
	ctx.r27.s64 = ctx.r30.s64 + 200;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r31,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwzx r9,r7,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r8,r31,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// lbzx r10,r7,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stbx r9,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u8);
	// beq cr6,0x89996d68
	if (ctx.cr6.eq) goto loc_89996D68;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x89996d58
	if (ctx.cr6.eq) goto loc_89996D58;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x89997058
	if (!ctx.cr6.eq) goto loc_89997058;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899c33d0
	ctx.lr = 0x89996D50;
	sub_899C33D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_89996D58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899c34e8
	ctx.lr = 0x89996D60;
	sub_899C34E8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_89996D68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899c36c0
	ctx.lr = 0x89996D70;
	sub_899C36C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_89996D78:
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89996e84
	if (ctx.cr6.eq) goto loc_89996E84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c8b8
	ctx.lr = 0x89996D90;
	sub_8991C8B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c718
	ctx.lr = 0x89996D98;
	sub_8991C718(ctx, base);
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
	// blt cr6,0x89996e18
	if (ctx.cr6.lt) goto loc_89996E18;
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
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
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
loc_89996E18:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,10,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89997058
	if (ctx.cr6.eq) goto loc_89997058;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89996E38;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89997058
	if (ctx.cr6.eq) goto loc_89997058;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lis r5,-30296
	ctx.r5.s64 = -1985478656;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r8,r5,-27016
	ctx.r8.s64 = ctx.r5.s64 + -27016;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lwzx r5,r31,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// addis r4,r4,30
	ctx.r4.s64 = ctx.r4.s64 + 1966080;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// bl 0x899cba78
	ctx.lr = 0x89996E7C;
	sub_899CBA78(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_89996E84:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x89997058
	if (!ctx.cr6.eq) goto loc_89997058;
	// addi r10,r30,184
	ctx.r10.s64 = ctx.r30.s64 + 184;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// blt cr6,0x89996f30
	if (ctx.cr6.lt) goto loc_89996F30;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x89997058
	if (!ctx.cr6.eq) goto loc_89997058;
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r28,r30,207
	ctx.r28.s64 = ctx.r30.s64 + 207;
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// li r4,15
	ctx.r4.s64 = 15;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r6,r31,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x899d4440
	ctx.lr = 0x89996EF0;
	sub_899D4440(ctx, base);
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// lbzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addis r27,r10,-6
	ctx.r27.s64 = ctx.r10.s64 + -393216;
	// lwzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x899d8e20
	ctx.lr = 0x89996F0C;
	sub_899D8E20(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// lbzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x8992e698
	ctx.lr = 0x89996F20;
	sub_8992E698(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_89996F30:
	// addi r29,r30,158
	ctx.r29.s64 = ctx.r30.s64 + 158;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// addi r22,r11,9016
	ctx.r22.s64 = ctx.r11.s64 + 9016;
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// lhzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// li r23,5
	ctx.r23.s64 = 5;
	// addi r27,r30,200
	ctx.r27.s64 = ctx.r30.s64 + 200;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// lwzx r9,r31,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r28,r30,207
	ctx.r28.s64 = ctx.r30.s64 + 207;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lwzx r5,r31,r25
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lis r24,8
	ctx.r24.s64 = 524288;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// sthx r7,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u16);
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lbzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lbzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// rlwinm r11,r11,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r6,r22
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r22.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,15,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0xFFFF8000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// rlwinm r10,r10,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// divw r11,r11,r23
	ctx.r11.u64 = uint32_t((ctx.r23.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r23.s32 == -1)) ? ctx.r11.s32 / ctx.r23.s32 : 0);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + ctx.r24.u64;
	// bl 0x899d4440
	ctx.lr = 0x89996FD4;
	sub_899D4440(ctx, base);
	// lhzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r6,r9,256
	ctx.r6.s64 = ctx.r9.s64 + 256;
	// lwzx r5,r31,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// lbzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r6,r9,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lhzx r9,r6,r22
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r22.u32);
	// rlwinm r6,r11,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r6,r6,r22
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r22.u32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// rlwinm r6,r9,15,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r9,r11,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// srawi r5,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 8;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// divw r11,r11,r23
	ctx.r11.u64 = uint32_t((ctx.r23.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r23.s32 == -1)) ? ctx.r11.s32 / ctx.r23.s32 : 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + ctx.r24.u64;
	// bl 0x899d4440
	ctx.lr = 0x89997058;
	sub_899D4440(ctx, base);
loc_89997058:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89998F18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x89998F20;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r8,-30227
	ctx.r8.s64 = -1980956672;
	// addi r9,r11,-12156
	ctx.r9.s64 = ctx.r11.s64 + -12156;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r27,r8,-9248
	ctx.r27.s64 = ctx.r8.s64 + -9248;
	// lbz r11,-12156(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -12156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89998fb8
	if (ctx.cr6.eq) goto loc_89998FB8;
	// addi r31,r9,-10
	ctx.r31.s64 = ctx.r9.s64 + -10;
loc_89998F48:
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// lbz r26,16(r31)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r31.u32 + 16);
	// lhz r25,18(r31)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r31.u32 + 18);
	// addi r29,r27,408
	ctx.r29.s64 = ctx.r27.s64 + 408;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r6,11(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 11);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r8,13(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 13);
	// li r5,3
	ctx.r5.s64 = 3;
	// lbz r9,14(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 14);
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,15(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 15);
	// li r4,2
	ctx.r4.s64 = 2;
	// sth r25,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r25.u16);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stb r26,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x89934b48
	ctx.lr = 0x89998F98;
	sub_89934B48(ctx, base);
	// lbzu r10,10(r31)
	ea = 10 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 10);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89998f48
	if (!ctx.cr6.eq) goto loc_89998F48;
loc_89998FB8:
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r10,-20832
	ctx.r30.s64 = ctx.r10.s64 + -20832;
loc_89998FC8:
	// mulli r10,r31,204
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(204));
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwimi r3,r11,14,16,17
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF3FFF);
	// addi r5,r27,408
	ctx.r5.s64 = ctx.r27.s64 + 408;
	// li r7,9
	ctx.r7.s64 = 9;
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + ctx.r27.u64;
	// bl 0x89935610
	ctx.lr = 0x89998FE8;
	sub_89935610(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x89998fc8
	if (ctx.cr6.lt) goto loc_89998FC8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899995A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899995B0;
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
	// lwzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x899998f4
	if (ctx.cr6.gt) goto loc_899998F4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899995fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899995FC;
	// bdzf 4*cr6+eq,0x899996b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899996B8;
	// bne cr6,0x899996b8
	if (!ctx.cr6.eq) goto loc_899996B8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89999380
	ctx.lr = 0x899995F4;
	sub_89999380(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899995FC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89999604;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x89999618
	if (!ctx.cr6.lt) goto loc_89999618;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
loc_89999618:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// mulli r7,r11,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// lwzx r8,r7,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// lwzx r7,r31,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r31,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r30,32
	ctx.r9.s64 = ctx.r30.s64 + 32;
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899996B8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899996C0;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899996dc
	if (!ctx.cr6.lt) goto loc_899996DC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x899992e0
	ctx.lr = 0x899996D4;
	sub_899992E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899996DC:
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// rlwinm r6,r10,0,24,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addi r26,r30,60
	ctx.r26.s64 = ctx.r30.s64 + 60;
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stwx r5,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r5.u32);
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// stwx r4,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r4.u32);
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r9,r3,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// beq cr6,0x89999860
	if (ctx.cr6.eq) goto loc_89999860;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// beq cr6,0x89999778
	if (ctx.cr6.eq) goto loc_89999778;
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
	// blt cr6,0x899998f4
	if (ctx.cr6.lt) goto loc_899998F4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x89999894
	goto loc_89999894;
loc_89999778:
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
	// bne cr6,0x899997a0
	if (!ctx.cr6.eq) goto loc_899997A0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x8999988c
	goto loc_8999988C;
loc_899997A0:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x899997B0;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899998f4
	if (ctx.cr6.eq) goto loc_899998F4;
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x899998f4
	if (ctx.cr6.eq) goto loc_899998F4;
	// lwzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// lwzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r11,r9,-12068
	ctx.r11.s64 = ctx.r9.s64 + -12068;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// rlwinm r7,r6,29,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x4;
	// lhzx r6,r7,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// lhzx r5,r7,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// rotlwi r9,r6,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rotlwi r11,r5,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x89932a38
	ctx.lr = 0x8999982C;
	sub_89932A38(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932cb0
	ctx.lr = 0x89999834;
	sub_89932CB0(ctx, base);
	// addi r3,r30,158
	ctx.r3.s64 = ctx.r30.s64 + 158;
	// lis r11,-30296
	ctx.r11.s64 = -1985478656;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r8,r11,-27584
	ctx.r8.s64 = ctx.r11.s64 + -27584;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lhzx r6,r31,r3
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899cba78
	ctx.lr = 0x89999858;
	sub_899CBA78(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89999860:
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
	// beq cr6,0x899998f4
	if (ctx.cr6.eq) goto loc_899998F4;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x89999888;
	sub_89936360(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8999988C:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_89999894:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
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
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
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
loc_899998F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999B6D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30269
	ctx.r5.s64 = -1983709184;
	// addi r9,r6,9656
	ctx.r9.s64 = ctx.r6.s64 + 9656;
	// lwz r11,27852(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 27852);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lbz r10,4946(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 4946);
	// addi r3,r9,64
	ctx.r3.s64 = ctx.r9.s64 + 64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mulli r7,r10,92
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(92));
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lwzx r6,r7,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// sth r10,-17120(r5)
	REX_STORE_U16(ctx.r5.u32 + -17120, ctx.r10.u16);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,27852(r8)
	REX_STORE_U32(ctx.r8.u32 + 27852, ctx.r11.u32);
	// lwzx r11,r6,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// stw r11,12024(r4)
	REX_STORE_U32(ctx.r4.u32 + 12024, ctx.r11.u32);
	// b 0x8999b520
	sub_8999B520(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999BB88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x8999BB90;
	__savegprlr_17(ctx, base);
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
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r26,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r26.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// clrlwi r29,r8,31
	ctx.r29.u64 = ctx.r8.u32 & 0x1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,27852(r10)
	REX_STORE_U32(ctx.r10.u32 + 27852, ctx.r11.u32);
	// bl 0x89934058
	ctx.lr = 0x8999BBC0;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999bd6c
	if (ctx.cr6.eq) goto loc_8999BD6C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8991b880
	ctx.lr = 0x8999BBD0;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999bd6c
	if (ctx.cr6.eq) goto loc_8999BD6C;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// clrlwi r24,r30,16
	ctx.r24.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// lhz r28,-4592(r9)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r9.u32 + -4592);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// extsh r6,r28
	ctx.r6.s64 = ctx.r28.s16;
	// addi r23,r31,8
	ctx.r23.s64 = ctx.r31.s64 + 8;
	// mulli r30,r6,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// stwx r29,r30,r23
	REX_STORE_U32(ctx.r30.u32 + ctx.r23.u32, ctx.r29.u32);
	// stwx r24,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r24.u32);
	// ori r4,r8,16
	ctx.r4.u64 = ctx.r8.u64 | 16;
	// li r18,0
	ctx.r18.s64 = 0;
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r18,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r18.u32);
	// lis r3,-30294
	ctx.r3.s64 = -1985347584;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,-11932
	ctx.r11.s64 = ctx.r3.s64 + -11932;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r27,4946(r8)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r8.u32 + 4946);
	// addi r25,r9,-4592
	ctx.r25.s64 = ctx.r9.s64 + -4592;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// bl 0x8991b538
	ctx.lr = 0x8999BC4C;
	sub_8991B538(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991c578
	ctx.lr = 0x8999BC54;
	sub_8991C578(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// extsb r4,r27
	ctx.r4.s64 = ctx.r27.s8;
	// bl 0x8991c678
	ctx.lr = 0x8999BC64;
	sub_8991C678(ctx, base);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// extsb r6,r27
	ctx.r6.s64 = ctx.r27.s8;
	// addi r27,r7,9656
	ctx.r27.s64 = ctx.r7.s64 + 9656;
	// mulli r22,r6,92
	ctx.r22.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(92));
	// addi r5,r27,64
	ctx.r5.s64 = ctx.r27.s64 + 64;
	// extsh r4,r26
	ctx.r4.s64 = ctx.r26.s16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r22,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r5.u32);
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8991cac0
	ctx.lr = 0x8999BC90;
	sub_8991CAC0(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r20,r31,52
	ctx.r20.s64 = ctx.r31.s64 + 52;
	// addi r19,r27,168
	ctx.r19.s64 = ctx.r27.s64 + 168;
	// li r26,2
	ctx.r26.s64 = 2;
	// ori r21,r11,16384
	ctx.r21.u64 = ctx.r11.u64 | 16384;
loc_8999BCA4:
	// lhzu r27,2(r25)
	ea = 2 + ctx.r25.u32;
	ctx.r27.u64 = REX_LOAD_U16(ea);
	ctx.r25.u32 = ea;
	// addi r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 + 148;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// mulli r17,r9,208
	ctx.r17.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// sthx r28,r17,r11
	REX_STORE_U16(ctx.r17.u32 + ctx.r11.u32, ctx.r28.u16);
	// stwx r24,r17,r10
	REX_STORE_U32(ctx.r17.u32 + ctx.r10.u32, ctx.r24.u32);
	// stwx r21,r17,r31
	REX_STORE_U32(ctx.r17.u32 + ctx.r31.u32, ctx.r21.u32);
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// lwzx r6,r30,r23
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// stwx r6,r17,r8
	REX_STORE_U32(ctx.r17.u32 + ctx.r8.u32, ctx.r6.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r18,r17,r7
	REX_STORE_U32(ctx.r17.u32 + ctx.r7.u32, ctx.r18.u32);
	// bl 0x8991b538
	ctx.lr = 0x8999BCE0;
	sub_8991B538(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991c578
	ctx.lr = 0x8999BCE8;
	sub_8991C578(ctx, base);
	// lhz r5,1(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 1);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// lhz r3,3(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 3);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// lbz r7,5(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rotlwi r11,r5,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// lbzx r6,r22,r19
	ctx.r6.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r19.u32);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// lbzu r9,6(r29)
	ea = 6 + ctx.r29.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r27,r31,60
	ctx.r27.s64 = ctx.r31.s64 + 60;
	// stwx r11,r17,r4
	REX_STORE_U32(ctx.r17.u32 + ctx.r4.u32, ctx.r11.u32);
	// rotlwi r10,r3,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stwx r4,r17,r5
	REX_STORE_U32(ctx.r17.u32 + ctx.r5.u32, ctx.r4.u32);
	// addi r8,r31,204
	ctx.r8.s64 = ctx.r31.s64 + 204;
	// stwx r10,r17,r27
	REX_STORE_U32(ctx.r17.u32 + ctx.r27.u32, ctx.r10.u32);
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lwzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	// addi r27,r31,193
	ctx.r27.s64 = ctx.r31.s64 + 193;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r6,r17,r8
	REX_STORE_U8(ctx.r17.u32 + ctx.r8.u32, ctx.r6.u8);
	// stbx r6,r17,r5
	REX_STORE_U8(ctx.r17.u32 + ctx.r5.u32, ctx.r6.u8);
	// stbx r7,r17,r4
	REX_STORE_U8(ctx.r17.u32 + ctx.r4.u32, ctx.r7.u8);
	// stwx r11,r17,r3
	REX_STORE_U32(ctx.r17.u32 + ctx.r3.u32, ctx.r11.u32);
	// stbx r9,r17,r27
	REX_STORE_U8(ctx.r17.u32 + ctx.r27.u32, ctx.r9.u8);
	// bne 0x8999bca4
	if (!ctx.cr0.eq) goto loc_8999BCA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_8999BD6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999CE68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8999CE70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lwz r11,27852(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 27852);
	// lhz r31,26864(r9)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r9.u32 + 26864);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,27852(r10)
	REX_STORE_U32(ctx.r10.u32 + 27852, ctx.r11.u32);
	// bl 0x89934058
	ctx.lr = 0x8999CE98;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8999cea8
	if (!ctx.cr6.eq) goto loc_8999CEA8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_8999CEA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x8999CEB0;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999cf50
	if (ctx.cr6.eq) goto loc_8999CF50;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,12800
	ctx.r11.s64 = ctx.r8.s64 + 12800;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// lhz r3,-4592(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + -4592);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// mulli r8,r4,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// stwx r10,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r10,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// ori r4,r7,16
	ctx.r4.u64 = ctx.r7.u64 | 16;
	// stwx r5,r8,r6
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r5.u32);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stwx r4,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r31,4946(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 4946);
	// bl 0x8991b538
	ctx.lr = 0x8999CF0C;
	sub_8991B538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c578
	ctx.lr = 0x8999CF14;
	sub_8991C578(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// extsb r4,r31
	ctx.r4.s64 = ctx.r31.s8;
	// bl 0x8991c678
	ctx.lr = 0x8999CF24;
	sub_8991C678(ctx, base);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// extsb r8,r31
	ctx.r8.s64 = ctx.r31.s8;
	// addi r11,r9,9656
	ctx.r11.s64 = ctx.r9.s64 + 9656;
	// mulli r7,r8,92
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(92));
	// addi r6,r11,64
	ctx.r6.s64 = ctx.r11.s64 + 64;
	// extsh r5,r30
	ctx.r5.s64 = ctx.r30.s16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// bl 0x8991cac0
	ctx.lr = 0x8999CF50;
	sub_8991CAC0(ctx, base);
loc_8999CF50:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999DF28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e8
	ctx.lr = 0x8999DF30;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r11,-11332
	ctx.r27.s64 = ctx.r11.s64 + -11332;
	// bl 0x8999de58
	ctx.lr = 0x8999DF44;
	sub_8999DE58(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r16,r30,184
	ctx.r16.s64 = ctx.r30.s64 + 184;
	// lbzx r9,r31,r16
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r16.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8999df8c
	if (ctx.cr6.eq) goto loc_8999DF8C;
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
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x8999e194
	if (ctx.cr6.lt) goto loc_8999E194;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x8999e038
	goto loc_8999E038;
loc_8999DF8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932b18
	ctx.lr = 0x8999DF94;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932d30
	ctx.lr = 0x8999DFA0;
	sub_89932D30(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// addi r26,r30,36
	ctx.r26.s64 = ctx.r30.s64 + 36;
	// lwzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r25,r30,32
	ctx.r25.s64 = ctx.r30.s64 + 32;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
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
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
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
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r7.u32);
	// bl 0x8991db50
	ctx.lr = 0x8999E018;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999e194
	if (ctx.cr6.eq) goto loc_8999E194;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991aae8
	ctx.lr = 0x8999E028;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999e194
	if (ctx.cr6.eq) goto loc_8999E194;
	// li r11,4
	ctx.r11.s64 = 4;
	// stbx r11,r31,r16
	REX_STORE_U8(ctx.r31.u32 + ctx.r16.u32, ctx.r11.u8);
loc_8999E038:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r24,r30,200
	ctx.r24.s64 = ctx.r30.s64 + 200;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// li r20,2
	ctx.r20.s64 = 2;
	// lis r23,3
	ctx.r23.s64 = 196608;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r17,128
	ctx.r17.s64 = 8388608;
	// extsh r22,r8
	ctx.r22.s64 = ctx.r8.s16;
	// lwz r21,-21584(r11)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// lis r18,320
	ctx.r18.s64 = 20971520;
	// rlwinm r25,r22,1,22,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0x3FE;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// lis r19,120
	ctx.r19.s64 = 7864320;
loc_8999E078:
	// addi r11,r26,128
	ctx.r11.s64 = ctx.r26.s64 + 128;
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r9,2(r27)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r27.u32 + 2);
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// rlwinm r6,r11,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r25,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r28.u32);
	// rotlwi r3,r10,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lbzx r5,r31,r24
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// rotlwi r10,r9,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// lwzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lhzx r9,r6,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// mullw r3,r10,r8
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwzx r9,r31,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// mullw r6,r11,r4
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r8,r3,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r3.u64;
	// mullw r6,r10,r4
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mulli r4,r8,224
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(224));
	// srawi r8,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// subf r29,r23,r3
	ctx.r29.u64 = ctx.r3.u64 - ctx.r23.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x8999E100;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999e17c
	if (ctx.cr6.eq) goto loc_8999E17C;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x8999E114;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8999e17c
	if (!ctx.cr6.eq) goto loc_8999E17C;
	// cmpw cr6,r29,r17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x8999e154
	if (ctx.cr6.lt) goto loc_8999E154;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r18.s32, ctx.xer);
	// bgt cr6,0x8999e154
	if (ctx.cr6.gt) goto loc_8999E154;
	// subf r11,r21,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r21.u64;
	// subf. r10,r19,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r19.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8999e13c
	if (!ctx.cr0.lt) goto loc_8999E13C;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8999E13C:
	// lis r11,112
	ctx.r11.s64 = 7340032;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// adde r11,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8999e158
	goto loc_8999E158;
loc_8999E154:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8999E158:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8999e17c
	if (ctx.cr6.eq) goto loc_8999E17C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x899cc2e0
	ctx.lr = 0x8999E17C;
	sub_899CC2E0(ctx, base);
loc_8999E17C:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8999e078
	if (!ctx.cr0.eq) goto loc_8999E078;
	// lbzx r11,r31,r16
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r16.u32);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stbx r11,r31,r16
	REX_STORE_U8(ctx.r31.u32 + ctx.r16.u32, ctx.r11.u8);
loc_8999E194:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999FC70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x8999FC78;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8999fcd8
	if (ctx.cr6.lt) goto loc_8999FCD8;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8999fcd8
	if (ctx.cr6.gt) goto loc_8999FCD8;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r10,r11,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	// addis r11,r10,-120
	ctx.r11.s64 = ctx.r10.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8999fcc0
	if (!ctx.cr0.lt) goto loc_8999FCC0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8999FCC0:
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
	// b 0x8999fcdc
	goto loc_8999FCDC;
loc_8999FCD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8999FCDC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8999fe28
	if (ctx.cr6.eq) goto loc_8999FE28;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x89934058
	ctx.lr = 0x8999FCF0;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999fe28
	if (ctx.cr6.eq) goto loc_8999FE28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x8999FD00;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999fe28
	if (ctx.cr6.eq) goto loc_8999FE28;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// addi r31,r10,12800
	ctx.r31.s64 = ctx.r10.s64 + 12800;
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// lhz r30,-4592(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// srawi r7,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 3;
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mulli r24,r6,208
	ctx.r24.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lis r3,-16240
	ctx.r3.s64 = -1064304640;
	// li r11,23
	ctx.r11.s64 = 23;
	// clrlwi r10,r7,26
	ctx.r10.u64 = ctx.r7.u32 & 0x3F;
	// stwx r3,r24,r31
	REX_STORE_U32(ctx.r24.u32 + ctx.r31.u32, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r11,r24,r8
	REX_STORE_U32(ctx.r24.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r10,r24,r5
	REX_STORE_U32(ctx.r24.u32 + ctx.r5.u32, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r9,r24,r4
	REX_STORE_U32(ctx.r24.u32 + ctx.r4.u32, ctx.r9.u32);
	// bl 0x8991b538
	ctx.lr = 0x8999FD60;
	sub_8991B538(ctx, base);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r26,r24,r8
	REX_STORE_U32(ctx.r24.u32 + ctx.r8.u32, ctx.r26.u32);
	// stwx r25,r24,r7
	REX_STORE_U32(ctx.r24.u32 + ctx.r7.u32, ctx.r25.u32);
	// bl 0x8991c578
	ctx.lr = 0x8999FD78;
	sub_8991C578(ctx, base);
	// addi r6,r29,128
	ctx.r6.s64 = ctx.r29.s64 + 128;
	// lis r5,-30320
	ctx.r5.s64 = -1987051520;
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// addi r3,r5,9016
	ctx.r3.s64 = ctx.r5.s64 + 9016;
	// rlwinm r10,r6,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// rlwinm r9,r28,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// addi r7,r31,158
	ctx.r7.s64 = ctx.r31.s64 + 158;
	// lwz r11,-9212(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -9212);
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// lhzx r5,r10,r3
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// addi r10,r31,168
	ctx.r10.s64 = ctx.r31.s64 + 168;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// sthx r28,r24,r7
	REX_STORE_U16(ctx.r24.u32 + ctx.r7.u32, ctx.r28.u16);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// rlwinm r6,r8,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// stw r11,-9212(r4)
	REX_STORE_U32(ctx.r4.u32 + -9212, ctx.r11.u32);
	// rlwinm r5,r7,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0xFFFFC000;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// srawi r3,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 8;
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// srawi r8,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 16;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// rlwinm r11,r8,21,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0xF;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r31,204
	ctx.r4.s64 = ctx.r31.s64 + 204;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// stwx r3,r24,r7
	REX_STORE_U32(ctx.r24.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r8,r31,182
	ctx.r8.s64 = ctx.r31.s64 + 182;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stwx r9,r24,r6
	REX_STORE_U32(ctx.r24.u32 + ctx.r6.u32, ctx.r9.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// stbx r27,r24,r4
	REX_STORE_U8(ctx.r24.u32 + ctx.r4.u32, ctx.r27.u8);
	// stwx r7,r24,r10
	REX_STORE_U32(ctx.r24.u32 + ctx.r10.u32, ctx.r7.u32);
	// stbx r27,r24,r11
	REX_STORE_U8(ctx.r24.u32 + ctx.r11.u32, ctx.r27.u8);
	// stbx r5,r24,r8
	REX_STORE_U8(ctx.r24.u32 + ctx.r8.u32, ctx.r5.u8);
	// bl 0x89936360
	ctx.lr = 0x8999FE1C;
	sub_89936360(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_8999FE28:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A19B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899A19B8;
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
	// addi r11,r30,164
	ctx.r11.s64 = ctx.r30.s64 + 164;
	// addi r6,r30,188
	ctx.r6.s64 = ctx.r30.s64 + 188;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r31,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stwx r8,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x899a1c38
	if (ctx.cr6.lt) goto loc_899A1C38;
	// beq cr6,0x899a1a8c
	if (ctx.cr6.eq) goto loc_899A1A8C;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bge cr6,0x899a1d18
	if (!ctx.cr6.lt) goto loc_899A1D18;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r9,r30,189
	ctx.r9.s64 = ctx.r30.s64 + 189;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// blt cr6,0x899a1a64
	if (ctx.cr6.lt) goto loc_899A1A64;
	// bne cr6,0x899a1d18
	if (!ctx.cr6.eq) goto loc_899A1D18;
	// addi r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 + 168;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r7,r10,2048
	ctx.r7.s64 = ctx.r10.s64 + 2048;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// cmpwi cr6,r6,-96
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -96, ctx.xer);
	// bgt cr6,0x899a1d18
	if (ctx.cr6.gt) goto loc_899A1D18;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// lbz r11,32555(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 32555);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stb r8,32555(r10)
	REX_STORE_U8(ctx.r10.u32 + 32555, ctx.r8.u8);
	// b 0x899a1d18
	goto loc_899A1D18;
loc_899A1A64:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r8,r30,193
	ctx.r8.s64 = ctx.r30.s64 + 193;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,124
	ctx.r5.s64 = 124;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// sthx r6,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u16);
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// b 0x899a1d18
	goto loc_899A1D18;
loc_899A1A8C:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// bgt cr6,0x899a1d18
	if (ctx.cr6.gt) goto loc_899A1D18;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899a1aec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A1AEC;
	// bdzf 4*cr6+eq,0x899a1b14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A1B14;
	// bdzf 4*cr6+eq,0x899a1b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A1B90;
	// bne cr6,0x899a1bf4
	if (!ctx.cr6.eq) goto loc_899A1BF4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r30,182
	ctx.r10.s64 = ctx.r30.s64 + 182;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
loc_899A1AEC:
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991d830
	ctx.lr = 0x899A1B04;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899a1d18
	goto loc_899A1D18;
loc_899A1B14:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x899a1b30
	if (!ctx.cr6.lt) goto loc_899A1B30;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
loc_899A1B30:
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// ble cr6,0x899a1b6c
	if (!ctx.cr6.gt) goto loc_899A1B6C;
	// addi r8,r30,193
	ctx.r8.s64 = ctx.r30.s64 + 193;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// stbx r10,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u8);
	// b 0x899a1d18
	goto loc_899A1D18;
loc_899A1B6C:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8991d8e0
	ctx.lr = 0x899A1B74;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899a1d18
	if (ctx.cr6.eq) goto loc_899A1D18;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899a1d18
	goto loc_899A1D18;
loc_899A1B90:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899a1bac
	if (ctx.cr6.eq) goto loc_899A1BAC;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x899a1d18
	goto loc_899A1D18;
loc_899A1BAC:
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// lis r7,-30294
	ctx.r7.s64 = -1985347584;
	// stbx r3,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u8);
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// addi r4,r30,193
	ctx.r4.s64 = ctx.r30.s64 + 193;
	// addi r5,r7,-10196
	ctx.r5.s64 = ctx.r7.s64 + -10196;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// srawi r8,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 16;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lbzx r6,r7,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// stbx r6,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u8);
	// b 0x899a1d18
	goto loc_899A1D18;
loc_899A1BF4:
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,120
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 120, ctx.xer);
	// blt cr6,0x899a1d18
	if (ctx.cr6.lt) goto loc_899A1D18;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,7200
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7200, ctx.xer);
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// ble cr6,0x899a1c30
	if (!ctx.cr6.gt) goto loc_899A1C30;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
loc_899A1C30:
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899a1d18
	goto loc_899A1D18;
loc_899A1C38:
	// addi r10,r30,189
	ctx.r10.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x899a1cd0
	if (ctx.cr6.lt) goto loc_899A1CD0;
	// beq cr6,0x899a1ca4
	if (ctx.cr6.eq) goto loc_899A1CA4;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x899a1d00
	if (!ctx.cr6.lt) goto loc_899A1D00;
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
	// bgt cr6,0x899a1d00
	if (ctx.cr6.gt) goto loc_899A1D00;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwzx r8,r31,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// rlwinm r9,r8,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stbx r5,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u8);
	// stbx r4,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u8);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// b 0x899a1d00
	goto loc_899A1D00;
loc_899A1CA4:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x899a1d00
	if (!ctx.cr6.eq) goto loc_899A1D00;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r9,r30,71
	ctx.r9.s64 = ctx.r30.s64 + 71;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,255
	ctx.r7.s64 = 255;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x899a1d00
	goto loc_899A1D00;
loc_899A1CD0:
	// addi r7,r30,168
	ctx.r7.s64 = ctx.r30.s64 + 168;
	// lwzx r8,r31,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addic. r8,r8,-4096
	ctx.xer.ca = ctx.r8.u32 > 4095;
	ctx.r8.s64 = ctx.r8.s64 + -4096;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// bne 0x899a1d00
	if (!ctx.cr0.eq) goto loc_899A1D00;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,63
	ctx.r5.s64 = 63;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// stwx r6,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
loc_899A1D00:
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
loc_899A1D18:
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
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
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

DEFINE_REX_FUNC(sub_899A6C90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899A6C98;
	__savegprlr_28(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r9,12800
	ctx.r11.s64 = ctx.r9.s64 + 12800;
	// lis r12,-16561
	ctx.r12.s64 = -1085341696;
	// addi r7,r11,158
	ctx.r7.s64 = ctx.r11.s64 + 158;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mulli r3,r8,208
	ctx.r3.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhzx r8,r10,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// and r7,r9,r12
	ctx.r7.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,16560
	ctx.r12.s64 = 1085276160;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r6,r11,158
	ctx.r6.s64 = ctx.r11.s64 + 158;
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// lwzx r4,r3,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// and r9,r4,r12
	ctx.r9.u64 = ctx.r4.u64 & ctx.r12.u64;
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lis r4,-30320
	ctx.r4.s64 = -1987051520;
	// lhzx r9,r3,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r6.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhzx r5,r3,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// addi r7,r9,128
	ctx.r7.s64 = ctx.r9.s64 + 128;
	// addi r6,r8,128
	ctx.r6.s64 = ctx.r8.s64 + 128;
	// addi r31,r11,60
	ctx.r31.s64 = ctx.r11.s64 + 60;
	// rlwinm r7,r7,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r4,r4,9016
	ctx.r4.s64 = ctx.r4.s64 + 9016;
	// addi r30,r11,56
	ctx.r30.s64 = ctx.r11.s64 + 56;
	// rlwinm r6,r6,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// rlwinm r28,r8,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// lwzx r31,r10,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r29,r9,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r7,r7,r4
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// srawi r9,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 4;
	// lwzx r8,r10,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// lhzx r6,r6,r4
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r30,r29,r4
	ctx.r30.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r4.u32);
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lhzx r4,r28,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r4.u32);
	// mullw r29,r6,r9
	ctx.r29.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// srawi r7,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 8;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// divw r31,r7,r31
	ctx.r31.u64 = uint32_t((ctx.r31.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r7.s32 / ctx.r31.s32 : 0);
	// lis r9,0
	ctx.r9.s64 = 0;
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// clrlwi r30,r31,16
	ctx.r30.u64 = ctx.r31.u32 & 0xFFFF;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// srawi r7,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 8;
	// srawi r8,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 31;
	// rlwinm r29,r9,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfc r9,r9,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r9.u32;
	ctx.r9.u64 = ctx.r30.u64 - ctx.r9.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// adde r8,r29,r8
	temp.u8 = (ctx.r29.u32 + ctx.r8.u32 < ctx.r29.u32) | (ctx.r29.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 16;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 + 52;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// ori r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 32768;
	// sthx r5,r10,r4
	REX_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r5.u16);
	// srawi r31,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r6.s32 >> 31;
	// rlwinm r30,r8,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// lhzx r7,r3,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// subfc r8,r8,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r8.u32;
	ctx.r8.u64 = ctx.r6.u64 - ctx.r8.u64;
	// adde r8,r30,r31
	temp.u8 = (ctx.r30.u32 + ctx.r31.u32 < ctx.r30.u32) | (ctx.r30.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r30.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r6,r11,206
	ctx.r6.s64 = ctx.r11.s64 + 206;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// addi r9,r11,200
	ctx.r9.s64 = ctx.r11.s64 + 200;
	// addi r7,r11,200
	ctx.r7.s64 = ctx.r11.s64 + 200;
	// addi r5,r11,68
	ctx.r5.s64 = ctx.r11.s64 + 68;
	// addi r31,r11,68
	ctx.r31.s64 = ctx.r11.s64 + 68;
	// lbzx r11,r10,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// sthx r8,r10,r4
	REX_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u16);
	// lbzx r9,r3,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stbx r4,r10,r7
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r4.u8);
	// lwzx r9,r3,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// stwx r9,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A8898) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x899A88A0;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// rlwinm r26,r10,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r11,-8648
	ctx.r31.s64 = ctx.r11.s64 + -8648;
	// li r3,83
	ctx.r3.s64 = 83;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwzx r29,r26,r31
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x89934058
	ctx.lr = 0x899A88D4;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a8a74
	if (ctx.cr6.eq) goto loc_899A8A74;
	// addi r22,r31,4
	ctx.r22.s64 = ctx.r31.s64 + 4;
	// lbzx r11,r26,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r22.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8991b880
	ctx.lr = 0x899A88EC;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a8a74
	if (ctx.cr6.eq) goto loc_899A8A74;
	// extsh r10,r25
	ctx.r10.s64 = ctx.r25.s16;
	// lbzx r8,r26,r22
	ctx.r8.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r22.u32);
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// addi r5,r7,9016
	ctx.r5.s64 = ctx.r7.s64 + 9016;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r25,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x3FE;
	// srawi r11,r23,4
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 4;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lhzx r6,r4,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lhzx r5,r3,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// addi r9,r9,-4592
	ctx.r9.s64 = ctx.r9.s64 + -4592;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mullw r6,r4,r11
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mullw r5,r3,r11
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// srawi r20,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r20.s64 = ctx.r6.s32 >> 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// srawi r19,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r19.s64 = ctx.r5.s32 >> 8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r31,r8,12800
	ctx.r31.s64 = ctx.r8.s64 + 12800;
	// ble cr6,0x899a8a28
	if (!ctx.cr6.gt) goto loc_899A8A28;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// clrlwi r21,r10,26
	ctx.r21.u64 = ctx.r10.u32 & 0x3F;
	// addi r27,r9,-2
	ctx.r27.s64 = ctx.r9.s64 + -2;
	// li r18,83
	ctx.r18.s64 = 83;
loc_899A8970:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lhzu r30,2(r27)
	ea = 2 + ctx.r27.u32;
	ctx.r30.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r31,148
	ctx.r9.s64 = ctx.r31.s64 + 148;
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mulli r15,r8,208
	ctx.r15.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// sthx r11,r15,r9
	REX_STORE_U16(ctx.r15.u32 + ctx.r9.u32, ctx.r11.u16);
	// stwx r18,r15,r7
	REX_STORE_U32(ctx.r15.u32 + ctx.r7.u32, ctx.r18.u32);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// oris r4,r10,49328
	ctx.r4.u64 = ctx.r10.u64 | 3232759808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r4,r15,r31
	REX_STORE_U32(ctx.r15.u32 + ctx.r31.u32, ctx.r4.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stwx r11,r15,r6
	REX_STORE_U32(ctx.r15.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r21,r15,r5
	REX_STORE_U32(ctx.r15.u32 + ctx.r5.u32, ctx.r21.u32);
	// bl 0x8991b538
	ctx.lr = 0x899A89B8;
	sub_8991B538(ctx, base);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r17,r15,r10
	REX_STORE_U32(ctx.r15.u32 + ctx.r10.u32, ctx.r17.u32);
	// stwx r16,r15,r9
	REX_STORE_U32(ctx.r15.u32 + ctx.r9.u32, ctx.r16.u32);
	// bl 0x8991c578
	ctx.lr = 0x899A89D0;
	sub_8991C578(ctx, base);
	// addi r7,r31,158
	ctx.r7.s64 = ctx.r31.s64 + 158;
	// addi r5,r31,168
	ctx.r5.s64 = ctx.r31.s64 + 168;
	// lbzx r6,r26,r22
	ctx.r6.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r22.u32);
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// sthx r25,r15,r7
	REX_STORE_U16(ctx.r15.u32 + ctx.r7.u32, ctx.r25.u16);
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// addi r9,r31,204
	ctx.r9.s64 = ctx.r31.s64 + 204;
	// stwx r23,r15,r5
	REX_STORE_U32(ctx.r15.u32 + ctx.r5.u32, ctx.r23.u32);
	// addi r7,r31,200
	ctx.r7.s64 = ctx.r31.s64 + 200;
	// lwzu r11,12(r29)
	ea = 12 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// stwx r11,r15,r4
	REX_STORE_U32(ctx.r15.u32 + ctx.r4.u32, ctx.r11.u32);
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// stwx r20,r15,r3
	REX_STORE_U32(ctx.r15.u32 + ctx.r3.u32, ctx.r20.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stwx r19,r15,r10
	REX_STORE_U32(ctx.r15.u32 + ctx.r10.u32, ctx.r19.u32);
	// stbx r24,r15,r9
	REX_STORE_U8(ctx.r15.u32 + ctx.r9.u32, ctx.r24.u8);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// stbx r24,r15,r7
	REX_STORE_U8(ctx.r15.u32 + ctx.r7.u32, ctx.r24.u8);
	// blt cr6,0x899a8970
	if (ctx.cr6.lt) goto loc_899A8970;
loc_899A8A28:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x89936360
	ctx.lr = 0x899A8A30;
	sub_89936360(ctx, base);
	// extsh r10,r30
	ctx.r10.s64 = ctx.r30.s16;
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r3,r8,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// ori r9,r11,32896
	ctx.r9.u64 = ctx.r11.u64 | 32896;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x899d7a90
	ctx.lr = 0x899A8A68;
	sub_899D7A90(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899A8A74:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899AA060) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899AA068;
	__savegprlr_23(ctx, base);
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
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899aa398
	if (ctx.cr6.lt) goto loc_899AA398;
	// bne cr6,0x899aa3e8
	if (!ctx.cr6.eq) goto loc_899AA3E8;
	// addi r23,r30,4
	ctx.r23.s64 = ctx.r30.s64 + 4;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// lwzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x899aa184
	if (!ctx.cr6.eq) goto loc_899AA184;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lwzx r29,r31,r4
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// srawi r9,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// rlwinm r7,r9,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r5,r8,-8052
	ctx.r5.s64 = ctx.r8.s64 + -8052;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// lhzx r10,r7,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r28.u32);
	// addi r25,r30,207
	ctx.r25.s64 = ctx.r30.s64 + 207;
	// lis r9,-4
	ctx.r9.s64 = -262144;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lbz r10,2(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// mulli r5,r7,28672
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28672));
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r31,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r4,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lhzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// rlwinm r11,r6,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0xFFFF8000;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r10,r26,16
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 16;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r11,r10,17
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFF;
	// rlwinm r10,r11,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFF;
	// addi r10,r11,-2048
	ctx.r10.s64 = ctx.r11.s64 + -2048;
	// bl 0x899d4640
	ctx.lr = 0x899AA184;
	sub_899D4640(ctx, base);
loc_899AA184:
	// addi r7,r30,189
	ctx.r7.s64 = ctx.r30.s64 + 189;
	// lbzx r8,r31,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x899aa254
	if (ctx.cr6.lt) goto loc_899AA254;
	// beq cr6,0x899aa230
	if (ctx.cr6.eq) goto loc_899AA230;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bge cr6,0x899aa364
	if (!ctx.cr6.lt) goto loc_899AA364;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899aa1c0
	if (!ctx.cr6.lt) goto loc_899AA1C0;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899AA1C0:
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899aa1d8
	if (!ctx.cr6.lt) goto loc_899AA1D8;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899AA1D8:
	// addi r11,r30,162
	ctx.r11.s64 = ctx.r30.s64 + 162;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// srawi r8,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// lis r6,384
	ctx.r6.s64 = 25165824;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r6,r9,128
	ctx.r6.s64 = ctx.r9.s64 + 128;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r5,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// stwx r10,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// blt cr6,0x899aa364
	if (ctx.cr6.lt) goto loc_899AA364;
	// b 0x899aa314
	goto loc_899AA314;
loc_899AA230:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899aa364
	if (!ctx.cr6.eq) goto loc_899AA364;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// b 0x899aa35c
	goto loc_899AA35C;
loc_899AA254:
	// lwzx r10,r31,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r10,-67
	ctx.r10.s64 = ctx.r10.s64 + -67;
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r9,r9,-4096
	ctx.r9.s64 = ctx.r9.s64 + -4096;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// blt cr6,0x899aa340
	if (ctx.cr6.lt) goto loc_899AA340;
	// bne cr6,0x899aa364
	if (!ctx.cr6.eq) goto loc_899AA364;
	// addi r24,r30,48
	ctx.r24.s64 = ctx.r30.s64 + 48;
	// lis r11,160
	ctx.r11.s64 = 10485760;
	// lwzx r5,r31,r24
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899aa364
	if (ctx.cr6.gt) goto loc_899AA364;
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r30,207
	ctx.r10.s64 = ctx.r30.s64 + 207;
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// li r4,5
	ctx.r4.s64 = 5;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x899d4e08
	ctx.lr = 0x899AA2B8;
	sub_899D4E08(ctx, base);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lbz r8,7935(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 7935);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899aa314
	if (ctx.cr6.eq) goto loc_899AA314;
	// lis r11,-30296
	ctx.r11.s64 = -1985478656;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r29,3
	ctx.r29.s64 = 196608;
	// lis r25,4
	ctx.r25.s64 = 262144;
	// addi r26,r11,-25696
	ctx.r26.s64 = ctx.r11.s64 + -25696;
loc_899AA2DC:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lwzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwzx r4,r31,r24
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// bl 0x899cc438
	ctx.lr = 0x899AA304;
	sub_899CC438(ctx, base);
	// addi r29,r29,8192
	ctx.r29.s64 = ctx.r29.s64 + 8192;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x899aa2dc
	if (ctx.cr6.lt) goto loc_899AA2DC;
loc_899AA314:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r10,r31,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x89933b88
	ctx.lr = 0x899AA328;
	sub_89933B88(ctx, base);
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,32555(r9)
	REX_STORE_U8(ctx.r9.u32 + 32555, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899AA340:
	// lis r11,-2
	ctx.r11.s64 = -131072;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x899aa364
	if (!ctx.cr6.lt) goto loc_899AA364;
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
loc_899AA35C:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u8);
loc_899AA364:
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r4,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r3,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x899aa3e8
	goto loc_899AA3E8;
loc_899AA398:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899AA3A0;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x899aa3bc
	if (!ctx.cr6.lt) goto loc_899AA3BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899AA3BC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899a9f48
	ctx.lr = 0x899AA3C4;
	sub_899A9F48(ctx, base);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r8,r30,196
	ctx.r8.s64 = ctx.r30.s64 + 196;
	// addi r7,r30,196
	ctx.r7.s64 = ctx.r30.s64 + 196;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// lbzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stbx r5,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u8);
loc_899AA3E8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89932b18
	ctx.lr = 0x899AA3F0;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89932d30
	ctx.lr = 0x899AA3FC;
	sub_89932D30(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// bge cr6,0x899aa418
	if (!ctx.cr6.lt) goto loc_899AA418;
	// li r10,128
	ctx.r10.s64 = 128;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899AA418:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 384, ctx.xer);
	// ble cr6,0x899aa430
	if (!ctx.cr6.gt) goto loc_899AA430;
	// li r10,384
	ctx.r10.s64 = 384;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899AA430:
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
	// addi r5,r11,-124
	ctx.r5.s64 = ctx.r11.s64 + -124;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// srawi r11,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 3;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r7,r30,36
	ctx.r7.s64 = ctx.r30.s64 + 36;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899AEA00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899AEA08;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30225
	ctx.r11.s64 = -1980825600;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r31,r11,-17272
	ctx.r31.s64 = ctx.r11.s64 + -17272;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r11,r31,2232
	ctx.r11.s64 = ctx.r31.s64 + 2232;
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
	ctx.lr = 0x899AEA48;
	sub_89934FB8(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r5,r31,2232
	ctx.r5.s64 = ctx.r31.s64 + 2232;
	// addi r26,r11,29808
	ctx.r26.s64 = ctx.r11.s64 + 29808;
	// addi r4,r31,2392
	ctx.r4.s64 = ctx.r31.s64 + 2392;
	// addi r6,r26,-36
	ctx.r6.s64 = ctx.r26.s64 + -36;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935688
	ctx.lr = 0x899AEA68;
	sub_89935688(ctx, base);
	// addi r8,r31,2312
	ctx.r8.s64 = ctx.r31.s64 + 2312;
	// li r10,192
	ctx.r10.s64 = 192;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,232
	ctx.r9.s64 = 232;
	// li r8,-8
	ctx.r8.s64 = -8;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x89934fb8
	ctx.lr = 0x899AEA94;
	sub_89934FB8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r31,2312
	ctx.r9.s64 = ctx.r31.s64 + 2312;
	// addi r11,r31,2904
	ctx.r11.s64 = ctx.r31.s64 + 2904;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r25,r8,3484
	ctx.r25.s64 = ctx.r8.s64 + 3484;
loc_899AEAAC:
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
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899aeaac
	if (ctx.cr6.lt) goto loc_899AEAAC;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r10,r10,-6184
	ctx.r10.s64 = ctx.r10.s64 + -6184;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899aeb7c
	if (ctx.cr6.eq) goto loc_899AEB7C;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_899AEAF8:
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// lbz r4,3(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r3,2(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// addi r5,r31,1760
	ctx.r5.s64 = ctx.r31.s64 + 1760;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r10,5(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// extsb r24,r11
	ctx.r24.s64 = ctx.r11.s8;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbzu r7,6(r30)
	ea = 6 + ctx.r30.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// rlwinm r6,r3,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r28,r4,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// neg r7,r6
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// neg r8,r28
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r28.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89934fb8
	ctx.lr = 0x899AEB5C;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// add r7,r24,r10
	ctx.r7.u64 = ctx.r24.u64 + ctx.r10.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899aeaf8
	if (!ctx.cr6.eq) goto loc_899AEAF8;
loc_899AEB7C:
	// addi r9,r31,1760
	ctx.r9.s64 = ctx.r31.s64 + 1760;
	// addi r10,r31,808
	ctx.r10.s64 = ctx.r31.s64 + 808;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_899AEB88:
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
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// blt cr6,0x899aeb88
	if (ctx.cr6.lt) goto loc_899AEB88;
	// addi r9,r31,1760
	ctx.r9.s64 = ctx.r31.s64 + 1760;
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// addi r11,r31,1336
	ctx.r11.s64 = ctx.r31.s64 + 1336;
	// addi r9,r9,170
	ctx.r9.s64 = ctx.r9.s64 + 170;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_899AEBC8:
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
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899aebc8
	if (ctx.cr6.lt) goto loc_899AEBC8;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r10,r10,-6152
	ctx.r10.s64 = ctx.r10.s64 + -6152;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899aec90
	if (ctx.cr6.eq) goto loc_899AEC90;
	// addi r30,r10,-8
	ctx.r30.s64 = ctx.r10.s64 + -8;
loc_899AEC14:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r8,15(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// lbz r4,14(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// addi r3,r31,1024
	ctx.r3.s64 = ctx.r31.s64 + 1024;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r6,9(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lbz r7,10(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,11(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// clrlwi r24,r5,16
	ctx.r24.u64 = ctx.r5.u32 & 0xFFFF;
	// lbz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r4,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// lbz r10,13(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// sth r24,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r24.u16);
	// li r4,7
	ctx.r4.s64 = 7;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x89934b48
	ctx.lr = 0x899AEC6C;
	sub_89934B48(ctx, base);
	// lbzu r10,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899aec14
	if (!ctx.cr6.eq) goto loc_899AEC14;
loc_899AEC90:
	// addi r6,r31,112
	ctx.r6.s64 = ctx.r31.s64 + 112;
	// addi r5,r31,1024
	ctx.r5.s64 = ctx.r31.s64 + 1024;
	// addi r4,r31,2504
	ctx.r4.s64 = ctx.r31.s64 + 2504;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x899AECA8;
	sub_89935B08(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r10,r11,-6056
	ctx.r10.s64 = ctx.r11.s64 + -6056;
	// lbz r11,-6056(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -6056);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899aed3c
	if (ctx.cr6.eq) goto loc_899AED3C;
	// addi r30,r10,-8
	ctx.r30.s64 = ctx.r10.s64 + -8;
loc_899AECC4:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r8,15(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// lbz r28,14(r30)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// addi r4,r31,2016
	ctx.r4.s64 = ctx.r31.s64 + 2016;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r6,9(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// extsb r24,r8
	ctx.r24.s64 = ctx.r8.s8;
	// lbz r7,10(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,11(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// sth r24,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r24.u16);
	// li r5,8
	ctx.r5.s64 = 8;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lbz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// add r24,r3,r4
	ctx.r24.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r10,13(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x89934b48
	ctx.lr = 0x899AED18;
	sub_89934B48(ctx, base);
	// lbzu r10,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899aecc4
	if (!ctx.cr6.eq) goto loc_899AECC4;
loc_899AED3C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_899AED44:
	// addi r10,r31,1448
	ctx.r10.s64 = ctx.r31.s64 + 1448;
	// mulli r9,r30,156
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(156));
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwimi r3,r11,14,16,17
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF3FFF);
	// addi r5,r31,2016
	ctx.r5.s64 = ctx.r31.s64 + 2016;
	// li r7,9
	ctx.r7.s64 = 9;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x89935610
	ctx.lr = 0x899AED68;
	sub_89935610(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x899aed44
	if (ctx.cr6.lt) goto loc_899AED44;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r10,r11,-6024
	ctx.r10.s64 = ctx.r11.s64 + -6024;
	// lbz r11,-6024(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -6024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899aee04
	if (ctx.cr6.eq) goto loc_899AEE04;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_899AED98:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r6,2(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// lbz r8,3(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r10,5(r30)
	ea = 5 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// addi r4,r31,728
	ctx.r4.s64 = ctx.r31.s64 + 728;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,-32
	ctx.r7.s64 = -32;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x89934fb8
	ctx.lr = 0x899AEDE4;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// bne cr6,0x899aed98
	if (!ctx.cr6.eq) goto loc_899AED98;
loc_899AEE04:
	// addi r9,r31,728
	ctx.r9.s64 = ctx.r31.s64 + 728;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_899AEE10:
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
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899aee10
	if (ctx.cr6.lt) goto loc_899AEE10;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r28,r8,32768
	ctx.r28.u64 = ctx.r8.u64 | 32768;
	// addi r9,r9,9016
	ctx.r9.s64 = ctx.r9.s64 + 9016;
loc_899AEE58:
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r11,5,22,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3E0;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
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
	// rlwinm r25,r4,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r7,r6,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r11,r4,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// mulli r3,r6,32256
	ctx.r3.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(32256));
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// srawi r24,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r24.s64 = ctx.r3.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// addi r29,r31,112
	ctx.r29.s64 = ctx.r31.s64 + 112;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stwx r11,r25,r5
	REX_STORE_U32(ctx.r25.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r5,r29,20
	ctx.r5.s64 = ctx.r29.s64 + 20;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r8,r31,112
	ctx.r8.s64 = ctx.r31.s64 + 112;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// stwx r10,r25,r5
	REX_STORE_U32(ctx.r25.u32 + ctx.r5.u32, ctx.r10.u32);
	// addi r6,r31,112
	ctx.r6.s64 = ctx.r31.s64 + 112;
	// addi r7,r31,112
	ctx.r7.s64 = ctx.r31.s64 + 112;
	// stwx r10,r25,r3
	REX_STORE_U32(ctx.r25.u32 + ctx.r3.u32, ctx.r10.u32);
	// subf r24,r28,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r28.u64;
	// addi r5,r8,32
	ctx.r5.s64 = ctx.r8.s64 + 32;
	// addi r23,r31,112
	ctx.r23.s64 = ctx.r31.s64 + 112;
	// stwx r24,r25,r4
	REX_STORE_U32(ctx.r25.u32 + ctx.r4.u32, ctx.r24.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// addi r7,r7,28
	ctx.r7.s64 = ctx.r7.s64 + 28;
	// extsh r8,r26
	ctx.r8.s64 = ctx.r26.s16;
	// stwx r27,r25,r5
	REX_STORE_U32(ctx.r25.u32 + ctx.r5.u32, ctx.r27.u32);
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stwx r10,r25,r23
	REX_STORE_U32(ctx.r25.u32 + ctx.r23.u32, ctx.r10.u32);
	// neg r4,r24
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r24.u64);
	// stwx r10,r25,r30
	REX_STORE_U32(ctx.r25.u32 + ctx.r30.u32, ctx.r10.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stwx r3,r25,r7
	REX_STORE_U32(ctx.r25.u32 + ctx.r7.u32, ctx.r3.u32);
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// stwx r4,r25,r6
	REX_STORE_U32(ctx.r25.u32 + ctx.r6.u32, ctx.r4.u32);
	// blt cr6,0x899aee58
	if (ctx.cr6.lt) goto loc_899AEE58;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B1020) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899B1028;
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
	// blt cr6,0x899b12d0
	if (ctx.cr6.lt) goto loc_899B12D0;
	// beq cr6,0x899b1140
	if (ctx.cr6.eq) goto loc_899B1140;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x899b1068
	if (ctx.cr6.lt) goto loc_899B1068;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// b 0x899b13e0
	goto loc_899B13E0;
loc_899B1068:
	// addi r8,r30,189
	ctx.r8.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x899b1108
	if (ctx.cr6.lt) goto loc_899B1108;
	// beq cr6,0x899b10d4
	if (ctx.cr6.eq) goto loc_899B10D4;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x899b13e0
	if (!ctx.cr6.lt) goto loc_899B13E0;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899b10a4
	if (!ctx.cr6.lt) goto loc_899B10A4;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899B10A4:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r10,-96
	ctx.r10.s64 = -6291456;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899b13e0
	if (ctx.cr6.gt) goto loc_899B13E0;
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
	// b 0x899b13e0
	goto loc_899B13E0;
loc_899B10D4:
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
	// blt cr6,0x899b13e0
	if (ctx.cr6.lt) goto loc_899B13E0;
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
	// b 0x899b13e0
	goto loc_899B13E0;
loc_899B1108:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r7,r30,158
	ctx.r7.s64 = ctx.r30.s64 + 158;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// sthx r4,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u16);
	// ori r4,r5,14
	ctx.r4.u64 = ctx.r5.u64 | 14;
	// ori r3,r3,63
	ctx.r3.u64 = ctx.r3.u64 | 63;
	// stbx r9,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
	// stbx r4,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u8);
	// stbx r3,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// b 0x899b13e0
	goto loc_899B13E0;
loc_899B1140:
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
	// bgt cr6,0x899b13e0
	if (ctx.cr6.gt) goto loc_899B13E0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899b1198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B1198;
	// bdzf 4*cr6+eq,0x899b11d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B11D0;
	// bdzf 4*cr6+eq,0x899b1214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B1214;
	// bdzf 4*cr6+eq,0x899b126c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B126C;
	// bne cr6,0x899b12a4
	if (!ctx.cr6.eq) goto loc_899B12A4;
	// cmpwi cr6,r8,3600
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3600, ctx.xer);
	// ble cr6,0x899b1294
	if (!ctx.cr6.gt) goto loc_899B1294;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// b 0x899b13e0
	goto loc_899B13E0;
loc_899B1198:
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991d830
	ctx.lr = 0x899B11B0;
	sub_8991D830(ctx, base);
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r6,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u8);
	// ori r7,r8,12
	ctx.r7.u64 = ctx.r8.u64 | 12;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// b 0x899b13e0
	goto loc_899B13E0;
loc_899B11D0:
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
	// bge cr6,0x899b11f0
	if (!ctx.cr6.lt) goto loc_899B11F0;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899B11F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8991d8e0
	ctx.lr = 0x899B11F8;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899b13e0
	if (ctx.cr6.eq) goto loc_899B13E0;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899b13e0
	goto loc_899B13E0;
loc_899B1214:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899b1230
	if (ctx.cr6.eq) goto loc_899B1230;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x899b13e0
	goto loc_899B13E0;
loc_899B1230:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r8,r30,194
	ctx.r8.s64 = ctx.r30.s64 + 194;
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// lbzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// ori r6,r10,63
	ctx.r6.u64 = ctx.r10.u64 | 63;
	// rlwinm r7,r3,0,30,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// stbx r4,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u8);
	// b 0x899b13e0
	goto loc_899B13E0;
loc_899B126C:
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
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// andc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// clrlwi r3,r4,26
	ctx.r3.u64 = ctx.r4.u32 & 0x3F;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899b13e0
	if (!ctx.cr6.eq) goto loc_899B13E0;
loc_899B1294:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x899b13e0
	goto loc_899B13E0;
loc_899B12A4:
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
	// blt cr6,0x899b13e0
	if (ctx.cr6.lt) goto loc_899B13E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x899b13e0
	goto loc_899B13E0;
loc_899B12D0:
	// addi r9,r30,189
	ctx.r9.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x899b13c8
	if (ctx.cr6.gt) goto loc_899B13C8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899b131c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B131C;
	// bdzf 4*cr6+eq,0x899b1358
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B1358;
	// bne cr6,0x899b1388
	if (!ctx.cr6.eq) goto loc_899B1388;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x899b13c8
	if (!ctx.cr6.lt) goto loc_899B13C8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// b 0x899b13c8
	goto loc_899B13C8;
loc_899B131C:
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
	// bne 0x899b13c8
	if (!ctx.cr0.eq) goto loc_899B13C8;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r8,r30,71
	ctx.r8.s64 = ctx.r30.s64 + 71;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r6,255
	ctx.r6.s64 = 255;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// lbzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r6,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u8);
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899b13c8
	goto loc_899B13C8;
loc_899B1358:
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
	// bgt cr6,0x899b13c8
	if (ctx.cr6.gt) goto loc_899B13C8;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x899b13c8
	goto loc_899B13C8;
loc_899B1388:
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
loc_899B13C8:
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
loc_899B13E0:
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
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
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

DEFINE_REX_FUNC(sub_899B5CB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899B5CC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b968
	ctx.lr = 0x899B5CD0;
	sub_8991B968(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899b5ce0
	if (!ctx.cr6.eq) goto loc_899B5CE0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899B5CE0:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// extsh r9,r30
	ctx.r9.s64 = ctx.r30.s16;
	// addi r31,r10,12800
	ctx.r31.s64 = ctx.r10.s64 + 12800;
	// mulli r28,r9,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwz r11,6056(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwzx r5,r28,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// bl 0x8991b6a0
	ctx.lr = 0x899B5D28;
	sub_8991B6A0(ctx, base);
	// bl 0x8991c610
	ctx.lr = 0x899B5D2C;
	sub_8991C610(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lis r11,12
	ctx.r11.s64 = 786432;
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// addi r9,r31,200
	ctx.r9.s64 = ctx.r31.s64 + 200;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwzx r5,r28,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r4,48(r27)
	REX_STORE_U32(ctx.r27.u32 + 48, ctx.r4.u32);
	// addi r7,r31,154
	ctx.r7.s64 = ctx.r31.s64 + 154;
	// stw r29,60(r27)
	REX_STORE_U32(ctx.r27.u32 + 60, ctx.r29.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwzx r11,r28,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r11.u32);
	// stb r8,206(r27)
	REX_STORE_U8(ctx.r27.u32 + 206, ctx.r8.u8);
	// lbzx r11,r28,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stw r6,164(r27)
	REX_STORE_U32(ctx.r27.u32 + 164, ctx.r6.u32);
	// sth r30,148(r27)
	REX_STORE_U16(ctx.r27.u32 + 148, ctx.r30.u16);
	// stb r9,204(r27)
	REX_STORE_U8(ctx.r27.u32 + 204, ctx.r9.u8);
	// stb r9,200(r27)
	REX_STORE_U8(ctx.r27.u32 + 200, ctx.r9.u8);
	// lhzx r8,r28,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r7.u32);
	// sth r8,154(r27)
	REX_STORE_U16(ctx.r27.u32 + 154, ctx.r8.u16);
	// bl 0x89936360
	ctx.lr = 0x899B5D94;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B7370) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899B7378;
	__savegprlr_29(ctx, base);
	// stwu r1,-1072(r1)
	ea = -1072 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,96
	ctx.r8.s64 = 96;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// sth r9,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// li r10,168
	ctx.r10.s64 = 168;
	// li r9,-12
	ctx.r9.s64 = -12;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x89934b48
	ctx.lr = 0x899B73B8;
	sub_89934B48(ctx, base);
	// addi r7,r1,220
	ctx.r7.s64 = ctx.r1.s64 + 220;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// sth r6,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r6.u16);
	// li r10,136
	ctx.r10.s64 = 136;
	// stb r5,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// li r9,-12
	ctx.r9.s64 = -12;
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x89934b48
	ctx.lr = 0x899B73F4;
	sub_89934B48(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30225
	ctx.r10.s64 = -1980825600;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,26776
	ctx.r29.s64 = ctx.r11.s64 + 26776;
	// addi r30,r10,1792
	ctx.r30.s64 = ctx.r10.s64 + 1792;
loc_899B7408:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_899B7414:
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
	// addi r7,r30,-920
	ctx.r7.s64 = ctx.r30.s64 + -920;
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
loc_899B745C:
	// lhzu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x899b745c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899B745C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899b7414
	if (ctx.cr6.lt) goto loc_899B7414;
	// addi r9,r30,-920
	ctx.r9.s64 = ctx.r30.s64 + -920;
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
	ctx.lr = 0x899B74A0;
	sub_89935B08(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x899b7408
	if (ctx.cr6.lt) goto loc_899B7408;
	// addi r1,r1,1072
	ctx.r1.s64 = ctx.r1.s64 + 1072;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B7D08) {
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
	ctx.lr = 0x899B7D20;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899b7d38
	if (!ctx.cr6.eq) goto loc_899B7D38;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899B7D38:
	// lis r11,-30309
	ctx.r11.s64 = -1986330624;
	// addi r3,r11,31768
	ctx.r3.s64 = ctx.r11.s64 + 31768;
	// bl 0x89915de0
	ctx.lr = 0x899B7D44;
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

DEFINE_REX_FUNC(sub_899B7D58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899B7D60;
	__savegprlr_23(ctx, base);
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
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899b7d94
	if (ctx.cr6.lt) goto loc_899B7D94;
	// bne cr6,0x899b8028
	if (!ctx.cr6.eq) goto loc_899B8028;
	// bl 0x899c40c0
	ctx.lr = 0x899B7D8C;
	sub_899C40C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B7D94:
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r6,r30,168
	ctx.r6.s64 = ctx.r30.s64 + 168;
	// addi r25,r11,9016
	ctx.r25.s64 = ctx.r11.s64 + 9016;
	// addi r24,r30,48
	ctx.r24.s64 = ctx.r30.s64 + 48;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// lwzx r7,r31,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 128;
	// lwzx r8,r31,r24
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// srawi r9,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 4;
	// rlwinm r11,r4,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r11,r25
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// mullw r4,r11,r9
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r8,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r8.u32);
	// lhzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r24.u32);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// addic. r11,r5,-160
	ctx.xer.ca = ctx.r5.u32 > 159;
	ctx.r11.s64 = ctx.r5.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899b7df8
	if (!ctx.cr0.lt) goto loc_899B7DF8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899B7DF8:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// ble cr6,0x899b7e10
	if (!ctx.cr6.gt) goto loc_899B7E10;
loc_899B7E00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B7E10:
	// rlwinm r11,r10,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// lhzx r4,r11,r25
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r10,r31,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r4,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r4.u32);
	// lhzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r23.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r11,r10,-512
	ctx.xer.ca = ctx.r10.u32 > 511;
	ctx.r11.s64 = ctx.r10.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899b7e50
	if (!ctx.cr0.lt) goto loc_899B7E50;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899B7E50:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x899b7e00
	if (ctx.cr6.gt) goto loc_899B7E00;
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x899b8028
	if (ctx.cr6.gt) goto loc_899B8028;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899b7ea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B7EA0;
	// bdzf 4*cr6+eq,0x899b7ec0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B7EC0;
	// bne cr6,0x899b8008
	if (!ctx.cr6.eq) goto loc_899B8008;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x899b8028
	if (!ctx.cr6.lt) goto loc_899B8028;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B7EA0:
	// addic. r11,r7,-16384
	ctx.xer.ca = ctx.r7.u32 > 16383;
	ctx.r11.s64 = ctx.r7.s64 + -16384;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// bne 0x899b8028
	if (!ctx.cr0.eq) goto loc_899B8028;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B7EC0:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// li r29,0
	ctx.r29.s64 = 0;
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
	// blt cr6,0x899b7eec
	if (ctx.cr6.lt) goto loc_899B7EEC;
	// stbx r29,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
loc_899B7EEC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8991db50
	ctx.lr = 0x899B7EF8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b8028
	if (ctx.cr6.eq) goto loc_899B8028;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// li r26,5
	ctx.r26.s64 = 5;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// ori r28,r11,24576
	ctx.r28.u64 = ctx.r11.u64 | 24576;
loc_899B7F68:
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// neg r9,r29
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r29.u64);
	// addi r8,r30,200
	ctx.r8.s64 = ctx.r30.s64 + 200;
	// lwzx r5,r31,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// rlwinm r7,r11,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// lwzx r10,r31,r24
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// rlwinm r6,r9,9,0,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// divwu r4,r7,r26
	ctx.r4.u64 = uint32_t(ctx.r26.u32 ? ctx.r7.u32 / ctx.r26.u32 : 0);
	// divw r3,r6,r26
	ctx.r3.u64 = uint32_t((ctx.r26.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r26.s32 == -1)) ? ctx.r6.s32 / ctx.r26.s32 : 0);
	// rlwinm r11,r4,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// subf r7,r11,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r11.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r4,r7,128
	ctx.r4.s64 = ctx.r7.s64 + 128;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r9,r4,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lhzx r11,r6,r25
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r25.u32);
	// extsb r6,r4
	ctx.r6.s64 = ctx.r4.s8;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// lhzx r11,r9,r25
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r25.u32);
	// mullw r9,r4,r28
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// mullw r11,r4,r28
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x899a8438
	ctx.lr = 0x899B7FEC;
	sub_899A8438(ctx, base);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// blt cr6,0x899b7f68
	if (ctx.cr6.lt) goto loc_899B7F68;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899B8008:
	// addi r11,r7,16384
	ctx.r11.s64 = ctx.r7.s64 + 16384;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x899b8028
	if (!ctx.cr6.gt) goto loc_899B8028;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
loc_899B8028:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BD5D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30269
	ctx.r5.s64 = -1983709184;
	// addi r9,r6,9656
	ctx.r9.s64 = ctx.r6.s64 + 9656;
	// lwz r11,27852(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 27852);
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lbz r10,4946(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 4946);
	// addi r3,r9,64
	ctx.r3.s64 = ctx.r9.s64 + 64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mulli r7,r10,92
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(92));
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lwzx r6,r7,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// sth r10,-17120(r5)
	REX_STORE_U16(ctx.r5.u32 + -17120, ctx.r10.u16);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,27852(r8)
	REX_STORE_U32(ctx.r8.u32 + 27852, ctx.r11.u32);
	// lwzx r11,r6,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// stw r11,12024(r4)
	REX_STORE_U32(ctx.r4.u32 + 12024, ctx.r11.u32);
	// b 0x899bd3a8
	sub_899BD3A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BDB18) {
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
	ctx.lr = 0x899BDB30;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899bdb4c
	if (!ctx.cr6.eq) goto loc_899BDB4C;
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
loc_899BDB4C:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,-9760
	ctx.r3.s64 = ctx.r11.s64 + -9760;
	// bl 0x89915de0
	ctx.lr = 0x899BDB58;
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

DEFINE_REX_FUNC(sub_899BDB68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x899BDB70;
	__savegprlr_21(ctx, base);
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
	// addi r25,r30,8
	ctx.r25.s64 = ctx.r30.s64 + 8;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x899bde98
	if (ctx.cr6.eq) goto loc_899BDE98;
	// addi r6,r30,188
	ctx.r6.s64 = ctx.r30.s64 + 188;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899bdc78
	if (ctx.cr6.lt) goto loc_899BDC78;
	// beq cr6,0x899bdbf0
	if (ctx.cr6.eq) goto loc_899BDBF0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x899bdc94
	if (!ctx.cr6.lt) goto loc_899BDC94;
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
	// bne cr6,0x899bdc94
	if (!ctx.cr6.eq) goto loc_899BDC94;
	// b 0x899bdc8c
	goto loc_899BDC8C;
loc_899BDBF0:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x899bdc5c
	if (ctx.cr6.eq) goto loc_899BDC5C;
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
	// b 0x899bdc94
	goto loc_899BDC94;
loc_899BDC5C:
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
	// b 0x899bdc94
	goto loc_899BDC94;
loc_899BDC78:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r10,288
	ctx.r10.s64 = 18874368;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899bdc94
	if (!ctx.cr6.lt) goto loc_899BDC94;
loc_899BDC8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
loc_899BDC94:
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r29,r11,9016
	ctx.r29.s64 = ctx.r11.s64 + 9016;
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
	// lhzx r11,r3,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r29.u32);
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
	// bge 0x899bdcf8
	if (!ctx.cr0.lt) goto loc_899BDCF8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899BDCF8:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// ble cr6,0x899bdd0c
	if (!ctx.cr6.gt) goto loc_899BDD0C;
loc_899BDD00:
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BDD0C:
	// rlwinm r11,r10,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// lhzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
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
	// stwx r3,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r3.u32);
	// lhzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r11,r10,-512
	ctx.xer.ca = ctx.r10.u32 > 511;
	ctx.r11.s64 = ctx.r10.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899bdd4c
	if (!ctx.cr0.lt) goto loc_899BDD4C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899BDD4C:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x899bdd00
	if (ctx.cr6.gt) goto loc_899BDD00;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x89932b18
	ctx.lr = 0x899BDD5C;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x89932d30
	ctx.lr = 0x899BDD68;
	sub_89932D30(ctx, base);
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lis r9,-21846
	ctx.r9.s64 = -1431699456;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// ori r8,r9,43691
	ctx.r8.u64 = ctx.r9.u64 | 43691;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mulhwu r7,r11,r8
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r4,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 4;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stwx r9,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// stwx r8,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x899BDDB8;
	sub_8991B610(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BDDC8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bdea0
	if (ctx.cr6.eq) goto loc_899BDEA0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899BDDD8;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bdea0
	if (ctx.cr6.eq) goto loc_899BDEA0;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r23,5
	ctx.r23.s64 = 5;
	// addi r25,r11,1028
	ctx.r25.s64 = ctx.r11.s64 + 1028;
	// lis r24,4
	ctx.r24.s64 = 262144;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_899BDDF4:
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,2
	ctx.r3.s64 = 2;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
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
	// lhzx r5,r5,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r29.u32);
	// lhzx r8,r8,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r5,r4,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
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
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// divw r11,r4,r23
	ctx.r11.u64 = uint32_t((ctx.r23.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r23.s32 == -1)) ? ctx.r4.s32 / ctx.r23.s32 : 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r24,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r24.u64;
	// bl 0x899cc3d0
	ctx.lr = 0x899BDE78;
	sub_899CC3D0(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r10,r25,8
	ctx.r10.s64 = ctx.r25.s64 + 8;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x899bddf4
	if (ctx.cr6.lt) goto loc_899BDDF4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x89932a38
	ctx.lr = 0x899BDE90;
	sub_89932A38(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899BDE98:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x899c40c0
	ctx.lr = 0x899BDEA0;
	sub_899C40C0(ctx, base);
loc_899BDEA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BF580) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899BF588;
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
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899bf5e0
	if (ctx.cr6.lt) goto loc_899BF5E0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x899bf628
	if (!ctx.cr6.lt) goto loc_899BF628;
	// lis r12,-176
	ctx.r12.s64 = -11534336;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// ori r12,r12,16383
	ctx.r12.u64 = ctx.r12.u64 | 16383;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899BF5E0:
	// addi r11,r30,207
	ctx.r11.s64 = ctx.r30.s64 + 207;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r27,r30,200
	ctx.r27.s64 = ctx.r30.s64 + 200;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// li r4,6
	ctx.r4.s64 = 6;
	// lbzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x899d4440
	ctx.lr = 0x899BF60C;
	sub_899D4440(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r4,r31,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x8992e330
	ctx.lr = 0x899BF620;
	sub_8992E330(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
loc_899BF628:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C0130) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899C0138;
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
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x899c0278
	if (ctx.cr6.gt) goto loc_899C0278;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899c01f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C01F4;
	// bdzf 4*cr6+eq,0x899c01f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C01F4;
	// bdzf 4*cr6+eq,0x899c01f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C01F4;
	// bdzf 4*cr6+eq,0x899c01f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C01F4;
	// bne cr6,0x899c0220
	if (!ctx.cr6.eq) goto loc_899C0220;
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r30,207
	ctx.r10.s64 = ctx.r30.s64 + 207;
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// li r4,6
	ctx.r4.s64 = 6;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r6,r31,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x899d4440
	ctx.lr = 0x899C01A4;
	sub_899D4440(ctx, base);
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x89936360
	ctx.lr = 0x899C01AC;
	sub_89936360(ctx, base);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lbz r8,7935(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 7935);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899c01e4
	if (ctx.cr6.eq) goto loc_899C01E4;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lwzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// lwzx r4,r31,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r8,r10,-25920
	ctx.r8.s64 = ctx.r10.s64 + -25920;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// li r3,3
	ctx.r3.s64 = 3;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x899cba78
	ctx.lr = 0x899C01E4;
	sub_899CBA78(ctx, base);
loc_899C01E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899C01F4:
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// ori r12,r12,49151
	ctx.r12.u64 = ctx.r12.u64 | 49151;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899C0220:
	// bl 0x8991b9f0
	ctx.lr = 0x899C0224;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899c0244
	if (ctx.cr6.lt) goto loc_899C0244;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,196
	ctx.r10.s64 = ctx.r30.s64 + 196;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
loc_899C0244:
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r30,207
	ctx.r10.s64 = ctx.r30.s64 + 207;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// li r4,3
	ctx.r4.s64 = 3;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r5,r31,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// bl 0x899d4c10
	ctx.lr = 0x899C0270;
	sub_899D4C10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
loc_899C0278:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C1890) {
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
	ctx.lr = 0x899C18C4;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c18e0
	if (!ctx.cr6.eq) goto loc_899C18E0;
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
loc_899C18E0:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,5968
	ctx.r3.s64 = ctx.r11.s64 + 5968;
	// bl 0x89915de0
	ctx.lr = 0x899C18EC;
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

DEFINE_REX_FUNC(sub_899C1950) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899C1958;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// addi r10,r11,158
	ctx.r10.s64 = ctx.r11.s64 + 158;
	// addi r29,r11,48
	ctx.r29.s64 = ctx.r11.s64 + 48;
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// addi r4,r7,9016
	ctx.r4.s64 = ctx.r7.s64 + 9016;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r11,168
	ctx.r6.s64 = ctx.r11.s64 + 168;
	// addi r28,r11,52
	ctx.r28.s64 = ctx.r11.s64 + 52;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r6,r31,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// sthx r5,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u16);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// stwx r7,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u32);
	// srawi r6,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 4;
	// lhzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r7,r5,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lwzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhzx r5,r7,r4
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mullw r10,r4,r6
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// addic. r9,r9,-160
	ctx.xer.ca = ctx.r9.u32 > 159;
	ctx.r9.s64 = ctx.r9.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r8,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u32);
	// bge 0x899c19f8
	if (!ctx.cr0.lt) goto loc_899C19F8;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899C19F8:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// bgt cr6,0x899c1af4
	if (ctx.cr6.gt) goto loc_899C1AF4;
	// lhzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addic. r9,r8,-512
	ctx.xer.ca = ctx.r8.u32 > 511;
	ctx.r9.s64 = ctx.r8.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x899c1a14
	if (!ctx.cr0.lt) goto loc_899C1A14;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899C1A14:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// bgt cr6,0x899c1af4
	if (ctx.cr6.gt) goto loc_899C1AF4;
	// addi r10,r10,16384
	ctx.r10.s64 = ctx.r10.s64 + 16384;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// srawi r7,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 15;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// addi r6,r8,2184
	ctx.r6.s64 = ctx.r8.s64 + 2184;
	// addi r5,r9,-8
	ctx.r5.s64 = ctx.r9.s64 + -8;
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// clrlwi r8,r5,28
	ctx.r8.u64 = ctx.r5.u32 & 0xF;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r9,r31,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// clrlwi r4,r5,30
	ctx.r4.u64 = ctx.r5.u32 & 0x3;
	// lbzx r11,r8,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stwx r4,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r10,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x899C1A70;
	sub_8991B610(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C1A80;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c1afc
	if (ctx.cr6.eq) goto loc_899C1AFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899C1A90;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c1afc
	if (ctx.cr6.eq) goto loc_899C1AFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C1AA0;
	sub_89932A38(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lwzx r30,r31,r28
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// lwzx r31,r31,r29
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// mulli r9,r10,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// bl 0x89932c20
	ctx.lr = 0x899C1AD4;
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
	ctx.lr = 0x899C1AEC;
	sub_899CC3D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899C1AF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_899C1AFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C2A18) {
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
	// b 0x899c2760
	sub_899C2760(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C2B20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899C2B28;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r30,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x899c2df4
	if (ctx.cr6.gt) goto loc_899C2DF4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899c2b74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C2B74;
	// bdzf 4*cr6+eq,0x899c2b74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C2B74;
	// bdzf 4*cr6+eq,0x899c2b74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C2B74;
	// bdzf 4*cr6+eq,0x899c2bc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C2BC4;
	// bdzf 4*cr6+eq,0x899c2d3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C2D3C;
	// bdzf 4*cr6+eq,0x899c2d3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C2D3C;
	// bne cr6,0x899c2d3c
	if (!ctx.cr6.eq) goto loc_899C2D3C;
loc_899C2B74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c8b8
	ctx.lr = 0x899C2B7C;
	sub_8991C8B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c718
	ctx.lr = 0x899C2B84;
	sub_8991C718(ctx, base);
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// lhzx r7,r30,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// clrlwi r6,r7,30
	ctx.r6.u64 = ctx.r7.u32 & 0x3;
	// addi r5,r11,512
	ctx.r5.s64 = ctx.r11.s64 + 512;
	// stwx r6,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r6.u32);
	// srawi r4,r5,10
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 10;
	// clrlwi r11,r4,27
	ctx.r11.u64 = ctx.r4.u32 & 0x1F;
	// stwx r11,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x899C2BBC;
	sub_8991B610(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899C2BC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899C2BCC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899c2be8
	if (!ctx.cr6.lt) goto loc_899C2BE8;
loc_899C2BD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899c2a80
	ctx.lr = 0x899C2BE0;
	sub_899C2A80(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899C2BE8:
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// addi r4,r9,9016
	ctx.r4.s64 = ctx.r9.s64 + 9016;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r30,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// lwzx r3,r30,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// rlwinm r29,r29,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r28,r9,128
	ctx.r28.s64 = ctx.r9.s64 + 128;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// rlwinm r3,r28,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// lhzx r29,r29,r4
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r4.u32);
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// addi r26,r31,200
	ctx.r26.s64 = ctx.r31.s64 + 200;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lhzx r4,r3,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r4.u32);
	// addi r3,r31,206
	ctx.r3.s64 = ctx.r31.s64 + 206;
	// mullw r25,r9,r29
	ctx.r25.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// srawi r25,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 8;
	// mullw r24,r10,r4
	ctx.r24.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r24,r24,8
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 8;
	// mullw r29,r29,r10
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// subf r10,r25,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r25.u64;
	// mullw r25,r9,r4
	ctx.r25.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r31,28
	ctx.r24.s64 = ctx.r31.s64 + 28;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r23,r31,200
	ctx.r23.s64 = ctx.r31.s64 + 200;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// srawi r4,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r29.s32 >> 8;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwzx r10,r30,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// srawi r9,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 8;
	// addis r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 786432;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stwx r5,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lwzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r10.u32);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// lbzx r7,r11,r26
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// subfc r4,r9,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r9.u32;
	ctx.r4.u64 = ctx.r6.u64 - ctx.r9.u64;
	// eqv r9,r9,r6
	ctx.r9.u64 = ~(ctx.r9.u64 ^ ctx.r6.u64);
	// lbzx r6,r30,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u32);
	// rlwinm r4,r9,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwzx r9,r30,r24
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r31,20
	ctx.r8.s64 = ctx.r31.s64 + 20;
	// stbx r10,r30,r23
	REX_STORE_U8(ctx.r30.u32 + ctx.r23.u32, ctx.r10.u8);
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r4,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r3,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899C2D3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899C2D44;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899c2bd8
	if (ctx.cr6.lt) goto loc_899C2BD8;
	// lwzx r10,r30,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r30,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// rlwinm r7,r10,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// lwzx r3,r8,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r10,r3,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	// lwzx r9,r30,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r8,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r9,r30,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// stwx r5,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r5.u32);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stwx r5,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// beq cr6,0x899c2dec
	if (ctx.cr6.eq) goto loc_899C2DEC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x899c2ddc
	if (ctx.cr6.eq) goto loc_899C2DDC;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x899c2df4
	if (!ctx.cr6.eq) goto loc_899C2DF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899c2598
	ctx.lr = 0x899C2DD4;
	sub_899C2598(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899C2DDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899c23e8
	ctx.lr = 0x899C2DE4;
	sub_899C23E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899C2DEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899c22e0
	ctx.lr = 0x899C2DF4;
	sub_899C22E0(ctx, base);
loc_899C2DF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C46B8) {
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
	ctx.lr = 0x899C46D0;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c46e8
	if (!ctx.cr6.eq) goto loc_899C46E8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899C46E8:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,17872
	ctx.r3.s64 = ctx.r11.s64 + 17872;
	// bl 0x89915de0
	ctx.lr = 0x899C46F4;
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

DEFINE_REX_FUNC(sub_899C4BD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899C4BE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lwz r11,27852(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 27852);
	// lhz r29,26864(r9)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r9.u32 + 26864);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,27852(r10)
	REX_STORE_U32(ctx.r10.u32 + 27852, ctx.r11.u32);
	// bl 0x89934058
	ctx.lr = 0x899C4C08;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c4c1c
	if (!ctx.cr6.eq) goto loc_899C4C1C;
loc_899C4C10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899C4C1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991f608
	ctx.lr = 0x899C4C24;
	sub_8991F608(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899c4c10
	if (ctx.cr6.eq) goto loc_899C4C10;
	// lis r31,-30253
	ctx.r31.s64 = -1982660608;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r30,-4592(r31)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r31.u32 + -4592);
	// bl 0x8991b880
	ctx.lr = 0x899C4C40;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c4c10
	if (ctx.cr6.eq) goto loc_899C4C10;
	// lhz r3,-4592(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + -4592);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-16368
	ctx.r10.s64 = -1072693248;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// mulli r27,r9,208
	ctx.r27.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// ori r5,r10,24
	ctx.r5.u64 = ctx.r10.u64 | 24;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// stwx r5,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r4,r27,r8
	REX_STORE_U32(ctx.r27.u32 + ctx.r8.u32, ctx.r4.u32);
	// stwx r11,r27,r7
	REX_STORE_U32(ctx.r27.u32 + ctx.r7.u32, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stwx r10,r27,r6
	REX_STORE_U32(ctx.r27.u32 + ctx.r6.u32, ctx.r10.u32);
	// bl 0x8991b538
	ctx.lr = 0x899C4C94;
	sub_8991B538(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c578
	ctx.lr = 0x899C4C9C;
	sub_8991C578(ctx, base);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r11,4946(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 4946);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8991c678
	ctx.lr = 0x899C4CB4;
	sub_8991C678(ctx, base);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// ori r5,r7,20077
	ctx.r5.u64 = ctx.r7.u64 | 20077;
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// addi r9,r4,9448
	ctx.r9.s64 = ctx.r4.s64 + 9448;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r10,r3,12032
	ctx.r10.s64 = ctx.r3.s64 + 12032;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// rlwinm r11,r6,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0xFFFFF800;
	// sthx r30,r27,r5
	REX_STORE_U16(ctx.r27.u32 + ctx.r5.u32, ctx.r30.u16);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// addi r8,r31,158
	ctx.r8.s64 = ctx.r31.s64 + 158;
	// stbx r5,r6,r9
	REX_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r5.u8);
	// srawi r7,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// clrlwi r9,r7,17
	ctx.r9.u64 = ctx.r7.u32 & 0x7FFF;
	// stwx r11,r27,r4
	REX_STORE_U32(ctx.r27.u32 + ctx.r4.u32, ctx.r11.u32);
	// stbx r10,r27,r3
	REX_STORE_U8(ctx.r27.u32 + ctx.r3.u32, ctx.r10.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// sthx r9,r27,r8
	REX_STORE_U16(ctx.r27.u32 + ctx.r8.u32, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C55B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899C55B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8991c8b8
	ctx.lr = 0x899C55C4;
	sub_8991C8B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c718
	ctx.lr = 0x899C55CC;
	sub_8991C718(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r8,r30,164
	ctx.r8.s64 = ctx.r30.s64 + 164;
	// addi r7,r30,24
	ctx.r7.s64 = ctx.r30.s64 + 24;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// addi r27,r30,188
	ctx.r27.s64 = ctx.r30.s64 + 188;
	// lhzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r25,r30,36
	ctx.r25.s64 = ctx.r30.s64 + 36;
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lwzx r26,r31,r7
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// srawi r8,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 17;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// lbzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r7,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 4;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// clrlwi r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwzx r9,r26,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r6.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// blt cr6,0x899c575c
	if (ctx.cr6.lt) goto loc_899C575C;
	// bne cr6,0x899c57bc
	if (!ctx.cr6.eq) goto loc_899C57BC;
	// addi r9,r30,185
	ctx.r9.s64 = ctx.r30.s64 + 185;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// bne cr6,0x899c57bc
	if (!ctx.cr6.eq) goto loc_899C57BC;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// addi r8,r10,9016
	ctx.r8.s64 = ctx.r10.s64 + 9016;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// rlwinm r7,r6,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// li r28,0
	ctx.r28.s64 = 0;
	// lhzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stbx r28,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r28.u8);
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhzx r4,r4,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r31,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 14) & 0xFFFFC000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// rlwinm r3,r4,14,0,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// li r3,5
	ctx.r3.s64 = 5;
	// mulli r10,r11,224
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(224));
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x899cba10
	ctx.lr = 0x899C5728;
	sub_899CBA10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C5730;
	sub_89932A38(ctx, base);
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bne cr6,0x899c57bc
	if (!ctx.cr6.eq) goto loc_899C57BC;
	// stbx r28,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r28.u8);
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899C575C:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C576C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c57bc
	if (ctx.cr6.eq) goto loc_899C57BC;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,200
	ctx.r9.s64 = ctx.r30.s64 + 200;
	// lwzx r30,r31,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x8991a9d0
	ctx.lr = 0x899C5794;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c57bc
	if (ctx.cr6.eq) goto loc_899C57BC;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899C57A8;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c57bc
	if (!ctx.cr6.eq) goto loc_899C57BC;
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u8);
loc_899C57BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C6EC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899C6ED0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8991b880
	ctx.lr = 0x899C6EE0;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c6ef0
	if (!ctx.cr6.eq) goto loc_899C6EF0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899C6EF0:
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// addi r31,r8,12800
	ctx.r31.s64 = ctx.r8.s64 + 12800;
	// lis r6,-16208
	ctx.r6.s64 = -1062207488;
	// lhz r3,-4592(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + -4592);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lhz r7,26864(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 26864);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// mulli r28,r10,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// stwx r7,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r6,r6,260
	ctx.r6.u64 = ctx.r6.u64 | 260;
	// stwx r10,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r10.u32);
	// addi r30,r9,-4592
	ctx.r30.s64 = ctx.r9.s64 + -4592;
	// stwx r6,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r6.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stwx r10,r28,r8
	REX_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r10.u32);
	// bl 0x8991b538
	ctx.lr = 0x899C6F44;
	sub_8991B538(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lis r11,352
	ctx.r11.s64 = 23068672;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r11,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r10,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r10.u32);
	// bl 0x8991c578
	ctx.lr = 0x899C6F64;
	sub_8991C578(ctx, base);
	// addi r9,r31,162
	ctx.r9.s64 = ctx.r31.s64 + 162;
	// addi r8,r31,158
	ctx.r8.s64 = ctx.r31.s64 + 158;
	// addi r7,r31,168
	ctx.r7.s64 = ctx.r31.s64 + 168;
	// addi r4,r31,204
	ctx.r4.s64 = ctx.r31.s64 + 204;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r11,116
	ctx.r11.s64 = 116;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// sthx r10,r28,r9
	REX_STORE_U16(ctx.r28.u32 + ctx.r9.u32, ctx.r10.u16);
	// stbx r11,r28,r4
	REX_STORE_U8(ctx.r28.u32 + ctx.r4.u32, ctx.r11.u8);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// stwx r5,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stbx r11,r28,r3
	REX_STORE_U8(ctx.r28.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// sthx r10,r28,r8
	REX_STORE_U16(ctx.r28.u32 + ctx.r8.u32, ctx.r10.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x899c3d90
	ctx.lr = 0x899C6FAC;
	sub_899C3D90(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934058
	ctx.lr = 0x899C6FB4;
	sub_89934058(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C8000) {
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
	ctx.lr = 0x899C8018;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c8030
	if (!ctx.cr6.eq) goto loc_899C8030;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899C8030:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,32560
	ctx.r3.s64 = ctx.r11.s64 + 32560;
	// bl 0x89915de0
	ctx.lr = 0x899C803C;
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

DEFINE_REX_FUNC(sub_899C83C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899C83D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r11,23896
	ctx.r27.s64 = ctx.r11.s64 + 23896;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r31,r27,-616
	ctx.r31.s64 = ctx.r27.s64 + -616;
	// li r25,6
	ctx.r25.s64 = 6;
	// ori r28,r10,32768
	ctx.r28.u64 = ctx.r10.u64 | 32768;
	// addi r26,r11,19308
	ctx.r26.s64 = ctx.r11.s64 + 19308;
loc_899C8400:
	// ori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 | 1;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r10,216
	ctx.r10.s64 = 216;
	// sth r25,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r25.u16);
	// li r9,-20
	ctx.r9.s64 = -20;
	// stb r24,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r24.u8);
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,2
	ctx.r5.s64 = 2;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x89934b48
	ctx.lr = 0x899C8434;
	sub_89934B48(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x899C844C;
	sub_89935B08(ctx, base);
	// addi r11,r27,-616
	ctx.r11.s64 = ctx.r27.s64 + -616;
	// addi r31,r31,306
	ctx.r31.s64 = ctx.r31.s64 + 306;
	// addi r10,r11,612
	ctx.r10.s64 = ctx.r11.s64 + 612;
	// subf r30,r28,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r28.u64;
	// addi r29,r29,396
	ctx.r29.s64 = ctx.r29.s64 + 396;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x899c8400
	if (ctx.cr6.lt) goto loc_899C8400;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C8928) {
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
	ctx.lr = 0x899C895C;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c8974
	if (!ctx.cr6.eq) goto loc_899C8974;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899C8974:
	// lis r11,-30307
	ctx.r11.s64 = -1986199552;
	// addi r3,r11,-30888
	ctx.r3.s64 = ctx.r11.s64 + -30888;
	// bl 0x89915de0
	ctx.lr = 0x899C8980;
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

DEFINE_REX_FUNC(sub_899C8C88) {
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
	ctx.lr = 0x899C8CA0;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c8cb8
	if (!ctx.cr6.eq) goto loc_899C8CB8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899C8CB8:
	// lis r11,-30307
	ctx.r11.s64 = -1986199552;
	// addi r3,r11,-29768
	ctx.r3.s64 = ctx.r11.s64 + -29768;
	// bl 0x89915de0
	ctx.lr = 0x899C8CC4;
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

DEFINE_REX_FUNC(sub_899C8DC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899C8DC8;
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
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r9,r30,207
	ctx.r9.s64 = ctx.r30.s64 + 207;
	// addi r29,r30,200
	ctx.r29.s64 = ctx.r30.s64 + 200;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// li r4,4
	ctx.r4.s64 = 4;
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r8,r31,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x899d4440
	ctx.lr = 0x899C8E08;
	sub_899D4440(ctx, base);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lbzx r6,r31,r29
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lbz r7,12267(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 12267);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x899c8e84
	if (!ctx.cr6.eq) goto loc_899C8E84;
	// addis r11,r5,-512
	ctx.r11.s64 = ctx.r5.s64 + -33554432;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c8e38
	if (!ctx.cr0.lt) goto loc_899C8E38;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C8E38:
	// lis r10,104
	ctx.r10.s64 = 6815744;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899c8e84
	if (ctx.cr6.gt) goto loc_899C8E84;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899c8e84
	if (ctx.cr6.lt) goto loc_899C8E84;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// addi r11,r9,-9512
	ctx.r11.s64 = ctx.r9.s64 + -9512;
	// lbz r10,586(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 586);
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// cmplwi cr6,r7,10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10, ctx.xer);
	// blt cr6,0x899c8e84
	if (ctx.cr6.lt) goto loc_899C8E84;
	// stbx r26,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r26.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8992e330
	ctx.lr = 0x899C8E84;
	sub_8992E330(ctx, base);
loc_899C8E84:
	// stwx r26,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C9600) {
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
	ctx.lr = 0x899C9618;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c9630
	if (!ctx.cr6.eq) goto loc_899C9630;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899C9630:
	// lis r11,-30307
	ctx.r11.s64 = -1986199552;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x89915de0
	ctx.lr = 0x899C963C;
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

DEFINE_REX_FUNC(sub_899C9C20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x899C9C28;
	__savegprlr_19(ctx, base);
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
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ori r28,r8,57344
	ctx.r28.u64 = ctx.r8.u64 | 57344;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r29,r11,9016
	ctx.r29.s64 = ctx.r11.s64 + 9016;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x899c9fb8
	if (!ctx.cr6.eq) goto loc_899C9FB8;
	// addi r8,r30,188
	ctx.r8.s64 = ctx.r30.s64 + 188;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x899c9ee0
	if (ctx.cr6.gt) goto loc_899C9EE0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899c9cb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C9CB0;
	// bdzf 4*cr6+eq,0x899c9cd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C9CD4;
	// bdzf 4*cr6+eq,0x899c9dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C9DD4;
	// bne cr6,0x899c9e00
	if (!ctx.cr6.eq) goto loc_899C9E00;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpwi cr6,r7,320
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 320, ctx.xer);
	// bge cr6,0x899c9ee0
	if (!ctx.cr6.lt) goto loc_899C9EE0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x899c9ee0
	goto loc_899C9EE0;
loc_899C9CB0:
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
	// bne 0x899c9ee0
	if (!ctx.cr0.eq) goto loc_899C9EE0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x899c9ee0
	goto loc_899C9EE0;
loc_899C9CD4:
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
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x899c9cfc
	if (!ctx.cr6.eq) goto loc_899C9CFC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
loc_899C9CFC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932b18
	ctx.lr = 0x899C9D04;
	sub_89932B18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932d30
	ctx.lr = 0x899C9D10;
	sub_89932D30(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C9D20;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c9ee0
	if (ctx.cr6.eq) goto loc_899C9EE0;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// ori r11,r9,49152
	ctx.r11.u64 = ctx.r9.u64 | 49152;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lwzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lwzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// li r6,116
	ctx.r6.s64 = 116;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r27,r3,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r27,r27,r29
	ctx.r27.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r29.u32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// lhzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// mullw r5,r27,r5
	ctx.r5.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r5.s32);
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// mullw r5,r26,r28
	ctx.r5.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// mullw r26,r26,r9
	ctx.r26.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// mullw r27,r27,r28
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r28.s32);
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// srawi r5,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r26.s32 >> 8;
	// srawi r27,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r27,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r27.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r9,r10,224
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(224));
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x899a8438
	ctx.lr = 0x899C9DC4;
	sub_899A8438(ctx, base);
	// addi r8,r30,184
	ctx.r8.s64 = ctx.r30.s64 + 184;
	// li r7,8
	ctx.r7.s64 = 8;
	// stbx r7,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u8);
	// b 0x899c9ee0
	goto loc_899C9EE0;
loc_899C9DD4:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x899c9ee0
	if (ctx.cr6.lt) goto loc_899C9EE0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x899c9ee0
	goto loc_899C9EE0;
loc_899C9E00:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x899c9e18
	if (!ctx.cr6.eq) goto loc_899C9E18;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
loc_899C9E18:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// bl 0x89932b18
	ctx.lr = 0x899C9E28;
	sub_89932B18(ctx, base);
	// addi r8,r30,186
	ctx.r8.s64 = ctx.r30.s64 + 186;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// addi r26,r30,158
	ctx.r26.s64 = ctx.r30.s64 + 158;
	// addi r11,r7,25128
	ctx.r11.s64 = ctx.r7.s64 + 25128;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// mulli r7,r9,696
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// lwzx r4,r31,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwzx r6,r7,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// lwzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// lhzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// lwzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r27,r8
	ctx.r27.s64 = ctx.r8.s16;
	// bl 0x89932c20
	ctx.lr = 0x899C9E6C;
	sub_89932C20(ctx, base);
	// subf r6,r3,r27
	ctx.r6.u64 = ctx.r27.u64 - ctx.r3.u64;
	// clrlwi r11,r6,23
	ctx.r11.u64 = ctx.r6.u32 & 0x1FF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899c9e90
	if (ctx.cr6.eq) goto loc_899C9E90;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// addi r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 2;
	// bgt cr6,0x899c9e8c
	if (ctx.cr6.gt) goto loc_899C9E8C;
	// addi r10,r27,-2
	ctx.r10.s64 = ctx.r27.s64 + -2;
loc_899C9E8C:
	// sthx r10,r31,r26
	REX_STORE_U16(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u16);
loc_899C9E90:
	// addic. r11,r11,-256
	ctx.xer.ca = ctx.r11.u32 > 255;
	ctx.r11.s64 = ctx.r11.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c9e9c
	if (!ctx.cr0.lt) goto loc_899C9E9C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C9E9C:
	// cmpwi cr6,r11,248
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 248, ctx.xer);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// ble cr6,0x899c9ec4
	if (!ctx.cr6.gt) goto loc_899C9EC4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r9,r11,49152
	ctx.r9.u64 = ctx.r11.u64 | 49152;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899c9ee0
	if (!ctx.cr6.lt) goto loc_899C9EE0;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// b 0x899c9edc
	goto loc_899C9EDC;
loc_899C9EC4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,49152
	ctx.r9.u64 = ctx.r11.u64 | 49152;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x899c9ee0
	if (!ctx.cr6.gt) goto loc_899C9EE0;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
loc_899C9EDC:
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899C9EE0:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// lhzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r27,r30,60
	ctx.r27.s64 = ctx.r30.s64 + 60;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// lwzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r9,r7,128
	ctx.r9.s64 = ctx.r7.s64 + 128;
	// rlwinm r3,r7,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// rlwinm r9,r9,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r3,r29
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r29.u32);
	// lhzx r9,r9,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwx r9,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// stwx r6,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// lhzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// addic. r11,r3,-160
	ctx.xer.ca = ctx.r3.u32 > 159;
	ctx.r11.s64 = ctx.r3.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r5,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// bge 0x899c9f68
	if (!ctx.cr0.lt) goto loc_899C9F68;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C9F68:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// ble cr6,0x899c9f80
	if (!ctx.cr6.gt) goto loc_899C9F80;
loc_899C9F70:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899C9F80:
	// lhzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r11,r10,-512
	ctx.xer.ca = ctx.r10.u32 > 511;
	ctx.r11.s64 = ctx.r10.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c9f94
	if (!ctx.cr0.lt) goto loc_899C9F94;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C9F94:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x899c9f70
	if (ctx.cr6.gt) goto loc_899C9F70;
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r8,r9,27
	ctx.r8.u64 = ctx.r9.u32 & 0x1F;
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x899C9FB8;
	sub_8991B610(ctx, base);
loc_899C9FB8:
	// addi r27,r30,184
	ctx.r27.s64 = ctx.r30.s64 + 184;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// ori r24,r11,20077
	ctx.r24.u64 = ctx.r11.u64 | 20077;
	// ori r25,r10,32896
	ctx.r25.u64 = ctx.r10.u64 | 32896;
	// lbzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// lis r20,-30253
	ctx.r20.s64 = -1982660608;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899ca0fc
	if (ctx.cr6.eq) goto loc_899CA0FC;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// lwz r10,-9212(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + -9212);
	// lis r8,-2
	ctx.r8.s64 = -131072;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// ori r11,r8,8192
	ctx.r11.u64 = ctx.r8.u64 | 8192;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lhzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mullw r11,r10,r24
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// addi r28,r11,12345
	ctx.r28.s64 = ctx.r11.s64 + 12345;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// rlwinm r5,r5,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// stw r28,-9212(r20)
	REX_STORE_U32(ctx.r20.u32 + -9212, ctx.r28.u32);
	// rlwinm r11,r9,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// addi r26,r28,1
	ctx.r26.s64 = ctx.r28.s64 + 1;
	// addi r23,r30,48
	ctx.r23.s64 = ctx.r30.s64 + 48;
	// lhzx r5,r5,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r29.u32);
	// addi r22,r30,200
	ctx.r22.s64 = ctx.r30.s64 + 200;
	// lhzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mullw r7,r5,r7
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// mullw r5,r5,r8
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// subf r4,r7,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r7.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mulli r8,r4,224
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(224));
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r6,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 8;
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// srawi r5,r26,16
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r26.s32 >> 16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// clrlwi r11,r5,17
	ctx.r11.u64 = ctx.r5.u32 & 0x7FFF;
	// addi r26,r30,207
	ctx.r26.s64 = ctx.r30.s64 + 207;
	// rlwinm r6,r11,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// li r4,3
	ctx.r4.s64 = 3;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// rlwinm r6,r6,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0x1FFFF;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r8,r31,r22
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r22.u32);
	// add r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbzx r7,r31,r26
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r9,r10,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r10,r11,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r9,r9,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lhzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// rlwinm r10,r9,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// mulli r9,r11,-7168
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-7168));
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// bl 0x899d7a90
	ctx.lr = 0x899CA0EC;
	sub_899D7A90(ctx, base);
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r8,r11,255
	ctx.r8.s64 = ctx.r11.s64 + 255;
	// stbx r8,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u8);
	// b 0x899ca100
	goto loc_899CA100;
loc_899CA0FC:
	// lwz r28,-9212(r20)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r20.u32 + -9212);
loc_899CA100:
	// addi r11,r30,185
	ctx.r11.s64 = ctx.r30.s64 + 185;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x899ca280
	if (!ctx.cr6.eq) goto loc_899CA280;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r11,2800
	ctx.r11.s64 = ctx.r11.s64 + 2800;
	// lis r21,4
	ctx.r21.s64 = 262144;
	// addi r27,r11,-2
	ctx.r27.s64 = ctx.r11.s64 + -2;
	// lis r22,1
	ctx.r22.s64 = 65536;
loc_899CA138:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lhz r10,2(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 2);
	// mullw r9,r28,r24
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r24.s32);
	// lhz r7,4(r27)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r27.u32 + 4);
	// lhzu r8,6(r27)
	ea = 6 + ctx.r27.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r11,r10,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r28,r9,12345
	ctx.r28.s64 = ctx.r9.s64 + 12345;
	// rlwinm r10,r4,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r6,r4,128
	ctx.r6.s64 = ctx.r4.s64 + 128;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// rotlwi r5,r7,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// lhzx r7,r10,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lhzx r7,r4,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// mullw r8,r10,r5
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// mullw r23,r11,r7
	ctx.r23.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// srawi r23,r23,8
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFF) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 8;
	// mullw r5,r11,r5
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// subf r11,r8,r23
	ctx.r11.u64 = ctx.r23.u64 - ctx.r8.u64;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// mulli r8,r11,224
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(224));
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r6,17
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFF;
	// addi r5,r30,200
	ctx.r5.s64 = ctx.r30.s64 + 200;
	// rlwinm r23,r11,5,0,26
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// add r6,r23,r11
	ctx.r6.u64 = ctx.r23.u64 + ctx.r11.u64;
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// rlwinm r11,r6,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0x1FFFF;
	// lbzx r6,r31,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// addi r19,r30,207
	ctx.r19.s64 = ctx.r30.s64 + 207;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r6,r31,r23
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbzx r7,r31,r19
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r19.u32);
	// rlwinm r9,r4,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r8,r4,128
	ctx.r8.s64 = ctx.r4.s64 + 128;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r11,r8,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lhzx r9,r9,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// subf r5,r21,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r21.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// lhzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r10,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// rlwinm r11,r9,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// subf r9,r22,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r22.u64;
	// bl 0x899d7a90
	ctx.lr = 0x899CA264;
	sub_899D7A90(ctx, base);
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r26,r8
	ctx.r26.s64 = ctx.r8.s16;
	// clrlwi r7,r26,16
	ctx.r7.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// blt cr6,0x899ca138
	if (ctx.cr6.lt) goto loc_899CA138;
	// stw r28,-9212(r20)
	REX_STORE_U32(ctx.r20.u32 + -9212, ctx.r28.u32);
loc_899CA280:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CCA60) {
	REX_FUNC_PROLOGUE();
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,28(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// oris r10,r7,16592
	ctx.r10.u64 = ctx.r7.u64 | 1087373312;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwzx r10,r5,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899CD528) {
	REX_FUNC_PROLOGUE();
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,28(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// oris r10,r7,16592
	ctx.r10.u64 = ctx.r7.u64 | 1087373312;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwzx r10,r5,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899CF640) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899CF648;
	__savegprlr_29(ctx, base);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
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
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x89934fb8
	ctx.lr = 0x899CF680;
	sub_89934FB8(ctx, base);
	// lis r11,-30221
	ctx.r11.s64 = -1980563456;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-16256
	ctx.r31.s64 = ctx.r11.s64 + -16256;
loc_899CF68C:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
loc_899CF69C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_899CF6A0:
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
loc_899CF6F4:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x899cf6f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899CF6F4;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899cf6a0
	if (ctx.cr6.lt) goto loc_899CF6A0;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899cf69c
	if (ctx.cr6.lt) goto loc_899CF69C;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x899cf68c
	if (ctx.cr6.lt) goto loc_899CF68C;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,12140
	ctx.r29.s64 = ctx.r11.s64 + 12140;
loc_899CF748:
	// addi r9,r31,-2040
	ctx.r9.s64 = ctx.r31.s64 + -2040;
	// mulli r10,r30,170
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(170));
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
	// bl 0x89935880
	ctx.lr = 0x899CF76C;
	sub_89935880(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x899cf748
	if (ctx.cr6.lt) goto loc_899CF748;
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D0B80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899D0B88;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30221
	ctx.r11.s64 = -1980563456;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r29,r11,11696
	ctx.r29.s64 = ctx.r11.s64 + 11696;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r29,-320
	ctx.r7.s64 = ctx.r29.s64 + -320;
	// li r9,168
	ctx.r9.s64 = 168;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-8
	ctx.r8.s64 = -8;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x899D0BC8;
	sub_89934FB8(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r30,r29,-320
	ctx.r30.s64 = ctx.r29.s64 + -320;
	// addi r28,r11,11612
	ctx.r28.s64 = ctx.r11.s64 + 11612;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_899D0BD8:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935688
	ctx.lr = 0x899D0BF0;
	sub_89935688(ctx, base);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// addi r11,r28,40
	ctx.r11.s64 = ctx.r28.s64 + 40;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// addi r29,r29,204
	ctx.r29.s64 = ctx.r29.s64 + 204;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899d0bd8
	if (ctx.cr6.lt) goto loc_899D0BD8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D0D70) {
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
	// li r9,116
	ctx.r9.s64 = 116;
	// lwz r8,64(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r7,60(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r6,56(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,52(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x899d5650
	ctx.lr = 0x899D0DA4;
	sub_899D5650(ctx, base);
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

DEFINE_REX_FUNC(sub_899D1308) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899d1364
	if (ctx.cr6.lt) goto loc_899D1364;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d13c8
	if (ctx.cr6.eq) goto loc_899D13C8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899d13c8
	if (ctx.cr6.eq) goto loc_899D13C8;
	// lhz r10,134(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// lhz r9,134(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 134);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x899d13c8
	if (!ctx.cr6.eq) goto loc_899D13C8;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x899d13c8
	if (!ctx.cr6.eq) goto loc_899D13C8;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// blr 
	return;
loc_899D1364:
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -10485760;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899d1384
	if (!ctx.cr0.lt) goto loc_899D1384;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899D1384:
	// lis r11,176
	ctx.r11.s64 = 11534336;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899d13c8
	if (ctx.cr6.gt) goto loc_899D13C8;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-21584(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -21584);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addis r11,r8,-120
	ctx.r11.s64 = ctx.r8.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d13bc
	if (!ctx.cr0.lt) goto loc_899D13BC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D13BC:
	// lis r10,136
	ctx.r10.s64 = 8912896;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_899D13C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D1918) {
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
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,116
	ctx.r9.s64 = 116;
	// lwz r8,64(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r11,11052
	ctx.r11.s64 = ctx.r11.s64 + 11052;
	// lwz r7,60(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,56(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,52(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// bl 0x899d5650
	ctx.lr = 0x899D1960;
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
}

DEFINE_REX_FUNC(sub_899D2160) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899D2168;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x89919d28
	ctx.lr = 0x899D2188;
	sub_89919D28(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d2344
	if (ctx.cr6.eq) goto loc_899D2344;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x899340e8
	ctx.lr = 0x899D219C;
	sub_899340E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d2344
	if (ctx.cr6.eq) goto loc_899D2344;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8991a5a0
	ctx.lr = 0x899D21AC;
	sub_8991A5A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d2344
	if (ctx.cr6.eq) goto loc_899D2344;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// extsh r7,r26
	ctx.r7.s64 = ctx.r26.s16;
	// addi r30,r8,12800
	ctx.r30.s64 = ctx.r8.s64 + 12800;
	// mulli r29,r7,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lwz r31,-8688(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + -8688);
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// addi r5,r30,154
	ctx.r5.s64 = ctx.r30.s64 + 154;
	// ori r4,r6,8192
	ctx.r4.u64 = ctx.r6.u64 | 8192;
	// add r3,r29,r30
	ctx.r3.u64 = ctx.r29.u64 + ctx.r30.u64;
	// extsh r11,r23
	ctx.r11.s64 = ctx.r23.s16;
	// stw r4,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r3,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// lhzx r6,r29,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r5.u32);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// li r7,8
	ctx.r7.s64 = 8;
	// sth r6,136(r31)
	REX_STORE_U16(ctx.r31.u32 + 136, ctx.r6.u16);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r7,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// stw r28,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// lhzx r11,r29,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r8.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// clrlwi r10,r3,26
	ctx.r10.u64 = ctx.r3.u32 & 0x3F;
	// sth r27,118(r31)
	REX_STORE_U16(ctx.r31.u32 + 118, ctx.r27.u16);
	// sth r11,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r27,r9,-8688
	ctx.r27.s64 = ctx.r9.s64 + -8688;
	// bl 0x8991a858
	ctx.lr = 0x899D2230;
	sub_8991A858(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// rlwinm r3,r25,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// stw r28,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// rlwinm r11,r24,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// stw r28,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r3,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r11,224
	ctx.r11.s64 = 224;
	// stw r28,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// li r30,665
	ctx.r30.s64 = 665;
	// li r23,160
	ctx.r23.s64 = 160;
	// lis r22,-30253
	ctx.r22.s64 = -1982660608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r4,r29,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// stw r4,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// lwzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stb r28,139(r31)
	REX_STORE_U8(ctx.r31.u32 + 139, ctx.r28.u8);
	// sth r30,68(r31)
	REX_STORE_U16(ctx.r31.u32 + 68, ctx.r30.u16);
	// stb r11,70(r31)
	REX_STORE_U8(ctx.r31.u32 + 70, ctx.r11.u8);
	// stb r23,71(r31)
	REX_STORE_U8(ctx.r31.u32 + 71, ctx.r23.u8);
	// lwz r4,7904(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 7904);
	// bl 0x899d2e10
	ctx.lr = 0x899D22A4;
	sub_899D2E10(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// li r26,512
	ctx.r26.s64 = 512;
	// addi r29,r11,10868
	ctx.r29.s64 = ctx.r11.s64 + 10868;
loc_899D22B0:
	// lwzu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// extsh r30,r28
	ctx.r30.s64 = ctx.r28.s16;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r25,r30,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lbzx r9,r25,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r29.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lhz r7,116(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 116);
	// sth r7,116(r3)
	REX_STORE_U16(ctx.r3.u32 + 116, ctx.r7.u16);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r6,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// bl 0x8991a858
	ctx.lr = 0x899D22EC;
	sub_8991A858(ctx, base);
	// stw r31,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r31.u32);
	// lhz r10,134(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 134);
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// sth r10,134(r3)
	REX_STORE_U16(ctx.r3.u32 + 134, ctx.r10.u16);
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// sth r26,52(r3)
	REX_STORE_U16(ctx.r3.u32 + 52, ctx.r26.u16);
	// extsh r28,r4
	ctx.r28.s64 = ctx.r4.s16;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// stw r8,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// lbzx r7,r25,r5
	ctx.r7.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r5.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stw r6,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r6.u32);
	// blt cr6,0x899d22b0
	if (ctx.cr6.lt) goto loc_899D22B0;
	// li r3,61
	ctx.r3.s64 = 61;
	// bl 0x89936360
	ctx.lr = 0x899D2338;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899D2344:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D3888) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899D3890;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x89919d28
	ctx.lr = 0x899D38B4;
	sub_89919D28(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d38cc
	if (!ctx.cr6.eq) goto loc_899D38CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899D38CC:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899d3710
	ctx.lr = 0x899D38E8;
	sub_899D3710(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D39B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x899D39C0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// li r30,16
	ctx.r30.s64 = 16;
	// addi r31,r11,-15816
	ctx.r31.s64 = ctx.r11.s64 + -15816;
	// li r10,48
	ctx.r10.s64 = 48;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r11,r31,-1848
	ctx.r11.s64 = ctx.r31.s64 + -1848;
	// li r9,144
	ctx.r9.s64 = 144;
	// li r8,-4
	ctx.r8.s64 = -4;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-4
	ctx.r7.s64 = -4;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x899D3A00;
	sub_89934FB8(ctx, base);
	// addi r8,r31,2072
	ctx.r8.s64 = ctx.r31.s64 + 2072;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,240
	ctx.r9.s64 = 240;
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x899D3A30;
	sub_89934FB8(ctx, base);
	// addi r7,r31,-480
	ctx.r7.s64 = ctx.r31.s64 + -480;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r9,200
	ctx.r9.s64 = 200;
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x899D3A64;
	sub_89934FB8(ctx, base);
	// addi r5,r31,208
	ctx.r5.s64 = ctx.r31.s64 + 208;
	// li r27,4
	ctx.r27.s64 = 4;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,96
	ctx.r9.s64 = 96;
	// sth r27,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r27.u16);
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899D3A98;
	sub_89934FB8(ctx, base);
	// addi r11,r31,208
	ctx.r11.s64 = ctx.r31.s64 + 208;
	// li r10,128
	ctx.r10.s64 = 128;
	// sth r27,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r27.u16);
	// addi r4,r11,160
	ctx.r4.s64 = ctx.r11.s64 + 160;
	// li r9,96
	ctx.r9.s64 = 96;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899D3ACC;
	sub_89934FB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r23,2
	ctx.r23.s64 = 2;
	// addi r25,r11,3632
	ctx.r25.s64 = ctx.r11.s64 + 3632;
	// addi r24,r10,3624
	ctx.r24.s64 = ctx.r10.s64 + 3624;
loc_899D3AEC:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r27,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r27.u16);
	// rlwinm r22,r28,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r11,r31,-800
	ctx.r11.s64 = ctx.r31.s64 + -800;
	// rlwinm r29,r10,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhzx r21,r22,r24
	ctx.r21.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r24.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899D3B34;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-1528
	ctx.r11.s64 = ctx.r31.s64 + -1528;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r10,192
	ctx.r10.s64 = 192;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899D3B68;
	sub_89934FB8(ctx, base);
	// addi r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 + 528;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// sth r23,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r23.u16);
	// add r6,r29,r11
	ctx.r6.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r9,160
	ctx.r9.s64 = 160;
	// li r8,-48
	ctx.r8.s64 = -48;
	// li r7,-48
	ctx.r7.s64 = -48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899D3B9C;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-800
	ctx.r11.s64 = ctx.r31.s64 + -800;
	// lhzx r22,r22,r25
	ctx.r22.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r25.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// sth r27,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r27.u16);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899D3BD8;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-1528
	ctx.r11.s64 = ctx.r31.s64 + -1528;
	// li r10,192
	ctx.r10.s64 = 192;
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// li r9,192
	ctx.r9.s64 = 192;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r8,-32
	ctx.r8.s64 = -32;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899D3C10;
	sub_89934FB8(ctx, base);
	// addi r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 + 528;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r23,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r23.u16);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// li r9,160
	ctx.r9.s64 = 160;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r8,-48
	ctx.r8.s64 = -48;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-48
	ctx.r7.s64 = -48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899D3C48;
	sub_89934FB8(ctx, base);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x899d3aec
	if (ctx.cr6.lt) goto loc_899D3AEC;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r29,r11,3484
	ctx.r29.s64 = ctx.r11.s64 + 3484;
loc_899D3C68:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,-1848
	ctx.r10.s64 = ctx.r31.s64 + -1848;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r31,-2256
	ctx.r11.s64 = ctx.r31.s64 + -2256;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// mulli r7,r6,204
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(204));
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_899D3C8C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// blt cr6,0x899d3c8c
	if (ctx.cr6.lt) goto loc_899D3C8C;
	// addi r10,r31,-2664
	ctx.r10.s64 = ctx.r31.s64 + -2664;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r9,r31,2072
	ctx.r9.s64 = ctx.r31.s64 + 2072;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_899D3CD0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// blt cr6,0x899d3cd0
	if (ctx.cr6.lt) goto loc_899D3CD0;
	// addi r10,r31,1256
	ctx.r10.s64 = ctx.r31.s64 + 1256;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r9,r31,-480
	ctx.r9.s64 = ctx.r31.s64 + -480;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_899D3D14:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// blt cr6,0x899d3d14
	if (ctx.cr6.lt) goto loc_899D3D14;
	// addi r10,r31,-1208
	ctx.r10.s64 = ctx.r31.s64 + -1208;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r9,r31,208
	ctx.r9.s64 = ctx.r31.s64 + 208;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_899D3D58:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// blt cr6,0x899d3d58
	if (ctx.cr6.lt) goto loc_899D3D58;
	// addi r10,r31,-3072
	ctx.r10.s64 = ctx.r31.s64 + -3072;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r9,r31,-800
	ctx.r9.s64 = ctx.r31.s64 + -800;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_899D3D9C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// blt cr6,0x899d3d9c
	if (ctx.cr6.lt) goto loc_899D3D9C;
	// addi r10,r31,1664
	ctx.r10.s64 = ctx.r31.s64 + 1664;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r9,r31,-1528
	ctx.r9.s64 = ctx.r31.s64 + -1528;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_899D3DE0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// blt cr6,0x899d3de0
	if (ctx.cr6.lt) goto loc_899D3DE0;
	// addi r10,r31,848
	ctx.r10.s64 = ctx.r31.s64 + 848;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r9,r31,528
	ctx.r9.s64 = ctx.r31.s64 + 528;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_899D3E24:
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
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x899d3e24
	if (ctx.cr6.lt) goto loc_899D3E24;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x899d3c68
	if (ctx.cr6.lt) goto loc_899D3C68;
	// addi r11,r31,-160
	ctx.r11.s64 = ctx.r31.s64 + -160;
	// sth r23,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r23.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899D3E98;
	sub_89934FB8(ctx, base);
	// addi r10,r31,-160
	ctx.r10.s64 = ctx.r31.s64 + -160;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_899D3EA0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r29,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x899d3ea0
	if (ctx.cr6.lt) goto loc_899D3EA0;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D6BE8) {
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
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 16384;
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r8,20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 20, ctx.xer);
	// bne cr6,0x899d6c1c
	if (!ctx.cr6.eq) goto loc_899D6C1C;
	// li r10,40
	ctx.r10.s64 = 40;
loc_899D6C1C:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lis r5,16838
	ctx.r5.s64 = 1103495168;
	// addi r9,r6,11976
	ctx.r9.s64 = ctx.r6.s64 + 11976;
	// ori r3,r5,20077
	ctx.r3.u64 = ctx.r5.u64 | 20077;
	// lwz r8,-9212(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// mullw r9,r8,r3
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// rlwinm r8,r7,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r9,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// lwzx r7,r8,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lis r3,128
	ctx.r3.s64 = 8388608;
	// lwzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// rlwinm r9,r9,19,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x3;
	// stb r10,77(r11)
	REX_STORE_U8(ctx.r11.u32 + 77, ctx.r10.u8);
	// ori r6,r3,32896
	ctx.r6.u64 = ctx.r3.u64 | 32896;
	// stb r10,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r10.u8);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// stb r10,78(r11)
	REX_STORE_U8(ctx.r11.u32 + 78, ctx.r10.u8);
	// li r31,117
	ctx.r31.s64 = 117;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// li r3,69
	ctx.r3.s64 = 69;
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r7,52(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// stw r7,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lwz r6,56(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// stw r6,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// stb r31,79(r11)
	REX_STORE_U8(ctx.r11.u32 + 79, ctx.r31.u8);
	// stb r10,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r10.u8);
	// lwz r5,76(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,77(r11)
	REX_STORE_U8(ctx.r11.u32 + 77, ctx.r4.u8);
	// bl 0x89936360
	ctx.lr = 0x899D6CCC;
	sub_89936360(ctx, base);
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

DEFINE_REX_FUNC(sub_899D6D9C) {
	REX_FUNC_PROLOGUE();
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r8,52(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x899d6d88
	if (!ctx.cr6.eq) {
		sub_899d6d88(ctx, base);
		return;
	}
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,56(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x899d6d88
	if (!ctx.cr6.eq) {
		sub_899d6d88(ctx, base);
		return;
	}
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
}

DEFINE_REX_FUNC(sub_899D7A90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899D7A98;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// addi r8,r11,3832
	ctx.r8.s64 = ctx.r11.s64 + 3832;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r10,160
	ctx.r10.s64 = 10485760;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// subf. r11,r10,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d7adc
	if (!ctx.cr0.lt) goto loc_899D7ADC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D7ADC:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899d7b18
	if (!ctx.cr6.lt) goto loc_899D7B18;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r8,r11,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r11.u64;
	// subf. r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d7b08
	if (!ctx.cr0.lt) goto loc_899D7B08;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D7B08:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// blt cr6,0x899d7b1c
	if (ctx.cr6.lt) goto loc_899D7B1C;
loc_899D7B18:
	// li r11,1
	ctx.r11.s64 = 1;
loc_899D7B1C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d7bcc
	if (!ctx.cr6.eq) goto loc_899D7BCC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89919d28
	ctx.lr = 0x899D7B30;
	sub_89919D28(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d7bcc
	if (ctx.cr6.eq) goto loc_899D7BCC;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r8,11976
	ctx.r6.s64 = ctx.r8.s64 + 11976;
	// rlwimi r30,r7,30,28,26
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0xFFFFFFFFFFFFFFEF) | (ctx.r30.u64 & 0x10);
	// lwz r11,7904(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7904);
	// li r5,19
	ctx.r5.s64 = 19;
	// li r10,192
	ctx.r10.s64 = 192;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r8,512
	ctx.r8.s64 = 512;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r11,616(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 616);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r11,612(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 612);
	// stw r31,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r31.u32);
	// stb r31,78(r4)
	REX_STORE_U8(ctx.r4.u32 + 78, ctx.r31.u8);
	// stb r31,77(r4)
	REX_STORE_U8(ctx.r4.u32 + 77, ctx.r31.u8);
	// stb r31,76(r4)
	REX_STORE_U8(ctx.r4.u32 + 76, ctx.r31.u8);
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// stw r29,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r29.u32);
	// stw r31,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// stw r28,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r28.u32);
	// stw r27,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r27.u32);
	// stw r24,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r24.u32);
	// stw r23,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r23.u32);
	// stb r26,80(r4)
	REX_STORE_U8(ctx.r4.u32 + 80, ctx.r26.u8);
	// stb r25,79(r4)
	REX_STORE_U8(ctx.r4.u32 + 79, ctx.r25.u8);
	// sth r8,44(r4)
	REX_STORE_U16(ctx.r4.u32 + 44, ctx.r8.u16);
	// stb r10,46(r4)
	REX_STORE_U8(ctx.r4.u32 + 46, ctx.r10.u8);
	// stb r10,47(r4)
	REX_STORE_U8(ctx.r4.u32 + 47, ctx.r10.u8);
	// stw r9,48(r4)
	REX_STORE_U32(ctx.r4.u32 + 48, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899D7BCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D8C10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899D8C18;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// rlwinm r8,r24,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r27,r11,24136
	ctx.r27.s64 = ctx.r11.s64 + 24136;
	// addi r30,r10,3932
	ctx.r30.s64 = ctx.r10.s64 + 3932;
	// addi r25,r9,3928
	ctx.r25.s64 = ctx.r9.s64 + 3928;
loc_899D8C44:
	// lhzx r29,r8,r25
	ctx.r29.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r25.u32);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_899D8C4C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r27,-480
	ctx.r7.s64 = ctx.r27.s64 + -480;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r5,r11,r30
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// lbzx r3,r11,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899D8CA8;
	sub_89934FB8(ctx, base);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// blt cr6,0x899d8c4c
	if (ctx.cr6.lt) goto loc_899D8C4C;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x899d8c44
	if (ctx.cr6.lt) goto loc_899D8C44;
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r9,3484
	ctx.r3.s64 = ctx.r9.s64 + 3484;
	// addi r30,r10,3952
	ctx.r30.s64 = ctx.r10.s64 + 3952;
loc_899D8CEC:
	// lhzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
loc_899D8D04:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r27,-480
	ctx.r9.s64 = ctx.r27.s64 + -480;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r6,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(60));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x899d8d64
	if (!ctx.cr6.gt) goto loc_899D8D64;
	// rlwinm r6,r31,16,0,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xC0000000;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_899D8D40:
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
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x899d8d40
	if (ctx.cr6.lt) goto loc_899D8D40;
loc_899D8D64:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x899d8d04
	if (ctx.cr6.lt) goto loc_899D8D04;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x899d8cec
	if (ctx.cr6.lt) goto loc_899D8CEC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DA270) {
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
	// lis r30,-30232
	ctx.r30.s64 = -1981284352;
	// lwz r11,-20684(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -20684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899da2d4
	if (ctx.cr6.eq) goto loc_899DA2D4;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,14460
	ctx.r31.s64 = ctx.r10.s64 + 14460;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_899DA2A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899dcd98
	ctx.lr = 0x899DA2AC;
	sub_899DCD98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899da2a4
	if (!ctx.cr6.eq) goto loc_899DA2A4;
	// lwz r3,-20684(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -20684);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA2CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-20684(r30)
	REX_STORE_U32(ctx.r30.u32 + -20684, ctx.r11.u32);
loc_899DA2D4:
	// bl 0x899d90b0
	ctx.lr = 0x899DA2D8;
	sub_899D90B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_899DAA20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899DAA28;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bne cr6,0x899daa64
	if (!ctx.cr6.eq) goto loc_899DAA64;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lwz r11,4784(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899daa64
	if (!ctx.cr6.eq) goto loc_899DAA64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899dab40
	goto loc_899DAB40;
loc_899DAA64:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x899daa80
	if (ctx.cr6.eq) goto loc_899DAA80;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bne cr6,0x899daaa8
	if (!ctx.cr6.eq) goto loc_899DAAA8;
loc_899DAA80:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899da880
	ctx.lr = 0x899DAA90;
	sub_899DA880(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bne 0x899daaa8
	if (!ctx.cr0.eq) goto loc_899DAAA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x899dab40
	goto loc_899DAB40;
loc_899DAAA8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899db9d0
	ctx.lr = 0x899DAAB8;
	sub_899DB9D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bne cr6,0x899daaf0
	if (!ctx.cr6.eq) goto loc_899DAAF0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899daaf0
	if (!ctx.cr6.eq) goto loc_899DAAF0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899db9d0
	ctx.lr = 0x899DAAE0;
	sub_899DB9D0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899da880
	ctx.lr = 0x899DAAF0;
	sub_899DA880(ctx, base);
loc_899DAAF0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x899dab00
	if (ctx.cr6.eq) goto loc_899DAB00;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bne cr6,0x899dab20
	if (!ctx.cr6.eq) goto loc_899DAB20;
loc_899DAB00:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899da880
	ctx.lr = 0x899DAB10;
	sub_899DA880(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 & ctx.r29.u64;
	// stw r29,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_899DAB20:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x899dab3c
	sub_899DAB3C(ctx, base);
	return;
loc_899DAB40:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DB2C0) {
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
	// bl 0x899db1e8
	ctx.lr = 0x899DB2D4;
	sub_899DB1E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x899db2e4
	if (!ctx.cr0.eq) goto loc_899DB2E4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x899db798
	ctx.lr = 0x899DB2E4;
	sub_899DB798(ctx, base);
loc_899DB2E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_899DB560) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x899db598
	goto loc_899DB598;
loc_899DB580:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899db594
	if (ctx.cr6.eq) goto loc_899DB594;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DB594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899DB594:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_899DB598:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x899db580
	if (ctx.cr6.lt) goto loc_899DB580;
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

DEFINE_REX_FUNC(sub_899DB9B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-8083
	ctx.r11.s64 = -529727488;
	// ori r11,r11,29539
	ctx.r11.u64 = ctx.r11.u64 | 29539;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899db9c8
	if (!ctx.cr6.eq) goto loc_899DB9C8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x899db7c8
	sub_899DB7C8(ctx, base);
	return;
loc_899DB9C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savegprlr_17) {
	REX_FUNC_PROLOGUE();
	// std r17,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
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

DEFINE_REX_FUNC(__savegprlr_23) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restgprlr_23) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restgprlr_24) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_899DC2E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899DC2E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x899dc308
	if (!ctx.cr6.eq) goto loc_899DC308;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x899dbba8
	ctx.lr = 0x899DC304;
	sub_899DBBA8(ctx, base);
	// b 0x899dc394
	goto loc_899DC394;
loc_899DC308:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x899dc31c
	if (!ctx.cr6.eq) goto loc_899DC31C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dba90
	ctx.lr = 0x899DC318;
	sub_899DBA90(ctx, base);
	// b 0x899dc390
	goto loc_899DC390;
loc_899DC31C:
	// li r29,-4096
	ctx.r29.s64 = -4096;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x899dc378
	if (ctx.cr6.gt) goto loc_899DC378;
	// lis r27,-30294
	ctx.r27.s64 = -1985347584;
loc_899DC32C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x899dc338
	if (!ctx.cr6.eq) goto loc_899DC338;
	// li r31,1
	ctx.r31.s64 = 1;
loc_899DC338:
	// bl 0x899e04d0
	ctx.lr = 0x899DC33C;
	sub_899E04D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x899dfbf0
	ctx.lr = 0x899DC34C;
	sub_899DFBF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x899dc3c8
	if (!ctx.cr0.eq) goto loc_899DC3C8;
	// lwz r11,5240(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 5240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899dc3b4
	if (ctx.cr6.eq) goto loc_899DC3B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899dbc80
	ctx.lr = 0x899DC368;
	sub_899DBC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x899dc39c
	if (ctx.cr0.eq) goto loc_899DC39C;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x899dc32c
	if (!ctx.cr6.gt) goto loc_899DC32C;
loc_899DC378:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899dbc80
	ctx.lr = 0x899DC380;
	sub_899DBC80(ctx, base);
	// bl 0x899dcab8
	ctx.lr = 0x899DC384;
	sub_899DCAB8(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_899DC390:
	// li r3,0
	ctx.r3.s64 = 0;
loc_899DC394:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899DC39C:
	// bl 0x899dcab8
	ctx.lr = 0x899DC3A0;
	sub_899DCAB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x899dd048
	ctx.lr = 0x899DC3A8;
	sub_899DD048(ctx, base);
	// bl 0x899dca48
	ctx.lr = 0x899DC3AC;
	sub_899DCA48(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x899dc390
	goto loc_899DC390;
loc_899DC3B4:
	// bl 0x899dcab8
	ctx.lr = 0x899DC3B8;
	sub_899DCAB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x899dd048
	ctx.lr = 0x899DC3C0;
	sub_899DD048(ctx, base);
	// bl 0x899dca48
	ctx.lr = 0x899DC3C4;
	sub_899DCA48(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_899DC3C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x899dc394
	goto loc_899DC394;
}

DEFINE_REX_FUNC(sub_899DC8C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r12,16808(r30)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r30.u32 + 16808);
	// lbz r12,10456(r16)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r16.u32 + 10456);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x899db2c0
	ctx.lr = 0x899DC8E0;
	sub_899DB2C0(ctx, base);
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899dc908
	if (ctx.cr6.eq) goto loc_899DC908;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x899DC8FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_899DC908:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// bl 0x899e41f8
	ctx.lr = 0x899DC914;
	__imp__KeBugCheck(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DCBC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899DCBD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,-4096
	ctx.r30.s64 = -4096;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899dcc0c
	if (ctx.cr6.eq) goto loc_899DCC0C;
	// divwu r11,r30,r3
	ctx.r11.u64 = uint32_t(ctx.r3.u32 ? ctx.r30.u32 / ctx.r3.u32 : 0);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x899dcc0c
	if (!ctx.cr6.lt) goto loc_899DCC0C;
	// bl 0x899dcab8
	ctx.lr = 0x899DCBF8;
	sub_899DCAB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x899dcc84
	goto loc_899DCC84;
loc_899DCC0C:
	// mullw. r31,r3,r4
	ctx.r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x899dcc18
	if (!ctx.cr0.eq) goto loc_899DCC18;
	// li r31,1
	ctx.r31.s64 = 1;
loc_899DCC18:
	// lis r29,-30294
	ctx.r29.s64 = -1985347584;
loc_899DCC1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x899dcc40
	if (ctx.cr6.gt) goto loc_899DCC40;
	// bl 0x899e04d0
	ctx.lr = 0x899DCC2C;
	sub_899E04D0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x899df000
	ctx.lr = 0x899DCC38;
	sub_899DF000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x899dcc84
	if (!ctx.cr0.eq) goto loc_899DCC84;
loc_899DCC40:
	// lwz r11,5240(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 5240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899dcc74
	if (ctx.cr6.eq) goto loc_899DCC74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899dbc80
	ctx.lr = 0x899DCC54;
	sub_899DBC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x899dcc1c
	if (!ctx.cr0.eq) goto loc_899DCC1C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x899dcc6c
	if (ctx.cr6.eq) goto loc_899DCC6C;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_899DCC6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899dcc84
	goto loc_899DCC84;
loc_899DCC74:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x899dcc84
	if (ctx.cr6.eq) goto loc_899DCC84;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_899DCC84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DE320) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899DE328;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// addi r11,r4,87
	ctx.r11.s64 = ctx.r4.s64 + 87;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// addze r26,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r26.s64 = temp.s64;
	// bne cr6,0x899de36c
	if (!ctx.cr6.eq) goto loc_899DE36C;
	// lhz r22,0(r3)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x899de370
	goto loc_899DE370;
loc_899DE36C:
	// li r22,0
	ctx.r22.s64 = 0;
loc_899DE370:
	// subf r10,r31,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r31.u64;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// clrlwi r24,r10,16
	ctx.r24.u64 = ctx.r10.u32 & 0xFFFF;
	// blt cr6,0x899de3d8
	if (ctx.cr6.lt) goto loc_899DE3D8;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x899de398
	if (ctx.cr6.lt) goto loc_899DE398;
loc_899DE390:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899de480
	goto loc_899DE480;
loc_899DE398:
	// subf r11,r8,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r8.u64;
	// lwz r7,1424(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 1424);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x899e4258
	ctx.lr = 0x899DE3C0;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x899de390
	if (ctx.cr0.lt) goto loc_899DE390;
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
loc_899DE3D8:
	// subf r11,r8,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r8.u64;
	// sth r22,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r22.u16);
	// rlwinm r10,r26,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// sth r24,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r24.u16);
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// stb r25,4(r31)
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r25.u8);
	// lis r9,-18
	ctx.r9.s64 = -1179648;
	// stw r23,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// ori r9,r9,65518
	ctx.r9.u64 = ctx.r9.u64 | 65518;
	// stw r30,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stb r7,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r7.u8);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r26,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq 0x899de440
	if (ctx.cr0.eq) goto loc_899DE440;
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899dd298
	ctx.lr = 0x899DE43C;
	sub_899DD298(ctx, base);
	// lwz r8,236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
loc_899DE440:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// subf r9,r30,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r31,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r31.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// stb r10,5(r30)
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r25,4(r30)
	REX_STORE_U8(ctx.r30.u32 + 4, ctx.r25.u8);
	// sth r11,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// bl 0x899ddaa8
	ctx.lr = 0x899DE47C;
	sub_899DDAA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_899DE480:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DF8F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r12,16808(r30)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r30.u32 + 16808);
	// lbz r12,10552(r16)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r16.u32 + 10552);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899DF900;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// stw r26,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// stw r27,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// beq 0x899df95c
	if (ctx.cr0.eq) goto loc_899DF95C;
	// bl 0x899e4278
	ctx.lr = 0x899DF938;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x899df95c
	if (ctx.cr6.eq) goto loc_899DF95C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,4450
	ctx.r6.s64 = 4450;
	// lwz r5,152(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x899e4268
	ctx.lr = 0x899DF95C;
	__imp__KeBugCheckEx(ctx, base);
loc_899DF95C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x899df96c
	if (!ctx.cr6.eq) goto loc_899DF96C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x899dfb6c
	goto loc_899DFB6C;
loc_899DF96C:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899df994
	if (!ctx.cr0.eq) goto loc_899DF994;
	// lwz r3,1408(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x899e4228
	ctx.lr = 0x899DF98C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// stw r27,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
loc_899DF994:
	// lbz r11,5(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899dfafc
	if (!ctx.cr0.eq) goto loc_899DFAFC;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x899dd6a0
	ctx.lr = 0x899DF9BC;
	sub_899DD6A0(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// bge cr6,0x899dfa44
	if (!ctx.cr6.lt) goto loc_899DFA44;
	// lbz r11,5(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899dfa1c
	if (!ctx.cr6.eq) goto loc_899DFA1C;
	// lhz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
loc_899DFA1C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x899dfae8
	goto loc_899DFAE8;
loc_899DFA44:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x899dfa70
	if (ctx.cr6.lt) goto loc_899DFA70;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x899dfa70
	if (ctx.cr6.lt) goto loc_899DFA70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899de6c8
	ctx.lr = 0x899DFA6C;
	sub_899DE6C8(ctx, base);
	// b 0x899dfb5c
	goto loc_899DFB5C;
loc_899DFA70:
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x899dfaf0
	if (ctx.cr6.gt) goto loc_899DFAF0;
	// lbz r11,5(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 384);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_899DFA90:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x899dfac4
	if (ctx.cr6.eq) goto loc_899DFAC4;
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// lhz r7,-8(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x899dfac4
	if (!ctx.cr6.gt) goto loc_899DFAC4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x899dfa90
	goto loc_899DFA90;
loc_899DFAC4:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_899DFAE8:
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x899dfb5c
	goto loc_899DFB5C;
loc_899DFAF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899ddaa8
	ctx.lr = 0x899DFAF8;
	sub_899DDAA8(ctx, base);
	// b 0x899dfb5c
	goto loc_899DFB5C;
loc_899DFAFC:
	// addi r11,r29,-32
	ctx.r11.s64 = ctx.r29.s64 + -32;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,-32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -32);
	// lwz r10,-28(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -28);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x899dfb2c
	if (ctx.cr6.eq) goto loc_899DFB2C;
	// lwz r3,1408(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x899e4208
	ctx.lr = 0x899DFB24;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
loc_899DFB2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r6,1424(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 1424);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x899e4288
	ctx.lr = 0x899DFB4C;
	__imp__NtFreeVirtualMemory(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_899DFB5C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x899dfb9c
	ctx.lr = 0x899DFB68;
	sub_899DFB9C(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
loc_899DFB6C:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E0458) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899e0484
	if (ctx.cr6.eq) goto loc_899E0484;
	// lwz r3,1408(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 1408);
	// bl 0x899e4208
	ctx.lr = 0x899E0484;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_899E0484:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E0560) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x899e42f8
	ctx.lr = 0x899E057C;
	__imp__RtlInitUnicodeString(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x899e42e8
	ctx.lr = 0x899E058C;
	__imp__RtlUnicodeStringToAnsiString(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x899e05a0
	if (!ctx.cr0.lt) goto loc_899E05A0;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r11,r11,5033
	ctx.r11.s64 = ctx.r11.s64 + 5033;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_899E05A0:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x899e05d0
	ctx.lr = 0x899E05A8;
	sub_899E05D0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x899e05b8
	if (ctx.cr6.lt) goto loc_899E05B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x899e42d8
	ctx.lr = 0x899E05B8;
	__imp__RtlFreeAnsiString(ctx, base);
loc_899E05B8:
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

DEFINE_REX_FUNC(sub_899E06B8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x899e06e8
	if (ctx.cr6.eq) goto loc_899E06E8;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mulli r11,r11,-10000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-10000));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x899e06f8
	goto loc_899E06F8;
loc_899E06E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_899E06F8:
	// clrlwi r30,r31,24
	ctx.r30.u64 = ctx.r31.u32 & 0xFF;
loc_899E06FC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899e4348
	ctx.lr = 0x899E070C;
	__imp__KeDelayExecutionThread(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x899e071c
	if (ctx.cr6.eq) goto loc_899E071C;
	// cmpwi cr6,r3,257
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x899e06fc
	if (ctx.cr6.eq) goto loc_899E06FC;
loc_899E071C:
	// addi r11,r3,-192
	ctx.r11.s64 = ctx.r3.s64 + -192;
	// li r10,192
	ctx.r10.s64 = 192;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
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

DEFINE_REX_FUNC(sub_899E0A28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lfd f13,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,10176(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 10176);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E0AA8) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x899e0a48
	sub_899E0A48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E0AB8) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x899e0978
	sub_899E0978(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E0D10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899E0D18;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x899e1a90
	ctx.lr = 0x899E0D40;
	sub_899E1A90(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x899e0d60
	if (!ctx.cr6.eq) goto loc_899E0D60;
loc_899E0D48:
	// bl 0x899dcab8
	ctx.lr = 0x899E0D4C;
	sub_899DCAB8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x899dc948
	ctx.lr = 0x899E0D58;
	sub_899DC948(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x899e0df8
	goto loc_899E0DF8;
loc_899E0D60:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x899e0d48
	if (ctx.cr6.eq) goto loc_899E0D48;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x899e0d7c
	if (!ctx.cr6.eq) goto loc_899E0D7C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x899e0d9c
	goto loc_899E0D9C;
loc_899E0D7C:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// neg r9,r31
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// andc r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r31.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subf r10,r10,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r10.u64;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
loc_899E0D9C:
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// neg r10,r31
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// andc r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r31.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x899e1850
	ctx.lr = 0x899E0DC8;
	sub_899E1850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x899e0ddc
	if (ctx.cr0.eq) goto loc_899E0DDC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x899e0df8
	goto loc_899E0DF8;
loc_899E0DDC:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899e0ac0
	ctx.lr = 0x899E0DF8;
	sub_899E0AC0(ctx, base);
loc_899E0DF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E1670) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// cmpw r5,r4
	ctx.cr0.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x899e16b4
	if (ctx.cr6.eq) goto loc_899E16B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x899e16a0
	if (ctx.cr0.eq) goto loc_899E16A0;
loc_899E168C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x899e16c4
	if (ctx.cr6.eq) goto loc_899E16C4;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpw r4,r5
	ctx.cr0.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne 0x899e168c
	if (!ctx.cr0.eq) goto loc_899E168C;
loc_899E16A0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpw r4,r5
	ctx.cr0.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq 0x899e16a0
	if (ctx.cr0.eq) goto loc_899E16A0;
	// b 0x899e168c
	goto loc_899E168C;
loc_899E16B4:
	// beq 0x899e16c4
	if (ctx.cr0.eq) goto loc_899E16C4;
	// lbzu r5,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// b 0x899e16b4
	goto loc_899E16B4;
loc_899E16C4:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E19B0) {
	REX_FUNC_PROLOGUE();
	// lhz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r8,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r6,r8,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r7,r7,12
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// beq 0x899e19ec
	if (ctx.cr0.eq) goto loc_899E19EC;
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x899e19e4
	if (ctx.cr6.eq) goto loc_899E19E4;
	// addi r11,r11,15360
	ctx.r11.s64 = ctx.r11.s64 + 15360;
	// b 0x899e1a18
	goto loc_899E1A18;
loc_899E19E4:
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x899e1a1c
	goto loc_899E1A1C;
loc_899E19EC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x899e1a10
	if (!ctx.cr6.eq) goto loc_899E1A10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899e1a10
	if (!ctx.cr6.eq) goto loc_899E1A10;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r6,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r6.u16);
	// stw r11,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r11.u32);
	// stw r11,6(r3)
	REX_STORE_U32(ctx.r3.u32 + 6, ctx.r11.u32);
	// blr 
	return;
loc_899E1A10:
	// addi r11,r11,15361
	ctx.r11.s64 = ctx.r11.s64 + 15361;
	// li r10,0
	ctx.r10.s64 = 0;
loc_899E1A18:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_899E1A1C:
	// rlwinm r8,r9,11,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// rlwinm r7,r7,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r9,6(r3)
	REX_STORE_U32(ctx.r3.u32 + 6, ctx.r9.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r10.u32);
	// bne 0x899e1a7c
	if (!ctx.cr0.eq) goto loc_899E1A7C;
loc_899E1A40:
	// lwz r10,6(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// stw r10,6(r3)
	REX_STORE_U32(ctx.r3.u32 + 6, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x899e1a40
	if (ctx.cr0.eq) goto loc_899E1A40;
loc_899E1A7C:
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E4168) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30306
	ctx.r11.s64 = -1986134016;
	// addi r3,r11,16760
	ctx.r3.s64 = ctx.r11.s64 + 16760;
	// b 0x899db178
	sub_899DB178(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E4178) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r11,r11,10156
	ctx.r11.s64 = ctx.r11.s64 + 10156;
	// stw r11,14460(r10)
	REX_STORE_U32(ctx.r10.u32 + 14460, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E4190) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r3,r10,4788
	ctx.r3.s64 = ctx.r10.s64 + 4788;
	// addi r11,r11,1240
	ctx.r11.s64 = ctx.r11.s64 + 1240;
	// stw r11,4788(r10)
	REX_STORE_U32(ctx.r10.u32 + 4788, ctx.r11.u32);
	// b 0x899dace0
	sub_899DACE0(ctx, base);
	return;
}

