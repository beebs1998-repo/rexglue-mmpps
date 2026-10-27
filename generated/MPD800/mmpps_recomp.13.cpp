#include "mmpps_funcs.13.h"

DEFINE_REX_FUNC(sub_899164C0) {
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
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// addi r31,r8,9656
	ctx.r31.s64 = ctx.r8.s64 + 9656;
	// lwz r11,7924(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 7924);
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,7924(r9)
	REX_STORE_U32(ctx.r9.u32 + 7924, ctx.r10.u32);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// mulli r30,r11,92
	ctx.r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(92));
	// lwzx r4,r30,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// addi r5,r11,6
	ctx.r5.s64 = ctx.r11.s64 + 6;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// bl 0x89934720
	ctx.lr = 0x8991650C;
	sub_89934720(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_899169A0) {
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
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lbz r11,9518(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9518);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,9527(r9)
	REX_STORE_U8(ctx.r9.u32 + 9527, ctx.r11.u8);
	// bne cr6,0x899169ec
	if (!ctx.cr6.eq) goto loc_899169EC;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// addi r6,r7,14516
	ctx.r6.s64 = ctx.r7.s64 + 14516;
	// lbz r5,32018(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 32018);
	// lbz r11,587(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 587);
	// addi r4,r11,255
	ctx.r4.s64 = ctx.r11.s64 + 255;
	// lbzx r10,r5,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,587(r8)
	REX_STORE_U8(ctx.r8.u32 + 587, ctx.r4.u8);
	// stb r10,9527(r9)
	REX_STORE_U8(ctx.r9.u32 + 9527, ctx.r10.u8);
loc_899169EC:
	// bl 0x89917740
	ctx.lr = 0x899169F0;
	sub_89917740(ctx, base);
	// bl 0x89918ad0
	ctx.lr = 0x899169F4;
	sub_89918AD0(ctx, base);
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

DEFINE_REX_FUNC(sub_89916B98) {
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
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r10)
	REX_STORE_U32(ctx.r10.u32 + 7924, ctx.r11.u32);
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// bl 0x899369c0
	ctx.lr = 0x89916BC0;
	sub_899369C0(ctx, base);
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

DEFINE_REX_FUNC(sub_89916DB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lbz r5,9539(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 9539);
	// lbz r4,12266(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 12266);
	// lbz r10,9535(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 9535);
	// subf r8,r4,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lbz r3,32019(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 32019);
	// lbz r11,6054(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 6054);
	// lbz r9,6035(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 6035);
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subf r5,r10,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subfe r11,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// subfe r8,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// or r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 | ctx.r8.u64;
	// subfe r5,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89917538) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lhz r11,26536(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 26536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899175d8
	if (ctx.cr6.eq) goto loc_899175D8;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,26536(r9)
	REX_STORE_U16(ctx.r9.u32 + 26536, ctx.r11.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899175b8
	if (ctx.cr6.eq) goto loc_899175B8;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r8,20416(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 20416);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899175b8
	if (!ctx.cr6.gt) goto loc_899175B8;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,12800
	ctx.r10.s64 = ctx.r10.s64 + 12800;
loc_8991757C:
	// mulli r7,r11,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// addi r5,r10,72
	ctx.r5.s64 = ctx.r10.s64 + 72;
	// rlwinm r4,r6,28,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x1;
	// lhzx r3,r7,r5
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// subfe r6,r7,r3
	temp.u8 = (~ctx.r7.u32 + ctx.r3.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 & ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x899175f0
	if (!ctx.cr6.eq) goto loc_899175F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8991757c
	if (ctx.cr6.lt) goto loc_8991757C;
loc_899175B8:
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,26536(r9)
	REX_STORE_U16(ctx.r9.u32 + 26536, ctx.r11.u16);
	// lwz r11,7924(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7924);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r10)
	REX_STORE_U32(ctx.r10.u32 + 7924, ctx.r11.u32);
	// blr 
	return;
loc_899175D8:
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lwz r11,7924(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 7924);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r8)
	REX_STORE_U32(ctx.r8.u32 + 7924, ctx.r11.u32);
	// sth r10,26536(r9)
	REX_STORE_U16(ctx.r9.u32 + 26536, ctx.r10.u16);
loc_899175F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89918828) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89918830;
	__savegprlr_26(ctx, base);
	// extsh r30,r3
	ctx.r30.s64 = ctx.r3.s16;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mulli r11,r30,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(92));
	// addi r10,r10,9656
	ctx.r10.s64 = ctx.r10.s64 + 9656;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// addi r6,r8,14012
	ctx.r6.s64 = ctx.r8.s64 + 14012;
	// lwzx r27,r11,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r3,r10,44
	ctx.r3.s64 = ctx.r10.s64 + 44;
	// lwz r8,7104(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 7104);
	// addi r29,r10,48
	ctx.r29.s64 = ctx.r10.s64 + 48;
	// rlwinm r5,r27,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0x1;
	// addi r7,r10,52
	ctx.r7.s64 = ctx.r10.s64 + 52;
	// lwzx r31,r11,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// lhzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r26,r5,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r28,r11,r3
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwzx r29,r11,r7
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stwx r31,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r31.u32);
	// lhzx r7,r26,r6
	ctx.r7.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r6.u32);
	// blt cr6,0x899188d0
	if (ctx.cr6.lt) goto loc_899188D0;
	// addi r8,r10,40
	ctx.r8.s64 = ctx.r10.s64 + 40;
	// addi r6,r9,416
	ctx.r6.s64 = ctx.r9.s64 + 416;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// lhzx r4,r11,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x899188c4
	if (!ctx.cr6.gt) goto loc_899188C4;
	// addi r9,r10,42
	ctx.r9.s64 = ctx.r10.s64 + 42;
	// lhzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// subf r9,r4,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r4.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
loc_899188C4:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// srawi r31,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 5;
	// b 0x899188dc
	goto loc_899188DC;
loc_899188D0:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addi r8,r9,-48
	ctx.r8.s64 = ctx.r9.s64 + -48;
	// rlwinm r31,r8,27,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFFFF;
loc_899188DC:
	// rlwinm r9,r27,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899189cc
	if (!ctx.cr6.eq) goto loc_899189CC;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// extsh r4,r31
	ctx.r4.s64 = ctx.r31.s16;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r6,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 5;
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x899189cc
	if (ctx.cr6.lt) goto loc_899189CC;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x89918954
	if (!ctx.cr6.gt) goto loc_89918954;
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r8,r10,-2528
	ctx.r8.s64 = ctx.r10.s64 + -2528;
loc_89918930:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// stwx r28,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r28.u32);
	// blt cr6,0x89918930
	if (ctx.cr6.lt) goto loc_89918930;
loc_89918954:
	// rlwinm r11,r27,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89918acc
	if (ctx.cr6.eq) goto loc_89918ACC;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x89918acc
	if (!ctx.cr6.lt) goto loc_89918ACC;
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r10,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// addi r10,r10,13024
	ctx.r10.s64 = ctx.r10.s64 + 13024;
loc_8991898C:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r30,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// add r31,r7,r11
	ctx.r31.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stbx r3,r5,r10
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r3.u8);
	// stbx r3,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u8);
	// blt cr6,0x8991898c
	if (ctx.cr6.lt) goto loc_8991898C;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899189CC:
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x89918a2c
	if (!ctx.cr6.gt) goto loc_89918A2C;
	// clrlwi r11,r31,28
	ctx.r11.u64 = ctx.r31.u32 & 0xF;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r6,r10,-2528
	ctx.r6.s64 = ctx.r10.s64 + -2528;
loc_899189F8:
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwzx r10,r4,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stwx r10,r26,r6
	REX_STORE_U32(ctx.r26.u32 + ctx.r6.u32, ctx.r10.u32);
	// blt cr6,0x899189f8
	if (ctx.cr6.lt) goto loc_899189F8;
loc_89918A2C:
	// rlwinm r11,r27,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89918acc
	if (ctx.cr6.eq) goto loc_89918ACC;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x89918acc
	if (!ctx.cr6.lt) goto loc_89918ACC;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// addi r3,r10,13024
	ctx.r3.s64 = ctx.r10.s64 + 13024;
loc_89918A54:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x89918ab8
	if (ctx.cr6.eq) goto loc_89918AB8;
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r4,r27,r10
	ctx.r4.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r10.s32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r6,r31,28
	ctx.r6.u64 = ctx.r31.u32 & 0xF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm r7,r30,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r6,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// mullw r8,r5,r27
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// lbzx r6,r4,r29
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r29.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stbx r6,r5,r3
	REX_STORE_U8(ctx.r5.u32 + ctx.r3.u32, ctx.r6.u8);
	// lbzx r8,r4,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r29.u32);
	// stbx r8,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u8);
loc_89918AB8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x89918a54
	if (ctx.cr6.lt) goto loc_89918A54;
loc_89918ACC:
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991A198) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bgt cr6,0x8991a22c
	if (ctx.cr6.gt) goto loc_8991A22C;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lhz r10,7376(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 7376);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8991a22c
	if (ctx.cr6.gt) goto loc_8991A22C;
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r7,r11,7904
	ctx.r7.s64 = ctx.r11.s64 + 7904;
	// lhz r6,-21400(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + -21400);
	// lhz r11,12324(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 12324);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8991a22c
	if (ctx.cr6.eq) goto loc_8991A22C;
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
	// bge cr6,0x8991a22c
	if (!ctx.cr6.lt) goto loc_8991A22C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// ori r7,r11,65535
	ctx.r7.u64 = ctx.r11.u64 | 65535;
loc_8991A1F8:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8991a21c
	if (!ctx.cr6.eq) goto loc_8991A21C;
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
	// beq cr6,0x8991a234
	if (ctx.cr6.eq) goto loc_8991A234;
loc_8991A21C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8991a1f8
	if (ctx.cr6.lt) goto loc_8991A1F8;
loc_8991A22C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8991A234:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,12324(r4)
	REX_STORE_U16(ctx.r4.u32 + 12324, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991A8F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8991a9c8
	if (ctx.cr6.lt) goto loc_8991A9C8;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,25128
	ctx.r9.s64 = ctx.r11.s64 + 25128;
loc_8991A908:
	// mulli r11,r8,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(696));
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991a954
	if (ctx.cr6.eq) goto loc_8991A954;
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// addi r7,r9,28
	ctx.r7.s64 = ctx.r9.s64 + 28;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// mullw r6,r6,r6
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// subf r11,r10,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r10,r7,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r7.u64;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// mullw r11,r11,r11
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r10,r10
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x8991a970
	if (ctx.cr6.gt) goto loc_8991A970;
loc_8991A954:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8991a908
	if (ctx.cr6.lt) goto loc_8991A908;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8991A970:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,-9516(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9516);
	// beq cr6,0x8991a9b8
	if (ctx.cr6.eq) goto loc_8991A9B8;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// bgt cr6,0x8991a998
	if (ctx.cr6.gt) goto loc_8991A998;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8991A998:
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
	// lwz r9,8420(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8420);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8991a9c8
	if (!ctx.cr6.lt) goto loc_8991A9C8;
	// stw r9,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8991A9B8:
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// ble cr6,0x8991a9c8
	if (!ctx.cr6.gt) goto loc_8991A9C8;
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
loc_8991A9C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991B538) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r10,12800
	ctx.r11.s64 = ctx.r10.s64 + 12800;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r8,8200
	ctx.r9.s64 = ctx.r8.s64 + 8200;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lis r3,128
	ctx.r3.s64 = 8388608;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r7,9516(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 9516);
	// rlwinm r31,r31,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ori r3,r3,32896
	ctx.r3.u64 = ctx.r3.u64 | 32896;
	// lwzx r8,r4,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r4,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r6,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// sth r7,154(r11)
	REX_STORE_U16(ctx.r11.u32 + 154, ctx.r7.u16);
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r3,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r3.u32);
	// stb r10,156(r11)
	REX_STORE_U8(ctx.r11.u32 + 156, ctx.r10.u8);
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stb r10,185(r11)
	REX_STORE_U8(ctx.r11.u32 + 185, ctx.r10.u8);
	// stb r10,184(r11)
	REX_STORE_U8(ctx.r11.u32 + 184, ctx.r10.u8);
	// stb r10,180(r11)
	REX_STORE_U8(ctx.r11.u32 + 180, ctx.r10.u8);
	// sth r10,182(r11)
	REX_STORE_U16(ctx.r11.u32 + 182, ctx.r10.u16);
	// stb r5,203(r11)
	REX_STORE_U8(ctx.r11.u32 + 203, ctx.r5.u8);
	// stw r10,196(r11)
	REX_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// stw r10,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
	// stw r10,188(r11)
	REX_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991BBA0) {
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
	// bl 0x8991ba70
	ctx.lr = 0x8991BBB4;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8991bc40
	if (ctx.cr6.lt) goto loc_8991BC40;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r11,150
	ctx.r8.s64 = ctx.r11.s64 + 150;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// mulli r10,r7,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8991bc40
	if (ctx.cr6.eq) goto loc_8991BC40;
	// lhz r10,154(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 154);
	// lhz r8,154(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 154);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8991bc40
	if (!ctx.cr6.eq) goto loc_8991BC40;
	// lhz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991bc40
	if (ctx.cr6.eq) goto loc_8991BC40;
	// lbz r10,156(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 156);
	// lbz r8,156(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 156);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8991bc2c
	if (!ctx.cr6.lt) goto loc_8991BC2C;
	// stb r10,156(r9)
	REX_STORE_U8(ctx.r9.u32 + 156, ctx.r10.u8);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// stw r11,84(r9)
	REX_STORE_U32(ctx.r9.u32 + 84, ctx.r11.u32);
loc_8991BC2C:
	// lhz r3,148(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 148);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8991BC40:
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

DEFINE_REX_FUNC(sub_8991C610) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,3504(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 3504);
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// lwz r10,-9516(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -9516);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r7,r8,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x7FFF;
	// bne cr6,0x8991c664
	if (!ctx.cr6.eq) goto loc_8991C664;
	// rlwinm r7,r8,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
loc_8991C664:
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r10,r6,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1FFFFFF;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r5,72(r3)
	REX_STORE_U16(ctx.r3.u32 + 72, ctx.r5.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991CB48) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991CB50) {
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
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r8,r10,176
	ctx.r8.s64 = ctx.r10.s64 + 176;
	// addi r7,r10,168
	ctx.r7.s64 = ctx.r10.s64 + 168;
	// rlwinm r5,r4,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-10744(r9)
	REX_STORE_U32(ctx.r9.u32 + -10744, ctx.r11.u32);
	// stwx r5,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r5.u32);
	// stwx r5,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991CC10) {
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
	// addi r4,r10,162
	ctx.r4.s64 = ctx.r10.s64 + 162;
	// addi r10,r10,158
	ctx.r10.s64 = ctx.r10.s64 + 158;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-10744(r9)
	REX_STORE_U32(ctx.r9.u32 + -10744, ctx.r11.u32);
	// sthx r5,r6,r4
	REX_STORE_U16(ctx.r6.u32 + ctx.r4.u32, ctx.r5.u16);
	// sthx r5,r6,r10
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r5.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991CFE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r8,r10,176
	ctx.r8.s64 = ctx.r10.s64 + 176;
	// rlwinm r7,r4,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// addi r5,r10,172
	ctx.r5.s64 = ctx.r10.s64 + 172;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r7,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u32);
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stwx r8,r6,r5
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r8.u32);
	// stw r11,-10744(r9)
	REX_STORE_U32(ctx.r9.u32 + -10744, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991D168) {
	REX_FUNC_PROLOGUE();
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r8,r10,12800
	ctx.r8.s64 = ctx.r10.s64 + 12800;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991D1C8) {
	REX_FUNC_PROLOGUE();
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r9,12800
	ctx.r11.s64 = ctx.r9.s64 + 12800;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r8,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991D478) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8991D480;
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
	// bl 0x899d4fb0
	ctx.lr = 0x8991D584;
	sub_899D4FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991FAB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8991FAC0;
	__savegprlr_27(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r31,12267(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 12267);
	// lbz r5,586(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 586);
	// lbz r11,539(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 539);
	// or r4,r31,r5
	ctx.r4.u64 = ctx.r31.u64 | ctx.r5.u64;
	// lbz r3,-25514(r8)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + -25514);
	// extsb r6,r4
	ctx.r6.s64 = ctx.r4.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8991fafc
	if (ctx.cr6.eq) goto loc_8991FAFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8991FAFC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,14696
	ctx.r10.s64 = ctx.r10.s64 + 14696;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r28,-30214
	ctx.r28.s64 = -1980104704;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lwzx r11,r4,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r30,r4,r7
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwz r7,3504(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 3504);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r11,20952(r9)
	REX_STORE_U32(ctx.r9.u32 + 20952, ctx.r11.u32);
	// stw r30,8420(r27)
	REX_STORE_U32(ctx.r27.u32 + 8420, ctx.r30.u32);
	// stw r11,-9516(r8)
	REX_STORE_U32(ctx.r8.u32 + -9516, ctx.r11.u32);
	// beq cr6,0x8991fb80
	if (ctx.cr6.eq) goto loc_8991FB80;
	// lis r4,-30276
	ctx.r4.s64 = -1984167936;
	// lbz r4,32018(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 32018);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8991fb80
	if (!ctx.cr6.eq) goto loc_8991FB80;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8991fb80
	if (!ctx.cr6.eq) goto loc_8991FB80;
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8991fb80
	if (!ctx.cr6.eq) goto loc_8991FB80;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20952(r9)
	REX_STORE_U32(ctx.r9.u32 + 20952, ctx.r11.u32);
	// stw r11,-9516(r8)
	REX_STORE_U32(ctx.r8.u32 + -9516, ctx.r11.u32);
loc_8991FB80:
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r5,-30251
	ctx.r5.s64 = -1982529536;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r9,12076(r5)
	REX_STORE_U32(ctx.r5.u32 + 12076, ctx.r9.u32);
	// bne cr6,0x8991fc28
	if (!ctx.cr6.eq) goto loc_8991FC28;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lhz r10,19188(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 19188);
	// rlwinm r7,r10,20,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFFFF0;
	// srawi r6,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 6;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// beq cr6,0x8991fbe8
	if (ctx.cr6.eq) goto loc_8991FBE8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bgt cr6,0x8991fbd4
	if (ctx.cr6.gt) goto loc_8991FBD4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8991FBD4:
	// stw r11,-9516(r8)
	REX_STORE_U32(ctx.r8.u32 + -9516, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8991fbf8
	if (!ctx.cr6.lt) goto loc_8991FBF8;
	// stw r30,-9516(r8)
	REX_STORE_U32(ctx.r8.u32 + -9516, ctx.r30.u32);
	// b 0x8991fbf8
	goto loc_8991FBF8;
loc_8991FBE8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8991fbf8
	if (!ctx.cr6.gt) goto loc_8991FBF8;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,-9516(r8)
	REX_STORE_U32(ctx.r8.u32 + -9516, ctx.r11.u32);
loc_8991FBF8:
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
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// rlwinm r11,r4,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,12076(r5)
	REX_STORE_U32(ctx.r5.u32 + 12076, ctx.r11.u32);
loc_8991FC28:
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r5,-30276
	ctx.r5.s64 = -1984167936;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// stb r29,6027(r8)
	REX_STORE_U8(ctx.r8.u32 + 6027, ctx.r29.u8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r29,12321(r7)
	REX_STORE_U8(ctx.r7.u32 + 12321, ctx.r29.u8);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stb r29,12342(r6)
	REX_STORE_U8(ctx.r6.u32 + 12342, ctx.r29.u8);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stb r29,32555(r5)
	REX_STORE_U8(ctx.r5.u32 + 32555, ctx.r29.u8);
	// addi r10,r10,-21380
	ctx.r10.s64 = ctx.r10.s64 + -21380;
loc_8991FC60:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stbx r29,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u8);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// blt cr6,0x8991fc60
	if (ctx.cr6.lt) goto loc_8991FC60;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899229C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899229D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r31,r11,5344
	ctx.r31.s64 = ctx.r11.s64 + 5344;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,2440
	ctx.r3.s64 = ctx.r31.s64 + 2440;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x89931d78
	ctx.lr = 0x899229F4;
	sub_89931D78(ctx, base);
	// bl 0x89922868
	ctx.lr = 0x899229F8;
	sub_89922868(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lhz r6,-9220(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + -9220);
	// lhz r3,12064(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 12064);
	// lhz r8,6044(r5)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 6044);
	// subfc r11,r6,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r6.u32;
	ctx.r11.u64 = ctx.r3.u64 - ctx.r6.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subfze r11,r7
	temp.u8 = ~ctx.r7.u32 + ctx.xer.ca < ~ctx.r7.u32;
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lhz r10,7928(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 7928);
	// cntlzw r5,r10
	ctx.r5.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89922a44
	if (ctx.cr6.eq) goto loc_89922A44;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r8,12064(r9)
	REX_STORE_U16(ctx.r9.u32 + 12064, ctx.r8.u16);
loc_89922A44:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// addi r11,r11,20432
	ctx.r11.s64 = ctx.r11.s64 + 20432;
	// lhz r4,-10752(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -10752);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r7,r10,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x89922b0c
	if (ctx.cr6.eq) goto loc_89922B0C;
	// lbz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 256);
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// rlwinm r29,r11,0,29,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// addi r5,r11,6424
	ctx.r5.s64 = ctx.r11.s64 + 6424;
loc_89922A84:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89922ab0
	if (ctx.cr6.eq) goto loc_89922AB0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r28,r4,16
	ctx.r28.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x89922ab0
	if (!ctx.cr6.eq) goto loc_89922AB0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r8,12064(r9)
	REX_STORE_U16(ctx.r9.u32 + 12064, ctx.r8.u16);
loc_89922AB0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x89922adc
	if (ctx.cr6.eq) goto loc_89922ADC;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x89922acc
	if (!ctx.cr6.eq) goto loc_89922ACC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_89922ACC:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,12064(r9)
	REX_STORE_U16(ctx.r9.u32 + 12064, ctx.r3.u16);
loc_89922ADC:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mulli r11,r11,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89922b08
	if (!ctx.cr6.eq) goto loc_89922B08;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x89922a84
	if (!ctx.cr6.eq) goto loc_89922A84;
loc_89922B08:
	// sth r3,12064(r9)
	REX_STORE_U16(ctx.r9.u32 + 12064, ctx.r3.u16);
loc_89922B0C:
	// bl 0x899216f8
	ctx.lr = 0x89922B10;
	sub_899216F8(ctx, base);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r8,r9,12280
	ctx.r8.s64 = ctx.r9.s64 + 12280;
	// addi r7,r7,-31400
	ctx.r7.s64 = ctx.r7.s64 + -31400;
	// addi r6,r10,27812
	ctx.r6.s64 = ctx.r10.s64 + 27812;
loc_89922B30:
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfic r3,r3,35
	ctx.xer.ca = ctx.r3.u32 <= 35;
	ctx.r3.u64 = static_cast<uint64_t>(35) - ctx.r3.u64;
	// lhzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r30,r9,24
	ctx.r30.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r5,r3,r8
	REX_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r5.u8);
	// rlwinm r3,r30,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3C;
	// addi r11,r10,13
	ctx.r11.s64 = ctx.r10.s64 + 13;
	// rlwinm r30,r30,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r9,r3,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r30,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blt cr6,0x89922b30
	if (ctx.cr6.lt) goto loc_89922B30;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89924240) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89924248;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r4,-16320
	ctx.r4.s64 = -1069547520;
	// addi r3,r11,16272
	ctx.r3.s64 = ctx.r11.s64 + 16272;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x89931dd8
	ctx.lr = 0x89924260;
	sub_89931DD8(ctx, base);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r10,r11,5344
	ctx.r10.s64 = ctx.r11.s64 + 5344;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lhz r11,3624(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 3624);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r6,r9,12280
	ctx.r6.s64 = ctx.r9.s64 + 12280;
	// rlwinm r5,r11,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r4,r11,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r3,r5,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r31,r11,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r28,r4,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// stb r29,35(r6)
	REX_STORE_U8(ctx.r6.u32 + 35, ctx.r29.u8);
	// rlwinm r5,r5,30,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// addi r9,r8,-31400
	ctx.r9.s64 = ctx.r8.s64 + -31400;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r7,r3,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r8,r28,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// stw r7,4516(r9)
	REX_STORE_U32(ctx.r9.u32 + 4516, ctx.r7.u32);
	// stw r11,4524(r9)
	REX_STORE_U32(ctx.r9.u32 + 4524, ctx.r11.u32);
	// stw r5,4512(r9)
	REX_STORE_U32(ctx.r9.u32 + 4512, ctx.r5.u32);
	// stw r8,4520(r9)
	REX_STORE_U32(ctx.r9.u32 + 4520, ctx.r8.u32);
	// bl 0x89932850
	ctx.lr = 0x899242D4;
	sub_89932850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x89924368
	if (!ctx.cr6.gt) goto loc_89924368;
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,5760
	ctx.r5.s64 = ctx.r8.s64 + 5760;
loc_899242E8:
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// subfic r7,r7,35
	ctx.xer.ca = ctx.r7.u32 <= 35;
	ctx.r7.u64 = static_cast<uint64_t>(35) - ctx.r7.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwzx r31,r8,r5
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r7,r28,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stbx r29,r28,r6
	REX_STORE_U8(ctx.r28.u32 + ctx.r6.u32, ctx.r29.u8);
	// rlwinm r28,r31,30,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3C;
	// addi r8,r8,13
	ctx.r8.s64 = ctx.r8.s64 + 13;
	// rlwinm r31,r31,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r7,r28,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r4,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// blt cr6,0x899242e8
	if (ctx.cr6.lt) goto loc_899242E8;
loc_89924368:
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// stb r29,34(r6)
	REX_STORE_U8(ctx.r6.u32 + 34, ctx.r29.u8);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// cntlzw r4,r30
	ctx.r4.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// rlwinm r27,r4,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lhz r11,-21396(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -21396);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lhz r30,8416(r7)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 8416);
	// li r3,-1
	ctx.r3.s64 = -1;
	// rlwinm r7,r11,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r4,r11,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r5,-31404(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + -31404);
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r25,r7,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// rlwinm r24,r7,30,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3C;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subfc r11,r30,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r30.u32;
	ctx.r11.u64 = ctx.r5.u64 - ctx.r30.u64;
	// lwzx r7,r4,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// subfze r11,r3
	temp.u8 = ~ctx.r3.u32 + ctx.xer.ca < ~ctx.r3.u32;
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzx r4,r25,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// lwzx r3,r24,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// or r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 | ctx.r11.u64;
	// stw r8,4396(r9)
	REX_STORE_U32(ctx.r9.u32 + 4396, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,4392(r9)
	REX_STORE_U32(ctx.r9.u32 + 4392, ctx.r7.u32);
	// stw r4,4388(r9)
	REX_STORE_U32(ctx.r9.u32 + 4388, ctx.r4.u32);
	// stw r3,4384(r9)
	REX_STORE_U32(ctx.r9.u32 + 4384, ctx.r3.u32);
	// beq cr6,0x899243f4
	if (ctx.cr6.eq) goto loc_899243F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r5,-31404(r31)
	REX_STORE_U16(ctx.r31.u32 + -31404, ctx.r5.u16);
loc_899243F4:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r8,-30247
	ctx.r8.s64 = -1982267392;
	// addi r11,r11,20432
	ctx.r11.s64 = ctx.r11.s64 + 20432;
	// addi r8,r8,19368
	ctx.r8.s64 = ctx.r8.s64 + 19368;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899244ac
	if (ctx.cr6.eq) goto loc_899244AC;
	// lbz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// rlwinm r27,r11,0,29,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r4,r11,65535
	ctx.r4.u64 = ctx.r11.u64 | 65535;
loc_8992442C:
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89924454
	if (ctx.cr6.eq) goto loc_89924454;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x89924454
	if (!ctx.cr6.eq) goto loc_89924454;
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r5,-31404(r31)
	REX_STORE_U16(ctx.r31.u32 + -31404, ctx.r5.u16);
loc_89924454:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8992447c
	if (ctx.cr6.eq) goto loc_8992447C;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8992446c
	if (!ctx.cr6.eq) goto loc_8992446C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8992446C:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,-31404(r31)
	REX_STORE_U16(ctx.r31.u32 + -31404, ctx.r5.u16);
loc_8992447C:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mulli r11,r11,140
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(140));
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899244a8
	if (!ctx.cr6.eq) goto loc_899244A8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8992442c
	if (!ctx.cr6.eq) goto loc_8992442C;
loc_899244A8:
	// sth r5,-31404(r31)
	REX_STORE_U16(ctx.r31.u32 + -31404, ctx.r5.u16);
loc_899244AC:
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lis r30,16576
	ctx.r30.s64 = 1086324736;
	// addi r31,r7,7132
	ctx.r31.s64 = ctx.r7.s64 + 7132;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// ori r27,r30,16384
	ctx.r27.u64 = ctx.r30.u64 | 16384;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_899244D8:
	// mulli r11,r4,140
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(140));
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x899251a0
	if (ctx.cr6.eq) goto loc_899251A0;
	// rlwinm r4,r7,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stb r29,29(r6)
	REX_STORE_U8(ctx.r6.u32 + 29, ctx.r29.u8);
	// rlwinm r30,r5,24,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r29,28(r6)
	REX_STORE_U8(ctx.r6.u32 + 28, ctx.r29.u8);
	// rlwinm r26,r4,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r25,r5,28,20,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFF;
	// rlwinm r24,r26,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r19,r30,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// rlwinm r23,r24,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r22,r23,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r30,r30,30,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3C;
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r19,r19,r10
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r10.u32);
	// rlwinm r16,r22,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// lwzx r18,r5,r10
	ctx.r18.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r25,r25,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// rlwinm r21,r7,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r17,r30,r10
	ctx.r17.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r20,r7,30,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3C;
	// lwzx r15,r4,r10
	ctx.r15.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwzx r16,r16,r10
	ctx.r16.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r10.u32);
	// rlwinm r24,r24,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// rlwinm r23,r23,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// lwzx r25,r25,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// rlwinm r22,r22,30,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3C;
	// lwzx r21,r21,r10
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r20,r20,r10
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// addi r5,r9,3724
	ctx.r5.s64 = ctx.r9.s64 + 3724;
	// lwzx r26,r26,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// addi r30,r9,3612
	ctx.r30.s64 = ctx.r9.s64 + 3612;
	// lwzx r24,r24,r10
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// add r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwzx r23,r23,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// add r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 + ctx.r30.u64;
	// lwzx r22,r22,r10
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r18,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r18.u32);
	// stw r25,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r25.u32);
	// stw r19,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r19.u32);
	// stw r17,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r17.u32);
	// stw r21,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r21.u32);
	// stw r20,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r20.u32);
	// stw r15,-8(r5)
	REX_STORE_U32(ctx.r5.u32 + -8, ctx.r15.u32);
	// stw r26,-12(r5)
	REX_STORE_U32(ctx.r5.u32 + -12, ctx.r26.u32);
	// stw r24,-16(r5)
	REX_STORE_U32(ctx.r5.u32 + -16, ctx.r24.u32);
	// stw r23,-20(r5)
	REX_STORE_U32(ctx.r5.u32 + -20, ctx.r23.u32);
	// stw r16,-24(r5)
	REX_STORE_U32(ctx.r5.u32 + -24, ctx.r16.u32);
	// stw r22,-28(r5)
	REX_STORE_U32(ctx.r5.u32 + -28, ctx.r22.u32);
	// beq cr6,0x899245e4
	if (ctx.cr6.eq) goto loc_899245E4;
	// subf r4,r31,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r31.u64;
	// addi r5,r9,3456
	ctx.r5.s64 = ctx.r9.s64 + 3456;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
loc_899245D4:
	// stwx r30,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwzu r30,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r30.u64 = REX_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x899245d4
	if (!ctx.cr6.eq) goto loc_899245D4;
loc_899245E4:
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lwz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r29,27(r6)
	REX_STORE_U8(ctx.r6.u32 + 27, ctx.r29.u8);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// lwzx r5,r11,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r4,r5,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89924658
	if (ctx.cr6.eq) goto loc_89924658;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r31,0(r4)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r3,r9,3456
	ctx.r3.s64 = ctx.r9.s64 + 3456;
	// extsb r30,r5
	ctx.r30.s64 = ctx.r5.s8;
	// extsb r5,r31
	ctx.r5.s64 = ctx.r31.s8;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// beq cr6,0x8992464c
	if (ctx.cr6.eq) goto loc_8992464C;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
loc_89924634:
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// lbzu r5,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x89924634
	if (!ctx.cr6.eq) goto loc_89924634;
loc_8992464C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r29,27(r6)
	REX_STORE_U8(ctx.r6.u32 + 27, ctx.r29.u8);
	// b 0x89924680
	goto loc_89924680;
loc_89924658:
	// rlwinm r3,r5,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// stb r29,27(r6)
	REX_STORE_U8(ctx.r6.u32 + 27, ctx.r29.u8);
	// rlwinm r31,r5,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// addi r5,r9,3456
	ctx.r5.s64 = ctx.r9.s64 + 3456;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r31,r31,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// stw r31,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r31.u32);
loc_89924680:
	// addi r31,r8,8
	ctx.r31.s64 = ctx.r8.s64 + 8;
	// stb r29,26(r6)
	REX_STORE_U8(ctx.r6.u32 + 26, ctx.r29.u8);
	// addi r4,r8,52
	ctx.r4.s64 = ctx.r8.s64 + 52;
	// stb r29,25(r6)
	REX_STORE_U8(ctx.r6.u32 + 25, ctx.r29.u8);
	// addi r27,r8,16
	ctx.r27.s64 = ctx.r8.s64 + 16;
	// addi r5,r9,3328
	ctx.r5.s64 = ctx.r9.s64 + 3328;
	// addi r30,r8,56
	ctx.r30.s64 = ctx.r8.s64 + 56;
	// lwzx r31,r11,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r9,3200
	ctx.r3.s64 = ctx.r9.s64 + 3200;
	// lwzx r26,r11,r4
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// add r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 + ctx.r5.u64;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// lwzx r27,r11,r27
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r25,r26,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r23,r31,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3C;
	// lwzx r30,r11,r30
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r31,r31,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// rlwinm r24,r25,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r21,r24,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r23,r23,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// rlwinm r18,r27,30,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3C;
	// rlwinm r22,r30,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r19,r21,28,4,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r27,r27,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// rlwinm r20,r22,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFFFFFF;
	// stwx r23,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r23.u32);
	// rlwinm r17,r19,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r31,r26,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwzx r23,r18,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r10.u32);
	// rlwinm r16,r20,28,4,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xFFFFFFF;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwzx r27,r27,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// rlwinm r26,r16,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r25,r25,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r5,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// addi r5,r9,3100
	ctx.r5.s64 = ctx.r9.s64 + 3100;
	// rlwinm r4,r17,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// lwzx r31,r31,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// rlwinm r24,r24,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// rlwinm r21,r21,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r25,r25,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// rlwinm r19,r19,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// rlwinm r18,r17,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r15,r4,r10
	ctx.r15.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r17,r26,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// rlwinm r4,r30,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// lwzx r24,r24,r10
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// rlwinm r3,r20,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// lwzx r21,r21,r10
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// rlwinm r30,r22,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// lwzx r19,r19,r10
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r10.u32);
	// rlwinm r22,r17,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// stw r25,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r25.u32);
	// rlwinm r27,r16,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// stw r15,-20(r5)
	REX_STORE_U32(ctx.r5.u32 + -20, ctx.r15.u32);
	// rlwinm r31,r18,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// lwzx r23,r4,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r20,r18,30,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 30) & 0x3C;
	// lwzx r18,r3,r10
	ctx.r18.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwzx r30,r30,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r17,r17,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r22,r22,r10
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r27,r27,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// rlwinm r16,r17,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// lwzx r31,r31,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r20,r20,r10
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r26,r26,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// rlwinm r17,r17,30,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 30) & 0x3C;
	// addi r4,r9,2972
	ctx.r4.s64 = ctx.r9.s64 + 2972;
	// stw r24,-8(r5)
	REX_STORE_U32(ctx.r5.u32 + -8, ctx.r24.u32);
	// stw r21,-12(r5)
	REX_STORE_U32(ctx.r5.u32 + -12, ctx.r21.u32);
	// stw r19,-16(r5)
	REX_STORE_U32(ctx.r5.u32 + -16, ctx.r19.u32);
	// addi r25,r8,60
	ctx.r25.s64 = ctx.r8.s64 + 60;
	// stw r31,-24(r5)
	REX_STORE_U32(ctx.r5.u32 + -24, ctx.r31.u32);
	// stw r20,-28(r5)
	REX_STORE_U32(ctx.r5.u32 + -28, ctx.r20.u32);
	// addi r3,r9,2844
	ctx.r3.s64 = ctx.r9.s64 + 2844;
	// add r5,r7,r4
	ctx.r5.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lwzx r20,r17,r10
	ctx.r20.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r10.u32);
	// addi r31,r9,2716
	ctx.r31.s64 = ctx.r9.s64 + 2716;
	// lwzx r21,r16,r10
	ctx.r21.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r10.u32);
	// add r4,r7,r3
	ctx.r4.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwzx r25,r11,r25
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// add r3,r7,r31
	ctx.r3.u64 = ctx.r7.u64 + ctx.r31.u64;
	// addi r24,r8,64
	ctx.r24.s64 = ctx.r8.s64 + 64;
	// rlwinm r31,r25,28,4,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// stw r30,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r30.u32);
	// stw r27,-12(r5)
	REX_STORE_U32(ctx.r5.u32 + -12, ctx.r27.u32);
	// rlwinm r25,r25,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// rlwinm r30,r31,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// stw r22,-20(r5)
	REX_STORE_U32(ctx.r5.u32 + -20, ctx.r22.u32);
	// stw r26,-16(r5)
	REX_STORE_U32(ctx.r5.u32 + -16, ctx.r26.u32);
	// rlwinm r31,r31,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// rlwinm r27,r30,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// stw r23,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r23.u32);
	// stw r18,-8(r5)
	REX_STORE_U32(ctx.r5.u32 + -8, ctx.r18.u32);
	// rlwinm r30,r30,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// rlwinm r22,r27,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// stw r21,-24(r5)
	REX_STORE_U32(ctx.r5.u32 + -24, ctx.r21.u32);
	// stw r20,-28(r5)
	REX_STORE_U32(ctx.r5.u32 + -28, ctx.r20.u32);
	// rlwinm r27,r27,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// rlwinm r5,r22,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r24,r11,r24
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// rlwinm r22,r22,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// lwzx r17,r31,r10
	ctx.r17.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r20,r5,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r25,r25,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// rlwinm r23,r24,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lwzx r27,r27,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// rlwinm r31,r20,30,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 30) & 0x3C;
	// rlwinm r18,r20,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// lwzx r20,r30,r10
	ctx.r20.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r19,r23,28,4,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// stw r25,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r25.u32);
	// rlwinm r30,r24,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r17,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r17.u32);
	// rlwinm r24,r23,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// lwzx r23,r22,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// rlwinm r26,r19,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xFFFFFFF;
	// stw r27,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r27.u32);
	// rlwinm r22,r19,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// lwzx r19,r5,r10
	ctx.r19.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// addi r5,r8,116
	ctx.r5.s64 = ctx.r8.s64 + 116;
	// lwzx r15,r31,r10
	ctx.r15.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r21,r26,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r18,r18,r10
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r10.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r16,r21,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r14,r30,r10
	ctx.r14.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwzx r24,r24,r10
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwzx r22,r22,r10
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// rlwinm r21,r21,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r29,r26,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// stw r20,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r20.u32);
	// addi r25,r8,120
	ctx.r25.s64 = ctx.r8.s64 + 120;
	// stw r23,-16(r4)
	REX_STORE_U32(ctx.r4.u32 + -16, ctx.r23.u32);
	// rlwinm r17,r21,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// stw r19,-20(r4)
	REX_STORE_U32(ctx.r4.u32 + -20, ctx.r19.u32);
	// stw r18,-24(r4)
	REX_STORE_U32(ctx.r4.u32 + -24, ctx.r18.u32);
	// stw r15,-28(r4)
	REX_STORE_U32(ctx.r4.u32 + -28, ctx.r15.u32);
	// lwzx r26,r16,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r10.u32);
	// stb r31,24(r6)
	REX_STORE_U8(ctx.r6.u32 + 24, ctx.r31.u8);
	// stb r31,23(r6)
	REX_STORE_U8(ctx.r6.u32 + 23, ctx.r31.u8);
	// stb r30,22(r6)
	REX_STORE_U8(ctx.r6.u32 + 22, ctx.r30.u8);
	// stw r14,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r14.u32);
	// stw r24,-4(r3)
	REX_STORE_U32(ctx.r3.u32 + -4, ctx.r24.u32);
	// stw r22,-8(r3)
	REX_STORE_U32(ctx.r3.u32 + -8, ctx.r22.u32);
	// lhzx r4,r11,r27
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r30,r21,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r31,r11,r25
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// stw r29,-12(r3)
	REX_STORE_U32(ctx.r3.u32 + -12, ctx.r29.u32);
	// addi r5,r8,76
	ctx.r5.s64 = ctx.r8.s64 + 76;
	// rlwinm r25,r30,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// lwzx r29,r17,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r10.u32);
	// rlwinm r30,r30,30,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3C;
	// stw r26,-16(r3)
	REX_STORE_U32(ctx.r3.u32 + -16, ctx.r26.u32);
	// rlwinm r27,r31,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r26,r4,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r23,r27,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r24,r11,r5
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r25,r25,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// rlwinm r5,r26,28,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFF;
	// lwzx r30,r30,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// stw r29,-20(r3)
	REX_STORE_U32(ctx.r3.u32 + -20, ctx.r29.u32);
	// rlwinm r29,r23,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// rlwinm r19,r29,28,4,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// stw r25,-24(r3)
	REX_STORE_U32(ctx.r3.u32 + -24, ctx.r25.u32);
	// rlwinm r21,r5,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// stw r30,-28(r3)
	REX_STORE_U32(ctx.r3.u32 + -28, ctx.r30.u32);
	// rlwinm r3,r27,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// rlwinm r20,r5,30,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// lwzx r18,r4,r10
	ctx.r18.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r31,r31,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// lwzx r26,r26,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// rlwinm r22,r24,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r17,r19,28,4,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r21,r21,r10
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// rlwinm r27,r19,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// lwzx r19,r3,r10
	ctx.r19.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addi r5,r9,2572
	ctx.r5.s64 = ctx.r9.s64 + 2572;
	// lwzx r20,r20,r10
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// addi r3,r9,2460
	ctx.r3.s64 = ctx.r9.s64 + 2460;
	// lwzx r31,r31,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r25,r22,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFFFFFF;
	// add r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwzx r27,r27,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// rlwinm r16,r25,28,4,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r30,r23,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// rlwinm r15,r16,28,4,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r23,r17,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xFFFFFFF;
	// stw r26,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r26.u32);
	// rlwinm r3,r17,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// stw r20,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r20.u32);
	// stw r18,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r18.u32);
	// rlwinm r26,r24,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r21,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r21.u32);
	// rlwinm r24,r22,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// rlwinm r20,r23,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// rlwinm r31,r15,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3C;
	// lwzx r30,r30,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r14,r15,28,4,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r21,r3,r10
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r22,r16,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// lwzx r26,r26,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// rlwinm r29,r29,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// lwzx r24,r24,r10
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// rlwinm r25,r25,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// lwzx r20,r20,r10
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// rlwinm r23,r23,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3C;
	// lwzx r15,r31,r10
	ctx.r15.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r19,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r19.u32);
	// rlwinm r18,r14,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r22,r22,r10
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r4,21(r6)
	REX_STORE_U8(ctx.r6.u32 + 21, ctx.r4.u8);
	// lwzx r29,r29,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r17,r14,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// lwzx r25,r25,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// rlwinm r16,r18,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// lwzx r23,r23,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// rlwinm r31,r18,30,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 30) & 0x3C;
	// addi r4,r9,2332
	ctx.r4.s64 = ctx.r9.s64 + 2332;
	// stb r3,20(r6)
	REX_STORE_U8(ctx.r6.u32 + 20, ctx.r3.u8);
	// stw r30,-8(r5)
	REX_STORE_U32(ctx.r5.u32 + -8, ctx.r30.u32);
	// addi r30,r8,124
	ctx.r30.s64 = ctx.r8.s64 + 124;
	// stw r20,-24(r5)
	REX_STORE_U32(ctx.r5.u32 + -24, ctx.r20.u32);
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stw r29,-12(r5)
	REX_STORE_U32(ctx.r5.u32 + -12, ctx.r29.u32);
	// stw r27,-16(r5)
	REX_STORE_U32(ctx.r5.u32 + -16, ctx.r27.u32);
	// addi r27,r8,128
	ctx.r27.s64 = ctx.r8.s64 + 128;
	// stw r21,-20(r5)
	REX_STORE_U32(ctx.r5.u32 + -20, ctx.r21.u32);
	// addi r21,r8,68
	ctx.r21.s64 = ctx.r8.s64 + 68;
	// stw r23,-28(r5)
	REX_STORE_U32(ctx.r5.u32 + -28, ctx.r23.u32);
	// addi r3,r9,2204
	ctx.r3.s64 = ctx.r9.s64 + 2204;
	// lwzx r30,r11,r30
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r26,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r26.u32);
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r20,r30,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r18,r31,r10
	ctx.r18.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r29,r17,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r10.u32);
	// rlwinm r30,r30,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// rlwinm r26,r20,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r19,r16,r10
	ctx.r19.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r10.u32);
	// stw r25,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r25.u32);
	// addi r31,r9,2076
	ctx.r31.s64 = ctx.r9.s64 + 2076;
	// rlwinm r25,r26,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// stw r22,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r22.u32);
	// stw r24,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r24.u32);
	// rlwinm r23,r25,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// stw r29,-20(r4)
	REX_STORE_U32(ctx.r4.u32 + -20, ctx.r29.u32);
	// stw r19,-24(r4)
	REX_STORE_U32(ctx.r4.u32 + -24, ctx.r19.u32);
	// rlwinm r29,r20,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// stw r18,-28(r4)
	REX_STORE_U32(ctx.r4.u32 + -28, ctx.r18.u32);
	// rlwinm r22,r23,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// stw r15,-16(r4)
	REX_STORE_U32(ctx.r4.u32 + -16, ctx.r15.u32);
	// rlwinm r4,r26,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwzx r27,r11,r27
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r25,r25,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// lwzx r30,r30,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r23,r23,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// lwzx r26,r11,r21
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwinm r21,r22,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r5,r27,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r29,r29,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwzx r19,r4,r10
	ctx.r19.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r4,r21,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3C;
	// rlwinm r20,r21,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// rlwinm r22,r22,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// rlwinm r24,r5,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r23,r23,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// rlwinm r30,r27,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// lwzx r27,r25,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// rlwinm r21,r24,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// lwzx r18,r4,r10
	ctx.r18.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r24,r24,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r20,r20,r10
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// lwzx r22,r22,r10
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// rlwinm r25,r5,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// add r5,r7,r31
	ctx.r5.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stw r29,-4(r3)
	REX_STORE_U32(ctx.r3.u32 + -4, ctx.r29.u32);
	// lwzx r17,r30,r10
	ctx.r17.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r16,r24,28,4,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,-12(r3)
	REX_STORE_U32(ctx.r3.u32 + -12, ctx.r27.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r23,-16(r3)
	REX_STORE_U32(ctx.r3.u32 + -16, ctx.r23.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r22,-20(r3)
	REX_STORE_U32(ctx.r3.u32 + -20, ctx.r22.u32);
	// rlwinm r29,r16,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 28) & 0xFFFFFFF;
	// stw r19,-8(r3)
	REX_STORE_U32(ctx.r3.u32 + -8, ctx.r19.u32);
	// stw r20,-24(r3)
	REX_STORE_U32(ctx.r3.u32 + -24, ctx.r20.u32);
	// rlwinm r27,r24,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r18,-28(r3)
	REX_STORE_U32(ctx.r3.u32 + -28, ctx.r18.u32);
	// rlwinm r3,r26,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwzx r25,r25,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// rlwinm r24,r16,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// lwzx r21,r21,r10
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// addi r23,r8,139
	ctx.r23.s64 = ctx.r8.s64 + 139;
	// rlwinm r22,r29,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// stb r4,19(r6)
	REX_STORE_U8(ctx.r6.u32 + 19, ctx.r4.u8);
	// rlwinm r26,r26,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// stb r31,18(r6)
	REX_STORE_U8(ctx.r6.u32 + 18, ctx.r31.u8);
	// stb r30,17(r6)
	REX_STORE_U8(ctx.r6.u32 + 17, ctx.r30.u8);
	// stw r17,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r17.u32);
	// rlwinm r30,r29,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// stw r25,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r25.u32);
	// lwzx r29,r27,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// rlwinm r31,r26,28,4,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r25,r24,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// rlwinm r24,r30,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3C;
	// lbzx r4,r11,r23
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// rlwinm r30,r30,30,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3C;
	// lwzx r23,r22,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// rlwinm r27,r31,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r22,r3,r10
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addi r3,r8,84
	ctx.r3.s64 = ctx.r8.s64 + 84;
	// stw r29,-12(r5)
	REX_STORE_U32(ctx.r5.u32 + -12, ctx.r29.u32);
	// rlwinm r29,r4,30,2,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r25,-16(r5)
	REX_STORE_U32(ctx.r5.u32 + -16, ctx.r25.u32);
	// rlwinm r25,r4,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// addi r4,r9,1920
	ctx.r4.s64 = ctx.r9.s64 + 1920;
	// stw r21,-8(r5)
	REX_STORE_U32(ctx.r5.u32 + -8, ctx.r21.u32);
	// stw r23,-20(r5)
	REX_STORE_U32(ctx.r5.u32 + -20, ctx.r23.u32);
	// rlwinm r21,r27,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// lhzx r23,r11,r3
	ctx.r23.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lwzx r24,r24,r10
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// rlwinm r20,r21,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r30,r30,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r4,r8,92
	ctx.r4.s64 = ctx.r8.s64 + 92;
	// lwzx r29,r29,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r19,r20,28,4,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r25,r25,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// rlwinm r18,r23,28,4,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,-24(r5)
	REX_STORE_U32(ctx.r5.u32 + -24, ctx.r24.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r30,-28(r5)
	REX_STORE_U32(ctx.r5.u32 + -28, ctx.r30.u32);
	// rlwinm r30,r27,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// rlwinm r5,r31,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// stw r25,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// rlwinm r3,r19,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// lhzx r27,r11,r4
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r4,r20,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// addi r31,r9,1820
	ctx.r31.s64 = ctx.r9.s64 + 1820;
	// lwzx r26,r26,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// rlwinm r29,r21,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r30,r30,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r25,r5,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r20,r3,r10
	ctx.r20.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r21,r4,r10
	ctx.r21.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// add r4,r7,r31
	ctx.r4.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stb r5,16(r6)
	REX_STORE_U8(ctx.r6.u32 + 16, ctx.r5.u8);
	// rlwinm r24,r18,28,20,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xFFF;
	// stb r3,15(r6)
	REX_STORE_U8(ctx.r6.u32 + 15, ctx.r3.u8);
	// rlwinm r3,r23,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// rlwinm r5,r19,30,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 30) & 0x3C;
	// stwx r22,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r22.u32);
	// rlwinm r22,r24,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// lwzx r29,r29,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r31,r18,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// stw r26,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r26.u32);
	// rlwinm r23,r27,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// stw r25,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r25.u32);
	// rlwinm r26,r24,30,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3C;
	// lwzx r19,r3,r10
	ctx.r19.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// lwzx r24,r5,r10
	ctx.r24.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r27,r27,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// stw r30,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r30.u32);
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r18,r31,r10
	ctx.r18.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r9,1676
	ctx.r5.s64 = ctx.r9.s64 + 1676;
	// lwzx r28,r22,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// lwzx r23,r23,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// rlwinm r22,r27,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// lwzx r26,r26,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// addi r31,r9,1676
	ctx.r31.s64 = ctx.r9.s64 + 1676;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r29,-16(r4)
	REX_STORE_U32(ctx.r4.u32 + -16, ctx.r29.u32);
	// stw r21,-20(r4)
	REX_STORE_U32(ctx.r4.u32 + -20, ctx.r21.u32);
	// addi r30,r8,86
	ctx.r30.s64 = ctx.r8.s64 + 86;
	// stw r24,-28(r4)
	REX_STORE_U32(ctx.r4.u32 + -28, ctx.r24.u32);
	// stw r20,-24(r4)
	REX_STORE_U32(ctx.r4.u32 + -24, ctx.r20.u32);
	// rlwinm r29,r27,28,20,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFF;
	// stw r28,-8(r5)
	REX_STORE_U32(ctx.r5.u32 + -8, ctx.r28.u32);
	// addi r4,r8,94
	ctx.r4.s64 = ctx.r8.s64 + 94;
	// stw r26,-12(r5)
	REX_STORE_U32(ctx.r5.u32 + -12, ctx.r26.u32);
	// rlwinm r28,r29,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// stw r19,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r19.u32);
	// addi r27,r8,88
	ctx.r27.s64 = ctx.r8.s64 + 88;
	// stw r18,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r18.u32);
	// addi r16,r8,90
	ctx.r16.s64 = ctx.r8.s64 + 90;
	// lhzx r5,r11,r30
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r30,r29,30,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3C;
	// lwzx r25,r22,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// addi r29,r8,96
	ctx.r29.s64 = ctx.r8.s64 + 96;
	// rlwinm r26,r5,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r21,r28,r10
	ctx.r21.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lhzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r22,r26,28,20,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFF;
	// lhzx r27,r11,r27
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r24,r4,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r30,r30,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r28,r22,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// lhzx r19,r11,r29
	ctx.r19.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r29,r26,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lhzx r16,r11,r16
	ctx.r16.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r16.u32);
	// rlwinm r26,r22,30,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3C;
	// lwzx r18,r5,r10
	ctx.r18.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r20,r24,28,20,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFF;
	// rlwinm r22,r4,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// add r5,r3,r31
	ctx.r5.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwzx r15,r28,r10
	ctx.r15.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// addi r4,r9,1548
	ctx.r4.s64 = ctx.r9.s64 + 1548;
	// lwzx r29,r29,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r24,r24,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// lwzx r26,r26,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// addi r28,r9,1548
	ctx.r28.s64 = ctx.r9.s64 + 1548;
	// rlwinm r17,r20,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// lwzx r22,r22,r10
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stw r25,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r25.u32);
	// rlwinm r31,r27,28,4,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// stw r30,-12(r5)
	REX_STORE_U32(ctx.r5.u32 + -12, ctx.r30.u32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwzx r24,r24,r10
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// rlwinm r28,r20,30,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 30) & 0x3C;
	// stw r23,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r23.u32);
	// rlwinm r27,r27,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// stw r21,-8(r5)
	REX_STORE_U32(ctx.r5.u32 + -8, ctx.r21.u32);
	// rlwinm r25,r31,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// lwzx r17,r17,r10
	ctx.r17.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r10.u32);
	// stw r29,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r29.u32);
	// rlwinm r23,r31,28,20,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFF;
	// stw r26,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r26.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r18,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r18.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r15,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r15.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwzx r4,r28,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r21,r19,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r20,r16,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r28,r27,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// addi r5,r9,1420
	ctx.r5.s64 = ctx.r9.s64 + 1420;
	// lwzx r27,r25,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// stb r31,14(r6)
	REX_STORE_U8(ctx.r6.u32 + 14, ctx.r31.u8);
	// rlwinm r31,r19,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// stb r30,13(r6)
	REX_STORE_U8(ctx.r6.u32 + 13, ctx.r30.u8);
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stb r29,12(r6)
	REX_STORE_U8(ctx.r6.u32 + 12, ctx.r29.u8);
	// rlwinm r30,r16,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// stw r22,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// rlwinm r29,r21,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// stw r24,-4(r3)
	REX_STORE_U32(ctx.r3.u32 + -4, ctx.r24.u32);
	// rlwinm r26,r21,28,20,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFF;
	// rlwinm r25,r20,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// stw r17,-8(r3)
	REX_STORE_U32(ctx.r3.u32 + -8, ctx.r17.u32);
	// rlwinm r24,r20,28,20,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xFFF;
	// rlwinm r22,r23,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// rlwinm r23,r23,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3C;
	// stw r4,-12(r3)
	REX_STORE_U32(ctx.r3.u32 + -12, ctx.r4.u32);
	// lwzx r4,r22,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// addi r3,r9,1292
	ctx.r3.s64 = ctx.r9.s64 + 1292;
	// stw r27,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r27.u32);
	// rlwinm r27,r26,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// add r21,r7,r3
	ctx.r21.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stw r28,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// addi r3,r9,1292
	ctx.r3.s64 = ctx.r9.s64 + 1292;
	// lwzx r31,r31,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r23,r23,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// addi r28,r9,1036
	ctx.r28.s64 = ctx.r9.s64 + 1036;
	// stw r4,-8(r5)
	REX_STORE_U32(ctx.r5.u32 + -8, ctx.r4.u32);
	// rlwinm r26,r26,30,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3C;
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// addi r22,r8,98
	ctx.r22.s64 = ctx.r8.s64 + 98;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r4,r9,1420
	ctx.r4.s64 = ctx.r9.s64 + 1420;
	// lwzx r27,r27,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// rlwinm r28,r24,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r23,-12(r5)
	REX_STORE_U32(ctx.r5.u32 + -12, ctx.r23.u32);
	// addi r23,r8,100
	ctx.r23.s64 = ctx.r8.s64 + 100;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r21,r8,108
	ctx.r21.s64 = ctx.r8.s64 + 108;
	// lwzx r29,r29,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lwzx r26,r26,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lhzx r22,r11,r22
	ctx.r22.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// rlwinm r3,r24,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3C;
	// lhzx r23,r11,r23
	ctx.r23.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// rlwinm r24,r22,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r25,r25,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// rlwinm r22,r22,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// lwzx r28,r28,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r20,r24,28,20,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFF;
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// rlwinm r31,r23,28,4,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// stw r27,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r27.u32);
	// rlwinm r24,r24,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stw r29,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r29.u32);
	// rlwinm r27,r31,28,20,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFF;
	// stw r26,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r26.u32);
	// rlwinm r29,r20,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// lwzx r26,r30,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r18,r27,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// lwzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r19,r31,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// lhzx r21,r11,r21
	ctx.r21.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r21.u32);
	// rlwinm r20,r20,30,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 30) & 0x3C;
	// lwzx r22,r22,r10
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// rlwinm r23,r23,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r17,r21,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r24,r24,r10
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// rlwinm r27,r27,30,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3C;
	// addi r31,r9,1036
	ctx.r31.s64 = ctx.r9.s64 + 1036;
	// lwzx r16,r29,r10
	ctx.r16.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r21,r21,28,4,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r20,r20,r10
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// lwzx r23,r23,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r3.u32);
	// add r31,r5,r31
	ctx.r31.u64 = ctx.r5.u64 + ctx.r31.u64;
	// stw r26,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r26.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r25,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r25.u32);
	// addi r26,r8,102
	ctx.r26.s64 = ctx.r8.s64 + 102;
	// stw r28,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r28.u32);
	// rlwinm r28,r21,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r25,r8,110
	ctx.r25.s64 = ctx.r8.s64 + 110;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwzx r19,r19,r10
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r10.u32);
	// lwzx r18,r18,r10
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r10.u32);
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwzx r27,r27,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lwzx r17,r17,r10
	ctx.r17.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r10.u32);
	// stw r22,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r22.u32);
	// stw r24,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r24.u32);
	// stw r16,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r16.u32);
	// addi r24,r8,104
	ctx.r24.s64 = ctx.r8.s64 + 104;
	// stw r20,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r20.u32);
	// rlwinm r4,r21,28,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xFFF;
	// lhzx r26,r11,r26
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// addi r22,r8,112
	ctx.r22.s64 = ctx.r8.s64 + 112;
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// addi r23,r8,106
	ctx.r23.s64 = ctx.r8.s64 + 106;
	// rlwinm r16,r26,28,4,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// stw r27,-12(r3)
	REX_STORE_U32(ctx.r3.u32 + -12, ctx.r27.u32);
	// rlwinm r20,r4,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// stw r19,-4(r3)
	REX_STORE_U32(ctx.r3.u32 + -4, ctx.r19.u32);
	// rlwinm r4,r4,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3C;
	// stw r18,-8(r3)
	REX_STORE_U32(ctx.r3.u32 + -8, ctx.r18.u32);
	// rlwinm r21,r16,28,20,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 28) & 0xFFF;
	// lhzx r25,r11,r25
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// lhzx r27,r11,r23
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// rlwinm r3,r21,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r28,r28,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r23,r21,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3C;
	// lwzx r21,r20,r10
	ctx.r21.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// lwzx r18,r4,r10
	ctx.r18.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r19,r16,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// rlwinm r20,r25,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// lhzx r24,r11,r24
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// addi r4,r9,908
	ctx.r4.s64 = ctx.r9.s64 + 908;
	// lhzx r22,r11,r22
	ctx.r22.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// rlwinm r14,r20,28,20,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xFFF;
	// stw r17,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r17.u32);
	// stw r28,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stw r18,-12(r31)
	REX_STORE_U32(ctx.r31.u32 + -12, ctx.r18.u32);
	// rlwinm r16,r24,28,4,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r21,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r21.u32);
	// rlwinm r31,r20,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// lwzx r26,r26,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// rlwinm r15,r22,28,4,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r28,r25,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// lwzx r19,r19,r10
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r10.u32);
	// rlwinm r17,r15,28,20,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 28) & 0xFFF;
	// lwzx r23,r23,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// rlwinm r25,r24,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// stb r30,11(r6)
	REX_STORE_U8(ctx.r6.u32 + 11, ctx.r30.u8);
	// rlwinm r30,r14,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x3C;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rlwinm r11,r16,28,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 28) & 0xFFF;
	// lwzx r20,r31,r10
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r24,r16,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0x3C;
	// stw r26,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r26.u32);
	// rlwinm r26,r22,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// stw r3,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r3.u32);
	// rlwinm r31,r11,30,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3C;
	// stw r19,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r19.u32);
	// rlwinm r22,r15,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3C;
	// stw r23,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r23.u32);
	// rlwinm r4,r11,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r19,r30,r10
	ctx.r19.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r30,r17,2,26,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x3C;
	// stb r29,10(r6)
	REX_STORE_U8(ctx.r6.u32 + 10, ctx.r29.u8);
	// rlwinm r29,r14,30,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 30) & 0x3C;
	// rlwinm r18,r17,30,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 30) & 0x3C;
	// lwzx r21,r28,r10
	ctx.r21.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r23,r27,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// lwzx r16,r31,r10
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r3,r9,908
	ctx.r3.s64 = ctx.r9.s64 + 908;
	// lwzx r17,r4,r10
	ctx.r17.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r27,r27,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r25,r25,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// lwzx r29,r29,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lwzx r24,r24,r10
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r26,r26,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// lwzx r22,r22,r10
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// addi r28,r9,780
	ctx.r28.s64 = ctx.r9.s64 + 780;
	// lwzx r15,r30,r10
	ctx.r15.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r14,r27,2,26,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// lwzx r18,r18,r10
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r10.u32);
	// addi r11,r8,114
	ctx.r11.s64 = ctx.r8.s64 + 114;
	// stw r29,-12(r3)
	REX_STORE_U32(ctx.r3.u32 + -12, ctx.r29.u32);
	// stw r21,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r21.u32);
	// rlwinm r27,r27,28,20,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFF;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r30,r9,652
	ctx.r30.s64 = ctx.r9.s64 + 652;
	// lwz r29,104(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r21,r27,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// rlwinm r27,r27,30,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3C;
	// stw r20,-4(r3)
	REX_STORE_U32(ctx.r3.u32 + -4, ctx.r20.u32);
	// stw r19,-8(r3)
	REX_STORE_U32(ctx.r3.u32 + -8, ctx.r19.u32);
	// addi r3,r9,652
	ctx.r3.s64 = ctx.r9.s64 + 652;
	// stb r4,8(r6)
	REX_STORE_U8(ctx.r6.u32 + 8, ctx.r4.u8);
	// add r4,r7,r28
	ctx.r4.u64 = ctx.r7.u64 + ctx.r28.u64;
	// stwx r25,r7,r28
	REX_STORE_U32(ctx.r7.u32 + ctx.r28.u32, ctx.r25.u32);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// lwzx r25,r14,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r10.u32);
	// lwzx r19,r27,r10
	ctx.r19.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lwzx r23,r23,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// stw r24,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r24.u32);
	// stw r17,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r17.u32);
	// lwzx r21,r21,r10
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// lwz r27,108(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r16,-12(r4)
	REX_STORE_U32(ctx.r4.u32 + -12, ctx.r16.u32);
	// stb r31,7(r6)
	REX_STORE_U8(ctx.r6.u32 + 7, ctx.r31.u8);
	// lwz r31,116(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lhzx r29,r11,r29
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// addi r11,r9,780
	ctx.r11.s64 = ctx.r9.s64 + 780;
	// rlwinm r28,r29,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r29,r29,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// rlwinm r20,r28,28,20,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFF;
	// rlwinm r28,r28,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// rlwinm r14,r20,2,26,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// rlwinm r24,r20,30,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 30) & 0x3C;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwzx r20,r29,r10
	ctx.r20.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lwzx r30,r28,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwzx r17,r14,r10
	ctx.r17.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r10.u32);
	// lis r28,16576
	ctx.r28.s64 = 1086324736;
	// lwzx r24,r24,r10
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// addi r3,r27,9
	ctx.r3.s64 = ctx.r27.s64 + 9;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r22,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r22.u32);
	// ori r27,r28,16384
	ctx.r27.u64 = ctx.r28.u64 | 16384;
	// stw r15,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r15.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// stw r18,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r18.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r23,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r23.u32);
	// stw r25,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r25.u32);
	// stw r21,-8(r7)
	REX_STORE_U32(ctx.r7.u32 + -8, ctx.r21.u32);
	// stw r19,-12(r7)
	REX_STORE_U32(ctx.r7.u32 + -12, ctx.r19.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,112(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r29,6(r6)
	REX_STORE_U8(ctx.r6.u32 + 6, ctx.r29.u8);
	// stb r29,5(r6)
	REX_STORE_U8(ctx.r6.u32 + 5, ctx.r29.u8);
	// stw r20,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r20.u32);
	// stw r30,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r30.u32);
	// stw r17,-8(r5)
	REX_STORE_U32(ctx.r5.u32 + -8, ctx.r17.u32);
	// stw r24,-12(r5)
	REX_STORE_U32(ctx.r5.u32 + -12, ctx.r24.u32);
loc_899251A0:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmpw cr6,r5,r28
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x899251cc
	if (ctx.cr6.eq) goto loc_899251CC;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// blt cr6,0x899244d8
	if (ctx.cr6.lt) goto loc_899244D8;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_899251CC:
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// bge cr6,0x8992523c
	if (!ctx.cr6.lt) goto loc_8992523C;
loc_899251D8:
	// li r8,5
	ctx.r8.s64 = 5;
loc_899251DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89925210
	if (ctx.cr6.eq) goto loc_89925210;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r31,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r31.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_89925200:
	// stwx r11,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwzu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89925200
	if (!ctx.cr6.eq) goto loc_89925200;
loc_89925210:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// stbx r29,r8,r6
	REX_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r29.u8);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// blt cr6,0x899251dc
	if (ctx.cr6.lt) goto loc_899251DC;
	// addi r11,r5,9
	ctx.r11.s64 = ctx.r5.s64 + 9;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// blt cr6,0x899251d8
	if (ctx.cr6.lt) goto loc_899251D8;
loc_8992523C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992FC80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x8992FC88;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r7,r9,25128
	ctx.r7.s64 = ctx.r9.s64 + 25128;
	// addi r8,r10,18756
	ctx.r8.s64 = ctx.r10.s64 + 18756;
	// lbz r11,530(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 530);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r6,-30276
	ctx.r6.s64 = -1984167936;
	// rlwinm r5,r11,2,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,664(r7)
	REX_STORE_U32(ctx.r7.u32 + 664, ctx.r10.u32);
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// stw r11,1360(r7)
	REX_STORE_U32(ctx.r7.u32 + 1360, ctx.r11.u32);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// lis r7,-30251
	ctx.r7.s64 = -1982529536;
	// lwzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,5
	ctx.r8.s64 = 5;
	// stb r9,32551(r6)
	REX_STORE_U8(ctx.r6.u32 + 32551, ctx.r9.u8);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// stb r8,9534(r4)
	REX_STORE_U8(ctx.r4.u32 + 9534, ctx.r8.u8);
	// lis r30,-30253
	ctx.r30.s64 = -1982660608;
	// stb r11,9655(r3)
	REX_STORE_U8(ctx.r3.u32 + 9655, ctx.r11.u8);
	// lis r27,-30275
	ctx.r27.s64 = -1984102400;
	// sth r5,19188(r7)
	REX_STORE_U16(ctx.r7.u32 + 19188, ctx.r5.u16);
	// lis r24,-30276
	ctx.r24.s64 = -1984167936;
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// lis r26,-30214
	ctx.r26.s64 = -1980104704;
	// lis r25,-30274
	ctx.r25.s64 = -1984036864;
loc_8992FD00:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,12275(r27)
	REX_STORE_U8(ctx.r27.u32 + 12275, ctx.r11.u8);
	// stb r10,586(r25)
	REX_STORE_U8(ctx.r25.u32 + 586, ctx.r10.u8);
	// bl 0x89940b38
	ctx.lr = 0x8992FD14;
	sub_89940B38(ctx, base);
	// bl 0x89941078
	ctx.lr = 0x8992FD18;
	sub_89941078(ctx, base);
	// bl 0x8993d9f0
	ctx.lr = 0x8992FD1C;
	sub_8993D9F0(ctx, base);
	// bl 0x89941628
	ctx.lr = 0x8992FD20;
	sub_89941628(ctx, base);
	// bl 0x8991df28
	ctx.lr = 0x8992FD24;
	sub_8991DF28(ctx, base);
	// lwz r11,3508(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8992fd74
	if (!ctx.cr6.eq) goto loc_8992FD74;
	// lbz r11,3891(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 3891);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8992fd74
	if (ctx.cr6.eq) goto loc_8992FD74;
	// lbz r11,32018(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 32018);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8992fd4c
	if (ctx.cr6.eq) goto loc_8992FD4C;
	// bl 0x899414e8
	ctx.lr = 0x8992FD4C;
	sub_899414E8(ctx, base);
loc_8992FD4C:
	// li r11,256
	ctx.r11.s64 = 256;
	// lhz r29,-9540(r30)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r30.u32 + -9540);
	// li r10,64
	ctx.r10.s64 = 64;
	// lhz r28,25060(r31)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 25060);
	// sth r11,-9540(r30)
	REX_STORE_U16(ctx.r30.u32 + -9540, ctx.r11.u16);
	// li r3,20
	ctx.r3.s64 = 20;
	// sth r10,25060(r31)
	REX_STORE_U16(ctx.r31.u32 + 25060, ctx.r10.u16);
	// bl 0x899412b8
	ctx.lr = 0x8992FD6C;
	sub_899412B8(ctx, base);
	// sth r29,-9540(r30)
	REX_STORE_U16(ctx.r30.u32 + -9540, ctx.r29.u16);
	// sth r28,25060(r31)
	REX_STORE_U16(ctx.r31.u32 + 25060, ctx.r28.u16);
loc_8992FD74:
	// bl 0x8993f660
	ctx.lr = 0x8992FD78;
	sub_8993F660(ctx, base);
	// b 0x8992fd00
	goto loc_8992FD00;
}

DEFINE_REX_FUNC(sub_89930720) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x89930728;
	__savegprlr_24(ctx, base);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8993092c
	if (ctx.cr6.eq) goto loc_8993092C;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8993092c
	if (ctx.cr6.eq) goto loc_8993092C;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// lwz r8,8152(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 8152);
	// lis r4,-30251
	ctx.r4.s64 = -1982529536;
	// lwz r11,26912(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26912);
	// rlwinm r3,r5,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,7120(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 7120);
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// lwz r9,3880(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 3880);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// rlwinm r5,r10,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,12740(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12740);
	// addi r31,r9,-31400
	ctx.r31.s64 = ctx.r9.s64 + -31400;
	// lwz r11,9520(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 9520);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// or r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addis r6,r10,248
	ctx.r6.s64 = ctx.r10.s64 + 16252928;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// or r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 | ctx.r7.u64;
	// lwz r4,12020(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 12020);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r8,16
	ctx.r30.s64 = ctx.r8.s64 + 16;
	// lis r26,8
	ctx.r26.s64 = 524288;
	// addi r27,r10,12280
	ctx.r27.s64 = ctx.r10.s64 + 12280;
loc_899307B8:
	// lbzx r10,r29,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89930914
	if (ctx.cr6.eq) goto loc_89930914;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899307D8:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r7,r9,21
	ctx.r7.u64 = ctx.r9.u32 & 0x7FF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89930824
	if (ctx.cr6.eq) goto loc_89930824;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// beq cr6,0x89930824
	if (ctx.cr6.eq) goto loc_89930824;
	// rlwinm r7,r9,14,7,12
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1F80000;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rlwinm r25,r9,3,24,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r24,r8,-16
	ctx.r24.s64 = ctx.r8.s64 + -16;
	// subf r7,r7,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r7.u64;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_89930824:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r7,r9,21
	ctx.r7.u64 = ctx.r9.u32 & 0x7FF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89930870
	if (ctx.cr6.eq) goto loc_89930870;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// beq cr6,0x89930870
	if (ctx.cr6.eq) goto loc_89930870;
	// rlwinm r7,r9,14,7,12
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1F80000;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rlwinm r25,r9,3,24,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// addi r24,r8,-8
	ctx.r24.s64 = ctx.r8.s64 + -8;
	// subf r7,r7,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r7.u64;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_89930870:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r7,r9,21
	ctx.r7.u64 = ctx.r9.u32 & 0x7FF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x899308b8
	if (ctx.cr6.eq) goto loc_899308B8;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// beq cr6,0x899308b8
	if (ctx.cr6.eq) goto loc_899308B8;
	// rlwinm r7,r9,14,7,12
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1F80000;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rlwinm r25,r9,3,24,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// rlwinm r24,r9,24,8,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// subf r9,r7,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r24,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r24.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_899308B8:
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r7,r9,21
	ctx.r7.u64 = ctx.r9.u32 & 0x7FF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89930904
	if (ctx.cr6.eq) goto loc_89930904;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// beq cr6,0x89930904
	if (ctx.cr6.eq) goto loc_89930904;
	// rlwinm r7,r9,14,7,12
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1F80000;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rlwinm r25,r9,3,24,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// addi r24,r8,8
	ctx.r24.s64 = ctx.r8.s64 + 8;
	// subf r7,r7,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r7.u64;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_89930904:
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x899307d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899307D8;
	// stbx r10,r29,r27
	REX_STORE_U8(ctx.r29.u32 + ctx.r27.u32, ctx.r10.u8);
loc_89930914:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// cmplwi cr6,r29,41
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 41, ctx.xer);
	// blt cr6,0x899307b8
	if (ctx.cr6.lt) goto loc_899307B8;
	// stw r11,9520(r28)
	REX_STORE_U32(ctx.r28.u32 + 9520, ctx.r11.u32);
loc_8993092C:
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89931D20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r7,-31400
	ctx.r10.s64 = ctx.r7.s64 + -31400;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x89931d60
	if (ctx.cr6.eq) goto loc_89931D60;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
loc_89931D50:
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwzu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89931d50
	if (!ctx.cr6.eq) goto loc_89931D50;
loc_89931D60:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,12280
	ctx.r9.s64 = ctx.r11.s64 + 12280;
	// stbx r10,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89931DD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89931e58
	if (ctx.cr6.eq) goto loc_89931E58;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r5,r9,12280
	ctx.r5.s64 = ctx.r9.s64 + 12280;
	// addi r6,r11,-31400
	ctx.r6.s64 = ctx.r11.s64 + -31400;
loc_89931DFC:
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r9,5(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// beq cr6,0x89931e48
	if (ctx.cr6.eq) goto loc_89931E48;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89931E30:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
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
	// bne cr6,0x89931e30
	if (!ctx.cr6.eq) goto loc_89931E30;
loc_89931E48:
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r31.u8);
	// lwzu r10,8(r3)
	ea = 8 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89931dfc
	if (!ctx.cr6.eq) goto loc_89931DFC;
loc_89931E58:
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89932850) {
	REX_FUNC_PROLOGUE();
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89932860) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x89932868;
	__savegprlr_24(ctx, base);
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r3,r11,19352
	ctx.r3.s64 = ctx.r11.s64 + 19352;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_89932880:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x89932880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89932880;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r10,r1,-588
	ctx.r10.s64 = ctx.r1.s64 + -588;
	// addi r8,r11,9016
	ctx.r8.s64 = ctx.r11.s64 + 9016;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// li r11,-127
	ctx.r11.s64 = -127;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_899328A8:
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lhz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// lhz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// rlwinm r5,r5,1,23,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1FE;
	// lhz r30,6(r10)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// lhzu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rlwinm r28,r11,1,23,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FE;
	// rlwinm r31,r31,1,23,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// lhzx r27,r5,r8
	ctx.r27.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r5,r29,1,23,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1FE;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r28,r28,r8
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r8.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhzx r31,r31,r8
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r29,r6,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lhzx r24,r5,r8
	ctx.r24.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r26,r4,8,0,23
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r25,r7,8,0,23
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r5,r30,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// rotlwi r7,r29,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// rotlwi r6,r26,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// rotlwi r4,r25,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// divw r30,r30,r31
	ctx.r30.u64 = uint32_t((ctx.r31.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r30.s32 / ctx.r31.s32 : 0);
	// andc r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 & ~ctx.r5.u64;
	// divw r29,r29,r27
	ctx.r29.u64 = uint32_t((ctx.r27.s32 && !(ctx.r29.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r29.s32 / ctx.r27.s32 : 0);
	// stw r30,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r30.u32);
	// divw r26,r26,r28
	ctx.r26.u64 = uint32_t((ctx.r28.s32 && !(ctx.r26.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r26.s32 / ctx.r28.s32 : 0);
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// andc r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 & ~ctx.r7.u64;
	// stw r26,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r26.u32);
	// andc r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 & ~ctx.r6.u64;
	// divw r31,r25,r24
	ctx.r31.u64 = uint32_t((ctx.r24.s32 && !(ctx.r25.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r25.s32 / ctx.r24.s32 : 0);
	// andc r4,r24,r4
	ctx.r4.u64 = ctx.r24.u64 & ~ctx.r4.u64;
	// twllei r27,0
	if (ctx.r27.s32 == 0 || ctx.r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// stwu r31,16(r9)
	ea = 16 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r9.u32 = ea;
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r24,0
	if (ctx.r24.s32 == 0 || ctx.r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x899328a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899328A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,-588
	ctx.r9.s64 = ctx.r1.s64 + -588;
	// addi r8,r3,-4
	ctx.r8.s64 = ctx.r3.s64 + -4;
loc_8993299C:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8993299c
	if (!ctx.cr6.gt) goto loc_8993299C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 127, ctx.xer);
	// blt cr6,0x8993299c
	if (ctx.cr6.lt) goto loc_8993299C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_899329C8:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addis r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 262144;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x899329c8
	if (ctx.cr6.lt) goto loc_899329C8;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899337B0) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899337B8;
	__savegprlr_27(ctx, base);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-2936
	ctx.r11.s64 = ctx.r11.s64 + -2936;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r28,r10,r9
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lhz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8993388c
	if (ctx.cr6.eq) goto loc_8993388C;
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
loc_89933804:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x89933868
	if (ctx.cr6.gt) goto loc_89933868;
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
loc_89933824:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8993385c
	if (ctx.cr6.gt) goto loc_8993385C;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
loc_89933838:
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
	// beq cr6,0x89933894
	if (ctx.cr6.eq) goto loc_89933894;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x89933838
	if (!ctx.cr6.gt) goto loc_89933838;
loc_8993385C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x89933824
	if (!ctx.cr6.gt) goto loc_89933824;
loc_89933868:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8993386C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993389c
	if (ctx.cr6.eq) goto loc_8993389C;
	// lhz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89933804
	if (!ctx.cr6.eq) goto loc_89933804;
loc_8993388C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89933894:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8993386c
	goto loc_8993386C;
loc_8993389C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899340E8) {
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
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r31,r9,r8
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89933598
	ctx.lr = 0x89934118;
	sub_89933598(ctx, base);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8993413c
	if (ctx.cr6.eq) goto loc_8993413C;
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
loc_8993413C:
	// lhz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8993415c
	if (ctx.cr6.eq) goto loc_8993415C;
loc_89934148:
	// bl 0x89933df8
	ctx.lr = 0x8993414C;
	sub_89933DF8(ctx, base);
	// lhzu r3,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89934148
	if (!ctx.cr6.eq) goto loc_89934148;
loc_8993415C:
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

DEFINE_REX_FUNC(sub_89934860) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x89934868;
	__savegprlr_18(ctx, base);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// li r23,0
	ctx.r23.s64 = 0;
	// extsh r20,r3
	ctx.r20.s64 = ctx.r3.s16;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// rlwinm r19,r11,17,15,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r18,r11,24,25,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7F;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// clrlwi r21,r11,24
	ctx.r21.u64 = ctx.r11.u32 & 0xFF;
	// ble cr6,0x89934a00
	if (!ctx.cr6.gt) goto loc_89934A00;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r26,r6,24
	ctx.r26.u64 = ctx.r6.u32 & 0xFF;
	// rlwimi r8,r7,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// addi r6,r26,-1
	ctx.r6.s64 = ctx.r26.s64 + -1;
	// clrlwi r24,r8,16
	ctx.r24.u64 = ctx.r8.u32 & 0xFFFF;
	// lis r8,0
	ctx.r8.s64 = 0;
	// clrlwi r25,r6,24
	ctx.r25.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// ori r27,r8,65535
	ctx.r27.u64 = ctx.r8.u64 | 65535;
loc_899348C0:
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// sth r4,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r4.u16);
	// clrlwi r7,r28,16
	ctx.r7.u64 = ctx.r28.u32 & 0xFFFF;
	// sth r24,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r24.u16);
	// mullw r3,r8,r6
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// mullw r7,r7,r26
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r26.s32);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r3,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r6,r27
	ctx.r3.u64 = ctx.r6.u64 + ctx.r27.u64;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r7,r3,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// or r8,r7,r25
	ctx.r8.u64 = ctx.r7.u64 | ctx.r25.u64;
	// rlwinm r7,r3,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// sth r3,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r3.u16);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// sth r8,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r8.u16);
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8993493c
	if (ctx.cr6.eq) goto loc_8993493C;
	// rlwinm r8,r8,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 31, ctx.xer);
	// ble cr6,0x8993493c
	if (!ctx.cr6.gt) goto loc_8993493C;
	// li r3,6144
	ctx.r3.s64 = 6144;
loc_8993493C:
	// clrlwi r8,r31,27
	ctx.r8.u64 = ctx.r31.u32 & 0x1F;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89934960
	if (ctx.cr6.eq) goto loc_89934960;
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r8,31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 31, ctx.xer);
	// ble cr6,0x89934960
	if (!ctx.cr6.gt) goto loc_89934960;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r3,r8,1024
	ctx.r3.u64 = ctx.r8.u64 | 1024;
loc_89934960:
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r8,r21,16
	ctx.r8.u64 = ctx.r21.u32 & 0xFFFF;
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// sth r7,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// beq cr6,0x899349e4
	if (ctx.cr6.eq) goto loc_899349E4;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x899349e4
	if (!ctx.cr6.eq) goto loc_899349E4;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// mullw r3,r29,r6
	ctx.r3.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r6.s32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x899349cc
	if (!ctx.cr6.gt) goto loc_899349CC;
	// neg r8,r6
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
loc_899349CC:
	// extsb r8,r19
	ctx.r8.s64 = ctx.r19.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x899349e4
	if (ctx.cr6.eq) goto loc_899349E4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
loc_899349E4:
	// addi r8,r22,1
	ctx.r8.s64 = ctx.r22.s64 + 1;
	// sth r23,26(r11)
	REX_STORE_U16(ctx.r11.u32 + 26, ctx.r23.u16);
	// sthu r23,18(r11)
	ea = 18 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r23.u16);
	ctx.r11.u32 = ea;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x899348c0
	if (ctx.cr6.lt) goto loc_899348C0;
loc_89934A00:
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89935B08) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89935B10;
	__savegprlr_27(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r10,r3,0,4,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC000000;
	// rlwinm r11,r29,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r31,r29,31
	ctx.r31.u64 = ctx.r29.u32 & 0x1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r30,r9,24
	ctx.r30.u64 = ctx.r9.u32 & 0xFF;
	// bne cr6,0x89935b40
	if (!ctx.cr6.eq) goto loc_89935B40;
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// addi r6,r9,3484
	ctx.r6.s64 = ctx.r9.s64 + 3484;
loc_89935B40:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x89935ba4
	if (!ctx.cr6.gt) goto loc_89935BA4;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_89935B60:
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
	// blt cr6,0x89935b60
	if (ctx.cr6.lt) goto loc_89935B60;
loc_89935BA4:
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// add. r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x89935c0c
	if (!ctx.cr0.gt) goto loc_89935C0C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_89935BB8:
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
	// blt cr6,0x89935bb8
	if (ctx.cr6.lt) goto loc_89935BB8;
loc_89935C0C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899369C0) {
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
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,12271(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12271);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89936a78
	if (ctx.cr6.eq) goto loc_89936A78;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r10,586(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89936a78
	if (!ctx.cr6.eq) goto loc_89936A78;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89936a10
	if (!ctx.cr6.eq) goto loc_89936A10;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,12275(r10)
	REX_STORE_U8(ctx.r10.u32 + 12275, ctx.r11.u8);
	// b 0x89936a2c
	goto loc_89936A2C;
loc_89936A10:
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,-2216
	ctx.r11.s64 = ctx.r9.s64 + -2216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,-8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x899d94e8
	ctx.lr = 0x89936A2C;
	sub_899D94E8(ctx, base);
loc_89936A2C:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,3891(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3891);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89936a78
	if (!ctx.cr6.eq) goto loc_89936A78;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r11,r9,-2072
	ctx.r11.s64 = ctx.r9.s64 + -2072;
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// stb r31,12326(r8)
	REX_STORE_U8(ctx.r8.u32 + 12326, ctx.r31.u8);
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r6,49152
	ctx.r6.u64 = ctx.r6.u64 | 49152;
	// li r4,5
	ctx.r4.s64 = 5;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x89931d78
	ctx.lr = 0x89936A6C;
	sub_89931D78(ctx, base);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// li r11,240
	ctx.r11.s64 = 240;
	// stb r11,12274(r7)
	REX_STORE_U8(ctx.r7.u32 + 12274, ctx.r11.u8);
loc_89936A78:
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

DEFINE_REX_FUNC(sub_89937E00) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89937E08;
	__savegprlr_27(ctx, base);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// stw r4,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// addi r6,r9,25056
	ctx.r6.s64 = ctx.r9.s64 + 25056;
	// stw r4,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// lis r7,-30273
	ctx.r7.s64 = -1983971328;
	// stw r4,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// lis r31,-30253
	ctx.r31.s64 = -1982660608;
	// lhz r10,25056(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 25056);
	// addi r5,r8,3620
	ctx.r5.s64 = ctx.r8.s64 + 3620;
	// addi r4,r7,6420
	ctx.r4.s64 = ctx.r7.s64 + 6420;
	// lhz r8,3620(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 3620);
	// addi r29,r31,-9496
	ctx.r29.s64 = ctx.r31.s64 + -9496;
	// clrlwi r30,r10,27
	ctx.r30.u64 = ctx.r10.u32 & 0x1F;
	// lhz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r7,6420(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 6420);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r6,2(r5)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// clrlwi r27,r10,27
	ctx.r27.u64 = ctx.r10.u32 & 0x1F;
	// lhz r5,2(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// lhz r10,-9496(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + -9496);
	// lis r28,0
	ctx.r28.s64 = 0;
	// lhz r4,2(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// extsh r31,r6
	ctx.r31.s64 = ctx.r6.s16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// lwz r7,25056(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 25056);
	// lis r29,-30274
	ctx.r29.s64 = -1984036864;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// ori r9,r28,65535
	ctx.r9.u64 = ctx.r28.u64 | 65535;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// subfic r30,r30,31
	ctx.xer.ca = ctx.r30.u32 <= 31;
	ctx.r30.u64 = static_cast<uint64_t>(31) - ctx.r30.u64;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// add r5,r31,r6
	ctx.r5.u64 = ctx.r31.u64 + ctx.r6.u64;
	// subfic r10,r27,31
	ctx.xer.ca = ctx.r27.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r27.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwz r9,512(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 512);
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// clrlwi r30,r30,16
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r6,r3,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r8,r30,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// subf r3,r30,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r30.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// lis r30,1
	ctx.r30.s64 = 65536;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// subf r28,r10,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r10.u64;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// stw r4,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// rlwinm r3,r31,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// add r31,r28,r27
	ctx.r31.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// or r28,r10,r8
	ctx.r28.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r29,r5,r6
	ctx.r29.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// or r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 | ctx.r5.u64;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// or r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// or r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 | ctx.r30.u64;
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// or r5,r31,r8
	ctx.r5.u64 = ctx.r31.u64 | ctx.r8.u64;
	// stw r7,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// or r9,r31,r3
	ctx.r9.u64 = ctx.r31.u64 | ctx.r3.u64;
	// stw r5,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// stw r4,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r9,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89938888) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89938890;
	__savegprlr_29(ctx, base);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// stw r4,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r7,25056
	ctx.r4.s64 = ctx.r7.s64 + 25056;
	// lhz r10,3620(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 3620);
	// addi r3,r9,3620
	ctx.r3.s64 = ctx.r9.s64 + 3620;
	// lhz r9,6420(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 6420);
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// lwz r7,25056(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 25056);
	// lhz r6,-9496(r5)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + -9496);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// addi r8,r8,6420
	ctx.r8.s64 = ctx.r8.s64 + 6420;
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lhz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// addi r5,r5,-9496
	ctx.r5.s64 = ctx.r5.s64 + -9496;
	// lhz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// subf r3,r31,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r31.u64;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// clrlwi r31,r10,27
	ctx.r31.u64 = ctx.r10.u32 & 0x1F;
	// lhz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// subf r4,r6,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r6.u64;
	// lwz r10,3352(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 3352);
	// subfic r31,r31,31
	ctx.xer.ca = ctx.r31.u32 <= 31;
	ctx.r31.u64 = static_cast<uint64_t>(31) - ctx.r31.u64;
	// lhz r5,2(r5)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// subf r4,r10,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r10.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// subf r3,r10,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r10.u64;
	// rlwimi r9,r5,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// addis r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 65536;
	// lis r4,-30274
	ctx.r4.s64 = -1984036864;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// rotlwi r3,r6,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r8,512(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 512);
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// or r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 | ctx.r3.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// or r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 | ctx.r3.u64;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r4,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993AFC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8993AFC8;
	__savegprlr_14(ctx, base);
	// clrlwi r14,r7,24
	ctx.r14.u64 = ctx.r7.u32 & 0xFF;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// stw r9,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// cmplwi cr6,r14,128
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 128, ctx.xer);
	// bgt cr6,0x8993b494
	if (ctx.cr6.gt) goto loc_8993B494;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,3
	ctx.r9.s64 = 3;
	// lhz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// addi r3,r10,-2480
	ctx.r3.s64 = ctx.r10.s64 + -2480;
	// divw r10,r14,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r14.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r14.s32 / ctx.r9.s32 : 0);
	// lis r7,512
	ctx.r7.s64 = 33554432;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lbzx r31,r14,r3
	ctx.r31.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r3.u32);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// mullw r8,r31,r22
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r22.s32);
	// lbzx r3,r9,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// subfic r6,r10,60
	ctx.xer.ca = ctx.r10.u32 <= 60;
	ctx.r6.u64 = static_cast<uint64_t>(60) - ctx.r10.u64;
	// li r10,60
	ctx.r10.s64 = 60;
	// sth r8,-222(r1)
	REX_STORE_U16(ctx.r1.u32 + -222, ctx.r8.u16);
	// mullw r6,r3,r6
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// divw r3,r6,r10
	ctx.r3.u64 = uint32_t((ctx.r10.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r6.s32 / ctx.r10.s32 : 0);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lis r3,-30269
	ctx.r3.s64 = -1983709184;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// rlwinm r4,r6,8,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF00;
	// lhz r30,0(r28)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// lwz r3,-10764(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + -10764);
	// lwz r17,9520(r11)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 9520);
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwinm r29,r10,0,0,17
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFC000;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// sth r29,-224(r1)
	REX_STORE_U16(ctx.r1.u32 + -224, ctx.r29.u16);
	// clrlwi r23,r6,16
	ctx.r23.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r3,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r3.u32);
	// mullw r16,r5,r31
	ctx.r16.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// sth r23,-220(r1)
	REX_STORE_U16(ctx.r1.u32 + -220, ctx.r23.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993b48c
	if (ctx.cr6.eq) goto loc_8993B48C;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,10048
	ctx.r4.s64 = ctx.r8.s64 + 10048;
	// lwz r31,7120(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 7120);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lwz r3,12756(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12756);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r7,-30273
	ctx.r7.s64 = -1983971328;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// ori r19,r5,65535
	ctx.r19.u64 = ctx.r5.u64 | 65535;
	// stw r31,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r31.u32);
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// stw r3,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r3.u32);
	// addi r26,r10,3620
	ctx.r26.s64 = ctx.r10.s64 + 3620;
	// addi r4,r8,27856
	ctx.r4.s64 = ctx.r8.s64 + 27856;
	// addi r20,r7,6420
	ctx.r20.s64 = ctx.r7.s64 + 6420;
	// addi r31,r6,-9496
	ctx.r31.s64 = ctx.r6.s64 + -9496;
loc_8993B0DC:
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8993b47c
	if (ctx.cr6.eq) goto loc_8993B47C;
	// lwz r8,28(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// rlwinm r10,r11,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FE;
	// clrlwi r7,r16,16
	ctx.r7.u64 = ctx.r16.u32 & 0xFFFF;
	// lhz r27,6(r28)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r28.u32 + 6);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhz r8,2(r28)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + 2);
	// addic r3,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// lhz r29,-224(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + -224);
	// rlwinm r10,r27,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFFFFFF;
	// sth r10,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// subfe r3,r3,r7
	temp.u8 = (~ctx.r3.u32 + ctx.r7.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r30,-216(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// srawi r7,r16,16
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r16.s32 >> 16;
	// lwz r24,44(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// lhz r6,-2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// xor r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 ^ ctx.r11.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lwz r21,-212(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// lwz r6,-208(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// rlwinm r25,r7,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,8,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF0000;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r6.u32);
	// clrlwi r29,r8,24
	ctx.r29.u64 = ctx.r8.u32 & 0xFF;
	// stw r5,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r5.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwzx r6,r25,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r4.u32);
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// rlwinm r25,r11,23,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// add r18,r7,r29
	ctx.r18.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stw r25,3352(r5)
	REX_STORE_U32(ctx.r5.u32 + 3352, ctx.r25.u32);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// srawi r30,r24,16
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r24.s32 >> 16;
	// sth r7,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r7.u16);
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// add r3,r30,r21
	ctx.r3.u64 = ctx.r30.u64 + ctx.r21.u64;
	// clrlwi r8,r27,24
	ctx.r8.u64 = ctx.r27.u32 & 0xFF;
	// stw r18,25056(r6)
	REX_STORE_U32(ctx.r6.u32 + 25056, ctx.r18.u32);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// rlwinm r24,r11,24,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// sth r8,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r8.u16);
	// lwz r15,0(r31)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// sth r6,2(r20)
	REX_STORE_U16(ctx.r20.u32 + 2, ctx.r6.u16);
	// stw r24,12792(r5)
	REX_STORE_U32(ctx.r5.u32 + 12792, ctx.r24.u32);
	// bne cr6,0x8993b2b8
	if (!ctx.cr6.eq) goto loc_8993B2B8;
	// cmpwi cr6,r22,256
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 256, ctx.xer);
	// bne cr6,0x8993b2b8
	if (!ctx.cr6.eq) goto loc_8993B2B8;
	// lhz r5,4(r28)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 4);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// extsb r30,r5
	ctx.r30.s64 = ctx.r5.s8;
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// sth r30,2(r26)
	REX_STORE_U16(ctx.r26.u32 + 2, ctx.r30.u16);
	// rlwinm r27,r11,0,16,17
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// sth r3,0(r26)
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r3.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r30,r7,r5
	ctx.r30.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r29,r6,r3
	ctx.r29.u64 = ctx.r6.u64 + ctx.r3.u64;
	// rlwinm r30,r30,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r29,r29,16
	ctx.r29.u64 = ctx.r29.u32 & 0xFFFF;
	// cmpwi cr6,r27,16384
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16384, ctx.xer);
	// or r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 | ctx.r29.u64;
	// beq cr6,0x8993b264
	if (ctx.cr6.eq) goto loc_8993B264;
	// cmplwi cr6,r27,32768
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32768, ctx.xer);
	// beq cr6,0x8993b244
	if (ctx.cr6.eq) goto loc_8993B244;
	// cmplwi cr6,r27,49152
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 49152, ctx.xer);
	// bne cr6,0x8993b280
	if (!ctx.cr6.eq) goto loc_8993B280;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// subf r8,r11,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r7,r10,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r6,r5,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subf r10,r25,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r25.u64;
	// subf r11,r24,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r24.u64;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r11,r3,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x8993b280
	goto loc_8993B280;
loc_8993B244:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r10,r11,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r8,r5,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r5.u64;
	// subf r11,r25,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r25.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 | ctx.r29.u64;
	// b 0x8993b280
	goto loc_8993B280;
loc_8993B264:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// subf r10,r11,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subf r8,r3,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// subf r11,r24,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r24.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// or r11,r6,r30
	ctx.r11.u64 = ctx.r6.u64 | ctx.r30.u64;
loc_8993B280:
	// rlwinm r10,r27,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 12) & 0xFFFFF000;
	// stw r11,8(r17)
	REX_STORE_U32(ctx.r17.u32 + 8, ctx.r11.u32);
	// clrlwi r8,r23,16
	ctx.r8.u64 = ctx.r23.u32 & 0xFFFF;
	// stw r18,4(r17)
	REX_STORE_U32(ctx.r17.u32 + 4, ctx.r18.u32);
	// oris r7,r10,21249
	ctx.r7.u64 = ctx.r10.u64 | 1392574464;
	// stw r15,12(r17)
	REX_STORE_U32(ctx.r17.u32 + 12, ctx.r15.u32);
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// ori r5,r6,32896
	ctx.r5.u64 = ctx.r6.u64 | 32896;
	// stw r11,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// stw r5,16(r17)
	REX_STORE_U32(ctx.r17.u32 + 16, ctx.r5.u32);
	// addi r17,r17,20
	ctx.r17.s64 = ctx.r17.s64 + 20;
	// stw r11,512(r9)
	REX_STORE_U32(ctx.r9.u32 + 512, ctx.r11.u32);
	// b 0x8993b47c
	goto loc_8993B47C;
loc_8993B2B8:
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r29,-222(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + -222);
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// lhz r30,4(r28)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r28.u32 + 4);
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r8,r8,r19
	ctx.r8.u64 = ctx.r8.u64 + ctx.r19.u64;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// std r3,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r3.u64);
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// sth r8,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// extsw r27,r10
	ctx.r27.s64 = ctx.r10.s32;
	// sth r10,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// std r5,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r5.u64);
	// std r27,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r27.u64);
	// rlwinm r5,r30,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFFFF;
	// std r3,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r3.u64);
	// extsb r3,r30
	ctx.r3.s64 = ctx.r30.s8;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// mullw r3,r3,r29
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// lfd f13,-200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfd f12,-192(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// lfd f10,-184(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lfd f8,-176(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// lis r29,25345
	ctx.r29.s64 = 1661009920;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r3,2(r26)
	REX_STORE_U16(ctx.r26.u32 + 2, ctx.r3.u16);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// sth r5,0(r26)
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r5.u16);
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// rlwimi r29,r11,12,4,5
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xC000000) | (ctx.r29.u64 & 0xFFFFFFFFF3FFFFFF);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// clrlwi r3,r23,16
	ctx.r3.u64 = ctx.r23.u32 & 0xFFFF;
	// add r22,r7,r5
	ctx.r22.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r21,r6,r30
	ctx.r21.u64 = ctx.r6.u64 + ctx.r30.u64;
	// or r23,r29,r3
	ctx.r23.u64 = ctx.r29.u64 | ctx.r3.u64;
	// rlwinm r27,r11,0,16,17
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// rlwinm r3,r22,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// stw r23,512(r9)
	REX_STORE_U32(ctx.r9.u32 + 512, ctx.r23.u32);
	// clrlwi r29,r21,16
	ctx.r29.u64 = ctx.r21.u32 & 0xFFFF;
	// cmpwi cr6,r27,16384
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16384, ctx.xer);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// fdivs f1,f3,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f4.f64));
	// fdivs f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 / ctx.f5.f64));
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f10.u64);
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f9.u64);
	// lwz r22,-164(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// lwz r21,-156(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// beq cr6,0x8993b430
	if (ctx.cr6.eq) goto loc_8993B430;
	// cmplwi cr6,r27,32768
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32768, ctx.xer);
	// beq cr6,0x8993b414
	if (ctx.cr6.eq) goto loc_8993B414;
	// cmplwi cr6,r27,49152
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 49152, ctx.xer);
	// bne cr6,0x8993b448
	if (!ctx.cr6.eq) goto loc_8993B448;
	// subf r11,r10,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subf r8,r30,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r30.u64;
	// subf r7,r5,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r5.u64;
	// subf r11,r24,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r24.u64;
	// subf r10,r25,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r25.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rlwimi r11,r6,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x8993b448
	goto loc_8993B448;
loc_8993B414:
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r11,r25,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r25.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r8,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r7,r29
	ctx.r11.u64 = ctx.r7.u64 | ctx.r29.u64;
	// b 0x8993b448
	goto loc_8993B448;
loc_8993B430:
	// subf r11,r10,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r30.u64;
	// subf r11,r24,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r24.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// or r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 | ctx.r3.u64;
loc_8993B448:
	// rlwinm r10,r22,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// stw r23,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r23.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// stw r18,4(r17)
	REX_STORE_U32(ctx.r17.u32 + 4, ctx.r18.u32);
	// or r7,r10,r21
	ctx.r7.u64 = ctx.r10.u64 | ctx.r21.u64;
	// stw r11,8(r17)
	REX_STORE_U32(ctx.r17.u32 + 8, ctx.r11.u32);
	// ori r6,r8,32896
	ctx.r6.u64 = ctx.r8.u64 | 32896;
	// stw r15,12(r17)
	REX_STORE_U32(ctx.r17.u32 + 12, ctx.r15.u32);
	// stw r7,20(r17)
	REX_STORE_U32(ctx.r17.u32 + 20, ctx.r7.u32);
	// stw r6,16(r17)
	REX_STORE_U32(ctx.r17.u32 + 16, ctx.r6.u32);
	// addi r17,r17,24
	ctx.r17.s64 = ctx.r17.s64 + 24;
	// lwz r22,68(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lhz r23,-220(r1)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r1.u32 + -220);
loc_8993B47C:
	// lhzu r11,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8993b0dc
	if (!ctx.cr6.eq) goto loc_8993B0DC;
loc_8993B48C:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// stw r17,9520(r11)
	REX_STORE_U32(ctx.r11.u32 + 9520, ctx.r17.u32);
loc_8993B494:
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89941628) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89941630;
	__savegprlr_14(ctx, base);
	// stwu r1,-1728(r1)
	ea = -1728 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// addi r8,r10,19668
	ctx.r8.s64 = ctx.r10.s64 + 19668;
	// li r17,0
	ctx.r17.s64 = 0;
	// lbz r7,530(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 530);
	// sth r17,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r17.u16);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// lbz r5,586(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 586);
	// subfe r4,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lbzx r3,r4,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r3,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// bne cr6,0x89941d08
	if (!ctx.cr6.eq) goto loc_89941D08;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r11,3508(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89941d08
	if (!ctx.cr6.eq) goto loc_89941D08;
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lis r30,-30276
	ctx.r30.s64 = -1984167936;
	// lis r3,-30242
	ctx.r3.s64 = -1981939712;
	// stw r31,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// stw r30,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lbz r8,9527(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 9527);
	// li r9,392
	ctx.r9.s64 = 392;
	// lbz r7,32018(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 32018);
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// addi r20,r11,25128
	ctx.r20.s64 = ctx.r11.s64 + 25128;
	// stw r9,-21584(r3)
	REX_STORE_U32(ctx.r3.u32 + -21584, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r5,1392
	ctx.r5.s64 = 1392;
	// stb r11,12267(r6)
	REX_STORE_U8(ctx.r6.u32 + 12267, ctx.r11.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r17,12000(r29)
	REX_STORE_U32(ctx.r29.u32 + 12000, ctx.r17.u32);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stb r8,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// stb r7,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// bl 0x899dbdb0
	ctx.lr = 0x899416E0;
	sub_899DBDB0(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// stb r17,32018(r30)
	REX_STORE_U8(ctx.r30.u32 + 32018, ctx.r17.u8);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stb r11,9527(r31)
	REX_STORE_U8(ctx.r31.u32 + 9527, ctx.r11.u8);
	// bl 0x899306a8
	ctx.lr = 0x899416F4;
	sub_899306A8(ctx, base);
	// bl 0x8991fab8
	ctx.lr = 0x899416F8;
	sub_8991FAB8(ctx, base);
	// bl 0x89915ec0
	ctx.lr = 0x899416FC;
	sub_89915EC0(ctx, base);
	// bl 0x89917740
	ctx.lr = 0x89941700;
	sub_89917740(ctx, base);
	// bl 0x8991f510
	ctx.lr = 0x89941704;
	sub_8991F510(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,9056
	ctx.r11.s64 = ctx.r11.s64 + 9056;
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_89941718:
	// sth r17,112(r11)
	REX_STORE_U16(ctx.r11.u32 + 112, ctx.r17.u16);
	// stw r17,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r17.u32);
	// sth r17,172(r11)
	REX_STORE_U16(ctx.r11.u32 + 172, ctx.r17.u16);
	// stw r17,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r17.u32);
	// sth r17,232(r11)
	REX_STORE_U16(ctx.r11.u32 + 232, ctx.r17.u16);
	// stwu r17,180(r11)
	ea = 180 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r17.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x89941718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89941718;
	// bl 0x89918e78
	ctx.lr = 0x89941738;
	sub_89918E78(ctx, base);
	// bl 0x8992bf38
	ctx.lr = 0x8994173C;
	sub_8992BF38(ctx, base);
	// bl 0x8991acf0
	ctx.lr = 0x89941740;
	sub_8991ACF0(ctx, base);
	// bl 0x8991a4a8
	ctx.lr = 0x89941744;
	sub_8991A4A8(ctx, base);
	// bl 0x899193a8
	ctx.lr = 0x89941748;
	sub_899193A8(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r11,9448
	ctx.r11.s64 = ctx.r11.s64 + 9448;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_89941760:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x89941760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89941760;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r3,r11,-21104
	ctx.r3.s64 = ctx.r11.s64 + -21104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x899dcca0
	ctx.lr = 0x8994177C;
	sub_899DCCA0(ctx, base);
	// bl 0x89960e68
	ctx.lr = 0x89941780;
	sub_89960E68(ctx, base);
	// stw r17,8(r20)
	REX_STORE_U32(ctx.r20.u32 + 8, ctx.r17.u32);
	// stw r17,704(r20)
	REX_STORE_U32(ctx.r20.u32 + 704, ctx.r17.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r17,696(r20)
	REX_STORE_U32(ctx.r20.u32 + 696, ctx.r17.u32);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// li r14,1
	ctx.r14.s64 = 1;
	// bl 0x8993cc28
	ctx.lr = 0x899417A4;
	sub_8993CC28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x89929bd8
	ctx.lr = 0x899417B0;
	sub_89929BD8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r11,635(r20)
	REX_STORE_U8(ctx.r20.u32 + 635, ctx.r11.u8);
	// bl 0x89918ad0
	ctx.lr = 0x899417BC;
	sub_89918AD0(ctx, base);
	// li r3,62
	ctx.r3.s64 = 62;
	// bl 0x89936360
	ctx.lr = 0x899417C4;
	sub_89936360(ctx, base);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,3524(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899417e0
	if (ctx.cr6.eq) goto loc_899417E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899523f8
	ctx.lr = 0x899417E0;
	sub_899523F8(ctx, base);
loc_899417E0:
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// addi r3,r3,-10320
	ctx.r3.s64 = ctx.r3.s64 + -10320;
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lis r5,-30273
	ctx.r5.s64 = -1983971328;
	// addi r31,r27,7384
	ctx.r31.s64 = ctx.r27.s64 + 7384;
	// addi r3,r6,5472
	ctx.r3.s64 = ctx.r6.s64 + 5472;
	// addi r4,r4,7640
	ctx.r4.s64 = ctx.r4.s64 + 7640;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r5,r5,3536
	ctx.r5.s64 = ctx.r5.s64 + 3536;
	// stw r3,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// stw r4,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
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
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// addi r31,r26,27280
	ctx.r31.s64 = ctx.r26.s64 + 27280;
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r28,r28,8160
	ctx.r28.s64 = ctx.r28.s64 + 8160;
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r29,r29,12640
	ctx.r29.s64 = ctx.r29.s64 + 12640;
	// addi r7,r7,-21360
	ctx.r7.s64 = ctx.r7.s64 + -21360;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r6,r8,5496
	ctx.r6.s64 = ctx.r8.s64 + 5496;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r5,r9,12480
	ctx.r5.s64 = ctx.r9.s64 + 12480;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r4,r10,4952
	ctx.r4.s64 = ctx.r10.s64 + 4952;
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lis r31,-30269
	ctx.r31.s64 = -1983709184;
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// lis r15,-30275
	ctx.r15.s64 = -1984102400;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r19,-30269
	ctx.r19.s64 = -1983709184;
	// lis r18,-30270
	ctx.r18.s64 = -1983774720;
	// lis r16,-30270
	ctx.r16.s64 = -1983774720;
	// lis r21,-30269
	ctx.r21.s64 = -1983709184;
	// lis r22,-30274
	ctx.r22.s64 = -1984036864;
	// lis r23,-30273
	ctx.r23.s64 = -1983971328;
	// lis r24,-30270
	ctx.r24.s64 = -1983774720;
	// lis r25,-30270
	ctx.r25.s64 = -1983774720;
	// addi r27,r30,8016
	ctx.r27.s64 = ctx.r30.s64 + 8016;
loc_899418B8:
	// bl 0x899301c0
	ctx.lr = 0x899418BC;
	sub_899301C0(ctx, base);
	// lwz r26,88(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89941d10
	ctx.lr = 0x899418C8;
	sub_89941D10(ctx, base);
	// lwz r11,-10740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -10740);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,7124(r25)
	REX_STORE_U32(ctx.r25.u32 + 7124, ctx.r11.u32);
	// bl 0x8991dbc0
	ctx.lr = 0x899418D8;
	sub_8991DBC0(ctx, base);
	// bl 0x8991de00
	ctx.lr = 0x899418DC;
	sub_8991DE00(ctx, base);
	// bl 0x8991deb0
	ctx.lr = 0x899418E0;
	sub_8991DEB0(ctx, base);
	// stw r17,-10740(r31)
	REX_STORE_U32(ctx.r31.u32 + -10740, ctx.r17.u32);
	// stw r17,20948(r24)
	REX_STORE_U32(ctx.r24.u32 + 20948, ctx.r17.u32);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// bl 0x89927e88
	ctx.lr = 0x899418F4;
	sub_89927E88(ctx, base);
	// bl 0x899284c0
	ctx.lr = 0x899418F8;
	sub_899284C0(ctx, base);
	// bl 0x89928838
	ctx.lr = 0x899418FC;
	sub_89928838(ctx, base);
	// bl 0x89928ba0
	ctx.lr = 0x89941900;
	sub_89928BA0(ctx, base);
	// bl 0x89928f20
	ctx.lr = 0x89941904;
	sub_89928F20(ctx, base);
	// bl 0x89929220
	ctx.lr = 0x89941908;
	sub_89929220(ctx, base);
	// bl 0x89929510
	ctx.lr = 0x8994190C;
	sub_89929510(ctx, base);
	// lwz r10,-10740(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -10740);
	// stw r17,-10740(r31)
	REX_STORE_U32(ctx.r31.u32 + -10740, ctx.r17.u32);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r10,3792(r23)
	REX_STORE_U32(ctx.r23.u32 + 3792, ctx.r10.u32);
	// bl 0x89937b48
	ctx.lr = 0x89941924;
	sub_89937B48(ctx, base);
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lis r11,392
	ctx.r11.s64 = 25690112;
	// stw r11,-21584(r9)
	REX_STORE_U32(ctx.r9.u32 + -21584, ctx.r11.u32);
	// bl 0x8993c1f0
	ctx.lr = 0x89941934;
	sub_8993C1F0(ctx, base);
	// bl 0x89931f68
	ctx.lr = 0x89941938;
	sub_89931F68(ctx, base);
	// bl 0x89919238
	ctx.lr = 0x8994193C;
	sub_89919238(ctx, base);
	// bl 0x89917aa0
	ctx.lr = 0x89941940;
	sub_89917AA0(ctx, base);
	// bl 0x8991a648
	ctx.lr = 0x89941944;
	sub_8991A648(ctx, base);
	// bl 0x8991ae78
	ctx.lr = 0x89941948;
	sub_8991AE78(ctx, base);
	// bl 0x8992c6c8
	ctx.lr = 0x8994194C;
	sub_8992C6C8(ctx, base);
	// bl 0x89919778
	ctx.lr = 0x89941950;
	sub_89919778(ctx, base);
	// lwz r8,-10740(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -10740);
	// stw r17,-10740(r31)
	REX_STORE_U32(ctx.r31.u32 + -10740, ctx.r17.u32);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// neg r10,r8
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// stw r10,516(r22)
	REX_STORE_U32(ctx.r22.u32 + 516, ctx.r10.u32);
	// bl 0x89916028
	ctx.lr = 0x89941968;
	sub_89916028(ctx, base);
	// lwz r11,-10740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -10740);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,-21288(r21)
	REX_STORE_U32(ctx.r21.u32 + -21288, ctx.r11.u32);
	// beq cr6,0x89941984
	if (ctx.cr6.eq) goto loc_89941984;
	// bl 0x89960a68
	ctx.lr = 0x89941980;
	sub_89960A68(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
loc_89941984:
	// bl 0x89917da8
	ctx.lr = 0x89941988;
	sub_89917DA8(ctx, base);
	// bl 0x8993b6a8
	ctx.lr = 0x8994198C;
	sub_8993B6A8(ctx, base);
	// bl 0x89932480
	ctx.lr = 0x89941990;
	sub_89932480(ctx, base);
	// bl 0x89918fe0
	ctx.lr = 0x89941994;
	sub_89918FE0(ctx, base);
	// bl 0x8992de98
	ctx.lr = 0x89941998;
	sub_8992DE98(ctx, base);
	// bl 0x8992dfc0
	ctx.lr = 0x8994199C;
	sub_8992DFC0(ctx, base);
	// bl 0x8991af98
	ctx.lr = 0x899419A0;
	sub_8991AF98(ctx, base);
	// bl 0x89919888
	ctx.lr = 0x899419A4;
	sub_89919888(ctx, base);
	// bl 0x89919968
	ctx.lr = 0x899419A8;
	sub_89919968(ctx, base);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r17,-10740(r31)
	REX_STORE_U32(ctx.r31.u32 + -10740, ctx.r17.u32);
	// stw r17,7096(r16)
	REX_STORE_U32(ctx.r16.u32 + 7096, ctx.r17.u32);
	// bl 0x899309d8
	ctx.lr = 0x899419BC;
	sub_899309D8(ctx, base);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
loc_899419C4:
	// cmplwi cr6,r28,127
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 127, ctx.xer);
	// bne cr6,0x899419e8
	if (!ctx.cr6.eq) goto loc_899419E8;
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// li r3,8
	ctx.r3.s64 = 8;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// bl 0x89930720
	ctx.lr = 0x899419E8;
	sub_89930720(ctx, base);
loc_899419E8:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r30,r28,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941a04
	if (ctx.cr6.eq) goto loc_89941A04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89917e48
	ctx.lr = 0x89941A04;
	sub_89917E48(ctx, base);
loc_89941A04:
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941a1c
	if (ctx.cr6.eq) goto loc_89941A1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89919af8
	ctx.lr = 0x89941A1C;
	sub_89919AF8(ctx, base);
loc_89941A1C:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941a34
	if (ctx.cr6.eq) goto loc_89941A34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b418
	ctx.lr = 0x89941A34;
	sub_8991B418(ctx, base);
loc_89941A34:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941a4c
	if (ctx.cr6.eq) goto loc_89941A4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8992d2c0
	ctx.lr = 0x89941A4C;
	sub_8992D2C0(ctx, base);
loc_89941A4C:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941a64
	if (ctx.cr6.eq) goto loc_89941A64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8992cc08
	ctx.lr = 0x89941A64;
	sub_8992CC08(ctx, base);
loc_89941A64:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941a7c
	if (ctx.cr6.eq) goto loc_89941A7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932318
	ctx.lr = 0x89941A7C;
	sub_89932318(ctx, base);
loc_89941A7C:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941a94
	if (ctx.cr6.eq) goto loc_89941A94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8993b5b0
	ctx.lr = 0x89941A94;
	sub_8993B5B0(ctx, base);
loc_89941A94:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941aac
	if (ctx.cr6.eq) goto loc_89941AAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8992d1c8
	ctx.lr = 0x89941AAC;
	sub_8992D1C8(ctx, base);
loc_89941AAC:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941ac4
	if (ctx.cr6.eq) goto loc_89941AC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b318
	ctx.lr = 0x89941AC4;
	sub_8991B318(ctx, base);
loc_89941AC4:
	// addi r11,r27,256
	ctx.r11.s64 = ctx.r27.s64 + 256;
	// lhzx r10,r30,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r27.u32);
	// lhzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89941ae4
	if (ctx.cr6.eq) goto loc_89941AE4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89919088
	ctx.lr = 0x89941AE4;
	sub_89919088(ctx, base);
loc_89941AE4:
	// cmplwi cr6,r28,116
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 116, ctx.xer);
	// bne cr6,0x89941af0
	if (!ctx.cr6.eq) goto loc_89941AF0;
	// bl 0x89919c68
	ctx.lr = 0x89941AF0;
	sub_89919C68(ctx, base);
loc_89941AF0:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941b08
	if (ctx.cr6.eq) goto loc_89941B08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8992cb10
	ctx.lr = 0x89941B08;
	sub_8992CB10(ctx, base);
loc_89941B08:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lhzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941b20
	if (ctx.cr6.eq) goto loc_89941B20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89919a48
	ctx.lr = 0x89941B20;
	sub_89919A48(ctx, base);
loc_89941B20:
	// cmplwi cr6,r28,116
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 116, ctx.xer);
	// bne cr6,0x89941b3c
	if (!ctx.cr6.eq) goto loc_89941B3C;
	// bl 0x89919ba8
	ctx.lr = 0x89941B2C;
	sub_89919BA8(ctx, base);
	// bl 0x8993c3d0
	ctx.lr = 0x89941B30;
	sub_8993C3D0(ctx, base);
	// bl 0x89932168
	ctx.lr = 0x89941B34;
	sub_89932168(ctx, base);
	// bl 0x8993b498
	ctx.lr = 0x89941B38;
	sub_8993B498(ctx, base);
	// bl 0x8991a718
	ctx.lr = 0x89941B3C;
	sub_8991A718(ctx, base);
loc_89941B3C:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// blt cr6,0x899419c4
	if (ctx.cr6.lt) goto loc_899419C4;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,-10740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -10740);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,26524(r10)
	REX_STORE_U32(ctx.r10.u32 + 26524, ctx.r11.u32);
	// bl 0x89960da0
	ctx.lr = 0x89941B64;
	sub_89960DA0(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89941bfc
	if (ctx.cr6.eq) goto loc_89941BFC;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x89941bfc
	if (!ctx.cr6.lt) goto loc_89941BFC;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941b98
	if (ctx.cr6.eq) goto loc_89941B98;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8992b5e8
	ctx.lr = 0x89941B94;
	sub_8992B5E8(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
loc_89941B98:
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941bb0
	if (ctx.cr6.eq) goto loc_89941BB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8992b820
	ctx.lr = 0x89941BAC;
	sub_8992B820(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
loc_89941BB0:
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941bc8
	if (ctx.cr6.eq) goto loc_89941BC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8992b4e0
	ctx.lr = 0x89941BC4;
	sub_8992B4E0(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
loc_89941BC8:
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941be0
	if (ctx.cr6.eq) goto loc_89941BE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8992b468
	ctx.lr = 0x89941BDC;
	sub_8992B468(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
loc_89941BE0:
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89941bfc
	if (ctx.cr6.eq) goto loc_89941BFC;
	// li r11,120
	ctx.r11.s64 = 120;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,653(r20)
	REX_STORE_U8(ctx.r20.u32 + 653, ctx.r11.u8);
	// bl 0x8992b3e0
	ctx.lr = 0x89941BFC;
	sub_8992B3E0(ctx, base);
loc_89941BFC:
	// stw r17,-10740(r31)
	REX_STORE_U32(ctx.r31.u32 + -10740, ctx.r17.u32);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r17,5760(r18)
	REX_STORE_U32(ctx.r18.u32 + 5760, ctx.r17.u32);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// bl 0x89926b10
	ctx.lr = 0x89941C10;
	sub_89926B10(ctx, base);
	// lwz r9,-10740(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + -10740);
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r17,-10740(r31)
	REX_STORE_U32(ctx.r31.u32 + -10740, ctx.r17.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r9,-10768(r19)
	REX_STORE_U32(ctx.r19.u32 + -10768, ctx.r9.u32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x89941c3c
	if (!ctx.cr6.lt) goto loc_89941C3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
loc_89941C3C:
	// bl 0x899319c8
	ctx.lr = 0x89941C40;
	sub_899319C8(ctx, base);
	// lwz r8,-10740(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -10740);
	// lwz r9,176(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// neg r10,r8
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// stw r17,-10740(r31)
	REX_STORE_U32(ctx.r31.u32 + -10740, ctx.r17.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,-25892(r15)
	REX_STORE_U32(ctx.r15.u32 + -25892, ctx.r10.u32);
	// beq cr6,0x89941c7c
	if (ctx.cr6.eq) goto loc_89941C7C;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89941cbc
	if (!ctx.cr6.eq) goto loc_89941CBC;
loc_89941C7C:
	// lwz r11,872(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 872);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89941ca4
	if (ctx.cr6.eq) goto loc_89941CA4;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89941cbc
	if (!ctx.cr6.eq) goto loc_89941CBC;
loc_89941CA4:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmpwi cr6,r11,7200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7200, ctx.xer);
	// bge cr6,0x89941cbc
	if (!ctx.cr6.lt) goto loc_89941CBC;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x899418b8
	if (!ctx.cr6.eq) goto loc_899418B8;
loc_89941CBC:
	// bl 0x89940990
	ctx.lr = 0x89941CC0;
	sub_89940990(ctx, base);
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// lwz r10,3524(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 3524);
	// stb r17,12267(r9)
	REX_STORE_U8(ctx.r9.u32 + 12267, ctx.r17.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941ce0
	if (ctx.cr6.eq) goto loc_89941CE0;
	// bl 0x899526c8
	ctx.lr = 0x89941CE0;
	sub_899526C8(ctx, base);
loc_89941CE0:
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,1392
	ctx.r5.s64 = 1392;
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r8,160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stb r11,9527(r10)
	REX_STORE_U8(ctx.r10.u32 + 9527, ctx.r11.u8);
	// stb r9,32018(r8)
	REX_STORE_U8(ctx.r8.u32 + 32018, ctx.r9.u8);
	// bl 0x899dbdb0
	ctx.lr = 0x89941D08;
	sub_899DBDB0(ctx, base);
loc_89941D08:
	// addi r1,r1,1728
	ctx.r1.s64 = ctx.r1.s64 + 1728;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899483F8) {
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
	// bl 0x8994bf28
	ctx.lr = 0x89948408;
	sub_8994BF28(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,12280
	ctx.r10.s64 = ctx.r10.s64 + 12280;
	// addi r9,r9,8544
	ctx.r9.s64 = ctx.r9.s64 + 8544;
loc_8994841C:
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x89948454
	if (!ctx.cr6.eq) goto loc_89948454;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,96
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 96, ctx.xer);
	// blt cr6,0x8994841c
	if (ctx.cr6.lt) goto loc_8994841C;
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
loc_89948454:
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
}

DEFINE_REX_FUNC(sub_89948468) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x89948470;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// addi r27,r11,12280
	ctx.r27.s64 = ctx.r11.s64 + 12280;
	// li r6,96
	ctx.r6.s64 = 96;
	// lwz r3,3680(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 3680);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,-26964(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + -26964);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x899484A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x89948148
	ctx.lr = 0x899484A8;
	sub_89948148(ctx, base);
	// bl 0x89948238
	ctx.lr = 0x899484AC;
	sub_89948238(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89932850
	ctx.lr = 0x899484B8;
	sub_89932850(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x89948500
	if (!ctx.cr6.gt) goto loc_89948500;
	// lis r11,-30296
	ctx.r11.s64 = -1985478656;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-25852
	ctx.r29.s64 = ctx.r11.s64 + -25852;
loc_899484D0:
	// addi r11,r27,64
	ctx.r11.s64 = ctx.r27.s64 + 64;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x899484ec
	if (ctx.cr6.eq) goto loc_899484EC;
	// bl 0x89948c00
	ctx.lr = 0x899484EC;
	sub_89948C00(ctx, base);
loc_899484EC:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x899484d0
	if (ctx.cr6.lt) goto loc_899484D0;
loc_89948500:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r25,-30247
	ctx.r25.s64 = -1982267392;
	// lbz r10,12799(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12799);
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// bgt cr6,0x89948568
	if (ctx.cr6.gt) goto loc_89948568;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,6055(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6055);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bgt cr6,0x89948568
	if (ctx.cr6.gt) goto loc_89948568;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lwz r11,3796(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3796);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x89948568
	if (ctx.cr6.gt) goto loc_89948568;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r11,20396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20396);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bgt cr6,0x89948568
	if (ctx.cr6.gt) goto loc_89948568;
	// lwz r11,19360(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 19360);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x89948568
	if (ctx.cr6.lt) goto loc_89948568;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x89948568
	if (ctx.cr6.gt) goto loc_89948568;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r11,12636(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12636);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x8994856c
	if (!ctx.cr6.gt) goto loc_8994856C;
loc_89948568:
	// bl 0x89948c00
	ctx.lr = 0x8994856C;
	sub_89948C00(ctx, base);
loc_8994856C:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,520
	ctx.r30.s64 = ctx.r11.s64 + 520;
	// addi r29,r10,6052
	ctx.r29.s64 = ctx.r10.s64 + 6052;
	// addi r26,r9,-21388
	ctx.r26.s64 = ctx.r9.s64 + -21388;
loc_89948588:
	// lbzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x899485c4
	if (ctx.cr6.gt) goto loc_899485C4;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x899485c4
	if (ctx.cr6.gt) goto loc_899485C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899485c4
	if (ctx.cr6.eq) goto loc_899485C4;
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x899485c4
	if (ctx.cr6.gt) goto loc_899485C4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899485c8
	if (ctx.cr6.eq) goto loc_899485C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899485c8
	if (!ctx.cr6.eq) goto loc_899485C8;
loc_899485C4:
	// bl 0x89948c00
	ctx.lr = 0x899485C8;
	sub_89948C00(ctx, base);
loc_899485C8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89948588
	if (ctx.cr6.lt) goto loc_89948588;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,6034(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6034);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8994861c
	if (ctx.cr6.gt) goto loc_8994861C;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,9518(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 9518);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x8994861c
	if (ctx.cr6.gt) goto loc_8994861C;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lbz r10,32547(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32547);
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// bgt cr6,0x8994861c
	if (ctx.cr6.gt) goto loc_8994861C;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r10,9654(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 9654);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// ble cr6,0x89948620
	if (!ctx.cr6.gt) goto loc_89948620;
loc_8994861C:
	// bl 0x89948c00
	ctx.lr = 0x89948620;
	sub_89948C00(ctx, base);
loc_89948620:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lhz r10,536(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 536);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bgt cr6,0x89948700
	if (ctx.cr6.gt) goto loc_89948700;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lhz r10,19184(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 19184);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x89948700
	if (ctx.cr6.gt) goto loc_89948700;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r10,12600(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12600);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x89948700
	if (ctx.cr6.gt) goto loc_89948700;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lhz r10,584(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 584);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bgt cr6,0x89948700
	if (ctx.cr6.gt) goto loc_89948700;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r10,20416(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 20416);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bgt cr6,0x89948700
	if (ctx.cr6.gt) goto loc_89948700;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r10,8416(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8416);
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// bgt cr6,0x89948700
	if (ctx.cr6.gt) goto loc_89948700;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lhz r10,-9220(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -9220);
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bgt cr6,0x89948700
	if (ctx.cr6.gt) goto loc_89948700;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lhz r10,7376(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 7376);
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bgt cr6,0x89948700
	if (ctx.cr6.gt) goto loc_89948700;
	// lis r11,-30269
	ctx.r11.s64 = -1983709184;
	// lhz r10,-10776(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -10776);
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// bgt cr6,0x89948700
	if (ctx.cr6.gt) goto loc_89948700;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lhz r10,9644(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 9644);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bgt cr6,0x89948700
	if (ctx.cr6.gt) goto loc_89948700;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lhz r10,-9540(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -9540);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bgt cr6,0x89948700
	if (ctx.cr6.gt) goto loc_89948700;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r10,25060(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 25060);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bgt cr6,0x89948700
	if (ctx.cr6.gt) goto loc_89948700;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lhz r10,32012(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 32012);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bgt cr6,0x89948700
	if (ctx.cr6.gt) goto loc_89948700;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r10,26900(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 26900);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// ble cr6,0x89948704
	if (!ctx.cr6.gt) goto loc_89948704;
loc_89948700:
	// bl 0x89948c00
	ctx.lr = 0x89948704;
	sub_89948C00(ctx, base);
loc_89948704:
	// lbz r7,26(r27)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r27.u32 + 26);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lbz r6,27(r27)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + 27);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r5,28(r27)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r27.u32 + 28);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r4,29(r27)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r27.u32 + 29);
	// addi r28,r10,-4384
	ctx.r28.s64 = ctx.r10.s64 + -4384;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
loc_89948734:
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r31,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// ble cr6,0x89948748
	if (!ctx.cr6.gt) goto loc_89948748;
	// bl 0x89948c00
	ctx.lr = 0x89948748;
	sub_89948C00(ctx, base);
loc_89948748:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x89948768
	if (ctx.cr6.lt) goto loc_89948768;
	// bl 0x89948c00
	ctx.lr = 0x89948768;
	sub_89948C00(ctx, base);
loc_89948768:
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x89948734
	if (ctx.cr6.lt) goto loc_89948734;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,8544
	ctx.r10.s64 = ctx.r10.s64 + 8544;
loc_8994878C:
	// lbzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,96
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 96, ctx.xer);
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// blt cr6,0x8994878c
	if (ctx.cr6.lt) goto loc_8994878C;
	// bl 0x8994c070
	ctx.lr = 0x899487AC;
	sub_8994C070(ctx, base);
	// lwz r11,19360(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 19360);
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// lbz r7,0(r26)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r11,12068(r9)
	REX_STORE_U32(ctx.r9.u32 + 12068, ctx.r11.u32);
	// stw r11,5764(r8)
	REX_STORE_U32(ctx.r8.u32 + 5764, ctx.r11.u32);
	// bne cr6,0x899487e8
	if (!ctx.cr6.eq) goto loc_899487E8;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,4947(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4947);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x89948800
	if (!ctx.cr6.eq) goto loc_89948800;
	// lbz r11,1(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89948800
	if (ctx.cr6.eq) goto loc_89948800;
loc_899487E8:
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,-31405(r9)
	REX_STORE_U8(ctx.r9.u32 + -31405, ctx.r11.u8);
	// stb r10,12271(r8)
	REX_STORE_U8(ctx.r8.u32 + 12271, ctx.r10.u8);
loc_89948800:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89949960) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89949968;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x899483f8
	ctx.lr = 0x89949970;
	sub_899483F8(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89949a08
	if (!ctx.cr6.eq) goto loc_89949A08;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r31,16
	ctx.r31.s64 = 16;
	// addi r30,r10,12280
	ctx.r30.s64 = ctx.r10.s64 + 12280;
	// addi r29,r11,8544
	ctx.r29.s64 = ctx.r11.s64 + 8544;
loc_89949994:
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x899499c0
	if (!ctx.cr6.eq) goto loc_899499C0;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x899499d4
	if (ctx.cr6.eq) goto loc_899499D4;
loc_899499C0:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// li r5,2
	ctx.r5.s64 = 2;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x899d8f48
	ctx.lr = 0x899499D4;
	sub_899D8F48(ctx, base);
loc_899499D4:
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// blt cr6,0x89949994
	if (ctx.cr6.lt) goto loc_89949994;
	// li r11,0
	ctx.r11.s64 = 0;
loc_899499EC:
	// lbzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,96
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 96, ctx.xer);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// blt cr6,0x899499ec
	if (ctx.cr6.lt) goto loc_899499EC;
loc_89949A08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8994A048) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x8994A050;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,6402(r8)
	REX_STORE_U8(ctx.r8.u32 + 6402, ctx.r11.u8);
	// stb r10,9543(r7)
	REX_STORE_U8(ctx.r7.u32 + 9543, ctx.r10.u8);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stw r9,-9224(r6)
	REX_STORE_U32(ctx.r6.u32 + -9224, ctx.r9.u32);
	// lis r7,32639
	ctx.r7.s64 = 2139029504;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// li r24,3600
	ctx.r24.s64 = 3600;
	// ori r30,r7,32768
	ctx.r30.u64 = ctx.r7.u64 | 32768;
	// lis r26,-30274
	ctx.r26.s64 = -1984036864;
	// lis r31,-30276
	ctx.r31.s64 = -1984167936;
	// addi r27,r10,12280
	ctx.r27.s64 = ctx.r10.s64 + 12280;
	// addi r28,r9,-31400
	ctx.r28.s64 = ctx.r9.s64 + -31400;
	// addi r25,r8,20432
	ctx.r25.s64 = ctx.r8.s64 + 20432;
	// addi r29,r11,22824
	ctx.r29.s64 = ctx.r11.s64 + 22824;
loc_8994A0AC:
	// bl 0x899301c0
	ctx.lr = 0x8994A0B0;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x8994A0B4;
	sub_899309D8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89930930
	ctx.lr = 0x8994A0BC;
	sub_89930930(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x8994A0C0;
	sub_899306A8(ctx, base);
	// lbz r11,32550(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 32550);
	// addi r9,r28,3868
	ctx.r9.s64 = ctx.r28.s64 + 3868;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994a100
	if (ctx.cr6.eq) goto loc_8994A100;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994A0E8:
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
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
	// bne cr6,0x8994a0e8
	if (!ctx.cr6.eq) goto loc_8994A0E8;
loc_8994A100:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stb r11,30(r27)
	REX_STORE_U8(ctx.r27.u32 + 30, ctx.r11.u8);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89930720
	ctx.lr = 0x8994A114;
	sub_89930720(ctx, base);
	// bl 0x899319c8
	ctx.lr = 0x8994A118;
	sub_899319C8(ctx, base);
	// lbz r11,530(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 530);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8994a134
	if (ctx.cr6.eq) goto loc_8994A134;
	// lbz r11,128(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 128);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8994a158
	if (!ctx.cr6.eq) goto loc_8994A158;
loc_8994A134:
	// lbz r11,32550(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 32550);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8994a0ac
	if (!ctx.cr6.eq) goto loc_8994A0AC;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x8994a0ac
	if (!ctx.cr0.eq) goto loc_8994A0AC;
loc_8994A158:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32550(r31)
	REX_STORE_U8(ctx.r31.u32 + 32550, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8994B0D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8994B0D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r3,-30295
	ctx.r3.s64 = -1985413120;
	// lis r31,16576
	ctx.r31.s64 = 1086324736;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r22,25
	ctx.r22.s64 = 25;
	// li r23,16
	ctx.r23.s64 = 16;
	// stb r19,131(r1)
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r19.u8);
	// li r18,7
	ctx.r18.s64 = 7;
	// stb r22,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r22.u8);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// stb r19,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stb r19,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r19.u8);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// stb r19,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r19.u8);
	// addi r16,r8,12004
	ctx.r16.s64 = ctx.r8.s64 + 12004;
	// stb r19,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r19.u8);
	// addi r24,r7,23192
	ctx.r24.s64 = ctx.r7.s64 + 23192;
	// stb r23,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r23.u8);
	// addi r26,r6,23132
	ctx.r26.s64 = ctx.r6.s64 + 23132;
	// stb r18,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r18.u8);
	// addi r27,r5,23124
	ctx.r27.s64 = ctx.r5.s64 + 23124;
	// stw r16,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// addi r28,r4,20432
	ctx.r28.s64 = ctx.r4.s64 + 20432;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r17,r3,23216
	ctx.r17.s64 = ctx.r3.s64 + 23216;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// ori r15,r31,16384
	ctx.r15.u64 = ctx.r31.u64 | 16384;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// stw r17,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r17.u32);
	// mr r14,r19
	ctx.r14.u64 = ctx.r19.u64;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// addi r31,r11,5344
	ctx.r31.s64 = ctx.r11.s64 + 5344;
	// addi r29,r10,12280
	ctx.r29.s64 = ctx.r10.s64 + 12280;
	// addi r30,r9,-31400
	ctx.r30.s64 = ctx.r9.s64 + -31400;
	// b 0x8994b1c8
	goto loc_8994B1C8;
loc_8994B188:
	// lis r11,16576
	ctx.r11.s64 = 1086324736;
	// lbz r25,80(r1)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r14,81(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r18,134(r1)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 134);
	// ori r15,r11,16384
	ctx.r15.u64 = ctx.r11.u64 | 16384;
	// lbz r23,133(r1)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r1.u32 + 133);
	// lbz r22,132(r1)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r1.u32 + 132);
	// lbz r19,130(r1)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r1.u32 + 130);
	// lbz r20,129(r1)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r1.u32 + 129);
	// lbz r21,128(r1)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// lwz r16,84(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r24,88(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,92(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,100(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r17,104(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_8994B1C8:
	// bl 0x899301c0
	ctx.lr = 0x8994B1CC;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x8994B1D0;
	sub_899309D8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89930930
	ctx.lr = 0x8994B1D8;
	sub_89930930(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x8994B1DC;
	sub_899306A8(ctx, base);
	// lis r4,-32640
	ctx.r4.s64 = -2139095040;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x89931dd8
	ctx.lr = 0x8994B1EC;
	sub_89931DD8(ctx, base);
	// lbz r11,256(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 256);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8994b20c
	if (ctx.cr6.eq) goto loc_8994B20C;
	// extsb r11,r25
	ctx.r11.s64 = ctx.r25.s8;
	// lbzx r25,r11,r27
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// stb r25,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
loc_8994B20C:
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994b224
	if (ctx.cr6.eq) goto loc_8994B224;
	// extsb r11,r25
	ctx.r11.s64 = ctx.r25.s8;
	// lbzx r25,r11,r26
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// stb r25,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
loc_8994B224:
	// extsb r28,r25
	ctx.r28.s64 = ctx.r25.s8;
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// bgt cr6,0x8994b738
	if (ctx.cr6.gt) goto loc_8994B738;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8994b2fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8994B2FC;
	// bdzf 4*cr6+eq,0x8994b3ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8994B3EC;
	// bdzf 4*cr6+eq,0x8994b4cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8994B4CC;
	// bdzf 4*cr6+eq,0x8994b59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8994B59C;
	// bne cr6,0x8994b66c
	if (!ctx.cr6.eq) goto loc_8994B66C;
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994b2a4
	if (ctx.cr6.eq) goto loc_8994B2A4;
	// clrlwi r10,r18,28
	ctx.r10.u64 = ctx.r18.u32 & 0xF;
	// rlwinm r11,r18,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8994b290
	if (!ctx.cr6.eq) goto loc_8994B290;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_8994B290:
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r18,r9,24
	ctx.r18.u64 = ctx.r9.u32 & 0xFF;
	// stb r18,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r18.u8);
loc_8994B2A4:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994b738
	if (ctx.cr6.eq) goto loc_8994B738;
	// clrlwi r11,r18,28
	ctx.r11.u64 = ctx.r18.u32 & 0xF;
	// rlwinm r10,r18,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8994b2e4
	if (!ctx.cr6.eq) goto loc_8994B2E4;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8994b2e0
	if (!ctx.cr6.eq) goto loc_8994B2E0;
	// li r10,9
	ctx.r10.s64 = 9;
loc_8994B2E0:
	// li r11,9
	ctx.r11.s64 = 9;
loc_8994B2E4:
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r18,r8,24
	ctx.r18.u64 = ctx.r8.u32 & 0xFF;
	// stb r18,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r18.u8);
	// b 0x8994b738
	goto loc_8994B738;
loc_8994B2FC:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994b364
	if (ctx.cr6.eq) goto loc_8994B364;
	// clrlwi r10,r23,28
	ctx.r10.u64 = ctx.r23.u32 & 0xF;
	// rlwinm r11,r23,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8994b340
	if (!ctx.cr6.eq) goto loc_8994B340;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_8994B340:
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r23,r9,24
	ctx.r23.u64 = ctx.r9.u32 & 0xFF;
	// stb r23,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r23.u8);
	// cmplwi cr6,r23,19
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 19, ctx.xer);
	// bne cr6,0x8994b364
	if (!ctx.cr6.eq) goto loc_8994B364;
	// li r23,1
	ctx.r23.s64 = 1;
	// stb r23,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r23.u8);
loc_8994B364:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994b3c8
	if (ctx.cr6.eq) goto loc_8994B3C8;
	// clrlwi r11,r23,28
	ctx.r11.u64 = ctx.r23.u32 & 0xF;
	// rlwinm r10,r23,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8994b3a4
	if (!ctx.cr6.eq) goto loc_8994B3A4;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8994b3a0
	if (!ctx.cr6.eq) goto loc_8994B3A0;
	// li r10,9
	ctx.r10.s64 = 9;
loc_8994B3A0:
	// li r11,9
	ctx.r11.s64 = 9;
loc_8994B3A4:
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r23,r8,24
	ctx.r23.u64 = ctx.r8.u32 & 0xFF;
	// stb r23,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r23.u8);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8994b3c8
	if (!ctx.cr6.eq) goto loc_8994B3C8;
	// li r23,18
	ctx.r23.s64 = 18;
	// stb r23,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r23.u8);
loc_8994B3C8:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// clrlwi r10,r22,24
	ctx.r10.u64 = ctx.r22.u32 & 0xFF;
	// lbzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8994b738
	if (!ctx.cr6.gt) goto loc_8994B738;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// stb r11,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// b 0x8994b738
	goto loc_8994B738;
loc_8994B3EC:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994b460
	if (ctx.cr6.eq) goto loc_8994B460;
	// clrlwi r10,r22,28
	ctx.r10.u64 = ctx.r22.u32 & 0xF;
	// rlwinm r11,r22,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8994b430
	if (!ctx.cr6.eq) goto loc_8994B430;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_8994B430:
	// clrlwi r9,r23,24
	ctx.r9.u64 = ctx.r23.u32 & 0xFF;
	// rlwinm r7,r11,4,20,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lbzx r11,r9,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r24.u32);
	// clrlwi r22,r5,24
	ctx.r22.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stb r22,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r22.u8);
	// cmpw cr6,r22,r4
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8994b460
	if (!ctx.cr6.eq) goto loc_8994B460;
	// li r22,1
	ctx.r22.s64 = 1;
	// stb r22,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r22.u8);
loc_8994B460:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994b738
	if (ctx.cr6.eq) goto loc_8994B738;
	// clrlwi r11,r22,28
	ctx.r11.u64 = ctx.r22.u32 & 0xF;
	// rlwinm r10,r22,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8994b4a0
	if (!ctx.cr6.eq) goto loc_8994B4A0;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8994b49c
	if (!ctx.cr6.eq) goto loc_8994B49C;
	// li r10,9
	ctx.r10.s64 = 9;
loc_8994B49C:
	// li r11,9
	ctx.r11.s64 = 9;
loc_8994B4A0:
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r22,r8,24
	ctx.r22.u64 = ctx.r8.u32 & 0xFF;
	// stb r22,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r22.u8);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x8994b738
	if (!ctx.cr6.eq) goto loc_8994B738;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// lbzx r22,r11,r24
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// stb r22,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r22.u8);
	// b 0x8994b738
	goto loc_8994B738;
loc_8994B4CC:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994b534
	if (ctx.cr6.eq) goto loc_8994B534;
	// clrlwi r10,r19,28
	ctx.r10.u64 = ctx.r19.u32 & 0xF;
	// rlwinm r11,r19,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8994b510
	if (!ctx.cr6.eq) goto loc_8994B510;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_8994B510:
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r11,-36
	ctx.r10.s64 = ctx.r11.s64 + -36;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r19,r5,r11
	ctx.r19.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stb r19,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r19.u8);
loc_8994B534:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994b738
	if (ctx.cr6.eq) goto loc_8994B738;
	// clrlwi r11,r19,28
	ctx.r11.u64 = ctx.r19.u32 & 0xF;
	// rlwinm r10,r19,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8994b574
	if (!ctx.cr6.eq) goto loc_8994B574;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8994b570
	if (!ctx.cr6.eq) goto loc_8994B570;
	// li r10,9
	ctx.r10.s64 = 9;
loc_8994B570:
	// li r11,9
	ctx.r11.s64 = 9;
loc_8994B574:
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r19,r8,24
	ctx.r19.u64 = ctx.r8.u32 & 0xFF;
	// stb r19,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r19.u8);
	// cmplwi cr6,r19,153
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 153, ctx.xer);
	// bne cr6,0x8994b738
	if (!ctx.cr6.eq) goto loc_8994B738;
	// li r19,35
	ctx.r19.s64 = 35;
	// stb r19,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r19.u8);
	// b 0x8994b738
	goto loc_8994B738;
loc_8994B59C:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994b604
	if (ctx.cr6.eq) goto loc_8994B604;
	// clrlwi r10,r20,28
	ctx.r10.u64 = ctx.r20.u32 & 0xF;
	// rlwinm r11,r20,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8994b5e0
	if (!ctx.cr6.eq) goto loc_8994B5E0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_8994B5E0:
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r11,-96
	ctx.r10.s64 = ctx.r11.s64 + -96;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r20,r5,r11
	ctx.r20.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stb r20,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r20.u8);
loc_8994B604:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994b738
	if (ctx.cr6.eq) goto loc_8994B738;
	// clrlwi r11,r20,28
	ctx.r11.u64 = ctx.r20.u32 & 0xF;
	// rlwinm r10,r20,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8994b644
	if (!ctx.cr6.eq) goto loc_8994B644;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8994b640
	if (!ctx.cr6.eq) goto loc_8994B640;
	// li r10,9
	ctx.r10.s64 = 9;
loc_8994B640:
	// li r11,9
	ctx.r11.s64 = 9;
loc_8994B644:
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r20,r8,24
	ctx.r20.u64 = ctx.r8.u32 & 0xFF;
	// stb r20,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r20.u8);
	// cmplwi cr6,r20,153
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 153, ctx.xer);
	// bne cr6,0x8994b738
	if (!ctx.cr6.eq) goto loc_8994B738;
	// li r20,89
	ctx.r20.s64 = 89;
	// stb r20,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r20.u8);
	// b 0x8994b738
	goto loc_8994B738;
loc_8994B66C:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994b6d4
	if (ctx.cr6.eq) goto loc_8994B6D4;
	// clrlwi r10,r21,28
	ctx.r10.u64 = ctx.r21.u32 & 0xF;
	// rlwinm r11,r21,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8994b6b0
	if (!ctx.cr6.eq) goto loc_8994B6B0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_8994B6B0:
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r11,-96
	ctx.r10.s64 = ctx.r11.s64 + -96;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r21,r5,r11
	ctx.r21.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stb r21,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r21.u8);
loc_8994B6D4:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994b738
	if (ctx.cr6.eq) goto loc_8994B738;
	// clrlwi r11,r21,28
	ctx.r11.u64 = ctx.r21.u32 & 0xF;
	// rlwinm r10,r21,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8994b714
	if (!ctx.cr6.eq) goto loc_8994B714;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8994b710
	if (!ctx.cr6.eq) goto loc_8994B710;
	// li r10,9
	ctx.r10.s64 = 9;
loc_8994B710:
	// li r11,9
	ctx.r11.s64 = 9;
loc_8994B714:
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r21,r8,24
	ctx.r21.u64 = ctx.r8.u32 & 0xFF;
	// stb r21,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r21.u8);
	// cmplwi cr6,r21,153
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 153, ctx.xer);
	// bne cr6,0x8994b738
	if (!ctx.cr6.eq) goto loc_8994B738;
	// li r21,89
	ctx.r21.s64 = 89;
	// stb r21,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r21.u8);
loc_8994B738:
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// beq cr6,0x8994b74c
	if (ctx.cr6.eq) goto loc_8994B74C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// b 0x8994b75c
	goto loc_8994B75C;
loc_8994B74C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8994afb0
	ctx.lr = 0x8994B758;
	sub_8994AFB0(ctx, base);
	// stb r3,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
loc_8994B75C:
	// rlwinm r9,r28,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r11,-10032(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -10032);
	// addi r7,r17,20
	ctx.r7.s64 = ctx.r17.s64 + 20;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r31,-10032
	ctx.r10.s64 = ctx.r31.s64 + -10032;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x8994b7ac
	if (ctx.cr6.eq) goto loc_8994B7AC;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994B794:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r7,r11,r15
	ctx.r7.u64 = ctx.r11.u64 + ctx.r15.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994b794
	if (!ctx.cr6.eq) goto loc_8994B794;
loc_8994B7AC:
	// rlwinm r7,r18,30,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 30) & 0x3C;
	// lbz r8,2(r16)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r16.u32 + 2);
	// rlwinm r3,r23,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3C;
	// lbz r11,6(r16)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r16.u32 + 6);
	// rlwinm r28,r23,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// lbz r10,5(r16)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r16.u32 + 5);
	// rlwinm r4,r8,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFC;
	// lbz r9,4(r16)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r16.u32 + 4);
	// rlwinm r27,r22,30,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3C;
	// lwz r14,108(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r6,r7,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r26,r22,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r19,30,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 30) & 0x3C;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lwzx r4,r3,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r22,r21,30,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3C;
	// lwzx r3,r28,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r21,r21,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r28,r27,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// rlwinm r5,r18,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// lwzx r27,r26,r31
	ctx.r27.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// rlwinm r24,r20,30,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 30) & 0x3C;
	// lwzx r26,r7,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r7,r11,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// stw r6,3136(r30)
	REX_STORE_U32(ctx.r30.u32 + 3136, ctx.r6.u32);
	// rlwinm r23,r20,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// stw r4,2880(r30)
	REX_STORE_U32(ctx.r30.u32 + 2880, ctx.r4.u32);
	// rlwinm r20,r10,30,2,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r18,r10,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r10,r22,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// lwzx r22,r21,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// rlwinm r17,r9,30,2,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r21,r11,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r15,r9,2,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// lwzx r9,r7,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// lwzx r7,r18,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// rlwinm r25,r19,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// lwzx r17,r17,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lwzx r15,r15,r31
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r31.u32);
	// lbz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r16.u32 + 0);
	// lwzx r25,r25,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// stw r17,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// li r17,1
	ctx.r17.s64 = 1;
	// lwzx r19,r20,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r15,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// li r15,1
	ctx.r15.s64 = 1;
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// std r15,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r15.u64);
	// lwz r15,112(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lbz r7,1(r16)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r16.u32 + 1);
	// li r16,1
	ctx.r16.s64 = 1;
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// stw r5,3140(r30)
	REX_STORE_U32(ctx.r30.u32 + 3140, ctx.r5.u32);
	// stw r3,2884(r30)
	REX_STORE_U32(ctx.r30.u32 + 2884, ctx.r3.u32);
	// stw r28,2624(r30)
	REX_STORE_U32(ctx.r30.u32 + 2624, ctx.r28.u32);
	// stw r27,2628(r30)
	REX_STORE_U32(ctx.r30.u32 + 2628, ctx.r27.u32);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// stw r26,2368(r30)
	REX_STORE_U32(ctx.r30.u32 + 2368, ctx.r26.u32);
	// stw r25,2372(r30)
	REX_STORE_U32(ctx.r30.u32 + 2372, ctx.r25.u32);
	// stbx r8,r14,r29
	REX_STORE_U8(ctx.r14.u32 + ctx.r29.u32, ctx.r8.u8);
	// rlwinm r8,r7,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// lwz r14,112(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stw r14,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// lwzx r14,r15,r31
	ctx.r14.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r31.u32);
	// rlwinm r15,r11,30,2,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// std r14,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r14.u64);
	// lwz r14,108(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// lwz r14,116(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r14,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,3632(r30)
	REX_STORE_U32(ctx.r30.u32 + 3632, ctx.r9.u32);
	// rotlwi r27,r14,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// stb r11,16(r29)
	REX_STORE_U8(ctx.r29.u32 + 16, ctx.r11.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r8,r7,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r7,r15,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r31.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r28,108(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// ld r15,136(r1)
	ctx.r15.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// ld r14,144(r1)
	ctx.r14.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// stw r10,1856(r30)
	REX_STORE_U32(ctx.r30.u32 + 1856, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r24,2112(r30)
	REX_STORE_U32(ctx.r30.u32 + 2112, ctx.r24.u32);
	// stw r23,2116(r30)
	REX_STORE_U32(ctx.r30.u32 + 2116, ctx.r23.u32);
	// stw r22,1860(r30)
	REX_STORE_U32(ctx.r30.u32 + 1860, ctx.r22.u32);
	// stw r21,3636(r30)
	REX_STORE_U32(ctx.r30.u32 + 3636, ctx.r21.u32);
	// stb r20,24(r29)
	REX_STORE_U8(ctx.r29.u32 + 24, ctx.r20.u8);
	// stw r19,3644(r30)
	REX_STORE_U32(ctx.r30.u32 + 3644, ctx.r19.u32);
	// stb r18,22(r29)
	REX_STORE_U8(ctx.r29.u32 + 22, ctx.r18.u8);
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r17,20(r29)
	REX_STORE_U8(ctx.r29.u32 + 20, ctx.r17.u8);
	// stb r16,18(r29)
	REX_STORE_U8(ctx.r29.u32 + 18, ctx.r16.u8);
	// stb r15,14(r29)
	REX_STORE_U8(ctx.r29.u32 + 14, ctx.r15.u8);
	// stw r14,3668(r30)
	REX_STORE_U32(ctx.r30.u32 + 3668, ctx.r14.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// stw r5,3648(r30)
	REX_STORE_U32(ctx.r30.u32 + 3648, ctx.r5.u32);
	// stw r28,3656(r30)
	REX_STORE_U32(ctx.r30.u32 + 3656, ctx.r28.u32);
	// stw r27,3660(r30)
	REX_STORE_U32(ctx.r30.u32 + 3660, ctx.r27.u32);
	// stw r11,3672(r30)
	REX_STORE_U32(ctx.r30.u32 + 3672, ctx.r11.u32);
	// stb r10,28(r29)
	REX_STORE_U8(ctx.r29.u32 + 28, ctx.r10.u8);
	// stw r9,3680(r30)
	REX_STORE_U32(ctx.r30.u32 + 3680, ctx.r9.u32);
	// stw r8,3684(r30)
	REX_STORE_U32(ctx.r30.u32 + 3684, ctx.r8.u32);
	// stw r7,3692(r30)
	REX_STORE_U32(ctx.r30.u32 + 3692, ctx.r7.u32);
	// stw r6,3696(r30)
	REX_STORE_U32(ctx.r30.u32 + 3696, ctx.r6.u32);
	// bl 0x89930720
	ctx.lr = 0x8994B994;
	sub_89930720(ctx, base);
	// bl 0x899319c8
	ctx.lr = 0x8994B998;
	sub_899319C8(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lbz r11,3632(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3632);
	// rlwinm r4,r11,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8994b188
	if (ctx.cr6.eq) goto loc_8994B188;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89956750) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89956758;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r27,r10,25128
	ctx.r27.s64 = ctx.r10.s64 + 25128;
	// mulli r29,r11,696
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// ori r4,r9,32768
	ctx.r4.u64 = ctx.r9.u64 | 32768;
	// lwzx r31,r29,r30
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// addi r7,r10,27284
	ctx.r7.s64 = ctx.r10.s64 + 27284;
	// ori r9,r8,32768
	ctx.r9.u64 = ctx.r8.u64 | 32768;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// stb r11,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// rlwinm r3,r31,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// stb r6,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lis r8,12
	ctx.r8.s64 = 786432;
	// stb r11,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stb r11,116(r1)
	REX_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stb r11,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// bne cr6,0x89956818
	if (!ctx.cr6.eq) goto loc_89956818;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899337b0
	ctx.lr = 0x899567F8;
	sub_899337B0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89956810
	if (!ctx.cr6.eq) goto loc_89956810;
loc_89956804:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_89956810:
	// ori r11,r31,2
	ctx.r11.u64 = ctx.r31.u64 | 2;
	// stwx r11,r29,r30
	REX_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
loc_89956818:
	// addi r11,r27,637
	ctx.r11.s64 = ctx.r27.s64 + 637;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r26,r11,r8
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// extsb r18,r10
	ctx.r18.s64 = ctx.r10.s8;
	// lwzx r28,r11,r7
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// bl 0x89932798
	ctx.lr = 0x8995685C;
	sub_89932798(ctx, base);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89956804
	if (ctx.cr6.eq) goto loc_89956804;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r20,-30253
	ctx.r20.s64 = -1982660608;
	// addi r11,r11,3360
	ctx.r11.s64 = ctx.r11.s64 + 3360;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// ori r3,r9,20077
	ctx.r3.u64 = ctx.r9.u64 | 20077;
	// lwz r9,-9212(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + -9212);
	// addi r21,r27,28
	ctx.r21.s64 = ctx.r27.s64 + 28;
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r30,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r28.s32 >> 4;
	// lis r22,-16384
	ctx.r22.s64 = -1073741824;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r24,512
	ctx.r24.s64 = 512;
	// li r25,255
	ctx.r25.s64 = 255;
	// li r26,128
	ctx.r26.s64 = 128;
	// ori r4,r8,32896
	ctx.r4.u64 = ctx.r8.u64 | 32896;
	// addi r6,r11,9016
	ctx.r6.s64 = ctx.r11.s64 + 9016;
loc_899568B8:
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// srawi r8,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// rlwinm r8,r8,19,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x3;
	// addi r17,r27,24
	ctx.r17.s64 = ctx.r27.s64 + 24;
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// clrlwi r16,r7,16
	ctx.r16.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lhz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// addi r15,r8,4
	ctx.r15.s64 = ctx.r8.s64 + 4;
	// sth r5,124(r11)
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r5.u16);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// stw r28,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r28.u32);
	// srawi r15,r15,3
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 3;
	// rlwinm r14,r8,1,22,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// clrlwi r8,r15,26
	ctx.r8.u64 = ctx.r15.u32 & 0x3F;
	// rlwinm r15,r5,1,22,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// cmplwi cr6,r16,2
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 2, ctx.xer);
	// lwzx r5,r29,r17
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r17.u32);
	// lhz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r5,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwzx r5,r29,r21
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r21.u32);
	// lhzu r8,6(r10)
	ea = 6 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lhzx r5,r14,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r14.u32 + ctx.r6.u32);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// stw r8,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lhzx r5,r15,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r15.u32 + ctx.r6.u32);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// sth r24,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r24.u16);
	// stb r25,38(r11)
	REX_STORE_U8(ctx.r11.u32 + 38, ctx.r25.u8);
	// stb r26,39(r11)
	REX_STORE_U8(ctx.r11.u32 + 39, ctx.r26.u8);
	// stw r4,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// blt cr6,0x899568b8
	if (ctx.cr6.lt) goto loc_899568B8;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// stw r9,-9212(r20)
	REX_STORE_U32(ctx.r20.u32 + -9212, ctx.r9.u32);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,-9516(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9516);
	// beq cr6,0x899569d0
	if (ctx.cr6.eq) goto loc_899569D0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// bgt cr6,0x899569b4
	if (ctx.cr6.gt) goto loc_899569B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_899569B4:
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
	// lwz r9,8420(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8420);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x899569e0
	if (!ctx.cr6.lt) goto loc_899569E0;
	// stw r9,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r9.u32);
	// b 0x899569e0
	goto loc_899569E0;
loc_899569D0:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// ble cr6,0x899569e0
	if (!ctx.cr6.gt) goto loc_899569E0;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
loc_899569E0:
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x89936218
	ctx.lr = 0x899569EC;
	sub_89936218(ctx, base);
	// addi r11,r27,636
	ctx.r11.s64 = ctx.r27.s64 + 636;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89956a20
	if (ctx.cr6.eq) goto loc_89956A20;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x89953890
	ctx.lr = 0x89956A14;
	sub_89953890(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_89956A20:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x899554a8
	ctx.lr = 0x89956A2C;
	sub_899554A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89958400) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89958408;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30233
	ctx.r11.s64 = -1981349888;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r30,r11,-7472
	ctx.r30.s64 = ctx.r11.s64 + -7472;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r30,-648
	ctx.r7.s64 = ctx.r30.s64 + -648;
	// li r9,208
	ctx.r9.s64 = 208;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x89934860
	ctx.lr = 0x89958448;
	sub_89934860(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,-31484
	ctx.r5.s64 = -31484;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// sth r5,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r5.u16);
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x899352b8
	ctx.lr = 0x8995847C;
	sub_899352B8(ctx, base);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-19828
	ctx.r29.s64 = ctx.r11.s64 + -19828;
loc_89958488:
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_89958490:
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
	// addi r9,r30,-648
	ctx.r9.s64 = ctx.r30.s64 + -648;
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
	// blt cr6,0x89958490
	if (ctx.cr6.lt) goto loc_89958490;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,-648
	ctx.r9.s64 = ctx.r30.s64 + -648;
	// mulli r8,r31,84
	ctx.r8.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(84));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r10,r31,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(60));
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r30,600
	ctx.r6.s64 = ctx.r30.s64 + 600;
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
	ctx.lr = 0x8995852C;
	sub_89935610(ctx, base);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// blt cr6,0x89958488
	if (ctx.cr6.lt) goto loc_89958488;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// addi r3,r30,600
	ctx.r3.s64 = ctx.r30.s64 + 600;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// beq cr6,0x89958574
	if (ctx.cr6.eq) goto loc_89958574;
	// addi r11,r11,-19844
	ctx.r11.s64 = ctx.r11.s64 + -19844;
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x89957ea0
	ctx.lr = 0x8995856C;
	sub_89957EA0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89958574:
	// addi r4,r11,-19844
	ctx.r4.s64 = ctx.r11.s64 + -19844;
	// addi r5,r4,28
	ctx.r5.s64 = ctx.r4.s64 + 28;
	// bl 0x89957ea0
	ctx.lr = 0x89958580;
	sub_89957EA0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89959AA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89959AB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,240
	ctx.r9.s64 = 240;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
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
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x89934fb8
	ctx.lr = 0x89959AE8;
	sub_89934FB8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// lis r10,-30233
	ctx.r10.s64 = -1981349888;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r27,r11,-20724
	ctx.r27.s64 = ctx.r11.s64 + -20724;
	// addi r31,r10,18184
	ctx.r31.s64 = ctx.r10.s64 + 18184;
loc_89959B00:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_89959B0C:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r31,-3800
	ctx.r6.s64 = ctx.r31.s64 + -3800;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89959B50:
	// lhzu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x89959b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89959B50;
	// addi r8,r1,776
	ctx.r8.s64 = ctx.r1.s64 + 776;
	// addi r7,r31,1536
	ctx.r7.s64 = ctx.r31.s64 + 1536;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89959B7C:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x89959b7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89959B7C;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x89959b0c
	if (ctx.cr6.lt) goto loc_89959B0C;
	// addi r10,r31,-3800
	ctx.r10.s64 = ctx.r31.s64 + -3800;
	// addi r11,r31,-3120
	ctx.r11.s64 = ctx.r31.s64 + -3120;
	// mulli r28,r30,170
	ctx.r28.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(170));
	// mulli r29,r30,780
	ctx.r29.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(780));
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x89959BC4;
	sub_89935880(ctx, base);
	// addi r10,r31,1536
	ctx.r10.s64 = ctx.r31.s64 + 1536;
	// addi r11,r31,-6920
	ctx.r11.s64 = ctx.r31.s64 + -6920;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x89935880
	ctx.lr = 0x89959BE0;
	sub_89935880(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x89959b00
	if (ctx.cr6.lt) goto loc_89959B00;
	// addi r11,r31,1296
	ctx.r11.s64 = ctx.r31.s64 + 1296;
	// li r30,8
	ctx.r30.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x89959C28;
	sub_89934FB8(ctx, base);
	// addi r11,r31,1296
	ctx.r11.s64 = ctx.r31.s64 + 1296;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r7,r11,80
	ctx.r7.s64 = ctx.r11.s64 + 80;
	// li r9,32
	ctx.r9.s64 = 32;
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
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x89959C5C;
	sub_89934FB8(ctx, base);
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r3,r10,3484
	ctx.r3.s64 = ctx.r10.s64 + 3484;
	// addi r30,r11,29308
	ctx.r30.s64 = ctx.r11.s64 + 29308;
loc_89959C70:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,1296
	ctx.r10.s64 = ctx.r31.s64 + 1296;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_89959C8C:
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
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x89959ce0
	if (!ctx.cr6.gt) goto loc_89959CE0;
	// rlwinm r6,r6,16,0,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xC0000000;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_89959CBC:
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
	// blt cr6,0x89959cbc
	if (ctx.cr6.lt) goto loc_89959CBC;
loc_89959CE0:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x89959c8c
	if (ctx.cr6.lt) goto loc_89959C8C;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x89959c70
	if (ctx.cr6.lt) goto loc_89959C70;
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995AFF8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,84(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x8995b014
	if (ctx.cr6.eq) goto loc_8995B014;
	// lwz r11,88(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,88(r4)
	REX_STORE_U32(ctx.r4.u32 + 88, ctx.r11.u32);
	// stw r11,84(r4)
	REX_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
loc_8995B014:
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x8995b054
	if (ctx.cr6.eq) goto loc_8995B054;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// beq cr6,0x8995b030
	if (ctx.cr6.eq) goto loc_8995B030;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8995b074
	goto loc_8995B074;
loc_8995B030:
	// lwz r11,88(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,88(r4)
	REX_STORE_U32(ctx.r4.u32 + 88, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r4)
	REX_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
	// bgt cr6,0x8995b078
	if (ctx.cr6.gt) goto loc_8995B078;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x8995b078
	goto loc_8995B078;
loc_8995B054:
	// lbz r10,95(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 95);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,95(r4)
	REX_STORE_U8(ctx.r4.u32 + 95, ctx.r9.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8995b074
	if (ctx.cr6.eq) goto loc_8995B074;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8995B074:
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
loc_8995B078:
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8995BAD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8995BAD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-32488
	ctx.r31.s64 = ctx.r11.s64 + -32488;
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// addi r8,r31,2072
	ctx.r8.s64 = ctx.r31.s64 + 2072;
	// li r10,232
	ctx.r10.s64 = 232;
	// sth r11,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-8
	ctx.r9.s64 = -8;
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x89934b48
	ctx.lr = 0x8995BB20;
	sub_89934B48(ctx, base);
	// addi r11,r31,2072
	ctx.r11.s64 = ctx.r31.s64 + 2072;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r6,r11,1296
	ctx.r6.s64 = ctx.r11.s64 + 1296;
	// li r5,128
	ctx.r5.s64 = 128;
	// sth r7,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r7.u16);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
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
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x89934b48
	ctx.lr = 0x8995BB60;
	sub_89934B48(ctx, base);
	// addi r11,r31,2072
	ctx.r11.s64 = ctx.r31.s64 + 2072;
	// li r29,10
	ctx.r29.s64 = 10;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// addi r4,r11,1386
	ctx.r4.s64 = ctx.r11.s64 + 1386;
	// li r10,112
	ctx.r10.s64 = 112;
	// sth r29,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r29.u16);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r9,-12
	ctx.r9.s64 = -12;
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x89934b48
	ctx.lr = 0x8995BB9C;
	sub_89934B48(ctx, base);
	// addi r11,r31,2072
	ctx.r11.s64 = ctx.r31.s64 + 2072;
	// li r10,232
	ctx.r10.s64 = 232;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// addi r3,r11,2286
	ctx.r3.s64 = ctx.r11.s64 + 2286;
	// sth r29,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r29.u16);
	// li r9,-12
	ctx.r9.s64 = -12;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x89934b48
	ctx.lr = 0x8995BBD4;
	sub_89934B48(ctx, base);
	// addi r11,r31,2072
	ctx.r11.s64 = ctx.r31.s64 + 2072;
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// addi r8,r11,2592
	ctx.r8.s64 = ctx.r11.s64 + 2592;
	// sth r9,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// li r10,176
	ctx.r10.s64 = 176;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-16
	ctx.r9.s64 = -16;
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934b48
	ctx.lr = 0x8995BC10;
	sub_89934B48(ctx, base);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// addi r29,r11,-22504
	ctx.r29.s64 = ctx.r11.s64 + -22504;
loc_8995BC18:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,2072
	ctx.r9.s64 = ctx.r31.s64 + 2072;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mulli r11,r30,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(108));
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r29,-60
	ctx.r6.s64 = ctx.r29.s64 + -60;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x8995BC44;
	sub_89935610(ctx, base);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// blt cr6,0x8995bc18
	if (ctx.cr6.lt) goto loc_8995BC18;
	// li r30,9
	ctx.r30.s64 = 9;
loc_8995BC5C:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,2072
	ctx.r9.s64 = ctx.r31.s64 + 2072;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mulli r11,r30,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(108));
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r29,-40
	ctx.r6.s64 = ctx.r29.s64 + -40;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x8995BC88;
	sub_89935610(ctx, base);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// blt cr6,0x8995bc5c
	if (ctx.cr6.lt) goto loc_8995BC5C;
	// li r30,13
	ctx.r30.s64 = 13;
loc_8995BCA0:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,2072
	ctx.r9.s64 = ctx.r31.s64 + 2072;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mulli r11,r30,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(108));
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r29,-20
	ctx.r6.s64 = ctx.r29.s64 + -20;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x8995BCCC;
	sub_89935610(ctx, base);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 18, ctx.xer);
	// blt cr6,0x8995bca0
	if (ctx.cr6.lt) goto loc_8995BCA0;
	// addi r11,r31,2072
	ctx.r11.s64 = ctx.r31.s64 + 2072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,2592
	ctx.r5.s64 = ctx.r11.s64 + 2592;
	// addi r4,r31,1944
	ctx.r4.s64 = ctx.r31.s64 + 1944;
	// bl 0x89935610
	ctx.lr = 0x8995BCF8;
	sub_89935610(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995CFC8) {
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
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r11,7924(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7924);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r10)
	REX_STORE_U32(ctx.r10.u32 + 7924, ctx.r11.u32);
	// bl 0x89934208
	ctx.lr = 0x8995CFEC;
	sub_89934208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995d008
	if (ctx.cr6.eq) goto loc_8995D008;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8992c2a8
	ctx.lr = 0x8995CFFC;
	sub_8992C2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8995d00c
	if (!ctx.cr6.eq) goto loc_8995D00C;
loc_8995D008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8995D00C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8995D410) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x8995D418;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r4,r11,592
	ctx.r4.s64 = ctx.r11.s64 + 592;
	// mulli r31,r10,112
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// lwzx r30,r31,r9
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r30,12
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 12, ctx.xer);
	// bgt cr6,0x8995e084
	if (ctx.cr6.gt) goto loc_8995E084;
	// lis r12,-30314
	ctx.r12.s64 = -1986658304;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11180
	ctx.r12.s64 = ctx.r12.s64 + -11180;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u32) {
	case 0:
		goto loc_8995DC04;
	case 1:
		goto loc_8995DC04;
	case 2:
		goto loc_8995D730;
	case 3:
		goto loc_8995DD24;
	case 4:
		goto loc_8995DA28;
	case 5:
		goto loc_8995DAAC;
	case 6:
		goto loc_8995D86C;
	case 7:
		goto loc_8995D488;
	case 8:
		goto loc_8995D730;
	case 9:
		goto loc_8995DD24;
	case 10:
		goto loc_8995DEB4;
	case 11:
		goto loc_8995DFF4;
	case 12:
		goto loc_8995DFF4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8995D488:
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// addi r9,r4,60
	ctx.r9.s64 = ctx.r4.s64 + 60;
	// addi r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 + 56;
	// addi r30,r4,108
	ctx.r30.s64 = ctx.r4.s64 + 108;
	// addi r7,r4,48
	ctx.r7.s64 = ctx.r4.s64 + 48;
	// lwz r10,-21584(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -21584);
	// addi r6,r4,52
	ctx.r6.s64 = ctx.r4.s64 + 52;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// stwx r5,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// bgt cr6,0x8995e17c
	if (ctx.cr6.gt) goto loc_8995E17C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8995d53c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995D53C;
	// bdzf 4*cr6+eq,0x8995d56c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995D56C;
	// bdzf 4*cr6+eq,0x8995d5c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995D5C0;
	// bdzf 4*cr6+eq,0x8995d614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995D614;
	// bdzf 4*cr6+eq,0x8995d664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995D664;
	// bdzf 4*cr6+eq,0x8995d6b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995D6B4;
	// bne cr6,0x8995d704
	if (!ctx.cr6.eq) goto loc_8995D704;
	// lis r10,192
	ctx.r10.s64 = 12582912;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8995d51c
	if (!ctx.cr6.gt) goto loc_8995D51C;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r10,-192
	ctx.r9.s64 = ctx.r10.s64 + -192;
	// mulli r8,r9,224
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(224));
	// srawi r10,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 8;
	// addi r7,r10,192
	ctx.r7.s64 = ctx.r10.s64 + 192;
	// sthx r7,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D51C:
	// addi r11,r4,109
	ctx.r11.s64 = ctx.r4.s64 + 109;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D53C:
	// addi r10,r4,109
	ctx.r10.s64 = ctx.r4.s64 + 109;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8995e17c
	if (!ctx.cr6.eq) goto loc_8995E17C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r8,r11,4
	ctx.r8.u64 = ctx.r11.u64 | 4;
	// stbx r9,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u8);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D56C:
	// addi r11,r4,94
	ctx.r11.s64 = ctx.r4.s64 + 94;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sthx r8,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u16);
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// bgt cr6,0x8995e17c
	if (ctx.cr6.gt) goto loc_8995E17C;
	// addi r11,r4,109
	ctx.r11.s64 = ctx.r4.s64 + 109;
	// addi r10,r4,96
	ctx.r10.s64 = ctx.r4.s64 + 96;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r3,73
	ctx.r3.s64 = 73;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// ori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 2;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// bl 0x89936360
	ctx.lr = 0x8995D5AC;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stbx r6,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D5C0:
	// addi r11,r4,96
	ctx.r11.s64 = ctx.r4.s64 + 96;
	// addi r10,r4,94
	ctx.r10.s64 = ctx.r4.s64 + 94;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mulli r7,r9,240
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(240));
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// sthx r5,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u16);
	// sthx r3,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8995e17c
	if (!ctx.cr6.eq) goto loc_8995E17C;
	// addi r11,r4,109
	ctx.r11.s64 = ctx.r4.s64 + 109;
	// li r10,4
	ctx.r10.s64 = 4;
	// stbx r10,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D614:
	// addi r7,r4,111
	ctx.r7.s64 = ctx.r4.s64 + 111;
	// lbzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u8);
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// beq cr6,0x8995d63c
	if (ctx.cr6.eq) goto loc_8995D63C;
	// bl 0x8995f280
	ctx.lr = 0x8995D634;
	sub_8995F280(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995e17c
	if (ctx.cr6.eq) goto loc_8995E17C;
loc_8995D63C:
	// addi r11,r4,109
	ctx.r11.s64 = ctx.r4.s64 + 109;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// stbx r10,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u8);
	// stbx r9,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u8);
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 | 32;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D664:
	// addi r7,r4,111
	ctx.r7.s64 = ctx.r4.s64 + 111;
	// lbzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u8);
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// beq cr6,0x8995d68c
	if (ctx.cr6.eq) goto loc_8995D68C;
	// bl 0x8995f280
	ctx.lr = 0x8995D684;
	sub_8995F280(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995e17c
	if (ctx.cr6.eq) goto loc_8995E17C;
loc_8995D68C:
	// addi r11,r4,109
	ctx.r11.s64 = ctx.r4.s64 + 109;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// stbx r10,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u8);
	// stbx r9,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u8);
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D6B4:
	// addi r11,r4,111
	ctx.r11.s64 = ctx.r4.s64 + 111;
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
	// beq cr6,0x8995d6dc
	if (ctx.cr6.eq) goto loc_8995D6DC;
	// bl 0x8995f280
	ctx.lr = 0x8995D6D4;
	sub_8995F280(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995e17c
	if (ctx.cr6.eq) goto loc_8995E17C;
loc_8995D6DC:
	// addi r11,r4,109
	ctx.r11.s64 = ctx.r4.s64 + 109;
	// addi r9,r4,68
	ctx.r9.s64 = ctx.r4.s64 + 68;
	// li r10,7
	ctx.r10.s64 = 7;
	// stbx r10,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// ori r7,r8,128
	ctx.r7.u64 = ctx.r8.u64 | 128;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D704:
	// addi r10,r4,76
	ctx.r10.s64 = ctx.r4.s64 + 76;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addic. r11,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r11.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bne 0x8995e17c
	if (!ctx.cr0.eq) goto loc_8995E17C;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// stw r11,-10064(r10)
	REX_STORE_U32(ctx.r10.u32 + -10064, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D730:
	// bl 0x8992bee8
	ctx.lr = 0x8995D734;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8995d97c
	if (ctx.cr6.lt) goto loc_8995D97C;
	// addi r10,r4,94
	ctx.r10.s64 = ctx.r4.s64 + 94;
	// mulli r11,r11,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// addi r8,r4,94
	ctx.r8.s64 = ctx.r4.s64 + 94;
	// addi r7,r10,128
	ctx.r7.s64 = ctx.r10.s64 + 128;
	// lis r6,-30320
	ctx.r6.s64 = -1987051520;
	// rlwinm r5,r7,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r3,r6,9016
	ctx.r3.s64 = ctx.r6.s64 + 9016;
	// lhzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r9,r9,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r8,r4,48
	ctx.r8.s64 = ctx.r4.s64 + 48;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// addi r6,r4,56
	ctx.r6.s64 = ctx.r4.s64 + 56;
	// lhzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r3.u32);
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lhzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// addi r3,r4,48
	ctx.r3.s64 = ctx.r4.s64 + 48;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lwzx r7,r31,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r6,r4,52
	ctx.r6.s64 = ctx.r4.s64 + 52;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r4,60
	ctx.r7.s64 = ctx.r4.s64 + 60;
	// rlwinm r8,r5,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF00;
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r9,r4,108
	ctx.r9.s64 = ctx.r4.s64 + 108;
	// lwzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r6,r4,52
	ctx.r6.s64 = ctx.r4.s64 + 52;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stwx r5,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// blt cr6,0x8995d83c
	if (ctx.cr6.lt) goto loc_8995D83C;
	// beq cr6,0x8995d80c
	if (ctx.cr6.eq) goto loc_8995D80C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8995e17c
	if (!ctx.cr6.lt) goto loc_8995E17C;
	// addi r10,r4,76
	ctx.r10.s64 = ctx.r4.s64 + 76;
	// addi r9,r4,80
	ctx.r9.s64 = ctx.r4.s64 + 80;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r8,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D80C:
	// addi r10,r4,109
	ctx.r10.s64 = ctx.r4.s64 + 109;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8995e17c
	if (ctx.cr6.eq) goto loc_8995E17C;
	// addi r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 + 68;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r8,2
	ctx.r8.s64 = 2;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D83C:
	// addi r10,r4,109
	ctx.r10.s64 = ctx.r4.s64 + 109;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8995e17c
	if (ctx.cr6.eq) goto loc_8995E17C;
	// lwzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// oris r8,r11,16384
	ctx.r8.u64 = ctx.r11.u64 | 1073741824;
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D86C:
	// bl 0x8992bee8
	ctx.lr = 0x8995D870;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8995d97c
	if (ctx.cr6.lt) goto loc_8995D97C;
	// mulli r11,r11,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// addi r7,r4,56
	ctx.r7.s64 = ctx.r4.s64 + 56;
	// addi r6,r4,60
	ctx.r6.s64 = ctx.r4.s64 + 60;
	// addi r5,r4,48
	ctx.r5.s64 = ctx.r4.s64 + 48;
	// addi r3,r4,52
	ctx.r3.s64 = ctx.r4.s64 + 52;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r4,108
	ctx.r9.s64 = ctx.r4.s64 + 108;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r30,r4,52
	ctx.r30.s64 = ctx.r4.s64 + 52;
	// lwzx r7,r31,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// lwzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8995d9f8
	if (ctx.cr6.lt) goto loc_8995D9F8;
	// bne cr6,0x8995e17c
	if (!ctx.cr6.eq) goto loc_8995E17C;
	// addi r8,r4,12
	ctx.r8.s64 = ctx.r4.s64 + 12;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8995d98c
	if (ctx.cr6.eq) goto loc_8995D98C;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// beq cr6,0x8995d960
	if (ctx.cr6.eq) goto loc_8995D960;
	// addi r9,r4,111
	ctx.r9.s64 = ctx.r4.s64 + 111;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x8995e17c
	if (!ctx.cr6.eq) goto loc_8995E17C;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r7,r4,28
	ctx.r7.s64 = ctx.r4.s64 + 28;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r4,16
	ctx.r6.s64 = ctx.r4.s64 + 16;
	// stbx r3,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u8);
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r4,36
	ctx.r8.s64 = ctx.r4.s64 + 36;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r5,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r4,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D960:
	// addi r11,r4,111
	ctx.r11.s64 = ctx.r4.s64 + 111;
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
	// bne cr6,0x8995e17c
	if (!ctx.cr6.eq) goto loc_8995E17C;
loc_8995D97C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D98C:
	// addi r9,r4,109
	ctx.r9.s64 = ctx.r4.s64 + 109;
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8995e17c
	if (ctx.cr6.eq) goto loc_8995E17C;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r9,r4,28
	ctx.r9.s64 = ctx.r4.s64 + 28;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r4,20
	ctx.r6.s64 = ctx.r4.s64 + 20;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r4,36
	ctx.r5.s64 = ctx.r4.s64 + 36;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
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
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995D9F8:
	// addi r10,r4,109
	ctx.r10.s64 = ctx.r4.s64 + 109;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8995e17c
	if (ctx.cr6.eq) goto loc_8995E17C;
	// lwzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// oris r8,r11,16384
	ctx.r8.u64 = ctx.r11.u64 | 1073741824;
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995DA28:
	// bl 0x8992bee8
	ctx.lr = 0x8995DA2C;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8995d97c
	if (ctx.cr6.lt) goto loc_8995D97C;
	// mulli r9,r11,112
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r8,r4,48
	ctx.r8.s64 = ctx.r4.s64 + 48;
	// addi r7,r4,56
	ctx.r7.s64 = ctx.r4.s64 + 56;
	// addi r5,r4,48
	ctx.r5.s64 = ctx.r4.s64 + 48;
	// addi r6,r4,60
	ctx.r6.s64 = ctx.r4.s64 + 60;
	// addi r3,r4,52
	ctx.r3.s64 = ctx.r4.s64 + 52;
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r8,r4,52
	ctx.r8.s64 = ctx.r4.s64 + 52;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r7,r4,68
	ctx.r7.s64 = ctx.r4.s64 + 68;
	// addi r30,r4,68
	ctx.r30.s64 = ctx.r4.s64 + 68;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r6,r4,76
	ctx.r6.s64 = ctx.r4.s64 + 76;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r5,r4,76
	ctx.r5.s64 = ctx.r4.s64 + 76;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r4,80
	ctx.r11.s64 = ctx.r4.s64 + 80;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r10,r4,80
	ctx.r10.s64 = ctx.r4.s64 + 80;
	// lbzx r8,r9,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// stbx r8,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u8);
	// lwzx r7,r9,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r6,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995DAAC:
	// bl 0x8992bee8
	ctx.lr = 0x8995DAB0;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8995d97c
	if (ctx.cr6.lt) goto loc_8995D97C;
	// mulli r11,r11,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,56
	ctx.r9.s64 = ctx.r4.s64 + 56;
	// addi r7,r4,48
	ctx.r7.s64 = ctx.r4.s64 + 48;
	// addi r8,r4,12
	ctx.r8.s64 = ctx.r4.s64 + 12;
	// addi r5,r4,52
	ctx.r5.s64 = ctx.r4.s64 + 52;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r6,r4,60
	ctx.r6.s64 = ctx.r4.s64 + 60;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r30,r4,28
	ctx.r30.s64 = ctx.r4.s64 + 28;
	// addi r3,r4,52
	ctx.r3.s64 = ctx.r4.s64 + 52;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r29,r4,68
	ctx.r29.s64 = ctx.r4.s64 + 68;
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwzx r6,r31,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r28,r4,68
	ctx.r28.s64 = ctx.r4.s64 + 68;
	// clrlwi r9,r7,30
	ctx.r9.u64 = ctx.r7.u32 & 0x3;
	// lwzx r7,r31,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r30,r4,76
	ctx.r30.s64 = ctx.r4.s64 + 76;
	// addi r27,r4,76
	ctx.r27.s64 = ctx.r4.s64 + 76;
	// addi r26,r4,80
	ctx.r26.s64 = ctx.r4.s64 + 80;
	// addi r25,r4,80
	ctx.r25.s64 = ctx.r4.s64 + 80;
	// addi r24,r4,16
	ctx.r24.s64 = ctx.r4.s64 + 16;
	// addi r23,r4,20
	ctx.r23.s64 = ctx.r4.s64 + 20;
	// addi r22,r4,36
	ctx.r22.s64 = ctx.r4.s64 + 36;
	// addi r21,r4,32
	ctx.r21.s64 = ctx.r4.s64 + 32;
	// lwzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// stbx r3,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r3.u8);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r7,r11,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stwx r7,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r7.u32);
	// lwzx r6,r11,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r9,r4,108
	ctx.r9.s64 = ctx.r4.s64 + 108;
	// stwx r6,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r6.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r5,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r5.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r3,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r3.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// stwx r7,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// stwx r6,r31,r21
	REX_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r6.u32);
	// blt cr6,0x8995dbe0
	if (ctx.cr6.lt) goto loc_8995DBE0;
	// bne cr6,0x8995e17c
	if (!ctx.cr6.eq) goto loc_8995E17C;
	// addi r10,r4,67
	ctx.r10.s64 = ctx.r4.s64 + 67;
	// addi r7,r4,66
	ctx.r7.s64 = ctx.r4.s64 + 66;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stbx r5,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u8);
	// cmplwi cr6,r5,192
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 192, ctx.xer);
	// stbx r5,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u8);
	// bne cr6,0x8995e17c
	if (!ctx.cr6.eq) goto loc_8995E17C;
	// addi r10,r4,109
	ctx.r10.s64 = ctx.r4.s64 + 109;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995DBE0:
	// addi r10,r4,109
	ctx.r10.s64 = ctx.r4.s64 + 109;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8995e17c
	if (ctx.cr6.eq) goto loc_8995E17C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995DC04:
	// bl 0x8992bee8
	ctx.lr = 0x8995DC08;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8995d97c
	if (ctx.cr6.lt) goto loc_8995D97C;
	// lwzx r10,r31,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// mulli r8,r11,112
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// rlwinm r7,r10,0,2,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// addi r6,r4,56
	ctx.r6.s64 = ctx.r4.s64 + 56;
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// addi r5,r4,48
	ctx.r5.s64 = ctx.r4.s64 + 48;
	// addi r29,r4,52
	ctx.r29.s64 = ctx.r4.s64 + 52;
	// addi r28,r4,68
	ctx.r28.s64 = ctx.r4.s64 + 68;
	// addi r27,r4,68
	ctx.r27.s64 = ctx.r4.s64 + 68;
	// lwzx r9,r31,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r6,r4,60
	ctx.r6.s64 = ctx.r4.s64 + 60;
	// addi r26,r4,76
	ctx.r26.s64 = ctx.r4.s64 + 76;
	// addi r25,r4,80
	ctx.r25.s64 = ctx.r4.s64 + 80;
	// addi r24,r4,80
	ctx.r24.s64 = ctx.r4.s64 + 80;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// lwzx r3,r8,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// rlwinm r11,r3,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40000000;
	// addi r3,r4,52
	ctx.r3.s64 = ctx.r4.s64 + 52;
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// addi r7,r4,48
	ctx.r7.s64 = ctx.r4.s64 + 48;
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwzx r11,r8,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r5,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r6,r4,76
	ctx.r6.s64 = ctx.r4.s64 + 76;
	// lwzx r11,r8,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r3,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
	// lbzx r11,r8,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
	// lwzx r10,r8,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// lwzx r9,r8,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// stwx r9,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r9.u32);
	// blt cr6,0x8995dcb8
	if (ctx.cr6.lt) goto loc_8995DCB8;
	// bne cr6,0x8995dccc
	if (!ctx.cr6.eq) goto loc_8995DCCC;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// b 0x8995dcc4
	goto loc_8995DCC4;
loc_8995DCB8:
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
loc_8995DCC4:
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8995DCCC:
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// addi r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 + 28;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r7,r4,20
	ctx.r7.s64 = ctx.r4.s64 + 20;
	// addi r6,r4,36
	ctx.r6.s64 = ctx.r4.s64 + 36;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r5,r4,32
	ctx.r5.s64 = ctx.r4.s64 + 32;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
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
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995DD24:
	// bl 0x8992bee8
	ctx.lr = 0x8995DD28;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8995d97c
	if (ctx.cr6.lt) goto loc_8995D97C;
	// mulli r7,r11,112
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r6,r4,48
	ctx.r6.s64 = ctx.r4.s64 + 48;
	// addi r5,r4,56
	ctx.r5.s64 = ctx.r4.s64 + 56;
	// addi r8,r4,60
	ctx.r8.s64 = ctx.r4.s64 + 60;
	// addi r3,r4,48
	ctx.r3.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,52
	ctx.r9.s64 = ctx.r4.s64 + 52;
	// lwzx r11,r7,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r6,r4,52
	ctx.r6.s64 = ctx.r4.s64 + 52;
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r5,r4,68
	ctx.r5.s64 = ctx.r4.s64 + 68;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r30,r4,68
	ctx.r30.s64 = ctx.r4.s64 + 68;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r4,108
	ctx.r10.s64 = ctx.r4.s64 + 108;
	// stwx r11,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r29,r4,80
	ctx.r29.s64 = ctx.r4.s64 + 80;
	// lwzx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r3,r4,76
	ctx.r3.s64 = ctx.r4.s64 + 76;
	// lbzx r8,r7,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// addi r28,r4,100
	ctx.r28.s64 = ctx.r4.s64 + 100;
	// stbx r8,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u8);
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lhzx r9,r7,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r28.u32);
	// bgt cr6,0x8995e17c
	if (ctx.cr6.gt) goto loc_8995E17C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8995ddf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995DDF4;
	// bdzf 4*cr6+eq,0x8995de40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995DE40;
	// bne cr6,0x8995de84
	if (!ctx.cr6.eq) goto loc_8995DE84;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r9,r4,109
	ctx.r9.s64 = ctx.r4.s64 + 109;
	// mulli r8,r11,112
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8995e17c
	if (ctx.cr6.eq) goto loc_8995E17C;
	// lwzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// oris r8,r11,16384
	ctx.r8.u64 = ctx.r11.u64 | 1073741824;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995DDF4:
	// addi r9,r4,66
	ctx.r9.s64 = ctx.r4.s64 + 66;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// bge cr6,0x8995de24
	if (!ctx.cr6.lt) goto loc_8995DE24;
	// addi r11,r4,67
	ctx.r11.s64 = ctx.r4.s64 + 67;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995DE24:
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995DE40:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r9,r4,94
	ctx.r9.s64 = ctx.r4.s64 + 94;
	// mulli r8,r11,112
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lhzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r4,109
	ctx.r6.s64 = ctx.r4.s64 + 109;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lbzx r3,r8,r6
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// and r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 & ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8995e17c
	if (ctx.cr6.eq) goto loc_8995E17C;
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// li r9,516
	ctx.r9.s64 = 516;
	// li r8,3
	ctx.r8.s64 = 3;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995DE84:
	// addi r10,r4,66
	ctx.r10.s64 = ctx.r4.s64 + 66;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// ble cr6,0x8995d97c
	if (!ctx.cr6.gt) goto loc_8995D97C;
	// addi r11,r4,67
	ctx.r11.s64 = ctx.r4.s64 + 67;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r9,240
	ctx.r9.s64 = ctx.r9.s64 + 240;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995DEB4:
	// bl 0x8992bee8
	ctx.lr = 0x8995DEB8;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8995d97c
	if (ctx.cr6.lt) goto loc_8995D97C;
	// mulli r8,r11,112
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r7,r4,48
	ctx.r7.s64 = ctx.r4.s64 + 48;
	// addi r6,r4,56
	ctx.r6.s64 = ctx.r4.s64 + 56;
	// addi r5,r4,60
	ctx.r5.s64 = ctx.r4.s64 + 60;
	// addi r3,r4,48
	ctx.r3.s64 = ctx.r4.s64 + 48;
	// addi r29,r4,52
	ctx.r29.s64 = ctx.r4.s64 + 52;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r4,52
	ctx.r7.s64 = ctx.r4.s64 + 52;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r30,r4,108
	ctx.r30.s64 = ctx.r4.s64 + 108;
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r6,r4,100
	ctx.r6.s64 = ctx.r4.s64 + 100;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwzx r10,r8,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lhzx r10,r8,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// blt cr6,0x8995df80
	if (ctx.cr6.lt) goto loc_8995DF80;
	// beq cr6,0x8995df58
	if (ctx.cr6.eq) goto loc_8995DF58;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8995e17c
	if (!ctx.cr6.lt) goto loc_8995E17C;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r10,r4,109
	ctx.r10.s64 = ctx.r4.s64 + 109;
	// mulli r11,r11,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8995e17c
	if (ctx.cr6.eq) goto loc_8995E17C;
	// addi r10,r4,76
	ctx.r10.s64 = ctx.r4.s64 + 76;
	// addi r9,r4,76
	ctx.r9.s64 = ctx.r4.s64 + 76;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r8,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995DF58:
	// addi r10,r4,76
	ctx.r10.s64 = ctx.r4.s64 + 76;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x8995e17c
	if (!ctx.cr6.eq) goto loc_8995E17C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stbx r11,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995DF80:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r10,r4,94
	ctx.r10.s64 = ctx.r4.s64 + 94;
	// mulli r9,r11,112
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r7,r4,109
	ctx.r7.s64 = ctx.r4.s64 + 109;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lbzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// and r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995e17c
	if (ctx.cr6.eq) goto loc_8995E17C;
	// lwzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r10,r4,67
	ctx.r10.s64 = ctx.r4.s64 + 67;
	// addi r9,r4,68
	ctx.r9.s64 = ctx.r4.s64 + 68;
	// addi r8,r4,76
	ctx.r8.s64 = ctx.r4.s64 + 76;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// li r3,37
	ctx.r3.s64 = 37;
	// stwx r5,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// bl 0x89936360
	ctx.lr = 0x8995DFE0;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995DFF4:
	// bl 0x8992bee8
	ctx.lr = 0x8995DFF8;
	sub_8992BEE8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8995d97c
	if (ctx.cr6.lt) goto loc_8995D97C;
	// mulli r9,r11,112
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lwzx r8,r31,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r7,r4,48
	ctx.r7.s64 = ctx.r4.s64 + 48;
	// addi r6,r4,56
	ctx.r6.s64 = ctx.r4.s64 + 56;
	// addi r3,r4,48
	ctx.r3.s64 = ctx.r4.s64 + 48;
	// addi r5,r4,60
	ctx.r5.s64 = ctx.r4.s64 + 60;
	// addi r30,r4,52
	ctx.r30.s64 = ctx.r4.s64 + 52;
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r7,r4,52
	ctx.r7.s64 = ctx.r4.s64 + 52;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r6,r8,0,2,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// addi r8,r4,68
	ctx.r8.s64 = ctx.r4.s64 + 68;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r5,r4,68
	ctx.r5.s64 = ctx.r4.s64 + 68;
	// stwx r11,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r3,r4,76
	ctx.r3.s64 = ctx.r4.s64 + 76;
	// lwzx r11,r9,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r4,76
	ctx.r10.s64 = ctx.r4.s64 + 76;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwzx r7,r9,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// rlwinm r11,r7,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40000000;
	// or r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lbzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbx r6,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u8);
	// lwzx r5,r9,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stwx r5,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8995E084:
	// addi r10,r4,60
	ctx.r10.s64 = ctx.r4.s64 + 60;
	// addi r11,r4,76
	ctx.r11.s64 = ctx.r4.s64 + 76;
	// lis r7,-128
	ctx.r7.s64 = -8388608;
	// lis r8,512
	ctx.r8.s64 = 33554432;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8995e0b4
	if (!ctx.cr6.lt) goto loc_8995E0B4;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8995E0B4:
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r9,384
	ctx.r9.s64 = 25165824;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8995e0cc
	if (!ctx.cr6.gt) goto loc_8995E0CC;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8995E0CC:
	// addi r7,r4,108
	ctx.r7.s64 = ctx.r4.s64 + 108;
	// lbzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8995e110
	if (ctx.cr6.lt) goto loc_8995E110;
	// bne cr6,0x8995e148
	if (!ctx.cr6.eq) goto loc_8995E148;
	// addi r11,r4,66
	ctx.r11.s64 = ctx.r4.s64 + 66;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x8995e0fc
	if (ctx.cr6.gt) goto loc_8995E0FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// b 0x8995e148
	goto loc_8995E148;
loc_8995E0FC:
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r9,-1028
	ctx.r9.s64 = ctx.r9.s64 + -1028;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x8995e148
	goto loc_8995E148;
loc_8995E110:
	// addi r9,r4,80
	ctx.r9.s64 = ctx.r4.s64 + 80;
	// addi r11,r4,111
	ctx.r11.s64 = ctx.r4.s64 + 111;
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// mulli r5,r6,240
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(240));
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// stwx r8,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// cmplwi cr6,r6,120
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 120, ctx.xer);
	// bne cr6,0x8995e148
	if (!ctx.cr6.eq) goto loc_8995E148;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
loc_8995E148:
	// addi r11,r4,80
	ctx.r11.s64 = ctx.r4.s64 + 80;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r8,r4,56
	ctx.r8.s64 = ctx.r4.s64 + 56;
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// addi r6,r4,48
	ctx.r6.s64 = ctx.r4.s64 + 48;
	// addi r5,r4,52
	ctx.r5.s64 = ctx.r4.s64 + 52;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwz r11,-21584(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -21584);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r4,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
	// stwx r3,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
loc_8995E17C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8996A3F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8996A400;
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
	// addi r28,r30,92
	ctx.r28.s64 = ctx.r30.s64 + 92;
	// addi r27,r30,188
	ctx.r27.s64 = ctx.r30.s64 + 188;
	// lhzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// lbzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// sthx r10,r31,r28
	REX_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u16);
	// bgt cr6,0x8996ac20
	if (ctx.cr6.gt) goto loc_8996AC20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996a55c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996A55C;
	// bdzf 4*cr6+eq,0x8996a854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996A854;
	// bdzf 4*cr6+eq,0x8996a878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996A878;
	// bne cr6,0x8996ab64
	if (!ctx.cr6.eq) goto loc_8996AB64;
	// addi r26,r30,189
	ctx.r26.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8996a4fc
	if (ctx.cr6.lt) goto loc_8996A4FC;
	// beq cr6,0x8996a4d0
	if (ctx.cr6.eq) goto loc_8996A4D0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8996a540
	if (!ctx.cr6.lt) goto loc_8996A540;
	// bl 0x899368b0
	ctx.lr = 0x8996A478;
	sub_899368B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8996a540
	if (!ctx.cr6.eq) goto loc_8996A540;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r9,r10,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stbx r29,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r29.u8);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// bl 0x899365d0
	ctx.lr = 0x8996A49C;
	sub_899365D0(ctx, base);
	// addi r8,r30,72
	ctx.r8.s64 = ctx.r30.s64 + 72;
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r30,44
	ctx.r6.s64 = ctx.r30.s64 + 44;
	// sthx r29,r31,r28
	REX_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r29.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r8,r10,r7
	ctx.r8.u64 = uint32_t((ctx.r7.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r10.s32 / ctx.r7.s32 : 0);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// b 0x8996a540
	goto loc_8996A540;
loc_8996A4D0:
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
	// bgt cr6,0x8996a540
	if (ctx.cr6.gt) goto loc_8996A540;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x8996a53c
	goto loc_8996A53C;
loc_8996A4FC:
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,544
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 544, ctx.xer);
	// bgt cr6,0x8996a540
	if (ctx.cr6.gt) goto loc_8996A540;
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
	// bne 0x8996a540
	if (!ctx.cr0.eq) goto loc_8996A540;
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// li r10,255
	ctx.r10.s64 = 255;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x89936698
	ctx.lr = 0x8996A534;
	sub_89936698(ctx, base);
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_8996A53C:
	// stbx r8,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u8);
loc_8996A540:
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
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996A55C:
	// addi r28,r30,189
	ctx.r28.s64 = ctx.r30.s64 + 189;
	// lbzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bgt cr6,0x8996ac20
	if (ctx.cr6.gt) goto loc_8996AC20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996a5e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996A5E4;
	// bdzf 4*cr6+eq,0x8996a60c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996A60C;
	// bdzf 4*cr6+eq,0x8996a64c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996A64C;
	// bdzf 4*cr6+eq,0x8996a73c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996A73C;
	// bdzf 4*cr6+eq,0x8996a7b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996A7B0;
	// bne cr6,0x8996a810
	if (!ctx.cr6.eq) goto loc_8996A810;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r6,16838
	ctx.r6.s64 = 1103495168;
	// lis r5,-30294
	ctx.r5.s64 = -1985347584;
	// ori r4,r6,20077
	ctx.r4.u64 = ctx.r6.u64 | 20077;
	// addi r3,r5,-28760
	ctx.r3.s64 = ctx.r5.s64 + -28760;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r7,r30,182
	ctx.r7.s64 = ctx.r30.s64 + 182;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// stbx r4,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r4.u8);
	// addi r6,r30,192
	ctx.r6.s64 = ctx.r30.s64 + 192;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// stbx r10,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u8);
	// lbzx r4,r9,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// stbx r4,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u8);
loc_8996A5E4:
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8991d830
	ctx.lr = 0x8996A5FC;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996A60C:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8996a628
	if (!ctx.cr6.lt) goto loc_8996A628;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8996A628:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8991d8e0
	ctx.lr = 0x8996A630;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8996ac20
	if (ctx.cr6.eq) goto loc_8996AC20;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996A64C:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8996a668
	if (ctx.cr6.eq) goto loc_8996A668;
loc_8996A65C:
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996A668:
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
	// blt cr6,0x8996a72c
	if (ctx.cr6.lt) goto loc_8996A72C;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stbx r29,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r9,r10,-28760
	ctx.r9.s64 = ctx.r10.s64 + -28760;
loc_8996A698:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lbzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// andc r8,r6,r3
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// blt cr6,0x8996a698
	if (ctx.cr6.lt) goto loc_8996A698;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r5,16838
	ctx.r5.s64 = 1103495168;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// ori r3,r5,20077
	ctx.r3.u64 = ctx.r5.u64 | 20077;
	// lis r4,-30294
	ctx.r4.s64 = -1985347584;
	// lwz r10,-9212(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r4,-28756
	ctx.r5.s64 = ctx.r4.s64 + -28756;
	// mullw r10,r10,r3
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r10,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r10.u32);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// srawi r10,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 16;
	// stbx r6,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u8);
	// addi r3,r30,193
	ctx.r3.s64 = ctx.r30.s64 + 193;
	// rlwinm r8,r10,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// lbzx r6,r8,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// or r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 | ctx.r4.u64;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// stbx r4,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996A72C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996A73C:
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
	// blt cr6,0x8996ac20
	if (ctx.cr6.lt) goto loc_8996AC20;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// stbx r29,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u8);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r9,r11,-28756
	ctx.r9.s64 = ctx.r11.s64 + -28756;
loc_8996A76C:
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lbzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// andc r8,r6,r3
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// blt cr6,0x8996a76c
	if (ctx.cr6.lt) goto loc_8996A76C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996A7B0:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r9,r11,-28756
	ctx.r9.s64 = ctx.r11.s64 + -28756;
loc_8996A7C8:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lbzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// extsb r6,r4
	ctx.r6.s64 = ctx.r4.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8996a7f4
	if (!ctx.cr6.eq) goto loc_8996A7F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x8996a7c8
	if (ctx.cr6.lt) goto loc_8996A7C8;
loc_8996A7F4:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8996ac20
	if (!ctx.cr6.eq) goto loc_8996AC20;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996A810:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,8100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8100, ctx.xer);
	// bgt cr6,0x8996a838
	if (ctx.cr6.gt) goto loc_8996A838;
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
	// bge cr6,0x8996a848
	if (!ctx.cr6.lt) goto loc_8996A848;
loc_8996A838:
	// bl 0x89936508
	ctx.lr = 0x8996A83C;
	sub_89936508(ctx, base);
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u8);
loc_8996A848:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996A854:
	// bl 0x89936828
	ctx.lr = 0x8996A858;
	sub_89936828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8996ac20
	if (!ctx.cr6.eq) goto loc_8996AC20;
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sthx r10,r31,r28
	REX_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u16);
	// stbx r9,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996A878:
	// addi r28,r30,189
	ctx.r28.s64 = ctx.r30.s64 + 189;
	// lbzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bgt cr6,0x8996ac20
	if (ctx.cr6.gt) goto loc_8996AC20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996a90c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996A90C;
	// bdzf 4*cr6+eq,0x8996a934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996A934;
	// bdzf 4*cr6+eq,0x8996a9b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996A9B0;
	// bdzf 4*cr6+eq,0x8996aa64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996AA64;
	// bdzf 4*cr6+eq,0x8996aad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996AAD8;
	// bne cr6,0x8996ab38
	if (!ctx.cr6.eq) goto loc_8996AB38;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r6,16838
	ctx.r6.s64 = 1103495168;
	// lis r3,-30294
	ctx.r3.s64 = -1985347584;
	// ori r5,r6,20077
	ctx.r5.u64 = ctx.r6.u64 | 20077;
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r7,r3,-28752
	ctx.r7.s64 = ctx.r3.s64 + -28752;
	// stbx r4,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r4.u8);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r10,r30,182
	ctx.r10.s64 = ctx.r30.s64 + 182;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// srawi r3,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 16;
	// addi r5,r30,192
	ctx.r5.s64 = ctx.r30.s64 + 192;
	// clrlwi r11,r3,17
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFF;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,17,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0xFFFF;
	// lbzx r11,r3,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// stbx r11,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u8);
loc_8996A90C:
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8991d830
	ctx.lr = 0x8996A924;
	sub_8991D830(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996A934:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8996a950
	if (!ctx.cr6.lt) goto loc_8996A950;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8996A950:
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
	// blt cr6,0x8996a98c
	if (ctx.cr6.lt) goto loc_8996A98C;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stbx r29,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u8);
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// stbx r29,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996A98C:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8991d8e0
	ctx.lr = 0x8996A994;
	sub_8991D8E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8996ac20
	if (ctx.cr6.eq) goto loc_8996AC20;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996A9B0:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8996a65c
	if (!ctx.cr6.eq) goto loc_8996A65C;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-28752
	ctx.r9.s64 = ctx.r9.s64 + -28752;
loc_8996A9D0:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lbzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// andc r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// blt cr6,0x8996a9d0
	if (ctx.cr6.lt) goto loc_8996A9D0;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// lis r5,16838
	ctx.r5.s64 = 1103495168;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// ori r3,r5,20077
	ctx.r3.u64 = ctx.r5.u64 | 20077;
	// lwz r10,-9212(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// lis r4,-30294
	ctx.r4.s64 = -1985347584;
	// mullw r10,r10,r3
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// addi r5,r4,-28748
	ctx.r5.s64 = ctx.r4.s64 + -28748;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r10,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r10.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// srawi r10,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 16;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r10,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// stbx r6,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u8);
	// addi r3,r30,193
	ctx.r3.s64 = ctx.r30.s64 + 193;
	// lbzx r6,r8,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// or r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 | ctx.r4.u64;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// stbx r4,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996AA64:
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
	// cmplwi cr6,r9,240
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 240, ctx.xer);
	// blt cr6,0x8996ac20
	if (ctx.cr6.lt) goto loc_8996AC20;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// stbx r29,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u8);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r9,r11,-28748
	ctx.r9.s64 = ctx.r11.s64 + -28748;
loc_8996AA94:
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lbzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// andc r8,r6,r3
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// blt cr6,0x8996aa94
	if (ctx.cr6.lt) goto loc_8996AA94;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996AAD8:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r9,r11,-28748
	ctx.r9.s64 = ctx.r11.s64 + -28748;
loc_8996AAF0:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lbzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// extsb r6,r4
	ctx.r6.s64 = ctx.r4.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8996ab1c
	if (!ctx.cr6.eq) goto loc_8996AB1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x8996aaf0
	if (ctx.cr6.lt) goto loc_8996AAF0;
loc_8996AB1C:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8996ac20
	if (!ctx.cr6.eq) goto loc_8996AC20;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996AB38:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,7200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7200, ctx.xer);
	// ble cr6,0x8996ab5c
	if (!ctx.cr6.gt) goto loc_8996AB5C;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u8);
	// stwx r29,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
loc_8996AB5C:
	// stbx r29,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r29.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996AB64:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8996abf0
	if (ctx.cr6.lt) goto loc_8996ABF0;
	// beq cr6,0x8996abd4
	if (ctx.cr6.eq) goto loc_8996ABD4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8996ac20
	if (!ctx.cr6.lt) goto loc_8996AC20;
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
	// cmpwi cr6,r6,-256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -256, ctx.xer);
	// bgt cr6,0x8996ac20
	if (ctx.cr6.gt) goto loc_8996AC20;
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
	ctx.lr = 0x8996ABD0;
	sub_8995E188(ctx, base);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996ABD4:
	// bl 0x89936938
	ctx.lr = 0x8996ABD8;
	sub_89936938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8996ac20
	if (!ctx.cr6.eq) goto loc_8996AC20;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8996ac20
	goto loc_8996AC20;
loc_8996ABF0:
	// bl 0x89936760
	ctx.lr = 0x8996ABF4;
	sub_89936760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996ac20
	if (ctx.cr6.eq) goto loc_8996AC20;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// li r8,256
	ctx.r8.s64 = 256;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r6,-20
	ctx.r6.s64 = -20;
	// sthx r8,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u16);
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
loc_8996AC20:
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8997A090) {
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
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r4,r31,207
	ctx.r4.s64 = ctx.r31.s64 + 207;
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r5,r30,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r6,r30,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// lbzx r7,r30,r4
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// lbzx r8,r30,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// bgt cr6,0x8997a218
	if (ctx.cr6.gt) goto loc_8997A218;
	// lis r12,-30312
	ctx.r12.s64 = -1986527232;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24320
	ctx.r12.s64 = ctx.r12.s64 + -24320;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8997A184;
	case 1:
		goto loc_8997A1D4;
	case 2:
		goto loc_8997A218;
	case 3:
		goto loc_8997A1DC;
	case 4:
		goto loc_8997A218;
	case 5:
		goto loc_8997A218;
	case 6:
		goto loc_8997A1E4;
	case 7:
		goto loc_8997A218;
	case 8:
		goto loc_8997A218;
	case 9:
		goto loc_8997A1E4;
	case 10:
		goto loc_8997A218;
	case 11:
		goto loc_8997A218;
	case 12:
		goto loc_8997A1F0;
	case 13:
		goto loc_8997A218;
	case 14:
		goto loc_8997A218;
	case 15:
		goto loc_8997A1F0;
	case 16:
		goto loc_8997A218;
	case 17:
		goto loc_8997A218;
	case 18:
		goto loc_8997A1E4;
	case 19:
		goto loc_8997A218;
	case 20:
		goto loc_8997A218;
	case 21:
		goto loc_8997A218;
	case 22:
		goto loc_8997A218;
	case 23:
		goto loc_8997A218;
	case 24:
		goto loc_8997A218;
	case 25:
		goto loc_8997A1FC;
	case 26:
		goto loc_8997A1FC;
	case 27:
		goto loc_8997A218;
	case 28:
		goto loc_8997A218;
	case 29:
		goto loc_8997A218;
	case 30:
		goto loc_8997A210;
	case 31:
		goto loc_8997A210;
	case 32:
		goto loc_8997A208;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8997A184:
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// ori r12,r12,32767
	ctx.r12.u64 = ctx.r12.u64 | 32767;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r8,r31,94
	ctx.r8.s64 = ctx.r31.s64 + 94;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// addi r5,r31,72
	ctx.r5.s64 = ctx.r31.s64 + 72;
	// and r4,r3,r12
	ctx.r4.u64 = ctx.r3.u64 & ctx.r12.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r9,-20848
	ctx.r3.s64 = ctx.r9.s64 + -20848;
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// sthx r11,r30,r8
	REX_STORE_U16(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u16);
	// stbx r11,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u8);
	// stwx r3,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// sthx r11,r30,r6
	REX_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u16);
	// sthx r11,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u16);
	// bl 0x8995e188
	ctx.lr = 0x8997A1CC;
	sub_8995E188(ctx, base);
	// bl 0x89936440
	ctx.lr = 0x8997A1D0;
	sub_89936440(ctx, base);
	// b 0x8997a220
	goto loc_8997A220;
loc_8997A1D4:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8997a214
	goto loc_8997A214;
loc_8997A1DC:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8997a214
	goto loc_8997A214;
loc_8997A1E4:
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x899d4fb0
	ctx.lr = 0x8997A1EC;
	sub_899D4FB0(ctx, base);
	// b 0x8997a218
	goto loc_8997A218;
loc_8997A1F0:
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x899d4fb0
	ctx.lr = 0x8997A1F8;
	sub_899D4FB0(ctx, base);
	// b 0x8997a218
	goto loc_8997A218;
loc_8997A1FC:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x899d4440
	ctx.lr = 0x8997A204;
	sub_899D4440(ctx, base);
	// b 0x8997a218
	goto loc_8997A218;
loc_8997A208:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8997a214
	goto loc_8997A214;
loc_8997A210:
	// li r4,3
	ctx.r4.s64 = 3;
loc_8997A214:
	// bl 0x899d4c10
	ctx.lr = 0x8997A218;
	sub_899D4C10(ctx, base);
loc_8997A218:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
loc_8997A220:
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

DEFINE_REX_FUNC(sub_8997AA10) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// mulli r9,r9,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lwzx r11,r9,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8997aaa4
	if (ctx.cr6.gt) goto loc_8997AAA4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997aa6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997AA6C;
	// bdzf 4*cr6+eq,0x8997aa88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997AA88;
	// bdzf 4*cr6+eq,0x8997aa50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997AA50;
	// bdzf 4*cr6+eq,0x8997aa6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997AA6C;
	// bne cr6,0x8997aa88
	if (!ctx.cr6.eq) goto loc_8997AA88;
loc_8997AA50:
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lis r7,-30294
	ctx.r7.s64 = -1985347584;
	// addi r11,r7,-20784
	ctx.r11.s64 = ctx.r7.s64 + -20784;
	// lwzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// b 0x8997aaa8
	goto loc_8997AAA8;
loc_8997AA6C:
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// addi r8,r8,-20720
	ctx.r8.s64 = ctx.r8.s64 + -20720;
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x8997aaa8
	goto loc_8997AAA8;
loc_8997AA88:
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// addi r8,r8,-20656
	ctx.r8.s64 = ctx.r8.s64 + -20656;
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x8997aaa8
	goto loc_8997AAA8;
loc_8997AAA4:
	// lwz r8,-16(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
loc_8997AAA8:
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lhz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// addi r7,r10,48
	ctx.r7.s64 = ctx.r10.s64 + 48;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stwx r5,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// addi r9,r9,-6
	ctx.r9.s64 = ctx.r9.s64 + -6;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bgt cr6,0x8997ab28
	if (ctx.cr6.gt) goto loc_8997AB28;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8997aaf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997AAF4;
	// bdzf 4*cr6+eq,0x8997aaf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997AAF4;
	// bdzf 4*cr6+eq,0x8997ab10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997AB10;
	// bdzf 4*cr6+eq,0x8997ab10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8997AB10;
	// bne cr6,0x8997ab10
	if (!ctx.cr6.eq) goto loc_8997AB10;
loc_8997AAF4:
	// addi r9,r10,52
	ctx.r9.s64 = ctx.r10.s64 + 52;
	// lhz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x8997ab28
	goto loc_8997AB28;
loc_8997AB10:
	// addi r9,r10,52
	ctx.r9.s64 = ctx.r10.s64 + 52;
	// lhz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// stwx r5,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
loc_8997AB28:
	// addi r9,r10,150
	ctx.r9.s64 = ctx.r10.s64 + 150;
	// addi r8,r10,72
	ctx.r8.s64 = ctx.r10.s64 + 72;
	// addi r7,r10,72
	ctx.r7.s64 = ctx.r10.s64 + 72;
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// mulli r5,r6,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lhzx r4,r5,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// sthx r4,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8997ADD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8997ADD8;
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
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r31,150
	ctx.r9.s64 = ctx.r31.s64 + 150;
	// addi r8,r31,192
	ctx.r8.s64 = ctx.r31.s64 + 192;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhzx r7,r30,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r5,r6,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lbzx r4,r5,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8997ae98
	if (ctx.cr6.eq) goto loc_8997AE98;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// ori r7,r9,20077
	ctx.r7.u64 = ctx.r9.u64 | 20077;
	// addi r6,r8,-20592
	ctx.r6.s64 = ctx.r8.s64 + -20592;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,17,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFF;
	// lbzx r8,r9,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stwx r7,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r7.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997AE64;
	sub_8991B610(ctx, base);
	// extsh r6,r29
	ctx.r6.s64 = ctx.r29.s16;
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// mulli r10,r6,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r31,188
	ctx.r11.s64 = ctx.r31.s64 + 188;
	// ori r7,r8,3
	ctx.r7.u64 = ctx.r8.u64 | 3;
	// addi r5,r31,160
	ctx.r5.s64 = ctx.r31.s64 + 160;
	// stbx r7,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// sthx r4,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r4.u16);
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8997AE98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8997DC50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x8997DC58;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30230
	ctx.r11.s64 = -1981153280;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r31,r11,4808
	ctx.r31.s64 = ctx.r11.s64 + 4808;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r23,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// addi r8,r31,-1856
	ctx.r8.s64 = ctx.r31.s64 + -1856;
	// li r10,208
	ctx.r10.s64 = 208;
	// sth r11,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-20
	ctx.r9.s64 = -20;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x89934b48
	ctx.lr = 0x8997DCA0;
	sub_89934B48(ctx, base);
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// addi r5,r31,-1856
	ctx.r5.s64 = ctx.r31.s64 + -1856;
	// addi r25,r11,-4140
	ctx.r25.s64 = ctx.r11.s64 + -4140;
	// addi r4,r31,-8216
	ctx.r4.s64 = ctx.r31.s64 + -8216;
	// addi r6,r25,-664
	ctx.r6.s64 = ctx.r25.s64 + -664;
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x89935b08
	ctx.lr = 0x8997DCC4;
	sub_89935B08(ctx, base);
	// addi r7,r31,-11976
	ctx.r7.s64 = ctx.r31.s64 + -11976;
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r23,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r10,200
	ctx.r10.s64 = 200;
	// sth r6,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r6.u16);
	// li r9,-24
	ctx.r9.s64 = -24;
	// li r8,-28
	ctx.r8.s64 = -28;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,34
	ctx.r5.s64 = 34;
	// li r4,14
	ctx.r4.s64 = 14;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x89934b48
	ctx.lr = 0x8997DCFC;
	sub_89934B48(ctx, base);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r24,r11,3484
	ctx.r24.s64 = ctx.r11.s64 + 3484;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
loc_8997DD0C:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,-11976
	ctx.r10.s64 = ctx.r31.s64 + -11976;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mulli r11,r8,126
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(126));
	// rlwinm r6,r9,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r31,-4248
	ctx.r7.s64 = ctx.r31.s64 + -4248;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8997DD30:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// blt cr6,0x8997dd30
	if (ctx.cr6.lt) goto loc_8997DD30;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// blt cr6,0x8997dd0c
	if (ctx.cr6.lt) goto loc_8997DD0C;
	// li r27,8
	ctx.r27.s64 = 8;
	// stb r23,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// addi r11,r31,-4656
	ctx.r11.s64 = ctx.r31.s64 + -4656;
	// sth r27,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r27.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934b48
	ctx.lr = 0x8997DDAC;
	sub_89934B48(ctx, base);
	// addi r11,r31,-4656
	ctx.r11.s64 = ctx.r31.s64 + -4656;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r27,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r27.u16);
	// addi r7,r11,144
	ctx.r7.s64 = ctx.r11.s64 + 144;
	// stb r23,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,33
	ctx.r5.s64 = 33;
	// li r4,13
	ctx.r4.s64 = 13;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934b48
	ctx.lr = 0x8997DDE4;
	sub_89934B48(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_8997DDEC:
	// rlwinm r11,r11,14,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000;
	// rlwinm r29,r28,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r3,r11,8
	ctx.r3.u64 = ctx.r11.u64 | 8;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8997DDFC:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r31,-4656
	ctx.r11.s64 = ctx.r31.s64 + -4656;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r31,-17576
	ctx.r9.s64 = ctx.r31.s64 + -17576;
	// mulli r8,r8,108
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(108));
	// addi r6,r25,-264
	ctx.r6.s64 = ctx.r25.s64 + -264;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x89935610
	ctx.lr = 0x8997DE2C;
	sub_89935610(ctx, base);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x8997ddfc
	if (ctx.cr6.lt) goto loc_8997DDFC;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8997ddec
	if (ctx.cr6.lt) goto loc_8997DDEC;
	// li r11,64
	ctx.r11.s64 = 64;
	// sth r27,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r27.u16);
	// addi r8,r31,-12424
	ctx.r8.s64 = ctx.r31.s64 + -12424;
	// stb r11,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-12
	ctx.r9.s64 = -12;
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934b48
	ctx.lr = 0x8997DE8C;
	sub_89934B48(ctx, base);
	// addi r6,r25,-576
	ctx.r6.s64 = ctx.r25.s64 + -576;
	// addi r5,r31,-12424
	ctx.r5.s64 = ctx.r31.s64 + -12424;
	// addi r4,r31,-11088
	ctx.r4.s64 = ctx.r31.s64 + -11088;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x8997DEA4;
	sub_89935610(ctx, base);
	// addi r7,r31,112
	ctx.r7.s64 = ctx.r31.s64 + 112;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r9,88
	ctx.r9.s64 = 88;
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x8997DED8;
	sub_89934FB8(ctx, base);
	// addi r9,r31,112
	ctx.r9.s64 = ctx.r31.s64 + 112;
	// addi r11,r31,272
	ctx.r11.s64 = ctx.r31.s64 + 272;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8997DEE4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x8997dee4
	if (ctx.cr6.lt) goto loc_8997DEE4;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r10,-20504
	ctx.r10.s64 = ctx.r10.s64 + -20504;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997dfac
	if (ctx.cr6.eq) goto loc_8997DFAC;
	// addi r30,r10,-10
	ctx.r30.s64 = ctx.r10.s64 + -10;
loc_8997DF30:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r8,19(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 19);
	// lbz r28,18(r30)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + 18);
	// addi r4,r31,-12856
	ctx.r4.s64 = ctx.r31.s64 + -12856;
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
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lbz r7,14(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// sth r9,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// add r27,r10,r4
	ctx.r27.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r8,15(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 16);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// lbz r10,17(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 17);
	// bl 0x89934b48
	ctx.lr = 0x8997DF8C;
	sub_89934B48(ctx, base);
	// lbzu r10,10(r30)
	ea = 10 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997df30
	if (!ctx.cr6.eq) goto loc_8997DF30;
loc_8997DFAC:
	// addi r9,r31,-12856
	ctx.r9.s64 = ctx.r31.s64 + -12856;
	// addi r11,r31,-6616
	ctx.r11.s64 = ctx.r31.s64 + -6616;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8997DFB8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 24, ctx.xer);
	// blt cr6,0x8997dfb8
	if (ctx.cr6.lt) goto loc_8997DFB8;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r10,-20304
	ctx.r10.s64 = ctx.r10.s64 + -20304;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997e080
	if (ctx.cr6.eq) goto loc_8997E080;
	// addi r30,r10,-8
	ctx.r30.s64 = ctx.r10.s64 + -8;
loc_8997E004:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r4,14(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// addi r6,r31,-6312
	ctx.r6.s64 = ctx.r31.s64 + -6312;
	// lbz r8,15(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r3,9(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lbz r28,10(r30)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,11(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// stb r4,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r8,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// li r8,-32
	ctx.r8.s64 = -32;
	// lbz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lbz r10,13(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x89934b48
	ctx.lr = 0x8997E060;
	sub_89934B48(ctx, base);
	// lbzu r10,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// extsh r29,r4
	ctx.r29.s64 = ctx.r4.s16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997e004
	if (!ctx.cr6.eq) goto loc_8997E004;
loc_8997E080:
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r8,r11,-20224
	ctx.r8.s64 = ctx.r11.s64 + -20224;
loc_8997E08C:
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8997E098:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r7,r31,-10976
	ctx.r7.s64 = ctx.r31.s64 + -10976;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r3,r11,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsb r6,r3
	ctx.r6.s64 = ctx.r3.s8;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r3,r6,15,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0xFFFF8000;
	// cmplwi cr6,r5,9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 9, ctx.xer);
	// stwx r3,r4,r7
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r3.u32);
	// blt cr6,0x8997e098
	if (ctx.cr6.lt) goto loc_8997E098;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,-10976
	ctx.r11.s64 = ctx.r31.s64 + -10976;
	// addi r6,r10,25
	ctx.r6.s64 = ctx.r10.s64 + 25;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// rlwinm r11,r6,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// stwx r11,r5,r4
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r11.u32);
	// blt cr6,0x8997e08c
	if (ctx.cr6.lt) goto loc_8997E08C;
	// addi r6,r31,-10976
	ctx.r6.s64 = ctx.r31.s64 + -10976;
	// addi r5,r31,-6312
	ctx.r5.s64 = ctx.r31.s64 + -6312;
	// addi r4,r31,-12280
	ctx.r4.s64 = ctx.r31.s64 + -12280;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x89935610
	ctx.lr = 0x8997E118;
	sub_89935610(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r10,r11,-20212
	ctx.r10.s64 = ctx.r11.s64 + -20212;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lbz r11,-20212(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -20212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997e1b4
	if (ctx.cr6.eq) goto loc_8997E1B4;
	// addi r30,r10,-8
	ctx.r30.s64 = ctx.r10.s64 + -8;
loc_8997E138:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r7,14(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// lbz r6,15(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// addi r8,r31,-8672
	ctx.r8.s64 = ctx.r31.s64 + -8672;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r3,10(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// lbz r4,9(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,11(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// stb r7,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// rlwimi r4,r26,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r5,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r5.u16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r10,13(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// li r9,-6
	ctx.r9.s64 = -6;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r8,-12
	ctx.r8.s64 = -12;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x89934b48
	ctx.lr = 0x8997E194;
	sub_89934B48(ctx, base);
	// lbzu r10,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// extsh r29,r4
	ctx.r29.s64 = ctx.r4.s16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997e138
	if (!ctx.cr6.eq) goto loc_8997E138;
loc_8997E1B4:
	// addi r6,r25,-472
	ctx.r6.s64 = ctx.r25.s64 + -472;
	// addi r5,r31,-8672
	ctx.r5.s64 = ctx.r31.s64 + -8672;
	// addi r4,r31,-2560
	ctx.r4.s64 = ctx.r31.s64 + -2560;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935610
	ctx.lr = 0x8997E1CC;
	sub_89935610(ctx, base);
	// addi r11,r31,-8672
	ctx.r11.s64 = ctx.r31.s64 + -8672;
	// addi r6,r25,-472
	ctx.r6.s64 = ctx.r25.s64 + -472;
	// addi r4,r31,-8888
	ctx.r4.s64 = ctx.r31.s64 + -8888;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,288
	ctx.r5.s64 = ctx.r11.s64 + 288;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x89935b08
	ctx.lr = 0x8997E1E8;
	sub_89935B08(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r9,r11,-20168
	ctx.r9.s64 = ctx.r11.s64 + -20168;
	// lbz r11,-20168(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -20168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997e268
	if (ctx.cr6.eq) goto loc_8997E268;
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
loc_8997E204:
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// lbz r5,2(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r6,3(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// addi r3,r31,-13928
	ctx.r3.s64 = ctx.r31.s64 + -13928;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r8,5(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// add r27,r29,r10
	ctx.r27.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lbz r9,6(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// lbz r10,7(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// lbzu r28,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r26,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r26.u16);
	// add r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// bl 0x89934b48
	ctx.lr = 0x8997E250;
	sub_89934B48(ctx, base);
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
	// bne cr6,0x8997e204
	if (!ctx.cr6.eq) goto loc_8997E204;
loc_8997E268:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8997E26C:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r3,r30,204
	ctx.r3.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(204));
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r31,-14544
	ctx.r4.s64 = ctx.r31.s64 + -14544;
	// addi r10,r25,1244
	ctx.r10.s64 = ctx.r25.s64 + 1244;
	// addi r9,r31,-13928
	ctx.r9.s64 = ctx.r31.s64 + -13928;
	// mulli r11,r30,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(60));
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935610
	ctx.lr = 0x8997E2A4;
	sub_89935610(ctx, base);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// blt cr6,0x8997e26c
	if (ctx.cr6.lt) goto loc_8997E26C;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r11,-19776
	ctx.r10.s64 = ctx.r11.s64 + -19776;
	// lbz r11,-19776(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -19776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997e340
	if (ctx.cr6.eq) goto loc_8997E340;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// li r28,2
	ctx.r28.s64 = 2;
loc_8997E2D8:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r4,2(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// lbz r5,3(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// addi r6,r31,-4816
	ctx.r6.s64 = ctx.r31.s64 + -4816;
	// lbzu r9,5(r30)
	ea = 5 + ctx.r30.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,-48
	ctx.r8.s64 = -48;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r6,96
	ctx.r6.s64 = 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x89934fb8
	ctx.lr = 0x8997E320;
	sub_89934FB8(ctx, base);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997e2d8
	if (!ctx.cr6.eq) goto loc_8997E2D8;
loc_8997E340:
	// addi r9,r31,-4816
	ctx.r9.s64 = ctx.r31.s64 + -4816;
	// addi r11,r31,-15616
	ctx.r11.s64 = ctx.r31.s64 + -15616;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8997E34C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x8997e34c
	if (ctx.cr6.lt) goto loc_8997E34C;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r10,-19748
	ctx.r10.s64 = ctx.r10.s64 + -19748;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997e414
	if (ctx.cr6.eq) goto loc_8997E414;
	// addi r30,r10,-8
	ctx.r30.s64 = ctx.r10.s64 + -8;
loc_8997E398:
	// lbz r9,15(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r8,14(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// addi r5,r31,-3496
	ctx.r5.s64 = ctx.r31.s64 + -3496;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// lbz r3,9(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r28,10(r30)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// sth r6,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r6.u16);
	// li r6,48
	ctx.r6.s64 = 48;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,11(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// li r8,-24
	ctx.r8.s64 = -24;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// lbz r10,13(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// add r27,r4,r5
	ctx.r27.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x89934b48
	ctx.lr = 0x8997E3F4;
	sub_89934B48(ctx, base);
	// lbzu r10,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997e398
	if (!ctx.cr6.eq) goto loc_8997E398;
loc_8997E414:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8997E41C:
	// rlwinm r10,r11,14,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000;
	// addi r11,r31,-10112
	ctx.r11.s64 = ctx.r31.s64 + -10112;
	// ori r28,r10,16
	ctx.r28.u64 = ctx.r10.u64 | 16;
	// mulli r29,r30,612
	ctx.r29.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(612));
	// addi r6,r25,1436
	ctx.r6.s64 = ctx.r25.s64 + 1436;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r31,-3496
	ctx.r5.s64 = ctx.r31.s64 + -3496;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x89935610
	ctx.lr = 0x8997E444;
	sub_89935610(ctx, base);
	// addi r11,r31,-10112
	ctx.r11.s64 = ctx.r31.s64 + -10112;
	// addi r10,r31,-3496
	ctx.r10.s64 = ctx.r31.s64 + -3496;
	// addi r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 + 204;
	// addi r6,r25,1436
	ctx.r6.s64 = ctx.r25.s64 + 1436;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r5,r10,288
	ctx.r5.s64 = ctx.r10.s64 + 288;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x89935610
	ctx.lr = 0x8997E464;
	sub_89935610(ctx, base);
	// addi r11,r31,-10112
	ctx.r11.s64 = ctx.r31.s64 + -10112;
	// addi r10,r31,-3496
	ctx.r10.s64 = ctx.r31.s64 + -3496;
	// addi r11,r11,408
	ctx.r11.s64 = ctx.r11.s64 + 408;
	// addi r6,r25,-384
	ctx.r6.s64 = ctx.r25.s64 + -384;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,576
	ctx.r5.s64 = ctx.r10.s64 + 576;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x89935610
	ctx.lr = 0x8997E484;
	sub_89935610(ctx, base);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8997e41c
	if (ctx.cr6.lt) goto loc_8997E41C;
	// addi r11,r31,-3496
	ctx.r11.s64 = ctx.r31.s64 + -3496;
	// lis r10,-30233
	ctx.r10.s64 = -1981349888;
	// addi r6,r25,-384
	ctx.r6.s64 = ctx.r25.s64 + -384;
	// addi r4,r10,-6116
	ctx.r4.s64 = ctx.r10.s64 + -6116;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,864
	ctx.r5.s64 = ctx.r11.s64 + 864;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89935610
	ctx.lr = 0x8997E4B8;
	sub_89935610(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r11,-19696
	ctx.r10.s64 = ctx.r11.s64 + -19696;
	// lbz r11,-19696(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -19696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997e544
	if (ctx.cr6.eq) goto loc_8997E544;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_8997E4D4:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r4,2(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// addi r28,r31,-5880
	ctx.r28.s64 = ctx.r31.s64 + -5880;
	// lbz r5,3(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r7,5(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,6(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// lbz r9,7(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// lbzu r11,9(r30)
	ea = 9 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x89934fb8
	ctx.lr = 0x8997E524;
	sub_89934FB8(ctx, base);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsh r9,r26
	ctx.r9.s64 = ctx.r26.s16;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997e4d4
	if (!ctx.cr6.eq) goto loc_8997E4D4;
loc_8997E544:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// ori r10,r10,20480
	ctx.r10.u64 = ctx.r10.u64 | 20480;
	// lis r24,4
	ctx.r24.s64 = 262144;
	// lis r25,13
	ctx.r25.s64 = 851968;
	// lis r26,15
	ctx.r26.s64 = 983040;
	// lis r27,-1
	ctx.r27.s64 = -65536;
	// lis r28,9
	ctx.r28.s64 = 589824;
	// lis r29,10
	ctx.r29.s64 = 655360;
	// addi r8,r9,9016
	ctx.r8.s64 = ctx.r9.s64 + 9016;
loc_8997E570:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r22,r11,r7
	ctx.r22.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r9,128
	ctx.r5.s64 = ctx.r9.s64 + 128;
	// rlwinm r4,r9,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r5,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r21,r11,1
	ctx.r21.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,-7808
	ctx.r11.s64 = ctx.r31.s64 + -7808;
	// addi r9,r31,-7808
	ctx.r9.s64 = ctx.r31.s64 + -7808;
	// addi r7,r31,-7808
	ctx.r7.s64 = ctx.r31.s64 + -7808;
	// lhzx r20,r4,r8
	ctx.r20.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// lhzx r3,r3,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r8.u32);
	// rlwinm r22,r22,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsh r30,r3
	ctx.r30.s64 = ctx.r3.s16;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// mullw r30,r30,r10
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// stwx r26,r22,r11
	REX_STORE_U32(ctx.r22.u32 + ctx.r11.u32, ctx.r26.u32);
	// stwx r27,r22,r9
	REX_STORE_U32(ctx.r22.u32 + ctx.r9.u32, ctx.r27.u32);
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// addi r6,r31,-7808
	ctx.r6.s64 = ctx.r31.s64 + -7808;
	// addi r5,r31,-7808
	ctx.r5.s64 = ctx.r31.s64 + -7808;
	// srawi r19,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r19.s64 = ctx.r30.s32 >> 8;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r5,r5,20
	ctx.r5.s64 = ctx.r5.s64 + 20;
	// stwx r23,r22,r7
	REX_STORE_U32(ctx.r22.u32 + ctx.r7.u32, ctx.r23.u32);
	// addi r3,r31,-7808
	ctx.r3.s64 = ctx.r31.s64 + -7808;
	// addi r4,r31,-7808
	ctx.r4.s64 = ctx.r31.s64 + -7808;
	// addi r30,r31,-7808
	ctx.r30.s64 = ctx.r31.s64 + -7808;
	// mulli r19,r19,224
	ctx.r19.s64 = static_cast<int64_t>(ctx.r19.u64 * static_cast<uint64_t>(224));
	// stwx r28,r22,r6
	REX_STORE_U32(ctx.r22.u32 + ctx.r6.u32, ctx.r28.u32);
	// stwx r29,r22,r5
	REX_STORE_U32(ctx.r22.u32 + ctx.r5.u32, ctx.r29.u32);
	// extsh r20,r20
	ctx.r20.s64 = ctx.r20.s16;
	// srawi r19,r19,8
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xFF) != 0);
	ctx.r19.s64 = ctx.r19.s32 >> 8;
	// mullw r11,r20,r10
	ctx.r11.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r10.s32);
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// addi r18,r31,-7808
	ctx.r18.s64 = ctx.r31.s64 + -7808;
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// addi r7,r30,32
	ctx.r7.s64 = ctx.r30.s64 + 32;
	// extsh r6,r21
	ctx.r6.s64 = ctx.r21.s16;
	// srawi r3,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 8;
	// subf r5,r24,r19
	ctx.r5.u64 = ctx.r19.u64 - ctx.r24.u64;
	// stwx r25,r22,r18
	REX_STORE_U32(ctx.r22.u32 + ctx.r18.u32, ctx.r25.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stwx r3,r22,r9
	REX_STORE_U32(ctx.r22.u32 + ctx.r9.u32, ctx.r3.u32);
	// stwx r5,r22,r4
	REX_STORE_U32(ctx.r22.u32 + ctx.r4.u32, ctx.r5.u32);
	// cmpwi cr6,r6,32
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32, ctx.xer);
	// stwx r23,r22,r7
	REX_STORE_U32(ctx.r22.u32 + ctx.r7.u32, ctx.r23.u32);
	// ble cr6,0x8997e570
	if (!ctx.cr6.gt) goto loc_8997E570;
	// addi r6,r31,-7808
	ctx.r6.s64 = ctx.r31.s64 + -7808;
	// addi r5,r31,-5880
	ctx.r5.s64 = ctx.r31.s64 + -5880;
	// addi r4,r31,-1544
	ctx.r4.s64 = ctx.r31.s64 + -1544;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935c28
	ctx.lr = 0x8997E650;
	sub_89935C28(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r11,-19608
	ctx.r10.s64 = ctx.r11.s64 + -19608;
	// lbz r11,-19608(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -19608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997e6e8
	if (ctx.cr6.eq) goto loc_8997E6E8;
	// addi r30,r10,-10
	ctx.r30.s64 = ctx.r10.s64 + -10;
loc_8997E66C:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r7,19(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 19);
	// lbz r8,18(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 18);
	// addi r4,r31,-17144
	ctx.r4.s64 = ctx.r31.s64 + -17144;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r3,11(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lbz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,13(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// clrlwi r28,r7,16
	ctx.r28.u64 = ctx.r7.u32 & 0xFFFF;
	// lbz r7,14(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// lbz r8,15(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// add r27,r10,r4
	ctx.r27.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r10,17(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 17);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// sth r28,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// bl 0x89934b48
	ctx.lr = 0x8997E6C8;
	sub_89934B48(ctx, base);
	// lbzu r10,10(r30)
	ea = 10 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997e66c
	if (!ctx.cr6.eq) goto loc_8997E66C;
loc_8997E6E8:
	// lwz r27,112(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r5,r31,-17144
	ctx.r5.s64 = ctx.r31.s64 + -17144;
	// addi r4,r31,-760
	ctx.r4.s64 = ctx.r31.s64 + -760;
	// addi r6,r27,2012
	ctx.r6.s64 = ctx.r27.s64 + 2012;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935610
	ctx.lr = 0x8997E704;
	sub_89935610(ctx, base);
	// addi r11,r31,-17144
	ctx.r11.s64 = ctx.r31.s64 + -17144;
	// addi r10,r31,-760
	ctx.r10.s64 = ctx.r31.s64 + -760;
	// addi r6,r27,2012
	ctx.r6.s64 = ctx.r27.s64 + 2012;
	// li r7,13
	ctx.r7.s64 = 13;
	// addi r5,r11,288
	ctx.r5.s64 = ctx.r11.s64 + 288;
	// addi r4,r10,204
	ctx.r4.s64 = ctx.r10.s64 + 204;
	// bl 0x89935610
	ctx.lr = 0x8997E720;
	sub_89935610(ctx, base);
	// addi r11,r31,-17144
	ctx.r11.s64 = ctx.r31.s64 + -17144;
	// addi r6,r27,2844
	ctx.r6.s64 = ctx.r27.s64 + 2844;
	// addi r4,r31,-4368
	ctx.r4.s64 = ctx.r31.s64 + -4368;
	// li r7,13
	ctx.r7.s64 = 13;
	// addi r5,r11,576
	ctx.r5.s64 = ctx.r11.s64 + 576;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x89935610
	ctx.lr = 0x8997E73C;
	sub_89935610(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r29,r11,-19488
	ctx.r29.s64 = ctx.r11.s64 + -19488;
	// lbz r11,-19488(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -19488);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997e7b4
	if (ctx.cr6.eq) goto loc_8997E7B4;
	// li r28,4
	ctx.r28.s64 = 4;
loc_8997E758:
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// addi r8,r31,-17736
	ctx.r8.s64 = ctx.r31.s64 + -17736;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,64
	ctx.r6.s64 = 64;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// li r8,-32
	ctx.r8.s64 = -32;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r7,-28
	ctx.r7.s64 = -28;
	// li r5,56
	ctx.r5.s64 = 56;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x8997E79C;
	sub_89934FB8(ctx, base);
	// lbzu r11,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997e758
	if (!ctx.cr6.eq) goto loc_8997E758;
loc_8997E7B4:
	// lwz r28,116(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r31,-17736
	ctx.r9.s64 = ctx.r31.s64 + -17736;
	// addi r11,r31,-13064
	ctx.r11.s64 = ctx.r31.s64 + -13064;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8997E7C4:
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
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x8997e7c4
	if (ctx.cr6.lt) goto loc_8997E7C4;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r10,-19480
	ctx.r10.s64 = ctx.r10.s64 + -19480;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997e880
	if (ctx.cr6.eq) goto loc_8997E880;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_8997E810:
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// lbz r6,2(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// lbz r9,3(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// addi r4,r31,-2352
	ctx.r4.s64 = ctx.r31.s64 + -2352;
	// lbzu r7,5(r30)
	ea = 5 + ctx.r30.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// add r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 + ctx.r5.u64;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// li r8,-11
	ctx.r8.s64 = -11;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r7,-16
	ctx.r7.s64 = -16;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89934fb8
	ctx.lr = 0x8997E860;
	sub_89934FB8(ctx, base);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsh r9,r26
	ctx.r9.s64 = ctx.r26.s16;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997e810
	if (!ctx.cr6.eq) goto loc_8997E810;
loc_8997E880:
	// addi r6,r27,-176
	ctx.r6.s64 = ctx.r27.s64 + -176;
	// addi r5,r31,-2352
	ctx.r5.s64 = ctx.r31.s64 + -2352;
	// addi r4,r31,-208
	ctx.r4.s64 = ctx.r31.s64 + -208;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935688
	ctx.lr = 0x8997E898;
	sub_89935688(ctx, base);
	// addi r11,r31,-2352
	ctx.r11.s64 = ctx.r31.s64 + -2352;
	// addi r6,r27,-176
	ctx.r6.s64 = ctx.r27.s64 + -176;
	// addi r4,r31,-16400
	ctx.r4.s64 = ctx.r31.s64 + -16400;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,160
	ctx.r5.s64 = ctx.r11.s64 + 160;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935c28
	ctx.lr = 0x8997E8B4;
	sub_89935C28(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r11,-19448
	ctx.r10.s64 = ctx.r11.s64 + -19448;
	// lbz r11,-19448(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -19448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997e94c
	if (ctx.cr6.eq) goto loc_8997E94C;
	// addi r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 2;
loc_8997E8D0:
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// lbz r4,-1(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + -1);
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// lbz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// addi r7,r31,-3576
	ctx.r7.s64 = ctx.r31.s64 + -3576;
	// lbz r9,1(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
	// rlwinm r6,r4,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r5,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// neg r7,r6
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89934fb8
	ctx.lr = 0x8997E928;
	sub_89934FB8(ctx, base);
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,-2(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + -2);
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997e8d0
	if (!ctx.cr6.eq) goto loc_8997E8D0;
loc_8997E94C:
	// addi r9,r31,-3576
	ctx.r9.s64 = ctx.r31.s64 + -3576;
	// addi r11,r31,-4928
	ctx.r11.s64 = ctx.r31.s64 + -4928;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8997E958:
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
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x8997e958
	if (ctx.cr6.lt) goto loc_8997E958;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r10,-19428
	ctx.r10.s64 = ctx.r10.s64 + -19428;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997ea1c
	if (ctx.cr6.eq) goto loc_8997EA1C;
	// addi r30,r10,-7
	ctx.r30.s64 = ctx.r10.s64 + -7;
loc_8997E9A4:
	// lbz r8,13(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// addi r7,r31,-15408
	ctx.r7.s64 = ctx.r31.s64 + -15408;
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// lbz r28,9(r30)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// sth r3,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r3.u16);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,10(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// stb r5,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,11(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// li r9,-16
	ctx.r9.s64 = -16;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// li r8,-12
	ctx.r8.s64 = -12;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// bl 0x89934b48
	ctx.lr = 0x8997E9FC;
	sub_89934B48(ctx, base);
	// lbzu r10,7(r30)
	ea = 7 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// extsh r29,r6
	ctx.r29.s64 = ctx.r6.s16;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997e9a4
	if (!ctx.cr6.eq) goto loc_8997E9A4;
loc_8997EA1C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8997EA20:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r31,-15408
	ctx.r8.s64 = ctx.r31.s64 + -15408;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r10,r31,-5544
	ctx.r10.s64 = ctx.r31.s64 + -5544;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mulli r11,r30,204
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(204));
	// addi r6,r27,-88
	ctx.r6.s64 = ctx.r27.s64 + -88;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935610
	ctx.lr = 0x8997EA50;
	sub_89935610(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x8997ea20
	if (ctx.cr6.lt) goto loc_8997EA20;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r10,r11,-19364
	ctx.r10.s64 = ctx.r11.s64 + -19364;
	// lbz r11,-19364(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -19364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997eaec
	if (ctx.cr6.eq) goto loc_8997EAEC;
	// addi r30,r10,-5
	ctx.r30.s64 = ctx.r10.s64 + -5;
loc_8997EA80:
	// lbz r6,9(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// lbz r4,6(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r5,7(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// addi r7,r31,-352
	ctx.r7.s64 = ctx.r31.s64 + -352;
	// lbz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r3,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r3.u16);
	// stb r6,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r6.u8);
	// li r9,-20
	ctx.r9.s64 = -20;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,-20
	ctx.r8.s64 = -20;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x89934b48
	ctx.lr = 0x8997EACC;
	sub_89934B48(ctx, base);
	// lbzu r10,5(r30)
	ea = 5 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8997ea80
	if (!ctx.cr6.eq) goto loc_8997EA80;
loc_8997EAEC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r31,-352
	ctx.r5.s64 = ctx.r31.s64 + -352;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x8997EB04;
	sub_89935610(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998A800) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8998A808;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30230
	ctx.r11.s64 = -1981153280;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,30792
	ctx.r30.s64 = ctx.r11.s64 + 30792;
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r31,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// addi r8,r30,-1152
	ctx.r8.s64 = ctx.r30.s64 + -1152;
	// li r10,224
	ctx.r10.s64 = 224;
	// sth r11,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-16
	ctx.r9.s64 = -16;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89934b48
	ctx.lr = 0x8998A850;
	sub_89934B48(ctx, base);
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// addi r27,r11,-9132
	ctx.r27.s64 = ctx.r11.s64 + -9132;
loc_8998A858:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r30,-1152
	ctx.r10.s64 = ctx.r30.s64 + -1152;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mulli r28,r31,108
	ctx.r28.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(108));
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// li r3,16392
	ctx.r3.s64 = 16392;
	// bl 0x89935610
	ctx.lr = 0x8998A888;
	sub_89935610(ctx, base);
	// addi r11,r30,864
	ctx.r11.s64 = ctx.r30.s64 + 864;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x8998A8A4;
	sub_89935610(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x8998a858
	if (ctx.cr6.lt) goto loc_8998A858;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998AA48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8998AA50;
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
	// bge 0x8998aaf0
	if (!ctx.cr0.lt) goto loc_8998AAF0;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_8998AAF0:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// bgt cr6,0x8998abec
	if (ctx.cr6.gt) goto loc_8998ABEC;
	// lhzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addic. r9,r8,-512
	ctx.xer.ca = ctx.r8.u32 > 511;
	ctx.r9.s64 = ctx.r8.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8998ab0c
	if (!ctx.cr0.lt) goto loc_8998AB0C;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_8998AB0C:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// bgt cr6,0x8998abec
	if (ctx.cr6.gt) goto loc_8998ABEC;
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
	// addi r6,r8,-15432
	ctx.r6.s64 = ctx.r8.s64 + -15432;
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
	ctx.lr = 0x8998AB68;
	sub_8991B610(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991db50
	ctx.lr = 0x8998AB78;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998abf4
	if (ctx.cr6.eq) goto loc_8998ABF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991aae8
	ctx.lr = 0x8998AB88;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998abf4
	if (ctx.cr6.eq) goto loc_8998ABF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89932a38
	ctx.lr = 0x8998AB98;
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
	ctx.lr = 0x8998ABCC;
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
	// bl 0x899cba10
	ctx.lr = 0x8998ABE4;
	sub_899CBA10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_8998ABEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8998ABF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998B508) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8998B510;
	__savegprlr_26(ctx, base);
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
	// addi r27,r11,48
	ctx.r27.s64 = ctx.r11.s64 + 48;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stwx r8,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u32);
	// lhzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// addic. r10,r9,-160
	ctx.xer.ca = ctx.r9.u32 > 159;
	ctx.r10.s64 = ctx.r9.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8998b554
	if (!ctx.cr0.lt) goto loc_8998B554;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8998B554:
	// cmpwi cr6,r10,208
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 208, ctx.xer);
	// ble cr6,0x8998b56c
	if (!ctx.cr6.gt) goto loc_8998B56C;
loc_8998B55C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_8998B56C:
	// addi r28,r11,52
	ctx.r28.s64 = ctx.r11.s64 + 52;
	// addi r6,r11,60
	ctx.r6.s64 = ctx.r11.s64 + 60;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r8,r31,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// lhzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// addic. r10,r30,-512
	ctx.xer.ca = ctx.r30.u32 > 511;
	ctx.r10.s64 = ctx.r30.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8998b598
	if (!ctx.cr0.lt) goto loc_8998B598;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8998B598:
	// cmpwi cr6,r10,208
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 208, ctx.xer);
	// bgt cr6,0x8998b55c
	if (ctx.cr6.gt) goto loc_8998B55C;
	// addi r29,r11,188
	ctx.r29.s64 = ctx.r11.s64 + 188;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8998b6d0
	if (ctx.cr6.lt) goto loc_8998B6D0;
	// beq cr6,0x8998b648
	if (ctx.cr6.eq) goto loc_8998B648;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8998b72c
	if (!ctx.cr6.lt) goto loc_8998B72C;
	// addi r9,r11,183
	ctx.r9.s64 = ctx.r11.s64 + 183;
	// addi r10,r8,4096
	ctx.r10.s64 = ctx.r8.s64 + 4096;
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x8998b628
	if (ctx.cr6.lt) goto loc_8998B628;
	// neg r10,r7
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lis r8,-30304
	ctx.r8.s64 = -1986002944;
	// andc r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// addi r7,r8,-9584
	ctx.r7.s64 = ctx.r8.s64 + -9584;
	// rlwinm r10,r6,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addi r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 8;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r3,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u8);
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r6,r7,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8998b628
	if (!ctx.cr6.lt) goto loc_8998B628;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
loc_8998B628:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8998B644;
	sub_8991B610(ctx, base);
	// b 0x8998b72c
	goto loc_8998B72C;
loc_8998B648:
	// addi r10,r11,183
	ctx.r10.s64 = ctx.r11.s64 + 183;
	// addi r9,r8,-4096
	ctx.r9.s64 = ctx.r8.s64 + -4096;
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x8998b6b0
	if (ctx.cr6.lt) goto loc_8998B6B0;
	// neg r9,r7
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lis r6,-30304
	ctx.r6.s64 = -1986002944;
	// andc r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r5,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addi r4,r6,-9584
	ctx.r4.s64 = ctx.r6.s64 + -9584;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stbx r3,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u8);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r6,r7,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8998b6b0
	if (!ctx.cr6.gt) goto loc_8998B6B0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
loc_8998B6B0:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8998B6CC;
	sub_8991B610(ctx, base);
	// b 0x8998b72c
	goto loc_8998B72C;
loc_8998B6D0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x8998b6e4
	if (!ctx.cr6.lt) goto loc_8998B6E4;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bgt cr6,0x8998b72c
	if (ctx.cr6.gt) goto loc_8998B72C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
loc_8998B6E4:
	// ble cr6,0x8998b6f0
	if (!ctx.cr6.gt) goto loc_8998B6F0;
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// blt cr6,0x8998b72c
	if (ctx.cr6.lt) goto loc_8998B72C;
loc_8998B6F0:
	// bl 0x899329e0
	ctx.lr = 0x8998B6F4;
	sub_899329E0(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// mulli r9,r10,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lhzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// subfc r5,r6,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r6.u32;
	ctx.r5.u64 = ctx.r30.u64 - ctx.r6.u64;
	// eqv r4,r6,r30
	ctx.r4.u64 = ~(ctx.r6.u64 ^ ctx.r30.u64);
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addze r11,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
loc_8998B72C:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991db50
	ctx.lr = 0x8998B73C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998b794
	if (ctx.cr6.eq) goto loc_8998B794;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991aae8
	ctx.lr = 0x8998B74C;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998b794
	if (ctx.cr6.eq) goto loc_8998B794;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r29,r11,-15048
	ctx.r29.s64 = ctx.r11.s64 + -15048;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8998B760:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x899cce38
	ctx.lr = 0x8998B784;
	sub_899CCE38(ctx, base);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8998b760
	if (ctx.cr6.lt) goto loc_8998B760;
loc_8998B794:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998C860) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8998C868;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r9,-30229
	ctx.r9.s64 = -1981087744;
	// addi r10,r11,-14820
	ctx.r10.s64 = ctx.r11.s64 + -14820;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r9,-20968
	ctx.r29.s64 = ctx.r9.s64 + -20968;
	// lbz r11,-14820(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -14820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8998c8fc
	if (ctx.cr6.eq) goto loc_8998C8FC;
	// addi r31,r10,-4
	ctx.r31.s64 = ctx.r10.s64 + -4;
loc_8998C890:
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r9,7(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// lbz r7,6(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// addi r8,r29,-312
	ctx.r8.s64 = ctx.r29.s64 + -312;
	// add r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r5,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r5.u16);
	// li r6,32
	ctx.r6.s64 = 32;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r7,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x89934b48
	ctx.lr = 0x8998C8E0;
	sub_89934B48(ctx, base);
	// lbzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8998c890
	if (!ctx.cr6.eq) goto loc_8998C890;
loc_8998C8FC:
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// addi r5,r29,-312
	ctx.r5.s64 = ctx.r29.s64 + -312;
	// addi r30,r11,-10612
	ctx.r30.s64 = ctx.r11.s64 + -10612;
	// addi r4,r29,-1936
	ctx.r4.s64 = ctx.r29.s64 + -1936;
	// addi r6,r30,-128
	ctx.r6.s64 = ctx.r30.s64 + -128;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x8998C91C;
	sub_89935B08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r11,r29,-1536
	ctx.r11.s64 = ctx.r29.s64 + -1536;
	// sth r9,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// li r10,232
	ctx.r10.s64 = 232;
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
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934b48
	ctx.lr = 0x8998C958;
	sub_89934B48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r31,r29,-1536
	ctx.r31.s64 = ctx.r29.s64 + -1536;
loc_8998C960:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x8998C974;
	sub_89935B08(ctx, base);
	// addi r11,r29,-1536
	ctx.r11.s64 = ctx.r29.s64 + -1536;
	// addi r31,r31,306
	ctx.r31.s64 = ctx.r31.s64 + 306;
	// addi r11,r11,1224
	ctx.r11.s64 = ctx.r11.s64 + 1224;
	// addi r4,r4,396
	ctx.r4.s64 = ctx.r4.s64 + 396;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8998c960
	if (ctx.cr6.lt) goto loc_8998C960;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998DA18) {
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
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 9, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8991c340
	sub_8991C340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998DA40) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8998DA48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x8998DA50;
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
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x8998dcbc
	if (ctx.cr6.eq) goto loc_8998DCBC;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
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
	// beq cr6,0x8998dc04
	if (ctx.cr6.eq) goto loc_8998DC04;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8998dacc
	if (ctx.cr6.lt) goto loc_8998DACC;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8998dacc
	if (ctx.cr6.eq) goto loc_8998DACC;
	// addi r9,r30,104
	ctx.r9.s64 = ctx.r30.s64 + 104;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
loc_8998DACC:
	// addi r11,r30,162
	ctx.r11.s64 = ctx.r30.s64 + 162;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// beq cr6,0x8998dae8
	if (ctx.cr6.eq) goto loc_8998DAE8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8998DAE8:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// lhzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r7,r9,9016
	ctx.r7.s64 = ctx.r9.s64 + 9016;
	// rlwinm r10,r5,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lwzx r5,r31,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// rlwinm r4,r11,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r8,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r29,r30,56
	ctx.r29.s64 = ctx.r30.s64 + 56;
	// lhzx r4,r4,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// lhzx r3,r3,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// addi r25,r30,60
	ctx.r25.s64 = ctx.r30.s64 + 60;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// mullw r3,r7,r11
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// lwzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// srawi r4,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 12;
	// mullw r11,r4,r5
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r4,r3,12
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 12;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// addis r10,r10,-160
	ctx.r10.s64 = ctx.r10.s64 + -10485760;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r11,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// bge 0x8998db9c
	if (!ctx.cr0.lt) goto loc_8998DB9C;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8998DB9C:
	// lis r11,184
	ctx.r11.s64 = 12058624;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8998dc2c
	if (ctx.cr6.gt) goto loc_8998DC2C;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addis r11,r10,-120
	ctx.r11.s64 = ctx.r10.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8998dbc4
	if (!ctx.cr0.lt) goto loc_8998DBC4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8998DBC4:
	// lis r10,144
	ctx.r10.s64 = 9437184;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8998dc2c
	if (ctx.cr6.gt) goto loc_8998DC2C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// clrlwi r6,r7,28
	ctx.r6.u64 = ctx.r7.u32 & 0xF;
	// stwx r6,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// bl 0x8991b610
	ctx.lr = 0x8998DBFC;
	sub_8991B610(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_8998DC04:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8998de30
	if (ctx.cr6.lt) goto loc_8998DE30;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// li r28,0
	ctx.r28.s64 = 0;
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x8998dc38
	if (ctx.cr6.eq) goto loc_8998DC38;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x8998dc64
	if (!ctx.cr6.eq) goto loc_8998DC64;
loc_8998DC2C:
	// stwx r28,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_8998DC38:
	// addi r10,r30,184
	ctx.r10.s64 = ctx.r30.s64 + 184;
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
	// beq cr6,0x8998dc64
	if (ctx.cr6.eq) goto loc_8998DC64;
	// li r11,16
	ctx.r11.s64 = 16;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_8998DC64:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_8998DCBC:
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
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
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// blt cr6,0x8998dd5c
	if (ctx.cr6.lt) goto loc_8998DD5C;
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
	// stbx r28,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8998dd5c
	if (ctx.cr6.eq) goto loc_8998DD5C;
	// addi r11,r30,104
	ctx.r11.s64 = ctx.r30.s64 + 104;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8998DD5C:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991db50
	ctx.lr = 0x8998DD6C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8998de30
	if (ctx.cr6.eq) goto loc_8998DE30;
	// addi r11,r30,162
	ctx.r11.s64 = ctx.r30.s64 + 162;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x8998de30
	if (!ctx.cr6.eq) goto loc_8998DE30;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,17
	ctx.r8.s64 = 17;
	// stwx r28,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u32);
	// rlwimi r10,r9,29,29,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwimi r10,r9,29,2,2
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x8998DDB0;
	sub_8991B610(ctx, base);
	// addi r7,r30,204
	ctx.r7.s64 = ctx.r30.s64 + 204;
	// addi r6,r30,64
	ctx.r6.s64 = ctx.r30.s64 + 64;
	// addi r5,r30,66
	ctx.r5.s64 = ctx.r30.s64 + 66;
	// addi r4,r30,67
	ctx.r4.s64 = ctx.r30.s64 + 67;
	// addi r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 + 68;
	// addi r10,r30,200
	ctx.r10.s64 = ctx.r30.s64 + 200;
	// li r9,665
	ctx.r9.s64 = 665;
	// li r8,255
	ctx.r8.s64 = 255;
	// li r29,128
	ctx.r29.s64 = 128;
	// sthx r9,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u16);
	// li r3,73
	ctx.r3.s64 = 73;
	// stbx r8,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u8);
	// stbx r29,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u8);
	// stbx r28,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// lbzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// bl 0x89936360
	ctx.lr = 0x8998DDF4;
	sub_89936360(ctx, base);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lbz r5,7935(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 7935);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8998de30
	if (ctx.cr6.eq) goto loc_8998DE30;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lis r8,-30296
	ctx.r8.s64 = -1985478656;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// addi r8,r8,-25920
	ctx.r8.s64 = ctx.r8.s64 + -25920;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x899cba78
	ctx.lr = 0x8998DE30;
	sub_899CBA78(ctx, base);
loc_8998DE30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8998FFD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8998FFE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// lwzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
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
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
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
	// stwx r9,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u32);
	// lbzx r10,r7,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stbx r8,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u8);
	// beq cr6,0x89990214
	if (ctx.cr6.eq) goto loc_89990214;
	// addi r10,r30,188
	ctx.r10.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89990164
	if (ctx.cr6.lt) goto loc_89990164;
	// bne cr6,0x899902d0
	if (!ctx.cr6.eq) goto loc_899902D0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89932b18
	ctx.lr = 0x89990098;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89932d30
	ctx.lr = 0x899900A4;
	sub_89932D30(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991b770
	ctx.lr = 0x899900AC;
	sub_8991B770(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991db50
	ctx.lr = 0x899900BC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899902d0
	if (ctx.cr6.eq) goto loc_899902D0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899900CC;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899902d0
	if (ctx.cr6.eq) goto loc_899902D0;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r6,r9,9016
	ctx.r6.s64 = ctx.r9.s64 + 9016;
	// lhzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lis r9,-30296
	ctx.r9.s64 = -1985478656;
	// ori r4,r4,64512
	ctx.r4.u64 = ctx.r4.u64 | 64512;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwzx r3,r31,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// rlwinm r11,r11,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r31,r8,1,22,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// addi r8,r9,-27436
	ctx.r8.s64 = ctx.r9.s64 + -27436;
	// rlwinm r30,r3,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// lhzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// lhzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r6.u32);
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mullw r4,r9,r4
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
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
	// bl 0x899cbb90
	ctx.lr = 0x8999015C;
	sub_899CBB90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89990164:
	// addi r9,r30,196
	ctx.r9.s64 = ctx.r30.s64 + 196;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x89990184
	if (!ctx.cr6.eq) goto loc_89990184;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89990184:
	// addi r29,r30,184
	ctx.r29.s64 = ctx.r30.s64 + 184;
	// addi r30,r30,180
	ctx.r30.s64 = ctx.r30.s64 + 180;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// stbx r11,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899901d4
	if (ctx.cr6.eq) goto loc_899901D4;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8991db50
	ctx.lr = 0x899901B0;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899902d0
	if (ctx.cr6.eq) goto loc_899902D0;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stbx r10,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899901D4:
	// bl 0x89932b18
	ctx.lr = 0x899901D8;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89932d30
	ctx.lr = 0x899901E4;
	sub_89932D30(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991b770
	ctx.lr = 0x899901EC;
	sub_8991B770(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991db50
	ctx.lr = 0x899901FC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899902d0
	if (ctx.cr6.eq) goto loc_899902D0;
	// li r11,6
	ctx.r11.s64 = 6;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89990214:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8999021C:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bge cr6,0x8999023c
	if (!ctx.cr6.lt) goto loc_8999023C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8999023C:
	// ble cr6,0x8999024c
	if (!ctx.cr6.gt) goto loc_8999024C;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
loc_8999024C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8999021c
	if (ctx.cr6.lt) goto loc_8999021C;
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
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
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
loc_899902D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89990DA8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89990DB0;
	__savegprlr_26(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r8,12800
	ctx.r11.s64 = ctx.r8.s64 + 12800;
	// mulli r3,r9,208
	ctx.r3.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r3,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// addi r7,r11,158
	ctx.r7.s64 = ctx.r11.s64 + 158;
	// addi r6,r11,158
	ctx.r6.s64 = ctx.r11.s64 + 158;
	// rlwimi r8,r9,0,24,22
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r8.u64 & 0x100);
	// addi r5,r11,180
	ctx.r5.s64 = ctx.r11.s64 + 180;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r4,r11,180
	ctx.r4.s64 = ctx.r11.s64 + 180;
	// lhzx r9,r3,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sthx r9,r10,r6
	REX_STORE_U16(ctx.r10.u32 + ctx.r6.u32, ctx.r9.u16);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lhzx r31,r10,r6
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// addi r30,r11,28
	ctx.r30.s64 = ctx.r11.s64 + 28;
	// lbzx r7,r3,r5
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// addi r29,r11,160
	ctx.r29.s64 = ctx.r11.s64 + 160;
	// stbx r7,r10,r4
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r7.u8);
	// lis r4,-30320
	ctx.r4.s64 = -1987051520;
	// lwzx r7,r3,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r7,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r28,r4,9016
	ctx.r28.s64 = ctx.r4.s64 + 9016;
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwzx r30,r4,r8
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lhzx r5,r10,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r11,20
	ctx.r26.s64 = ctx.r11.s64 + 20;
	// add r27,r6,r7
	ctx.r27.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// add r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r31,r6,r8
	ctx.r31.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// stwx r30,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r30.u32);
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stwx r4,r10,r26
	REX_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r4.u32);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stwx r31,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r31.u32);
	// addi r7,r11,56
	ctx.r7.s64 = ctx.r11.s64 + 56;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// stwx r8,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u32);
	// rlwinm r5,r5,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// rlwinm r9,r9,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lwzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lhzx r5,r5,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// lhzx r6,r9,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 4;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// mullw r8,r6,r9
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lwzx r7,r3,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// stwx r8,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwzx r8,r3,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r4,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u32);
	// addi r7,r11,206
	ctx.r7.s64 = ctx.r11.s64 + 206;
	// addi r5,r11,200
	ctx.r5.s64 = ctx.r11.s64 + 200;
	// addi r8,r11,200
	ctx.r8.s64 = ctx.r11.s64 + 200;
	// lbzx r9,r10,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// lbzx r11,r3,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r7,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u8);
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899914E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899914F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r30,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mulli r4,r9,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwzx r3,r4,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// addi r8,r31,158
	ctx.r8.s64 = ctx.r31.s64 + 158;
	// rlwimi r3,r7,0,24,22
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r3.u64 & 0x100);
	// addi r10,r31,180
	ctx.r10.s64 = ctx.r31.s64 + 180;
	// stwx r3,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// addi r7,r31,180
	ctx.r7.s64 = ctx.r31.s64 + 180;
	// lhzx r6,r4,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// sthx r6,r30,r8
	REX_STORE_U16(ctx.r30.u32 + ctx.r8.u32, ctx.r6.u16);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lhzx r29,r30,r8
	ctx.r29.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r8.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lbzx r5,r4,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// addi r28,r31,160
	ctx.r28.s64 = ctx.r31.s64 + 160;
	// stbx r5,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r5.u8);
	// addi r27,r31,56
	ctx.r27.s64 = ctx.r31.s64 + 56;
	// lwzx r9,r4,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stwx r9,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwzx r26,r6,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r26,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r26.u32);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lhzx r5,r30,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r28,r30,r7
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// lwzx r6,r30,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// addi r27,r31,20
	ctx.r27.s64 = ctx.r31.s64 + 20;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r5,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r5.u32);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r3,r7,128
	ctx.r3.s64 = ctx.r7.s64 + 128;
	// addi r11,r11,9016
	ctx.r11.s64 = ctx.r11.s64 + 9016;
	// rlwinm r3,r3,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r26,r31,36
	ctx.r26.s64 = ctx.r31.s64 + 36;
	// lhzx r5,r3,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r7,r7,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r25,r31,32
	ctx.r25.s64 = ctx.r31.s64 + 32;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// stwx r8,r30,r26
	REX_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r8.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lhzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// stwx r9,r30,r25
	REX_STORE_U32(ctx.r30.u32 + ctx.r25.u32, ctx.r9.u32);
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// lwzx r7,r4,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stwx r5,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r5.u32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwzx r7,r4,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stwx r3,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r3.u32);
	// addi r6,r31,206
	ctx.r6.s64 = ctx.r31.s64 + 206;
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lbzx r7,r30,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// lbzx r10,r4,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stbx r5,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u8);
	// beq cr6,0x89991710
	if (ctx.cr6.eq) goto loc_89991710;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lwzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// rlwinm r7,r29,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r7,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lhzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r7,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0xFFFFC000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,14,0,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// add r28,r10,r8
	ctx.r28.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899916D8;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89991710
	if (ctx.cr6.eq) goto loc_89991710;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899916EC;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89991710
	if (!ctx.cr6.eq) goto loc_89991710;
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwzx r7,r30,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x899cda00
	ctx.lr = 0x89991710;
	sub_899CDA00(ctx, base);
loc_89991710:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899927B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x899927C0;
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
	// addi r20,r31,8
	ctx.r20.s64 = ctx.r31.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	// cmplwi cr6,r11,69
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 69, ctx.xer);
	// bgt cr6,0x899930dc
	if (ctx.cr6.gt) goto loc_899930DC;
	// lis r12,-30311
	ctx.r12.s64 = -1986461696;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10240
	ctx.r12.s64 = ctx.r12.s64 + 10240;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_89992918;
	case 1:
		goto loc_89992998;
	case 2:
		goto loc_899930DC;
	case 3:
		goto loc_899930DC;
	case 4:
		goto loc_899930DC;
	case 5:
		goto loc_899930DC;
	case 6:
		goto loc_899930DC;
	case 7:
		goto loc_899930DC;
	case 8:
		goto loc_899930DC;
	case 9:
		goto loc_899930DC;
	case 10:
		goto loc_899930DC;
	case 11:
		goto loc_899930DC;
	case 12:
		goto loc_899930DC;
	case 13:
		goto loc_899930DC;
	case 14:
		goto loc_899930DC;
	case 15:
		goto loc_899930DC;
	case 16:
		goto loc_899930DC;
	case 17:
		goto loc_899930DC;
	case 18:
		goto loc_899930DC;
	case 19:
		goto loc_899930DC;
	case 20:
		goto loc_899930DC;
	case 21:
		goto loc_899930DC;
	case 22:
		goto loc_899930DC;
	case 23:
		goto loc_899930DC;
	case 24:
		goto loc_899930DC;
	case 25:
		goto loc_899930DC;
	case 26:
		goto loc_899930DC;
	case 27:
		goto loc_899930DC;
	case 28:
		goto loc_899930DC;
	case 29:
		goto loc_899930DC;
	case 30:
		goto loc_899930DC;
	case 31:
		goto loc_899930DC;
	case 32:
		goto loc_899930DC;
	case 33:
		goto loc_899930DC;
	case 34:
		goto loc_89992A24;
	case 35:
		goto loc_89992AD0;
	case 36:
		goto loc_89992AD0;
	case 37:
		goto loc_89992D70;
	case 38:
		goto loc_89992E5C;
	case 39:
		goto loc_89992E84;
	case 40:
		goto loc_89992EAC;
	case 41:
		goto loc_89992ED4;
	case 42:
		goto loc_89992EFC;
	case 43:
		goto loc_89992F24;
	case 44:
		goto loc_89992F4C;
	case 45:
		goto loc_89992F74;
	case 46:
		goto loc_89992F9C;
	case 47:
		goto loc_89992F9C;
	case 48:
		goto loc_89992FC4;
	case 49:
		goto loc_89992F9C;
	case 50:
		goto loc_89992FEC;
	case 51:
		goto loc_89992F74;
	case 52:
		goto loc_8999303C;
	case 53:
		goto loc_89992F9C;
	case 54:
		goto loc_89993014;
	case 55:
		goto loc_89993064;
	case 56:
		goto loc_89992F9C;
	case 57:
		goto loc_89992F9C;
	case 58:
		goto loc_89992F74;
	case 59:
		goto loc_89992F4C;
	case 60:
		goto loc_8999308C;
	case 61:
		goto loc_89992F9C;
	case 62:
		goto loc_89992F9C;
	case 63:
		goto loc_89992F74;
	case 64:
		goto loc_89992F4C;
	case 65:
		goto loc_899930B4;
	case 66:
		goto loc_89992F9C;
	case 67:
		goto loc_89992F9C;
	case 68:
		goto loc_89992F74;
	case 69:
		goto loc_89992F4C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89992918:
	// addi r11,r31,183
	ctx.r11.s64 = ctx.r31.s64 + 183;
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// blt cr6,0x89992998
	if (ctx.cr6.lt) goto loc_89992998;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// stbx r9,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r7.u32);
loc_89992998:
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
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899929e4
	if (ctx.cr6.eq) goto loc_899929E4;
	// bl 0x8991c8b8
	ctx.lr = 0x899929D4;
	sub_8991C8B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c718
	ctx.lr = 0x899929DC;
	sub_8991C718(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899929E4:
	// bl 0x8991d6a8
	ctx.lr = 0x899929E8;
	sub_8991D6A8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899932b0
	if (ctx.cr6.eq) goto loc_899932B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899923b0
	ctx.lr = 0x899929FC;
	sub_899923B0(ctx, base);
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
	ctx.lr = 0x89992A1C;
	sub_8992E330(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992A24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992A2C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899930f0
	if (ctx.cr6.lt) goto loc_899930F0;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r30,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r9,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// lwzx r11,r30,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r6,r8,0,12,9
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// addi r8,r31,206
	ctx.r8.s64 = ctx.r31.s64 + 206;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r30,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// stwx r10,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r10.u32);
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r6,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r11,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u32);
	// lbzx r11,r30,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r7,r10,0,10,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300000;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwx r6,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbzx r10,r9,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stbx r5,r30,r4
	REX_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r5.u8);
	// bl 0x89932b18
	ctx.lr = 0x89992AB4;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932d30
	ctx.lr = 0x89992AC0;
	sub_89932D30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b770
	ctx.lr = 0x89992AC8;
	sub_8991B770(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992AD0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992AD8;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899930f0
	if (ctx.cr6.lt) goto loc_899930F0;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r30,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r25,r31,48
	ctx.r25.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// rlwinm r3,r8,0,12,9
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// lwzx r10,r30,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r26,r31,52
	ctx.r26.s64 = ctx.r31.s64 + 52;
	// addi r8,r31,206
	ctx.r8.s64 = ctx.r31.s64 + 206;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// stwx r7,r30,r25
	REX_STORE_U32(ctx.r30.u32 + ctx.r25.u32, ctx.r7.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// lwzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r24,r31,200
	ctx.r24.s64 = ctx.r31.s64 + 200;
	// stwx r3,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwzx r10,r30,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r9,r30,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// stwx r5,r30,r26
	REX_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r5.u32);
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r8,r4,0,10,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x300000;
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// lwzx r10,r30,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lbzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stbx r6,r30,r24
	REX_STORE_U8(ctx.r30.u32 + ctx.r24.u32, ctx.r6.u8);
	// beq cr6,0x89992cb0
	if (ctx.cr6.eq) goto loc_89992CB0;
	// addi r11,r31,183
	ctx.r11.s64 = ctx.r31.s64 + 183;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// beq cr6,0x89992b98
	if (ctx.cr6.eq) goto loc_89992B98;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x899932b0
	if (ctx.cr6.lt) goto loc_899932B0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x89992cf8
	goto loc_89992CF8;
loc_89992B98:
	// cmplwi cr6,r9,240
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 240, ctx.xer);
	// blt cr6,0x89992bb8
	if (ctx.cr6.lt) goto loc_89992BB8;
	// addi r10,r31,160
	ctx.r10.s64 = ctx.r31.s64 + 160;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stbx r9,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// sthx r8,r30,r10
	REX_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u16);
	// b 0x89992cf8
	goto loc_89992CF8;
loc_89992BB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89992BC8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899932b0
	if (ctx.cr6.eq) goto loc_899932B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932a38
	ctx.lr = 0x89992BD8;
	sub_89932A38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932cb0
	ctx.lr = 0x89992BE0;
	sub_89932CB0(ctx, base);
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// lwz r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,0
	ctx.r27.s64 = 0;
	// lhzx r23,r30,r11
	ctx.r23.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r29,r11,-13452
	ctx.r29.s64 = ctx.r11.s64 + -13452;
loc_89992BF8:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r30,r25
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// lwzx r10,r30,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	// cmplwi cr6,r10,35
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 35, ctx.xer);
	// lhzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x89992c38
	if (ctx.cr6.eq) goto loc_89992C38;
	// cmplwi cr6,r10,36
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 36, ctx.xer);
	// bne cr6,0x89992c4c
	if (!ctx.cr6.eq) goto loc_89992C4C;
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// lwzx r9,r30,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// subf r31,r7,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r7.u64;
	// b 0x89992c4c
	goto loc_89992C4C;
loc_89992C38:
	// addi r9,r29,2
	ctx.r9.s64 = ctx.r29.s64 + 2;
	// lwzx r10,r30,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_89992C4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbzx r5,r30,r24
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x89992C5C;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899932b0
	if (ctx.cr6.eq) goto loc_899932B0;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x89992C70;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899932b0
	if (!ctx.cr6.eq) goto loc_899932B0;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x899cba10
	ctx.lr = 0x89992C94;
	sub_899CBA10(ctx, base);
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x89992bf8
	if (ctx.cr6.lt) goto loc_89992BF8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992CB0:
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r11,0,10,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899932b0
	if (ctx.cr6.eq) goto loc_899932B0;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89992CD0;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899932b0
	if (ctx.cr6.eq) goto loc_899932B0;
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// rlwinm r10,r11,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stwx r10,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x89936360
	ctx.lr = 0x89992CEC;
	sub_89936360(ctx, base);
	// addi r9,r31,160
	ctx.r9.s64 = ctx.r31.s64 + 160;
	// li r8,1
	ctx.r8.s64 = 1;
	// sthx r8,r30,r9
	REX_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u16);
loc_89992CF8:
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// lwzx r9,r30,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
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
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r7.u32);
	// bne 0x899932b0
	if (!ctx.cr0.eq) goto loc_899932B0;
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// stwx r10,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992D70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992D78;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899930f0
	if (ctx.cr6.lt) goto loc_899930F0;
	// mulli r5,r11,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r4,r30,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// lwzx r11,r5,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// rlwinm r4,r4,0,12,9
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stwx r10,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r6,r30,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// addi r7,r31,206
	ctx.r7.s64 = ctx.r31.s64 + 206;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r31,200
	ctx.r27.s64 = ctx.r31.s64 + 200;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r31,20
	ctx.r25.s64 = ctx.r31.s64 + 20;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r8,r5,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// stwx r8,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r8.u32);
	// lwzx r8,r5,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r8,r8,0,10,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x300000;
	// or r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbzx r8,r5,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r10,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// stbx r3,r30,r27
	REX_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r3.u8);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r30,r26
	REX_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r30,r25
	REX_STORE_U32(ctx.r30.u32 + ctx.r25.u32, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r4,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r4.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992E5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992E64;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x8998f9d8
	ctx.lr = 0x89992E7C;
	sub_8998F9D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992E84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992E8C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x8998fcd8
	ctx.lr = 0x89992EA4;
	sub_8998FCD8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992EAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992EB4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x8998ffd8
	ctx.lr = 0x89992ECC;
	sub_8998FFD8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992ED4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992EDC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x899902d8
	ctx.lr = 0x89992EF4;
	sub_899902D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992EFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992F04;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x899905b8
	ctx.lr = 0x89992F1C;
	sub_899905B8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992F24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992F2C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x899908b8
	ctx.lr = 0x89992F44;
	sub_899908B8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992F4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992F54;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x89992150
	ctx.lr = 0x89992F6C;
	sub_89992150(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992F74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992F7C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x89990bb8
	ctx.lr = 0x89992F94;
	sub_89990BB8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992F9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992FA4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x89990da8
	ctx.lr = 0x89992FBC;
	sub_89990DA8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992FC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992FCC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x89990f30
	ctx.lr = 0x89992FE4;
	sub_89990F30(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89992FEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89992FF4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x89991e48
	ctx.lr = 0x8999300C;
	sub_89991E48(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89993014:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8999301C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x899919a0
	ctx.lr = 0x89993034;
	sub_899919A0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8999303C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89993044;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x89991c18
	ctx.lr = 0x8999305C;
	sub_89991C18(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89993064:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8999306C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x89991718
	ctx.lr = 0x89993084;
	sub_89991718(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_8999308C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89993094;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x89991160
	ctx.lr = 0x899930AC;
	sub_89991160(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899930B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899930BC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x899930f4
	if (ctx.cr6.lt) goto loc_899930F4;
	// bl 0x899914e8
	ctx.lr = 0x899930D4;
	sub_899914E8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899930DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899930E4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x89993100
	if (!ctx.cr6.lt) goto loc_89993100;
loc_899930F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_899930F4:
	// bl 0x899923b0
	ctx.lr = 0x899930F8;
	sub_899923B0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89993100:
	// mulli r28,r11,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
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
	// lwzx r11,r28,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
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
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// lwzx r11,r28,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// addi r24,r31,200
	ctx.r24.s64 = ctx.r31.s64 + 200;
	// stwx r8,r30,r23
	REX_STORE_U32(ctx.r30.u32 + ctx.r23.u32, ctx.r8.u32);
	// lbzx r10,r30,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// lwzx r7,r30,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// lwzx r6,r28,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r5,r6,0,10,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x300000;
	// or r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbzx r11,r28,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r3,r30,r24
	REX_STORE_U8(ctx.r30.u32 + ctx.r24.u32, ctx.r3.u8);
	// beq cr6,0x899932b0
	if (ctx.cr6.eq) goto loc_899932B0;
	// addi r21,r31,158
	ctx.r21.s64 = ctx.r31.s64 + 158;
	// addi r25,r31,197
	ctx.r25.s64 = ctx.r31.s64 + 197;
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// addi r26,r31,196
	ctx.r26.s64 = ctx.r31.s64 + 196;
	// lhzx r9,r28,r21
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r21.u32);
	// lbzx r8,r30,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r25.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// lbzx r6,r30,r26
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// addi r5,r11,512
	ctx.r5.s64 = ctx.r11.s64 + 512;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// srawi r3,r5,10
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 10;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stwx r11,r30,r20
	REX_STORE_U32(ctx.r30.u32 + ctx.r20.u32, ctx.r11.u32);
	// lhzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r10.u32);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// subf r8,r7,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r7.u64;
	// stwx r9,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r9.u32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subfe r4,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r3,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// subfe r11,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899932b0
	if (ctx.cr6.eq) goto loc_899932B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b610
	ctx.lr = 0x899931FC;
	sub_8991B610(ctx, base);
	// lwzx r10,r30,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r30,r25
	REX_STORE_U8(ctx.r30.u32 + ctx.r25.u32, ctx.r10.u8);
	// stbx r11,r30,r26
	REX_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r11.u8);
	// bne cr6,0x899932b0
	if (!ctx.cr6.eq) goto loc_899932B0;
	// addi r11,r31,168
	ctx.r11.s64 = ctx.r31.s64 + 168;
	// lhzx r10,r28,r21
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r21.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// srawi r9,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
	// lwzx r8,r28,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x89993240
	if (!ctx.cr6.gt) goto loc_89993240;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
loc_89993240:
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
	// lbzx r7,r30,r24
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
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
	ctx.lr = 0x899932B0;
	sub_899D7480(ctx, base);
loc_899932B0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89998608) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r5,r10,188
	ctx.r5.s64 = ctx.r10.s64 + 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbzx r6,r11,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bgt cr6,0x89998798
	if (ctx.cr6.gt) goto loc_89998798;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89998668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89998668;
	// bdzf 4*cr6+eq,0x89998680
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89998680;
	// bdzf 4*cr6+eq,0x899986f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899986F8;
	// bdzf 4*cr6+eq,0x89998680
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89998680;
	// bdzf 4*cr6+eq,0x899986f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899986F8;
	// bne cr6,0x89998770
	if (!ctx.cr6.eq) goto loc_89998770;
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// lis r8,272
	ctx.r8.s64 = 17825792;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x89998798
	if (!ctx.cr6.lt) goto loc_89998798;
	// b 0x8999878c
	goto loc_8999878C;
loc_89998668:
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addic. r9,r9,4096
	ctx.xer.ca = ctx.r9.u32 > 4294963199;
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// bne 0x89998798
	if (!ctx.cr0.eq) goto loc_89998798;
	// b 0x8999878c
	goto loc_8999878C;
loc_89998680:
	// addi r7,r10,189
	ctx.r7.s64 = ctx.r10.s64 + 189;
	// lbzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x899986dc
	if (ctx.cr6.lt) goto loc_899986DC;
	// bne cr6,0x89998798
	if (!ctx.cr6.eq) goto loc_89998798;
	// addi r8,r10,183
	ctx.r8.s64 = ctx.r10.s64 + 183;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// stbx r3,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u8);
	// cmplwi cr6,r3,240
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 240, ctx.xer);
	// blt cr6,0x89998798
	if (ctx.cr6.lt) goto loc_89998798;
	// addi r9,r10,192
	ctx.r9.s64 = ctx.r10.s64 + 192;
	// stbx r4,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u8);
	// stbx r4,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u8);
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// stbx r8,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u8);
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// rlwinm r8,r3,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x89998798
	goto loc_89998798;
loc_899986DC:
	// addi r9,r10,192
	ctx.r9.s64 = ctx.r10.s64 + 192;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r8,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u8);
	// lbzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// ori r8,r3,3
	ctx.r8.u64 = ctx.r3.u64 | 3;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x89998798
	goto loc_89998798;
loc_899986F8:
	// addi r7,r10,189
	ctx.r7.s64 = ctx.r10.s64 + 189;
	// lbzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x89998754
	if (ctx.cr6.lt) goto loc_89998754;
	// bne cr6,0x89998798
	if (!ctx.cr6.eq) goto loc_89998798;
	// addi r8,r10,183
	ctx.r8.s64 = ctx.r10.s64 + 183;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// stbx r3,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u8);
	// cmplwi cr6,r3,240
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 240, ctx.xer);
	// blt cr6,0x89998798
	if (ctx.cr6.lt) goto loc_89998798;
	// addi r9,r10,192
	ctx.r9.s64 = ctx.r10.s64 + 192;
	// stbx r4,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u8);
	// stbx r4,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u8);
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// stbx r8,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u8);
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// rlwinm r8,r3,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x89998798
	goto loc_89998798;
loc_89998754:
	// addi r9,r10,192
	ctx.r9.s64 = ctx.r10.s64 + 192;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r8,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u8);
	// lbzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// ori r8,r3,4
	ctx.r8.u64 = ctx.r3.u64 | 4;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x89998798
	goto loc_89998798;
loc_89998770:
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lis r7,-2
	ctx.r7.s64 = -131072;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,-4096
	ctx.r9.s64 = ctx.r9.s64 + -4096;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x89998798
	if (!ctx.cr6.eq) goto loc_89998798;
loc_8999878C:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
loc_89998798:
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addic. r9,r5,-160
	ctx.xer.ca = ctx.r5.u32 > 159;
	ctx.r9.s64 = ctx.r5.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x899987c4
	if (!ctx.cr0.lt) goto loc_899987C4;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899987C4:
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bgt cr6,0x89998800
	if (ctx.cr6.gt) goto loc_89998800;
	// addi r9,r10,52
	ctx.r9.s64 = ctx.r10.s64 + 52;
	// addi r8,r10,60
	ctx.r8.s64 = ctx.r10.s64 + 60;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addic. r9,r5,-512
	ctx.xer.ca = ctx.r5.u32 > 511;
	ctx.r9.s64 = ctx.r5.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x899987f8
	if (!ctx.cr0.lt) goto loc_899987F8;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899987F8:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_89998800:
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89999E20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89999E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-1072(r1)
	ea = -1072 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// sth r9,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// li r10,224
	ctx.r10.s64 = 224;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x89934b48
	ctx.lr = 0x89999E68;
	sub_89934B48(ctx, base);
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// lis r10,-30227
	ctx.r10.s64 = -1980956672;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-21092
	ctx.r29.s64 = ctx.r11.s64 + -21092;
	// addi r30,r10,-5288
	ctx.r30.s64 = ctx.r10.s64 + -5288;
loc_89999E7C:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_89999E88:
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
	// addi r7,r30,2344
	ctx.r7.s64 = ctx.r30.s64 + 2344;
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
loc_89999ED0:
	// lhzu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x89999ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89999ED0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x89999e88
	if (ctx.cr6.lt) goto loc_89999E88;
	// addi r9,r30,2344
	ctx.r9.s64 = ctx.r30.s64 + 2344;
	// mulli r10,r31,306
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(306));
	// mulli r11,r31,780
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(780));
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
	ctx.lr = 0x89999F14;
	sub_89935B08(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x89999e7c
	if (ctx.cr6.lt) goto loc_89999E7C;
	// addi r1,r1,1072
	ctx.r1.s64 = ctx.r1.s64 + 1072;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999A4C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x8999A4C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x8999A4D8;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8999a4e8
	if (!ctx.cr6.eq) goto loc_8999A4E8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_8999A4E8:
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// addi r29,r11,-12036
	ctx.r29.s64 = ctx.r11.s64 + -12036;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lhz r11,12272(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 12272);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// addi r31,r10,12800
	ctx.r31.s64 = ctx.r10.s64 + 12800;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// lhz r26,-4592(r8)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r8.u32 + -4592);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// srawi r4,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 7;
	// lhz r11,26864(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 26864);
	// extsh r7,r26
	ctx.r7.s64 = ctx.r26.s16;
	// addze r8,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r8.s64 = temp.s64;
	// mulli r30,r7,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// stwx r11,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u32);
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lis r3,-16208
	ctx.r3.s64 = -1062207488;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r7,r3,260
	ctx.r7.u64 = ctx.r3.u64 | 260;
	// li r25,0
	ctx.r25.s64 = 0;
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r25,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r25.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwzx r6,r27,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// stwx r6,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u32);
	// bl 0x8991b538
	ctx.lr = 0x8999A56C;
	sub_8991B538(ctx, base);
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bgt cr6,0x8999a604
	if (ctx.cr6.gt) goto loc_8999A604;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8999a5c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8999A5C4;
	// bdzf 4*cr6+eq,0x8999a588
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8999A588;
	// bne cr6,0x8999a5c4
	if (!ctx.cr6.eq) goto loc_8999A5C4;
loc_8999A588:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// lhzx r6,r27,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// lwzx r4,r27,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// rlwinm r3,r24,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// rotlwi r11,r6,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// stwx r3,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r3.u32);
	// stwx r11,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r25,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r25.u32);
	// stwx r4,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r4.u32);
	// b 0x8999a604
	goto loc_8999A604;
loc_8999A5C4:
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// extsh r11,r24
	ctx.r11.s64 = ctx.r24.s16;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r11,-352
	ctx.r7.s64 = ctx.r11.s64 + -352;
	// lhzx r6,r27,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r10.u32);
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// lwzx r4,r27,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// rotlwi r9,r6,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// stwx r10,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r9,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r9.u32);
	// stwx r25,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r25.u32);
	// stwx r4,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r4.u32);
loc_8999A604:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991c578
	ctx.lr = 0x8999A60C;
	sub_8991C578(ctx, base);
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// addi r9,r31,200
	ctx.r9.s64 = ctx.r31.s64 + 200;
	// li r11,116
	ctx.r11.s64 = 116;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r11,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999B730) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8999B738;
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
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8999b828
	if (ctx.cr6.lt) goto loc_8999B828;
	// bne cr6,0x8999b850
	if (!ctx.cr6.eq) goto loc_8999B850;
	// bl 0x8991b9f0
	ctx.lr = 0x8999B768;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8999b818
	if (ctx.cr6.lt) goto loc_8999B818;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// ori r8,r9,20077
	ctx.r8.u64 = ctx.r9.u64 | 20077;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// li r4,10
	ctx.r4.s64 = 10;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwzx r5,r30,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// addi r10,r31,207
	ctx.r10.s64 = ctx.r31.s64 + 207;
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// rlwinm r11,r6,19,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x3;
	// lwzx r6,r30,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lbzx r7,r30,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8999b7fc
	if (ctx.cr6.eq) goto loc_8999B7FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8999b7ec
	if (ctx.cr6.eq) goto loc_8999B7EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// lbzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// beq cr6,0x8999b7e4
	if (ctx.cr6.eq) goto loc_8999B7E4;
	// bl 0x899d4440
	ctx.lr = 0x8999B7E0;
	sub_899D4440(ctx, base);
	// b 0x8999b808
	goto loc_8999B808;
loc_8999B7E4:
	// bl 0x899d4e08
	ctx.lr = 0x8999B7E8;
	sub_899D4E08(ctx, base);
	// b 0x8999b808
	goto loc_8999B808;
loc_8999B7EC:
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// lbzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x899d4fb0
	ctx.lr = 0x8999B7F8;
	sub_899D4FB0(ctx, base);
	// b 0x8999b808
	goto loc_8999B808;
loc_8999B7FC:
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// lbzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x899d4c10
	ctx.lr = 0x8999B808;
	sub_899D4C10(ctx, base);
loc_8999B808:
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// oris r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 3145728;
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
loc_8999B818:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_8999B828:
	// addi r11,r31,207
	ctx.r11.s64 = ctx.r31.s64 + 207;
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r6,r30,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r5,r30,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r4,r30,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x899d5fd0
	ctx.lr = 0x8999B848;
	sub_899D5FD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c048
	ctx.lr = 0x8999B850;
	sub_8991C048(ctx, base);
loc_8999B850:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999C0E0) {
	REX_FUNC_PROLOGUE();
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8999C3F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8999C3F8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// bl 0x89934058
	ctx.lr = 0x8999C410;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999c574
	if (ctx.cr6.eq) goto loc_8999C574;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8991b880
	ctx.lr = 0x8999C420;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999c574
	if (ctx.cr6.eq) goto loc_8999C574;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// addi r11,r10,-4592
	ctx.r11.s64 = ctx.r10.s64 + -4592;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// addi r26,r11,-2
	ctx.r26.s64 = ctx.r11.s64 + -2;
	// extsh r8,r24
	ctx.r8.s64 = ctx.r24.s16;
	// addi r10,r9,-11892
	ctx.r10.s64 = ctx.r9.s64 + -11892;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mulli r29,r8,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// addi r23,r31,200
	ctx.r23.s64 = ctx.r31.s64 + 200;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r10,-2
	ctx.r30.s64 = ctx.r10.s64 + -2;
	// li r22,128
	ctx.r22.s64 = 128;
	// ori r25,r11,256
	ctx.r25.u64 = ctx.r11.u64 | 256;
	// b 0x8999c46c
	goto loc_8999C46C;
loc_8999C468:
	// lwz r21,268(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
loc_8999C46C:
	// lhzu r28,2(r26)
	ea = 2 + ctx.r26.u32;
	ctx.r28.u64 = REX_LOAD_U16(ea);
	ctx.r26.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// extsh r8,r28
	ctx.r8.s64 = ctx.r28.s16;
	// lbz r7,6(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// mulli r20,r8,208
	ctx.r20.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// stwx r21,r20,r11
	REX_STORE_U32(ctx.r20.u32 + ctx.r11.u32, ctx.r21.u32);
	// or r5,r10,r25
	ctx.r5.u64 = ctx.r10.u64 | ctx.r25.u64;
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r5,r20,r31
	REX_STORE_U32(ctx.r20.u32 + ctx.r31.u32, ctx.r5.u32);
	// stwx r4,r20,r9
	REX_STORE_U32(ctx.r20.u32 + ctx.r9.u32, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r11,r20,r6
	REX_STORE_U32(ctx.r20.u32 + ctx.r6.u32, ctx.r11.u32);
	// bl 0x8991b538
	ctx.lr = 0x8999C4B0;
	sub_8991B538(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991c578
	ctx.lr = 0x8999C4B8;
	sub_8991C578(ctx, base);
	// addi r10,r31,148
	ctx.r10.s64 = ctx.r31.s64 + 148;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lhz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 8);
	// addi r7,r31,150
	ctx.r7.s64 = ctx.r31.s64 + 150;
	// lhz r4,10(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 10);
	// addi r5,r31,150
	ctx.r5.s64 = ctx.r31.s64 + 150;
	// lhzu r9,12(r30)
	ea = 12 + ctx.r30.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r3,r31,154
	ctx.r3.s64 = ctx.r31.s64 + 154;
	// sthx r24,r20,r10
	REX_STORE_U16(ctx.r20.u32 + ctx.r10.u32, ctx.r24.u16);
	// addi r28,r31,154
	ctx.r28.s64 = ctx.r31.s64 + 154;
	// addi r21,r31,56
	ctx.r21.s64 = ctx.r31.s64 + 56;
	// addi r19,r31,48
	ctx.r19.s64 = ctx.r31.s64 + 48;
	// extsh r27,r8
	ctx.r27.s64 = ctx.r8.s16;
	// rotlwi r11,r6,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r18,r31,60
	ctx.r18.s64 = ctx.r31.s64 + 60;
	// addi r17,r31,52
	ctx.r17.s64 = ctx.r31.s64 + 52;
	// rotlwi r10,r4,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r16,r31,200
	ctx.r16.s64 = ctx.r31.s64 + 200;
	// addi r15,r31,64
	ctx.r15.s64 = ctx.r31.s64 + 64;
	// addi r14,r31,66
	ctx.r14.s64 = ctx.r31.s64 + 66;
	// lhzx r8,r29,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r7.u32);
	// clrlwi r7,r27,16
	ctx.r7.u64 = ctx.r27.u32 & 0xFFFF;
	// sthx r8,r20,r5
	REX_STORE_U16(ctx.r20.u32 + ctx.r5.u32, ctx.r8.u16);
	// lhzx r5,r29,r3
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r3.u32);
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// stwx r11,r20,r21
	REX_STORE_U32(ctx.r20.u32 + ctx.r21.u32, ctx.r11.u32);
	// sthx r5,r20,r28
	REX_STORE_U16(ctx.r20.u32 + ctx.r28.u32, ctx.r5.u16);
	// lwzx r8,r29,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r19.u32);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stwx r10,r20,r18
	REX_STORE_U32(ctx.r20.u32 + ctx.r18.u32, ctx.r10.u32);
	// stwx r3,r20,r6
	REX_STORE_U32(ctx.r20.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwzx r11,r29,r17
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r17.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r20,r4
	REX_STORE_U32(ctx.r20.u32 + ctx.r4.u32, ctx.r11.u32);
	// lbzx r11,r29,r23
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r23.u32);
	// addi r10,r11,254
	ctx.r10.s64 = ctx.r11.s64 + 254;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// sthx r9,r20,r15
	REX_STORE_U16(ctx.r20.u32 + ctx.r15.u32, ctx.r9.u16);
	// stbx r22,r20,r14
	REX_STORE_U8(ctx.r20.u32 + ctx.r14.u32, ctx.r22.u8);
	// stbx r8,r20,r16
	REX_STORE_U8(ctx.r20.u32 + ctx.r16.u32, ctx.r8.u8);
	// blt cr6,0x8999c468
	if (ctx.cr6.lt) goto loc_8999C468;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8999C574:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999D5E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r5,r10,188
	ctx.r5.s64 = ctx.r10.s64 + 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbzx r6,r11,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bgt cr6,0x8999d6d4
	if (ctx.cr6.gt) goto loc_8999D6D4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8999d640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8999D640;
	// bdzf 4*cr6+eq,0x8999d658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8999D658;
	// bdzf 4*cr6+eq,0x8999d658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8999D658;
	// bdzf 4*cr6+eq,0x8999d658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8999D658;
	// bdzf 4*cr6+eq,0x8999d658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8999D658;
	// bne cr6,0x8999d6ac
	if (!ctx.cr6.eq) goto loc_8999D6AC;
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8999d6d4
	if (ctx.cr6.gt) goto loc_8999D6D4;
	// b 0x8999d6c8
	goto loc_8999D6C8;
loc_8999D640:
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addic. r9,r9,4096
	ctx.xer.ca = ctx.r9.u32 > 4294963199;
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// bne 0x8999d6d4
	if (!ctx.cr0.eq) goto loc_8999D6D4;
	// b 0x8999d6c8
	goto loc_8999D6C8;
loc_8999D658:
	// addi r8,r10,189
	ctx.r8.s64 = ctx.r10.s64 + 189;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8999d6a0
	if (ctx.cr6.lt) goto loc_8999D6A0;
	// bne cr6,0x8999d6d4
	if (!ctx.cr6.eq) goto loc_8999D6D4;
	// addi r9,r10,183
	ctx.r9.s64 = ctx.r10.s64 + 183;
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// stbx r3,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u8);
	// cmplwi cr6,r3,240
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 240, ctx.xer);
	// bne cr6,0x8999d6d4
	if (!ctx.cr6.eq) goto loc_8999D6D4;
	// stbx r4,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u8);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stbx r4,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u8);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// b 0x8999d6d0
	goto loc_8999D6D0;
loc_8999D6A0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// b 0x8999d6d4
	goto loc_8999D6D4;
loc_8999D6AC:
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lis r7,-2
	ctx.r7.s64 = -131072;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,-4096
	ctx.r9.s64 = ctx.r9.s64 + -4096;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8999d6d4
	if (!ctx.cr6.eq) goto loc_8999D6D4;
loc_8999D6C8:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8999D6D0:
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
loc_8999D6D4:
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addic. r9,r5,-160
	ctx.xer.ca = ctx.r5.u32 > 159;
	ctx.r9.s64 = ctx.r5.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8999d700
	if (!ctx.cr0.lt) goto loc_8999D700;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_8999D700:
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bgt cr6,0x8999d73c
	if (ctx.cr6.gt) goto loc_8999D73C;
	// addi r9,r10,52
	ctx.r9.s64 = ctx.r10.s64 + 52;
	// addi r8,r10,60
	ctx.r8.s64 = ctx.r10.s64 + 60;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addic. r9,r5,-512
	ctx.xer.ca = ctx.r5.u32 > 511;
	ctx.r9.s64 = ctx.r5.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8999d734
	if (!ctx.cr0.lt) goto loc_8999D734;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_8999D734:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8999D73C:
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8999EDE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e8
	ctx.lr = 0x8999EDE8;
	__savegprlr_16(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30227
	ctx.r11.s64 = -1980956672;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r31,r11,14864
	ctx.r31.s64 = ctx.r11.s64 + 14864;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,3904
	ctx.r7.s64 = ctx.r31.s64 + 3904;
	// li r9,232
	ctx.r9.s64 = 232;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
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
	// li r3,85
	ctx.r3.s64 = 85;
	// bl 0x89934860
	ctx.lr = 0x8999EE28;
	sub_89934860(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r31,3904
	ctx.r30.s64 = ctx.r31.s64 + 3904;
loc_8999EE30:
	// addi r6,r31,5440
	ctx.r6.s64 = ctx.r31.s64 + 5440;
	// li r7,13
	ctx.r7.s64 = 13;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935700
	ctx.lr = 0x8999EE44;
	sub_89935700(ctx, base);
	// addi r11,r31,3904
	ctx.r11.s64 = ctx.r31.s64 + 3904;
	// addi r30,r30,306
	ctx.r30.s64 = ctx.r30.s64 + 306;
	// addi r11,r11,1530
	ctx.r11.s64 = ctx.r11.s64 + 1530;
	// addi r4,r4,780
	ctx.r4.s64 = ctx.r4.s64 + 780;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8999ee30
	if (ctx.cr6.lt) goto loc_8999EE30;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// addi r8,r10,9016
	ctx.r8.s64 = ctx.r10.s64 + 9016;
loc_8999EE70:
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// li r9,256
	ctx.r9.s64 = 256;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8999EE80:
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// addi r3,r5,128
	ctx.r3.s64 = ctx.r5.s64 + 128;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// rlwinm r5,r4,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r6,r6,128
	ctx.r6.s64 = ctx.r6.s64 + 128;
	// rlwinm r3,r3,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// rlwinm r6,r9,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// add r21,r22,r10
	ctx.r21.u64 = ctx.r22.u64 + ctx.r10.u64;
	// addi r23,r31,5440
	ctx.r23.s64 = ctx.r31.s64 + 5440;
	// lhzx r3,r3,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r8.u32);
	// addi r27,r31,5440
	ctx.r27.s64 = ctx.r31.s64 + 5440;
	// lhzx r4,r4,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// extsh r20,r5
	ctx.r20.s64 = ctx.r5.s16;
	// extsh r19,r3
	ctx.r19.s64 = ctx.r3.s16;
	// lhzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// addi r30,r31,5440
	ctx.r30.s64 = ctx.r31.s64 + 5440;
	// mulli r21,r21,52
	ctx.r21.s64 = static_cast<int64_t>(ctx.r21.u64 * static_cast<uint64_t>(52));
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r3,r31,5440
	ctx.r3.s64 = ctx.r31.s64 + 5440;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// rlwinm r18,r5,15,0,16
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// extsh r17,r6
	ctx.r17.s64 = ctx.r6.s16;
	// stwx r11,r21,r23
	REX_STORE_U32(ctx.r21.u32 + ctx.r23.u32, ctx.r11.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r24,r31,5440
	ctx.r24.s64 = ctx.r31.s64 + 5440;
	// stwx r11,r21,r27
	REX_STORE_U32(ctx.r21.u32 + ctx.r27.u32, ctx.r11.u32);
	// addi r25,r31,5440
	ctx.r25.s64 = ctx.r31.s64 + 5440;
	// stwx r11,r21,r30
	REX_STORE_U32(ctx.r21.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r26,r31,5440
	ctx.r26.s64 = ctx.r31.s64 + 5440;
	// addi r28,r31,5440
	ctx.r28.s64 = ctx.r31.s64 + 5440;
	// addi r29,r31,5440
	ctx.r29.s64 = ctx.r31.s64 + 5440;
	// stwx r11,r21,r3
	REX_STORE_U32(ctx.r21.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r4,r31,5440
	ctx.r4.s64 = ctx.r31.s64 + 5440;
	// addi r5,r31,5440
	ctx.r5.s64 = ctx.r31.s64 + 5440;
	// addi r6,r31,5440
	ctx.r6.s64 = ctx.r31.s64 + 5440;
	// rlwinm r20,r20,15,0,16
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r19,r19,15,0,16
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 15) & 0xFFFF8000;
	// srawi r18,r18,8
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFF) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 8;
	// addi r16,r31,5440
	ctx.r16.s64 = ctx.r31.s64 + 5440;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// addi r26,r26,20
	ctx.r26.s64 = ctx.r26.s64 + 20;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// rlwinm r23,r17,15,0,16
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 15) & 0xFFFF8000;
	// stwx r11,r21,r16
	REX_STORE_U32(ctx.r21.u32 + ctx.r16.u32, ctx.r11.u32);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// stwx r18,r21,r24
	REX_STORE_U32(ctx.r21.u32 + ctx.r24.u32, ctx.r18.u32);
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// addi r5,r5,44
	ctx.r5.s64 = ctx.r5.s64 + 44;
	// stwx r11,r21,r26
	REX_STORE_U32(ctx.r21.u32 + ctx.r26.u32, ctx.r11.u32);
	// addi r6,r6,40
	ctx.r6.s64 = ctx.r6.s64 + 40;
	// srawi r27,r20,8
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r20.s32 >> 8;
	// srawi r30,r19,8
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r19.s32 >> 8;
	// srawi r3,r23,8
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r23.s32 >> 8;
	// stwx r27,r21,r25
	REX_STORE_U32(ctx.r21.u32 + ctx.r25.u32, ctx.r27.u32);
	// stwx r30,r21,r28
	REX_STORE_U32(ctx.r21.u32 + ctx.r28.u32, ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r3,r21,r29
	REX_STORE_U32(ctx.r21.u32 + ctx.r29.u32, ctx.r3.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stwx r7,r21,r4
	REX_STORE_U32(ctx.r21.u32 + ctx.r4.u32, ctx.r7.u32);
	// stwx r7,r21,r5
	REX_STORE_U32(ctx.r21.u32 + ctx.r5.u32, ctx.r7.u32);
	// stwx r7,r21,r6
	REX_STORE_U32(ctx.r21.u32 + ctx.r6.u32, ctx.r7.u32);
	// bdnz 0x8999ee80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8999EE80;
	// addi r22,r22,17
	ctx.r22.s64 = ctx.r22.s64 + 17;
	// cmpwi cr6,r22,85
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 85, ctx.xer);
	// blt cr6,0x8999ee70
	if (ctx.cr6.lt) goto loc_8999EE70;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A02F8) {
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
	// lis r11,-30226
	ctx.r11.s64 = -1980891136;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r31,r11,-30176
	ctx.r31.s64 = ctx.r11.s64 + -30176;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// addi r8,r31,-288
	ctx.r8.s64 = ctx.r31.s64 + -288;
	// stb r9,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-8
	ctx.r9.s64 = -8;
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934b48
	ctx.lr = 0x899A034C;
	sub_89934B48(ctx, base);
	// lis r7,-30304
	ctx.r7.s64 = -1986002944;
	// addi r5,r31,-288
	ctx.r5.s64 = ctx.r31.s64 + -288;
	// addi r6,r7,-32212
	ctx.r6.s64 = ctx.r7.s64 + -32212;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935610
	ctx.lr = 0x899A0368;
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

DEFINE_REX_FUNC(sub_899A05A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// addi r7,r10,56
	ctx.r7.s64 = ctx.r10.s64 + 56;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addis r7,r9,-192
	ctx.r7.s64 = ctx.r9.s64 + -12582912;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x899a05e0
	if (!ctx.cr0.lt) goto loc_899A05E0;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_899A05E0:
	// lis r9,236
	ctx.r9.s64 = 15466496;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x899a05f8
	if (!ctx.cr6.gt) goto loc_899A05F8;
loc_899A05EC:
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_899A05F8:
	// addi r8,r10,52
	ctx.r8.s64 = ctx.r10.s64 + 52;
	// addi r9,r10,60
	ctx.r9.s64 = ctx.r10.s64 + 60;
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r7,-21584(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -21584);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// subf r6,r7,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r7.u64;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addis r9,r6,-120
	ctx.r9.s64 = ctx.r6.s64 + -7864320;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x899a062c
	if (!ctx.cr0.lt) goto loc_899A062C;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899A062C:
	// lis r8,132
	ctx.r8.s64 = 8650752;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x899a05ec
	if (ctx.cr6.gt) goto loc_899A05EC;
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// addi r5,r10,20
	ctx.r5.s64 = ctx.r10.s64 + 20;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// addi r4,r10,36
	ctx.r4.s64 = ctx.r10.s64 + 36;
	// addi r3,r10,32
	ctx.r3.s64 = ctx.r10.s64 + 32;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r8,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r7,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r6,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r5,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899A1570) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899A1578;
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
	ctx.lr = 0x899A158C;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a1824
	if (ctx.cr6.eq) goto loc_899A1824;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8991b880
	ctx.lr = 0x899A159C;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a1824
	if (ctx.cr6.eq) goto loc_899A1824;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r26,r10,-4592
	ctx.r26.s64 = ctx.r10.s64 + -4592;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// clrlwi r24,r30,16
	ctx.r24.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r11,-8016
	ctx.r11.s64 = -525336576;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// lhz r27,0(r26)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// extsh r7,r27
	ctx.r7.s64 = ctx.r27.s16;
	// li r25,0
	ctx.r25.s64 = 0;
	// mulli r30,r7,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// stwx r25,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r25.u32);
	// stwx r25,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r25.u32);
	// stwx r24,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r24.u32);
	// ori r6,r11,33028
	ctx.r6.u64 = ctx.r11.u64 | 33028;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r6,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
	// bl 0x8991b538
	ctx.lr = 0x899A15FC;
	sub_8991B538(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lis r5,384
	ctx.r5.s64 = 25165824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r5,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x89915d78
	ctx.lr = 0x899A1610;
	sub_89915D78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991c578
	ctx.lr = 0x899A1618;
	sub_8991C578(ctx, base);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// li r8,115
	ctx.r8.s64 = 115;
	// addi r4,r31,158
	ctx.r4.s64 = ctx.r31.s64 + 158;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// stbx r8,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u8);
	// li r6,256
	ctx.r6.s64 = 256;
	// stbx r25,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r25.u8);
	// ori r7,r9,32768
	ctx.r7.u64 = ctx.r9.u64 | 32768;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// sthx r6,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r6.u16);
	// stwx r7,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r7.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r29,r10,-10744
	ctx.r29.s64 = ctx.r10.s64 + -10744;
	// b 0x899a1664
	goto loc_899A1664;
loc_899A1658:
	// lwz r24,80(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r26,84(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_899A1664:
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// addi r7,r26,2
	ctx.r7.s64 = ctx.r26.s64 + 2;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// rlwinm r23,r8,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
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
	// lwzx r7,r23,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r29.u32);
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
	// lhzx r8,r8,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r26.u32);
	// sthx r27,r21,r4
	REX_STORE_U16(ctx.r21.u32 + ctx.r4.u32, ctx.r27.u16);
	// stwx r7,r21,r31
	REX_STORE_U32(ctx.r21.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r24,r21,r11
	REX_STORE_U32(ctx.r21.u32 + ctx.r11.u32, ctx.r24.u32);
	// stwx r10,r21,r9
	REX_STORE_U32(ctx.r21.u32 + ctx.r9.u32, ctx.r10.u32);
	// sthx r8,r21,r5
	REX_STORE_U16(ctx.r21.u32 + ctx.r5.u32, ctx.r8.u16);
	// stwx r25,r21,r6
	REX_STORE_U32(ctx.r21.u32 + ctx.r6.u32, ctx.r25.u32);
	// bl 0x8991b538
	ctx.lr = 0x899A16E4;
	sub_8991B538(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991c578
	ctx.lr = 0x899A16EC;
	sub_8991C578(ctx, base);
	// addi r7,r29,16
	ctx.r7.s64 = ctx.r29.s64 + 16;
	// addi r6,r29,12
	ctx.r6.s64 = ctx.r29.s64 + 12;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r5,r29,14
	ctx.r5.s64 = ctx.r29.s64 + 14;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lbzx r3,r23,r7
	ctx.r3.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r7.u32);
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// lhzx r7,r23,r6
	ctx.r7.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r6.u32);
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lhzx r6,r23,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r5.u32);
	// addi r8,r31,60
	ctx.r8.s64 = ctx.r31.s64 + 60;
	// addi r18,r29,18
	ctx.r18.s64 = ctx.r29.s64 + 18;
	// addi r17,r29,20
	ctx.r17.s64 = ctx.r29.s64 + 20;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// std r29,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// addi r25,r31,158
	ctx.r25.s64 = ctx.r31.s64 + 158;
	// addi r16,r29,21
	ctx.r16.s64 = ctx.r29.s64 + 21;
	// addi r24,r31,207
	ctx.r24.s64 = ctx.r31.s64 + 207;
	// lhzx r18,r23,r18
	ctx.r18.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r18.u32);
	// addi r22,r31,207
	ctx.r22.s64 = ctx.r31.s64 + 207;
	// lbzx r17,r23,r17
	ctx.r17.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r17.u32);
	// addi r20,r31,206
	ctx.r20.s64 = ctx.r31.s64 + 206;
	// rotlwi r7,r7,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// lbzx r23,r23,r16
	ctx.r23.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r16.u32);
	// li r19,256
	ctx.r19.s64 = 256;
	// lwzx r15,r30,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rotlwi r26,r3,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// addi r14,r31,200
	ctx.r14.s64 = ctx.r31.s64 + 200;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r31,204
	ctx.r29.s64 = ctx.r31.s64 + 204;
	// stwx r15,r21,r4
	REX_STORE_U32(ctx.r21.u32 + ctx.r4.u32, ctx.r15.u32);
	// addi r16,r31,64
	ctx.r16.s64 = ctx.r31.s64 + 64;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r4,r31,66
	ctx.r4.s64 = ctx.r31.s64 + 66;
	// stwx r10,r21,r9
	REX_STORE_U32(ctx.r21.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r15,r31,68
	ctx.r15.s64 = ctx.r31.s64 + 68;
	// stwx r7,r21,r5
	REX_STORE_U32(ctx.r21.u32 + ctx.r5.u32, ctx.r7.u32);
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// stwx r6,r21,r8
	REX_STORE_U32(ctx.r21.u32 + ctx.r8.u32, ctx.r6.u32);
	// sthx r19,r21,r25
	REX_STORE_U16(ctx.r21.u32 + ctx.r25.u32, ctx.r19.u16);
	// lbzx r8,r30,r24
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// stbx r8,r21,r22
	REX_STORE_U8(ctx.r21.u32 + ctx.r22.u32, ctx.r8.u8);
	// stbx r3,r21,r20
	REX_STORE_U8(ctx.r21.u32 + ctx.r20.u32, ctx.r3.u8);
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// add r7,r26,r11
	ctx.r7.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stbx r6,r21,r14
	REX_STORE_U8(ctx.r21.u32 + ctx.r14.u32, ctx.r6.u8);
	// lbzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// stbx r5,r21,r29
	REX_STORE_U8(ctx.r21.u32 + ctx.r29.u32, ctx.r5.u8);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r18,r21,r16
	REX_STORE_U16(ctx.r21.u32 + ctx.r16.u32, ctx.r18.u16);
	// stbx r17,r21,r4
	REX_STORE_U8(ctx.r21.u32 + ctx.r4.u32, ctx.r17.u8);
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 20, ctx.xer);
	// ld r29,88(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stwx r10,r21,r15
	REX_STORE_U32(ctx.r21.u32 + ctx.r15.u32, ctx.r10.u32);
	// stbx r23,r21,r9
	REX_STORE_U8(ctx.r21.u32 + ctx.r9.u32, ctx.r23.u8);
	// blt cr6,0x899a1658
	if (ctx.cr6.lt) goto loc_899A1658;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,74
	ctx.r3.s64 = 74;
	// stb r11,12342(r9)
	REX_STORE_U8(ctx.r9.u32 + 12342, ctx.r11.u8);
	// stb r10,32555(r8)
	REX_STORE_U8(ctx.r8.u32 + 32555, ctx.r10.u8);
	// bl 0x89934058
	ctx.lr = 0x899A1810;
	sub_89934058(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x89934058
	ctx.lr = 0x899A1818;
	sub_89934058(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_899A1824:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A57A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899A57B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30226
	ctx.r11.s64 = -1980891136;
	// li r23,8
	ctx.r23.s64 = 8;
	// addi r31,r11,-10104
	ctx.r31.s64 = ctx.r11.s64 + -10104;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r23,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r23.u16);
	// addi r11,r31,-336
	ctx.r11.s64 = ctx.r31.s64 + -336;
	// li r9,224
	ctx.r9.s64 = 224;
	// li r8,-17
	ctx.r8.s64 = -17;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x89934fb8
	ctx.lr = 0x899A57F0;
	sub_89934FB8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r31,-336
	ctx.r9.s64 = ctx.r31.s64 + -336;
	// addi r11,r31,-744
	ctx.r11.s64 = ctx.r31.s64 + -744;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r22,r8,3484
	ctx.r22.s64 = ctx.r8.s64 + 3484;
loc_899A5808:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r22,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,33
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 33, ctx.xer);
	// blt cr6,0x899a5808
	if (ctx.cr6.lt) goto loc_899A5808;
	// addi r8,r31,4624
	ctx.r8.s64 = ctx.r31.s64 + 4624;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r10,176
	ctx.r10.s64 = 176;
	// li r9,-46
	ctx.r9.s64 = -46;
	// sth r30,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r30.u16);
	// li r8,-40
	ctx.r8.s64 = -40;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x89934b48
	ctx.lr = 0x899A5870;
	sub_89934B48(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r5,r31,4624
	ctx.r5.s64 = ctx.r31.s64 + 4624;
	// addi r29,r11,32496
	ctx.r29.s64 = ctx.r11.s64 + 32496;
	// addi r4,r31,2352
	ctx.r4.s64 = ctx.r31.s64 + 2352;
	// addi r6,r29,-380
	ctx.r6.s64 = ctx.r29.s64 + -380;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935610
	ctx.lr = 0x899A5890;
	sub_89935610(ctx, base);
	// addi r11,r31,4624
	ctx.r11.s64 = ctx.r31.s64 + 4624;
	// addi r6,r29,-380
	ctx.r6.s64 = ctx.r29.s64 + -380;
	// addi r4,r31,2240
	ctx.r4.s64 = ctx.r31.s64 + 2240;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,288
	ctx.r5.s64 = ctx.r11.s64 + 288;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x899A58AC;
	sub_89935610(ctx, base);
	// addi r7,r31,2096
	ctx.r7.s64 = ctx.r31.s64 + 2096;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r30.u16);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r9,-41
	ctx.r9.s64 = -41;
	// li r8,-48
	ctx.r8.s64 = -48;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x89934b48
	ctx.lr = 0x899A58E0;
	sub_89934B48(ctx, base);
	// addi r11,r31,2096
	ctx.r11.s64 = ctx.r31.s64 + 2096;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r30.u16);
	// addi r6,r11,36
	ctx.r6.s64 = ctx.r11.s64 + 36;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r9,-41
	ctx.r9.s64 = -41;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r8,-48
	ctx.r8.s64 = -48;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x89934b48
	ctx.lr = 0x899A5918;
	sub_89934B48(ctx, base);
	// addi r6,r29,-532
	ctx.r6.s64 = ctx.r29.s64 + -532;
	// addi r5,r31,2096
	ctx.r5.s64 = ctx.r31.s64 + 2096;
	// addi r4,r31,2560
	ctx.r4.s64 = ctx.r31.s64 + 2560;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x899A5930;
	sub_89935610(ctx, base);
	// lis r5,-30233
	ctx.r5.s64 = -1981349888;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r26,r5,30460
	ctx.r26.s64 = ctx.r5.s64 + 30460;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r4,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// li r10,96
	ctx.r10.s64 = 96;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r9,-24
	ctx.r9.s64 = -24;
	// sth r3,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r3.u16);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x89934b48
	ctx.lr = 0x899A596C;
	sub_89934B48(ctx, base);
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r27,r11,30308
	ctx.r27.s64 = ctx.r11.s64 + 30308;
	// addi r6,r29,-20
	ctx.r6.s64 = ctx.r29.s64 + -20;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89935610
	ctx.lr = 0x899A598C;
	sub_89935610(ctx, base);
	// addi r6,r29,-20
	ctx.r6.s64 = ctx.r29.s64 + -20;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r27,24
	ctx.r4.s64 = ctx.r27.s64 + 24;
	// li r3,16385
	ctx.r3.s64 = 16385;
	// bl 0x89935610
	ctx.lr = 0x899A59A4;
	sub_89935610(ctx, base);
	// addi r8,r31,6656
	ctx.r8.s64 = ctx.r31.s64 + 6656;
	// li r10,104
	ctx.r10.s64 = 104;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-40
	ctx.r9.s64 = -40;
	// li r8,-28
	ctx.r8.s64 = -28;
	// sth r30,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r30.u16);
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934b48
	ctx.lr = 0x899A59D8;
	sub_89934B48(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_899A59DC:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r11,r31,6656
	ctx.r11.s64 = ctx.r31.s64 + 6656;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r29,1280
	ctx.r26.s64 = ctx.r29.s64 + 1280;
	// rlwinm r25,r30,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,5456
	ctx.r10.s64 = ctx.r31.s64 + 5456;
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r24,r8,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r6,r25,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// add r4,r24,r10
	ctx.r4.u64 = ctx.r24.u64 + ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89935610
	ctx.lr = 0x899A5A20;
	sub_89935610(ctx, base);
	// addi r11,r31,5456
	ctx.r11.s64 = ctx.r31.s64 + 5456;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r6,r25,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// addi r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 + 204;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,16385
	ctx.r3.s64 = 16385;
	// add r4,r24,r11
	ctx.r4.u64 = ctx.r24.u64 + ctx.r11.u64;
	// bl 0x89935610
	ctx.lr = 0x899A5A40;
	sub_89935610(ctx, base);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// blt cr6,0x899a59dc
	if (ctx.cr6.lt) goto loc_899A59DC;
	// addi r11,r31,1520
	ctx.r11.s64 = ctx.r31.s64 + 1520;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r23,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r23.u16);
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934b48
	ctx.lr = 0x899A5A88;
	sub_89934B48(ctx, base);
	// addi r11,r31,1520
	ctx.r11.s64 = ctx.r31.s64 + 1520;
	// li r10,-30715
	ctx.r10.s64 = -30715;
	// addi r9,r11,144
	ctx.r9.s64 = ctx.r11.s64 + 144;
	// li r8,96
	ctx.r8.s64 = 96;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// li r9,-16
	ctx.r9.s64 = -16;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x89934b48
	ctx.lr = 0x899A5AC8;
	sub_89934B48(ctx, base);
	// addi r11,r31,1520
	ctx.r11.s64 = ctx.r31.s64 + 1520;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r7,r11,378
	ctx.r7.s64 = ctx.r11.s64 + 378;
	// li r27,192
	ctx.r27.s64 = 192;
	// sth r30,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r30.u16);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r10,224
	ctx.r10.s64 = 224;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x89934b48
	ctx.lr = 0x899A5B08;
	sub_89934B48(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r31,1520
	ctx.r5.s64 = ctx.r31.s64 + 1520;
	// addi r4,r31,4224
	ctx.r4.s64 = ctx.r31.s64 + 4224;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935610
	ctx.lr = 0x899A5B20;
	sub_89935610(ctx, base);
	// addi r6,r31,3248
	ctx.r6.s64 = ctx.r31.s64 + 3248;
	// li r10,32
	ctx.r10.s64 = 32;
	// sth r23,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r23.u16);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,-16
	ctx.r9.s64 = -16;
	// li r8,-16
	ctx.r8.s64 = -16;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934b48
	ctx.lr = 0x899A5B54;
	sub_89934B48(ctx, base);
	// addi r11,r31,3248
	ctx.r11.s64 = ctx.r31.s64 + 3248;
	// li r10,224
	ctx.r10.s64 = 224;
	// sth r30,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r30.u16);
	// addi r5,r11,288
	ctx.r5.s64 = ctx.r11.s64 + 288;
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x89934b48
	ctx.lr = 0x899A5B8C;
	sub_89934B48(ctx, base);
	// addi r11,r31,3248
	ctx.r11.s64 = ctx.r31.s64 + 3248;
	// li r4,4
	ctx.r4.s64 = 4;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// sth r4,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r4.u16);
	// addi r3,r11,504
	ctx.r3.s64 = ctx.r11.s64 + 504;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r9,-16
	ctx.r9.s64 = -16;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934b48
	ctx.lr = 0x899A5BC8;
	sub_89934B48(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r31,3248
	ctx.r5.s64 = ctx.r31.s64 + 3248;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935610
	ctx.lr = 0x899A5BE0;
	sub_89935610(ctx, base);
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r31,3248
	ctx.r5.s64 = ctx.r31.s64 + 3248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,396
	ctx.r4.s64 = ctx.r11.s64 + 396;
	// li r3,16416
	ctx.r3.s64 = 16416;
	// bl 0x89935610
	ctx.lr = 0x899A5BFC;
	sub_89935610(ctx, base);
	// addi r11,r31,2672
	ctx.r11.s64 = ctx.r31.s64 + 2672;
	// li r10,-30716
	ctx.r10.s64 = -30716;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,128
	ctx.r9.s64 = 128;
	// sth r10,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r9,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// li r9,-16
	ctx.r9.s64 = -16;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934b48
	ctx.lr = 0x899A5C38;
	sub_89934B48(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r31,2672
	ctx.r5.s64 = ctx.r31.s64 + 2672;
	// addi r4,r31,5864
	ctx.r4.s64 = ctx.r31.s64 + 5864;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935610
	ctx.lr = 0x899A5C50;
	sub_89935610(ctx, base);
	// addi r11,r31,5864
	ctx.r11.s64 = ctx.r31.s64 + 5864;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r31,2672
	ctx.r5.s64 = ctx.r31.s64 + 2672;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,396
	ctx.r4.s64 = ctx.r11.s64 + 396;
	// li r3,16416
	ctx.r3.s64 = 16416;
	// bl 0x89935610
	ctx.lr = 0x899A5C6C;
	sub_89935610(ctx, base);
	// addi r8,r31,904
	ctx.r8.s64 = ctx.r31.s64 + 904;
	// li r10,128
	ctx.r10.s64 = 128;
	// sth r23,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r23.u16);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-16
	ctx.r9.s64 = -16;
	// li r8,-16
	ctx.r8.s64 = -16;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,274
	ctx.r5.s64 = 274;
	// li r4,265
	ctx.r4.s64 = 265;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x89934b48
	ctx.lr = 0x899A5CA0;
	sub_89934B48(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r31,904
	ctx.r5.s64 = ctx.r31.s64 + 904;
	// addi r4,r31,5056
	ctx.r4.s64 = ctx.r31.s64 + 5056;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x899A5CB8;
	sub_89935B08(ctx, base);
	// addi r11,r31,904
	ctx.r11.s64 = ctx.r31.s64 + 904;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r31,3824
	ctx.r4.s64 = ctx.r31.s64 + 3824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,306
	ctx.r5.s64 = ctx.r11.s64 + 306;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x899A5CD4;
	sub_89935B08(ctx, base);
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r7,r31,-824
	ctx.r7.s64 = ctx.r31.s64 + -824;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
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
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899A5D04;
	sub_89934FB8(ctx, base);
	// addi r9,r31,-824
	ctx.r9.s64 = ctx.r31.s64 + -824;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_899A5D10:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r22,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899a5d10
	if (ctx.cr6.lt) goto loc_899A5D10;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_899A5D44:
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r31,5864
	ctx.r11.s64 = ctx.r31.s64 + 5864;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r9,r11,768
	ctx.r9.s64 = ctx.r11.s64 + 768;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,5864
	ctx.r8.s64 = ctx.r31.s64 + 5864;
	// neg r11,r10
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// addi r6,r8,408
	ctx.r6.s64 = ctx.r8.s64 + 408;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r5,r5,768
	ctx.r5.s64 = ctx.r5.s64 + 768;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r31,112
	ctx.r6.s64 = ctx.r31.s64 + 112;
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r6,r6,408
	ctx.r6.s64 = ctx.r6.s64 + 408;
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,0(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r28,4(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,8(r10)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// cmpwi cr6,r7,15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 15, ctx.xer);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r4,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// stw r3,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// stw r5,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// stw r6,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// blt cr6,0x899a5d44
	if (ctx.cr6.lt) goto loc_899A5D44;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A9FF0) {
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
	// bl 0x899a9f48
	ctx.lr = 0x899AA008;
	sub_899A9F48(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r11,150
	ctx.r9.s64 = ctx.r11.s64 + 150;
	// addi r8,r11,72
	ctx.r8.s64 = ctx.r11.s64 + 72;
	// lhzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// mulli r6,r7,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lhzx r5,r6,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x899aa048
	if (!ctx.cr6.eq) goto loc_899AA048;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,0,12,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// rlwinm r7,r7,0,9,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_899AA048:
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

DEFINE_REX_FUNC(sub_899AA5F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899AA600;
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
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x899ab1d4
	if (ctx.cr6.gt) goto loc_899AB1D4;
	// lis r12,-30309
	ctx.r12.s64 = -1986330624;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-22976
	ctx.r12.s64 = ctx.r12.s64 + -22976;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899AA66C;
	case 1:
		goto loc_899AA884;
	case 2:
		goto loc_899AA8A4;
	case 3:
		goto loc_899AA9B0;
	case 4:
		goto loc_899AAB0C;
	case 5:
		goto loc_899AAB0C;
	case 6:
		goto loc_899AACF0;
	case 7:
		goto loc_899AABA0;
	case 8:
		goto loc_899AABA0;
	case 9:
		goto loc_899AAC34;
	case 10:
		goto loc_899AAB90;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899AA66C:
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899aa720
	if (ctx.cr6.eq) goto loc_899AA720;
	// bl 0x899a9880
	ctx.lr = 0x899AA688;
	sub_899A9880(ctx, base);
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,44
	ctx.r9.s64 = ctx.r30.s64 + 44;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x899aa6d4
	if (ctx.cr6.eq) goto loc_899AA6D4;
loc_899AA6A8:
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
	// blt cr6,0x899aa6a8
	if (ctx.cr6.lt) goto loc_899AA6A8;
	// b 0x899aa704
	goto loc_899AA704;
loc_899AA6D4:
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
loc_899AA6D8:
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
	// blt cr6,0x899aa6d8
	if (ctx.cr6.lt) goto loc_899AA6D8;
loc_899AA704:
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
	// b 0x899aa85c
	goto loc_899AA85C;
loc_899AA720:
	// bl 0x8991c8b8
	ctx.lr = 0x899AA724;
	sub_8991C8B8(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899aa738
	if (!ctx.cr6.eq) goto loc_899AA738;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x89936360
	ctx.lr = 0x899AA738;
	sub_89936360(ctx, base);
loc_899AA738:
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
	// blt cr6,0x899aa85c
	if (ctx.cr6.lt) goto loc_899AA85C;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// stbx r29,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u8);
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
	// clrlwi r28,r10,17
	ctx.r28.u64 = ctx.r10.u32 & 0x7FFF;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
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
	// rlwinm r28,r28,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r11,r8,12345
	ctx.r11.s64 = ctx.r8.s64 + 12345;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,-9212(r6)
	REX_STORE_U32(ctx.r6.u32 + -9212, ctx.r11.u32);
	// srawi r8,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 16;
	// lhzx r9,r28,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r5.u32);
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
	// addi r28,r5,-8048
	ctx.r28.s64 = ctx.r5.s64 + -8048;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r10,r30,200
	ctx.r10.s64 = ctx.r30.s64 + 200;
	// rlwinm r11,r8,30,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1FFF;
	// rlwinm r26,r9,19,30,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x3;
	// addi r27,r30,207
	ctx.r27.s64 = ctx.r30.s64 + 207;
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
	// lbzx r4,r26,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r28.u32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r31,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x899d4640
	ctx.lr = 0x899AA85C;
	sub_899D4640(ctx, base);
loc_899AA85C:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899ab1d4
	if (!ctx.cr6.eq) goto loc_899AB1D4;
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// addi r9,r10,9448
	ctx.r9.s64 = ctx.r10.s64 + 9448;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// stbx r29,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r29.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AA884:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899aa060
	ctx.lr = 0x899AA88C;
	sub_899AA060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899ab1d4
	if (!ctx.cr6.eq) goto loc_899AB1D4;
loc_899AA894:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_899AA898:
	// bl 0x899a9710
	ctx.lr = 0x899AA89C;
	sub_899A9710(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AA8A4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899AA8AC;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x899aa898
	if (ctx.cr6.lt) goto loc_899AA898;
	// bl 0x899a9f48
	ctx.lr = 0x899AA8C4;
	sub_899A9F48(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899aa90c
	if (ctx.cr6.eq) goto loc_899AA90C;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x899aa948
	if (!ctx.cr6.eq) goto loc_899AA948;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x899aa948
	if (!ctx.cr6.lt) goto loc_899AA948;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x899AA904;
	sub_8991B610(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AA90C:
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
	// bne cr6,0x899aa934
	if (!ctx.cr6.eq) goto loc_899AA934;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899ab1d4
	if (!ctx.cr6.eq) goto loc_899AB1D4;
loc_899AA934:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x899AA93C;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_899AA948:
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AA9B0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899AA9B8;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x899aa898
	if (ctx.cr6.lt) goto loc_899AA898;
	// bl 0x899a9f48
	ctx.lr = 0x899AA9D0;
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
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,29
	ctx.r11.u64 = ctx.r3.u32 & 0x7;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
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
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// bne cr6,0x899aaa88
	if (!ctx.cr6.eq) goto loc_899AAA88;
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x899aaa88
	if (!ctx.cr6.eq) goto loc_899AAA88;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r9,r11,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899aaa88
	if (ctx.cr6.eq) goto loc_899AAA88;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,16
	ctx.r9.s64 = 16;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x899AAA74;
	sub_8991B610(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AAA88:
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,196
	ctx.r10.s64 = ctx.r30.s64 + 196;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r9,r9,-8044
	ctx.r9.s64 = ctx.r9.s64 + -8044;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x8991db50
	ctx.lr = 0x899AAAC0;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ab1d4
	if (ctx.cr6.eq) goto loc_899AB1D4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932a38
	ctx.lr = 0x899AAAD0;
	sub_89932A38(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932cb0
	ctx.lr = 0x899AAAD8;
	sub_89932CB0(ctx, base);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addis r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 131072;
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x899cba78
	ctx.lr = 0x899AAB04;
	sub_899CBA78(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AAB0C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991baf8
	ctx.lr = 0x899AAB14;
	sub_8991BAF8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x899aa898
	if (ctx.cr6.lt) goto loc_899AA898;
	// bl 0x899a9f48
	ctx.lr = 0x899AAB2C;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AAB90:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899aa4a0
	ctx.lr = 0x899AAB98;
	sub_899AA4A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AABA0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991baf8
	ctx.lr = 0x899AABA8;
	sub_8991BAF8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899aabc8
	if (!ctx.cr6.lt) goto loc_899AABC8;
loc_899AABB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AABC8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899a9f48
	ctx.lr = 0x899AABD0;
	sub_899A9F48(ctx, base);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
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
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AAC34:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991baf8
	ctx.lr = 0x899AAC3C;
	sub_8991BAF8(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x899aabb8
	if (ctx.cr6.lt) goto loc_899AABB8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x899a9f48
	ctx.lr = 0x899AAC54;
	sub_899A9F48(ctx, base);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
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
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwzx r8,r29,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AACF0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991ba70
	ctx.lr = 0x899AACF8;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899aa894
	if (ctx.cr6.lt) goto loc_899AA894;
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
	// addi r25,r11,9016
	ctx.r25.s64 = ctx.r11.s64 + 9016;
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
	// beq cr6,0x899aae04
	if (ctx.cr6.eq) goto loc_899AAE04;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r30,44
	ctx.r6.s64 = ctx.r30.s64 + 44;
	// divw r3,r5,r7
	ctx.r3.u64 = uint32_t((ctx.r7.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r5.s32 / ctx.r7.s32 : 0);
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// srawi r8,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 4;
	// rlwinm r4,r9,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lwzx r10,r28,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// lhzx r7,r4,r25
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r25.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mullw r4,r6,r8
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// srawi. r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x899aad74
	if (!ctx.cr0.lt) goto loc_899AAD74;
	// neg r4,r4
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r4.u64);
loc_899AAD74:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lwzx r6,r31,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r29,r31,r8
	ctx.r29.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// srawi r7,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// lhzx r27,r31,r10
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// rotlwi r6,r3,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// subf r4,r4,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r4.u64;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// stw r4,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// srawi r7,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 8;
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sthx r6,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u16);
	// rotlwi r10,r5,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lhzx r3,r4,r25
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r25.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// add r26,r31,r8
	ctx.r26.u64 = ctx.r31.u64 + ctx.r8.u64;
	// rlwinm r8,r9,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// b 0x899aae40
	goto loc_899AAE40;
loc_899AAE04:
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r26,r31,r11
	ctx.r26.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stw r6,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// lwzx r11,r28,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r5.u32);
loc_899AAE40:
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
	// lwzx r7,r28,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// and r6,r7,r12
	ctx.r6.u64 = ctx.r7.u64 & ctx.r12.u64;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x899aae9c
	if (ctx.cr6.lt) goto loc_899AAE9C;
	// bne cr6,0x899aaebc
	if (!ctx.cr6.eq) goto loc_899AAEBC;
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
	// bne cr6,0x899aaebc
	if (!ctx.cr6.eq) goto loc_899AAEBC;
	// b 0x899aaeb0
	goto loc_899AAEB0;
loc_899AAE9C:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899aaebc
	if (ctx.cr6.eq) goto loc_899AAEBC;
loc_899AAEB0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
loc_899AAEBC:
	// addi r27,r30,188
	ctx.r27.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x899ab1cc
	if (ctx.cr6.gt) goto loc_899AB1CC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899aaf70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AAF70;
	// bdzf 4*cr6+eq,0x899ab024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AB024;
	// bne cr6,0x899ab068
	if (!ctx.cr6.eq) goto loc_899AB068;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932b18
	ctx.lr = 0x899AAEEC;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x89932d30
	ctx.lr = 0x899AAEF8;
	sub_89932D30(ctx, base);
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r7,r28,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899ab008
	if (!ctx.cr6.eq) goto loc_899AB008;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899ab1cc
	if (ctx.cr6.eq) goto loc_899AB1CC;
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// add r27,r28,r11
	ctx.r27.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r28,r10,-7984
	ctx.r28.s64 = ctx.r10.s64 + -7984;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r9,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// bl 0x8991db50
	ctx.lr = 0x899AAF58;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899ab0d8
	if (!ctx.cr6.eq) goto loc_899AB0D8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b770
	ctx.lr = 0x899AAF68;
	sub_8991B770(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AAF70:
	// addi r8,r30,162
	ctx.r8.s64 = ctx.r30.s64 + 162;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// li r7,0
	ctx.r7.s64 = 0;
loc_899AAF7C:
	// lhzx r9,r28,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r8.u32);
	// lhzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// subf r4,r6,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r6.u64;
	// clrlwi r9,r4,23
	ctx.r9.u64 = ctx.r4.u32 & 0x1FF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899aafe8
	if (ctx.cr6.eq) goto loc_899AAFE8;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// ble cr6,0x899aafb0
	if (!ctx.cr6.gt) goto loc_899AAFB0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// sthx r11,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u16);
loc_899AAFB0:
	// bge cr6,0x899aafc0
	if (!ctx.cr6.lt) goto loc_899AAFC0;
	// lhzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
loc_899AAFC0:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x899aaf7c
	if (ctx.cr6.lt) goto loc_899AAF7C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b770
	ctx.lr = 0x899AAFE0;
	sub_8991B770(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AAFE8:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,194
	ctx.r11.s64 = ctx.r30.s64 + 194;
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
loc_899AB008:
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u8);
	// bl 0x8991b770
	ctx.lr = 0x899AB01C;
	sub_8991B770(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AB024:
	// addi r10,r30,197
	ctx.r10.s64 = ctx.r30.s64 + 197;
	// addi r9,r30,194
	ctx.r9.s64 = ctx.r30.s64 + 194;
	// lbzx r8,r28,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// lbzx r7,r28,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// subfic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r4.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// clrlwi r10,r3,26
	ctx.r10.u64 = ctx.r3.u32 & 0x3F;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x899ab1cc
	if (!ctx.cr6.eq) goto loc_899AB1CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
	// bl 0x8991b770
	ctx.lr = 0x899AB060;
	sub_8991B770(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AB068:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r7,r28,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899ab0a0
	if (!ctx.cr6.eq) goto loc_899AB0A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
	// bl 0x8991b770
	ctx.lr = 0x899AB098;
	sub_8991B770(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899AB0A0:
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// add r27,r28,r11
	ctx.r27.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r28,r10,-7984
	ctx.r28.s64 = ctx.r10.s64 + -7984;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// bl 0x8991db50
	ctx.lr = 0x899AB0D0;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ab1cc
	if (ctx.cr6.eq) goto loc_899AB1CC;
loc_899AB0D8:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lbz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lwz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// ori r4,r9,20077
	ctx.r4.u64 = ctx.r9.u64 | 20077;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r31,r6,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwzx r31,r31,r5
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r10,r9,128
	ctx.r10.s64 = ctx.r9.s64 + 128;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhzx r10,r4,r25
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r25.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhzx r4,r11,r25
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r6,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0xFFFF8000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0xFFFF8000;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// srawi r6,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 16;
	// add r30,r11,r7
	ctx.r30.u64 = ctx.r11.u64 + ctx.r7.u64;
	// clrlwi r11,r6,17
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFF;
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0x1FFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// extsh r28,r4
	ctx.r28.s64 = ctx.r4.s16;
	// bl 0x8991b880
	ctx.lr = 0x899AB194;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ab1cc
	if (ctx.cr6.eq) goto loc_899AB1CC;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r8,r11,-4592
	ctx.r8.s64 = ctx.r11.s64 + -4592;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89997d48
	ctx.lr = 0x899AB1BC;
	sub_89997D48(ctx, base);
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// addi r9,r10,-18292
	ctx.r9.s64 = ctx.r10.s64 + -18292;
	// lbz r3,16(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 16);
	// bl 0x89936360
	ctx.lr = 0x899AB1CC;
	sub_89936360(ctx, base);
loc_899AB1CC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8991b770
	ctx.lr = 0x899AB1D4;
	sub_8991B770(ctx, base);
loc_899AB1D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B56B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x899B56B8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addi r29,r11,12800
	ctx.r29.s64 = ctx.r11.s64 + 12800;
	// mulli r30,r3,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(208));
	// addi r6,r29,188
	ctx.r6.s64 = ctx.r29.s64 + 188;
	// lbzx r7,r30,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x899b59d0
	if (ctx.cr6.lt) goto loc_899B59D0;
	// beq cr6,0x899b57a4
	if (ctx.cr6.eq) goto loc_899B57A4;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bge cr6,0x899b5c80
	if (!ctx.cr6.lt) goto loc_899B5C80;
	// addi r9,r29,189
	ctx.r9.s64 = ctx.r29.s64 + 189;
	// lbzx r10,r30,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899b5788
	if (ctx.cr6.lt) goto loc_899B5788;
	// beq cr6,0x899b5758
	if (ctx.cr6.eq) goto loc_899B5758;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x899b5c80
	if (!ctx.cr6.lt) goto loc_899B5C80;
	// addi r10,r29,56
	ctx.r10.s64 = ctx.r29.s64 + 56;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x899b5728
	if (!ctx.cr6.gt) goto loc_899B5728;
	// addi r11,r11,-512
	ctx.r11.s64 = ctx.r11.s64 + -512;
	// stwx r11,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899B5728:
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lwzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899b5c80
	if (ctx.cr6.gt) goto loc_899B5C80;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r9.u32);
	// lbz r11,12342(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 12342);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stb r8,12342(r10)
	REX_STORE_U8(ctx.r10.u32 + 12342, ctx.r8.u8);
	// b 0x899b5c80
	goto loc_899B5C80;
loc_899B5758:
	// addi r11,r29,183
	ctx.r11.s64 = ctx.r29.s64 + 183;
	// lbzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r7.u8);
	// cmplwi cr6,r7,240
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 240, ctx.xer);
	// blt cr6,0x899b5c80
	if (ctx.cr6.lt) goto loc_899B5C80;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r8,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r7,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x899b5c80
	goto loc_899B5C80;
loc_899B5788:
	// addi r11,r29,192
	ctx.r11.s64 = ctx.r29.s64 + 192;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u8);
	// lbzx r6,r30,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// ori r5,r6,15
	ctx.r5.u64 = ctx.r6.u64 | 15;
	// stbx r5,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r5.u8);
	// b 0x899b5c80
	goto loc_899B5C80;
loc_899B57A4:
	// addi r11,r29,164
	ctx.r11.s64 = ctx.r29.s64 + 164;
	// addi r31,r29,189
	ctx.r31.s64 = ctx.r29.s64 + 189;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r9,r30,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stwx r8,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u32);
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bgt cr6,0x899b5c80
	if (ctx.cr6.gt) goto loc_899B5C80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899b5834
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B5834;
	// bdzf 4*cr6+eq,0x899b5868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B5868;
	// bdzf 4*cr6+eq,0x899b58d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B58D0;
	// bdzf 4*cr6+eq,0x899b5834
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B5834;
	// bdzf 4*cr6+eq,0x899b5950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B5950;
	// bne cr6,0x899b5990
	if (!ctx.cr6.eq) goto loc_899B5990;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// addi r10,r29,192
	ctx.r10.s64 = ctx.r29.s64 + 192;
	// ori r6,r7,20077
	ctx.r6.u64 = ctx.r7.u64 | 20077;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// stbx r5,r30,r31
	REX_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u8);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lbzx r4,r30,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// srawi r7,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 16;
	// rlwinm r6,r7,0,31,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// stbx r4,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r4.u8);
	// b 0x899b5c80
	goto loc_899B5C80;
loc_899B5834:
	// addi r11,r29,183
	ctx.r11.s64 = ctx.r29.s64 + 183;
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplwi cr6,r8,30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 30, ctx.xer);
	// blt cr6,0x899b5c80
	if (ctx.cr6.lt) goto loc_899B5C80;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r30,r31
	REX_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u8);
	// b 0x899b5c80
	goto loc_899B5C80;
loc_899B5868:
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8991d830
	ctx.lr = 0x899B587C;
	sub_8991D830(ctx, base);
	// addi r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 + 100;
	// addi r10,r29,48
	ctx.r10.s64 = ctx.r29.s64 + 48;
	// lbzx r5,r30,r31
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// addi r8,r29,104
	ctx.r8.s64 = ctx.r29.s64 + 104;
	// addi r9,r29,52
	ctx.r9.s64 = ctx.r29.s64 + 52;
	// addi r7,r29,56
	ctx.r7.s64 = ctx.r29.s64 + 56;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r6,r29,60
	ctx.r6.s64 = ctx.r29.s64 + 60;
	// lwzx r3,r30,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stbx r5,r30,r31
	REX_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u8);
	// lwzx r10,r30,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// subf r8,r3,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r3.u64;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// srawi r3,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 7;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stwx r3,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// srawi r11,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 7;
	// stwx r11,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u32);
	// b 0x899b5c80
	goto loc_899B5C80;
loc_899B58D0:
	// addi r8,r29,183
	ctx.r8.s64 = ctx.r29.s64 + 183;
	// lbzx r11,r30,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u8);
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// blt cr6,0x899b5c80
	if (ctx.cr6.lt) goto loc_899B5C80;
	// addi r10,r29,185
	ctx.r10.s64 = ctx.r29.s64 + 185;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r29,60
	ctx.r7.s64 = ctx.r29.s64 + 60;
	// stbx r11,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r6,r29,56
	ctx.r6.s64 = ctx.r29.s64 + 56;
	// lbzx r8,r30,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// stwx r11,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r11,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u32);
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stbx r4,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r4.u8);
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x899b5940
	if (ctx.cr6.lt) goto loc_899B5940;
	// stbx r11,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r29,192
	ctx.r10.s64 = ctx.r29.s64 + 192;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,14
	ctx.r9.s64 = 14;
	// stbx r11,r30,r31
	REX_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
	// stbx r9,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x899b5c80
	goto loc_899B5C80;
loc_899B5940:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stbx r11,r30,r31
	REX_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x899b5c80
	goto loc_899B5C80;
loc_899B5950:
	// addi r10,r29,183
	ctx.r10.s64 = ctx.r29.s64 + 183;
	// lbzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stbx r8,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u8);
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// blt cr6,0x899b5c80
	if (ctx.cr6.lt) goto loc_899B5C80;
	// addi r11,r29,192
	ctx.r11.s64 = ctx.r29.s64 + 192;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stbx r7,r30,r31
	REX_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u8);
	// lbzx r6,r30,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// rlwinm r3,r4,0,31,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// stbx r3,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u8);
	// b 0x899b5c7c
	goto loc_899B5C7C;
loc_899B5990:
	// addi r10,r29,183
	ctx.r10.s64 = ctx.r29.s64 + 183;
	// lbzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stbx r9,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u8);
	// cmplwi cr6,r9,60
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 60, ctx.xer);
	// blt cr6,0x899b5c80
	if (ctx.cr6.lt) goto loc_899B5C80;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,10800
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10800, ctx.xer);
	// stbx r11,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// ble cr6,0x899b59c8
	if (!ctx.cr6.gt) goto loc_899B59C8;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r10.u8);
loc_899B59C8:
	// stbx r11,r30,r31
	REX_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x899b5c80
	goto loc_899B5C80;
loc_899B59D0:
	// addi r23,r29,189
	ctx.r23.s64 = ctx.r29.s64 + 189;
	// lbzx r9,r30,r23
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x899b5c68
	if (ctx.cr6.gt) goto loc_899B5C68;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899b5bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B5BDC;
	// bdzf 4*cr6+eq,0x899b5c0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899B5C0C;
	// bne cr6,0x899b5c40
	if (!ctx.cr6.eq) goto loc_899B5C40;
	// lis r10,16838
	ctx.r10.s64 = 1103495168;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r28,4
	ctx.r28.s64 = 4;
	// ori r31,r10,20077
	ctx.r31.u64 = ctx.r10.u64 | 20077;
	// lis r24,-6
	ctx.r24.s64 = -393216;
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// addi r25,r11,-2448
	ctx.r25.s64 = ctx.r11.s64 + -2448;
loc_899B5A14:
	// lwz r11,-9212(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -9212);
	// addi r10,r29,200
	ctx.r10.s64 = ctx.r29.s64 + 200;
	// addi r26,r29,48
	ctx.r26.s64 = ctx.r29.s64 + 48;
	// lwzx r3,r30,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// lbzx r4,r30,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r22,r29,207
	ctx.r22.s64 = ctx.r29.s64 + 207;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r8,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 16;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r7,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 16;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r21,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r21.s64 = ctx.r5.s32 >> 16;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r20,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r20.s64 = ctx.r9.s32 >> 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r27)
	REX_STORE_U32(ctx.r27.u32 + -9212, ctx.r11.u32);
	// clrlwi r10,r7,17
	ctx.r10.u64 = ctx.r7.u32 & 0x7FFF;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// clrlwi r9,r6,17
	ctx.r9.u64 = ctx.r6.u32 & 0x7FFF;
	// rlwinm r7,r10,14,0,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r5,r8,24,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x7F;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r5,-64
	ctx.r7.s64 = ctx.r5.s64 + -64;
	// lwzx r5,r30,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r19,r11,r8
	ctx.r19.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r10,17,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFF;
	// rlwinm r8,r6,23,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0xFFFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r10,r20,19,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 19) & 0x3;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbzx r7,r30,r22
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r22.u32);
	// addi r8,r8,352
	ctx.r8.s64 = ctx.r8.s64 + 352;
	// addi r9,r9,-8192
	ctx.r9.s64 = ctx.r9.s64 + -8192;
	// rlwinm r4,r19,17,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 17) & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r22,r21,3,16,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFF8;
	// rlwinm r6,r8,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r22,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r22.u64;
	// lbzx r4,r4,r25
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// bl 0x899d4640
	ctx.lr = 0x899B5B08;
	sub_899D4640(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x899b5a14
	if (!ctx.cr0.eq) goto loc_899B5A14;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899b5b5c
	if (ctx.cr6.eq) goto loc_899B5B5C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899b5b5c
	if (ctx.cr6.eq) goto loc_899B5B5C;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x899b5b5c
	if (!ctx.cr6.lt) goto loc_899B5B5C;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bge cr6,0x899b5b5c
	if (!ctx.cr6.lt) goto loc_899B5B5C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
loc_899B5B5C:
	// lwz r10,696(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 696);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899b5b98
	if (ctx.cr6.eq) goto loc_899B5B98;
	// lwz r10,708(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 708);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899b5b98
	if (ctx.cr6.eq) goto loc_899B5B98;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x899b5b98
	if (!ctx.cr6.lt) goto loc_899B5B98;
	// lwz r10,720(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 720);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r10,720(r11)
	REX_STORE_U32(ctx.r11.u32 + 720, ctx.r10.u32);
	// bge cr6,0x899b5b98
	if (!ctx.cr6.lt) goto loc_899B5B98;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,720(r11)
	REX_STORE_U32(ctx.r11.u32 + 720, ctx.r9.u32);
loc_899B5B98:
	// lwzx r11,r30,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899b5c68
	if (ctx.cr6.gt) goto loc_899B5C68;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,9656
	ctx.r9.s64 = ctx.r10.s64 + 9656;
	// li r3,78
	ctx.r3.s64 = 78;
	// stw r11,276(r9)
	REX_STORE_U32(ctx.r9.u32 + 276, ctx.r11.u32);
	// bl 0x89936360
	ctx.lr = 0x899B5BC0;
	sub_89936360(ctx, base);
	// lbzx r11,r30,r23
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// lwzx r7,r30,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// stbx r5,r30,r23
	REX_STORE_U8(ctx.r30.u32 + ctx.r23.u32, ctx.r5.u8);
	// stwx r6,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r6.u32);
	// b 0x899b5c68
	goto loc_899B5C68;
loc_899B5BDC:
	// addi r10,r29,56
	ctx.r10.s64 = ctx.r29.s64 + 56;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addic. r11,r11,4096
	ctx.xer.ca = ctx.r11.u32 > 4294963199;
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// bne 0x899b5c68
	if (!ctx.cr0.eq) goto loc_899B5C68;
	// addi r10,r29,71
	ctx.r10.s64 = ctx.r29.s64 + 71;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r8,255
	ctx.r8.s64 = 255;
	// stbx r9,r30,r23
	REX_STORE_U8(ctx.r30.u32 + ctx.r23.u32, ctx.r9.u8);
	// stbx r8,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x899b5c68
	goto loc_899B5C68;
loc_899B5C0C:
	// addi r11,r29,71
	ctx.r11.s64 = ctx.r29.s64 + 71;
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 + 252;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bgt cr6,0x899b5c68
	if (ctx.cr6.gt) goto loc_899B5C68;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stbx r9,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r30,r23
	REX_STORE_U8(ctx.r30.u32 + ctx.r23.u32, ctx.r8.u8);
	// b 0x899b5c68
	goto loc_899B5C68;
loc_899B5C40:
	// lwzx r9,r30,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// addi r8,r29,164
	ctx.r8.s64 = ctx.r29.s64 + 164;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r4,r9,0,3,1
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stbx r11,r30,r23
	REX_STORE_U8(ctx.r30.u32 + ctx.r23.u32, ctx.r11.u8);
	// stwx r11,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// stbx r7,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r7.u8);
	// stwx r4,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r4.u32);
loc_899B5C68:
	// addi r11,r29,71
	ctx.r11.s64 = ctx.r29.s64 + 71;
	// addi r9,r29,69
	ctx.r9.s64 = ctx.r29.s64 + 69;
	// addi r10,r29,70
	ctx.r10.s64 = ctx.r29.s64 + 70;
	// lbzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// stbx r8,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u8);
loc_899B5C7C:
	// stbx r8,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u8);
loc_899B5C80:
	// addi r9,r29,56
	ctx.r9.s64 = ctx.r29.s64 + 56;
	// addi r10,r29,48
	ctx.r10.s64 = ctx.r29.s64 + 48;
	// addi r11,r29,52
	ctx.r11.s64 = ctx.r29.s64 + 52;
	// addi r5,r29,60
	ctx.r5.s64 = ctx.r29.s64 + 60;
	// lwzx r7,r30,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r6,r30,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r9,r30,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r4,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r3,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BD648) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899BD650;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mulli r29,r10,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r9,r29,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// rlwinm r8,r9,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899bd7dc
	if (ctx.cr6.eq) goto loc_899BD7DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8991db50
	ctx.lr = 0x899BD684;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd84c
	if (ctx.cr6.eq) goto loc_899BD84C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x899BD694;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd84c
	if (ctx.cr6.eq) goto loc_899BD84C;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-16368
	ctx.r10.s64 = -1072693248;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// ori r7,r10,16
	ctx.r7.u64 = ctx.r10.u64 | 16;
	// lhz r3,-4592(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// addi r6,r31,158
	ctx.r6.s64 = ctx.r31.s64 + 158;
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// addi r4,r31,162
	ctx.r4.s64 = ctx.r31.s64 + 162;
	// mulli r30,r5,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwzx r10,r29,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// stwx r10,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u32);
	// lhzx r9,r29,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r6.u32);
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sthx r9,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u16);
	// sthx r9,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r9.u16);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// srawi r11,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 6;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// stwx r28,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r28.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// stwx r10,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// bl 0x8991b538
	ctx.lr = 0x899BD714;
	sub_8991B538(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991c578
	ctx.lr = 0x899BD71C;
	sub_8991C578(ctx, base);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// ori r5,r7,20077
	ctx.r5.u64 = ctx.r7.u64 | 20077;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// addi r26,r31,52
	ctx.r26.s64 = ctx.r31.s64 + 52;
	// addi r25,r31,52
	ctx.r25.s64 = ctx.r31.s64 + 52;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lwzx r9,r29,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r31,207
	ctx.r6.s64 = ctx.r31.s64 + 207;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// addi r8,r31,207
	ctx.r8.s64 = ctx.r31.s64 + 207;
	// srawi r5,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 16;
	// addi r24,r31,200
	ctx.r24.s64 = ctx.r31.s64 + 200;
	// clrlwi r11,r5,17
	ctx.r11.u64 = ctx.r5.u32 & 0x7FFF;
	// addi r5,r31,204
	ctx.r5.s64 = ctx.r31.s64 + 204;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r23,r31,200
	ctx.r23.s64 = ctx.r31.s64 + 200;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r3,-30296
	ctx.r3.s64 = -1985478656;
	// rlwinm r11,r4,30,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0xFFFF;
	// addi r4,r3,-27860
	ctx.r4.s64 = ctx.r3.s64 + -27860;
	// addi r11,r11,-12288
	ctx.r11.s64 = ctx.r11.s64 + -12288;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r10,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwzx r9,r29,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// stwx r9,r30,r25
	REX_STORE_U32(ctx.r30.u32 + ctx.r25.u32, ctx.r9.u32);
	// lbzx r7,r29,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r6.u32);
	// stbx r7,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u8);
	// lbzx r6,r29,r24
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r24.u32);
	// stbx r6,r30,r5
	REX_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r6.u8);
	// stbx r6,r30,r23
	REX_STORE_U8(ctx.r30.u32 + ctx.r23.u32, ctx.r6.u8);
	// bl 0x8991cac0
	ctx.lr = 0x899BD7B4;
	sub_8991CAC0(ctx, base);
	// addi r5,r31,164
	ctx.r5.s64 = ctx.r31.s64 + 164;
	// addi r4,r31,172
	ctx.r4.s64 = ctx.r31.s64 + 172;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r11,r31,168
	ctx.r11.s64 = ctx.r31.s64 + 168;
	// stwx r28,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r28.u32);
	// stwx r28,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r28.u32);
	// stwx r28,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r28.u32);
	// stwx r28,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899BD7DC:
	// bl 0x8991c8b8
	ctx.lr = 0x899BD7E0;
	sub_8991C8B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991c718
	ctx.lr = 0x899BD7E8;
	sub_8991C718(ctx, base);
	// addi r11,r31,164
	ctx.r11.s64 = ctx.r31.s64 + 164;
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// addi r9,r31,158
	ctx.r9.s64 = ctx.r31.s64 + 158;
	// ori r8,r10,43691
	ctx.r8.u64 = ctx.r10.u64 | 43691;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// lhzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzx r4,r29,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// mulhw r11,r5,r8
	ctx.r11.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r9,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 6;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// subf r9,r10,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r10.u64;
	// stwx r11,r29,r6
	REX_STORE_U32(ctx.r29.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r9,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x899BD84C;
	sub_8991B610(ctx, base);
loc_899BD84C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BE4E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899BE4F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-1088(r1)
	ea = -1088 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// sth r8,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,224
	ctx.r10.s64 = 224;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,-16
	ctx.r9.s64 = -16;
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x89934b48
	ctx.lr = 0x899BE530;
	sub_89934B48(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30225
	ctx.r10.s64 = -1980825600;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r29,r11,23428
	ctx.r29.s64 = ctx.r11.s64 + 23428;
	// addi r30,r10,26368
	ctx.r30.s64 = ctx.r10.s64 + 26368;
loc_899BE544:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_899BE550:
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
	// addi r7,r30,1384
	ctx.r7.s64 = ctx.r30.s64 + 1384;
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
loc_899BE598:
	// lhzu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x899be598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899BE598;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899be550
	if (ctx.cr6.lt) goto loc_899BE550;
	// addi r8,r30,1384
	ctx.r8.s64 = ctx.r30.s64 + 1384;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
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
	ctx.lr = 0x899BE5E0;
	sub_89935B08(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x899be544
	if (ctx.cr6.lt) goto loc_899BE544;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r8,r11,1044
	ctx.r8.s64 = ctx.r11.s64 + 1044;
	// lbz r11,1044(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1044);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899be688
	if (ctx.cr6.eq) goto loc_899BE688;
	// addi r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 1;
	// li r28,1
	ctx.r28.s64 = 1;
loc_899BE618:
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// lbz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// addi r7,r30,112
	ctx.r7.s64 = ctx.r30.s64 + 112;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// neg r3,r6
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// add r4,r29,r8
	ctx.r4.u64 = ctx.r29.u64 + ctx.r8.u64;
	// neg r5,r10
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r4,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 1;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
	// extsb r7,r3
	ctx.r7.s64 = ctx.r3.s8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89934fb8
	ctx.lr = 0x899BE66C;
	sub_89934FB8(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lbz r11,-1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -1);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899be618
	if (!ctx.cr6.eq) goto loc_899BE618;
loc_899BE688:
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// addi r10,r30,112
	ctx.r10.s64 = ctx.r30.s64 + 112;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r9,r9,3484
	ctx.r9.s64 = ctx.r9.s64 + 3484;
loc_899BE698:
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
	// stw r27,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899be698
	if (ctx.cr6.lt) goto loc_899BE698;
	// stw r27,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r27,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BF530) {
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
	ctx.lr = 0x899BF548;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899bf564
	if (!ctx.cr6.eq) goto loc_899BF564;
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
loc_899BF564:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,-3464
	ctx.r3.s64 = ctx.r11.s64 + -3464;
	// bl 0x89915de0
	ctx.lr = 0x899BF570;
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

DEFINE_REX_FUNC(sub_899BF630) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x899BF638;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x899bf814
	if (ctx.cr6.lt) goto loc_899BF814;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x899bfc18
	if (!ctx.cr6.lt) goto loc_899BFC18;
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899bf714
	if (ctx.cr6.eq) goto loc_899BF714;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r8,r30,207
	ctx.r8.s64 = ctx.r30.s64 + 207;
	// addi r7,r30,200
	ctx.r7.s64 = ctx.r30.s64 + 200;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r8,r31,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// beq cr6,0x899bf6e0
	if (ctx.cr6.eq) goto loc_899BF6E0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x899bf6c8
	if (ctx.cr6.eq) goto loc_899BF6C8;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x899d4440
	ctx.lr = 0x899BF6B8;
	sub_899D4440(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899BF6C8:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x899d4440
	ctx.lr = 0x899BF6D0;
	sub_899D4440(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899BF6E0:
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r9,9448
	ctx.r9.s64 = ctx.r9.s64 + 9448;
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// li r4,6
	ctx.r4.s64 = 6;
	// stbx r29,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u8);
	// bl 0x899d4440
	ctx.lr = 0x899BF704;
	sub_899D4440(ctx, base);
loc_899BF704:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899BF714:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899BF71C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899bf738
	if (!ctx.cr6.lt) goto loc_899BF738;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x899bf580
	ctx.lr = 0x899BF730;
	sub_899BF580(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899BF738:
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r29,r11,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lhzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// rlwinm r8,r10,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// lhzx r5,r29,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r6.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x899bf77c
	if (!ctx.cr6.eq) goto loc_899BF77C;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// lhzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899bf780
	if (ctx.cr6.eq) goto loc_899BF780;
loc_899BF77C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_899BF780:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,44
	ctx.r9.s64 = ctx.r30.s64 + 44;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lbzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r10,r5,12032
	ctx.r10.s64 = ctx.r5.s64 + 12032;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r10,1024
	ctx.r28.s64 = ctx.r10.s64 + 1024;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r30,158
	ctx.r5.s64 = ctx.r30.s64 + 158;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// srawi r10,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 16;
	// sthx r10,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u16);
	// sthx r6,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u16);
	// sthx r11,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u16);
	// bl 0x8991b7f8
	ctx.lr = 0x899BF7F0;
	sub_8991B7F8(ctx, base);
	// addi r5,r30,200
	ctx.r5.s64 = ctx.r30.s64 + 200;
	// addi r4,r30,206
	ctx.r4.s64 = ctx.r30.s64 + 206;
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// lbzx r10,r29,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// lbzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stbx r11,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899BF814:
	// addi r10,r30,188
	ctx.r10.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899bf930
	if (ctx.cr6.lt) goto loc_899BF930;
	// beq cr6,0x899bf90c
	if (ctx.cr6.eq) goto loc_899BF90C;
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x899bf97c
	if (ctx.cr6.eq) goto loc_899BF97C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// bl 0x89932b18
	ctx.lr = 0x899BF84C;
	sub_89932B18(ctx, base);
	// addi r8,r30,186
	ctx.r8.s64 = ctx.r30.s64 + 186;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// addi r28,r30,158
	ctx.r28.s64 = ctx.r30.s64 + 158;
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
	// lhzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// bl 0x89932c20
	ctx.lr = 0x899BF890;
	sub_89932C20(ctx, base);
	// subf r6,r3,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r3.u64;
	// clrlwi r11,r6,23
	ctx.r11.u64 = ctx.r6.u32 & 0x1FF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899bf8b4
	if (ctx.cr6.eq) goto loc_899BF8B4;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// bgt cr6,0x899bf8b0
	if (ctx.cr6.gt) goto loc_899BF8B0;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
loc_899BF8B0:
	// sthx r10,r31,r28
	REX_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u16);
loc_899BF8B4:
	// addic. r11,r11,-256
	ctx.xer.ca = ctx.r11.u32 > 255;
	ctx.r11.s64 = ctx.r11.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899bf8c0
	if (!ctx.cr0.lt) goto loc_899BF8C0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899BF8C0:
	// cmpwi cr6,r11,248
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 248, ctx.xer);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// ble cr6,0x899bf8ec
	if (!ctx.cr6.gt) goto loc_899BF8EC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899bf97c
	if (!ctx.cr6.lt) goto loc_899BF97C;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x899bf97c
	goto loc_899BF97C;
loc_899BF8EC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,49152
	ctx.r9.u64 = ctx.r11.u64 | 49152;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x899bf97c
	if (!ctx.cr6.gt) goto loc_899BF97C;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x899bf97c
	goto loc_899BF97C;
loc_899BF90C:
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x899bf97c
	if (!ctx.cr6.lt) goto loc_899BF97C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x899bf97c
	goto loc_899BF97C;
loc_899BF930:
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r4,r30,164
	ctx.r4.s64 = ctx.r30.s64 + 164;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,23,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0xFFFF;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
loc_899BF97C:
	// addi r29,r30,158
	ctx.r29.s64 = ctx.r30.s64 + 158;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r27,r11,9016
	ctx.r27.s64 = ctx.r11.s64 + 9016;
	// addi r22,r30,48
	ctx.r22.s64 = ctx.r30.s64 + 48;
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
	// lwzx r8,r31,r22
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r4,r27
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r27.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r5,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r5.u32);
	// lhzx r4,r31,r22
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// addic. r11,r3,-160
	ctx.xer.ca = ctx.r3.u32 > 159;
	ctx.r11.s64 = ctx.r3.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899bf9e0
	if (!ctx.cr0.lt) goto loc_899BF9E0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899BF9E0:
	// cmpwi cr6,r11,416
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 416, ctx.xer);
	// bgt cr6,0x899bf704
	if (ctx.cr6.gt) goto loc_899BF704;
	// rlwinm r11,r10,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r25,r30,52
	ctx.r25.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// lhzx r7,r11,r27
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
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
	// stwx r4,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r4.u32);
	// lhzx r3,r31,r25
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r25.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addic. r11,r11,-512
	ctx.xer.ca = ctx.r11.u32 > 511;
	ctx.r11.s64 = ctx.r11.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899bfa28
	if (!ctx.cr0.lt) goto loc_899BFA28;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899BFA28:
	// cmpwi cr6,r11,416
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 416, ctx.xer);
	// bgt cr6,0x899bf704
	if (ctx.cr6.gt) goto loc_899BF704;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x899BFA38;
	sub_8991B7F8(ctx, base);
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// li r10,254
	ctx.r10.s64 = 254;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addi r11,r11,12032
	ctx.r11.s64 = ctx.r11.s64 + 12032;
	// rlwinm r8,r9,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
loc_899BFA54:
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r11,1024
	ctx.r6.s64 = ctx.r11.s64 + 1024;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,1028
	ctx.r7.s64 = ctx.r11.s64 + 1028;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwzx r28,r5,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stwx r28,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r28.u32);
	// stwx r6,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r6.u32);
	// bge cr6,0x899bfa54
	if (!ctx.cr6.lt) goto loc_899BFA54;
	// lhzx r10,r31,r22
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// lhzx r8,r31,r25
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r25.u32);
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
	// lhzx r6,r31,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// rotlwi r5,r10,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stwx r3,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r3.u32);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991db50
	ctx.lr = 0x899BFAC8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bfc18
	if (ctx.cr6.eq) goto loc_899BFC18;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899BFAD8;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bfc18
	if (ctx.cr6.eq) goto loc_899BFC18;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r17,0
	ctx.r17.s64 = 0;
	// lis r21,4
	ctx.r21.s64 = 262144;
	// rlwinm r11,r17,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r15,128
	ctx.r15.s64 = 8388608;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r16,320
	ctx.r16.s64 = 20971520;
	// lis r18,120
	ctx.r18.s64 = 7864320;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// extsh r20,r8
	ctx.r20.s64 = ctx.r8.s16;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// addi r7,r20,128
	ctx.r7.s64 = ctx.r20.s64 + 128;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lwz r19,-21584(r9)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r9.u32 + -21584);
	// rlwinm r23,r20,1,22,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0x3FE;
	// rlwinm r24,r7,1,22,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r26,r10,1288
	ctx.r26.s64 = ctx.r10.s64 + 1288;
loc_899BFB28:
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lhzx r10,r23,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r27.u32);
	// lhzx r9,r24,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r27.u32);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwzx r7,r31,r22
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
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
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r30,r21,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r21.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_899BFB88:
	// cmpw cr6,r30,r15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r15.s32, ctx.xer);
	// blt cr6,0x899bfbc0
	if (ctx.cr6.lt) goto loc_899BFBC0;
	// cmpw cr6,r30,r16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r16.s32, ctx.xer);
	// bgt cr6,0x899bfbc0
	if (ctx.cr6.gt) goto loc_899BFBC0;
	// subf r11,r19,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r19.u64;
	// subf. r10,r18,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899bfba8
	if (!ctx.cr0.lt) goto loc_899BFBA8;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899BFBA8:
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
	// b 0x899bfbc4
	goto loc_899BFBC4;
loc_899BFBC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899BFBC4:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899bfbec
	if (ctx.cr6.eq) goto loc_899BFBEC;
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// rlwinm r7,r11,13,0,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899cc2e0
	ctx.lr = 0x899BFBEC;
	sub_899CC2E0(ctx, base);
loc_899BFBEC:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899bfb88
	if (ctx.cr6.lt) goto loc_899BFB88;
	// addi r11,r17,1
	ctx.r11.s64 = ctx.r17.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x899bfb28
	if (ctx.cr6.lt) goto loc_899BFB28;
loc_899BFC18:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C3C48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899C3C50;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,1688
	ctx.r29.s64 = ctx.r11.s64 + 1688;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// addi r8,r29,160
	ctx.r8.s64 = ctx.r29.s64 + 160;
	// li r10,216
	ctx.r10.s64 = 216;
	// sth r11,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
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
	ctx.lr = 0x899C3C98;
	sub_89934B48(ctx, base);
	// lis r7,-30305
	ctx.r7.s64 = -1986068480;
	// addi r5,r29,160
	ctx.r5.s64 = ctx.r29.s64 + 160;
	// addi r6,r7,20628
	ctx.r6.s64 = ctx.r7.s64 + 20628;
	// addi r4,r29,944
	ctx.r4.s64 = ctx.r29.s64 + 944;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935610
	ctx.lr = 0x899C3CB4;
	sub_89935610(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r10,r11,2416
	ctx.r10.s64 = ctx.r11.s64 + 2416;
	// lbz r11,2416(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899c3d44
	if (ctx.cr6.eq) goto loc_899C3D44;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_899C3CD0:
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// lbz r6,3(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r5,2(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r27,r11
	ctx.r27.s64 = ctx.r11.s8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r4,r6,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzu r11,6(r31)
	ea = 6 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rlwinm r7,r5,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + ctx.r29.u64;
	// neg r8,r4
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// sth r3,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89934fb8
	ctx.lr = 0x899C3D24;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// extsh r10,r30
	ctx.r10.s64 = ctx.r30.s16;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// add r7,r27,r10
	ctx.r7.u64 = ctx.r27.u64 + ctx.r10.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899c3cd0
	if (!ctx.cr6.eq) goto loc_899C3CD0;
loc_899C3D44:
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// addi r11,r11,2424
	ctx.r11.s64 = ctx.r11.s64 + 2424;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r9,r9,3484
	ctx.r9.s64 = ctx.r9.s64 + 3484;
loc_899C3D58:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x899c3d58
	if (ctx.cr6.lt) goto loc_899C3D58;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C4418) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899C4420;
	__savegprlr_27(ctx, base);
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r27,4
	ctx.r27.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,192
	ctx.r10.s64 = 192;
	// sth r27,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r27.u16);
	// li r9,-32
	ctx.r9.s64 = -32;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89934b48
	ctx.lr = 0x899C4460;
	sub_89934B48(ctx, base);
	// addi r8,r1,1264
	ctx.r8.s64 = ctx.r1.s64 + 1264;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-32
	ctx.r8.s64 = -32;
	// sth r27,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r27.u16);
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934b48
	ctx.lr = 0x899C4494;
	sub_89934B48(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30224
	ctx.r10.s64 = -1980760064;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r29,r11,20556
	ctx.r29.s64 = ctx.r11.s64 + 20556;
	// addi r30,r10,5840
	ctx.r30.s64 = ctx.r10.s64 + 5840;
loc_899C44A8:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_899C44B4:
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
	// addi r7,r30,-2808
	ctx.r7.s64 = ctx.r30.s64 + -2808;
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
loc_899C44F8:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x899c44f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899C44F8;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899c44b4
	if (ctx.cr6.lt) goto loc_899C44B4;
	// addi r8,r30,-2808
	ctx.r8.s64 = ctx.r30.s64 + -2808;
	// addi r10,r30,-1584
	ctx.r10.s64 = ctx.r30.s64 + -1584;
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
	ctx.lr = 0x899C4540;
	sub_89935B08(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899c44a8
	if (ctx.cr6.lt) goto loc_899C44A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// sth r27,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r27.u16);
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899C4580;
	sub_89934FB8(ctx, base);
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// addi r11,r11,5920
	ctx.r11.s64 = ctx.r11.s64 + 5920;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r9,r9,3484
	ctx.r9.s64 = ctx.r9.s64 + 3484;
loc_899C4594:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r30,r30,10
	ctx.r30.s64 = ctx.r30.s64 + 10;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899c4594
	if (ctx.cr6.lt) goto loc_899C4594;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C5548) {
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
	// b 0x899c5448
	sub_899C5448(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C5CE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899C5CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r4,r11,12800
	ctx.r4.s64 = ctx.r11.s64 + 12800;
	// mulli r5,r10,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x899c5f2c
	if (ctx.cr6.gt) goto loc_899C5F2C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899c5d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C5D30;
	// bdzf 4*cr6+eq,0x899c5d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C5D30;
	// bdzf 4*cr6+eq,0x899c5d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C5D30;
	// bdzf 4*cr6+eq,0x899c5e48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C5E48;
	// bdzf 4*cr6+eq,0x899c5e48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C5E48;
	// bne cr6,0x899c5eb0
	if (!ctx.cr6.eq) goto loc_899C5EB0;
loc_899C5D30:
	// addi r10,r4,56
	ctx.r10.s64 = ctx.r4.s64 + 56;
	// addi r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 + 60;
	// addi r9,r4,48
	ctx.r9.s64 = ctx.r4.s64 + 48;
	// addi r8,r4,52
	ctx.r8.s64 = ctx.r4.s64 + 52;
	// lwzx r7,r5,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r6,r5,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// addic. r3,r7,-4096
	ctx.xer.ca = ctx.r7.u32 > 4095;
	ctx.r3.s64 = ctx.r7.s64 + -4096;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwzx r31,r5,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r30,r5,r8
	ctx.r30.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// mulli r29,r6,252
	ctx.r29.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(252));
	// stwx r3,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r3.u32);
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// srawi r10,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 8;
	// stwx r7,r5,r9
	REX_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r6,r5,r8
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r10,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r10.u32);
	// ble 0x899c5d88
	if (!ctx.cr0.gt) goto loc_899C5D88;
	// addi r11,r4,100
	ctx.r11.s64 = ctx.r4.s64 + 100;
	// lwzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r10.u32);
loc_899C5D88:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x899c5da8
	if (!ctx.cr6.lt) goto loc_899C5DA8;
	// addi r10,r4,100
	ctx.r10.s64 = ctx.r4.s64 + 100;
	// lwzx r11,r5,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// stwx r11,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x899c5f24
	if (!ctx.cr6.gt) goto loc_899C5F24;
loc_899C5DA8:
	// addi r11,r4,183
	ctx.r11.s64 = ctx.r4.s64 + 183;
	// addi r9,r4,100
	ctx.r9.s64 = ctx.r4.s64 + 100;
	// addi r8,r4,182
	ctx.r8.s64 = ctx.r4.s64 + 182;
	// addi r7,r4,104
	ctx.r7.s64 = ctx.r4.s64 + 104;
	// lbzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r6,r5,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// lbzx r10,r5,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stwx r6,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r6.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// bne cr6,0x899c5f2c
	if (!ctx.cr6.eq) goto loc_899C5F2C;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r4,28
	ctx.r8.s64 = ctx.r4.s64 + 28;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r7,r4,16
	ctx.r7.s64 = ctx.r4.s64 + 16;
	// addi r6,r4,20
	ctx.r6.s64 = ctx.r4.s64 + 20;
	// lwzx r11,r5,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// addi r3,r4,36
	ctx.r3.s64 = ctx.r4.s64 + 36;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r5,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u32);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r5,r4
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899C5E48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899C5E50;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899c5e6c
	if (!ctx.cr6.lt) goto loc_899C5E6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899c5c68
	ctx.lr = 0x899C5E64;
	sub_899C5C68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899C5E6C:
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r8,r4,48
	ctx.r8.s64 = ctx.r4.s64 + 48;
	// addi r7,r4,56
	ctx.r7.s64 = ctx.r4.s64 + 56;
	// addi r6,r4,60
	ctx.r6.s64 = ctx.r4.s64 + 60;
	// addi r3,r4,48
	ctx.r3.s64 = ctx.r4.s64 + 48;
	// addi r31,r4,52
	ctx.r31.s64 = ctx.r4.s64 + 52;
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r8,r4,52
	ctx.r8.s64 = ctx.r4.s64 + 52;
	// lwzx r10,r5,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r5,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stwx r7,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwzx r11,r9,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r6,r5,r8
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899C5EB0:
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// addi r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 + 56;
	// lwzx r9,r5,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r9,r11,-160
	ctx.r9.s64 = ctx.r11.s64 + -10485760;
	// stwx r11,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x899c5ed8
	if (!ctx.cr0.lt) goto loc_899C5ED8;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899C5ED8:
	// lis r11,172
	ctx.r11.s64 = 11272192;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899c5f24
	if (ctx.cr6.gt) goto loc_899C5F24;
	// addi r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 + 52;
	// addi r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 + 60;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// lwzx r8,r5,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r9,-21584(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -21584);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stwx r11,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u32);
	// addis r11,r8,-120
	ctx.r11.s64 = ctx.r8.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c5f18
	if (!ctx.cr0.lt) goto loc_899C5F18;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C5F18:
	// lis r10,132
	ctx.r10.s64 = 8650752;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x899c5f2c
	if (!ctx.cr6.gt) goto loc_899C5F2C;
loc_899C5F24:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r5,r4
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r11.u32);
loc_899C5F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C7868) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x899C7870;
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
	// addi r24,r30,8
	ctx.r24.s64 = ctx.r30.s64 + 8;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwzx r9,r31,r24
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x899c7d74
	if (ctx.cr6.eq) goto loc_899C7D74;
	// addi r7,r30,188
	ctx.r7.s64 = ctx.r30.s64 + 188;
	// li r22,0
	ctx.r22.s64 = 0;
	// lbzx r8,r31,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x899c7a80
	if (ctx.cr6.lt) goto loc_899C7A80;
	// bne cr6,0x899c7bcc
	if (!ctx.cr6.eq) goto loc_899C7BCC;
	// addi r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 + 168;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x899c78d0
	if (!ctx.cr6.lt) goto loc_899C78D0;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_899C78D0:
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// addi r29,r11,9016
	ctx.r29.s64 = ctx.r11.s64 + 9016;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// addi r6,r30,60
	ctx.r6.s64 = ctx.r30.s64 + 60;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// rlwinm r4,r10,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r5,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r4,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// lhzx r8,r3,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r29.u32);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r9,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u32);
	// lhzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addic. r11,r7,-160
	ctx.xer.ca = ctx.r7.u32 > 159;
	ctx.r11.s64 = ctx.r7.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c794c
	if (!ctx.cr0.lt) goto loc_899C794C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C794C:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x899c7d88
	if (ctx.cr6.gt) goto loc_899C7D88;
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// lhzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addic. r11,r9,-512
	ctx.xer.ca = ctx.r9.u32 > 511;
	ctx.r11.s64 = ctx.r9.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c7978
	if (!ctx.cr0.lt) goto loc_899C7978;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C7978:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x899c7d88
	if (ctx.cr6.gt) goto loc_899C7D88;
	// addi r27,r30,184
	ctx.r27.s64 = ctx.r30.s64 + 184;
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899c79b4
	if (ctx.cr6.eq) goto loc_899C79B4;
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
	// blt cr6,0x899c7bcc
	if (ctx.cr6.lt) goto loc_899C7BCC;
	// stbx r22,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u8);
	// b 0x899c79f8
	goto loc_899C79F8;
loc_899C79B4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932b18
	ctx.lr = 0x899C79BC;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932d30
	ctx.lr = 0x899C79C8;
	sub_89932D30(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C79D8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c7bcc
	if (ctx.cr6.eq) goto loc_899C7BCC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899C79E8;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c7bcc
	if (ctx.cr6.eq) goto loc_899C7BCC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
loc_899C79F8:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lwzx r9,r31,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// ori r5,r10,64512
	ctx.r5.u64 = ctx.r10.u64 | 64512;
	// li r3,2
	ctx.r3.s64 = 2;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lhzx r10,r4,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// rlwinm r4,r11,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r4,r4,r29
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// rlwinm r4,r11,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bl 0x899cc3d0
	ctx.lr = 0x899C7A5C;
	sub_899CC3D0(ctx, base);
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x899c7bcc
	if (!ctx.cr6.eq) goto loc_899C7BCC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C7A7C;
	sub_89932A38(ctx, base);
	// b 0x899c7bcc
	goto loc_899C7BCC;
loc_899C7A80:
	// addi r9,r30,189
	ctx.r9.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899c7b2c
	if (ctx.cr6.lt) goto loc_899C7B2C;
	// bne cr6,0x899c7b48
	if (!ctx.cr6.eq) goto loc_899C7B48;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899c7ab0
	if (ctx.cr6.eq) goto loc_899C7AB0;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899C7AB0:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x899c7b48
	if (ctx.cr6.lt) goto loc_899C7B48;
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// stbx r22,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u8);
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// cmplwi cr6,r6,116
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 116, ctx.xer);
	// blt cr6,0x899c7b48
	if (ctx.cr6.lt) goto loc_899C7B48;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwzx r8,r31,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r6,r30,68
	ctx.r6.s64 = ctx.r30.s64 + 68;
	// stbx r22,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r22.u8);
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// li r10,256
	ctx.r10.s64 = 256;
	// oris r9,r8,176
	ctx.r9.u64 = ctx.r8.u64 | 11534336;
	// stbx r22,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r22.u8);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// stbx r5,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u8);
	// b 0x899c7b48
	goto loc_899C7B48;
loc_899C7B2C:
	// addi r10,r30,108
	ctx.r10.s64 = ctx.r30.s64 + 108;
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899c7b48
	if (ctx.cr6.lt) goto loc_899C7B48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
loc_899C7B48:
	// addi r11,r30,162
	ctx.r11.s64 = ctx.r30.s64 + 162;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r7,r30,168
	ctx.r7.s64 = ctx.r30.s64 + 168;
	// addi r5,r10,9016
	ctx.r5.s64 = ctx.r10.s64 + 9016;
	// addi r8,r30,108
	ctx.r8.s64 = ctx.r30.s64 + 108;
	// lhzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r30,112
	ctx.r9.s64 = ctx.r30.s64 + 112;
	// addi r29,r30,56
	ctx.r29.s64 = ctx.r30.s64 + 56;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwzx r3,r31,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r28,r11,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r10,r10,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhzx r28,r28,r5
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r5.u32);
	// lhzx r5,r10,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
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
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r5,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// bl 0x899c7538
	ctx.lr = 0x899C7BCC;
	sub_899C7538(ctx, base);
loc_899C7BCC:
	// lwzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// lwzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stwx r7,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r7.u32);
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r6,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// stwx r4,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// bl 0x8991b770
	ctx.lr = 0x899C7BFC;
	sub_8991B770(ctx, base);
	// addi r11,r30,185
	ctx.r11.s64 = ctx.r30.s64 + 185;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x899c7e54
	if (ctx.cr6.lt) goto loc_899C7E54;
	// addi r20,r30,100
	ctx.r20.s64 = ctx.r30.s64 + 100;
	// stbx r22,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u8);
	// lwzx r11,r31,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x899c7e54
	if (ctx.cr6.eq) goto loc_899C7E54;
	// lis r19,-30253
	ctx.r19.s64 = -1982660608;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lwz r28,-9212(r19)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r19.u32 + -9212);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lwz r24,7104(r8)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 7104);
	// ori r26,r7,20077
	ctx.r26.u64 = ctx.r7.u64 | 20077;
	// ori r27,r6,32896
	ctx.r27.u64 = ctx.r6.u64 | 32896;
	// lis r21,1
	ctx.r21.s64 = 65536;
	// addi r25,r9,2572
	ctx.r25.s64 = ctx.r9.s64 + 2572;
	// addi r23,r10,13024
	ctx.r23.s64 = ctx.r10.s64 + 13024;
	// addi r29,r11,9656
	ctx.r29.s64 = ctx.r11.s64 + 9656;
loc_899C7C68:
	// mulli r9,r22,92
	ctx.r9.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(92));
	// lwzx r11,r9,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899c7d54
	if (ctx.cr6.eq) goto loc_899C7D54;
	// addi r11,r29,76
	ctx.r11.s64 = ctx.r29.s64 + 76;
	// addi r10,r30,200
	ctx.r10.s64 = ctx.r30.s64 + 200;
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// subf. r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c7c94
	if (!ctx.cr0.lt) goto loc_899C7C94;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C7C94:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x899c7d54
	if (!ctx.cr6.lt) goto loc_899C7D54;
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// rlwinm r6,r22,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 5) & 0xFFFFFFE0;
	// lhzx r4,r9,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// lhzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lhzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// srawi r4,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 4;
	// addi r3,r7,160
	ctx.r3.s64 = ctx.r7.s64 + 160;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// srawi r5,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 4;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// clrlwi r6,r5,27
	ctx.r6.u64 = ctx.r5.u32 & 0x1F;
	// rlwinm r7,r4,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbzx r7,r3,r23
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r23.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x899c7d54
	if (ctx.cr6.eq) goto loc_899C7D54;
	// addi r7,r29,20
	ctx.r7.s64 = ctx.r29.s64 + 20;
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mullw r11,r28,r26
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r26.s32);
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwzx r4,r31,r20
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r10,r9,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r28,r11,12345
	ctx.r28.s64 = ctx.r11.s64 + 12345;
	// mullw r9,r10,r24
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// addi r7,r28,1
	ctx.r7.s64 = ctx.r28.s64 + 1;
	// neg r11,r9
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// srawi r10,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 16;
	// srawi r9,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 15;
	// clrlwi r11,r10,17
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFF;
	// srawi r4,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 6;
	// rlwinm r10,r11,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r4,r4,r25
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// rlwinm r11,r11,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFF;
	// subf r10,r21,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r21.u64;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// bl 0x899d7d20
	ctx.lr = 0x899C7D54;
	sub_899D7D20(ctx, base);
loc_899C7D54:
	// addi r11,r22,1
	ctx.r11.s64 = ctx.r22.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x899c7c68
	if (ctx.cr6.lt) goto loc_899C7C68;
	// stw r28,-9212(r19)
	REX_STORE_U32(ctx.r19.u32 + -9212, ctx.r28.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899C7D74:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899C7D7C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899c7d98
	if (!ctx.cr6.lt) goto loc_899C7D98;
loc_899C7D88:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899C7D98:
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// mulli r5,r11,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// clrlwi r10,r4,28
	ctx.r10.u64 = ctx.r4.u32 & 0xF;
	// addi r8,r30,100
	ctx.r8.s64 = ctx.r30.s64 + 100;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// lwzx r6,r31,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lwzx r11,r5,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// srawi r8,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 8;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwzx r6,r31,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r7,r5,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// stwx r8,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u32);
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lwzx r4,r5,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// addi r8,r30,36
	ctx.r8.s64 = ctx.r30.s64 + 36;
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r30,200
	ctx.r9.s64 = ctx.r30.s64 + 200;
	// stwx r10,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// addi r7,r30,68
	ctx.r7.s64 = ctx.r30.s64 + 68;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// lbzx r10,r5,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// stbx r10,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwzx r9,r5,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
loc_899C7E54:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CC2E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899CC2E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r30,1
	ctx.r30.s64 = 1;
	// lhz r11,8416(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 8416);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x899cc308
	if (!ctx.cr6.lt) goto loc_899CC308;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,8416(r10)
	REX_STORE_U16(ctx.r10.u32 + 8416, ctx.r11.u16);
loc_899CC308:
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30247
	ctx.r9.s64 = -1982267392;
	// addi r29,r10,-8688
	ctx.r29.s64 = ctx.r10.s64 + -8688;
	// lhz r11,6028(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6028);
	// addi r9,r9,19368
	ctx.r9.s64 = ctx.r9.s64 + 19368;
	// mulli r10,r11,140
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(140));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x899cc360
	if (!ctx.cr6.lt) goto loc_899CC360;
	// addi r9,r29,-4
	ctx.r9.s64 = ctx.r29.s64 + -4;
loc_899CC338:
	// lwz r28,0(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x899cc350
	if (!ctx.cr6.eq) goto loc_899CC350;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// beq 0x899cc36c
	if (ctx.cr0.eq) goto loc_899CC36C;
loc_899CC350:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x899cc338
	if (ctx.cr6.lt) goto loc_899CC338;
loc_899CC360:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899CC36C:
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// sth r8,6028(r31)
	REX_STORE_U16(ctx.r31.u32 + 6028, ctx.r8.u16);
	// lhz r11,-21396(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + -21396);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,-21396(r9)
	REX_STORE_U16(ctx.r9.u32 + -21396, ctx.r11.u16);
	// ble cr6,0x899cc3b4
	if (!ctx.cr6.gt) goto loc_899CC3B4;
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
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
loc_899CC3B4:
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x899cc1e8
	ctx.lr = 0x899CC3BC;
	sub_899CC1E8(ctx, base);
	// li r3,71
	ctx.r3.s64 = 71;
	// bl 0x89936360
	ctx.lr = 0x899CC3C4;
	sub_89936360(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CD018) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899CD020;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30222
	ctx.r11.s64 = -1980628992;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r30,r11,-8816
	ctx.r30.s64 = ctx.r11.s64 + -8816;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r30,-4080
	ctx.r7.s64 = ctx.r30.s64 + -4080;
	// li r9,240
	ctx.r9.s64 = 240;
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
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x89934fb8
	ctx.lr = 0x899CD060;
	sub_89934FB8(ctx, base);
	// addi r11,r30,-4080
	ctx.r11.s64 = ctx.r30.s64 + -4080;
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r11,2040
	ctx.r5.s64 = ctx.r11.s64 + 2040;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r9,232
	ctx.r9.s64 = 232;
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x89934fb8
	ctx.lr = 0x899CD098;
	sub_89934FB8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r25,r11,2944
	ctx.r25.s64 = ctx.r11.s64 + 2944;
	// ori r26,r10,32768
	ctx.r26.u64 = ctx.r10.u64 | 32768;
loc_899CD0B0:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,18720
	ctx.r11.s64 = ctx.r30.s64 + 18720;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r30,-4080
	ctx.r9.s64 = ctx.r30.s64 + -4080;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r31,170
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(170));
	// add r28,r29,r11
	ctx.r28.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mulli r11,r31,780
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(780));
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x899CD0E8;
	sub_89935880(ctx, base);
	// lbzx r7,r31,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// addi r8,r30,18720
	ctx.r8.s64 = ctx.r30.s64 + 18720;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// addi r9,r30,18720
	ctx.r9.s64 = ctx.r30.s64 + 18720;
	// addi r10,r30,18720
	ctx.r10.s64 = ctx.r30.s64 + 18720;
	// addi r11,r30,18720
	ctx.r11.s64 = ctx.r30.s64 + 18720;
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// rlwinm r3,r5,15,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// subf r5,r26,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r26.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stwx r27,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r27.u32);
	// stwx r5,r29,r4
	REX_STORE_U32(ctx.r29.u32 + ctx.r4.u32, ctx.r5.u32);
	// cmpwi cr6,r6,24
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 24, ctx.xer);
	// stw r5,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// stwx r27,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r27.u32);
	// stwx r27,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r27.u32);
	// blt cr6,0x899cd0b0
	if (ctx.cr6.lt) goto loc_899CD0B0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CE0B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x899ce294
	if (ctx.cr6.lt) goto loc_899CE294;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -10485760;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899ce0ec
	if (!ctx.cr0.lt) goto loc_899CE0EC;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899CE0EC:
	// lis r11,184
	ctx.r11.s64 = 12058624;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899ce2bc
	if (ctx.cr6.gt) goto loc_899CE2BC;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// bge 0x899ce124
	if (!ctx.cr0.lt) goto loc_899CE124;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CE124:
	// lis r10,144
	ctx.r10.s64 = 9437184;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899ce2bc
	if (ctx.cr6.gt) goto loc_899CE2BC;
	// lhz r11,118(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 118);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r10,9016
	ctx.r9.s64 = ctx.r10.s64 + 9016;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// addi r6,r7,128
	ctx.r6.s64 = ctx.r7.s64 + 128;
	// sth r7,118(r3)
	REX_STORE_U16(ctx.r3.u32 + 118, ctx.r7.u16);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r5,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// mulli r9,r10,1520
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1520));
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// addi r8,r10,160
	ctx.r8.s64 = ctx.r10.s64 + 160;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,71(r3)
	REX_STORE_U8(ctx.r3.u32 + 71, ctx.r7.u8);
	// stb r7,70(r3)
	REX_STORE_U8(ctx.r3.u32 + 70, ctx.r7.u8);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-30307
	ctx.r12.s64 = -1986199552;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-7784
	ctx.r12.s64 = ctx.r12.s64 + -7784;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899CE1D4;
	case 1:
		goto loc_899CE1D4;
	case 2:
		goto loc_899CE1D4;
	case 3:
		goto loc_899CE1D4;
	case 4:
		goto loc_899CE1D4;
	case 5:
		goto loc_899CE1D4;
	case 6:
		goto loc_899CE1D4;
	case 7:
		goto loc_899CE1D4;
	case 8:
		goto loc_899CE234;
	case 9:
		goto loc_899CE234;
	case 10:
		goto loc_899CE234;
	case 11:
		goto loc_899CE234;
	case 12:
		goto loc_899CE234;
	case 13:
		goto loc_899CE234;
	case 14:
		goto loc_899CE234;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899CE1D4:
	// lbz r10,139(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 139);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,139(r3)
	REX_STORE_U8(ctx.r3.u32 + 139, ctx.r9.u8);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stb r8,139(r3)
	REX_STORE_U8(ctx.r3.u32 + 139, ctx.r8.u8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
loc_899CE234:
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
loc_899CE294:
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899ce2bc
	if (ctx.cr6.eq) goto loc_899CE2BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899ce2bc
	if (ctx.cr6.eq) goto loc_899CE2BC;
	// lhz r10,134(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// lhz r9,134(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 134);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x899ce2c8
	if (ctx.cr6.eq) goto loc_899CE2C8;
loc_899CE2BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899CE2C8:
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r8,56(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// stw r8,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D0428) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x899D0430;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x89919d28
	ctx.lr = 0x899D0450;
	sub_89919D28(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d0614
	if (ctx.cr6.eq) goto loc_899D0614;
	// extsh r3,r25
	ctx.r3.s64 = ctx.r25.s16;
	// rlwinm r27,r31,0,23,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x180;
	// bl 0x899340e8
	ctx.lr = 0x899D0468;
	sub_899340E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d0614
	if (ctx.cr6.eq) goto loc_899D0614;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8991a5a0
	ctx.lr = 0x899D0478;
	sub_8991A5A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d0614
	if (ctx.cr6.eq) goto loc_899D0614;
	// rlwinm r8,r27,0,23,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x180;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// srawi r11,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 7;
	// lis r7,-30294
	ctx.r7.s64 = -1985347584;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r6,r24
	ctx.r6.s64 = ctx.r24.s16;
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// lwz r31,-8688(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + -8688);
	// addi r28,r7,3120
	ctx.r28.s64 = ctx.r7.s64 + 3120;
	// rlwinm r20,r5,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r4,12800
	ctx.r11.s64 = ctx.r4.s64 + 12800;
	// mulli r10,r6,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lwzx r29,r20,r28
	ctx.r29.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r28.u32);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r11,r3,8192
	ctx.r11.u64 = ctx.r3.u64 | 8192;
	// stw r30,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r10,r9,-8688
	ctx.r10.s64 = ctx.r9.s64 + -8688;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r9,154(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 154);
	// stw r25,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// sth r9,136(r31)
	REX_STORE_U16(ctx.r31.u32 + 136, ctx.r9.u16);
	// lbz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// sth r26,118(r31)
	REX_STORE_U16(ctx.r31.u32 + 118, ctx.r26.u16);
	// stw r26,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// sth r27,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r27.u16);
	// bl 0x8991a858
	ctx.lr = 0x899D0500;
	sub_8991A858(ctx, base);
	// rlwinm r11,r23,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r22,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// stw r6,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// lwz r7,48(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r4,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// li r21,512
	ctx.r21.s64 = 512;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,128
	ctx.r10.s64 = 128;
	// stb r3,70(r31)
	REX_STORE_U8(ctx.r31.u32 + 70, ctx.r3.u8);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// stb r10,71(r31)
	REX_STORE_U8(ctx.r31.u32 + 71, ctx.r10.u8);
	// addi r8,r28,6
	ctx.r8.s64 = ctx.r28.s64 + 6;
	// stb r26,139(r31)
	REX_STORE_U8(ctx.r31.u32 + 139, ctx.r26.u8);
	// sth r21,68(r31)
	REX_STORE_U16(ctx.r31.u32 + 68, ctx.r21.u16);
	// lhzx r3,r20,r5
	ctx.r3.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,7904(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 7904);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhzx r10,r20,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r8.u32);
	// subf r11,r22,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r22.u64;
	// subf r10,r23,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r23.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// bl 0x899d2e10
	ctx.lr = 0x899D0588;
	sub_899D2E10(ctx, base);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_899D058C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwzu r3,4(r25)
	ea = 4 + ctx.r25.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r25.u32 = ea;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lbzu r11,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// sth r27,116(r3)
	REX_STORE_U16(ctx.r3.u32 + 116, ctx.r27.u16);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// bl 0x8991a858
	ctx.lr = 0x899D05BC;
	sub_8991A858(ctx, base);
	// stw r31,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r31.u32);
	// lhz r4,134(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 134);
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// sth r4,134(r3)
	REX_STORE_U16(ctx.r3.u32 + 134, ctx.r4.u16);
	// addi r7,r3,84
	ctx.r7.s64 = ctx.r3.s64 + 84;
	// sth r21,52(r3)
	REX_STORE_U16(ctx.r3.u32 + 52, ctx.r21.u16);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmplwi cr6,r5,27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 27, ctx.xer);
	// stw r7,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r8,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// blt cr6,0x899d058c
	if (ctx.cr6.lt) goto loc_899D058C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_899D0614:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D1C40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x899D1C48;
	__savegprlr_20(ctx, base);
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r4,192
	ctx.r4.s64 = 192;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r7,32
	ctx.r7.s64 = 32;
	// stb r11,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r10,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// li r31,4
	ctx.r31.s64 = 4;
	// stb r7,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r7.u8);
	// li r29,24
	ctx.r29.s64 = 24;
	// stb r4,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r4.u8);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r30,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r30.u8);
	// li r27,128
	ctx.r27.s64 = 128;
	// stb r11,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// li r6,48
	ctx.r6.s64 = 48;
	// stb r11,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r31,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// li r26,5
	ctx.r26.s64 = 5;
	// stb r10,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r10.u8);
	// li r28,184
	ctx.r28.s64 = 184;
	// stb r29,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r29.u8);
	// li r25,160
	ctx.r25.s64 = 160;
	// stb r4,107(r1)
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r4.u8);
	// li r3,40
	ctx.r3.s64 = 40;
	// stb r7,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r7.u8);
	// li r24,200
	ctx.r24.s64 = 200;
	// stb r31,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r31.u8);
	// stb r11,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r11.u8);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r11,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// stb r10,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r7,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// stb r4,114(r1)
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r4.u8);
	// stb r27,115(r1)
	REX_STORE_U8(ctx.r1.u32 + 115, ctx.r27.u8);
	// stb r11,116(r1)
	REX_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stb r11,117(r1)
	REX_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
	// stb r11,118(r1)
	REX_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// stb r10,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r29,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r29.u8);
	// stb r4,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r4.u8);
	// stb r25,122(r1)
	REX_STORE_U8(ctx.r1.u32 + 122, ctx.r25.u8);
	// stb r11,123(r1)
	REX_STORE_U8(ctx.r1.u32 + 123, ctx.r11.u8);
	// stb r11,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// stb r8,125(r1)
	REX_STORE_U8(ctx.r1.u32 + 125, ctx.r8.u8);
	// stb r10,126(r1)
	REX_STORE_U8(ctx.r1.u32 + 126, ctx.r10.u8);
	// stb r7,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r7.u8);
	// stb r4,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r4.u8);
	// stb r28,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r28.u8);
	// stb r8,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r8.u8);
	// stb r11,131(r1)
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r11.u8);
	// stb r5,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r5.u8);
	// stb r10,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r10.u8);
	// stb r7,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r7.u8);
	// stb r27,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r27.u8);
	// stb r30,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r30.u8);
	// stb r5,137(r1)
	REX_STORE_U8(ctx.r1.u32 + 137, ctx.r5.u8);
	// stb r11,138(r1)
	REX_STORE_U8(ctx.r1.u32 + 138, ctx.r11.u8);
	// stb r26,139(r1)
	REX_STORE_U8(ctx.r1.u32 + 139, ctx.r26.u8);
	// stb r10,140(r1)
	REX_STORE_U8(ctx.r1.u32 + 140, ctx.r10.u8);
	// stb r3,141(r1)
	REX_STORE_U8(ctx.r1.u32 + 141, ctx.r3.u8);
	// stb r10,142(r1)
	REX_STORE_U8(ctx.r1.u32 + 142, ctx.r10.u8);
	// stb r30,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r30.u8);
	// stb r26,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// stb r11,145(r1)
	REX_STORE_U8(ctx.r1.u32 + 145, ctx.r11.u8);
	// stb r11,146(r1)
	REX_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// stb r10,147(r1)
	REX_STORE_U8(ctx.r1.u32 + 147, ctx.r10.u8);
	// stb r6,148(r1)
	REX_STORE_U8(ctx.r1.u32 + 148, ctx.r6.u8);
	// stb r10,149(r1)
	REX_STORE_U8(ctx.r1.u32 + 149, ctx.r10.u8);
	// stb r24,150(r1)
	REX_STORE_U8(ctx.r1.u32 + 150, ctx.r24.u8);
	// stb r11,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
	// stb r11,152(r1)
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stb r11,153(r1)
	REX_STORE_U8(ctx.r1.u32 + 153, ctx.r11.u8);
	// stb r10,154(r1)
	REX_STORE_U8(ctx.r1.u32 + 154, ctx.r10.u8);
	// stb r6,155(r1)
	REX_STORE_U8(ctx.r1.u32 + 155, ctx.r6.u8);
	// stb r30,156(r1)
	REX_STORE_U8(ctx.r1.u32 + 156, ctx.r30.u8);
	// stb r30,157(r1)
	REX_STORE_U8(ctx.r1.u32 + 157, ctx.r30.u8);
	// stb r11,158(r1)
	REX_STORE_U8(ctx.r1.u32 + 158, ctx.r11.u8);
	// stb r11,159(r1)
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r11.u8);
	// stb r8,173(r1)
	REX_STORE_U8(ctx.r1.u32 + 173, ctx.r8.u8);
	// li r5,56
	ctx.r5.s64 = 56;
	// stb r8,180(r1)
	REX_STORE_U8(ctx.r1.u32 + 180, ctx.r8.u8);
	// li r27,88
	ctx.r27.s64 = 88;
	// stb r8,187(r1)
	REX_STORE_U8(ctx.r1.u32 + 187, ctx.r8.u8);
	// li r25,8
	ctx.r25.s64 = 8;
	// stb r8,194(r1)
	REX_STORE_U8(ctx.r1.u32 + 194, ctx.r8.u8);
	// li r24,136
	ctx.r24.s64 = 136;
	// stb r8,201(r1)
	REX_STORE_U8(ctx.r1.u32 + 201, ctx.r8.u8);
	// li r23,120
	ctx.r23.s64 = 120;
	// stb r8,202(r1)
	REX_STORE_U8(ctx.r1.u32 + 202, ctx.r8.u8);
	// addi r22,r1,244
	ctx.r22.s64 = ctx.r1.s64 + 244;
	// stb r8,207(r1)
	REX_STORE_U8(ctx.r1.u32 + 207, ctx.r8.u8);
	// li r8,216
	ctx.r8.s64 = 216;
	// stb r11,160(r1)
	REX_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// li r21,176
	ctx.r21.s64 = 176;
	// stb r10,161(r1)
	REX_STORE_U8(ctx.r1.u32 + 161, ctx.r10.u8);
	// stb r3,162(r1)
	REX_STORE_U8(ctx.r1.u32 + 162, ctx.r3.u8);
	// stb r30,163(r1)
	REX_STORE_U8(ctx.r1.u32 + 163, ctx.r30.u8);
	// stb r6,164(r1)
	REX_STORE_U8(ctx.r1.u32 + 164, ctx.r6.u8);
	// stb r11,165(r1)
	REX_STORE_U8(ctx.r1.u32 + 165, ctx.r11.u8);
	// stb r11,166(r1)
	REX_STORE_U8(ctx.r1.u32 + 166, ctx.r11.u8);
	// stb r9,167(r1)
	REX_STORE_U8(ctx.r1.u32 + 167, ctx.r9.u8);
	// stb r10,168(r1)
	REX_STORE_U8(ctx.r1.u32 + 168, ctx.r10.u8);
	// stb r6,169(r1)
	REX_STORE_U8(ctx.r1.u32 + 169, ctx.r6.u8);
	// stb r30,170(r1)
	REX_STORE_U8(ctx.r1.u32 + 170, ctx.r30.u8);
	// stb r27,171(r1)
	REX_STORE_U8(ctx.r1.u32 + 171, ctx.r27.u8);
	// stb r9,172(r1)
	REX_STORE_U8(ctx.r1.u32 + 172, ctx.r9.u8);
	// stb r26,174(r1)
	REX_STORE_U8(ctx.r1.u32 + 174, ctx.r26.u8);
	// stb r10,175(r1)
	REX_STORE_U8(ctx.r1.u32 + 175, ctx.r10.u8);
	// stb r6,176(r1)
	REX_STORE_U8(ctx.r1.u32 + 176, ctx.r6.u8);
	// stb r4,177(r1)
	REX_STORE_U8(ctx.r1.u32 + 177, ctx.r4.u8);
	// stb r30,178(r1)
	REX_STORE_U8(ctx.r1.u32 + 178, ctx.r30.u8);
	// stb r26,179(r1)
	REX_STORE_U8(ctx.r1.u32 + 179, ctx.r26.u8);
	// stb r25,181(r1)
	REX_STORE_U8(ctx.r1.u32 + 181, ctx.r25.u8);
	// stb r5,182(r1)
	REX_STORE_U8(ctx.r1.u32 + 182, ctx.r5.u8);
	// stb r5,183(r1)
	REX_STORE_U8(ctx.r1.u32 + 183, ctx.r5.u8);
	// stb r24,184(r1)
	REX_STORE_U8(ctx.r1.u32 + 184, ctx.r24.u8);
	// stb r30,185(r1)
	REX_STORE_U8(ctx.r1.u32 + 185, ctx.r30.u8);
	// stb r31,186(r1)
	REX_STORE_U8(ctx.r1.u32 + 186, ctx.r31.u8);
	// stb r11,188(r1)
	REX_STORE_U8(ctx.r1.u32 + 188, ctx.r11.u8);
	// stb r6,189(r1)
	REX_STORE_U8(ctx.r1.u32 + 189, ctx.r6.u8);
	// stb r5,190(r1)
	REX_STORE_U8(ctx.r1.u32 + 190, ctx.r5.u8);
	// stb r29,191(r1)
	REX_STORE_U8(ctx.r1.u32 + 191, ctx.r29.u8);
	// stb r30,192(r1)
	REX_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// stb r11,193(r1)
	REX_STORE_U8(ctx.r1.u32 + 193, ctx.r11.u8);
	// stb r11,195(r1)
	REX_STORE_U8(ctx.r1.u32 + 195, ctx.r11.u8);
	// stb r6,196(r1)
	REX_STORE_U8(ctx.r1.u32 + 196, ctx.r6.u8);
	// stb r10,197(r1)
	REX_STORE_U8(ctx.r1.u32 + 197, ctx.r10.u8);
	// stb r7,198(r1)
	REX_STORE_U8(ctx.r1.u32 + 198, ctx.r7.u8);
	// stb r5,199(r1)
	REX_STORE_U8(ctx.r1.u32 + 199, ctx.r5.u8);
	// stb r11,200(r1)
	REX_STORE_U8(ctx.r1.u32 + 200, ctx.r11.u8);
	// stb r6,203(r1)
	REX_STORE_U8(ctx.r1.u32 + 203, ctx.r6.u8);
	// stb r5,204(r1)
	REX_STORE_U8(ctx.r1.u32 + 204, ctx.r5.u8);
	// stb r7,205(r1)
	REX_STORE_U8(ctx.r1.u32 + 205, ctx.r7.u8);
	// stb r23,206(r1)
	REX_STORE_U8(ctx.r1.u32 + 206, ctx.r23.u8);
	// stb r9,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, ctx.r9.u8);
	// stb r11,209(r1)
	REX_STORE_U8(ctx.r1.u32 + 209, ctx.r11.u8);
	// stb r3,210(r1)
	REX_STORE_U8(ctx.r1.u32 + 210, ctx.r3.u8);
	// stb r5,211(r1)
	REX_STORE_U8(ctx.r1.u32 + 211, ctx.r5.u8);
	// stb r8,212(r1)
	REX_STORE_U8(ctx.r1.u32 + 212, ctx.r8.u8);
	// stb r30,213(r1)
	REX_STORE_U8(ctx.r1.u32 + 213, ctx.r30.u8);
	// stb r11,214(r1)
	REX_STORE_U8(ctx.r1.u32 + 214, ctx.r11.u8);
	// stb r9,215(r1)
	REX_STORE_U8(ctx.r1.u32 + 215, ctx.r9.u8);
	// stb r9,216(r1)
	REX_STORE_U8(ctx.r1.u32 + 216, ctx.r9.u8);
	// stb r3,217(r1)
	REX_STORE_U8(ctx.r1.u32 + 217, ctx.r3.u8);
	// stb r10,218(r1)
	REX_STORE_U8(ctx.r1.u32 + 218, ctx.r10.u8);
	// stb r8,219(r1)
	REX_STORE_U8(ctx.r1.u32 + 219, ctx.r8.u8);
	// stb r5,220(r1)
	REX_STORE_U8(ctx.r1.u32 + 220, ctx.r5.u8);
	// stb r9,221(r1)
	REX_STORE_U8(ctx.r1.u32 + 221, ctx.r9.u8);
	// stb r9,222(r1)
	REX_STORE_U8(ctx.r1.u32 + 222, ctx.r9.u8);
	// stb r11,223(r1)
	REX_STORE_U8(ctx.r1.u32 + 223, ctx.r11.u8);
	// stb r7,224(r1)
	REX_STORE_U8(ctx.r1.u32 + 224, ctx.r7.u8);
	// stb r10,225(r1)
	REX_STORE_U8(ctx.r1.u32 + 225, ctx.r10.u8);
	// stb r28,226(r1)
	REX_STORE_U8(ctx.r1.u32 + 226, ctx.r28.u8);
	// stb r30,227(r1)
	REX_STORE_U8(ctx.r1.u32 + 227, ctx.r30.u8);
	// stb r11,228(r1)
	REX_STORE_U8(ctx.r1.u32 + 228, ctx.r11.u8);
	// stb r9,229(r1)
	REX_STORE_U8(ctx.r1.u32 + 229, ctx.r9.u8);
	// stb r9,230(r1)
	REX_STORE_U8(ctx.r1.u32 + 230, ctx.r9.u8);
	// stb r3,231(r1)
	REX_STORE_U8(ctx.r1.u32 + 231, ctx.r3.u8);
	// stb r10,232(r1)
	REX_STORE_U8(ctx.r1.u32 + 232, ctx.r10.u8);
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r10,234(r1)
	REX_STORE_U8(ctx.r1.u32 + 234, ctx.r10.u8);
	// li r8,144
	ctx.r8.s64 = 144;
	// stb r10,239(r1)
	REX_STORE_U8(ctx.r1.u32 + 239, ctx.r10.u8);
	// stb r11,237(r1)
	REX_STORE_U8(ctx.r1.u32 + 237, ctx.r11.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r21,233(r1)
	REX_STORE_U8(ctx.r1.u32 + 233, ctx.r21.u8);
	// stb r9,235(r1)
	REX_STORE_U8(ctx.r1.u32 + 235, ctx.r9.u8);
	// stb r9,236(r1)
	REX_STORE_U8(ctx.r1.u32 + 236, ctx.r9.u8);
	// stb r7,238(r1)
	REX_STORE_U8(ctx.r1.u32 + 238, ctx.r7.u8);
	// stb r8,240(r1)
	REX_STORE_U8(ctx.r1.u32 + 240, ctx.r8.u8);
	// stb r30,241(r1)
	REX_STORE_U8(ctx.r1.u32 + 241, ctx.r30.u8);
	// stb r31,242(r1)
	REX_STORE_U8(ctx.r1.u32 + 242, ctx.r31.u8);
	// stb r30,243(r1)
	REX_STORE_U8(ctx.r1.u32 + 243, ctx.r30.u8);
	// stw r30,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// sth r30,4(r22)
	REX_STORE_U16(ctx.r22.u32 + 4, ctx.r30.u16);
	// lbz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d1fa8
	if (ctx.cr6.eq) goto loc_899D1FA8;
	// addi r9,r1,101
	ctx.r9.s64 = ctx.r1.s64 + 101;
	// addi r31,r9,-6
	ctx.r31.s64 = ctx.r9.s64 + -6;
loc_899D1F28:
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// lbz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lbz r4,3(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r28,2(r31)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r9,5(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// neg r3,r5
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// add r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 + ctx.r7.u64;
	// lbz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// lbzu r8,7(r31)
	ea = 7 + ctx.r31.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// neg r27,r4
	ctx.r27.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// srawi r27,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 1;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// extsb r7,r27
	ctx.r7.s64 = ctx.r27.s8;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89934fb8
	ctx.lr = 0x899D1F90;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r4,r28,r29
	ctx.r4.u64 = ctx.r28.u64 + ctx.r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x899d1f28
	if (!ctx.cr6.eq) goto loc_899D1F28;
loc_899D1FA8:
	// lis r11,-30221
	ctx.r11.s64 = -1980563456;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r31,r11,25064
	ctx.r31.s64 = ctx.r11.s64 + 25064;
loc_899D1FB4:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_899D1FC0:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// add r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r31,3120
	ctx.r7.s64 = ctx.r31.s64 + 3120;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_899D2004:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x899d2004
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899D2004;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899d1fc0
	if (ctx.cr6.lt) goto loc_899D1FC0;
	// addi r9,r31,3120
	ctx.r9.s64 = ctx.r31.s64 + 3120;
	// mulli r10,r29,170
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(170));
	// mulli r11,r29,780
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(780));
	// addi r6,r31,3800
	ctx.r6.s64 = ctx.r31.s64 + 3800;
	// li r7,13
	ctx.r7.s64 = 13;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x899D2048;
	sub_89935880(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899d1fb4
	if (ctx.cr6.lt) goto loc_899D1FB4;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r8,r9,9016
	ctx.r8.s64 = ctx.r9.s64 + 9016;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
loc_899D2070:
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r31,3800
	ctx.r29.s64 = ctx.r31.s64 + 3800;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mulli r22,r10,52
	ctx.r22.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// addi r3,r9,128
	ctx.r3.s64 = ctx.r9.s64 + 128;
	// rlwinm r9,r10,4,22,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x3F0;
	// rlwinm r7,r3,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r20,r10,1
	ctx.r20.s64 = ctx.r10.s64 + 1;
	// addi r24,r31,3800
	ctx.r24.s64 = ctx.r31.s64 + 3800;
	// lhzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// addi r28,r31,3800
	ctx.r28.s64 = ctx.r31.s64 + 3800;
	// lhzx r5,r7,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// addi r23,r31,3800
	ctx.r23.s64 = ctx.r31.s64 + 3800;
	// rotlwi r21,r6,16
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rotlwi r9,r5,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// srawi r10,r21,8
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 8;
	// addi r25,r31,3800
	ctx.r25.s64 = ctx.r31.s64 + 3800;
	// stwx r10,r22,r29
	REX_STORE_U32(ctx.r22.u32 + ctx.r29.u32, ctx.r10.u32);
	// addi r29,r24,32
	ctx.r29.s64 = ctx.r24.s64 + 32;
	// addi r26,r31,3800
	ctx.r26.s64 = ctx.r31.s64 + 3800;
	// stwx r9,r22,r28
	REX_STORE_U32(ctx.r22.u32 + ctx.r28.u32, ctx.r9.u32);
	// addi r27,r31,3800
	ctx.r27.s64 = ctx.r31.s64 + 3800;
	// addi r3,r31,3800
	ctx.r3.s64 = ctx.r31.s64 + 3800;
	// addi r4,r31,3800
	ctx.r4.s64 = ctx.r31.s64 + 3800;
	// addi r5,r31,3800
	ctx.r5.s64 = ctx.r31.s64 + 3800;
	// stwx r11,r22,r29
	REX_STORE_U32(ctx.r22.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r6,r31,3800
	ctx.r6.s64 = ctx.r31.s64 + 3800;
	// addi r7,r31,3800
	ctx.r7.s64 = ctx.r31.s64 + 3800;
	// addi r21,r31,3800
	ctx.r21.s64 = ctx.r31.s64 + 3800;
	// addi r23,r23,36
	ctx.r23.s64 = ctx.r23.s64 + 36;
	// addi r25,r25,20
	ctx.r25.s64 = ctx.r25.s64 + 20;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stwx r11,r22,r21
	REX_STORE_U32(ctx.r22.u32 + ctx.r21.u32, ctx.r11.u32);
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// stwx r11,r22,r23
	REX_STORE_U32(ctx.r22.u32 + ctx.r23.u32, ctx.r11.u32);
	// addi r5,r5,48
	ctx.r5.s64 = ctx.r5.s64 + 48;
	// stwx r11,r22,r25
	REX_STORE_U32(ctx.r22.u32 + ctx.r25.u32, ctx.r11.u32);
	// addi r6,r6,44
	ctx.r6.s64 = ctx.r6.s64 + 44;
	// stwx r11,r22,r26
	REX_STORE_U32(ctx.r22.u32 + ctx.r26.u32, ctx.r11.u32);
	// addi r7,r7,40
	ctx.r7.s64 = ctx.r7.s64 + 40;
	// stwx r11,r22,r27
	REX_STORE_U32(ctx.r22.u32 + ctx.r27.u32, ctx.r11.u32);
	// extsh r29,r20
	ctx.r29.s64 = ctx.r20.s16;
	// neg r28,r10
	ctx.r28.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stwx r30,r22,r5
	REX_STORE_U32(ctx.r22.u32 + ctx.r5.u32, ctx.r30.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stwx r28,r22,r4
	REX_STORE_U32(ctx.r22.u32 + ctx.r4.u32, ctx.r28.u32);
	// stwx r9,r22,r3
	REX_STORE_U32(ctx.r22.u32 + ctx.r3.u32, ctx.r9.u32);
	// cmpwi cr6,r29,17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 17, ctx.xer);
	// stwx r30,r22,r6
	REX_STORE_U32(ctx.r22.u32 + ctx.r6.u32, ctx.r30.u32);
	// stwx r30,r22,r7
	REX_STORE_U32(ctx.r22.u32 + ctx.r7.u32, ctx.r30.u32);
	// blt cr6,0x899d2070
	if (ctx.cr6.lt) goto loc_899D2070;
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D5F48) {
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
	// bne cr6,0x899d5f70
	if (!ctx.cr6.eq) goto loc_899D5F70;
loc_899D5F64:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D5F70:
	// lbz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stb r10,76(r3)
	REX_STORE_U8(ctx.r3.u32 + 76, ctx.r10.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899d5fa0
	if (!ctx.cr6.eq) goto loc_899D5FA0;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x899d5f64
	if (ctx.cr6.eq) goto loc_899D5F64;
loc_899D5FA0:
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

DEFINE_REX_FUNC(sub_899D64D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899D64D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-30253
	ctx.r28.s64 = -1982660608;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// ori r30,r11,20077
	ctx.r30.u64 = ctx.r11.u64 | 20077;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r11,-9212(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -9212);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addi r29,r11,12345
	ctx.r29.s64 = ctx.r11.s64 + 12345;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// stw r29,-9212(r28)
	REX_STORE_U32(ctx.r28.u32 + -9212, ctx.r29.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// clrlwi r6,r7,17
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFF;
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r5,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991a198
	ctx.lr = 0x899D6538;
	sub_8991A198(ctx, base);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x899d656c
	if (!ctx.cr6.eq) goto loc_899D656C;
loc_899D6544:
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899d65e4
	if (ctx.cr6.eq) goto loc_899D65E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991a198
	ctx.lr = 0x899D6560;
	sub_8991A198(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d6544
	if (ctx.cr6.eq) goto loc_899D6544;
loc_899D656C:
	// extsh r10,r27
	ctx.r10.s64 = ctx.r27.s16;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// addi r7,r11,7904
	ctx.r7.s64 = ctx.r11.s64 + 7904;
	// srawi r26,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 1;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// b 0x899d658c
	goto loc_899D658C;
loc_899D6588:
	// lwz r29,-9212(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + -9212);
loc_899D658C:
	// mullw r11,r29,r30
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r9,r26
	ctx.r9.s64 = ctx.r26.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r28)
	REX_STORE_U32(ctx.r28.u32 + -9212, ctx.r11.u32);
	// li r6,116
	ctx.r6.s64 = 116;
	// srawi r5,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 16;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// clrlwi r3,r5,23
	ctx.r3.u64 = ctx.r5.u32 & 0x1FF;
	// mullw r11,r3,r27
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// rlwinm r8,r11,23,9,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + ctx.r23.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// bl 0x899d6238
	ctx.lr = 0x899D65CC;
	sub_899D6238(ctx, base);
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899d6588
	if (!ctx.cr6.eq) goto loc_899D6588;
loc_899D65E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D71F8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x899d7334
	if (ctx.cr6.gt) goto loc_899D7334;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d72d4
	if (ctx.cr6.eq) goto loc_899D72D4;
	// bdz 0x899d72d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D72D4;
	// bdz 0x899d7258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D7258;
	// bdz 0x899d7258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D7258;
	// bdz 0x899d7230
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D7230;
loc_899D7230:
	// lwz r11,36(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r10,40(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r5,r10,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r10.u64;
	// srawi r4,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 4;
	// srawi r3,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 4;
	// stw r4,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r4.u32);
	// stw r3,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r3.u32);
loc_899D7258:
	// lwz r11,28(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// lwz r9,32(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r10,36(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r8,40(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r4.u32);
	// stw r5,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r5.u32);
	// bl 0x899d3f38
	ctx.lr = 0x899D7280;
	sub_899D3F38(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d72a4
	if (ctx.cr6.eq) goto loc_899D72A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899D72A4:
	// lbz r11,76(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,76(r7)
	REX_STORE_U8(ctx.r7.u32 + 76, ctx.r10.u8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x899d7334
	if (!ctx.cr6.eq) goto loc_899D7334;
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,76(r7)
	REX_STORE_U8(ctx.r7.u32 + 76, ctx.r10.u8);
	// stw r11,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// b 0x899d7328
	goto loc_899D7328;
loc_899D72D4:
	// lwz r11,44(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d72e8
	if (ctx.cr6.eq) goto loc_899D72E8;
	// addi r11,r11,-3598
	ctx.r11.s64 = ctx.r11.s64 + -3598;
	// stw r11,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r11.u32);
loc_899D72E8:
	// lbz r11,76(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,76(r7)
	REX_STORE_U8(ctx.r7.u32 + 76, ctx.r10.u8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x899d7334
	if (!ctx.cr6.eq) goto loc_899D7334;
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,76(r7)
	REX_STORE_U8(ctx.r7.u32 + 76, ctx.r10.u8);
	// stw r11,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x899d7328
	if (!ctx.cr6.eq) goto loc_899D7328;
	// lis r9,516
	ctx.r9.s64 = 33816576;
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// stw r8,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r8.u32);
loc_899D7328:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x899d7334
	if (!ctx.cr6.eq) goto loc_899D7334;
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_899D7334:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D80C0) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8991a248
	ctx.lr = 0x899D80D4;
	sub_8991A248(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d80f4
	if (ctx.cr6.eq) goto loc_899D80F4;
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
loc_899D80F4:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x89919d28
	ctx.lr = 0x899D80FC;
	sub_89919D28(ctx, base);
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

DEFINE_REX_FUNC(sub_899D84F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899D84F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1584(r1)
	ea = -1584 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,248
	ctx.r9.s64 = 248;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-4
	ctx.r8.s64 = -4;
	// li r7,-4
	ctx.r7.s64 = -4;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x89934fb8
	ctx.lr = 0x899D8530;
	sub_89934FB8(ctx, base);
	// addi r7,r1,456
	ctx.r7.s64 = ctx.r1.s64 + 456;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,224
	ctx.r9.s64 = 224;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r8,-8
	ctx.r8.s64 = -8;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x89934fb8
	ctx.lr = 0x899D8560;
	sub_89934FB8(ctx, base);
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,15160
	ctx.r31.s64 = ctx.r11.s64 + 15160;
loc_899D8570:
	// li r30,0
	ctx.r30.s64 = 0;
loc_899D8574:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r6,r28,r30
	ctx.r6.u64 = ctx.r28.u64 + ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,6336
	ctx.r8.s64 = ctx.r31.s64 + 6336;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r6,90
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(90));
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899D85AC:
	// lhzu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x899d85ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899D85AC;
	// addi r8,r31,6336
	ctx.r8.s64 = ctx.r31.s64 + 6336;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899D85DC:
	// lhzu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x899d85dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899D85DC;
	// addi r8,r31,6336
	ctx.r8.s64 = ctx.r31.s64 + 6336;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899D860C:
	// lhzu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x899d860c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899D860C;
	// addi r8,r31,6336
	ctx.r8.s64 = ctx.r31.s64 + 6336;
	// addi r7,r1,216
	ctx.r7.s64 = ctx.r1.s64 + 216;
	// addi r8,r8,30
	ctx.r8.s64 = ctx.r8.s64 + 30;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899D863C:
	// lhzu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x899d863c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899D863C;
	// addi r8,r31,6336
	ctx.r8.s64 = ctx.r31.s64 + 6336;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899D866C:
	// lhzu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x899d866c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899D866C;
	// addi r8,r31,6336
	ctx.r8.s64 = ctx.r31.s64 + 6336;
	// addi r7,r1,296
	ctx.r7.s64 = ctx.r1.s64 + 296;
	// addi r8,r8,50
	ctx.r8.s64 = ctx.r8.s64 + 50;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899D869C:
	// lhzu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x899d869c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899D869C;
	// addi r8,r31,6336
	ctx.r8.s64 = ctx.r31.s64 + 6336;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// addi r8,r8,60
	ctx.r8.s64 = ctx.r8.s64 + 60;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899D86CC:
	// lhzu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x899d86cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899D86CC;
	// addi r8,r31,6336
	ctx.r8.s64 = ctx.r31.s64 + 6336;
	// addi r7,r1,376
	ctx.r7.s64 = ctx.r1.s64 + 376;
	// addi r8,r8,70
	ctx.r8.s64 = ctx.r8.s64 + 70;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899D86FC:
	// lhzu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x899d86fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899D86FC;
	// addi r8,r31,6336
	ctx.r8.s64 = ctx.r31.s64 + 6336;
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r8,80
	ctx.r8.s64 = ctx.r8.s64 + 80;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899D872C:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x899d872c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899D872C;
	// mulli r10,r6,90
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(90));
	// mulli r11,r6,396
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(396));
	// addi r9,r31,6336
	ctx.r9.s64 = ctx.r31.s64 + 6336;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935880
	ctx.lr = 0x899D875C;
	sub_89935880(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x899d8574
	if (ctx.cr6.lt) goto loc_899D8574;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r29,144
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 144, ctx.xer);
	// blt cr6,0x899d8570
	if (ctx.cr6.lt) goto loc_899D8570;
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DA9AC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,148(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// b 0x899da9e4
	goto loc_899DA9E4;
loc_899DA9E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x899daa00
	if (!ctx.cr6.eq) goto loc_899DAA00;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x899daa00
	if (ctx.cr6.eq) goto loc_899DAA00;
	// bl 0x899db1a0
	ctx.lr = 0x899DAA00;
	sub_899DB1A0(ctx, base);
loc_899DAA00:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(xstart) {
	REX_FUNC_PROLOGUE();
	// b 0x899daa20
	sub_899DAA20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DAB80) {
	REX_FUNC_PROLOGUE();
	// divw r11,r3,r4
	ctx.r11.u64 = uint32_t((ctx.r4.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r3.s32 / ctx.r4.s32 : 0);
	// divw r9,r3,r4
	ctx.r9.u64 = uint32_t((ctx.r4.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r3.s32 / ctx.r4.s32 : 0);
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// rotlwi r10,r3,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r9,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r9.u64;
	// andc r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r11.u64;
	// andc r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 & ~ctx.r10.u64;
	// stw r9,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ld r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DAD48) {
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
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1240
	ctx.r11.s64 = ctx.r11.s64 + 1240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x899dace0
	ctx.lr = 0x899DAD74;
	sub_899DACE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899dad84
	if (ctx.cr0.eq) goto loc_899DAD84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899dabc8
	ctx.lr = 0x899DAD84;
	sub_899DABC8(ctx, base);
loc_899DAD84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_899DB178) {
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
	// bl 0x899db070
	ctx.lr = 0x899DB188;
	sub_899DB070(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
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

DEFINE_REX_FUNC(sub_899DB430) {
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
	// bl 0x899db520
	ctx.lr = 0x899DB448;
	sub_899DB520(ctx, base);
	// bl 0x899dc688
	ctx.lr = 0x899DB44C;
	sub_899DC688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x899db4e8
	if (ctx.cr0.eq) goto loc_899DB4E8;
	// bl 0x899e41e8
	ctx.lr = 0x899DB458;
	__imp__KeTlsAlloc(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r3.u32);
	// beq cr6,0x899db4e8
	if (ctx.cr6.eq) goto loc_899DB4E8;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899dc428
	ctx.lr = 0x899DB478;
	sub_899DC428(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x899db4e8
	if (ctx.cr0.eq) goto loc_899DB4E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899e41c8
	ctx.lr = 0x899DB48C;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x899db4e8
	if (ctx.cr0.eq) goto loc_899DB4E8;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1264
	ctx.r11.s64 = ctx.r11.s64 + 1264;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x899dd038
	ctx.lr = 0x899DB4B4;
	sub_899DD038(ctx, base);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lis r11,-30306
	ctx.r11.s64 = -1986134016;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4804
	ctx.r10.s64 = ctx.r10.s64 + 4804;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-14160
	ctx.r11.s64 = ctx.r11.s64 + -14160;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x899dd050
	ctx.lr = 0x899DB4E0;
	sub_899DD050(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x899db4f0
	goto loc_899DB4F0;
loc_899DB4E8:
	// bl 0x899db1a0
	ctx.lr = 0x899DB4EC;
	sub_899DB1A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_899DB4F0:
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

DEFINE_REX_FUNC(__savegprlr_22) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restgprlr_14) {
	REX_FUNC_PROLOGUE();
	// ld r14,-152(r1)
	ctx.r14.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// ld r15,-144(r1)
	ctx.r15.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	ctx.r16.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
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

DEFINE_REX_FUNC(sub_899DBA90) {
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
	// beq cr6,0x899dbad8
	if (ctx.cr6.eq) goto loc_899DBAD8;
	// bl 0x899e04d0
	ctx.lr = 0x899DBAB0;
	sub_899E04D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x899df8f8
	ctx.lr = 0x899DBABC;
	sub_899DF8F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x899dbad8
	if (!ctx.cr0.eq) goto loc_899DBAD8;
	// bl 0x899dcab8
	ctx.lr = 0x899DBAC8;
	sub_899DCAB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x899dd048
	ctx.lr = 0x899DBAD0;
	sub_899DD048(ctx, base);
	// bl 0x899dca48
	ctx.lr = 0x899DBAD4;
	sub_899DCA48(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_899DBAD8:
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

DEFINE_REX_FUNC(sub_899DC4D8) {
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
	// bl 0x899dc490
	ctx.lr = 0x899DC4E8;
	sub_899DC490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x899dc4f4
	if (ctx.cr0.eq) goto loc_899DC4F4;
	// bl 0x899e0560
	ctx.lr = 0x899DC4F4;
	sub_899E0560(ctx, base);
loc_899DC4F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DC5D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x899e4208
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DC710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899DC718;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x899e04d0
	ctx.lr = 0x899DC730;
	sub_899E04D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x899dc74c
	if (!ctx.cr0.eq) goto loc_899DC74C;
	// bl 0x899dc508
	ctx.lr = 0x899DC73C;
	sub_899DC508(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x899dc4d8
	ctx.lr = 0x899DC744;
	sub_899DC4D8(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x899db508
	ctx.lr = 0x899DC74C;
	sub_899DB508(ctx, base);
loc_899DC74C:
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,152
	ctx.r30.s64 = ctx.r11.s64 + 152;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899dc76c
	if (ctx.cr6.eq) goto loc_899DC76C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x899dc7fc
	goto loc_899DC7FC;
loc_899DC76C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x899dbba8
	ctx.lr = 0x899DC774;
	sub_899DBBA8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x899dc794
	if (!ctx.cr0.eq) goto loc_899DC794;
	// bl 0x899dcab8
	ctx.lr = 0x899DC780;
	sub_899DCAB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x899dc7fc
	goto loc_899DC7FC;
loc_899DC794:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x899dc850
	ctx.lr = 0x899DC79C;
	sub_899DC850(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x899dc7e8
	if (!ctx.cr6.eq) goto loc_899DC7E8;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x899dc5f0
	ctx.lr = 0x899DC7B8;
	sub_899DC5F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x899dc7e0
	if (!ctx.cr0.eq) goto loc_899DC7E0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899dba90
	ctx.lr = 0x899DC7C8;
	sub_899DBA90(ctx, base);
	// bl 0x899dcab8
	ctx.lr = 0x899DC7CC;
	sub_899DCAB8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x899dc7ec
	goto loc_899DC7EC;
loc_899DC7E0:
	// stwx r28,r29,r30
	REX_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x899dc7ec
	goto loc_899DC7EC;
loc_899DC7E8:
	// bl 0x899dba90
	ctx.lr = 0x899DC7EC;
	sub_899DBA90(ctx, base);
loc_899DC7EC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x899dc820
	ctx.lr = 0x899DC7F8;
	sub_899DC820(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_899DC7FC:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DDAA8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899DDAB0;
	__savegprlr_28(ctx, base);
	// lbz r31,4(r4)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lhz r7,2(r4)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r29,5(r4)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r3
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// b 0x899ddbc4
	goto loc_899DDBC4;
loc_899DDADC:
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// ble cr6,0x899ddb00
	if (!ctx.cr6.gt) goto loc_899DDB00;
	// li r6,-4096
	ctx.r6.s64 = -4096;
	// cmplwi cr6,r5,61441
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61441, ctx.xer);
	// bne cr6,0x899ddaf4
	if (!ctx.cr6.eq) goto loc_899DDAF4;
	// li r6,-4112
	ctx.r6.s64 = -4112;
loc_899DDAF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// b 0x899ddb08
	goto loc_899DDB08;
loc_899DDB00:
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// stb r29,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, ctx.r29.u8);
loc_899DDB08:
	// lbz r11,5(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r7,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r31,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, ctx.r31.u8);
	// sth r6,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// bge cr6,0x899ddb6c
	if (!ctx.cr6.lt) goto loc_899DDB6C;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899ddb90
	if (!ctx.cr6.eq) goto loc_899DDB90;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// b 0x899ddb90
	goto loc_899DDB90;
loc_899DDB6C:
	// lwz r11,384(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// addi r9,r3,384
	ctx.r9.s64 = ctx.r3.s64 + 384;
	// b 0x899ddb88
	goto loc_899DDB88;
loc_899DDB78:
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x899ddb90
	if (!ctx.cr6.gt) goto loc_899DDB90;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_899DDB88:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899ddb78
	if (!ctx.cr6.eq) goto loc_899DDB78;
loc_899DDB90:
	// lwz r28,4(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// stw r28,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r28.u32);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r9,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x899ddbd8
	if (!ctx.cr6.lt) goto loc_899DDBD8;
loc_899DDBC4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x899ddadc
	if (!ctx.cr6.eq) goto loc_899DDADC;
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899ddbd8
	if (!ctx.cr0.eq) goto loc_899DDBD8;
	// sth r7,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
loc_899DDBD8:
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DFB74) {
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
	// lwz r30,100(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r26,84(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x899dfbb8
	goto loc_899DFBB8;
loc_899DFBB8:
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

DEFINE_REX_FUNC(sub_899E0438) {
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
	// lwz r21,84(r31)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x899e0470
	goto loc_899E0470;
loc_899E0470:
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

DEFINE_REX_FUNC(sub_899E04E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-30306
	ctx.r9.s64 = -1986134016;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r9,1248
	ctx.r9.s64 = ctx.r9.s64 + 1248;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x899e0544
	if (ctx.cr6.eq) goto loc_899E0544;
	// cmplwi cr6,r5,15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 15, ctx.xer);
	// ble cr6,0x899e0524
	if (!ctx.cr6.gt) goto loc_899E0524;
	// li r11,15
	ctx.r11.s64 = 15;
loc_899E0524:
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899e0548
	if (ctx.cr6.eq) goto loc_899E0548;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x899dc238
	ctx.lr = 0x899E0540;
	sub_899DC238(ctx, base);
	// b 0x899e0548
	goto loc_899E0548;
loc_899E0544:
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_899E0548:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x899e42c8
	ctx.lr = 0x899E0550;
	__imp__RtlRaiseException(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E0748) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r31,-30212
	ctx.r31.s64 = -1979973632;
	// lwz r11,1140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1140);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899e07c4
	if (ctx.cr0.eq) goto loc_899E07C4;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899E0780:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x899e0780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E0780;
	// lwz r3,3816(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3816);
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x899e07c8
	if (!ctx.cr6.eq) goto loc_899E07C8;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,4098
	ctx.r3.u64 = ctx.r3.u64 | 4098;
	// bl 0x899dea30
	ctx.lr = 0x899E07BC;
	sub_899DEA30(ctx, base);
	// stw r3,3816(r31)
	REX_STORE_U32(ctx.r31.u32 + 3816, ctx.r3.u32);
	// b 0x899e07c8
	goto loc_899E07C8;
loc_899E07C4:
	// lwz r3,3816(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3816);
loc_899E07C8:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

DEFINE_REX_FUNC(sub_899E0A48) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899e0a80
	if (ctx.cr6.eq) goto loc_899E0A80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x899e1700
	ctx.lr = 0x899E0A74;
	sub_899E1700(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x899e0a90
	goto loc_899E0A90;
loc_899E0A80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x899e17a8
	ctx.lr = 0x899E0A88;
	sub_899E17A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_899E0A90:
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

DEFINE_REX_FUNC(sub_899E13C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899E13D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x899e1a90
	ctx.lr = 0x899E13F4;
	sub_899E1A90(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x899e1414
	if (!ctx.cr6.eq) goto loc_899E1414;
loc_899E13FC:
	// bl 0x899dcab8
	ctx.lr = 0x899E1400;
	sub_899DCAB8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x899dc948
	ctx.lr = 0x899E140C;
	sub_899DC948(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x899e148c
	goto loc_899E148C;
loc_899E1414:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x899e13fc
	if (ctx.cr6.eq) goto loc_899E13FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x899e1430
	if (!ctx.cr6.eq) goto loc_899E1430;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x899e1440
	goto loc_899E1440;
loc_899E1430:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subf r4,r10,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r10.u64;
loc_899E1440:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x899e1850
	ctx.lr = 0x899E1460;
	sub_899E1850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x899e1474
	if (ctx.cr0.eq) goto loc_899E1474;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x899e148c
	goto loc_899E148C;
loc_899E1474:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899e1210
	ctx.lr = 0x899E148C;
	sub_899E1210(ctx, base);
loc_899E148C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E16E8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,65
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 65, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r3,90
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 90, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E17A8) {
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
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,1400
	ctx.r10.s64 = ctx.r11.s64 + 1400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x899e2968
	ctx.lr = 0x899E17E8;
	sub_899E2968(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x899e2250
	ctx.lr = 0x899E17F8;
	sub_899E2250(ctx, base);
	// clrlwi. r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899e1820
	if (!ctx.cr0.eq) goto loc_899E1820;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x899e1810
	if (!ctx.cr6.eq) goto loc_899E1810;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x899e1838
	goto loc_899E1838;
loc_899E1810:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x899e1834
	if (!ctx.cr6.eq) goto loc_899E1834;
loc_899E1818:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x899e1838
	goto loc_899E1838;
loc_899E1820:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899e1818
	if (!ctx.cr0.eq) goto loc_899E1818;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x899e1838
	if (!ctx.cr0.eq) goto loc_899E1838;
loc_899E1834:
	// li r3,0
	ctx.r3.s64 = 0;
loc_899E1838:
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

DEFINE_REX_FUNC(sub_899E2968) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x899E2970;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899e29d0
	if (!ctx.cr6.eq) goto loc_899E29D0;
	// bl 0x899dcab8
	ctx.lr = 0x899E29BC;
	sub_899DCAB8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x899dc948
	ctx.lr = 0x899E29C8;
	sub_899DC948(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899e32c0
	goto loc_899E32C0;
loc_899E29D0:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_899E29D4:
	// lbz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x899e29fc
	if (ctx.cr6.eq) goto loc_899E29FC;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x899e29fc
	if (ctx.cr6.eq) goto loc_899E29FC;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// beq cr6,0x899e29fc
	if (ctx.cr6.eq) goto loc_899E29FC;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// bne cr6,0x899e2a04
	if (!ctx.cr6.eq) goto loc_899E2A04;
loc_899E29FC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x899e29d4
	goto loc_899E29D4;
loc_899E2A04:
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r21,r8,32768
	ctx.r21.u64 = ctx.r8.u64 | 32768;
loc_899E2A0C:
	// lbz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x899e2da0
	if (ctx.cr6.gt) goto loc_899E2DA0;
	// lis r12,-30320
	ctx.r12.s64 = -1987051520;
	// addi r12,r12,10192
	ctx.r12.s64 = ctx.r12.s64 + 10192;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-30306
	ctx.r12.s64 = -1986134016;
	// nop 
	// addi r12,r12,10820
	ctx.r12.s64 = ctx.r12.s64 + 10820;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899E2A44;
	case 1:
		goto loc_899E2AC0;
	case 2:
		goto loc_899E2B48;
	case 3:
		goto loc_899E2BCC;
	case 4:
		goto loc_899E2C44;
	case 5:
		goto loc_899E2CB4;
	case 6:
		goto loc_899E2CD4;
	case 7:
		goto loc_899E2D54;
	case 8:
		goto loc_899E2D1C;
	case 9:
		goto loc_899E2DAC;
	case 10:
		goto loc_899E2DA0;
	case 11:
		goto loc_899E2D6C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899E2A44:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x899e2a64
	if (ctx.cr6.lt) goto loc_899E2A64;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x899e2a64
	if (ctx.cr6.gt) goto loc_899E2A64;
loc_899E2A58:
	// li r11,3
	ctx.r11.s64 = 3;
loc_899E2A5C:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x899e2a0c
	goto loc_899E2A0C;
loc_899E2A64:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x899e2a88
	if (!ctx.cr6.eq) goto loc_899E2A88;
loc_899E2A80:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x899e2a0c
	goto loc_899E2A0C;
loc_899E2A88:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x899e2ab4
	if (ctx.cr6.eq) goto loc_899E2AB4;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x899e2aa8
	if (ctx.cr6.eq) goto loc_899E2AA8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x899e2d4c
	if (!ctx.cr6.eq) goto loc_899E2D4C;
loc_899E2AA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x899e2a0c
	goto loc_899E2A0C;
loc_899E2AA8:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// b 0x899e2a0c
	goto loc_899E2A0C;
loc_899E2AB4:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// b 0x899e2a0c
	goto loc_899E2A0C;
loc_899E2AC0:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x899e2ad8
	if (ctx.cr6.lt) goto loc_899E2AD8;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x899e2a58
	if (!ctx.cr6.gt) goto loc_899E2A58;
loc_899E2AD8:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x899e2afc
	if (!ctx.cr6.eq) goto loc_899E2AFC;
loc_899E2AF4:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x899e2a0c
	goto loc_899E2A0C;
loc_899E2AFC:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x899e2b3c
	if (ctx.cr6.eq) goto loc_899E2B3C;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x899e2b3c
	if (ctx.cr6.eq) goto loc_899E2B3C;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x899e2aa0
	if (ctx.cr6.eq) goto loc_899E2AA0;
loc_899E2B14:
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// ble cr6,0x899e2d4c
	if (!ctx.cr6.gt) goto loc_899E2D4C;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// ble cr6,0x899e2b34
	if (!ctx.cr6.gt) goto loc_899E2B34;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// ble cr6,0x899e2d4c
	if (!ctx.cr6.gt) goto loc_899E2D4C;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bgt cr6,0x899e2d4c
	if (ctx.cr6.gt) goto loc_899E2D4C;
loc_899E2B34:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x899e2a0c
	goto loc_899E2A0C;
loc_899E2B3C:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x899e2a0c
	goto loc_899E2A0C;
loc_899E2B48:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x899e2b5c
	if (ctx.cr6.lt) goto loc_899E2B5C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x899e2a58
	if (!ctx.cr6.gt) goto loc_899E2A58;
loc_899E2B5C:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x899e2a80
	if (ctx.cr6.eq) goto loc_899E2A80;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x899e2aa0
	if (ctx.cr6.eq) goto loc_899E2AA0;
loc_899E2B80:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_899E2B84:
	// stw r7,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x899e325c
	if (ctx.cr6.eq) goto loc_899E325C;
	// cmplwi cr6,r6,24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 24, ctx.xer);
	// ble cr6,0x899e2bbc
	if (!ctx.cr6.gt) goto loc_899E2BBC;
	// lbz r11,151(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 151);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x899e2bb0
	if (ctx.cr6.lt) goto loc_899E2BB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
loc_899E2BB0:
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_899E2BBC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x899e3248
	if (ctx.cr6.eq) goto loc_899E3248;
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x899e2e28
	goto loc_899E2E28;
loc_899E2BCC:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x899e2c0c
	goto loc_899E2C0C;
loc_899E2BD8:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x899e2c14
	if (ctx.cr6.gt) goto loc_899E2C14;
	// cmplwi cr6,r6,25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 25, ctx.xer);
	// bge cr6,0x899e2bfc
	if (!ctx.cr6.lt) goto loc_899E2BFC;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x899e2c00
	goto loc_899E2C00;
loc_899E2BFC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_899E2C00:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_899E2C0C:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x899e2bd8
	if (!ctx.cr6.lt) goto loc_899E2BD8;
loc_899E2C14:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x899e2af4
	if (ctx.cr6.eq) goto loc_899E2AF4;
loc_899E2C30:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x899e2b3c
	if (ctx.cr6.eq) goto loc_899E2B3C;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x899e2b3c
	if (ctx.cr6.eq) goto loc_899E2B3C;
	// b 0x899e2b14
	goto loc_899E2B14;
loc_899E2C44:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x899e2c70
	if (!ctx.cr6.eq) goto loc_899E2C70;
	// b 0x899e2c64
	goto loc_899E2C64;
loc_899E2C58:
	// lbz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_899E2C64:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x899e2c58
	if (ctx.cr6.eq) goto loc_899E2C58;
loc_899E2C70:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// b 0x899e2ca8
	goto loc_899E2CA8;
loc_899E2C78:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x899e2c30
	if (ctx.cr6.gt) goto loc_899E2C30;
	// cmplwi cr6,r6,25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 25, ctx.xer);
	// bge cr6,0x899e2c9c
	if (!ctx.cr6.lt) goto loc_899E2C9C;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_899E2C9C:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_899E2CA8:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x899e2c78
	if (!ctx.cr6.lt) goto loc_899E2C78;
	// b 0x899e2c30
	goto loc_899E2C30;
loc_899E2CB4:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x899e2b80
	if (ctx.cr6.lt) goto loc_899E2B80;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x899e2b80
	if (ctx.cr6.gt) goto loc_899E2B80;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x899e2a5c
	goto loc_899E2A5C;
loc_899E2CD4:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// addi r5,r7,-2
	ctx.r5.s64 = ctx.r7.s64 + -2;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x899e2cf4
	if (ctx.cr6.lt) goto loc_899E2CF4;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x899e2cf4
	if (ctx.cr6.gt) goto loc_899E2CF4;
loc_899E2CEC:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x899e2a5c
	goto loc_899E2A5C;
loc_899E2CF4:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x899e2d14
	if (ctx.cr6.eq) goto loc_899E2D14;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x899e2d8c
	if (ctx.cr6.eq) goto loc_899E2D8C;
loc_899E2D04:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x899e2b80
	if (!ctx.cr6.eq) goto loc_899E2B80;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x899e2a0c
	goto loc_899E2A0C;
loc_899E2D14:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x899e2a0c
	goto loc_899E2A0C;
loc_899E2D1C:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x899e2d34
	goto loc_899E2D34;
loc_899E2D28:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_899E2D34:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x899e2d28
	if (ctx.cr6.eq) goto loc_899E2D28;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x899e2d4c
	if (ctx.cr6.lt) goto loc_899E2D4C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x899e2cec
	if (!ctx.cr6.gt) goto loc_899E2CEC;
loc_899E2D4C:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x899e2b84
	goto loc_899E2B84;
loc_899E2D54:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x899e2d04
	if (ctx.cr6.lt) goto loc_899E2D04;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x899e2cec
	if (!ctx.cr6.gt) goto loc_899E2CEC;
	// b 0x899e2d04
	goto loc_899E2D04;
loc_899E2D6C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899e2d98
	if (ctx.cr6.eq) goto loc_899E2D98;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x899e2d14
	if (ctx.cr6.eq) goto loc_899E2D14;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x899e2b80
	if (!ctx.cr6.eq) goto loc_899E2B80;
loc_899E2D8C:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r27,-1
	ctx.r27.s64 = -1;
	// b 0x899e2a0c
	goto loc_899E2A0C;
loc_899E2D98:
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_899E2DA0:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x899e2a0c
	if (!ctx.cr6.eq) goto loc_899E2A0C;
	// b 0x899e2b84
	goto loc_899E2B84;
loc_899E2DAC:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// b 0x899e2de4
	goto loc_899E2DE4;
loc_899E2DBC:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x899e2df4
	if (ctx.cr6.gt) goto loc_899E2DF4;
	// mulli r10,r10,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// cmpwi cr6,r10,5200
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5200, ctx.xer);
	// bgt cr6,0x899e2df0
	if (ctx.cr6.gt) goto loc_899E2DF0;
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_899E2DE4:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x899e2dbc
	if (!ctx.cr6.lt) goto loc_899E2DBC;
	// b 0x899e2df4
	goto loc_899E2DF4;
loc_899E2DF0:
	// li r10,5201
	ctx.r10.s64 = 5201;
loc_899E2DF4:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x899e2e10
	goto loc_899E2E10;
loc_899E2DFC:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x899e2d4c
	if (ctx.cr6.gt) goto loc_899E2D4C;
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_899E2E10:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x899e2dfc
	if (!ctx.cr6.lt) goto loc_899E2DFC;
	// b 0x899e2d4c
	goto loc_899E2D4C;
loc_899E2E1C:
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_899E2E28:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x899e2e1c
	if (ctx.cr0.eq) goto loc_899E2E1C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x899e3ed0
	ctx.lr = 0x899E2E40;
	sub_899E3ED0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x899e2e4c
	if (!ctx.cr6.lt) goto loc_899E2E4C;
	// neg r29,r29
	ctx.r29.s64 = static_cast<int64_t>(-ctx.r29.u64);
loc_899E2E4C:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x899e2e5c
	if (!ctx.cr6.eq) goto loc_899E2E5C;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_899E2E5C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x899e2e68
	if (!ctx.cr6.eq) goto loc_899E2E68;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r24.u64;
loc_899E2E68:
	// cmpwi cr6,r11,5200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5200, ctx.xer);
	// bgt cr6,0x899e3274
	if (ctx.cr6.gt) goto loc_899E3274;
	// cmpwi cr6,r11,-5200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5200, ctx.xer);
	// blt cr6,0x899e328c
	if (ctx.cr6.lt) goto loc_899E328C;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// addi r10,r10,4080
	ctx.r10.s64 = ctx.r10.s64 + 4080;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r25,r10,-96
	ctx.r25.s64 = ctx.r10.s64 + -96;
	// beq cr6,0x899e3234
	if (ctx.cr6.eq) goto loc_899E3234;
	// bge cr6,0x899e2ea4
	if (!ctx.cr6.lt) goto loc_899E2EA4;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// neg r26,r11
	ctx.r26.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// addi r11,r10,4432
	ctx.r11.s64 = ctx.r10.s64 + 4432;
	// addi r25,r11,-96
	ctx.r25.s64 = ctx.r11.s64 + -96;
loc_899E2EA4:
	// subfic r11,r23,0
	ctx.xer.ca = ctx.r23.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r23.u64;
	// lhz r10,106(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// sth r11,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r11.u16);
	// beq cr6,0x899e3234
	if (ctx.cr6.eq) goto loc_899E3234;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// li r24,-32768
	ctx.r24.s64 = -32768;
	// ori r23,r10,32768
	ctx.r23.u64 = ctx.r10.u64 | 32768;
loc_899E2ED4:
	// clrlwi. r11,r26,29
	ctx.r11.u64 = ctx.r26.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r25,r25,84
	ctx.r25.s64 = ctx.r25.s64 + 84;
	// srawi r26,r26,3
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 3;
	// beq 0x899e322c
	if (ctx.cr0.eq) goto loc_899E322C;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhz r11,10(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x899e2f14
	if (ctx.cr6.lt) goto loc_899E2F14;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x899dbdb0
	ctx.lr = 0x899E2F04;
	sub_899DBDB0(ctx, base);
	// lwz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 118);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,118(r1)
	REX_STORE_U32(ctx.r1.u32 + 118, ctx.r11.u32);
loc_899E2F14:
	// lhz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// clrlwi r11,r10,17
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFF;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lhz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// xor r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// rlwinm r28,r8,0,16,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// clrlwi r30,r7,16
	ctx.r30.u64 = ctx.r7.u32 & 0xFFFF;
	// bge cr6,0x899e3214
	if (!ctx.cr6.lt) goto loc_899E3214;
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x899e3214
	if (!ctx.cr6.lt) goto loc_899E3214;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,49149
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49149, ctx.xer);
	// bgt cr6,0x899e3214
	if (ctx.cr6.gt) goto loc_899E3214;
	// cmplwi cr6,r11,16319
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16319, ctx.xer);
	// bgt cr6,0x899e2f78
	if (ctx.cr6.gt) goto loc_899E2F78;
loc_899E2F70:
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// b 0x899e3224
	goto loc_899E3224;
loc_899E2F78:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899e2fb4
	if (!ctx.cr6.eq) goto loc_899E2FB4;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x899e2fb4
	if (!ctx.cr0.eq) goto loc_899E2FB4;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899e2fb4
	if (!ctx.cr6.eq) goto loc_899E2FB4;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899e2fb4
	if (!ctx.cr6.eq) goto loc_899E2FB4;
	// sth r22,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r22.u16);
	// b 0x899e322c
	goto loc_899E322C;
loc_899E2FB4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899e2fec
	if (!ctx.cr6.eq) goto loc_899E2FEC;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x899e2fec
	if (!ctx.cr0.eq) goto loc_899E2FEC;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899e2fec
	if (!ctx.cr6.eq) goto loc_899E2FEC;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899e2f70
	if (ctx.cr6.eq) goto loc_899E2F70;
loc_899E2FEC:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r8,r1,86
	ctx.r8.s64 = ctx.r1.s64 + 86;
	// li r3,5
	ctx.r3.s64 = 5;
loc_899E2FF8:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x899e3064
	if (!ctx.cr6.gt) goto loc_899E3064;
	// addi r10,r1,106
	ctx.r10.s64 = ctx.r1.s64 + 106;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_899E3014:
	// lhz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lhz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,2(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x899e303c
	if (ctx.cr6.lt) goto loc_899E303C;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x899e3040
	if (!ctx.cr6.lt) goto loc_899E3040;
loc_899E303C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_899E3040:
	// stw r10,2(r8)
	REX_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899e3058
	if (ctx.cr6.eq) goto loc_899E3058;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_899E3058:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x899e3014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E3014;
loc_899E3064:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bgt 0x899e2ff8
	if (ctx.cr0.gt) goto loc_899E2FF8;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-16382
	ctx.r11.s64 = ctx.r11.s64 + -16382;
loc_899E3084:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x899e30d4
	if (!ctx.cr0.gt) goto loc_899E30D4;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x899e30d4
	if (!ctx.cr0.eq) goto loc_899E30D4;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x899e3084
	goto loc_899E3084;
loc_899E30D4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x899e315c
	if (ctx.cr6.gt) goto loc_899E315C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x899e315c
	if (!ctx.cr0.lt) goto loc_899E315C;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_899E30F8:
	// lhz r7,90(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x899e3108
	if (ctx.cr0.eq) goto loc_899E3108;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_899E3108:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r9,31,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// blt 0x899e30f8
	if (ctx.cr0.lt) goto loc_899E30F8;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// beq cr6,0x899e315c
	if (ctx.cr6.eq) goto loc_899E315C;
	// lhz r10,90(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_899E315C:
	// lhz r9,90(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bgt cr6,0x899e317c
	if (ctx.cr6.gt) goto loc_899E317C;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x899e31dc
	if (!ctx.cr6.eq) goto loc_899E31DC;
loc_899E317C:
	// lwz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 86);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x899e31d4
	if (!ctx.cr6.eq) goto loc_899E31D4;
	// lwz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 82);
	// stw r22,86(r1)
	REX_STORE_U32(ctx.r1.u32 + 86, ctx.r22.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x899e31c8
	if (!ctx.cr6.eq) goto loc_899E31C8;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// stw r22,82(r1)
	REX_STORE_U32(ctx.r1.u32 + 82, ctx.r22.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x899e31bc
	if (!ctx.cr6.eq) goto loc_899E31BC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r21,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r21.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x899e31dc
	goto loc_899E31DC;
loc_899E31BC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x899e31dc
	goto loc_899E31DC;
loc_899E31C8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,82(r1)
	REX_STORE_U32(ctx.r1.u32 + 82, ctx.r10.u32);
	// b 0x899e31dc
	goto loc_899E31DC;
loc_899E31D4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,86(r1)
	REX_STORE_U32(ctx.r1.u32 + 86, ctx.r10.u32);
loc_899E31DC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x899e3214
	if (!ctx.cr6.lt) goto loc_899E3214;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// lhz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// stw r8,102(r1)
	REX_STORE_U32(ctx.r1.u32 + 102, ctx.r8.u32);
	// stw r7,98(r1)
	REX_STORE_U32(ctx.r1.u32 + 98, ctx.r7.u32);
	// sth r11,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// b 0x899e322c
	goto loc_899E322C;
loc_899E3214:
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// clrlwi. r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899e3224
	if (!ctx.cr0.eq) goto loc_899E3224;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
loc_899E3224:
	// stw r22,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
loc_899E322C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x899e2ed4
	if (!ctx.cr6.eq) goto loc_899E2ED4;
loc_899E3234:
	// lhz r11,106(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lwz r8,102(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 102);
	// lwz r9,98(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 98);
	// lhz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// b 0x899e32a0
	goto loc_899E32A0;
loc_899E3248:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// b 0x899e32a0
	goto loc_899E32A0;
loc_899E325C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r22,4
	ctx.r22.s64 = 4;
	// b 0x899e32a0
	goto loc_899E32A0;
loc_899E3274:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r22,2
	ctx.r22.s64 = 2;
	// b 0x899e32a0
	goto loc_899E32A0;
loc_899E328C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r22,1
	ctx.r22.s64 = 1;
loc_899E32A0:
	// sth r11,10(r20)
	REX_STORE_U16(ctx.r20.u32 + 10, ctx.r11.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r19,16
	ctx.r11.u64 = ctx.r19.u32 & 0xFFFF;
	// stw r8,6(r20)
	REX_STORE_U32(ctx.r20.u32 + 6, ctx.r8.u32);
	// stw r9,2(r20)
	REX_STORE_U32(ctx.r20.u32 + 2, ctx.r9.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r11.u16);
loc_899E32C0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

