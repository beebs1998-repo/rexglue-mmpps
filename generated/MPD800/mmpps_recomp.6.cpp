#include "mmpps_funcs.6.h"

DEFINE_REX_FUNC(sub_89915EC0) {
	REX_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-30251
	ctx.r8.s64 = -1982529536;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,12080
	ctx.r8.s64 = ctx.r8.s64 + 12080;
loc_89915ED4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x89915ed4
	if (ctx.cr6.lt) goto loc_89915ED4;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// lis r3,-30276
	ctx.r3.s64 = -1984167936;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// sth r9,26536(r7)
	REX_STORE_U16(ctx.r7.u32 + 26536, ctx.r9.u16);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// sth r9,-9520(r6)
	REX_STORE_U16(ctx.r6.u32 + -9520, ctx.r9.u16);
	// stb r9,8418(r5)
	REX_STORE_U8(ctx.r5.u32 + 8418, ctx.r9.u8);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// stb r9,9539(r4)
	REX_STORE_U8(ctx.r4.u32 + 9539, ctx.r9.u8);
	// lis r5,-30242
	ctx.r5.s64 = -1981939712;
	// stb r9,32019(r3)
	REX_STORE_U8(ctx.r3.u32 + 32019, ctx.r9.u8);
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// sth r9,27276(r8)
	REX_STORE_U16(ctx.r8.u32 + 27276, ctx.r9.u16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stb r9,6054(r7)
	REX_STORE_U8(ctx.r7.u32 + 6054, ctx.r9.u8);
	// lis r7,392
	ctx.r7.s64 = 25690112;
	// stb r9,9535(r6)
	REX_STORE_U8(ctx.r6.u32 + 9535, ctx.r9.u8);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r7,-21584(r5)
	REX_STORE_U32(ctx.r5.u32 + -21584, ctx.r7.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stb r9,12266(r4)
	REX_STORE_U8(ctx.r4.u32 + 12266, ctx.r9.u8);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r9,6035(r3)
	REX_STORE_U8(ctx.r3.u32 + 6035, ctx.r9.u8);
	// addi r8,r8,5768
	ctx.r8.s64 = ctx.r8.s64 + 5768;
loc_89915F60:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// blt cr6,0x89915f60
	if (ctx.cr6.lt) goto loc_89915F60;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// addi r8,r10,5368
	ctx.r8.s64 = ctx.r10.s64 + 5368;
	// lis r5,12
	ctx.r5.s64 = 786432;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,5368(r10)
	REX_STORE_U32(ctx.r10.u32 + 5368, ctx.r9.u32);
	// ori r5,r5,3164
	ctx.r5.u64 = ctx.r5.u64 | 3164;
	// lwz r3,3472(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 3472);
	// stw r9,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// b 0x899dcca0
	sub_899DCCA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89916BD8) {
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
	// lwz r11,7924(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 7924);
	// lbz r7,-31405(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + -31405);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7924(r9)
	REX_STORE_U32(ctx.r9.u32 + 7924, ctx.r11.u32);
	// beq cr6,0x89916c50
	if (ctx.cr6.eq) goto loc_89916C50;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r9,586(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x89916c50
	if (!ctx.cr6.eq) goto loc_89916C50;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89916c40
	if (!ctx.cr6.eq) goto loc_89916C40;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x899d9448
	ctx.lr = 0x89916C2C;
	sub_899D9448(ctx, base);
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
loc_89916C40:
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r8,r10,-10736
	ctx.r8.s64 = ctx.r10.s64 + -10736;
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
loc_89916C50:
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

DEFINE_REX_FUNC(sub_899172D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,7924(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 7924);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// stw r11,7924(r9)
	REX_STORE_U32(ctx.r9.u32 + 7924, ctx.r11.u32);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,524(r8)
	REX_STORE_U32(ctx.r8.u32 + 524, ctx.r11.u32);
	// stw r10,540(r7)
	REX_STORE_U32(ctx.r7.u32 + 540, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89917638) {
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
	// bl 0x89934298
	ctx.lr = 0x8991765C;
	sub_89934298(ctx, base);
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

DEFINE_REX_FUNC(sub_89917670) {
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
	// bl 0x89934058
	ctx.lr = 0x89917694;
	sub_89934058(ctx, base);
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

DEFINE_REX_FUNC(sub_89917E48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x89917E50;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsb r27,r3
	ctx.r27.s64 = ctx.r3.s8;
	// addi r23,r11,7896
	ctx.r23.s64 = ctx.r11.s64 + 7896;
	// rlwinm r22,r27,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r22,r23
	ctx.r11.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89917f1c
	if (ctx.cr6.eq) goto loc_89917F1C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x89917f1c
	if (!ctx.cr6.gt) goto loc_89917F1C;
	// lis r28,-30275
	ctx.r28.s64 = -1984102400;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r30,r10,9656
	ctx.r30.s64 = ctx.r10.s64 + 9656;
	// lwz r10,9520(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 9520);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r24,20
	ctx.r24.s64 = 20;
	// addi r25,r9,14120
	ctx.r25.s64 = ctx.r9.s64 + 14120;
	// addi r26,r11,10208
	ctx.r26.s64 = ctx.r11.s64 + 10208;
loc_89917EA0:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r8,r26
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r26.u32);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// mulli r31,r7,92
	ctx.r31.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(92));
	// lwzx r6,r31,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r5,r6,0,1,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x89917f04
	if (ctx.cr6.eq) goto loc_89917F04;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r9,r25,4
	ctx.r9.s64 = ctx.r25.s64 + 4;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x89917EF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,9520(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 9520);
	// addi r5,r30,88
	ctx.r5.s64 = ctx.r30.s64 + 88;
	// subf r4,r21,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r21.u64;
	// divw r3,r4,r24
	ctx.r3.u64 = uint32_t((ctx.r24.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r4.s32 / ctx.r24.s32 : 0);
	// sthx r3,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u16);
loc_89917F04:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lhzx r9,r22,r23
	ctx.r9.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r23.u32);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x89917ea0
	if (ctx.cr6.lt) goto loc_89917EA0;
loc_89917F1C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89918E78) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r8,r11,4176
	ctx.r8.s64 = ctx.r11.s64 + 4176;
loc_89918E90:
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_89918E98:
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mulli r4,r7,100
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(100));
	// stwx r5,r4,r8
	REX_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r5.u32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// blt cr6,0x89918e98
	if (ctx.cr6.lt) goto loc_89918E98;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89918e90
	if (ctx.cr6.lt) goto loc_89918E90;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r7,r11,5376
	ctx.r7.s64 = ctx.r11.s64 + 5376;
loc_89918ED8:
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_89918EE0:
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_89918EEC:
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mulli r11,r10,1600
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1600));
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// stwx r30,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r30.u32);
	// blt cr6,0x89918eec
	if (ctx.cr6.lt) goto loc_89918EEC;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89918ee0
	if (ctx.cr6.lt) goto loc_89918EE0;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// blt cr6,0x89918ed8
	if (ctx.cr6.lt) goto loc_89918ED8;
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89919238) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x89919240;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r30,r11,9512
	ctx.r30.s64 = ctx.r11.s64 + 9512;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r25,r10,4176
	ctx.r25.s64 = ctx.r10.s64 + 4176;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lis r24,-30274
	ctx.r24.s64 = -1984036864;
	// addi r26,r11,13480
	ctx.r26.s64 = ctx.r11.s64 + 13480;
loc_8991926C:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// sth r23,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r23.u16);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_89919278:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899192b0
	if (ctx.cr6.eq) goto loc_899192B0;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// addi r10,r26,12
	ctx.r10.s64 = ctx.r26.s64 + 12;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// sth r7,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r7.u16);
	// extsh r3,r28
	ctx.r3.s64 = ctx.r28.s16;
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x899192B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899192B0:
	// lhz r11,584(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 584);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x89919278
	if (!ctx.cr6.eq) goto loc_89919278;
	// addi r27,r27,1600
	ctx.r27.s64 = ctx.r27.s64 + 1600;
	// addi r11,r25,3200
	ctx.r11.s64 = ctx.r25.s64 + 3200;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8991926c
	if (ctx.cr6.lt) goto loc_8991926C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89919A48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89919A50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lhz r10,7928(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 7928);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89919aec
	if (ctx.cr6.eq) goto loc_89919AEC;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r10,8160
	ctx.r29.s64 = ctx.r10.s64 + 8160;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// rlwinm r10,r11,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// addi r11,r9,21760
	ctx.r11.s64 = ctx.r9.s64 + 21760;
	// li r31,0
	ctx.r31.s64 = 0;
	// lhzx r8,r28,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89919aec
	if (ctx.cr6.eq) goto loc_89919AEC;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_89919A98:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r9,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,48(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,28(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,44(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwzx r10,r27,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r4.u32);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bl 0x89939350
	ctx.lr = 0x89919ADC;
	sub_89939350(ctx, base);
	// lhzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r29.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89919a98
	if (ctx.cr6.lt) goto loc_89919A98;
loc_89919AEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89919D28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bgt cr6,0x89919e24
	if (ctx.cr6.gt) goto loc_89919E24;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lhz r10,-9220(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -9220);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x89919e24
	if (ctx.cr6.gt) goto loc_89919E24;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,7904
	ctx.r8.s64 = ctx.r11.s64 + 7904;
	// lhz r3,-10752(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + -10752);
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// lhz r11,9532(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 9532);
	// ori r6,r7,65535
	ctx.r6.u64 = ctx.r7.u64 | 65535;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r4,r10,6424
	ctx.r4.s64 = ctx.r10.s64 + 6424;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x89919dc8
	if (ctx.cr6.eq) goto loc_89919DC8;
	// mulli r10,r11,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bge cr6,0x89919dc8
	if (!ctx.cr6.lt) goto loc_89919DC8;
loc_89919D90:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89919db8
	if (!ctx.cr6.eq) goto loc_89919DB8;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89919e34
	if (ctx.cr6.eq) goto loc_89919E34;
loc_89919DB8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x89919d90
	if (ctx.cr6.lt) goto loc_89919D90;
loc_89919DC8:
	// lis r31,-30253
	ctx.r31.s64 = -1982660608;
	// lhz r11,-10060(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -10060);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x89919e24
	if (ctx.cr6.eq) goto loc_89919E24;
	// mulli r10,r11,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bge cr6,0x89919e24
	if (!ctx.cr6.lt) goto loc_89919E24;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_89919DEC:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89919e14
	if (ctx.cr6.eq) goto loc_89919E14;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89919e4c
	if (ctx.cr6.eq) goto loc_89919E4C;
loc_89919E14:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x89919dec
	if (ctx.cr6.lt) goto loc_89919DEC;
loc_89919E24:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_89919E34:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,9532(r30)
	REX_STORE_U16(ctx.r30.u32 + 9532, ctx.r11.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_89919E4C:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// sth r3,9532(r30)
	REX_STORE_U16(ctx.r30.u32 + 9532, ctx.r3.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,-10060(r31)
	REX_STORE_U16(ctx.r31.u32 + -10060, ctx.r11.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991AAE8) {
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
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r11,204
	ctx.r9.s64 = ctx.r11.s64 + 204;
	// addi r8,r11,200
	ctx.r8.s64 = ctx.r11.s64 + 200;
	// lbzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lbzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8991ab40
	if (ctx.cr6.lt) goto loc_8991AB40;
	// addi r9,r11,52
	ctx.r9.s64 = ctx.r11.s64 + 52;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r3,r10,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// bl 0x8991a8f0
	ctx.lr = 0x8991AB34;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8991ab44
	if (ctx.cr6.eq) goto loc_8991AB44;
loc_8991AB40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8991AB44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991B418) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x8991B420;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lhz r10,12144(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991b530
	if (ctx.cr6.eq) goto loc_8991B530;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r10,12480
	ctx.r28.s64 = ctx.r10.s64 + 12480;
	// lis r9,-30286
	ctx.r9.s64 = -1984823296;
	// rlwinm r10,r11,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// addi r11,r9,21760
	ctx.r11.s64 = ctx.r9.s64 + 21760;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhzx r8,r27,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8991b530
	if (ctx.cr6.eq) goto loc_8991B530;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r26,60
	ctx.r26.s64 = 60;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
loc_8991B474:
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// lbz r9,204(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 204);
	// lbz r10,205(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 205);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// subf. r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8991b490
	if (!ctx.cr0.lt) goto loc_8991B490;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8991B490:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x8991b4b0
	if (!ctx.cr6.lt) goto loc_8991B4B0;
	// lbz r10,203(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 203);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991b4b4
	if (ctx.cr6.eq) goto loc_8991B4B4;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,203(r11)
	REX_STORE_U8(ctx.r11.u32 + 203, ctx.r10.u8);
	// b 0x8991b4b4
	goto loc_8991B4B4;
loc_8991B4B0:
	// stb r26,203(r11)
	REX_STORE_U8(ctx.r11.u32 + 203, ctx.r26.u8);
loc_8991B4B4:
	// stb r9,205(r11)
	REX_STORE_U8(ctx.r11.u32 + 205, ctx.r9.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8991b4e8
	if (ctx.cr6.eq) goto loc_8991B4E8;
loc_8991B4CC:
	// lhz r10,148(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 148);
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8991b4cc
	if (!ctx.cr6.eq) goto loc_8991B4CC;
loc_8991B4E8:
	// lbz r10,200(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 200);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lbz r9,68(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 68);
	// subf r7,r7,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lbz r8,203(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 203);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// lwz r6,52(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lwz r4,40(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// li r9,256
	ctx.r9.s64 = 256;
	// bne cr6,0x8991b51c
	if (!ctx.cr6.eq) goto loc_8991B51C;
	// lwz r9,100(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
loc_8991B51C:
	// bl 0x8993afc0
	ctx.lr = 0x8991B520;
	sub_8993AFC0(ctx, base);
	// lhzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r28.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8991b474
	if (ctx.cr6.lt) goto loc_8991B474;
loc_8991B530:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991C048) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8991C050;
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
	// li r3,12
	ctx.r3.s64 = 12;
	// lbzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r4,r31,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x899d8e20
	ctx.lr = 0x8991C084;
	sub_899D8E20(ctx, base);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// li r4,13
	ctx.r4.s64 = 13;
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
	// beq cr6,0x8991c0d4
	if (ctx.cr6.eq) goto loc_8991C0D4;
	// bl 0x899d4440
	ctx.lr = 0x8991C0D0;
	sub_899D4440(ctx, base);
	// b 0x8991c0d8
	goto loc_8991C0D8;
loc_8991C0D4:
	// bl 0x899d4e08
	ctx.lr = 0x8991C0D8;
	sub_899D4E08(ctx, base);
loc_8991C0D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// lbzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r4,r31,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x8992e698
	ctx.lr = 0x8991C0EC;
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

DEFINE_REX_FUNC(sub_8991C718) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8991C720;
	__savegprlr_28(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r3,r10,168
	ctx.r3.s64 = ctx.r10.s64 + 168;
	// addi r7,r10,176
	ctx.r7.s64 = ctx.r10.s64 + 176;
	// lwzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8991c790
	if (ctx.cr6.eq) goto loc_8991C790;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bge cr6,0x8991c75c
	if (!ctx.cr6.lt) goto loc_8991C75C;
	// neg r6,r5
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r5.u64);
loc_8991C75C:
	// addi r9,r10,172
	ctx.r9.s64 = ctx.r10.s64 + 172;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8991c774
	if (!ctx.cr6.lt) goto loc_8991C774;
	// stwx r7,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u32);
	// b 0x8991c790
	goto loc_8991C790;
loc_8991C774:
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8991c788
	if (!ctx.cr6.gt) goto loc_8991C788;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x8991c78c
	goto loc_8991C78C;
loc_8991C788:
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_8991C78C:
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
loc_8991C790:
	// addi r9,r10,162
	ctx.r9.s64 = ctx.r10.s64 + 162;
	// addi r7,r10,158
	ctx.r7.s64 = ctx.r10.s64 + 158;
	// lhzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// lhzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8991c7fc
	if (ctx.cr6.eq) goto loc_8991C7FC;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// rlwinm r5,r9,0,17,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FC0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bge cr6,0x8991c7c8
	if (!ctx.cr6.lt) goto loc_8991C7C8;
	// neg r6,r5
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r5.u64);
loc_8991C7C8:
	// addi r9,r10,160
	ctx.r9.s64 = ctx.r10.s64 + 160;
	// lhzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8991c7e4
	if (!ctx.cr6.lt) goto loc_8991C7E4;
	// sthx r4,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u16);
	// b 0x8991c7fc
	goto loc_8991C7FC;
loc_8991C7E4:
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// ble cr6,0x8991c7f4
	if (!ctx.cr6.gt) goto loc_8991C7F4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x8991c7f8
	goto loc_8991C7F8;
loc_8991C7F4:
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_8991C7F8:
	// sthx r9,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u16);
loc_8991C7FC:
	// addi r8,r10,200
	ctx.r8.s64 = ctx.r10.s64 + 200;
	// addi r6,r10,201
	ctx.r6.s64 = ctx.r10.s64 + 201;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8991c828
	if (ctx.cr6.eq) goto loc_8991C828;
	// ble cr6,0x8991c820
	if (!ctx.cr6.gt) goto loc_8991C820;
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// b 0x8991c824
	goto loc_8991C824;
loc_8991C820:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8991C824:
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
loc_8991C828:
	// lhzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// lwzx r7,r11,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r4,r10,48
	ctx.r4.s64 = ctx.r10.s64 + 48;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// addi r3,r8,9016
	ctx.r3.s64 = ctx.r8.s64 + 9016;
	// srawi r9,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 6;
	// addi r6,r10,164
	ctx.r6.s64 = ctx.r10.s64 + 164;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lwzx r30,r11,r4
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r29,r9,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// srawi r9,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 4;
	// rlwinm r8,r8,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// addi r5,r10,52
	ctx.r5.s64 = ctx.r10.s64 + 52;
	// lhzx r29,r29,r3
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r3.u32);
	// addi r28,r10,56
	ctx.r28.s64 = ctx.r10.s64 + 56;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lhzx r8,r8,r3
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r3,r11,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// mullw r29,r29,r9
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// lwzx r31,r11,r5
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// mullw r3,r8,r9
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stwx r7,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// srawi r8,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 8;
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stwx r9,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u32);
	// add r6,r8,r31
	ctx.r6.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r7,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
	// stwx r6,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991DB50) {
	REX_FUNC_PROLOGUE();
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r10,12800
	ctx.r10.s64 = ctx.r10.s64 + 12800;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8991db78
	if (!ctx.cr6.eq) goto loc_8991DB78;
loc_8991DB70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8991DB78:
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// addi r10,r10,181
	ctx.r10.s64 = ctx.r10.s64 + 181;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r7,r5,16
	ctx.r7.u64 = ctx.r5.u32 & 0xFFFF;
	// lhz r6,-9516(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + -9516);
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// rlwinm r8,r5,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8991db70
	if (ctx.cr6.lt) goto loc_8991DB70;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991F358) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8991F360;
	__savegprlr_27(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lbz r10,9527(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 9527);
	// lbz r7,586(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 586);
	// lwz r11,26932(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 26932);
	// mulli r8,r10,1800
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1800));
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r6,r8,-1800
	ctx.r6.s64 = ctx.r8.s64 + -1800;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x8991f458
	if (ctx.cr6.eq) goto loc_8991F458;
	// cmpwi cr6,r11,1800
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1800, ctx.xer);
	// bge cr6,0x8991f458
	if (!ctx.cr6.lt) goto loc_8991F458;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x8991f458
	if (!ctx.cr6.lt) goto loc_8991F458;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
	// lbz r6,530(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 530);
	// lbz r7,633(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 633);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8991f3e8
	if (ctx.cr6.eq) goto loc_8991F3E8;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991f3e8
	if (ctx.cr6.eq) goto loc_8991F3E8;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// addi r11,r11,-25512
	ctx.r11.s64 = ctx.r11.s64 + -25512;
	// lbz r8,27280(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 27280);
	// clrlwi r8,r8,25
	ctx.r8.u64 = ctx.r8.u32 & 0x7F;
	// stb r8,624(r10)
	REX_STORE_U8(ctx.r10.u32 + 624, ctx.r8.u8);
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x8991f408
	goto loc_8991F408;
loc_8991F3E8:
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r11,r11,-25512
	ctx.r11.s64 = ctx.r11.s64 + -25512;
	// lbz r8,27280(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 27280);
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r7,r7,25
	ctx.r7.u64 = ctx.r7.u32 & 0x7F;
	// stb r8,633(r10)
	REX_STORE_U8(ctx.r10.u32 + 633, ctx.r8.u8);
	// stb r7,624(r10)
	REX_STORE_U8(ctx.r10.u32 + 624, ctx.r7.u8);
loc_8991F408:
	// lbz r8,1329(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1329);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8991f43c
	if (ctx.cr6.eq) goto loc_8991F43C;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8991f43c
	if (ctx.cr6.eq) goto loc_8991F43C;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lbz r11,7384(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 7384);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,1320(r10)
	REX_STORE_U8(ctx.r10.u32 + 1320, ctx.r11.u8);
	// stbx r11,r7,r9
	REX_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u8);
	// b 0x8991f478
	goto loc_8991F478;
loc_8991F43C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbz r11,7384(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 7384);
	// clrlwi r9,r7,25
	ctx.r9.u64 = ctx.r7.u32 & 0x7F;
	// stb r11,1329(r10)
	REX_STORE_U8(ctx.r10.u32 + 1329, ctx.r11.u8);
	// b 0x8991f474
	goto loc_8991F474;
loc_8991F458:
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
	// lbz r11,27280(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 27280);
	// lbz r9,7384(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 7384);
	// stb r11,624(r10)
	REX_STORE_U8(ctx.r10.u32 + 624, ctx.r11.u8);
loc_8991F474:
	// stb r9,1320(r10)
	REX_STORE_U8(ctx.r10.u32 + 1320, ctx.r9.u8);
loc_8991F478:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8991F47C:
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
	// blt cr6,0x8991f47c
	if (ctx.cr6.lt) goto loc_8991F47C;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899225F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89922600;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r3,r11,15848
	ctx.r3.s64 = ctx.r11.s64 + 15848;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x89931d78
	ctx.lr = 0x89922620;
	sub_89931D78(ctx, base);
	// bl 0x89921b18
	ctx.lr = 0x89922624;
	sub_89921B18(ctx, base);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lhz r3,26520(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 26520);
	// lhz r4,-9492(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -9492);
	// lhz r8,20400(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 20400);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x89922658
	if (!ctx.cr6.lt) goto loc_89922658;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x89922660
	if (!ctx.cr6.lt) goto loc_89922660;
loc_89922658:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r8,26520(r9)
	REX_STORE_U16(ctx.r9.u32 + 26520, ctx.r8.u16);
loc_89922660:
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
	// beq cr6,0x89922728
	if (ctx.cr6.eq) goto loc_89922728;
	// lbz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 256);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
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
	// lhz r6,25060(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 25060);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,592
	ctx.r5.s64 = ctx.r11.s64 + 592;
loc_899226A0:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899226c8
	if (ctx.cr6.eq) goto loc_899226C8;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x899226c8
	if (!ctx.cr6.eq) goto loc_899226C8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r8,26520(r9)
	REX_STORE_U16(ctx.r9.u32 + 26520, ctx.r8.u16);
loc_899226C8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x899226f4
	if (ctx.cr6.eq) goto loc_899226F4;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899226e4
	if (!ctx.cr6.eq) goto loc_899226E4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_899226E4:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,26520(r9)
	REX_STORE_U16(ctx.r9.u32 + 26520, ctx.r3.u16);
loc_899226F4:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mulli r11,r11,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89922724
	if (!ctx.cr6.eq) goto loc_89922724;
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
	// bne cr6,0x899226a0
	if (!ctx.cr6.eq) goto loc_899226A0;
loc_89922724:
	// sth r3,26520(r9)
	REX_STORE_U16(ctx.r9.u32 + 26520, ctx.r3.u16);
loc_89922728:
	// bl 0x89921f60
	ctx.lr = 0x8992272C;
	sub_89921F60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89922FC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89922FD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// addi r3,r11,16008
	ctx.r3.s64 = ctx.r11.s64 + 16008;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x89931d78
	ctx.lr = 0x89922FF0;
	sub_89931D78(ctx, base);
	// bl 0x89922868
	ctx.lr = 0x89922FF4;
	sub_89922868(ctx, base);
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lhz r4,528(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 528);
	// lhz r3,9540(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 9540);
	// lhz r8,-31408(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + -31408);
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
	// lhz r10,-9532(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + -9532);
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
	// beq cr6,0x89923058
	if (ctx.cr6.eq) goto loc_89923058;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r8,9540(r9)
	REX_STORE_U16(ctx.r9.u32 + 9540, ctx.r8.u16);
loc_89923058:
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
	// beq cr6,0x8992311c
	if (ctx.cr6.eq) goto loc_8992311C;
	// lbz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 256);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r7,0
	ctx.r7.s64 = 0;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// rlwinm r28,r11,0,29,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lhz r6,9644(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 9644);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// addi r31,r11,6424
	ctx.r31.s64 = ctx.r11.s64 + 6424;
loc_89923098:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899230c0
	if (ctx.cr6.eq) goto loc_899230C0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x899230c0
	if (!ctx.cr6.eq) goto loc_899230C0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r8,9540(r9)
	REX_STORE_U16(ctx.r9.u32 + 9540, ctx.r8.u16);
loc_899230C0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x899230e8
	if (ctx.cr6.eq) goto loc_899230E8;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x899230d8
	if (!ctx.cr6.eq) goto loc_899230D8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_899230D8:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,9540(r9)
	REX_STORE_U16(ctx.r9.u32 + 9540, ctx.r3.u16);
loc_899230E8:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mulli r11,r11,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89923118
	if (!ctx.cr6.eq) goto loc_89923118;
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
	// bne cr6,0x89923098
	if (!ctx.cr6.eq) goto loc_89923098;
loc_89923118:
	// sth r3,9540(r9)
	REX_STORE_U16(ctx.r9.u32 + 9540, ctx.r3.u16);
loc_8992311C:
	// bl 0x899216f8
	ctx.lr = 0x89923120;
	sub_899216F8(ctx, base);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
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
	// addi r5,r5,12624
	ctx.r5.s64 = ctx.r5.s64 + 12624;
loc_89923148:
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
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
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
	// blt cr6,0x89923148
	if (ctx.cr6.lt) goto loc_89923148;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89926B10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x89926B18;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lbz r25,530(r11)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 530);
	// addi r31,r10,5344
	ctx.r31.s64 = ctx.r10.s64 + 5344;
	// lbz r24,12267(r7)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r7.u32 + 12267);
	// addi r28,r9,12280
	ctx.r28.s64 = ctx.r9.s64 + 12280;
	// addi r30,r8,-31400
	ctx.r30.s64 = ctx.r8.s64 + -31400;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x89926bc4
	if (ctx.cr6.eq) goto loc_89926BC4;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89926bc4
	if (!ctx.cr6.eq) goto loc_89926BC4;
	// lis r6,-16192
	ctx.r6.s64 = -1061158912;
	// addi r3,r31,2260
	ctx.r3.s64 = ctx.r31.s64 + 2260;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,39
	ctx.r4.s64 = 39;
	// bl 0x89931d78
	ctx.lr = 0x89926B70;
	sub_89931D78(ctx, base);
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,-9516(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -9516);
	// bl 0x89931bb8
	ctx.lr = 0x89926B84;
	sub_89931BB8(ctx, base);
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r6,-16192
	ctx.r6.s64 = -1061158912;
	// stb r11,39(r28)
	REX_STORE_U8(ctx.r28.u32 + 39, ctx.r11.u8);
	// addi r3,r31,2264
	ctx.r3.s64 = ctx.r31.s64 + 2264;
	// ori r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 16384;
	// lwz r11,12076(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12076);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,39
	ctx.r4.s64 = 39;
	// rlwinm r9,r11,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r8,r11,30,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3C;
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r10,5040(r30)
	REX_STORE_U32(ctx.r30.u32 + 5040, ctx.r10.u32);
	// stw r11,5036(r30)
	REX_STORE_U32(ctx.r30.u32 + 5036, ctx.r11.u32);
	// bl 0x89931d78
	ctx.lr = 0x89926BC4;
	sub_89931D78(ctx, base);
loc_89926BC4:
	// lis r11,-16320
	ctx.r11.s64 = -1069547520;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// ori r26,r11,16384
	ctx.r26.u64 = ctx.r11.u64 | 16384;
	// beq cr6,0x89926d78
	if (ctx.cr6.eq) goto loc_89926D78;
	// bl 0x8991fc80
	ctx.lr = 0x89926BD8;
	sub_8991FC80(ctx, base);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r29,6048(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x89926c40
	if (ctx.cr6.eq) goto loc_89926C40;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r11,17000
	ctx.r3.s64 = ctx.r11.s64 + 17000;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x89931d78
	ctx.lr = 0x89926C00;
	sub_89931D78(ctx, base);
	// rlwinm r10,r29,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r29,28,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFF;
	// rlwinm r5,r10,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r9,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r4,r10,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3C;
	// rlwinm r7,r29,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,23(r28)
	REX_STORE_U8(ctx.r28.u32 + 23, ctx.r11.u8);
	// lwzx r8,r4,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// stw r8,2956(r30)
	REX_STORE_U32(ctx.r30.u32 + 2956, ctx.r8.u32);
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwzx r9,r5,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r10,2964(r30)
	REX_STORE_U32(ctx.r30.u32 + 2964, ctx.r10.u32);
	// stw r9,2960(r30)
	REX_STORE_U32(ctx.r30.u32 + 2960, ctx.r9.u32);
	// stw r11,2968(r30)
	REX_STORE_U32(ctx.r30.u32 + 2968, ctx.r11.u32);
loc_89926C40:
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lwz r29,32028(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 32028);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x89926ca8
	if (ctx.cr6.eq) goto loc_89926CA8;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r11,17004
	ctx.r3.s64 = ctx.r11.s64 + 17004;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x89931d78
	ctx.lr = 0x89926C68;
	sub_89931D78(ctx, base);
	// rlwinm r10,r29,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r29,28,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFF;
	// rlwinm r5,r10,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r9,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r4,r10,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3C;
	// rlwinm r7,r29,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,22(r28)
	REX_STORE_U8(ctx.r28.u32 + 22, ctx.r11.u8);
	// lwzx r8,r4,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// stw r8,2828(r30)
	REX_STORE_U32(ctx.r30.u32 + 2828, ctx.r8.u32);
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwzx r9,r5,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r10,2836(r30)
	REX_STORE_U32(ctx.r30.u32 + 2836, ctx.r10.u32);
	// stw r9,2832(r30)
	REX_STORE_U32(ctx.r30.u32 + 2832, ctx.r9.u32);
	// stw r11,2840(r30)
	REX_STORE_U32(ctx.r30.u32 + 2840, ctx.r11.u32);
loc_89926CA8:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r29,3356(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 3356);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x89926d10
	if (ctx.cr6.eq) goto loc_89926D10;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r11,17008
	ctx.r3.s64 = ctx.r11.s64 + 17008;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,21
	ctx.r4.s64 = 21;
	// bl 0x89931d78
	ctx.lr = 0x89926CD0;
	sub_89931D78(ctx, base);
	// rlwinm r10,r29,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r29,28,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFF;
	// rlwinm r5,r10,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r9,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r4,r10,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3C;
	// rlwinm r7,r29,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,21(r28)
	REX_STORE_U8(ctx.r28.u32 + 21, ctx.r11.u8);
	// lwzx r8,r4,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// stw r8,2700(r30)
	REX_STORE_U32(ctx.r30.u32 + 2700, ctx.r8.u32);
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwzx r9,r5,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r10,2708(r30)
	REX_STORE_U32(ctx.r30.u32 + 2708, ctx.r10.u32);
	// stw r9,2704(r30)
	REX_STORE_U32(ctx.r30.u32 + 2704, ctx.r9.u32);
	// stw r11,2712(r30)
	REX_STORE_U32(ctx.r30.u32 + 2712, ctx.r11.u32);
loc_89926D10:
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwz r29,-21384(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + -21384);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x89926d78
	if (ctx.cr6.eq) goto loc_89926D78;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r11,17012
	ctx.r3.s64 = ctx.r11.s64 + 17012;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x89931d78
	ctx.lr = 0x89926D38;
	sub_89931D78(ctx, base);
	// rlwinm r10,r29,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r29,28,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFF;
	// rlwinm r5,r10,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r9,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r4,r10,30,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3C;
	// rlwinm r7,r29,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,20(r28)
	REX_STORE_U8(ctx.r28.u32 + 20, ctx.r11.u8);
	// lwzx r8,r4,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// stw r8,2572(r30)
	REX_STORE_U32(ctx.r30.u32 + 2572, ctx.r8.u32);
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwzx r9,r5,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r10,2580(r30)
	REX_STORE_U32(ctx.r30.u32 + 2580, ctx.r10.u32);
	// stw r9,2576(r30)
	REX_STORE_U32(ctx.r30.u32 + 2576, ctx.r9.u32);
	// stw r11,2584(r30)
	REX_STORE_U32(ctx.r30.u32 + 2584, ctx.r11.u32);
loc_89926D78:
	// lis r27,-30276
	ctx.r27.s64 = -1984167936;
	// addi r10,r31,2216
	ctx.r10.s64 = ctx.r31.s64 + 2216;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lbz r29,32547(r27)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r27.u32 + 32547);
	// addic r8,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r8.s64 = ctx.r29.s64 + -1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subfe r7,r8,r29
	temp.u8 = (~ctx.r8.u32 + ctx.r29.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stw r10,12020(r9)
	REX_STORE_U32(ctx.r9.u32 + 12020, ctx.r10.u32);
	// bne cr6,0x89926db0
	if (!ctx.cr6.eq) goto loc_89926DB0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x89927048
	if (ctx.cr6.eq) goto loc_89927048;
loc_89926DB0:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r8,r10,27280
	ctx.r8.s64 = ctx.r10.s64 + 27280;
	// lbz r10,27280(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 27280);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// lbz r7,128(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 128);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89926dd8
	if (ctx.cr6.eq) goto loc_89926DD8;
	// rlwinm r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89926e00
	if (!ctx.cr6.eq) goto loc_89926E00;
loc_89926DD8:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r8,r10,7384
	ctx.r8.s64 = ctx.r10.s64 + 7384;
	// lbz r10,7384(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 7384);
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// lbz r8,128(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89926e18
	if (ctx.cr6.eq) goto loc_89926E18;
	// rlwinm r6,r8,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x89926e18
	if (ctx.cr6.eq) goto loc_89926E18;
loc_89926E00:
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x89926e10
	if (!ctx.cr6.eq) goto loc_89926E10;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x89926e58
	goto loc_89926E58;
loc_89926E10:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x89926e54
	goto loc_89926E54;
loc_89926E18:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89926e2c
	if (ctx.cr6.eq) goto loc_89926E2C;
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89926e40
	if (!ctx.cr6.eq) goto loc_89926E40;
loc_89926E2C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89926eac
	if (ctx.cr6.eq) goto loc_89926EAC;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89926eac
	if (ctx.cr6.eq) goto loc_89926EAC;
loc_89926E40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89926e50
	if (!ctx.cr6.eq) goto loc_89926E50;
	// li r29,17
	ctx.r29.s64 = 17;
	// b 0x89926e58
	goto loc_89926E58;
loc_89926E50:
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
loc_89926E54:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
loc_89926E58:
	// stb r29,32547(r27)
	REX_STORE_U8(ctx.r27.u32 + 32547, ctx.r29.u8);
	// bl 0x899306a8
	ctx.lr = 0x89926E60;
	sub_899306A8(ctx, base);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89926e74
	if (!ctx.cr6.eq) goto loc_89926E74;
	// bl 0x8991f6b0
	ctx.lr = 0x89926E70;
	sub_8991F6B0(ctx, base);
	// lbz r29,32547(r27)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r27.u32 + 32547);
loc_89926E74:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89926e94
	if (ctx.cr6.eq) goto loc_89926E94;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,62464
	ctx.r10.u64 = ctx.r10.u64 | 4093640704;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_89926E94:
	// lwz r10,696(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 696);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89926eac
	if (ctx.cr6.eq) goto loc_89926EAC;
	// lwz r10,700(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 700);
	// oris r10,r10,62464
	ctx.r10.u64 = ctx.r10.u64 | 4093640704;
	// stw r10,700(r11)
	REX_STORE_U32(ctx.r11.u32 + 700, ctx.r10.u32);
loc_89926EAC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x89927048
	if (ctx.cr6.gt) goto loc_89927048;
	// lis r12,-30318
	ctx.r12.s64 = -1986920448;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28372
	ctx.r12.s64 = ctx.r12.s64 + 28372;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_89926F18;
	case 1:
		goto loc_89926F24;
	case 2:
		goto loc_89926F30;
	case 3:
		goto loc_89926F3C;
	case 4:
		goto loc_89926F48;
	case 5:
		goto loc_89926F54;
	case 6:
		goto loc_89926F60;
	case 7:
		goto loc_89926F6C;
	case 8:
		goto loc_89926F78;
	case 9:
		goto loc_89926F84;
	case 10:
		goto loc_89926F90;
	case 11:
		goto loc_89926F9C;
	case 12:
		goto loc_89926FA8;
	case 13:
		goto loc_89926FB4;
	case 14:
		goto loc_89926FC0;
	case 15:
		goto loc_89926FCC;
	case 16:
		goto loc_89927044;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89926F18:
	// bl 0x8992a040
	ctx.lr = 0x89926F1C;
	sub_8992A040(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926F24:
	// bl 0x89925248
	ctx.lr = 0x89926F28;
	sub_89925248(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926F30:
	// bl 0x899231d0
	ctx.lr = 0x89926F34;
	sub_899231D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926F3C:
	// bl 0x89924240
	ctx.lr = 0x89926F40;
	sub_89924240(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926F48:
	// bl 0x899229c8
	ctx.lr = 0x89926F4C;
	sub_899229C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926F54:
	// bl 0x89922bb8
	ctx.lr = 0x89926F58;
	sub_89922BB8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926F60:
	// bl 0x89922dc0
	ctx.lr = 0x89926F64;
	sub_89922DC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926F6C:
	// bl 0x89922fc8
	ctx.lr = 0x89926F70;
	sub_89922FC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926F78:
	// bl 0x899224b8
	ctx.lr = 0x89926F7C;
	sub_899224B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926F84:
	// bl 0x899225f8
	ctx.lr = 0x89926F88;
	sub_899225F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926F90:
	// bl 0x89922738
	ctx.lr = 0x89926F94;
	sub_89922738(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926F9C:
	// bl 0x8991fe08
	ctx.lr = 0x89926FA0;
	sub_8991FE08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926FA8:
	// bl 0x89925948
	ctx.lr = 0x89926FAC;
	sub_89925948(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926FB4:
	// bl 0x899260b8
	ctx.lr = 0x89926FB8;
	sub_899260B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926FC0:
	// bl 0x89920d88
	ctx.lr = 0x89926FC4;
	sub_89920D88(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89926FCC:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,15344
	ctx.r3.s64 = ctx.r11.s64 + 15344;
	// bl 0x89931dd8
	ctx.lr = 0x89926FDC;
	sub_89931DD8(ctx, base);
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,-21380
	ctx.r7.s64 = ctx.r10.s64 + -21380;
loc_89926FE8:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// lbzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// addi r8,r30,1024
	ctx.r8.s64 = ctx.r30.s64 + 1024;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r6,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r3,r6,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// stb r9,8(r28)
	REX_STORE_U8(ctx.r28.u32 + 8, ctx.r9.u8);
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blt cr6,0x89926fe8
	if (ctx.cr6.lt) goto loc_89926FE8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89927044:
	// bl 0x89920ef0
	ctx.lr = 0x89927048;
	sub_89920EF0(ctx, base);
loc_89927048:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89928838) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89928840;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lhz r9,12144(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 12144);
	// lwz r10,26932(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 26932);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// clrlwi r25,r10,31
	ctx.r25.u64 = ctx.r10.u32 & 0x1;
	// beq cr6,0x89928b94
	if (ctx.cr6.eq) goto loc_89928B94;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,9512
	ctx.r9.s64 = ctx.r11.s64 + 9512;
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89928b94
	if (ctx.cr6.eq) goto loc_89928B94;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// mulli r10,r25,1600
	ctx.r10.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(1600));
	// addi r11,r11,4176
	ctx.r11.s64 = ctx.r11.s64 + 4176;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r11,-30284
	ctx.r11.s64 = -1984692224;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r7,r7,17036
	ctx.r7.s64 = ctx.r7.s64 + 17036;
	// lis r17,-32768
	ctx.r17.s64 = -2147483648;
	// lis r22,-30270
	ctx.r22.s64 = -1983774720;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r14,r11,21760
	ctx.r14.s64 = ctx.r11.s64 + 21760;
	// addi r16,r10,13480
	ctx.r16.s64 = ctx.r10.s64 + 13480;
	// addi r19,r9,12800
	ctx.r19.s64 = ctx.r9.s64 + 12800;
	// addi r18,r8,25128
	ctx.r18.s64 = ctx.r8.s64 + 25128;
loc_899288C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89928b70
	if (ctx.cr6.eq) goto loc_89928B70;
	// lwz r27,32(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89928b70
	if (ctx.cr6.eq) goto loc_89928B70;
	// rlwinm r15,r10,0,0,1
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
loc_899288EC:
	// lwz r20,4(r27)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmpw cr6,r15,r17
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r17.s32, ctx.xer);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// beq cr6,0x89928940
	if (ctx.cr6.eq) goto loc_89928940;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// cmpw cr6,r15,r3
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r3.s32, ctx.xer);
	// lwz r9,12(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r8,52(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// beq cr6,0x89928930
	if (ctx.cr6.eq) goto loc_89928930;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x89928938
	if (ctx.cr6.eq) goto loc_89928938;
	// add r24,r8,r9
	ctx.r24.u64 = ctx.r8.u64 + ctx.r9.u64;
	// b 0x89928958
	goto loc_89928958;
loc_89928930:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// subf r26,r11,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_89928938:
	// subf r24,r9,r8
	ctx.r24.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x89928958
	goto loc_89928958;
loc_89928940:
	// lwz r9,8(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r8,48(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// subf r26,r9,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_89928958:
	// lbz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 68);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x89928980
	if (!ctx.cr6.eq) goto loc_89928980;
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r10,88(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// mullw r9,r11,r21
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// mullw r8,r10,r20
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32);
	// srawi r21,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r21.s64 = ctx.r9.s32 >> 8;
	// srawi r20,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r20.s64 = ctx.r8.s32 >> 8;
loc_89928980:
	// lis r11,-30284
	ctx.r11.s64 = -1984692224;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r10,19,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x4;
	// lwz r11,23808(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23808);
	// addi r28,r11,-8
	ctx.r28.s64 = ctx.r11.s64 + -8;
	// lwzx r23,r9,r7
	ctx.r23.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r28,r14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x89928b64
	if (ctx.cr6.lt) goto loc_89928B64;
loc_899289A0:
	// lwz r31,4(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// and r11,r4,r23
	ctx.r11.u64 = ctx.r4.u64 & ctx.r23.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x89928b54
	if (!ctx.cr6.eq) goto loc_89928B54;
	// lbz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 202);
	// lbz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 200);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x89928b54
	if (ctx.cr6.lt) goto loc_89928B54;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x89928b54
	if (ctx.cr6.eq) goto loc_89928B54;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r6,r10,0,0,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
loc_899289DC:
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r6,r17
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r17.s32, ctx.xer);
	// beq cr6,0x89928a50
	if (ctx.cr6.eq) goto loc_89928A50;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x89928a34
	if (ctx.cr6.eq) goto loc_89928A34;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x89928a18
	if (ctx.cr6.eq) goto loc_89928A18;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// b 0x89928a68
	goto loc_89928A68;
loc_89928A18:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// b 0x89928a68
	goto loc_89928A68;
loc_89928A34:
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// b 0x89928a68
	goto loc_89928A68;
loc_89928A50:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_89928A68:
	// subf. r10,r10,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bge 0x89928a78
	if (!ctx.cr0.lt) goto loc_89928A78;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89928A78:
	// clrlwi r8,r29,4
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFFFFF;
	// add r8,r8,r21
	ctx.r8.u64 = ctx.r8.u64 + ctx.r21.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x89928aa0
	if (!ctx.cr6.lt) goto loc_89928AA0;
	// subf. r10,r9,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x89928a94
	if (!ctx.cr0.lt) goto loc_89928A94;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89928A94:
	// add r9,r5,r20
	ctx.r9.u64 = ctx.r5.u64 + ctx.r20.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x89928ab0
	if (ctx.cr6.lt) goto loc_89928AB0;
loc_89928AA0:
	// lwz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x899289dc
	if (!ctx.cr6.eq) goto loc_899289DC;
	// b 0x89928b54
	goto loc_89928B54;
loc_89928AB0:
	// or r11,r4,r29
	ctx.r11.u64 = ctx.r4.u64 | ctx.r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89928b20
	if (!ctx.cr6.eq) goto loc_89928B20;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// extsh r3,r25
	ctx.r3.s64 = ctx.r25.s16;
	// lhz r6,78(r30)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 78);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8991beb8
	ctx.lr = 0x89928AD8;
	sub_8991BEB8(ctx, base);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x89928b20
	if (ctx.cr6.lt) goto loc_89928B20;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89928b20
	if (!ctx.cr6.eq) goto loc_89928B20;
	// mulli r11,r25,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(696));
	// lhz r9,4944(r22)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r22.u32 + 4944);
	// addi r10,r18,664
	ctx.r10.s64 = ctx.r18.s64 + 664;
	// mulli r8,r8,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r6,r19,80
	ctx.r6.s64 = ctx.r19.s64 + 80;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// sth r5,4944(r22)
	REX_STORE_U16(ctx.r22.u32 + 4944, ctx.r5.u16);
	// lwzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
loc_89928B20:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r16,16
	ctx.r10.s64 = ctx.r16.s64 + 16;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// or r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 | ctx.r29.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// extsh r3,r25
	ctx.r3.s64 = ctx.r25.s16;
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x89928B50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
loc_89928B54:
	// addi r28,r28,-8
	ctx.r28.s64 = ctx.r28.s64 + -8;
	// cmplw cr6,r28,r14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x899289a0
	if (!ctx.cr6.lt) goto loc_899289A0;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_89928B64:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899288ec
	if (!ctx.cr6.eq) goto loc_899288EC;
loc_89928B70:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// lhz r9,584(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 584);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x899288c4
	if (!ctx.cr6.eq) goto loc_899288C4;
loc_89928B94:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89929A28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x89929A30;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r21,r11,8088
	ctx.r21.s64 = ctx.r11.s64 + 8088;
	// lwz r11,8088(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89929bd0
	if (ctx.cr6.eq) goto loc_89929BD0;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// li r25,-32768
	ctx.r25.s64 = -32768;
	// addi r30,r11,32560
	ctx.r30.s64 = ctx.r11.s64 + 32560;
	// addi r27,r10,11752
	ctx.r27.s64 = ctx.r10.s64 + 11752;
	// addi r26,r9,-9208
	ctx.r26.s64 = ctx.r9.s64 + -9208;
	// addi r28,r8,32032
	ctx.r28.s64 = ctx.r8.s64 + 32032;
	// addi r29,r7,-4592
	ctx.r29.s64 = ctx.r7.s64 + -4592;
loc_89929A78:
	// lwz r23,4(r21)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// lhz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x89929bc4
	if (ctx.cr6.eq) goto loc_89929BC4;
loc_89929A8C:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r24,8(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r31,0(r24)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x89929bb4
	if (ctx.cr6.eq) goto loc_89929BB4;
loc_89929AA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899334b8
	ctx.lr = 0x89929AB0;
	sub_899334B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89929ba4
	if (!ctx.cr6.eq) goto loc_89929BA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89933520
	ctx.lr = 0x89929AC0;
	sub_89933520(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89929ba4
	if (!ctx.cr6.eq) goto loc_89929BA4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_89929ADC:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
loc_89929AE4:
	// lhz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// cmplwi cr6,r4,4096
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4096, ctx.xer);
	// bne cr6,0x89929b04
	if (!ctx.cr6.eq) goto loc_89929B04;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x89929b2c
	if (ctx.cr0.eq) goto loc_89929B2C;
loc_89929B04:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x89929ae4
	if (ctx.cr6.lt) goto loc_89929AE4;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x89929adc
	if (ctx.cr6.lt) goto loc_89929ADC;
	// b 0x89929ba4
	goto loc_89929BA4;
loc_89929B2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_89929B38:
	// lhzx r9,r9,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// clrlwi r8,r9,18
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFF;
	// cmplwi cr6,r8,4096
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4096, ctx.xer);
	// beq cr6,0x89929b64
	if (ctx.cr6.eq) goto loc_89929B64;
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
	// blt cr6,0x89929b38
	if (ctx.cr6.lt) goto loc_89929B38;
	// li r10,256
	ctx.r10.s64 = 256;
loc_89929B64:
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpwi cr6,r7,256
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 256, ctx.xer);
	// bge cr6,0x89929ba4
	if (!ctx.cr6.lt) goto loc_89929BA4;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,2(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// or r3,r31,r25
	ctx.r3.u64 = ctx.r31.u64 | ctx.r25.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r31,r5,r28
	REX_STORE_U16(ctx.r5.u32 + ctx.r28.u32, ctx.r31.u16);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sthx r11,r5,r26
	REX_STORE_U16(ctx.r5.u32 + ctx.r26.u32, ctx.r11.u16);
	// sthx r10,r5,r27
	REX_STORE_U16(ctx.r5.u32 + ctx.r27.u32, ctx.r10.u16);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r7,r30
	REX_STORE_U16(ctx.r7.u32 + ctx.r30.u32, ctx.r3.u16);
loc_89929BA4:
	// lhzu r31,2(r24)
	ea = 2 + ctx.r24.u32;
	ctx.r31.u64 = REX_LOAD_U16(ea);
	ctx.r24.u32 = ea;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89929aa8
	if (!ctx.cr6.eq) goto loc_89929AA8;
loc_89929BB4:
	// lhz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bne cr6,0x89929a8c
	if (!ctx.cr6.eq) goto loc_89929A8C;
loc_89929BC4:
	// lwzu r22,8(r21)
	ea = 8 + ctx.r21.u32;
	ctx.r22.u64 = REX_LOAD_U32(ea);
	ctx.r21.u32 = ea;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x89929a78
	if (!ctx.cr6.eq) goto loc_89929A78;
loc_89929BD0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8992AF40) {
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
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// lis r9,-30273
	ctx.r9.s64 = -1983971328;
	// mulli r8,r10,696
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r7,r11,658
	ctx.r7.s64 = ctx.r11.s64 + 658;
	// addi r6,r9,6400
	ctx.r6.s64 = ctx.r9.s64 + 6400;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lbzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8992b02c
	if (ctx.cr6.eq) goto loc_8992B02C;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// lbz r8,586(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 586);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8992b02c
	if (!ctx.cr6.eq) goto loc_8992B02C;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// lbz r8,32551(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 32551);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8992b02c
	if (ctx.cr6.eq) goto loc_8992B02C;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lbz r8,6055(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 6055);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8992b004
	if (!ctx.cr6.lt) goto loc_8992B004;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// addi r9,r10,-2532
	ctx.r9.s64 = ctx.r10.s64 + -2532;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8992afdc
	if (!ctx.cr6.eq) goto loc_8992AFDC;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// addi r9,r10,520
	ctx.r9.s64 = ctx.r10.s64 + 520;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8992b078
	if (!ctx.cr6.eq) goto loc_8992B078;
loc_8992AFDC:
	// lis r11,-16192
	ctx.r11.s64 = -1061158912;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// ori r6,r11,16384
	ctx.r6.u64 = ctx.r11.u64 | 16384;
	// addi r3,r10,7464
	ctx.r3.s64 = ctx.r10.s64 + 7464;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,38
	ctx.r4.s64 = 38;
	// bl 0x89931d78
	ctx.lr = 0x8992AFF8;
	sub_89931D78(ctx, base);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// addi r3,r9,8148
	ctx.r3.s64 = ctx.r9.s64 + 8148;
	// b 0x8992b09c
	goto loc_8992B09C;
loc_8992B004:
	// lis r11,-16192
	ctx.r11.s64 = -1061158912;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// ori r6,r11,16384
	ctx.r6.u64 = ctx.r11.u64 | 16384;
	// addi r3,r10,7332
	ctx.r3.s64 = ctx.r10.s64 + 7332;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,38
	ctx.r4.s64 = 38;
	// bl 0x89931d78
	ctx.lr = 0x8992B020;
	sub_89931D78(ctx, base);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// addi r3,r9,7476
	ctx.r3.s64 = ctx.r9.s64 + 7476;
	// b 0x8992b09c
	goto loc_8992B09C;
loc_8992B02C:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r8,r11,520
	ctx.r8.s64 = ctx.r11.s64 + 520;
	// addi r7,r10,-2532
	ctx.r7.s64 = ctx.r10.s64 + -2532;
	// lbzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lbzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8992b078
	if (ctx.cr6.lt) goto loc_8992B078;
	// lis r11,16576
	ctx.r11.s64 = 1086324736;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// ori r6,r11,16384
	ctx.r6.u64 = ctx.r11.u64 | 16384;
	// addi r3,r10,7464
	ctx.r3.s64 = ctx.r10.s64 + 7464;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,38
	ctx.r4.s64 = 38;
	// bl 0x89931d78
	ctx.lr = 0x8992B06C;
	sub_89931D78(ctx, base);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// addi r3,r9,8136
	ctx.r3.s64 = ctx.r9.s64 + 8136;
	// b 0x8992b09c
	goto loc_8992B09C;
loc_8992B078:
	// lis r11,16448
	ctx.r11.s64 = 1077936128;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// ori r6,r11,49152
	ctx.r6.u64 = ctx.r11.u64 | 49152;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,38
	ctx.r4.s64 = 38;
	// addi r3,r10,7500
	ctx.r3.s64 = ctx.r10.s64 + 7500;
	// bl 0x89931d78
	ctx.lr = 0x8992B094;
	sub_89931D78(ctx, base);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// addi r3,r9,7488
	ctx.r3.s64 = ctx.r9.s64 + 7488;
loc_8992B09C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// bl 0x89931d78
	ctx.lr = 0x8992B0A8;
	sub_89931D78(ctx, base);
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

DEFINE_REX_FUNC(sub_8992B5E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r4,r11,25128
	ctx.r4.s64 = ctx.r11.s64 + 25128;
	// mulli r5,r9,696
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// addi r11,r4,646
	ctx.r11.s64 = ctx.r4.s64 + 646;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lbzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// lwz r10,3504(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 3504);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992b80c
	if (ctx.cr6.eq) goto loc_8992B80C;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x8992b624
	if (ctx.cr6.eq) goto loc_8992B624;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8992b814
	if (ctx.cr6.lt) goto loc_8992B814;
loc_8992B624:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// ori r3,r7,20077
	ctx.r3.u64 = ctx.r7.u64 | 20077;
	// addi r7,r6,18532
	ctx.r7.s64 = ctx.r6.s64 + 18532;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r3,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 16;
	// clrlwi r11,r3,17
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,19,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x3FFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
loc_8992B664:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// addi r6,r11,18512
	ctx.r6.s64 = ctx.r11.s64 + 18512;
	// addi r11,r7,-31400
	ctx.r11.s64 = ctx.r7.s64 + -31400;
	// ori r3,r10,221
	ctx.r3.u64 = ctx.r10.u64 | 221;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bgt cr6,0x8992b6a4
	if (ctx.cr6.gt) goto loc_8992B6A4;
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
loc_8992B6A4:
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addi r9,r9,18516
	ctx.r9.s64 = ctx.r9.s64 + 18516;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// lhz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bgt cr6,0x8992b6d4
	if (ctx.cr6.gt) goto loc_8992B6D4;
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
loc_8992B6D4:
	// lhz r6,2(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bgt cr6,0x8992b6fc
	if (ctx.cr6.gt) goto loc_8992B6FC;
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
loc_8992B6FC:
	// lhz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// bgt cr6,0x8992b724
	if (ctx.cr6.gt) goto loc_8992B724;
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
loc_8992B724:
	// lhz r6,6(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// bgt cr6,0x8992b74c
	if (ctx.cr6.gt) goto loc_8992B74C;
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
loc_8992B74C:
	// lhz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// bgt cr6,0x8992b774
	if (ctx.cr6.gt) goto loc_8992B774;
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
loc_8992B774:
	// lhz r6,10(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// bgt cr6,0x8992b79c
	if (ctx.cr6.gt) goto loc_8992B79C;
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
loc_8992B79C:
	// lhz r6,12(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 12);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// bgt cr6,0x8992b7c4
	if (ctx.cr6.gt) goto loc_8992B7C4;
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
loc_8992B7C4:
	// lhz r8,14(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r4,r6,12280
	ctx.r4.s64 = ctx.r6.s64 + 12280;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// ori r3,r10,253
	ctx.r3.u64 = ctx.r10.u64 | 253;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// lwzx r6,r5,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lbz r8,1(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// rlwinm r6,r6,0,2,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r7,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// stwu r3,32(r11)
	ea = 32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stwx r6,r5,r9
	REX_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r6.u32);
	// stb r3,1(r4)
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r3.u8);
	// blr 
	return;
loc_8992B80C:
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x8992b624
	if (ctx.cr6.eq) goto loc_8992B624;
loc_8992B814:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lwz r10,18532(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18532);
	// b 0x8992b664
	goto loc_8992B664;
}

DEFINE_REX_FUNC(sub_8992CC08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8992CC10;
	__savegprlr_14(ctx, base);
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lhz r10,5752(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 5752);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992d1c0
	if (ctx.cr6.eq) goto loc_8992D1C0;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r23,r10,-21360
	ctx.r23.s64 = ctx.r10.s64 + -21360;
	// lis r9,-30284
	ctx.r9.s64 = -1984692224;
	// stw r4,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r4.u32);
	// rlwinm r10,r11,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// stw r23,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r23.u32);
	// addi r11,r9,32008
	ctx.r11.s64 = ctx.r9.s64 + 32008;
	// li r8,0
	ctx.r8.s64 = 0;
	// lhzx r7,r4,r23
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r23.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8992d1c0
	if (ctx.cr6.eq) goto loc_8992D1C0;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lis r8,-30269
	ctx.r8.s64 = -1983709184;
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// lwz r6,9520(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 9520);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lwz r30,7120(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 7120);
	// addi r31,r7,10048
	ctx.r31.s64 = ctx.r7.s64 + 10048;
	// lwz r3,12756(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12756);
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lwz r29,-10764(r8)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + -10764);
	// lis r28,0
	ctx.r28.s64 = 0;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r9,-30273
	ctx.r9.s64 = -1983971328;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// stw r30,-244(r1)
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r30.u32);
	// addi r26,r10,27856
	ctx.r26.s64 = ctx.r10.s64 + 27856;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r24,r7,-2480
	ctx.r24.s64 = ctx.r7.s64 + -2480;
	// stw r3,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r3.u32);
	// ori r20,r28,65535
	ctx.r20.u64 = ctx.r28.u64 | 65535;
	// stw r29,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r29.u32);
	// addi r25,r11,3620
	ctx.r25.s64 = ctx.r11.s64 + 3620;
	// stw r26,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r26.u32);
	// addi r19,r9,6420
	ctx.r19.s64 = ctx.r9.s64 + 6420;
	// stw r24,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r24.u32);
	// addi r30,r8,-9496
	ctx.r30.s64 = ctx.r8.s64 + -9496;
loc_8992CCD0:
	// lwzu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// lbz r9,89(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 89);
	// lbz r10,90(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 90);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r5,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r5.u32);
	// subf. r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8992ccf0
	if (!ctx.cr0.lt) goto loc_8992CCF0;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8992CCF0:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x8992cd10
	if (!ctx.cr6.lt) goto loc_8992CD10;
	// lbz r10,91(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 91);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992cd18
	if (ctx.cr6.eq) goto loc_8992CD18;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, ctx.r10.u8);
	// b 0x8992cd18
	goto loc_8992CD18;
loc_8992CD10:
	// li r10,60
	ctx.r10.s64 = 60;
	// stb r10,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, ctx.r10.u8);
loc_8992CD18:
	// lbz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 88);
	// lwz r7,40(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// subf r3,r8,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r8.u64;
	// stb r9,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, ctx.r9.u8);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r7,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r7.u32);
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bgt cr6,0x8992d1a8
	if (ctx.cr6.gt) goto loc_8992D1A8;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,52(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// lbzx r7,r16,r24
	ctx.r7.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r24.u32);
	// divw r3,r16,r10
	ctx.r3.u64 = uint32_t((ctx.r10.s32 && !(ctx.r16.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r16.s32 / ctx.r10.s32 : 0);
	// lwz r31,48(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lbz r29,91(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 91);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rotlwi r28,r7,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// srawi r27,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r31.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r31,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r28.s32 >> 8;
	// lbzx r3,r3,r24
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r24.u32);
	// subfic r29,r29,60
	ctx.xer.ca = ctx.r29.u32 <= 60;
	ctx.r29.u64 = static_cast<uint64_t>(60) - ctx.r29.u64;
	// li r28,60
	ctx.r28.s64 = 60;
	// lhz r22,8(r10)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// mullw r3,r3,r29
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// divw r3,r3,r28
	ctx.r3.u64 = uint32_t((ctx.r28.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r3.s32 / ctx.r28.s32 : 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// rlwinm r29,r3,8,16,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF00;
	// rlwinm r28,r11,0,0,17
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFC000;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsh r11,r22
	ctx.r11.s64 = ctx.r22.s16;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r9,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r9.u32);
	// or r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 | ctx.r3.u64;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// sth r8,-256(r1)
	REX_STORE_U16(ctx.r1.u32 + -256, ctx.r8.u16);
	// extsh r14,r28
	ctx.r14.s64 = ctx.r28.s16;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mullw r18,r27,r7
	ctx.r18.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// clrlwi r15,r3,16
	ctx.r15.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8992d19c
	if (ctx.cr6.eq) goto loc_8992D19C;
loc_8992CDD8:
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8992d184
	if (ctx.cr6.eq) goto loc_8992D184;
	// lwz r9,-248(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// rlwinm r10,r11,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FE;
	// lhz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// clrlwi r6,r18,16
	ctx.r6.u64 = ctx.r18.u32 & 0xFFFF;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r4,2(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r10,r8,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// lwz r29,-244(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// lwz r28,-240(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// addic r8,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// sth r10,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// rlwinm r7,r4,8,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF0000;
	// sth r9,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r9.u16);
	// lhz r21,-2(r5)
	ctx.r21.u64 = REX_LOAD_U16(ctx.r5.u32 + -2);
	// subfe r5,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// lwz r4,-232(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// extsh r6,r21
	ctx.r6.s64 = ctx.r21.s16;
	// lwz r27,-236(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// srawi r8,r18,16
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r18.s32 >> 16;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// xor r11,r14,r11
	ctx.r11.u64 = ctx.r14.u64 ^ ctx.r11.u64;
	// stw r4,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r4.u32);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwzx r6,r6,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// srawi r4,r28,16
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r28.s32 >> 16;
	// rlwinm r28,r11,23,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// add r21,r6,r3
	ctx.r21.u64 = ctx.r6.u64 + ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r6.u32);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// sth r8,0(r19)
	REX_STORE_U16(ctx.r19.u32 + 0, ctx.r8.u16);
	// add r5,r4,r27
	ctx.r5.u64 = ctx.r4.u64 + ctx.r27.u64;
	// rlwinm r27,r11,24,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// lwz r17,0(r30)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r28,3352(r6)
	REX_STORE_U32(ctx.r6.u32 + 3352, ctx.r28.u32);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// stw r21,25056(r7)
	REX_STORE_U32(ctx.r7.u32 + 25056, ctx.r21.u32);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// sth r7,2(r19)
	REX_STORE_U16(ctx.r19.u32 + 2, ctx.r7.u16);
	// stw r27,12792(r6)
	REX_STORE_U32(ctx.r6.u32 + 12792, ctx.r27.u32);
	// bne cr6,0x8992cfb4
	if (!ctx.cr6.eq) goto loc_8992CFB4;
	// lhz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r5,r6,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// sth r4,2(r25)
	REX_STORE_U16(ctx.r25.u32 + 2, ctx.r4.u16);
	// rlwinm r29,r11,0,16,17
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// sth r5,0(r25)
	REX_STORE_U16(ctx.r25.u32 + 0, ctx.r5.u16);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r4,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r4.u32);
	// cmpwi cr6,r29,16384
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16384, ctx.xer);
	// rlwinm r4,r3,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// lwz r3,-224(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// beq cr6,0x8992cf5c
	if (ctx.cr6.eq) goto loc_8992CF5C;
	// cmplwi cr6,r29,32768
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32768, ctx.xer);
	// beq cr6,0x8992cf3c
	if (ctx.cr6.eq) goto loc_8992CF3C;
	// cmplwi cr6,r29,49152
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 49152, ctx.xer);
	// bne cr6,0x8992cf78
	if (!ctx.cr6.eq) goto loc_8992CF78;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r8,r10,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r7,r6,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r6,r5,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r10,r28,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r28.u64;
	// subf r11,r27,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r27.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r11,r5,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x8992cf78
	goto loc_8992CF78;
loc_8992CF3C:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r9,r6,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r28,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r28.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r8,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 | ctx.r3.u64;
	// b 0x8992cf78
	goto loc_8992CF78;
loc_8992CF5C:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r10,r11,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r9,r5,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r5.u64;
	// subf r11,r27,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r27.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// or r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 | ctx.r4.u64;
loc_8992CF78:
	// rlwinm r10,r29,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0xFFFFF000;
	// stw r11,8(r22)
	REX_STORE_U32(ctx.r22.u32 + 8, ctx.r11.u32);
	// clrlwi r9,r15,16
	ctx.r9.u64 = ctx.r15.u32 & 0xFFFF;
	// stw r21,4(r22)
	REX_STORE_U32(ctx.r22.u32 + 4, ctx.r21.u32);
	// oris r8,r10,21249
	ctx.r8.u64 = ctx.r10.u64 | 1392574464;
	// stw r17,12(r22)
	REX_STORE_U32(ctx.r22.u32 + 12, ctx.r17.u32);
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// ori r6,r7,32896
	ctx.r6.u64 = ctx.r7.u64 | 32896;
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r6,16(r22)
	REX_STORE_U32(ctx.r22.u32 + 16, ctx.r6.u32);
	// addi r22,r22,20
	ctx.r22.s64 = ctx.r22.s64 + 20;
	// stw r11,512(r10)
	REX_STORE_U32(ctx.r10.u32 + 512, ctx.r11.u32);
	// b 0x8992d184
	goto loc_8992D184;
loc_8992CFB4:
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r3,-256(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -256);
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// lhz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// mullw r10,r10,r3
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r29,r9,r20
	ctx.r29.u64 = ctx.r9.u64 + ctx.r20.u64;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// std r5,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r5.u64);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// sth r9,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// sth r10,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r6,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r6.u64);
	// std r29,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r29.u64);
	// rlwinm r6,r4,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// std r5,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r5.u64);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// extsb r6,r5
	ctx.r6.s64 = ctx.r5.s8;
	// mullw r5,r4,r3
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// mullw r4,r6,r3
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// lfd f13,-192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfd f12,-184(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// lfd f10,-176(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lfd f8,-168(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// srawi r3,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 8;
	// srawi r5,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 8;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lis r3,25345
	ctx.r3.s64 = 1661009920;
	// sth r6,0(r25)
	REX_STORE_U16(ctx.r25.u32 + 0, ctx.r6.u16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// sth r5,2(r25)
	REX_STORE_U16(ctx.r25.u32 + 2, ctx.r5.u16);
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// rlwimi r3,r11,12,4,5
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xC000000) | (ctx.r3.u64 & 0xFFFFFFFFF3FFFFFF);
	// rlwinm r29,r11,0,16,17
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// clrlwi r5,r15,16
	ctx.r5.u64 = ctx.r15.u32 & 0xFFFF;
	// add r24,r8,r6
	ctx.r24.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r23,r7,r4
	ctx.r23.u64 = ctx.r7.u64 + ctx.r4.u64;
	// or r26,r3,r5
	ctx.r26.u64 = ctx.r3.u64 | ctx.r5.u64;
	// rlwinm r5,r24,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r3,r23,16
	ctx.r3.u64 = ctx.r23.u32 & 0xFFFF;
	// stw r26,512(r11)
	REX_STORE_U32(ctx.r11.u32 + 512, ctx.r26.u32);
	// fdivs f1,f3,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f4.f64));
	// cmpwi cr6,r29,16384
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16384, ctx.xer);
	// fdivs f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 / ctx.f5.f64));
	// or r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 | ctx.r3.u64;
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
	// stfd f9,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.f9.u64);
	// lwz r24,-220(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r23,-156(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// beq cr6,0x8992d134
	if (ctx.cr6.eq) goto loc_8992D134;
	// cmplwi cr6,r29,32768
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32768, ctx.xer);
	// beq cr6,0x8992d118
	if (ctx.cr6.eq) goto loc_8992D118;
	// cmplwi cr6,r29,49152
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 49152, ctx.xer);
	// bne cr6,0x8992d14c
	if (!ctx.cr6.eq) goto loc_8992D14C;
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r9,r4,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r4.u64;
	// subf r8,r6,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r27,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r27.u64;
	// subf r10,r28,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rlwimi r11,r7,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x8992d14c
	goto loc_8992D14C;
loc_8992D118:
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r10,r6,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r6.u64;
	// subf r11,r28,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r28.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 | ctx.r3.u64;
	// b 0x8992d14c
	goto loc_8992D14C;
loc_8992D134:
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	// subf r11,r27,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r27.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// or r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 | ctx.r5.u64;
loc_8992D14C:
	// rlwinm r10,r24,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// stw r26,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r26.u32);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// stw r21,4(r22)
	REX_STORE_U32(ctx.r22.u32 + 4, ctx.r21.u32);
	// or r8,r10,r23
	ctx.r8.u64 = ctx.r10.u64 | ctx.r23.u64;
	// stw r11,8(r22)
	REX_STORE_U32(ctx.r22.u32 + 8, ctx.r11.u32);
	// ori r7,r9,32896
	ctx.r7.u64 = ctx.r9.u64 | 32896;
	// stw r17,12(r22)
	REX_STORE_U32(ctx.r22.u32 + 12, ctx.r17.u32);
	// stw r8,20(r22)
	REX_STORE_U32(ctx.r22.u32 + 20, ctx.r8.u32);
	// stw r7,16(r22)
	REX_STORE_U32(ctx.r22.u32 + 16, ctx.r7.u32);
	// addi r22,r22,24
	ctx.r22.s64 = ctx.r22.s64 + 24;
	// lwz r26,-216(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r24,-212(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r23,-208(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
loc_8992D184:
	// lhzu r11,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8992cdd8
	if (!ctx.cr6.eq) goto loc_8992CDD8;
	// lwz r4,-204(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r5,-200(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
loc_8992D19C:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r22,9520(r11)
	REX_STORE_U32(ctx.r11.u32 + 9520, ctx.r22.u32);
loc_8992D1A8:
	// lwz r11,-252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lhzx r10,r4,r23
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r23.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8992ccd0
	if (ctx.cr6.lt) goto loc_8992CCD0;
loc_8992D1C0:
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89930B88) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89930B90;
	__savegprlr_26(ctx, base);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r6,-30276
	ctx.r6.s64 = -1984167936;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// addi r30,r9,7128
	ctx.r30.s64 = ctx.r9.s64 + 7128;
	// addi r9,r6,32560
	ctx.r9.s64 = ctx.r6.s64 + 32560;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// ori r10,r10,36864
	ctx.r10.u64 = ctx.r10.u64 | 36864;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// addi r29,r8,-10056
	ctx.r29.s64 = ctx.r8.s64 + -10056;
	// addi r31,r7,-31952
	ctx.r31.s64 = ctx.r7.s64 + -31952;
	// addi r5,r5,11752
	ctx.r5.s64 = ctx.r5.s64 + 11752;
	// addi r4,r4,-9208
	ctx.r4.s64 = ctx.r4.s64 + -9208;
	// addi r6,r11,32032
	ctx.r6.s64 = ctx.r11.s64 + 32032;
loc_89930BDC:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// clrlwi r7,r8,18
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFF;
	// cmpwi cr6,r7,4096
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4096, ctx.xer);
	// bge cr6,0x89930c10
	if (!ctx.cr6.lt) goto loc_89930C10;
	// lhzx r8,r11,r5
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// lhzx r26,r11,r4
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// sthx r10,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u16);
	// rlwinm r8,r26,4,23,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0x1F0;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r9
	REX_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u16);
loc_89930C10:
	// lhzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r7,r8,18
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFF;
	// cmpwi cr6,r7,4096
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4096, ctx.xer);
	// bge cr6,0x89930c40
	if (!ctx.cr6.lt) goto loc_89930C40;
	// lhzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// lhzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r11,r7,4,23,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0x1F0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r9
	REX_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u16);
loc_89930C40:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// blt cr6,0x89930bdc
	if (ctx.cr6.lt) goto loc_89930BDC;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r27,11747(r8)
	REX_STORE_U8(ctx.r8.u32 + 11747, ctx.r27.u8);
	// addi r9,r9,12264
	ctx.r9.s64 = ctx.r9.s64 + 12264;
loc_89930C70:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r3,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x89930c70
	if (ctx.cr6.lt) goto loc_89930C70;
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,-21272
	ctx.r10.s64 = ctx.r10.s64 + -21272;
loc_89930C94:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stbx r27,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u8);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x89930c94
	if (ctx.cr6.lt) goto loc_89930C94;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r27,-31440(r9)
	REX_STORE_U32(ctx.r9.u32 + -31440, ctx.r27.u32);
	// stb r27,6403(r8)
	REX_STORE_U8(ctx.r8.u32 + 6403, ctx.r27.u8);
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89931BB8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89931BC0;
	__savegprlr_28(ctx, base);
	// rlwinm r9,r3,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// rlwinm r7,r9,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// lis r30,-30295
	ctx.r30.s64 = -1985413120;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r30,5344
	ctx.r30.s64 = ctx.r30.s64 + 5344;
	// rlwinm r31,r5,28,4,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r3,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// rlwinm r29,r31,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r3,r9,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// addi r9,r4,-31400
	ctx.r9.s64 = ctx.r4.s64 + -31400;
	// lwzx r4,r10,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r28,r29,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lwzx r3,r3,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// rlwinm r31,r31,2,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,30,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3C;
	// lwzx r7,r7,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// addi r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 + 28;
	// lwzx r6,r6,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lwzx r5,r5,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r31,r31,r30
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r10,r28,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// addi r9,r9,12280
	ctx.r9.s64 = ctx.r9.s64 + 12280;
	// lwzx r30,r29,r30
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r3,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// stw r7,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r7.u32);
	// stw r6,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// stw r5,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r5.u32);
	// stw r31,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r31.u32);
	// stw r10,-24(r11)
	REX_STORE_U32(ctx.r11.u32 + -24, ctx.r10.u32);
	// stw r30,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r30.u32);
	// stbx r29,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r29.u8);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89932318) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e8
	ctx.lr = 0x89932320;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsb r24,r3
	ctx.r24.s64 = ctx.r3.s8;
	// addi r8,r11,5472
	ctx.r8.s64 = ctx.r11.s64 + 5472;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// rlwinm r9,r24,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r25,r11,9056
	ctx.r25.s64 = ctx.r11.s64 + 9056;
	// addi r21,r10,12744
	ctx.r21.s64 = ctx.r10.s64 + 12744;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lhzx r30,r9,r8
	ctx.r30.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r20,r10,4
	ctx.r20.u64 = ctx.r10.u64 | 4;
	// li r19,60
	ctx.r19.s64 = 60;
	// lis r23,-30251
	ctx.r23.s64 = -1982529536;
	// addi r29,r11,5184
	ctx.r29.s64 = ctx.r11.s64 + 5184;
loc_8993236C:
	// lhz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89932460
	if (ctx.cr6.eq) goto loc_89932460;
	// lhz r11,19184(r23)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 19184);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mulli r11,r11,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// add r26,r11,r25
	ctx.r26.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_8993238C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,1,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFFFC;
	// rlwinm r10,r10,0,29,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFC0000007;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x89932454
	if (!ctx.cr6.eq) goto loc_89932454;
	// lbz r11,55(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 55);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x89932454
	if (!ctx.cr6.eq) goto loc_89932454;
	// lbz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 56);
	// subf. r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899323c0
	if (!ctx.cr0.lt) goto loc_899323C0;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899323C0:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x899323e0
	if (!ctx.cr6.lt) goto loc_899323E0;
	// lbz r10,57(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 57);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899323e4
	if (ctx.cr6.eq) goto loc_899323E4;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,57(r31)
	REX_STORE_U8(ctx.r31.u32 + 57, ctx.r10.u8);
	// b 0x899323e4
	goto loc_899323E4;
loc_899323E0:
	// stb r19,57(r31)
	REX_STORE_U8(ctx.r31.u32 + 57, ctx.r19.u8);
loc_899323E4:
	// stb r11,56(r31)
	REX_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r29,4
	ctx.r7.s64 = ctx.r29.s64 + 4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// rlwinm r3,r8,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,57(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 57);
	// rlwinm r18,r6,4,0,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// subfic r17,r9,116
	ctx.xer.ca = ctx.r9.u32 <= 116;
	ctx.r17.u64 = static_cast<uint64_t>(116) - ctx.r9.u64;
	// lwzx r16,r3,r7
	ctx.r16.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r3,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// clrlwi r7,r17,24
	ctx.r7.u64 = ctx.r17.u32 & 0xFF;
	// lwzx r11,r16,r18
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r18.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8993afc0
	ctx.lr = 0x89932440;
	sub_8993AFC0(ctx, base);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x89932478
	if (ctx.cr6.eq) goto loc_89932478;
loc_89932454:
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8993238c
	if (!ctx.cr6.eq) goto loc_8993238C;
loc_89932460:
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// addi r28,r28,180
	ctx.r28.s64 = ctx.r28.s64 + 180;
	// addi r27,r27,3
	ctx.r27.s64 = ctx.r27.s64 + 3;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8993236c
	if (ctx.cr6.lt) goto loc_8993236C;
loc_89932478:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba38
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89932E10) {
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
	ctx.lr = 0x89932E24;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89932ec0
	if (ctx.cr6.lt) goto loc_89932EC0;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r10,12800
	ctx.r11.s64 = ctx.r10.s64 + 12800;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// addi r7,r11,158
	ctx.r7.s64 = ctx.r11.s64 + 158;
	// mulli r10,r8,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// addi r11,r11,158
	ctx.r11.s64 = ctx.r11.s64 + 158;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// srawi r6,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 6;
	// lhzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// subf r9,r3,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r3.u64;
	// clrlwi r9,r9,23
	ctx.r9.u64 = ctx.r9.u32 & 0x1FF;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x89932e98
	if (ctx.cr6.eq) goto loc_89932E98;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// ble cr6,0x89932e88
	if (!ctx.cr6.gt) goto loc_89932E88;
	// subfic r9,r8,512
	ctx.xer.ca = ctx.r8.u32 <= 512;
	ctx.r9.u64 = static_cast<uint64_t>(512) - ctx.r8.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
loc_89932E88:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x89932eac
	if (!ctx.cr6.lt) goto loc_89932EAC;
	// sthx r6,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u16);
loc_89932E98:
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
loc_89932EAC:
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// addi r9,r7,16
	ctx.r9.s64 = ctx.r7.s64 + 16;
	// bgt cr6,0x89932ebc
	if (ctx.cr6.gt) goto loc_89932EBC;
	// addi r9,r7,-16
	ctx.r9.s64 = ctx.r7.s64 + -16;
loc_89932EBC:
	// sthx r9,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
loc_89932EC0:
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

DEFINE_REX_FUNC(sub_89933A98) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89933AA0;
	__savegprlr_27(ctx, base);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r10,r11,11976
	ctx.r10.s64 = ctx.r11.s64 + 11976;
	// lwz r28,1032(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 1032);
	// lhz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89933b6c
	if (ctx.cr6.eq) goto loc_89933B6C;
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
loc_89933AE4:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x89933b48
	if (ctx.cr6.gt) goto loc_89933B48;
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
loc_89933B04:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x89933b3c
	if (ctx.cr6.gt) goto loc_89933B3C;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
loc_89933B18:
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
	// beq cr6,0x89933b74
	if (ctx.cr6.eq) goto loc_89933B74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x89933b18
	if (!ctx.cr6.gt) goto loc_89933B18;
loc_89933B3C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x89933b04
	if (!ctx.cr6.gt) goto loc_89933B04;
loc_89933B48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_89933B4C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89933b7c
	if (ctx.cr6.eq) goto loc_89933B7C;
	// lhz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89933ae4
	if (!ctx.cr6.eq) goto loc_89933AE4;
loc_89933B6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89933B74:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x89933b4c
	goto loc_89933B4C;
loc_89933B7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89934298) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x899342A0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// li r21,1
	ctx.r21.s64 = 1;
	// lwzx r22,r9,r8
	ctx.r22.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lhz r30,0(r22)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x899343dc
	if (ctx.cr6.eq) goto loc_899343DC;
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
loc_899342F8:
	// clrlwi r31,r30,18
	ctx.r31.u64 = ctx.r30.u32 & 0x3FFF;
	// extsh r28,r30
	ctx.r28.s64 = ctx.r30.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899334b8
	ctx.lr = 0x89934308;
	sub_899334B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899343b4
	if (!ctx.cr6.eq) goto loc_899343B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89933520
	ctx.lr = 0x89934318;
	sub_89933520(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899343b4
	if (!ctx.cr6.eq) goto loc_899343B4;
	// bl 0x89933428
	ctx.lr = 0x89934328;
	sub_89933428(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899343b8
	if (ctx.cr6.eq) goto loc_899343B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_89934340:
	// lhzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// clrlwi r8,r9,18
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFF;
	// cmplwi cr6,r8,4096
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4096, ctx.xer);
	// beq cr6,0x8993436c
	if (ctx.cr6.eq) goto loc_8993436C;
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
	// blt cr6,0x89934340
	if (ctx.cr6.lt) goto loc_89934340;
	// li r10,256
	ctx.r10.s64 = 256;
loc_8993436C:
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// blt cr6,0x89934380
	if (ctx.cr6.lt) goto loc_89934380;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x899343b8
	goto loc_899343B8;
loc_89934380:
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
loc_899343B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_899343B8:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899343cc
	if (!ctx.cr6.eq) goto loc_899343CC;
	// li r21,0
	ctx.r21.s64 = 0;
loc_899343CC:
	// lhz r30,0(r22)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899342f8
	if (!ctx.cr6.eq) goto loc_899342F8;
loc_899343DC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89935468) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x89935470;
	__savegprlr_22(ctx, base);
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r27,200
	ctx.r27.s64 = 200;
	// li r28,136
	ctx.r28.s64 = 136;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// ori r31,r9,60652
	ctx.r31.u64 = ctx.r9.u64 | 60652;
	// li r26,10023
	ctx.r26.s64 = 10023;
loc_899354B4:
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r31,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r31.u16);
	// rlwinm r10,r5,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FFFC;
	// sth r26,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r26.u16);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 + ctx.r30.u64;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r27,24
	ctx.r8.u64 = ctx.r27.u32 & 0xFF;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// addi r7,r10,256
	ctx.r7.s64 = ctx.r10.s64 + 256;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// ori r9,r3,8192
	ctx.r9.u64 = ctx.r3.u64 | 8192;
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// sth r9,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r9.u16);
	// li r3,4096
	ctx.r3.s64 = 4096;
	// lhz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm r9,r7,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89935544
	if (ctx.cr6.eq) goto loc_89935544;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// ble cr6,0x89935544
	if (!ctx.cr6.gt) goto loc_89935544;
	// li r3,6144
	ctx.r3.s64 = 6144;
loc_89935544:
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89935568
	if (ctx.cr6.eq) goto loc_89935568;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// ble cr6,0x89935568
	if (!ctx.cr6.gt) goto loc_89935568;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r3,r10,1024
	ctx.r3.u64 = ctx.r10.u64 | 1024;
loc_89935568:
	// lhz r7,10(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r10,r25,16
	ctx.r10.u64 = ctx.r25.u32 & 0xFFFF;
	// or r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r3,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r3.u16);
	// beq cr6,0x899355f0
	if (ctx.cr6.eq) goto loc_899355F0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x899355f0
	if (!ctx.cr6.eq) goto loc_899355F0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x899355d8
	if (!ctx.cr6.gt) goto loc_899355D8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r28,216
	ctx.r28.s64 = 216;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
loc_899355D8:
	// extsb r10,r22
	ctx.r10.s64 = ctx.r22.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899355f0
	if (ctx.cr6.eq) goto loc_899355F0;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// li r25,6
	ctx.r25.s64 = 6;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
loc_899355F0:
	// addi r10,r23,1
	ctx.r10.s64 = ctx.r23.s64 + 1;
	// sthu r24,18(r11)
	ea = 18 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r24.u16);
	ctx.r11.u32 = ea;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// blt cr6,0x899354b4
	if (ctx.cr6.lt) goto loc_899354B4;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89936440) {
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
	// beq cr6,0x899364f0
	if (ctx.cr6.eq) goto loc_899364F0;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r9,r10,5100
	ctx.r9.s64 = ctx.r10.s64 + 5100;
	// lbz r11,9527(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9527);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,256
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 256, ctx.xer);
	// bge cr6,0x899364d8
	if (!ctx.cr6.lt) goto loc_899364D8;
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
	// beq cr6,0x899364d8
	if (ctx.cr6.eq) goto loc_899364D8;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bgt 0x899364d0
	if (ctx.cr0.gt) goto loc_899364D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x89936360
	ctx.lr = 0x899364BC;
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
loc_899364D0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899364f0
	if (!ctx.cr6.eq) goto loc_899364F0;
loc_899364D8:
	// bl 0x89936360
	ctx.lr = 0x899364DC;
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
loc_899364F0:
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

DEFINE_REX_FUNC(sub_89936DB0) {
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
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
	// mulli r11,r9,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// addi r8,r10,648
	ctx.r8.s64 = ctx.r10.s64 + 648;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// addi r4,r10,624
	ctx.r4.s64 = ctx.r10.s64 + 624;
	// addi r5,r7,-2488
	ctx.r5.s64 = ctx.r7.s64 + -2488;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// addi r7,r6,18944
	ctx.r7.s64 = ctx.r6.s64 + 18944;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// lbzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r31,r10,36
	ctx.r31.s64 = ctx.r10.s64 + 36;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// lbzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// srawi r6,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 8;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// lhzx r9,r4,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mullw r9,r5,r7
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r6,r7
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// bgt cr6,0x89936e98
	if (ctx.cr6.gt) goto loc_89936E98;
	// lis r12,-30317
	ctx.r12.s64 = -1986854912;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28240
	ctx.r12.s64 = ctx.r12.s64 + 28240;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_89936E78;
	case 1:
		goto loc_89936F0C;
	case 2:
		goto loc_89936E98;
	case 3:
		goto loc_89936FB4;
	case 4:
		goto loc_89936F7C;
	case 5:
		goto loc_8993701C;
	case 6:
		goto loc_89936E98;
	case 7:
		goto loc_89936F64;
	case 8:
		goto loc_89936F2C;
	case 9:
		goto loc_89936FCC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89936E78:
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lis r8,296
	ctx.r8.s64 = 19398656;
	// lwzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x89936e98
	if (!ctx.cr6.gt) goto loc_89936E98;
loc_89936E94:
	// stwx r8,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
loc_89936E98:
	// addi r9,r10,654
	ctx.r9.s64 = ctx.r10.s64 + 654;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bne cr6,0x8993707c
	if (!ctx.cr6.eq) goto loc_8993707C;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x8993707c
	if (ctx.cr6.gt) goto loc_8993707C;
	// lis r12,-30317
	ctx.r12.s64 = -1986854912;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28388
	ctx.r12.s64 = ctx.r12.s64 + 28388;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8993706C;
	case 1:
		goto loc_8993706C;
	case 2:
		goto loc_8993706C;
	case 3:
		goto loc_8993706C;
	case 4:
		goto loc_8993706C;
	case 5:
		goto loc_8993707C;
	case 6:
		goto loc_89937074;
	case 7:
		goto loc_89937074;
	case 8:
		goto loc_89937074;
	case 9:
		goto loc_89937074;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89936F0C:
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lis r8,24
	ctx.r8.s64 = 1572864;
	// lwzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// subf r5,r9,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r9.u64;
	// stwx r5,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x89936e98
	if (!ctx.cr6.lt) goto loc_89936E98;
	// b 0x89936e94
	goto loc_89936E94;
loc_89936F2C:
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// mulli r8,r9,3405
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3405));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// lis r8,296
	ctx.r8.s64 = 19398656;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x89936f58
	if (!ctx.cr6.gt) goto loc_89936F58;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_89936F58:
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// mulli r10,r11,3405
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3405));
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
loc_89936F64:
	// bl 0x89936bb0
	ctx.lr = 0x89936F68;
	sub_89936BB0(ctx, base);
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
loc_89936F7C:
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// mulli r8,r9,3405
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3405));
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// lis r8,296
	ctx.r8.s64 = 19398656;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x89936fa8
	if (!ctx.cr6.gt) goto loc_89936FA8;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_89936FA8:
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// mulli r10,r11,3405
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3405));
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
loc_89936FB4:
	// bl 0x89936cb0
	ctx.lr = 0x89936FB8;
	sub_89936CB0(ctx, base);
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
loc_89936FCC:
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// mulli r7,r9,3405
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3405));
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// lis r8,24
	ctx.r8.s64 = 1572864;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x89936ff8
	if (!ctx.cr6.lt) goto loc_89936FF8;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_89936FF8:
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// mulli r10,r11,3405
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3405));
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// bl 0x89936bb0
	ctx.lr = 0x89937008;
	sub_89936BB0(ctx, base);
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
loc_8993701C:
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// mulli r7,r9,3405
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3405));
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// lis r8,24
	ctx.r8.s64 = 1572864;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x89937048
	if (!ctx.cr6.lt) goto loc_89937048;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_89937048:
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// mulli r10,r11,3405
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3405));
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// bl 0x89936cb0
	ctx.lr = 0x89937058;
	sub_89936CB0(ctx, base);
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
loc_8993706C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x89937078
	goto loc_89937078;
loc_89937074:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_89937078:
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
loc_8993707C:
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

DEFINE_REX_FUNC(sub_8993BBA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8993BBB0;
	__savegprlr_29(ctx, base);
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
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r9,r11,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8993bc54
	if (!ctx.cr6.eq) goto loc_8993BC54;
	// addi r10,r30,635
	ctx.r10.s64 = ctx.r30.s64 + 635;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// beq cr6,0x8993bc54
	if (ctx.cr6.eq) goto loc_8993BC54;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r30,638
	ctx.r7.s64 = ctx.r30.s64 + 638;
	// rlwimi r11,r8,29,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// addi r6,r30,654
	ctx.r6.s64 = ctx.r30.s64 + 654;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r11,r8,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// ori r4,r5,16
	ctx.r4.u64 = ctx.r5.u64 | 16;
	// stbx r9,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u8);
	// li r3,73
	ctx.r3.s64 = 73;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// stwx r4,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// stbx r9,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u8);
	// bl 0x89936360
	ctx.lr = 0x8993BC24;
	sub_89936360(ctx, base);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r9,7008
	ctx.r11.s64 = ctx.r9.s64 + 7008;
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r8,r11,18
	ctx.r8.s64 = ctx.r11.s64 + 18;
	// rlwinm r6,r7,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// mulli r5,r6,30
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(30));
	// lbzx r4,r5,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// bl 0x899362a0
	ctx.lr = 0x8993BC4C;
	sub_899362A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_8993BC54:
	// addi r11,r30,655
	ctx.r11.s64 = ctx.r30.s64 + 655;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993C7F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x8993C7F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,12800
	ctx.r5.s64 = ctx.r10.s64 + 12800;
	// lhz r26,20416(r9)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r9.u32 + 20416);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x8993c844
	if (!ctx.cr6.lt) goto loc_8993C844;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x8993c718
	ctx.lr = 0x8993C82C;
	sub_8993C718(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993c844
	if (ctx.cr6.eq) goto loc_8993C844;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_8993C844:
	// lis r30,-30214
	ctx.r30.s64 = -1980104704;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r7,3488(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 3488);
	// mulli r11,r7,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// ble cr6,0x8993c96c
	if (!ctx.cr6.gt) goto loc_8993C96C;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lis r29,16416
	ctx.r29.s64 = 1075838976;
	// lis r28,160
	ctx.r28.s64 = 10485760;
	// lis r27,152
	ctx.r27.s64 = 9961472;
	// lis r3,120
	ctx.r3.s64 = 7864320;
	// lwz r31,-21584(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
loc_8993C878:
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8993c888
	if (ctx.cr6.lt) goto loc_8993C888;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8993C888:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r11,r8,0,1,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7FE00000;
	// rlwinm r11,r11,0,10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFC03FFFFF;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8993c938
	if (!ctx.cr6.eq) goto loc_8993C938;
	// rlwinm r11,r8,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8993c938
	if (!ctx.cr6.eq) goto loc_8993C938;
	// lbz r11,202(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 202);
	// lbz r25,200(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 200);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8993c938
	if (ctx.cr6.lt) goto loc_8993C938;
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// subf. r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8993c8cc
	if (!ctx.cr0.lt) goto loc_8993C8CC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8993C8CC:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8993c938
	if (!ctx.cr6.lt) goto loc_8993C938;
	// lwz r11,52(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// subf. r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8993c8e8
	if (!ctx.cr0.lt) goto loc_8993C8E8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8993C8E8:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8993c938
	if (!ctx.cr6.lt) goto loc_8993C938;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8993c938
	if (ctx.cr6.eq) goto loc_8993C938;
	// rlwinm r11,r8,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8993c928
	if (ctx.cr6.eq) goto loc_8993C928;
loc_8993C90C:
	// lhz r11,148(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 148);
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r8,r9,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8993c90c
	if (!ctx.cr6.eq) goto loc_8993C90C;
loc_8993C928:
	// lhz r11,72(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8993c93c
	if (!ctx.cr6.eq) goto loc_8993C93C;
loc_8993C938:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8993C93C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8993c978
	if (!ctx.cr6.eq) goto loc_8993C978;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 + 208;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8993c878
	if (ctx.cr6.lt) goto loc_8993C878;
	// stw r7,3488(r30)
	REX_STORE_U32(ctx.r30.u32 + 3488, ctx.r7.u32);
loc_8993C96C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_8993C978:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r7,3488(r30)
	REX_STORE_U32(ctx.r30.u32 + 3488, ctx.r7.u32);
	// clrlwi r3,r7,16
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r11,3488(r30)
	REX_STORE_U32(ctx.r30.u32 + 3488, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993F5B8) {
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
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,4947(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4947);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x8993f5f4
	if (ctx.cr6.eq) goto loc_8993F5F4;
	// li r5,10
	ctx.r5.s64 = 10;
	// b 0x8993f608
	goto loc_8993F608;
loc_8993F5F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8992aca8
	ctx.lr = 0x8993F5FC;
	sub_8992ACA8(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8993F608:
	// bl 0x8992aca8
	ctx.lr = 0x8993F60C;
	sub_8992ACA8(ctx, base);
	// lhz r11,134(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 134);
	// lhz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// srawi r10,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 2;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// bl 0x89930720
	ctx.lr = 0x8993F628;
	sub_89930720(ctx, base);
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// bge cr6,0x8993f640
	if (!ctx.cr6.lt) goto loc_8993F640;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// sth r11,134(r1)
	REX_STORE_U16(ctx.r1.u32 + 134, ctx.r11.u16);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x8993f644
	goto loc_8993F644;
loc_8993F640:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8993F644:
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

DEFINE_REX_FUNC(sub_8993FC78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8993FC80;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r18,0
	ctx.r18.s64 = 0;
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// lwz r11,3516(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3516);
	// lis r21,-30270
	ctx.r21.s64 = -1983774720;
	// lbz r31,32018(r9)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r9.u32 + 32018);
	// addi r30,r10,25128
	ctx.r30.s64 = ctx.r10.s64 + 25128;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8993fe28
	if (!ctx.cr6.eq) goto loc_8993FE28;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lbz r9,658(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 658);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lbz r4,12322(r21)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r21.u32 + 12322);
	// lis r10,-30234
	ctx.r10.s64 = -1981415424;
	// lbz r7,3891(r23)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r23.u32 + 3891);
	// ori r11,r6,65535
	ctx.r11.u64 = ctx.r6.u64 | 65535;
	// addi r3,r10,-14960
	ctx.r3.s64 = ctx.r10.s64 + -14960;
	// lbz r6,7935(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 7935);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8993fd74
	if (ctx.cr6.lt) goto loc_8993FD74;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bge cr6,0x8993fd74
	if (!ctx.cr6.lt) goto loc_8993FD74;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8993fd74
	if (ctx.cr6.eq) goto loc_8993FD74;
	// lhz r10,14(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r5,664(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 664);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8993fd10
	if (ctx.cr6.eq) goto loc_8993FD10;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8993fd74
	if (!ctx.cr6.gt) goto loc_8993FD74;
loc_8993FD10:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r29,r9,24
	ctx.r29.u64 = ctx.r9.u32 & 0xFF;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r28,r7,24
	ctx.r28.u64 = ctx.r7.u32 & 0xFF;
	// addic r27,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r27.s64 = ctx.r10.s64 + -1;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lbz r8,659(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 659);
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subfe r5,r27,r10
	temp.u8 = (~ctx.r27.u32 + ctx.r10.u32 < ~ctx.r27.u32) | (~ctx.r27.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r27.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// sth r18,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r18.u16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// sth r29,12(r3)
	REX_STORE_U16(ctx.r3.u32 + 12, ctx.r29.u16);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// sth r18,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r18.u16);
	// sth r10,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// mullw r10,r5,r28
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// sth r8,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// sth r10,10(r3)
	REX_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// sth r9,14(r3)
	REX_STORE_U16(ctx.r3.u32 + 14, ctx.r9.u16);
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// sth r10,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r10.u16);
	// sth r9,20(r3)
	REX_STORE_U16(ctx.r3.u32 + 20, ctx.r9.u16);
loc_8993FD74:
	// lbz r9,1354(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1354);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8993fe1c
	if (ctx.cr6.lt) goto loc_8993FE1C;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bge cr6,0x8993fe1c
	if (!ctx.cr6.lt) goto loc_8993FE1C;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8993fe1c
	if (ctx.cr6.eq) goto loc_8993FE1C;
	// lhz r10,42(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 42);
	// lwz r8,1360(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1360);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8993fdb4
	if (ctx.cr6.eq) goto loc_8993FDB4;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8993fe1c
	if (!ctx.cr6.gt) goto loc_8993FE1C;
loc_8993FDB4:
	// lwz r10,696(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 696);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,704(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 704);
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// addic r29,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// lbz r9,1355(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 1355);
	// stw r8,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// subfe r8,r29,r10
	temp.u8 = (~ctx.r29.u32 + ctx.r10.u32 < ~ctx.r29.u32) | (~ctx.r29.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r29.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// sth r18,44(r3)
	REX_STORE_U16(ctx.r3.u32 + 44, ctx.r18.u16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// sth r11,32(r3)
	REX_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// sth r9,34(r3)
	REX_STORE_U16(ctx.r3.u32 + 34, ctx.r9.u16);
	// sth r11,38(r3)
	REX_STORE_U16(ctx.r3.u32 + 38, ctx.r11.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r10,42(r3)
	REX_STORE_U16(ctx.r3.u32 + 42, ctx.r10.u16);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// sth r9,36(r3)
	REX_STORE_U16(ctx.r3.u32 + 36, ctx.r9.u16);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// sth r5,40(r3)
	REX_STORE_U16(ctx.r3.u32 + 40, ctx.r5.u16);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// sth r11,46(r3)
	REX_STORE_U16(ctx.r3.u32 + 46, ctx.r11.u16);
	// sth r10,48(r3)
	REX_STORE_U16(ctx.r3.u32 + 48, ctx.r10.u16);
loc_8993FE1C:
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,7168
	ctx.r4.s64 = 7168;
	// bl 0x899d8fd0
	ctx.lr = 0x8993FE28;
	sub_899D8FD0(ctx, base);
loc_8993FE28:
	// extsb r20,r31
	ctx.r20.s64 = ctx.r31.s8;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// mulli r10,r20,13
	ctx.r10.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(13));
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r31,r11,3800
	ctx.r31.s64 = ctx.r11.s64 + 3800;
	// rlwinm r25,r10,5,0,26
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r31,27
	ctx.r11.s64 = ctx.r31.s64 + 27;
	// addi r10,r31,59
	ctx.r10.s64 = ctx.r31.s64 + 59;
	// addi r9,r31,91
	ctx.r9.s64 = ctx.r31.s64 + 91;
	// addi r8,r31,123
	ctx.r8.s64 = ctx.r31.s64 + 123;
	// addi r7,r31,155
	ctx.r7.s64 = ctx.r31.s64 + 155;
	// addi r4,r31,187
	ctx.r4.s64 = ctx.r31.s64 + 187;
	// addi r3,r31,219
	ctx.r3.s64 = ctx.r31.s64 + 219;
	// addi r27,r31,251
	ctx.r27.s64 = ctx.r31.s64 + 251;
	// addi r26,r31,283
	ctx.r26.s64 = ctx.r31.s64 + 283;
	// addi r24,r31,315
	ctx.r24.s64 = ctx.r31.s64 + 315;
	// li r22,255
	ctx.r22.s64 = 255;
	// li r19,-1
	ctx.r19.s64 = -1;
	// stbx r22,r25,r11
	REX_STORE_U8(ctx.r25.u32 + ctx.r11.u32, ctx.r22.u8);
	// lis r29,-30214
	ctx.r29.s64 = -1980104704;
	// stbx r22,r25,r10
	REX_STORE_U8(ctx.r25.u32 + ctx.r10.u32, ctx.r22.u8);
	// lis r28,-30232
	ctx.r28.s64 = -1981284352;
	// stbx r22,r25,r4
	REX_STORE_U8(ctx.r25.u32 + ctx.r4.u32, ctx.r22.u8);
	// li r6,2
	ctx.r6.s64 = 2;
	// stbx r22,r25,r3
	REX_STORE_U8(ctx.r25.u32 + ctx.r3.u32, ctx.r22.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stbx r22,r25,r9
	REX_STORE_U8(ctx.r25.u32 + ctx.r9.u32, ctx.r22.u8);
	// stbx r22,r25,r8
	REX_STORE_U8(ctx.r25.u32 + ctx.r8.u32, ctx.r22.u8);
	// stbx r22,r25,r7
	REX_STORE_U8(ctx.r25.u32 + ctx.r7.u32, ctx.r22.u8);
	// stbx r22,r25,r27
	REX_STORE_U8(ctx.r25.u32 + ctx.r27.u32, ctx.r22.u8);
	// stbx r22,r25,r26
	REX_STORE_U8(ctx.r25.u32 + ctx.r26.u32, ctx.r22.u8);
	// stbx r22,r25,r24
	REX_STORE_U8(ctx.r25.u32 + ctx.r24.u32, ctx.r22.u8);
	// sth r19,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r19.u16);
	// lwz r3,3680(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 3680);
	// lwz r11,-26964(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -26964);
	// addi r4,r11,4124
	ctx.r4.s64 = ctx.r11.s64 + 4124;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8993FEC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3680(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 3680);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,-26964(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -26964);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4126
	ctx.r4.s64 = ctx.r11.s64 + 4126;
	// lwz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8993FEEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// addi r26,r11,19412
	ctx.r26.s64 = ctx.r11.s64 + 19412;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r27,4124
	ctx.r27.s64 = 4124;
	// addi r30,r30,664
	ctx.r30.s64 = ctx.r30.s64 + 664;
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
	// lis r24,-30275
	ctx.r24.s64 = -1984102400;
	// ori r19,r11,4096
	ctx.r19.u64 = ctx.r11.u64 | 4096;
loc_8993FF10:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r11,3516(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899401dc
	if (!ctx.cr6.eq) goto loc_899401DC;
	// lbz r10,9518(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 9518);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899401dc
	if (!ctx.cr6.eq) goto loc_899401DC;
	// lbz r10,-6(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + -6);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x899401dc
	if (!ctx.cr6.eq) goto loc_899401DC;
	// lbz r10,12322(r21)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r21.u32 + 12322);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bge cr6,0x899401dc
	if (!ctx.cr6.lt) goto loc_899401DC;
	// mulli r11,r20,13
	ctx.r11.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(13));
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,-664(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -664);
	// lwz r8,-656(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -656);
	// lwz r7,-4(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + -4);
	// lbz r4,-5(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + -5);
	// lbz r3,3891(r23)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r23.u32 + 3891);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r19,r31,320
	ctx.r19.s64 = ctx.r31.s64 + 320;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r16,r31,332
	ctx.r16.s64 = ctx.r31.s64 + 332;
	// addi r15,r31,336
	ctx.r15.s64 = ctx.r31.s64 + 336;
	// addic r20,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r20.s64 = ctx.r10.s64 + -1;
	// addi r18,r31,324
	ctx.r18.s64 = ctx.r31.s64 + 324;
	// addi r17,r31,328
	ctx.r17.s64 = ctx.r31.s64 + 328;
	// stwx r9,r11,r19
	REX_STORE_U32(ctx.r11.u32 + ctx.r19.u32, ctx.r9.u32);
	// stwx r6,r11,r16
	REX_STORE_U32(ctx.r11.u32 + ctx.r16.u32, ctx.r6.u32);
	// addi r9,r31,344
	ctx.r9.s64 = ctx.r31.s64 + 344;
	// stwx r5,r11,r15
	REX_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r5.u32);
	// subfe r6,r20,r10
	temp.u8 = (~ctx.r20.u32 + ctx.r10.u32 < ~ctx.r20.u32) | (~ctx.r20.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r20.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r31,345
	ctx.r5.s64 = ctx.r31.s64 + 345;
	// stwx r8,r11,r18
	REX_STORE_U32(ctx.r11.u32 + ctx.r18.u32, ctx.r8.u32);
	// mullw r6,r6,r3
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// stwx r7,r11,r17
	REX_STORE_U32(ctx.r11.u32 + ctx.r17.u32, ctx.r7.u32);
	// stbx r4,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u8);
	// stbx r6,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u8);
	// addi r14,r31,340
	ctx.r14.s64 = ctx.r31.s64 + 340;
	// addi r8,r31,347
	ctx.r8.s64 = ctx.r31.s64 + 347;
	// addi r7,r31,346
	ctx.r7.s64 = ctx.r31.s64 + 346;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r5,r27,2
	ctx.r5.s64 = ctx.r27.s64 + 2;
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// ori r19,r10,4096
	ctx.r19.u64 = ctx.r10.u64 | 4096;
	// stwx r18,r11,r14
	REX_STORE_U32(ctx.r11.u32 + ctx.r14.u32, ctx.r18.u32);
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// sth r18,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r18.u16);
	// cmplw cr6,r5,r19
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r19.u32, ctx.xer);
	// bgt cr6,0x89940018
	if (ctx.cr6.gt) goto loc_89940018;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// lwz r3,3680(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 3680);
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-26964(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -26964);
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x89940018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_89940018:
	// lwz r20,84(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8994001C:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r11,r26,36
	ctx.r11.s64 = ctx.r26.s64 + 36;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r30,r30,696
	ctx.r30.s64 = ctx.r30.s64 + 696;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8993ff10
	if (ctx.cr6.lt) goto loc_8993FF10;
loc_89940038:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,11
	ctx.r4.s64 = 11;
loc_89940044:
	// mulli r11,r20,13
	ctx.r11.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(13));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x899400d0
	if (!ctx.cr6.lt) goto loc_899400D0;
	// addi r9,r31,384
	ctx.r9.s64 = ctx.r31.s64 + 384;
	// mulli r8,r20,416
	ctx.r8.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(416));
	// li r10,8
	ctx.r10.s64 = 8;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_89940088:
	// lwzu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x89940088
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89940088;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899400A4:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x899400a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899400A4;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_899400C0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x899400c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899400C0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_899400D0:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne 0x89940044
	if (!ctx.cr0.eq) goto loc_89940044;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89940038
	if (!ctx.cr6.eq) goto loc_89940038;
	// addi r11,r31,347
	ctx.r11.s64 = ctx.r31.s64 + 347;
	// lis r10,-32640
	ctx.r10.s64 = -2139095040;
	// add r30,r25,r11
	ctx.r30.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lis r11,-32640
	ctx.r11.s64 = -2139095040;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// li r27,4124
	ctx.r27.s64 = 4124;
	// li r25,3
	ctx.r25.s64 = 3;
	// ori r26,r11,32833
	ctx.r26.u64 = ctx.r11.u64 | 32833;
	// ori r28,r10,32800
	ctx.r28.u64 = ctx.r10.u64 | 32800;
loc_89940108:
	// stb r22,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r22.u8);
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// stb r25,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r25.u8);
loc_89940114:
	// mulli r11,r20,13
	ctx.r11.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(13));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r31,27
	ctx.r10.s64 = ctx.r31.s64 + 27;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x89940184
	if (!ctx.cr6.eq) goto loc_89940184;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// stw r26,-19(r30)
	REX_STORE_U32(ctx.r30.u32 + -19, ctx.r26.u32);
	// addi r9,r27,2
	ctx.r9.s64 = ctx.r27.s64 + 2;
	// stw r28,-15(r30)
	REX_STORE_U32(ctx.r30.u32 + -15, ctx.r28.u32);
	// stw r28,-11(r30)
	REX_STORE_U32(ctx.r30.u32 + -11, ctx.r28.u32);
	// stb r29,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// cmplw cr6,r9,r19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r19.u32, ctx.xer);
	// stb r18,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r18.u8);
	// sth r11,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// bgt cr6,0x89940184
	if (ctx.cr6.gt) goto loc_89940184;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,3680(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 3680);
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-26964(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -26964);
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x89940184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_89940184:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// blt cr6,0x89940114
	if (ctx.cr6.lt) goto loc_89940114;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpwi cr6,r27,4128
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4128, ctx.xer);
	// blt cr6,0x89940108
	if (ctx.cr6.lt) goto loc_89940108;
	// mulli r11,r20,416
	ctx.r11.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(416));
	// addi r10,r31,348
	ctx.r10.s64 = ctx.r31.s64 + 348;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899401c8
	if (ctx.cr6.eq) goto loc_899401C8;
	// addi r10,r31,380
	ctx.r10.s64 = ctx.r31.s64 + 380;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899401d4
	if (!ctx.cr6.eq) goto loc_899401D4;
loc_899401C8:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r11,1800
	ctx.r11.s64 = 1800;
	// stw r11,3892(r10)
	REX_STORE_U32(ctx.r10.u32 + 3892, ctx.r11.u32);
loc_899401D4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_899401DC:
	// mulli r11,r20,13
	ctx.r11.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(13));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r10,r31,320
	ctx.r10.s64 = ctx.r31.s64 + 320;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r18,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r18.u32);
	// b 0x8994001c
	goto loc_8994001C;
}

DEFINE_REX_FUNC(sub_89945858) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89945860;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lis r7,-30273
	ctx.r7.s64 = -1983971328;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r20,0
	ctx.r20.s64 = 0;
	// lbz r11,21(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stb r20,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r20.u8);
	// stb r24,6419(r7)
	REX_STORE_U8(ctx.r7.u32 + 6419, ctx.r24.u8);
	// stb r11,9654(r8)
	REX_STORE_U8(ctx.r8.u32 + 9654, ctx.r11.u8);
	// stb r11,9527(r9)
	REX_STORE_U8(ctx.r9.u32 + 9527, ctx.r11.u8);
	// bl 0x89915ec0
	ctx.lr = 0x899458A0;
	sub_89915EC0(ctx, base);
	// bl 0x8991acf0
	ctx.lr = 0x899458A4;
	sub_8991ACF0(ctx, base);
	// bl 0x899193a8
	ctx.lr = 0x899458A8;
	sub_899193A8(ctx, base);
	// bl 0x8992bf38
	ctx.lr = 0x899458AC;
	sub_8992BF38(ctx, base);
	// bl 0x89917740
	ctx.lr = 0x899458B0;
	sub_89917740(ctx, base);
	// bl 0x89918ad0
	ctx.lr = 0x899458B4;
	sub_89918AD0(ctx, base);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r7,-30276
	ctx.r7.s64 = -1984167936;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,128
	ctx.r9.s64 = 128;
	// stb r11,9539(r6)
	REX_STORE_U8(ctx.r6.u32 + 9539, ctx.r11.u8);
	// stb r10,32019(r7)
	REX_STORE_U8(ctx.r7.u32 + 32019, ctx.r10.u8);
	// stb r9,6054(r8)
	REX_STORE_U8(ctx.r8.u32 + 6054, ctx.r9.u8);
	// bl 0x89942f18
	ctx.lr = 0x899458DC;
	sub_89942F18(ctx, base);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// sth r20,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r20.u16);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// lis r4,-30295
	ctx.r4.s64 = -1985413120;
	// lis r3,-30295
	ctx.r3.s64 = -1985413120;
	// lis r29,-30295
	ctx.r29.s64 = -1985413120;
	// lis r28,-30295
	ctx.r28.s64 = -1985413120;
	// lis r26,-30295
	ctx.r26.s64 = -1985413120;
	// lis r31,32639
	ctx.r31.s64 = 2139029504;
	// addi r17,r10,20568
	ctx.r17.s64 = ctx.r10.s64 + 20568;
	// addi r21,r7,25128
	ctx.r21.s64 = ctx.r7.s64 + 25128;
	// addi r15,r27,20432
	ctx.r15.s64 = ctx.r27.s64 + 20432;
	// stw r17,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// stw r21,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r15,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// addi r10,r6,20648
	ctx.r10.s64 = ctx.r6.s64 + 20648;
	// addi r18,r4,20572
	ctx.r18.s64 = ctx.r4.s64 + 20572;
	// addi r19,r3,20576
	ctx.r19.s64 = ctx.r3.s64 + 20576;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r14,r29,20580
	ctx.r14.s64 = ctx.r29.s64 + 20580;
	// stw r18,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// addi r16,r28,14016
	ctx.r16.s64 = ctx.r28.s64 + 14016;
	// stw r19,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// addi r26,r26,-5016
	ctx.r26.s64 = ctx.r26.s64 + -5016;
	// stw r14,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r14.u32);
	// lis r7,16448
	ctx.r7.s64 = 1077936128;
	// stw r16,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// ori r22,r31,32768
	ctx.r22.u64 = ctx.r31.u64 | 32768;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r31,r11,5344
	ctx.r31.s64 = ctx.r11.s64 + 5344;
	// addi r25,r9,12280
	ctx.r25.s64 = ctx.r9.s64 + 12280;
	// addi r30,r8,-31400
	ctx.r30.s64 = ctx.r8.s64 + -31400;
	// addi r23,r5,9656
	ctx.r23.s64 = ctx.r5.s64 + 9656;
	// ori r27,r7,49152
	ctx.r27.u64 = ctx.r7.u64 | 49152;
loc_8994597C:
	// bl 0x899301c0
	ctx.lr = 0x89945980;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x89945984;
	sub_899309D8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89930930
	ctx.lr = 0x8994598C;
	sub_89930930(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x89945990;
	sub_899306A8(ctx, base);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r9,7104(r8)
	REX_STORE_U32(ctx.r8.u32 + 7104, ctx.r9.u32);
	// addi r9,r30,4908
	ctx.r9.s64 = ctx.r30.s64 + 4908;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899459d0
	if (ctx.cr6.eq) goto loc_899459D0;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_899459B8:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r22,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r22.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899459b8
	if (!ctx.cr6.eq) goto loc_899459B8;
loc_899459D0:
	// lbz r29,128(r15)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r15.u32 + 128);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stb r24,38(r25)
	REX_STORE_U8(ctx.r25.u32 + 38, ctx.r24.u8);
	// rlwinm r10,r29,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89945a10
	if (ctx.cr6.eq) goto loc_89945A10;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// stb r5,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// bl 0x899306a8
	ctx.lr = 0x89945A10;
	sub_899306A8(ctx, base);
loc_89945A10:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89946180
	if (ctx.cr6.lt) goto loc_89946180;
	// beq cr6,0x89945b1c
	if (ctx.cr6.eq) goto loc_89945B1C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x899462f4
	if (!ctx.cr6.lt) goto loc_899462F4;
	// bl 0x899452f0
	ctx.lr = 0x89945A30;
	sub_899452F0(ctx, base);
	// bl 0x89917aa0
	ctx.lr = 0x89945A34;
	sub_89917AA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_89945A3C:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x89917e48
	ctx.lr = 0x89945A44;
	sub_89917E48(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x89945a3c
	if (ctx.cr6.lt) goto loc_89945A3C;
	// bl 0x899442b0
	ctx.lr = 0x89945A5C;
	sub_899442B0(ctx, base);
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,-21584(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
loc_89945A68:
	// mulli r11,r28,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(696));
	// lwzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89945b04
	if (ctx.cr6.eq) goto loc_89945B04;
	// addi r10,r21,8
	ctx.r10.s64 = ctx.r21.s64 + 8;
	// addi r9,r21,588
	ctx.r9.s64 = ctx.r21.s64 + 588;
	// addi r6,r21,16
	ctx.r6.s64 = ctx.r21.s64 + 16;
	// addi r7,r21,12
	ctx.r7.s64 = ctx.r21.s64 + 12;
	// addi r4,r21,28
	ctx.r4.s64 = ctx.r21.s64 + 28;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r10,r21,676
	ctx.r10.s64 = ctx.r21.s64 + 676;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// rlwinm r8,r3,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r9,r21,24
	ctx.r9.s64 = ctx.r21.s64 + 24;
	// lwzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r3,r11,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r7,r11,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lwzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x89939350
	ctx.lr = 0x89945B04;
	sub_89939350(ctx, base);
loc_89945B04:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89945a68
	if (ctx.cr6.lt) goto loc_89945A68;
	// b 0x899462f4
	goto loc_899462F4;
loc_89945B1C:
	// lbz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
loc_89945B2C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// li r5,4
	ctx.r5.s64 = 4;
loc_89945B3C:
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x89945b7c
	if (ctx.cr6.eq) goto loc_89945B7C;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89945B64:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r29,r22,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r22.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r29,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89945b64
	if (!ctx.cr6.eq) goto loc_89945B64;
loc_89945B7C:
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// stbx r24,r7,r25
	REX_STORE_U8(ctx.r7.u32 + ctx.r25.u32, ctx.r24.u8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// blt cr6,0x89945b3c
	if (ctx.cr6.lt) goto loc_89945B3C;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// blt cr6,0x89945b2c
	if (ctx.cr6.lt) goto loc_89945B2C;
	// lbz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// rlwinm r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,256(r15)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r15.u32 + 256);
	// beq cr6,0x89945c74
	if (ctx.cr6.eq) goto loc_89945C74;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89945bd8
	if (ctx.cr6.eq) goto loc_89945BD8;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stw r11,7104(r10)
	REX_STORE_U32(ctx.r10.u32 + 7104, ctx.r11.u32);
loc_89945BD8:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// rlwinm r10,r9,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// lwz r11,12000(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12000);
	// neg r8,r11
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// andc r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// and r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 & ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x89945c08
	if (ctx.cr6.eq) goto loc_89945C08;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-8
	ctx.r11.s64 = -524288;
	// stw r11,7104(r10)
	REX_STORE_U32(ctx.r10.u32 + 7104, ctx.r11.u32);
loc_89945C08:
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// lis r10,432
	ctx.r10.s64 = 28311552;
	// rlwinm r7,r9,29,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// lwz r11,-21584(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// eqv r5,r10,r11
	ctx.r5.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x89945c40
	if (ctx.cr6.eq) goto loc_89945C40;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// stw r11,-21584(r8)
	REX_STORE_U32(ctx.r8.u32 + -21584, ctx.r11.u32);
loc_89945C40:
	// lis r10,352
	ctx.r10.s64 = 23068672;
	// rlwinm r9,r9,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r6,r11,r10
	ctx.r6.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// and r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89945df4
	if (ctx.cr6.eq) goto loc_89945DF4;
	// addis r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -524288;
	// stw r11,-21584(r8)
	REX_STORE_U32(ctx.r8.u32 + -21584, ctx.r11.u32);
	// b 0x89945df4
	goto loc_89945DF4;
loc_89945C74:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lbz r5,0(r18)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89945d04
	if (ctx.cr6.eq) goto loc_89945D04;
	// extsh r11,r20
	ctx.r11.s64 = ctx.r20.s16;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// subfic r7,r11,29
	ctx.xer.ca = ctx.r11.u32 <= 29;
	ctx.r7.u64 = static_cast<uint64_t>(29) - ctx.r11.u64;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// rlwinm r7,r6,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// beq cr6,0x89945ccc
	if (ctx.cr6.eq) goto loc_89945CCC;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_89945CB4:
	// lbzu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r3,r22,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r22.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// stwu r3,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89945cb4
	if (!ctx.cr6.eq) goto loc_89945CB4;
loc_89945CCC:
	// stbx r24,r6,r25
	REX_STORE_U8(ctx.r6.u32 + ctx.r25.u32, ctx.r24.u8);
loc_89945CD0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r20,r7,r10
	ctx.r20.u64 = ctx.r7.u64 & ctx.r10.u64;
	// extsh r11,r20
	ctx.r11.s64 = ctx.r20.s16;
	// sth r20,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r20.u16);
	// mulli r6,r11,92
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(92));
	// lwzx r3,r6,r23
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x89945cd0
	if (ctx.cr6.eq) goto loc_89945CD0;
loc_89945D04:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89945d88
	if (ctx.cr6.eq) goto loc_89945D88;
	// extsh r7,r20
	ctx.r7.s64 = ctx.r20.s16;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// subfic r8,r7,29
	ctx.xer.ca = ctx.r7.u32 <= 29;
	ctx.r8.u64 = static_cast<uint64_t>(29) - ctx.r7.u64;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// rlwinm r8,r6,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x89945d54
	if (ctx.cr6.eq) goto loc_89945D54;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89945D3C:
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
	// bne cr6,0x89945d3c
	if (!ctx.cr6.eq) goto loc_89945D3C;
loc_89945D54:
	// stbx r24,r6,r25
	REX_STORE_U8(ctx.r6.u32 + ctx.r25.u32, ctx.r24.u8);
loc_89945D58:
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// extsh r20,r11
	ctx.r20.s64 = ctx.r11.s16;
	// sth r20,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r20.u16);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bge cr6,0x89945d74
	if (!ctx.cr6.lt) goto loc_89945D74;
	// li r20,5
	ctx.r20.s64 = 5;
	// sth r20,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r20.u16);
loc_89945D74:
	// extsh r7,r20
	ctx.r7.s64 = ctx.r20.s16;
	// mulli r11,r7,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(92));
	// lwzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89945d58
	if (ctx.cr6.eq) goto loc_89945D58;
loc_89945D88:
	// extsh r6,r20
	ctx.r6.s64 = ctx.r20.s16;
	// lbz r11,-10032(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -10032);
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// subfic r8,r6,29
	ctx.xer.ca = ctx.r6.u32 <= 29;
	ctx.r8.u64 = static_cast<uint64_t>(29) - ctx.r6.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// addi r10,r31,-10032
	ctx.r10.s64 = ctx.r31.s64 + -10032;
	// rlwinm r8,r7,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x89945dd4
	if (ctx.cr6.eq) goto loc_89945DD4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89945DB8:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addis r5,r11,16576
	ctx.r5.s64 = ctx.r11.s64 + 1086324736;
	// addi r5,r5,16384
	ctx.r5.s64 = ctx.r5.s64 + 16384;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89945db8
	if (!ctx.cr6.eq) goto loc_89945DB8;
loc_89945DD4:
	// rlwinm r11,r4,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC;
	// stbx r24,r7,r25
	REX_STORE_U8(ctx.r7.u32 + ctx.r25.u32, ctx.r24.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89945df4
	if (ctx.cr6.eq) goto loc_89945DF4;
	// mulli r11,r6,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(92));
	// lwzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// xoris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 ^ 1073741824;
	// stwx r9,r11,r23
	REX_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r9.u32);
loc_89945DF4:
	// bl 0x89917aa0
	ctx.lr = 0x89945DF8;
	sub_89917AA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_89945E00:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x89917e48
	ctx.lr = 0x89945E08;
	sub_89917E48(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x89945e00
	if (ctx.cr6.lt) goto loc_89945E00;
	// lis r4,16448
	ctx.r4.s64 = 1077936128;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// ori r4,r4,49152
	ctx.r4.u64 = ctx.r4.u64 | 49152;
	// bl 0x89931dd8
	ctx.lr = 0x89945E2C;
	sub_89931DD8(ctx, base);
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// stb r24,36(r25)
	REX_STORE_U8(ctx.r25.u32 + 36, ctx.r24.u8);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stb r24,35(r25)
	REX_STORE_U8(ctx.r25.u32 + 35, ctx.r24.u8);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r10,-21584(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + -21584);
	// lhz r11,12000(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12000);
	// rlwinm r7,r10,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r8,r11,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r11,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r4,r11,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r11,r7,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// rlwinm r3,r10,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwinm r5,r10,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r6,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r28,r8,30,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3C;
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r29,r8,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// lwzx r11,r4,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r6,r3,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r3,r7,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3C;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r8,r29,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwzx r7,r28,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r11,4652(r30)
	REX_STORE_U32(ctx.r30.u32 + 4652, ctx.r11.u32);
	// stw r10,4648(r30)
	REX_STORE_U32(ctx.r30.u32 + 4648, ctx.r10.u32);
	// stw r8,4644(r30)
	REX_STORE_U32(ctx.r30.u32 + 4644, ctx.r8.u32);
	// stw r7,4640(r30)
	REX_STORE_U32(ctx.r30.u32 + 4640, ctx.r7.u32);
	// stw r6,4524(r30)
	REX_STORE_U32(ctx.r30.u32 + 4524, ctx.r6.u32);
	// stw r5,4520(r30)
	REX_STORE_U32(ctx.r30.u32 + 4520, ctx.r5.u32);
	// stw r3,4512(r30)
	REX_STORE_U32(ctx.r30.u32 + 4512, ctx.r3.u32);
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// stw r4,4516(r30)
	REX_STORE_U32(ctx.r30.u32 + 4516, ctx.r4.u32);
loc_89945ECC:
	// mulli r28,r27,92
	ctx.r28.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(92));
	// lwzx r29,r28,r23
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r23.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x89946160
	if (ctx.cr6.eq) goto loc_89946160;
	// rlwinm r11,r29,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3;
	// subfic r10,r27,29
	ctx.xer.ca = ctx.r27.u32 <= 29;
	ctx.r10.u64 = static_cast<uint64_t>(29) - ctx.r27.u64;
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// rlwinm r6,r9,30,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3C;
	// rlwinm r8,r8,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x2;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// rlwinm r5,r9,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// add r8,r8,r17
	ctx.r8.u64 = ctx.r8.u64 + ctx.r17.u64;
	// rlwinm r7,r11,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r26,r6,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// stbx r24,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r24.u8);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r22,r5,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// rlwinm r4,r6,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r26,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r22,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r22.u32);
	// add r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 + ctx.r3.u64;
	// beq cr6,0x89945f68
	if (ctx.cr6.eq) goto loc_89945F68;
	// lis r4,16319
	ctx.r4.s64 = 1069481984;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// ori r3,r4,49152
	ctx.r3.u64 = ctx.r4.u64 | 49152;
loc_89945F4C:
	// lbzu r4,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// subf r26,r3,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r3.u64;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// stwu r26,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89945f4c
	if (!ctx.cr6.eq) goto loc_89945F4C;
	// b 0x89945f70
	goto loc_89945F70;
loc_89945F68:
	// lis r10,16319
	ctx.r10.s64 = 1069481984;
	// ori r3,r10,49152
	ctx.r3.u64 = ctx.r10.u64 | 49152;
loc_89945F70:
	// rlwinm r10,r29,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xF;
	// stbx r24,r5,r25
	REX_STORE_U8(ctx.r5.u32 + ctx.r25.u32, ctx.r24.u8);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r9,r9,1,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x2;
	// addi r8,r30,36
	ctx.r8.s64 = ctx.r30.s64 + 36;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + ctx.r17.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89945fc0
	if (ctx.cr6.eq) goto loc_89945FC0;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_89945FA8:
	// lbzu r6,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r5,r3,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r3.u64;
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// stwu r5,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x89945fa8
	if (!ctx.cr6.eq) goto loc_89945FA8;
loc_89945FC0:
	// addi r9,r23,28
	ctx.r9.s64 = ctx.r23.s64 + 28;
	// stbx r24,r4,r25
	REX_STORE_U8(ctx.r4.u32 + ctx.r25.u32, ctx.r24.u8);
	// addi r8,r23,12
	ctx.r8.s64 = ctx.r23.s64 + 12;
	// stbx r24,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r24.u8);
	// addi r6,r23,16
	ctx.r6.s64 = ctx.r23.s64 + 16;
	// stbx r24,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r24.u8);
	// addi r5,r23,76
	ctx.r5.s64 = ctx.r23.s64 + 76;
	// lwz r26,112(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stbx r24,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r24.u8);
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// lhzx r4,r28,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r9.u32);
	// addi r9,r30,80
	ctx.r9.s64 = ctx.r30.s64 + 80;
	// lhzx r3,r28,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r8.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhzx r6,r28,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r6.u32);
	// rlwinm r29,r4,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// lbzx r5,r28,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// rlwinm r22,r3,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r28,r6,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// stbx r24,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r24.u8);
	// rlwinm r21,r22,28,20,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFF;
	// std r24,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r24.u64);
	// rlwinm r20,r29,28,20,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFF;
	// std r26,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r26.u64);
	// rlwinm r19,r28,28,20,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFF;
	// sth r21,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r21.u16);
	// rlwinm r17,r20,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// lwz r21,132(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// sth r19,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r19.u16);
	// rlwinm r20,r20,30,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 30) & 0x3C;
	// stw r17,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// stw r20,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r11,r22,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// std r25,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r25.u64);
	// std r21,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r21.u64);
	// rlwinm r21,r5,30,2,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r5,r5,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lwz r15,108(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r8,r30,100
	ctx.r8.s64 = ctx.r30.s64 + 100;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r29,r29,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// rlwinm r3,r3,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwz r16,116(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r28,r28,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// lwz r14,120(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r19,124(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r18,128(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r17,136(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lhz r20,82(r1)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lwzx r29,r29,r31
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r28,r28,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lhz r22,88(r1)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// std r27,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// lhz r24,96(r1)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// rlwinm r27,r22,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// std r23,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r23.u64);
	// rlwinm r22,r22,30,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3C;
	// lwz r26,140(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r23,r24,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// lwz r25,144(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r24,r24,30,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3C;
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r6,r30,108
	ctx.r6.s64 = ctx.r30.s64 + 108;
	// lwzx r27,r27,r31
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwzx r6,r5,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r26,r26,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// lis r5,32639
	ctx.r5.s64 = 2139029504;
	// lwzx r25,r25,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// lwzx r22,r22,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// lwzx r21,r21,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r26,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r26.u32);
	// stw r25,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r25.u32);
	// stw r29,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r29.u32);
	// stw r3,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r22,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// ori r22,r5,32768
	ctx.r22.u64 = ctx.r5.u64 | 32768;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r27,-8(r9)
	REX_STORE_U32(ctx.r9.u32 + -8, ctx.r27.u32);
	// stw r11,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r11.u32);
	// stw r4,-12(r9)
	REX_STORE_U32(ctx.r9.u32 + -12, ctx.r4.u32);
	// stw r23,-8(r8)
	REX_STORE_U32(ctx.r8.u32 + -8, ctx.r23.u32);
	// stw r24,-12(r8)
	REX_STORE_U32(ctx.r8.u32 + -12, ctx.r24.u32);
	// stw r3,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// stw r28,-4(r8)
	REX_STORE_U32(ctx.r8.u32 + -4, ctx.r28.u32);
	// stw r21,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r21.u32);
	// ld r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// ld r26,152(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// ld r25,160(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// ld r24,168(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// ld r23,96(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// ld r21,176(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
loc_89946160:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x89945ecc
	if (ctx.cr6.lt) goto loc_89945ECC;
	// lis r11,16448
	ctx.r11.s64 = 1077936128;
	// ori r27,r11,49152
	ctx.r27.u64 = ctx.r11.u64 | 49152;
	// b 0x899462f4
	goto loc_899462F4;
loc_89946180:
	// rlwinm r10,r29,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89946264
	if (ctx.cr6.eq) goto loc_89946264;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// bne cr6,0x899461d0
	if (!ctx.cr6.eq) goto loc_899461D0;
	// lbz r11,9654(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 9654);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r8,r29,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// stb r29,9654(r9)
	REX_STORE_U8(ctx.r9.u32 + 9654, ctx.r29.u8);
	// lwzx r11,r8,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r16.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899461c4
	if (ctx.cr6.eq) goto loc_899461C4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899461d4
	if (!ctx.cr6.eq) goto loc_899461D4;
loc_899461C4:
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r29,9654(r9)
	REX_STORE_U8(ctx.r9.u32 + 9654, ctx.r29.u8);
	// b 0x899461d4
	goto loc_899461D4;
loc_899461D0:
	// lbz r29,9654(r9)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r9.u32 + 9654);
loc_899461D4:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x89946228
	if (!ctx.cr6.eq) goto loc_89946228;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8994621c
	if (!ctx.cr6.eq) goto loc_8994621C;
loc_899461E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r16,4
	ctx.r10.s64 = ctx.r16.s64 + 4;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r8,r29,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// stb r29,9654(r9)
	REX_STORE_U8(ctx.r9.u32 + 9654, ctx.r29.u8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89946228
	if (ctx.cr6.eq) goto loc_89946228;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x899461e8
	if (!ctx.cr6.eq) goto loc_899461E8;
	// b 0x89946228
	goto loc_89946228;
loc_8994621C:
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// stb r29,9654(r9)
	REX_STORE_U8(ctx.r9.u32 + 9654, ctx.r29.u8);
loc_89946228:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// stb r29,9527(r11)
	REX_STORE_U8(ctx.r11.u32 + 9527, ctx.r29.u8);
	// bl 0x89915ec0
	ctx.lr = 0x89946234;
	sub_89915EC0(ctx, base);
	// bl 0x89917740
	ctx.lr = 0x89946238;
	sub_89917740(ctx, base);
	// bl 0x89918ad0
	ctx.lr = 0x8994623C;
	sub_89918AD0(ctx, base);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,128
	ctx.r9.s64 = 128;
	// stb r11,9539(r8)
	REX_STORE_U8(ctx.r8.u32 + 9539, ctx.r11.u8);
	// lis r11,-30276
	ctx.r11.s64 = -1984167936;
	// stb r10,32019(r11)
	REX_STORE_U8(ctx.r11.u32 + 32019, ctx.r10.u8);
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// stb r9,6054(r11)
	REX_STORE_U8(ctx.r11.u32 + 6054, ctx.r9.u8);
	// b 0x8994626c
	goto loc_8994626C;
loc_89946264:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r29,9654(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 9654);
loc_8994626C:
	// bl 0x8991dbc0
	ctx.lr = 0x89946270;
	sub_8991DBC0(ctx, base);
	// bl 0x89917da8
	ctx.lr = 0x89946274;
	sub_89917DA8(ctx, base);
	// lbz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r30,4740
	ctx.r10.s64 = ctx.r30.s64 + 4740;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899462a8
	if (ctx.cr6.eq) goto loc_899462A8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_89946290:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89946290
	if (!ctx.cr6.eq) goto loc_89946290;
loc_899462A8:
	// rlwinm r10,r29,30,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3C;
	// stb r24,37(r25)
	REX_STORE_U8(ctx.r25.u32 + 37, ctx.r24.u8);
	// rlwinm r9,r29,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r11,4768(r30)
	REX_STORE_U32(ctx.r30.u32 + 4768, ctx.r11.u32);
	// stw r10,4772(r30)
	REX_STORE_U32(ctx.r30.u32 + 4772, ctx.r10.u32);
	// bl 0x89917aa0
	ctx.lr = 0x899462CC;
	sub_89917AA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_899462D4:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x89917e48
	ctx.lr = 0x899462DC;
	sub_89917E48(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x899462d4
	if (ctx.cr6.lt) goto loc_899462D4;
	// bl 0x8992a040
	ctx.lr = 0x899462F4;
	sub_8992A040(ctx, base);
loc_899462F4:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89930720
	ctx.lr = 0x89946300;
	sub_89930720(ctx, base);
	// bl 0x899319c8
	ctx.lr = 0x89946304;
	sub_899319C8(ctx, base);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lwz r10,26932(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 26932);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,26932(r9)
	REX_STORE_U32(ctx.r9.u32 + 26932, ctx.r10.u32);
	// lbz r11,3632(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3632);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8994597c
	if (ctx.cr6.eq) goto loc_8994597C;
	// bl 0x89943148
	ctx.lr = 0x8994632C;
	sub_89943148(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lbz r11,9654(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9654);
	// stb r11,21(r10)
	REX_STORE_U8(ctx.r10.u32 + 21, ctx.r11.u8);
	// bl 0x89949960
	ctx.lr = 0x89946340;
	sub_89949960(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899523F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x89952400;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r30,3524(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 3524);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89952458
	if (ctx.cr6.eq) goto loc_89952458;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x89952458
	if (!ctx.cr6.lt) goto loc_89952458;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x89952438
	if (ctx.cr6.eq) goto loc_89952438;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x89952458
	if (!ctx.cr6.eq) goto loc_89952458;
loc_89952438:
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lwz r10,3516(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 3516);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89952464
	if (ctx.cr6.eq) goto loc_89952464;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x89952458
	if (!ctx.cr6.eq) goto loc_89952458;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_89952458:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_89952464:
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x89952478
	if (!ctx.cr6.eq) goto loc_89952478;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lbz r28,9527(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 9527);
loc_89952478:
	// addi r31,r30,68
	ctx.r31.s64 = ctx.r30.s64 + 68;
	// lis r5,65
	ctx.r5.s64 = 4259840;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,64392
	ctx.r5.u64 = ctx.r5.u64 | 64392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899dcca0
	ctx.lr = 0x89952490;
	sub_899DCCA0(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// beq cr6,0x899524dc
	if (ctx.cr6.eq) goto loc_899524DC;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stw r23,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// lis r9,8208
	ctx.r9.s64 = 537919488;
	// stw r28,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// ori r8,r9,2310
	ctx.r8.u64 = ctx.r9.u64 | 2310;
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r10,26936(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 26936);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r29,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// b 0x899525bc
	goto loc_899525BC;
loc_899524DC:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x89952500
	if (ctx.cr6.eq) goto loc_89952500;
	// blt cr6,0x89952500
	if (ctx.cr6.lt) goto loc_89952500;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_89952500:
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89952018
	ctx.lr = 0x89952510;
	sub_89952018(ctx, base);
	// addi r25,r31,44
	ctx.r25.s64 = ctx.r31.s64 + 44;
	// li r5,4100
	ctx.r5.s64 = 4100;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89952018
	ctx.lr = 0x89952524;
	sub_89952018(ctx, base);
	// lis r11,21
	ctx.r11.s64 = 1376256;
	// addi r28,r31,4144
	ctx.r28.s64 = ctx.r31.s64 + 4144;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r27,3
	ctx.r27.s64 = 3;
	// ori r26,r11,63748
	ctx.r26.u64 = ctx.r11.u64 | 63748;
loc_89952538:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89952018
	ctx.lr = 0x89952548;
	sub_89952018(ctx, base);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x89952018
	ctx.lr = 0x89952558;
	sub_89952018(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89952018
	ctx.lr = 0x89952568;
	sub_89952018(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// bne 0x89952538
	if (!ctx.cr0.eq) goto loc_89952538;
	// addis r28,r31,66
	ctx.r28.s64 = ctx.r31.s64 + 4325376;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r28,r28,-1220
	ctx.r28.s64 = ctx.r28.s64 + -1220;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x89952018
	ctx.lr = 0x8995258C;
	sub_89952018(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addis r4,r31,66
	ctx.r4.s64 = ctx.r31.s64 + 4325376;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r4,-1216
	ctx.r4.s64 = ctx.r4.s64 + -1216;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x89952018
	ctx.lr = 0x899525AC;
	sub_89952018(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stw r29,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,26936(r10)
	REX_STORE_U32(ctx.r10.u32 + 26936, ctx.r11.u32);
loc_899525BC:
	// addis r11,r30,66
	ctx.r11.s64 = ctx.r30.s64 + 4325376;
	// stw r23,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r23.u32);
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r11,r11,-1076
	ctx.r11.s64 = ctx.r11.s64 + -1076;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r30,4216
	ctx.r9.s64 = ctx.r30.s64 + 4216;
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r29,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// beq cr6,0x89952600
	if (ctx.cr6.eq) goto loc_89952600;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// b 0x89952614
	goto loc_89952614;
loc_89952600:
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r5,r6,8
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFFFF;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lbz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_89952614:
	// addis r9,r30,22
	ctx.r9.s64 = ctx.r30.s64 + 1441792;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r9,r9,2428
	ctx.r9.s64 = ctx.r9.s64 + 2428;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r29,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// stw r29,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// beq cr6,0x89952644
	if (ctx.cr6.eq) goto loc_89952644;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// b 0x89952658
	goto loc_89952658;
loc_89952644:
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r5,r6,8
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFFFF;
	// stw r5,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// lbz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stw r4,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
loc_89952658:
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// addis r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 2883584;
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// addi r10,r10,640
	ctx.r10.s64 = ctx.r10.s64 + 640;
	// stw r29,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r29.u32);
	// stw r29,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r29.u32);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// beq cr6,0x89952688
	if (ctx.cr6.eq) goto loc_89952688;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// b 0x8995269c
	goto loc_8995269C;
loc_89952688:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r9,8
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFFFF;
	// stw r8,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stw r7,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
loc_8995269C:
	// addis r10,r30,66
	ctx.r10.s64 = ctx.r30.s64 + 4325376;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,-992
	ctx.r10.s64 = ctx.r10.s64 + -992;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89953B98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89953BA0;
	__savegprlr_27(ctx, base);
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
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x89953be0
	if (ctx.cr6.lt) goto loc_89953BE0;
	// bne cr6,0x89953e80
	if (!ctx.cr6.eq) goto loc_89953E80;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x89953e80
	if (!ctx.cr6.eq) goto loc_89953E80;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89953BE0:
	// lhz r3,126(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x8993c7f0
	ctx.lr = 0x89953BE8;
	sub_8993C7F0(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// sth r3,126(r31)
	REX_STORE_U16(ctx.r31.u32 + 126, ctx.r3.u16);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwz r30,116(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r9,20416(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 20416);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x89953cd8
	if (!ctx.cr6.lt) goto loc_89953CD8;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r10,12800
	ctx.r11.s64 = ctx.r10.s64 + 12800;
	// addi r8,r11,52
	ctx.r8.s64 = ctx.r11.s64 + 52;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// lwzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// bl 0x89932c20
	ctx.lr = 0x89953C30;
	sub_89932C20(ctx, base);
	// lhz r6,124(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// subf r11,r4,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r4.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = ctx.r11.s64 + -256;
	// clrlwi r9,r3,23
	ctx.r9.u64 = ctx.r3.u32 & 0x1FF;
loc_89953C4C:
	// addic. r11,r9,-256
	ctx.xer.ca = ctx.r9.u32 > 255;
	ctx.r11.s64 = ctx.r9.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x89953c58
	if (!ctx.cr0.lt) goto loc_89953C58;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89953C58:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x89953c88
	if (!ctx.cr6.gt) goto loc_89953C88;
	// lhz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// ble cr6,0x89953c80
	if (!ctx.cr6.gt) goto loc_89953C80;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r6.u16);
	// b 0x89953c88
	goto loc_89953C88;
loc_89953C80:
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// sth r7,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r7.u16);
loc_89953C88:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// blt cr6,0x89953c4c
	if (ctx.cr6.lt) goto loc_89953C4C;
	// lhz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r8,r11,-256
	ctx.r8.s64 = ctx.r11.s64 + -256;
	// clrlwi r7,r8,23
	ctx.r7.u64 = ctx.r8.u32 & 0x1FF;
	// addic. r11,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r11.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x89953cbc
	if (!ctx.cr0.lt) goto loc_89953CBC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89953CBC:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x89953cd8
	if (ctx.cr6.lt) goto loc_89953CD8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x89953ce8
	if (!ctx.cr6.gt) goto loc_89953CE8;
	// addi r30,r30,-8192
	ctx.r30.s64 = ctx.r30.s64 + -8192;
	// b 0x89953ce8
	goto loc_89953CE8;
loc_89953CD8:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x89953ce8
	if (!ctx.cr6.lt) goto loc_89953CE8;
	// addi r30,r30,8192
	ctx.r30.s64 = ctx.r30.s64 + 8192;
loc_89953CE8:
	// lhz r8,124(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// stw r30,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// srawi r10,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 4;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,9016
	ctx.r11.s64 = ctx.r11.s64 + 9016;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// rlwinm r6,r8,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// rlwinm r5,r9,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r5,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// srawi r5,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 8;
	// stw r5,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lhzx r4,r6,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// addis r10,r4,-160
	ctx.r10.s64 = ctx.r4.s64 + -10485760;
	// stw r4,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x89953d54
	if (!ctx.cr0.lt) goto loc_89953D54;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89953D54:
	// lis r9,176
	ctx.r9.s64 = 11534336;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x89953d64
	if (!ctx.cr6.gt) goto loc_89953D64;
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_89953D64:
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,-21584(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + -21584);
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// subf r6,r10,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r10.u64;
	// addis r10,r6,-120
	ctx.r10.s64 = ctx.r6.s64 + -7864320;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x89953d90
	if (!ctx.cr0.lt) goto loc_89953D90;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89953D90:
	// lis r9,136
	ctx.r9.s64 = 8912896;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x89953da0
	if (!ctx.cr6.gt) goto loc_89953DA0;
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_89953DA0:
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,16838
	ctx.r6.s64 = 1103495168;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// ori r8,r6,20077
	ctx.r8.u64 = ctx.r6.u64 | 20077;
	// lwz r9,-9212(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + -9212);
	// addi r28,r10,4
	ctx.r28.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,256
	ctx.r6.s64 = ctx.r10.s64 + 256;
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// srawi r8,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 3;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r10,-9212(r7)
	REX_STORE_U32(ctx.r7.u32 + -9212, ctx.r10.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// clrlwi r7,r3,30
	ctx.r7.u64 = ctx.r3.u32 & 0x3;
	// addi r3,r9,-16
	ctx.r3.s64 = ctx.r9.s64 + -16;
	// clrlwi r9,r8,26
	ctx.r9.u64 = ctx.r8.u32 & 0x3F;
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// rlwinm r7,r10,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r10,r8,128
	ctx.r10.s64 = ctx.r8.s64 + 128;
	// rlwinm r3,r8,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r8,r10,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r6,r6,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// lhzx r29,r7,r11
	ctx.r29.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// lhzx r28,r3,r11
	ctx.r28.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r27,r8,r11
	ctx.r27.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// addi r7,r7,24680
	ctx.r7.s64 = ctx.r7.s64 + 24680;
	// lhzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// srawi r10,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r9,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// extsh r7,r28
	ctx.r7.s64 = ctx.r28.s16;
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// extsh r6,r27
	ctx.r6.s64 = ctx.r27.s16;
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// rotlwi r11,r29,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 16);
	// srawi r6,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 8;
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x899d7970
	ctx.lr = 0x89953E80;
	sub_899D7970(ctx, base);
loc_89953E80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89955778) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89955780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8(r4)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r30,116(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 116);
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// blt cr6,0x8995582c
	if (ctx.cr6.lt) goto loc_8995582C;
	// bne cr6,0x899559f4
	if (!ctx.cr6.eq) goto loc_899559F4;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// blt cr6,0x899557fc
	if (ctx.cr6.lt) goto loc_899557FC;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bgt cr6,0x899557fc
	if (ctx.cr6.gt) goto loc_899557FC;
	// lbz r8,38(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 38);
	// lbz r9,128(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 128);
	// mulli r7,r8,224
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(224));
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// stb r6,38(r4)
	REX_STORE_U8(ctx.r4.u32 + 38, ctx.r6.u8);
	// stb r3,128(r4)
	REX_STORE_U8(ctx.r4.u32 + 128, ctx.r3.u8);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x899559f4
	if (!ctx.cr6.eq) goto loc_899559F4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// stb r29,128(r4)
	REX_STORE_U8(ctx.r4.u32 + 128, ctx.r29.u8);
	// bne cr6,0x899559f4
	if (!ctx.cr6.eq) goto loc_899559F4;
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899557FC:
	// lbz r9,128(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,128(r11)
	REX_STORE_U8(ctx.r11.u32 + 128, ctx.r8.u8);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x899559f4
	if (!ctx.cr6.eq) goto loc_899559F4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stb r9,128(r11)
	REX_STORE_U8(ctx.r11.u32 + 128, ctx.r9.u8);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_8995582C:
	// lhz r9,124(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 124);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// srawi r7,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 4;
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r10,r10,9016
	ctx.r10.s64 = ctx.r10.s64 + 9016;
	// addi r5,r8,128
	ctx.r5.s64 = ctx.r8.s64 + 128;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r9,r4,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// mullw r4,r5,r7
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// addis r9,r4,-160
	ctx.r9.s64 = ctx.r4.s64 + -10485760;
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x89955878
	if (!ctx.cr0.lt) goto loc_89955878;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_89955878:
	// lis r6,176
	ctx.r6.s64 = 11534336;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8995588c
	if (!ctx.cr6.gt) goto loc_8995588C;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8995588C:
	// rlwinm r9,r8,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// lhzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// lwz r6,-21584(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + -21584);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mullw r7,r9,r7
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// srawi r9,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 8;
	// add r31,r9,r5
	ctx.r31.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// stw r31,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// addis r9,r6,-120
	ctx.r9.s64 = ctx.r6.s64 + -7864320;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x899558cc
	if (!ctx.cr0.lt) goto loc_899558CC;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899558CC:
	// lis r7,136
	ctx.r7.s64 = 8912896;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x899558dc
	if (!ctx.cr6.gt) goto loc_899558DC;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_899558DC:
	// lhz r9,126(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 126);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899559dc
	if (ctx.cr6.eq) goto loc_899559DC;
	// lbz r9,128(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// addi r7,r30,8192
	ctx.r7.s64 = ctx.r30.s64 + 8192;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stw r7,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r7.u32);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,128(r11)
	REX_STORE_U8(ctx.r11.u32 + 128, ctx.r5.u8);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x89955918
	if (!ctx.cr6.eq) goto loc_89955918;
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// stb r29,128(r11)
	REX_STORE_U8(ctx.r11.u32 + 128, ctx.r29.u8);
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_89955918:
	// addi r9,r8,256
	ctx.r9.s64 = ctx.r8.s64 + 256;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lis r5,16838
	ctx.r5.s64 = 1103495168;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwinm r6,r6,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r29,r7,128
	ctx.r29.s64 = ctx.r7.s64 + 128;
	// lwz r9,-9212(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// ori r5,r5,20077
	ctx.r5.u64 = ctx.r5.u64 | 20077;
	// rlwinm r29,r29,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// lhzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// lhzx r5,r29,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r10.u32);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// stw r9,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// srawi r6,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 16;
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// srawi r9,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 5;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r6,r6,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r7,r7,25856
	ctx.r7.s64 = ctx.r7.s64 + 25856;
	// rlwinm r11,r11,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r8,r6,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lwzx r8,r30,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// mullw r11,r6,r9
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// srawi r6,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 8;
	// bl 0x899d7970
	ctx.lr = 0x899559D4;
	sub_899D7970(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899559DC:
	// addic. r10,r30,-8192
	ctx.xer.ca = ctx.r30.u32 > 8191;
	ctx.r10.s64 = ctx.r30.s64 + -8192;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// bne 0x899559f4
	if (!ctx.cr0.eq) goto loc_899559F4;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r29,124(r11)
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r29.u16);
	// sth r10,126(r11)
	REX_STORE_U16(ctx.r11.u32 + 126, ctx.r10.u16);
loc_899559F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89957010) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9ec
	ctx.lr = 0x89957018;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r26,r11,25128
	ctx.r26.s64 = ctx.r11.s64 + 25128;
	// mulli r31,r10,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r28,r26,636
	ctx.r28.s64 = ctx.r26.s64 + 636;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89957174
	if (ctx.cr6.lt) goto loc_89957174;
	// bne cr6,0x8995726c
	if (!ctx.cr6.eq) goto loc_8995726C;
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r26,637
	ctx.r11.s64 = ctx.r26.s64 + 637;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x899570b8
	if (ctx.cr6.eq) goto loc_899570B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8995726c
	if (ctx.cr6.gt) goto loc_8995726C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89957080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89957080;
	// bdzf 4*cr6+eq,0x8995709c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995709C;
	// bne cr6,0x8995709c
	if (!ctx.cr6.eq) goto loc_8995709C;
loc_89957080:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899549a0
	ctx.lr = 0x89957098;
	sub_899549A0(ctx, base);
	// b 0x8995726c
	goto loc_8995726C;
loc_8995709C:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899549a0
	ctx.lr = 0x899570B4;
	sub_899549A0(ctx, base);
	// b 0x8995726c
	goto loc_8995726C;
loc_899570B8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8995726c
	if (ctx.cr6.gt) goto loc_8995726C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899570f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899570F0;
	// bdzf 4*cr6+eq,0x8995710c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995710C;
	// bne cr6,0x89957140
	if (!ctx.cr6.eq) goto loc_89957140;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899549a0
	ctx.lr = 0x899570EC;
	sub_899549A0(ctx, base);
	// b 0x8995726c
	goto loc_8995726C;
loc_899570F0:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899549a0
	ctx.lr = 0x89957108;
	sub_899549A0(ctx, base);
	// b 0x8995726c
	goto loc_8995726C;
loc_8995710C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-8
	ctx.r6.s64 = -8;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899549a0
	ctx.lr = 0x89957124;
	sub_899549A0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899549a0
	ctx.lr = 0x8995713C;
	sub_899549A0(ctx, base);
	// b 0x8995726c
	goto loc_8995726C;
loc_89957140:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,-12
	ctx.r6.s64 = -12;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899549a0
	ctx.lr = 0x89957158;
	sub_899549A0(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899549a0
	ctx.lr = 0x89957170;
	sub_899549A0(ctx, base);
	// b 0x8995726c
	goto loc_8995726C;
loc_89957174:
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r26,637
	ctx.r11.s64 = ctx.r26.s64 + 637;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x899571d4
	if (ctx.cr6.eq) goto loc_899571D4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8995726c
	if (ctx.cr6.gt) goto loc_8995726C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899571cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899571CC;
	// bdzf 4*cr6+eq,0x899571b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899571B0;
	// bne cr6,0x899571cc
	if (!ctx.cr6.eq) goto loc_899571CC;
loc_899571B0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899549a0
	ctx.lr = 0x899571C8;
	sub_899549A0(ctx, base);
	// b 0x8995726c
	goto loc_8995726C;
loc_899571CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x89957260
	goto loc_89957260;
loc_899571D4:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8995726c
	if (ctx.cr6.gt) goto loc_8995726C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8995720c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8995720C;
	// bdzf 4*cr6+eq,0x89957218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89957218;
	// bne cr6,0x8995724c
	if (!ctx.cr6.eq) goto loc_8995724C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899549a0
	ctx.lr = 0x89957208;
	sub_899549A0(ctx, base);
	// b 0x8995726c
	goto loc_8995726C;
loc_8995720C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x89957264
	goto loc_89957264;
loc_89957218:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-8
	ctx.r6.s64 = -8;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899549a0
	ctx.lr = 0x89957230;
	sub_899549A0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899549a0
	ctx.lr = 0x89957248;
	sub_899549A0(ctx, base);
	// b 0x8995726c
	goto loc_8995726C;
loc_8995724C:
	// li r5,-16
	ctx.r5.s64 = -16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x89954238
	ctx.lr = 0x8995725C;
	sub_89954238(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
loc_89957260:
	// li r4,1
	ctx.r4.s64 = 1;
loc_89957264:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x89954238
	ctx.lr = 0x8995726C;
	sub_89954238(ctx, base);
loc_8995726C:
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
	// lwzx r30,r31,r29
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899572ac
	if (!ctx.cr6.eq) goto loc_899572AC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x899337b0
	ctx.lr = 0x8995728C;
	sub_899337B0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899572a4
	if (!ctx.cr6.eq) goto loc_899572A4;
loc_89957298:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
loc_899572A4:
	// ori r11,r30,2
	ctx.r11.u64 = ctx.r30.u64 | 2;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
loc_899572AC:
	// addi r10,r26,8
	ctx.r10.s64 = ctx.r26.s64 + 8;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r9,r26,637
	ctx.r9.s64 = ctx.r26.s64 + 637;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// addi r8,r8,27920
	ctx.r8.s64 = ctx.r8.s64 + 27920;
	// lwzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r7,28240
	ctx.r5.s64 = ctx.r7.s64 + 28240;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r9,r6,1,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x6;
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r27,r4,r5
	ctx.r27.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89957328
	if (ctx.cr6.eq) goto loc_89957328;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x89932798
	ctx.lr = 0x8995731C;
	sub_89932798(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89957298
	if (ctx.cr6.eq) goto loc_89957298;
loc_89957328:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r11,r11,3360
	ctx.r11.s64 = ctx.r11.s64 + 3360;
	// ble cr6,0x8995744c
	if (!ctx.cr6.gt) goto loc_8995744C;
	// lis r20,-30253
	ctx.r20.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// ori r29,r9,20077
	ctx.r29.u64 = ctx.r9.u64 | 20077;
	// lwz r9,-9212(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + -9212);
	// addi r21,r26,28
	ctx.r21.s64 = ctx.r26.s64 + 28;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r22,-16384
	ctx.r22.s64 = -1073741824;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r24,512
	ctx.r24.s64 = 512;
	// li r30,192
	ctx.r30.s64 = 192;
	// ori r3,r8,32896
	ctx.r3.u64 = ctx.r8.u64 | 32896;
	// addi r6,r11,9016
	ctx.r6.s64 = ctx.r11.s64 + 9016;
loc_89957378:
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// lwzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addi r5,r26,24
	ctx.r5.s64 = ctx.r26.s64 + 24;
	// srawi r7,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 16;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// rlwinm r8,r7,19,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x3;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r25
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r25.s32, ctx.xer);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lhz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// addi r18,r8,4
	ctx.r18.s64 = ctx.r8.s64 + 4;
	// sth r4,124(r11)
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r4.u16);
	// stw r27,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r27.u32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// srawi r18,r18,3
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 3;
	// rlwinm r17,r8,1,22,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// clrlwi r18,r18,26
	ctx.r18.u64 = ctx.r18.u32 & 0x3F;
	// srawi r8,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 4;
	// stw r18,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r18.u32);
	// rlwinm r18,r4,1,22,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lwzx r4,r31,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lhz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwzx r4,r31,r21
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// lhzu r5,6(r10)
	ea = 6 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r5,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// lhzx r4,r17,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r17.u32 + ctx.r6.u32);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// mullw r4,r5,r8
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// srawi r5,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 8;
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lhzx r4,r18,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r6.u32);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// mullw r4,r5,r8
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// sth r24,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r24.u16);
	// stb r30,38(r11)
	REX_STORE_U8(ctx.r11.u32 + 38, ctx.r30.u8);
	// stb r30,39(r11)
	REX_STORE_U8(ctx.r11.u32 + 39, ctx.r30.u8);
	// stw r3,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// srawi r8,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 8;
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// blt cr6,0x89957378
	if (ctx.cr6.lt) goto loc_89957378;
	// stw r9,-9212(r20)
	REX_STORE_U32(ctx.r20.u32 + -9212, ctx.r9.u32);
loc_8995744C:
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r10,3504(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 3504);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89957498
	if (ctx.cr6.eq) goto loc_89957498;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r9,-9516(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -9516);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// bgt cr6,0x8995747c
	if (ctx.cr6.gt) goto loc_8995747C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8995747C:
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
	// lwz r9,8420(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8420);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x899574b0
	if (!ctx.cr6.lt) goto loc_899574B0;
	// stw r9,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r9.u32);
	// b 0x899574b0
	goto loc_899574B0;
loc_89957498:
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lwz r10,-9516(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -9516);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x899574b0
	if (!ctx.cr6.gt) goto loc_899574B0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,-9516(r9)
	REX_STORE_U32(ctx.r9.u32 + -9516, ctx.r11.u32);
loc_899574B0:
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x89936218
	ctx.lr = 0x899574BC;
	sub_89936218(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba3c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995A838) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8995A840;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r8,-30233
	ctx.r8.s64 = -1981349888;
	// addi r10,r11,29432
	ctx.r10.s64 = ctx.r11.s64 + 29432;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r8,23144
	ctx.r29.s64 = ctx.r8.s64 + 23144;
	// lbz r11,29432(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 29432);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8995a8dc
	if (ctx.cr6.eq) goto loc_8995A8DC;
	// addi r31,r10,-7
	ctx.r31.s64 = ctx.r10.s64 + -7;
loc_8995A86C:
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lbz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 8);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lhz r27,13(r31)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + 13);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r6,15(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 15);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// lbz r7,11(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 11);
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// addi r11,r29,-280
	ctx.r11.s64 = ctx.r29.s64 + -280;
	// lbz r9,9(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 9);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzu r10,10(r31)
	ea = 10 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// sth r3,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x89934fb8
	ctx.lr = 0x8995A8C0;
	sub_89934FB8(ctx, base);
	// lbz r11,7(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// add r9,r30,r28
	ctx.r9.u64 = ctx.r30.u64 + ctx.r28.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8995a86c
	if (!ctx.cr6.eq) goto loc_8995A86C;
loc_8995A8DC:
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// lis r10,-30234
	ctx.r10.s64 = -1981415424;
	// addi r30,r11,-21192
	ctx.r30.s64 = ctx.r11.s64 + -21192;
	// addi r5,r29,-280
	ctx.r5.s64 = ctx.r29.s64 + -280;
	// addi r6,r30,-368
	ctx.r6.s64 = ctx.r30.s64 + -368;
	// addi r4,r10,-14900
	ctx.r4.s64 = ctx.r10.s64 + -14900;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89935688
	ctx.lr = 0x8995A900;
	sub_89935688(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8995A908:
	// lwzx r6,r11,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r29,-280
	ctx.r9.s64 = ctx.r29.s64 + -280;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89935688
	ctx.lr = 0x8995A940;
	sub_89935688(ctx, base);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,24
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 24, ctx.xer);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8995a908
	if (ctx.cr6.lt) goto loc_8995A908;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995B190) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x8995B198;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30233
	ctx.r11.s64 = -1981349888;
	// li r30,8
	ctx.r30.s64 = 8;
	// addi r31,r11,26248
	ctx.r31.s64 = ctx.r11.s64 + 26248;
	// li r10,48
	ctx.r10.s64 = 48;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r11,r31,1504
	ctx.r11.s64 = ctx.r31.s64 + 1504;
	// li r9,168
	ctx.r9.s64 = 168;
	// li r8,-8
	ctx.r8.s64 = -8;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
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
	ctx.lr = 0x8995B1D8;
	sub_89934FB8(ctx, base);
	// addi r11,r31,1504
	ctx.r11.s64 = ctx.r31.s64 + 1504;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r8,r11,80
	ctx.r8.s64 = ctx.r11.s64 + 80;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
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
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x8995B210;
	sub_89934FB8(ctx, base);
	// addi r11,r31,1504
	ctx.r11.s64 = ctx.r31.s64 + 1504;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r7,r11,400
	ctx.r7.s64 = ctx.r11.s64 + 400;
	// li r9,128
	ctx.r9.s64 = 128;
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x8995B244;
	sub_89934FB8(ctx, base);
	// addi r11,r31,1504
	ctx.r11.s64 = ctx.r31.s64 + 1504;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r11,720
	ctx.r5.s64 = ctx.r11.s64 + 720;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x8995B27C;
	sub_89934FB8(ctx, base);
	// addi r11,r31,1504
	ctx.r11.s64 = ctx.r31.s64 + 1504;
	// li r4,-31485
	ctx.r4.s64 = -31485;
	// addi r3,r11,1040
	ctx.r3.s64 = ctx.r11.s64 + 1040;
	// sth r4,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r4.u16);
	// li r10,80
	ctx.r10.s64 = 80;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r9,8
	ctx.r9.s64 = 8;
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x8995B2B4;
	sub_89934FB8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8995B2BC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r31,2784
	ctx.r5.s64 = ctx.r31.s64 + 2784;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mulli r6,r30,84
	ctx.r6.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(84));
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r31,1504
	ctx.r8.s64 = ctx.r31.s64 + 1504;
	// addi r10,r31,4648
	ctx.r10.s64 = ctx.r31.s64 + 4648;
	// mulli r11,r30,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(108));
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935688
	ctx.lr = 0x8995B2F4;
	sub_89935688(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x8995b2bc
	if (ctx.cr6.lt) goto loc_8995B2BC;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r11,r31,-320
	ctx.r11.s64 = ctx.r31.s64 + -320;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,152
	ctx.r9.s64 = 152;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-28
	ctx.r8.s64 = -28;
	// li r7,-28
	ctx.r7.s64 = -28;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x8995B33C;
	sub_89934FB8(ctx, base);
	// addi r11,r31,2784
	ctx.r11.s64 = ctx.r31.s64 + 2784;
	// addi r5,r31,-320
	ctx.r5.s64 = ctx.r31.s64 + -320;
	// addi r4,r31,4232
	ctx.r4.s64 = ctx.r31.s64 + 4232;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1344
	ctx.r6.s64 = ctx.r11.s64 + 1344;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935688
	ctx.lr = 0x8995B358;
	sub_89935688(ctx, base);
	// addi r7,r31,864
	ctx.r7.s64 = ctx.r31.s64 + 864;
	// li r30,16
	ctx.r30.s64 = 16;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// li r8,-8
	ctx.r8.s64 = -8;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x89934fb8
	ctx.lr = 0x8995B388;
	sub_89934FB8(ctx, base);
	// addi r11,r31,864
	ctx.r11.s64 = ctx.r31.s64 + 864;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r6,r11,160
	ctx.r6.s64 = ctx.r11.s64 + 160;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r8,-8
	ctx.r8.s64 = -8;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x8995B3BC;
	sub_89934FB8(ctx, base);
	// addi r11,r31,864
	ctx.r11.s64 = ctx.r31.s64 + 864;
	// li r5,-30203
	ctx.r5.s64 = -30203;
	// addi r4,r11,320
	ctx.r4.s64 = ctx.r11.s64 + 320;
	// sth r5,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r5.u16);
	// li r10,120
	ctx.r10.s64 = 120;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
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
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x8995B3F4;
	sub_89934FB8(ctx, base);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r28,r11,-21880
	ctx.r28.s64 = ctx.r11.s64 + -21880;
loc_8995B400:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r31,864
	ctx.r9.s64 = ctx.r31.s64 + 864;
	// mulli r11,r30,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(108));
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r8,r28
	ctx.r6.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935688
	ctx.lr = 0x8995B438;
	sub_89935688(ctx, base);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// blt cr6,0x8995b400
	if (ctx.cr6.lt) goto loc_8995B400;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r9,9016
	ctx.r5.s64 = ctx.r9.s64 + 9016;
	// addi r3,r10,29628
	ctx.r3.s64 = ctx.r10.s64 + 29628;
	// addi r30,r11,29592
	ctx.r30.s64 = ctx.r11.s64 + 29592;
loc_8995B468:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mulli r4,r6,84
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(84));
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
loc_8995B478:
	// lhzx r8,r10,r3
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// lhzx r7,r9,r30
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// rotlwi r9,r7,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// rlwinm r27,r11,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r26,r8,1,22,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// addi r9,r31,2784
	ctx.r9.s64 = ctx.r31.s64 + 2784;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lhzx r27,r27,r5
	ctx.r27.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r5.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lhzx r26,r26,r5
	ctx.r26.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r5.u32);
	// addi r7,r31,2784
	ctx.r7.s64 = ctx.r31.s64 + 2784;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// addi r8,r31,2784
	ctx.r8.s64 = ctx.r31.s64 + 2784;
	// mullw r27,r27,r11
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r11.s32);
	// stwx r29,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// mullw r11,r26,r11
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r11.s32);
	// addi r26,r31,2784
	ctx.r26.s64 = ctx.r31.s64 + 2784;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// srawi r25,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 8;
	// srawi r9,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 8;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// stwx r25,r10,r26
	REX_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r25.u32);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r29,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r29.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8995b478
	if (ctx.cr6.lt) goto loc_8995B478;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// addi r9,r31,2784
	ctx.r9.s64 = ctx.r31.s64 + 2784;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,17
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 17, ctx.xer);
	// stwx r29,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r29.u32);
	// blt cr6,0x8995b468
	if (ctx.cr6.lt) goto loc_8995B468;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995ED98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8995EDA0;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30303
	ctx.r10.s64 = -1985937408;
	// addi r10,r10,-23288
	ctx.r10.s64 = ctx.r10.s64 + -23288;
	// lbz r11,9527(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9527);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r31,r5,r9
	ctx.r31.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89934208
	ctx.lr = 0x8995EDE0;
	sub_89934208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8995edf4
	if (!ctx.cr6.eq) goto loc_8995EDF4;
loc_8995EDE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8995EDF4:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r19,r11,25128
	ctx.r19.s64 = ctx.r11.s64 + 25128;
	// lwz r11,25128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 25128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8995ee14
	if (!ctx.cr6.eq) goto loc_8995EE14;
	// lwz r11,696(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8995ede8
	if (ctx.cr6.eq) goto loc_8995EDE8;
loc_8995EE14:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r10,3890(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3890);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8995ede8
	if (!ctx.cr6.eq) goto loc_8995EDE8;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8992c2a8
	ctx.lr = 0x8995EE2C;
	sub_8992C2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995ede8
	if (ctx.cr6.eq) goto loc_8995EDE8;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lbz r10,12752(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12752);
	// clrlwi r18,r10,31
	ctx.r18.u64 = ctx.r10.u32 & 0x1;
	// extsh r9,r18
	ctx.r9.s64 = ctx.r18.s16;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mulli r8,r9,696
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// lwzx r7,r8,r19
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r19.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8995ee68
	if (!ctx.cr6.eq) goto loc_8995EE68;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// clrlwi r18,r10,24
	ctx.r18.u64 = ctx.r10.u32 & 0xFF;
	// stb r18,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r18.u8);
	// stb r18,12752(r11)
	REX_STORE_U8(ctx.r11.u32 + 12752, ctx.r18.u8);
loc_8995EE68:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lhz r17,82(r1)
	ctx.r17.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// addi r10,r11,30504
	ctx.r10.s64 = ctx.r11.s64 + 30504;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// lbz r5,12342(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 12342);
	// lis r10,-30303
	ctx.r10.s64 = -1985937408;
	// lwz r3,-21584(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + -21584);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r25,-9212(r6)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r6.u32 + -9212);
	// lis r4,16838
	ctx.r4.s64 = 1103495168;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// stb r5,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r10,r10,-23876
	ctx.r10.s64 = ctx.r10.s64 + -23876;
	// addi r9,r9,30648
	ctx.r9.s64 = ctx.r9.s64 + 30648;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r21,256
	ctx.r21.s64 = 256;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ori r15,r4,20077
	ctx.r15.u64 = ctx.r4.u64 | 20077;
	// li r16,128
	ctx.r16.s64 = 128;
	// addi r22,r8,30472
	ctx.r22.s64 = ctx.r8.s64 + 30472;
	// addi r30,r7,592
	ctx.r30.s64 = ctx.r7.s64 + 592;
	// addi r20,r6,-4592
	ctx.r20.s64 = ctx.r6.s64 + -4592;
loc_8995EEE8:
	// extsh r24,r11
	ctx.r24.s64 = ctx.r11.s16;
	// lbz r11,6(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 6);
	// lwz r10,1(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 1);
	// addi r6,r30,100
	ctx.r6.s64 = ctx.r30.s64 + 100;
	// rlwinm r9,r24,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsb r14,r11
	ctx.r14.s64 = ctx.r11.s8;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// rlwinm r7,r14,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// lhzx r26,r9,r20
	ctx.r26.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r20.u32);
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// oris r4,r10,32768
	ctx.r4.u64 = ctx.r10.u64 | 2147483648;
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mulli r31,r11,112
	ctx.r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// lhzx r10,r7,r20
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r20.u32);
	// sthx r10,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u16);
	// stwx r23,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r23.u32);
	// stwx r23,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r23.u32);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// bl 0x8992bd50
	ctx.lr = 0x8995EF44;
	sub_8992BD50(ctx, base);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// ble cr6,0x8995efa4
	if (!ctx.cr6.gt) goto loc_8995EFA4;
	// extsh r11,r17
	ctx.r11.s64 = ctx.r17.s16;
	// lhz r10,7(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 7);
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// lhz r8,9(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 9);
	// mulli r7,r11,112
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r7,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwzx r10,r7,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r8,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x8995efe0
	goto loc_8995EFE0;
loc_8995EFA4:
	// lhz r11,9(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 9);
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// lhz r9,7(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 7);
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// rotlwi r3,r9,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// add r6,r31,r10
	ctx.r6.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// mr r17,r26
	ctx.r17.u64 = ctx.r26.u64;
	// stwx r3,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// stwx r9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
loc_8995EFE0:
	// lbz r9,5(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// addi r10,r30,76
	ctx.r10.s64 = ctx.r30.s64 + 76;
	// addi r8,r30,84
	ctx.r8.s64 = ctx.r30.s64 + 84;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r7,r30,80
	ctx.r7.s64 = ctx.r30.s64 + 80;
	// addi r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 + 44;
	// stwx r9,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwx r21,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r21.u32);
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// stwx r21,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r21.u32);
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// bgt cr6,0x8995f0a0
	if (ctx.cr6.gt) goto loc_8995F0A0;
	// lis r12,-30314
	ctx.r12.s64 = -1986658304;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4048
	ctx.r12.s64 = ctx.r12.s64 + -4048;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_8995F05C;
	case 1:
		goto loc_8995F05C;
	case 2:
		goto loc_8995F1C0;
	case 3:
		goto loc_8995F1C0;
	case 4:
		goto loc_8995F1C0;
	case 5:
		goto loc_8995F1C0;
	case 6:
		goto loc_8995F224;
	case 7:
		goto loc_8995F0A0;
	case 8:
		goto loc_8995F0A0;
	case 9:
		goto loc_8995F0A0;
	case 10:
		goto loc_8995F238;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8995F05C:
	// extsh r10,r18
	ctx.r10.s64 = ctx.r18.s16;
	// mulli r9,r10,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// lwzx r8,r9,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8995f1b8
	if (ctx.cr6.eq) goto loc_8995F1B8;
	// addi r8,r19,8
	ctx.r8.s64 = ctx.r19.s64 + 8;
	// lbz r7,11(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 11);
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// lwzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r9,r5,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r22
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r22.u32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8995f190
	if (!ctx.cr6.lt) goto loc_8995F190;
	// stwx r23,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r23.u32);
loc_8995F0A0:
	// stwx r23,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r23.u32);
loc_8995F0A4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8992be58
	ctx.lr = 0x8995F0AC;
	sub_8992BE58(ctx, base);
	// mullw r11,r25,r15
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r15.s32);
	// lbzu r10,12(r29)
	ea = 12 + ctx.r29.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r25,r11,12345
	ctx.r25.s64 = ctx.r11.s64 + 12345;
	// addi r7,r30,68
	ctx.r7.s64 = ctx.r30.s64 + 68;
	// addi r9,r25,1
	ctx.r9.s64 = ctx.r25.s64 + 1;
	// addi r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 1;
	// srawi r3,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 16;
	// addi r8,r30,88
	ctx.r8.s64 = ctx.r30.s64 + 88;
	// addi r6,r30,67
	ctx.r6.s64 = ctx.r30.s64 + 67;
	// stbx r10,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u8);
	// addi r5,r30,66
	ctx.r5.s64 = ctx.r30.s64 + 66;
	// addi r4,r30,94
	ctx.r4.s64 = ctx.r30.s64 + 94;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r10,127
	ctx.r10.s64 = 127;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// stbx r16,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r16.u8);
	// clrlwi r7,r3,17
	ctx.r7.u64 = ctx.r3.u32 & 0x7FFF;
	// stbx r16,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r16.u8);
	// stbx r10,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u8);
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// sthx r7,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u16);
	// blt cr6,0x8995eee8
	if (ctx.cr6.lt) goto loc_8995EEE8;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// li r10,5940
	ctx.r10.s64 = 5940;
	// stw r25,-9212(r11)
	REX_STORE_U32(ctx.r11.u32 + -9212, ctx.r25.u32);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// stw r10,-10064(r9)
	REX_STORE_U32(ctx.r9.u32 + -10064, ctx.r10.u32);
	// lbz r8,12271(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 12271);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8995f184
	if (ctx.cr6.eq) goto loc_8995F184;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r10,586(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8995f184
	if (!ctx.cr6.eq) goto loc_8995F184;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r10,r11,-2216
	ctx.r10.s64 = ctx.r11.s64 + -2216;
	// lwz r4,92(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// lwz r3,88(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// bl 0x899d94e8
	ctx.lr = 0x8995F14C;
	sub_899D94E8(ctx, base);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r10,r9,-2072
	ctx.r10.s64 = ctx.r9.s64 + -2072;
	// lis r6,-16320
	ctx.r6.s64 = -1069547520;
	// li r11,12
	ctx.r11.s64 = 12;
	// ori r6,r6,49152
	ctx.r6.u64 = ctx.r6.u64 | 49152;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,12326(r8)
	REX_STORE_U8(ctx.r8.u32 + 12326, ctx.r11.u8);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r10,336
	ctx.r3.s64 = ctx.r10.s64 + 336;
	// bl 0x89931d78
	ctx.lr = 0x8995F178;
	sub_89931D78(ctx, base);
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// li r11,240
	ctx.r11.s64 = 240;
	// stb r11,12274(r7)
	REX_STORE_U8(ctx.r7.u32 + 12274, ctx.r11.u8);
loc_8995F184:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8995F190:
	// addi r8,r22,4
	ctx.r8.s64 = ctx.r22.s64 + 4;
	// stwx r9,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u32);
	// addi r7,r30,72
	ctx.r7.s64 = ctx.r30.s64 + 72;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lhzx r4,r10,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// stwx r5,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// rotlwi r10,r4,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// b 0x8995f0a4
	goto loc_8995F0A4;
loc_8995F1B8:
	// stwx r23,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r23.u32);
	// b 0x8995f0a4
	goto loc_8995F0A4;
loc_8995F1C0:
	// lbz r9,11(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 11);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8995f1ec
	if (ctx.cr6.eq) goto loc_8995F1EC;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r11,192
	ctx.r11.s64 = 192;
	// clrlwi r18,r9,31
	ctx.r18.u64 = ctx.r9.u32 & 0x1;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8995f1f0
	goto loc_8995F1F0;
loc_8995F1EC:
	// clrlwi r18,r11,31
	ctx.r18.u64 = ctx.r11.u32 & 0x1;
loc_8995F1F0:
	// extsh r11,r18
	ctx.r11.s64 = ctx.r18.s16;
	// mulli r11,r11,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8995f1b8
	if (ctx.cr6.eq) goto loc_8995F1B8;
	// addi r10,r19,8
	ctx.r10.s64 = ctx.r19.s64 + 8;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r7,r8,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// lbzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// stwx r5,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r5.u32);
	// b 0x8995f0a4
	goto loc_8995F0A4;
loc_8995F224:
	// lbz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r8,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u32);
	// b 0x8995f0a4
	goto loc_8995F0A4;
loc_8995F238:
	// extsh r10,r18
	ctx.r10.s64 = ctx.r18.s16;
	// lbz r7,82(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r9,r19,8
	ctx.r9.s64 = ctx.r19.s64 + 8;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r6,r10,696
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// lwzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// addic r4,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r11,r4,r7
	temp.u8 = (~ctx.r4.u32 + ctx.r7.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r6,r3,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stwx r5,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r5.u32);
	// stwx r6,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// b 0x8995f0a4
	goto loc_8995F0A4;
}

DEFINE_REX_FUNC(sub_89962128) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89962130;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r31,r11,-5600
	ctx.r31.s64 = ctx.r11.s64 + -5600;
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r29,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r29.u16);
	// addi r8,r31,-720
	ctx.r8.s64 = ctx.r31.s64 + -720;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
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
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934b48
	ctx.lr = 0x89962178;
	sub_89934B48(ctx, base);
	// addi r11,r31,-720
	ctx.r11.s64 = ctx.r31.s64 + -720;
	// li r10,128
	ctx.r10.s64 = 128;
	// sth r29,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r29.u16);
	// addi r7,r11,144
	ctx.r7.s64 = ctx.r11.s64 + 144;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
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
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934b48
	ctx.lr = 0x899621B0;
	sub_89934B48(ctx, base);
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r28,r11,25616
	ctx.r28.s64 = ctx.r11.s64 + 25616;
	// addi r30,r31,-720
	ctx.r30.s64 = ctx.r31.s64 + -720;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_899621C4:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x899621DC;
	sub_89935610(ctx, base);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// addi r11,r28,100
	ctx.r11.s64 = ctx.r28.s64 + 100;
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// addi r29,r29,108
	ctx.r29.s64 = ctx.r29.s64 + 108;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899621c4
	if (ctx.cr6.lt) goto loc_899621C4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89962758) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x89962760;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x89934208
	ctx.lr = 0x8996276C;
	sub_89934208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89962780
	if (!ctx.cr6.eq) goto loc_89962780;
loc_89962774:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
loc_89962780:
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// addi r10,r8,32432
	ctx.r10.s64 = ctx.r8.s64 + 32432;
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
	ctx.lr = 0x899627B8;
	sub_8992C2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89962774
	if (ctx.cr6.eq) goto loc_89962774;
	// extsb r21,r31
	ctx.r21.s64 = ctx.r31.s8;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x89962964
	if (!ctx.cr6.gt) goto loc_89962964;
	// lis r8,-30242
	ctx.r8.s64 = -1981939712;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r29,r30,-1
	ctx.r29.s64 = ctx.r30.s64 + -1;
	// lwz r24,-21584(r8)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r8.u32 + -21584);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// rlwinm r9,r26,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r22,-16384
	ctx.r22.s64 = -1073741824;
	// li r23,14
	ctx.r23.s64 = 14;
	// li r25,127
	ctx.r25.s64 = 127;
	// addi r31,r11,592
	ctx.r31.s64 = ctx.r11.s64 + 592;
	// addi r27,r10,-4592
	ctx.r27.s64 = ctx.r10.s64 + -4592;
loc_89962800:
	// lhzx r3,r9,r27
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// mulli r30,r9,112
	ctx.r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// stwx r22,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r22.u32);
	// lbz r7,1(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lhzx r20,r5,r27
	ctx.r20.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r27.u32);
	// stwx r23,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r23.u32);
	// sthx r20,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r20.u16);
	// lhz r11,3(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 3);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stwx r10,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u32);
	// lhz r9,5(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 5);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stwx r8,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r8.u32);
	// bl 0x8992bd50
	ctx.lr = 0x89962854;
	sub_8992BD50(ctx, base);
	// lhz r7,11(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 11);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// extsh r11,r20
	ctx.r11.s64 = ctx.r20.s16;
	// rotlwi r6,r7,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// stwx r6,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r6.u32);
	// ble cr6,0x899628c0
	if (!ctx.cr6.gt) goto loc_899628C0;
	// lhz r10,7(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 7);
	// mulli r8,r11,112
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// rotlwi r11,r10,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// stwx r11,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r3,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r3.u32);
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// lhz r7,9(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 9);
	// rotlwi r11,r7,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// stwx r11,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwzx r10,r8,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r6,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u32);
	// b 0x899628f8
	goto loc_899628F8;
loc_899628C0:
	// lhz r11,7(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 7);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// rotlwi r7,r11,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// stwx r7,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r7,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u32);
	// lhz r4,9(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 9);
	// rotlwi r11,r4,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stwx r11,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r3,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r3.u32);
loc_899628F8:
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// addi r6,r31,66
	ctx.r6.s64 = ctx.r31.s64 + 66;
	// stbx r25,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r25.u8);
	// addi r7,r28,1
	ctx.r7.s64 = ctx.r28.s64 + 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r31,67
	ctx.r4.s64 = ctx.r31.s64 + 67;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// lbz r5,13(r29)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + 13);
	// stbx r5,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r5.u8);
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// lhz r10,15(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 15);
	// sthx r10,r30,r8
	REX_STORE_U16(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u16);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// lbz r7,17(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 17);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stbx r7,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r7.u8);
	// cmpw cr6,r8,r21
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r21.s32, ctx.xer);
	// lbzu r10,18(r29)
	ea = 18 + ctx.r29.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// stwx r26,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r26.u32);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stbx r10,r30,r4
	REX_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r10.u8);
	// blt cr6,0x89962800
	if (ctx.cr6.lt) goto loc_89962800;
loc_89962964:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89963928) {
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
	// lwzx r8,r4,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r11,r8,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7FF0;
	// rlwinm r11,r11,0,27,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFC01F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89963a0c
	if (ctx.cr6.eq) goto loc_89963A0C;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// beq cr6,0x89963970
	if (ctx.cr6.eq) goto loc_89963970;
	// cmplwi cr6,r11,16400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16400, ctx.xer);
	// bne cr6,0x89963a1c
	if (!ctx.cr6.eq) goto loc_89963A1C;
loc_89963970:
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// lhzx r9,r4,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mulli r10,r7,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x899639ac
	if (ctx.cr6.eq) goto loc_899639AC;
	// addi r7,r11,154
	ctx.r7.s64 = ctx.r11.s64 + 154;
	// addi r6,r31,102
	ctx.r6.s64 = ctx.r31.s64 + 102;
	// lhzx r5,r10,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// lhzx r3,r4,r6
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x899639b0
	if (ctx.cr6.eq) goto loc_899639B0;
loc_899639AC:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_899639B0:
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x899639cc
	if (!ctx.cr6.lt) goto loc_899639CC;
	// rlwinm r11,r8,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stwx r11,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// b 0x89963a1c
	goto loc_89963A1C;
loc_899639CC:
	// mulli r9,r10,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// addi r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 + 52;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// lwzx r8,r9,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r11,r4,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lwzx r9,r4,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r11,r4,r3
	REX_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r10,r4,r30
	REX_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x89963a1c
	goto loc_89963A1C;
loc_89963A0C:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lwzx r10,r4,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r10,r10,8192
	ctx.r10.s64 = ctx.r10.s64 + 8192;
	// stwx r10,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r10.u32);
loc_89963A1C:
	// addi r8,r31,110
	ctx.r8.s64 = ctx.r31.s64 + 110;
	// lbzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x89963bf8
	if (ctx.cr6.lt) goto loc_89963BF8;
	// beq cr6,0x89963b1c
	if (ctx.cr6.eq) goto loc_89963B1C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x89963c64
	if (!ctx.cr6.lt) goto loc_89963C64;
	// addi r9,r31,66
	ctx.r9.s64 = ctx.r31.s64 + 66;
	// lbzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x89963a7c
	if (!ctx.cr6.lt) goto loc_89963A7C;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r9,r31,104
	ctx.r9.s64 = ctx.r31.s64 + 104;
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r8,26900(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 26900);
	// lhzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x89963a74
	if (!ctx.cr6.lt) goto loc_89963A74;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// addi r9,r10,9448
	ctx.r9.s64 = ctx.r10.s64 + 9448;
	// stbx r7,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
loc_89963A74:
	// stwx r7,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// b 0x89963c64
	goto loc_89963C64;
loc_89963A7C:
	// addi r11,r31,67
	ctx.r11.s64 = ctx.r31.s64 + 67;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// lbzx r8,r4,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lhz r3,26900(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 26900);
	// addi r6,r8,252
	ctx.r6.s64 = ctx.r8.s64 + 252;
	// lhzx r5,r4,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// stbx r10,r4,r11
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r10.u8);
	// stbx r10,r4,r9
	REX_STORE_U8(ctx.r4.u32 + ctx.r9.u32, ctx.r10.u8);
	// bge cr6,0x89963c64
	if (!ctx.cr6.lt) goto loc_89963C64;
	// addi r10,r31,111
	ctx.r10.s64 = ctx.r31.s64 + 111;
	// addi r9,r31,44
	ctx.r9.s64 = ctx.r31.s64 + 44;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r8,r4,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r9,r4,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r7,26932(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 26932);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// stbx r8,r4,r10
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r8.u8);
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// addi r8,r8,9016
	ctx.r8.s64 = ctx.r8.s64 + 9016;
loc_89963ADC:
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r5,r4,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r6,6,22,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0x3C0;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// rotlwi r5,r5,14
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 14);
	// cmpwi cr6,r11,56
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 56, ctx.xer);
	// srawi r5,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 4;
	// lhzx r3,r6,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mullw r5,r6,r5
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// srawi r3,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 8;
	// rlwinm r6,r3,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x89963adc
	if (ctx.cr6.lt) goto loc_89963ADC;
	// b 0x89963c64
	goto loc_89963C64;
loc_89963B1C:
	// addi r11,r31,111
	ctx.r11.s64 = ctx.r31.s64 + 111;
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r4,r11
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x89963c64
	if (!ctx.cr6.eq) goto loc_89963C64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// addi r6,r31,67
	ctx.r6.s64 = ctx.r31.s64 + 67;
	// addi r5,r31,66
	ctx.r5.s64 = ctx.r31.s64 + 66;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r11,516
	ctx.r11.s64 = 516;
	// stbx r7,r4,r8
	REX_STORE_U8(ctx.r4.u32 + ctx.r8.u32, ctx.r7.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r10,r4,r6
	REX_STORE_U8(ctx.r4.u32 + ctx.r6.u32, ctx.r10.u8);
	// sthx r11,r4,r9
	REX_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r11.u16);
	// stbx r10,r4,r5
	REX_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r10.u8);
	// bl 0x8991f608
	ctx.lr = 0x89963B6C;
	sub_8991F608(ctx, base);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x89963be4
	if (ctx.cr6.eq) goto loc_89963BE4;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r9,r31,104
	ctx.r9.s64 = ctx.r31.s64 + 104;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// addi r10,r8,12032
	ctx.r10.s64 = ctx.r8.s64 + 12032;
	// lhz r11,-4592(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// addi r6,r31,44
	ctx.r6.s64 = ctx.r31.s64 + 44;
	// addi r5,r7,9448
	ctx.r5.s64 = ctx.r7.s64 + 9448;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// rlwinm r8,r3,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// sthx r11,r4,r9
	REX_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stbx r9,r3,r5
	REX_STORE_U8(ctx.r3.u32 + ctx.r5.u32, ctx.r9.u8);
	// stwx r11,r4,r6
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r11.u32);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stbx r9,r4,r31
	REX_STORE_U8(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u8);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_89963BC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,56
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 56, ctx.xer);
	// blt cr6,0x89963bc8
	if (ctx.cr6.lt) goto loc_89963BC8;
	// b 0x89963c64
	goto loc_89963C64;
loc_89963BE4:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r10,r31,104
	ctx.r10.s64 = ctx.r31.s64 + 104;
	// lhz r11,26900(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 26900);
	// sthx r11,r4,r10
	REX_STORE_U16(ctx.r4.u32 + ctx.r10.u32, ctx.r11.u16);
	// b 0x89963c64
	goto loc_89963C64;
loc_89963BF8:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r9,r31,104
	ctx.r9.s64 = ctx.r31.s64 + 104;
	// lhz r7,26900(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 26900);
	// lhzx r10,r4,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x89963c58
	if (!ctx.cr6.lt) goto loc_89963C58;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// lwzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// beq cr6,0x89963c3c
	if (ctx.cr6.eq) goto loc_89963C3C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x89963c64
	goto loc_89963C64;
loc_89963C3C:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lhzx r10,r4,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// addi r6,r11,9448
	ctx.r6.s64 = ctx.r11.s64 + 9448;
	// li r7,0
	ctx.r7.s64 = 0;
	// stbx r7,r4,r9
	REX_STORE_U8(ctx.r4.u32 + ctx.r9.u32, ctx.r7.u8);
	// stbx r7,r10,r6
	REX_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u8);
loc_89963C58:
	// lbzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r4,r8
	REX_STORE_U8(ctx.r4.u32 + ctx.r8.u32, ctx.r11.u8);
loc_89963C64:
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

DEFINE_REX_FUNC(sub_89966CB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89966CC0;
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
	ctx.lr = 0x89966CD4;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89966f64
	if (ctx.cr6.eq) goto loc_89966F64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8991b880
	ctx.lr = 0x89966CE4;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89966f64
	if (ctx.cr6.eq) goto loc_89966F64;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r26,r10,-4592
	ctx.r26.s64 = ctx.r10.s64 + -4592;
	// addi r31,r11,12800
	ctx.r31.s64 = ctx.r11.s64 + 12800;
	// clrlwi r25,r30,16
	ctx.r25.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r11,-8016
	ctx.r11.s64 = -525336576;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lhz r27,0(r26)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// extsh r7,r27
	ctx.r7.s64 = ctx.r27.s16;
	// ori r6,r11,33028
	ctx.r6.u64 = ctx.r11.u64 | 33028;
	// mulli r30,r7,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// stwx r25,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r25.u32);
	// stwx r6,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r24,0
	ctx.r24.s64 = 0;
	// stwx r5,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r5.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r24,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r24.u32);
	// bl 0x8991b538
	ctx.lr = 0x89966D48;
	sub_8991B538(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lis r4,384
	ctx.r4.s64 = 25165824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r4,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r4.u32);
	// bl 0x89915d78
	ctx.lr = 0x89966D5C;
	sub_89915D78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991c578
	ctx.lr = 0x89966D64;
	sub_8991C578(ctx, base);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// li r8,115
	ctx.r8.s64 = 115;
	// addi r3,r31,158
	ctx.r3.s64 = ctx.r31.s64 + 158;
	// addi r9,r31,168
	ctx.r9.s64 = ctx.r31.s64 + 168;
	// stbx r8,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u8);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// li r6,256
	ctx.r6.s64 = 256;
	// stbx r24,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r24.u8);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// sthx r6,r30,r3
	REX_STORE_U16(ctx.r30.u32 + ctx.r3.u32, ctx.r6.u16);
	// stwx r7,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r29,r10,-30928
	ctx.r29.s64 = ctx.r10.s64 + -30928;
	// b 0x89966dac
	goto loc_89966DAC;
loc_89966DA0:
	// lwz r25,80(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r26,84(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_89966DAC:
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
	// stwx r25,r21,r11
	REX_STORE_U32(ctx.r21.u32 + ctx.r11.u32, ctx.r25.u32);
	// stwx r10,r21,r9
	REX_STORE_U32(ctx.r21.u32 + ctx.r9.u32, ctx.r10.u32);
	// sthx r8,r21,r5
	REX_STORE_U16(ctx.r21.u32 + ctx.r5.u32, ctx.r8.u16);
	// stwx r24,r21,r6
	REX_STORE_U32(ctx.r21.u32 + ctx.r6.u32, ctx.r24.u32);
	// bl 0x8991b538
	ctx.lr = 0x89966E2C;
	sub_8991B538(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8991c578
	ctx.lr = 0x89966E34;
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
	// addi r16,r29,17
	ctx.r16.s64 = ctx.r29.s64 + 17;
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
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// ld r29,88(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stwx r10,r21,r15
	REX_STORE_U32(ctx.r21.u32 + ctx.r15.u32, ctx.r10.u32);
	// stbx r23,r21,r9
	REX_STORE_U8(ctx.r21.u32 + ctx.r9.u32, ctx.r23.u8);
	// blt cr6,0x89966da0
	if (ctx.cr6.lt) goto loc_89966DA0;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x89934058
	ctx.lr = 0x89966F40;
	sub_89934058(ctx, base);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r8,-30276
	ctx.r8.s64 = -1984167936;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,12342(r9)
	REX_STORE_U8(ctx.r9.u32 + 12342, ctx.r11.u8);
	// stb r10,32555(r8)
	REX_STORE_U8(ctx.r8.u32 + 32555, ctx.r10.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_89966F64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8996AEC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x8996AEC8;
	__savegprlr_19(ctx, base);
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
	// addi r23,r30,8
	ctx.r23.s64 = ctx.r30.s64 + 8;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// bgt cr6,0x8996dd3c
	if (ctx.cr6.gt) goto loc_8996DD3C;
	// lis r12,-30313
	ctx.r12.s64 = -1986592768;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-20728
	ctx.r12.s64 = ctx.r12.s64 + -20728;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8996AFF8;
	case 1:
		goto loc_8996B20C;
	case 2:
		goto loc_8996B47C;
	case 3:
		goto loc_8996D38C;
	case 4:
		goto loc_8996B5CC;
	case 5:
		goto loc_8996CE80;
	case 6:
		goto loc_8996CCC0;
	case 7:
		goto loc_8996CC0C;
	case 8:
		goto loc_8996D178;
	case 9:
		goto loc_8996D178;
	case 10:
		goto loc_8996C018;
	case 11:
		goto loc_8996C018;
	case 12:
		goto loc_8996B640;
	case 13:
		goto loc_8996BA7C;
	case 14:
		goto loc_8996BCAC;
	case 15:
		goto loc_8996BA7C;
	case 16:
		goto loc_8996BCAC;
	case 17:
		goto loc_8996BA7C;
	case 18:
		goto loc_8996BCAC;
	case 19:
		goto loc_8996C240;
	case 20:
		goto loc_8996C404;
	case 21:
		goto loc_8996C704;
	case 22:
		goto loc_8996C8A4;
	case 23:
		goto loc_8996C704;
	case 24:
		goto loc_8996C8A4;
	case 25:
		goto loc_8996D6F0;
	case 26:
		goto loc_8996D6F0;
	case 27:
		goto loc_8996D6F0;
	case 28:
		goto loc_8996D6F0;
	case 29:
		goto loc_8996D6F0;
	case 30:
		goto loc_8996D6F0;
	case 31:
		goto loc_8996D6F0;
	case 32:
		goto loc_8996D6F0;
	case 33:
		goto loc_8996D6F0;
	case 34:
		goto loc_8996D6F0;
	case 35:
		goto loc_8996D6F0;
	case 36:
		goto loc_8996D6F0;
	case 37:
		goto loc_8996D6F0;
	case 38:
		goto loc_8996D6F0;
	case 39:
		goto loc_8996D6F0;
	case 40:
		goto loc_8996D6F0;
	case 41:
		goto loc_8996D6F0;
	case 42:
		goto loc_8996D6F0;
	case 43:
		goto loc_8996D6F0;
	case 44:
		goto loc_8996D6F0;
	case 45:
		goto loc_8996D6F0;
	case 46:
		goto loc_8996D6F0;
	case 47:
		goto loc_8996D6F0;
	case 48:
		goto loc_8996D6F0;
	case 49:
		goto loc_8996D6F0;
	case 50:
		goto loc_8996D6F0;
	case 51:
		goto loc_8996D6F0;
	case 52:
		goto loc_8996D6F0;
	case 53:
		goto loc_8996D6F0;
	case 54:
		goto loc_8996D6F0;
	case 55:
		goto loc_8996D6F0;
	case 56:
		goto loc_8996D6F0;
	case 57:
		goto loc_8996DD3C;
	case 58:
		goto loc_8996D9FC;
	case 59:
		goto loc_8996B618;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8996AFF8:
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8996b01c
	if (ctx.cr6.eq) goto loc_8996B01C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8996a3f8
	ctx.lr = 0x8996B018;
	sub_8996A3F8(ctx, base);
	// b 0x8996b08c
	goto loc_8996B08C;
loc_8996B01C:
	// addi r11,r30,191
	ctx.r11.s64 = ctx.r30.s64 + 191;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8996b08c
	if (!ctx.cr6.eq) goto loc_8996B08C;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// lwz r9,7104(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 7104);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 32768;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// subf r6,r9,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8996b054
	if (ctx.cr6.lt) goto loc_8996B054;
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8996B054:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,-192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -192, ctx.xer);
	// bge cr6,0x8996b08c
	if (!ctx.cr6.lt) goto loc_8996B08C;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// stwx r21,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r21.u32);
	// lbz r11,32555(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 32555);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,32555(r10)
	REX_STORE_U8(ctx.r10.u32 + 32555, ctx.r9.u8);
loc_8996B08C:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8996b0b0
	if (!ctx.cr6.eq) goto loc_8996B0B0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x89933b88
	ctx.lr = 0x8996B0A8;
	sub_89933B88(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B0B0:
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwz r8,7104(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 7104);
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r28,r30,207
	ctx.r28.s64 = ctx.r30.s64 + 207;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r24,r30,48
	ctx.r24.s64 = ctx.r30.s64 + 48;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r25,r7,9656
	ctx.r25.s64 = ctx.r7.s64 + 9656;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r3,r31,r28
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r9,r25,12
	ctx.r9.s64 = ctx.r25.s64 + 12;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r8,r31,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// mulli r6,r3,92
	ctx.r6.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(92));
	// lwzx r7,r31,r24
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// srawi r4,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 15;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// addi r9,r30,152
	ctx.r9.s64 = ctx.r30.s64 + 152;
	// subfic r11,r11,15
	ctx.xer.ca = ctx.r11.u32 <= 15;
	ctx.r11.u64 = static_cast<uint64_t>(15) - ctx.r11.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r7,-35
	ctx.r10.s64 = ctx.r7.s64 + -2293760;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r10,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 20;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r5.u32);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// sthx r10,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u16);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// rlwinm r22,r10,20,0,11
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFF00000;
	// lis r21,51
	ctx.r21.s64 = 3342336;
	// addi r23,r11,-28688
	ctx.r23.s64 = ctx.r11.s64 + -28688;
loc_8996B184:
	// lbzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r27,r29,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r25,12
	ctx.r7.s64 = ctx.r25.s64 + 12;
	// mulli r6,r9,92
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(92));
	// lhzx r5,r27,r23
	ctx.r5.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r23.u32);
	// lwzx r3,r6,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// rotlwi r10,r5,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// subf r3,r3,r22
	ctx.r3.u64 = ctx.r22.u64 - ctx.r3.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x899d8af0
	ctx.lr = 0x8996B1BC;
	sub_899D8AF0(ctx, base);
	// addi r10,r30,200
	ctx.r10.s64 = ctx.r30.s64 + 200;
	// lhzx r5,r27,r23
	ctx.r5.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r23.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// lwzx r4,r31,r24
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lbzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// rotlwi r10,r5,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// subf r4,r21,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r21.u64;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x899d7480
	ctx.lr = 0x8996B1F0;
	sub_899D7480(ctx, base);
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8996b184
	if (ctx.cr6.lt) goto loc_8996B184;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B20C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996B214;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8996b234
	if (!ctx.cr6.lt) goto loc_8996B234;
loc_8996B224:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B234:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8996aca8
	ctx.lr = 0x8996B23C;
	sub_8996ACA8(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8996b344
	if (ctx.cr6.eq) goto loc_8996B344;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x8996B280;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-28684
	ctx.r11.s64 = ctx.r11.s64 + -28684;
	// addi r24,r30,48
	ctx.r24.s64 = ctx.r30.s64 + 48;
	// addi r25,r11,-2
	ctx.r25.s64 = ctx.r11.s64 + -2;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r29,r10,57344
	ctx.r29.u64 = ctx.r10.u64 | 57344;
	// lis r23,17
	ctx.r23.s64 = 1114112;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
loc_8996B2B0:
	// addi r27,r30,158
	ctx.r27.s64 = ctx.r30.s64 + 158;
	// lhzu r11,2(r25)
	ea = 2 + ctx.r25.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r25.u32 = ea;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// lwzx r4,r31,r24
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r3,18
	ctx.r3.s64 = 18;
	// lhzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// rlwinm r10,r6,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r5,r6,128
	ctx.r5.s64 = ctx.r6.s64 + 128;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r11,r5,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// rotlwi r5,r10,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 + ctx.r23.u64;
	// bl 0x899ce510
	ctx.lr = 0x8996B318;
	sub_899CE510(ctx, base);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x8996b2b0
	if (ctx.cr6.lt) goto loc_8996B2B0;
	// lhzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// sthx r10,r31,r27
	REX_STORE_U16(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B344:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lbz r9,3890(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 3890);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8996b384
	if (!ctx.cr6.eq) goto loc_8996B384;
	// addi r10,r30,191
	ctx.r10.s64 = ctx.r30.s64 + 191;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// bl 0x8996a0f0
	ctx.lr = 0x8996B36C;
	sub_8996A0F0(ctx, base);
	// lis r6,-30276
	ctx.r6.s64 = -1984167936;
	// lbz r11,32555(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 32555);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r5,32555(r6)
	REX_STORE_U8(ctx.r6.u32 + 32555, ctx.r5.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B384:
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// lis r6,-30320
	ctx.r6.s64 = -1987051520;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,-9212(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -9212);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwzx r8,r31,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r6,9016
	ctx.r6.s64 = ctx.r6.s64 + 9016;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r4,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r4,r4,17
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFF;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// rlwinm r5,r4,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 128;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r11,r9,12345
	ctx.r11.s64 = ctx.r9.s64 + 12345;
	// lhzx r9,r5,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// srawi r29,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 16;
	// stw r11,-9212(r7)
	REX_STORE_U32(ctx.r7.u32 + -9212, ctx.r11.u32);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lhzx r7,r4,r6
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,15,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// lwzx r6,r31,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// rlwinm r10,r11,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// srawi r5,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 8;
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// addi r4,r9,-28704
	ctx.r4.s64 = ctx.r9.s64 + -28704;
	// srawi r7,r28,16
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 16;
	// addi r9,r30,200
	ctx.r9.s64 = ctx.r30.s64 + 200;
	// rlwinm r10,r29,30,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x1FFF;
	// rlwinm r29,r7,21,28,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 21) & 0xC;
	// addi r30,r30,207
	ctx.r30.s64 = ctx.r30.s64 + 207;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r10,-4096
	ctx.r10.s64 = ctx.r10.s64 + -4096;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lis r9,-6
	ctx.r9.s64 = -393216;
	// lwzx r4,r29,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r31,r30
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// addis r5,r11,17
	ctx.r5.s64 = ctx.r11.s64 + 1114112;
	// bl 0x899d4640
	ctx.lr = 0x8996B474;
	sub_899D4640(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B47C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996B484;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8996b224
	if (ctx.cr6.lt) goto loc_8996B224;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8996aca8
	ctx.lr = 0x8996B49C;
	sub_8996ACA8(ctx, base);
	// mulli r10,r29,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,191
	ctx.r11.s64 = ctx.r30.s64 + 191;
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8996b608
	if (!ctx.cr6.eq) goto loc_8996B608;
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8996b4d8
	if (!ctx.cr6.eq) goto loc_8996B4D8;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,12,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// rlwinm r10,r10,0,9,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B4D8:
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x8996dd3c
	if (ctx.cr6.gt) goto loc_8996DD3C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996b534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996B534;
	// bdzf 4*cr6+eq,0x8996b564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996B564;
	// bne cr6,0x8996b594
	if (!ctx.cr6.eq) goto loc_8996B594;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// lbzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// ori r5,r6,3
	ctx.r5.u64 = ctx.r6.u64 | 3;
	// stbx r5,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B534:
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r10,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u8);
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B564:
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r7,r10,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r10,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u8);
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B594:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// rlwinm r5,r6,0,29,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stbx r5,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B5CC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996B5D4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8996b224
	if (ctx.cr6.lt) goto loc_8996B224;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8996aca8
	ctx.lr = 0x8996B5EC;
	sub_8996ACA8(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,191
	ctx.r10.s64 = ctx.r30.s64 + 191;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mulli r8,r9,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
loc_8996B608:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8996B60C:
	// bl 0x8996a0f0
	ctx.lr = 0x8996B610;
	sub_8996A0F0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B618:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996B620;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8996b60c
	if (ctx.cr6.lt) goto loc_8996B60C;
	// bl 0x8996aca8
	ctx.lr = 0x8996B638;
	sub_8996ACA8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B640:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996B648;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8996b60c
	if (ctx.cr6.lt) goto loc_8996B60C;
	// bl 0x8996aca8
	ctx.lr = 0x8996B660;
	sub_8996ACA8(ctx, base);
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// addi r9,r30,150
	ctx.r9.s64 = ctx.r30.s64 + 150;
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8996ba6c
	if (ctx.cr6.eq) goto loc_8996BA6C;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// mulli r5,r11,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lhzx r9,r5,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8996ba6c
	if (ctx.cr6.eq) goto loc_8996BA6C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8996b900
	if (ctx.cr6.eq) goto loc_8996B900;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x8996b84c
	if (ctx.cr6.eq) goto loc_8996B84C;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8996b750
	if (ctx.cr6.eq) goto loc_8996B750;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// addi r9,r30,183
	ctx.r9.s64 = ctx.r30.s64 + 183;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// lhzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// lwzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// rlwinm r3,r10,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// subf r6,r3,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r3.u64;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// blt cr6,0x8996dd3c
	if (ctx.cr6.lt) goto loc_8996DD3C;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r9,r30,36
	ctx.r9.s64 = ctx.r30.s64 + 36;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B750:
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
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// blt cr6,0x8996dd3c
	if (ctx.cr6.lt) goto loc_8996DD3C;
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// li r21,0
	ctx.r21.s64 = 0;
	// stbx r21,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r21.u8);
	// lhzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8996b7f0
	if (ctx.cr6.lt) goto loc_8996B7F0;
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// stwx r21,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u32);
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// lis r7,-30294
	ctx.r7.s64 = -1985347584;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// addi r5,r7,-28660
	ctx.r5.s64 = ctx.r7.s64 + -28660;
	// lwz r10,-9212(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mullw r11,r10,r6
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,19,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FFFC;
	// lwzx r8,r9,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// stwx r8,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x8996B7E8;
	sub_8991B610(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B7F0:
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B84C:
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// addi r8,r30,183
	ctx.r8.s64 = ctx.r30.s64 + 183;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// lhzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// rlwinm r3,r9,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// subf r6,r3,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r3.u64;
	// stbx r7,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u8);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// stwx r6,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// blt cr6,0x8996dd3c
	if (ctx.cr6.lt) goto loc_8996DD3C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// stbx r6,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r10,r30,206
	ctx.r10.s64 = ctx.r30.s64 + 206;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r30,36
	ctx.r7.s64 = ctx.r30.s64 + 36;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B900:
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// addi r9,r10,-28668
	ctx.r9.s64 = ctx.r10.s64 + -28668;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lbzx r7,r31,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// andc r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 & ~ctx.r10.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r3,r3,3,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x4;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// lwzx r9,r3,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// blt cr6,0x8996ba14
	if (ctx.cr6.lt) goto loc_8996BA14;
	// beq cr6,0x8996b980
	if (ctx.cr6.eq) goto loc_8996B980;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bge cr6,0x8996dd3c
	if (!ctx.cr6.lt) goto loc_8996DD3C;
	// addi r11,r30,164
	ctx.r11.s64 = ctx.r30.s64 + 164;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r12,r12,65531
	ctx.r12.u64 = ctx.r12.u64 | 65531;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 16384;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996B980:
	// addi r5,r30,164
	ctx.r5.s64 = ctx.r30.s64 + 164;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r9,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
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
	// sthx r10,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u16);
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// stwx r4,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996BA14:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r5,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// li r3,45
	ctx.r3.s64 = 45;
	// rlwinm r8,r11,0,18,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// oris r7,r8,176
	ctx.r7.u64 = ctx.r8.u64 | 11534336;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// ori r7,r7,4
	ctx.r7.u64 = ctx.r7.u64 | 4;
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// bl 0x89936360
	ctx.lr = 0x8996BA58;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stbx r5,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r5.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996BA6C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8996ad80
	ctx.lr = 0x8996BA74;
	sub_8996AD80(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996BA7C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996BA84;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8996b60c
	if (ctx.cr6.lt) goto loc_8996B60C;
	// bl 0x8996aca8
	ctx.lr = 0x8996BA9C;
	sub_8996ACA8(ctx, base);
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
	// blt cr6,0x8996dd3c
	if (ctx.cr6.lt) goto loc_8996DD3C;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// li r21,0
	ctx.r21.s64 = 0;
	// stbx r21,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u8);
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8996ba6c
	if (ctx.cr6.eq) goto loc_8996BA6C;
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
	// beq cr6,0x8996ba6c
	if (ctx.cr6.eq) goto loc_8996BA6C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8996bc0c
	if (ctx.cr6.eq) goto loc_8996BC0C;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// beq cr6,0x8996bb6c
	if (ctx.cr6.eq) goto loc_8996BB6C;
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lhzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
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
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996BB6C:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// rlwinm r10,r6,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8996bbb0
	if (ctx.cr6.lt) goto loc_8996BBB0;
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// lwzx r10,r31,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r21,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stwx r11,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x8996BBA8;
	sub_8991B610(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996BBB0:
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996BC0C:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// rlwinm r10,r6,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8996bc8c
	if (ctx.cr6.lt) goto loc_8996BC8C;
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996BC8C:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,7
	ctx.r9.s64 = 7;
	// stwx r10,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8996BCA4;
	sub_8991B610(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996BCAC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996BCB4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8996b60c
	if (ctx.cr6.lt) goto loc_8996B60C;
	// bl 0x8996aca8
	ctx.lr = 0x8996BCCC;
	sub_8996ACA8(ctx, base);
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// addi r9,r30,150
	ctx.r9.s64 = ctx.r30.s64 + 150;
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8996ba6c
	if (ctx.cr6.eq) goto loc_8996BA6C;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lhzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8996ba6c
	if (ctx.cr6.eq) goto loc_8996BA6C;
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
	// blt cr6,0x8996dd3c
	if (ctx.cr6.lt) goto loc_8996DD3C;
	// addi r24,r30,12
	ctx.r24.s64 = ctx.r30.s64 + 12;
	// li r21,0
	ctx.r21.s64 = 0;
	// stbx r21,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u8);
	// lwzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8996bd80
	if (!ctx.cr6.eq) goto loc_8996BD80;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// lbzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8996bd80
	if (!ctx.cr6.eq) goto loc_8996BD80;
	// lwzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stwx r10,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r10.u32);
	// stwx r9,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8996BD6C;
	sub_8991B610(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996BD80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r10,r31,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// stwx r11,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
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
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// beq cr6,0x8996bfd0
	if (ctx.cr6.eq) goto loc_8996BFD0;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// beq cr6,0x8996bef0
	if (ctx.cr6.eq) goto loc_8996BEF0;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// addi r27,r30,158
	ctx.r27.s64 = ctx.r30.s64 + 158;
	// addi r24,r30,189
	ctx.r24.s64 = ctx.r30.s64 + 189;
	// lhzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// lbzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// sthx r9,r31,r27
	REX_STORE_U16(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u16);
	// blt cr6,0x8996bec4
	if (ctx.cr6.lt) goto loc_8996BEC4;
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// lis r11,-30296
	ctx.r11.s64 = -1985478656;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// addi r26,r11,-27528
	ctx.r26.s64 = ctx.r11.s64 + -27528;
	// addi r29,r10,-28520
	ctx.r29.s64 = ctx.r10.s64 + -28520;
loc_8996BE2C:
	// rlwinm r7,r28,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// addi r5,r29,8
	ctx.r5.s64 = ctx.r29.s64 + 8;
	// lwzx r4,r31,r25
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// addi r3,r29,6
	ctx.r3.s64 = ctx.r29.s64 + 6;
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// addi r22,r29,12
	ctx.r22.s64 = ctx.r29.s64 + 12;
	// lhzx r10,r7,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lhzx r5,r7,r3
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// lhzx r3,r7,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r9,r31,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// rotlwi r11,r3,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// lwzx r7,r7,r22
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r22.u32);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x899cbb90
	ctx.lr = 0x8996BE84;
	sub_899CBB90(ctx, base);
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x8996be2c
	if (ctx.cr6.lt) goto loc_8996BE2C;
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// stbx r21,r31,r24
	REX_STORE_U8(ctx.r31.u32 + ctx.r24.u32, ctx.r21.u8);
	// stbx r21,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996BEC4:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x8996BED4;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// lbzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r24
	REX_STORE_U8(ctx.r31.u32 + ctx.r24.u32, ctx.r10.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996BEF0:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x8996BF00;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// addi r23,r30,158
	ctx.r23.s64 = ctx.r30.s64 + 158;
	// lhzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r23.u32);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 384, ctx.xer);
	// ble cr6,0x8996bf28
	if (!ctx.cr6.gt) goto loc_8996BF28;
	// subfic r11,r10,768
	ctx.xer.ca = ctx.r10.u32 <= 768;
	ctx.r11.u64 = static_cast<uint64_t>(768) - ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8996BF28:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bge cr6,0x8996bf3c
	if (!ctx.cr6.lt) goto loc_8996BF3C;
	// subfic r11,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8996BF3C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r10,r11,192
	ctx.r10.s64 = ctx.r11.s64 + 192;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// extsh r26,r10
	ctx.r26.s64 = ctx.r10.s16;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// addi r27,r11,-28648
	ctx.r27.s64 = ctx.r11.s64 + -28648;
	// addi r28,r10,-27376
	ctx.r28.s64 = ctx.r10.s64 + -27376;
loc_8996BF68:
	// lwzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r7,r7,14,0,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0xFFFFC000;
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r11,r4,r27
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r27.u32);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x899ccf78
	ctx.lr = 0x8996BFA8;
	sub_899CCF78(ctx, base);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8996bf68
	if (ctx.cr6.lt) goto loc_8996BF68;
	// lhzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r23.u32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// sthx r10,r31,r23
	REX_STORE_U16(ctx.r31.u32 + ctx.r23.u32, ctx.r10.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996BFD0:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x8996BFE0;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,256
	ctx.r6.s64 = 256;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r4,r9,-72
	ctx.r4.s64 = ctx.r9.s64 + -4718592;
	// bl 0x899ce510
	ctx.lr = 0x8996C010;
	sub_899CE510(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C018:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996C020;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8996b60c
	if (ctx.cr6.lt) goto loc_8996B60C;
	// bl 0x8996aca8
	ctx.lr = 0x8996C038;
	sub_8996ACA8(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// mulli r9,r29,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r30,148
	ctx.r8.s64 = ctx.r30.s64 + 148;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// beq cr6,0x8996c1ac
	if (ctx.cr6.eq) goto loc_8996C1AC;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8996c120
	if (ctx.cr6.eq) goto loc_8996C120;
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
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x8996dd3c
	if (ctx.cr6.lt) goto loc_8996DD3C;
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// lhzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// addi r28,r30,32
	ctx.r28.s64 = ctx.r30.s64 + 32;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r4,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r4.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r3.u32);
	// beq cr6,0x8996c0f0
	if (ctx.cr6.eq) goto loc_8996C0F0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
loc_8996C0F0:
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// lbzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// andc r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// stbx r4,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C120:
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// mulli r7,r9,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lbzx r4,r7,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// addi r5,r30,192
	ctx.r5.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// and r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 & ctx.r9.u64;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
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
	// sthx r10,r31,r3
	REX_STORE_U16(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u16);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C1AC:
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// mulli r7,r9,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lbzx r4,r7,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// addi r5,r30,192
	ctx.r5.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// and r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 & ctx.r9.u64;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
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
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// li r3,44
	ctx.r3.s64 = 44;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// bl 0x89936360
	ctx.lr = 0x8996C22C;
	sub_89936360(ctx, base);
	// addi r5,r30,160
	ctx.r5.s64 = ctx.r30.s64 + 160;
	// li r4,1
	ctx.r4.s64 = 1;
	// sthx r4,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C240:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996C248;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8996b60c
	if (ctx.cr6.lt) goto loc_8996B60C;
	// bl 0x8996aca8
	ctx.lr = 0x8996C260;
	sub_8996ACA8(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// beq cr6,0x8996c36c
	if (ctx.cr6.eq) goto loc_8996C36C;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
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
	// beq cr6,0x8996c2a8
	if (ctx.cr6.eq) goto loc_8996C2A8;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x8996dd3c
	if (ctx.cr6.lt) goto loc_8996DD3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x8996c39c
	goto loc_8996C39C;
loc_8996C2A8:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x8996dd3c
	if (ctx.cr6.lt) goto loc_8996DD3C;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r21,0
	ctx.r21.s64 = 0;
	// stbx r21,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u8);
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8996c310
	if (ctx.cr6.lt) goto loc_8996C310;
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r10,32
	ctx.r10.s64 = 32;
	// stwx r11,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x8996C2F4;
	sub_8991B610(ctx, base);
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r8,r30,164
	ctx.r8.s64 = ctx.r30.s64 + 164;
	// li r7,256
	ctx.r7.s64 = 256;
	// sthx r7,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u16);
	// stwx r21,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r21.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C310:
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
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
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C36C:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x89936360
	ctx.lr = 0x8996C390;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8996C39C:
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
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C404:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996C40C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8996b60c
	if (ctx.cr6.lt) goto loc_8996B60C;
	// bl 0x8996aca8
	ctx.lr = 0x8996C424;
	sub_8996ACA8(ctx, base);
	// addi r22,r30,188
	ctx.r22.s64 = ctx.r30.s64 + 188;
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// lbzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lhzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// blt cr6,0x8996c690
	if (ctx.cr6.lt) goto loc_8996C690;
	// beq cr6,0x8996c540
	if (ctx.cr6.eq) goto loc_8996C540;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8996dd3c
	if (!ctx.cr6.lt) goto loc_8996DD3C;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x8996c48c
	if (!ctx.cr6.eq) goto loc_8996C48C;
	// li r11,19
	ctx.r11.s64 = 19;
	// li r10,15
	ctx.r10.s64 = 15;
	// stwx r11,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x8996C470;
	sub_8991B610(ctx, base);
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stbx r7,r31,r22
	REX_STORE_U8(ctx.r31.u32 + ctx.r22.u32, ctx.r7.u8);
	// sthx r8,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C48C:
	// ble cr6,0x8996c4e0
	if (!ctx.cr6.gt) goto loc_8996C4E0;
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
loc_8996C4E0:
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x8996dd3c
	if (!ctx.cr6.lt) goto loc_8996DD3C;
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
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C540:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932b18
	ctx.lr = 0x8996C548;
	sub_89932B18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932d30
	ctx.lr = 0x8996C554;
	sub_89932D30(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x8996C55C;
	sub_8991B7F8(ctx, base);
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
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r27,r10,9016
	ctx.r27.s64 = ctx.r10.s64 + 9016;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stbx r21,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u8);
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r23,r30,48
	ctx.r23.s64 = ctx.r30.s64 + 48;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r10,-28472
	ctx.r28.s64 = ctx.r10.s64 + -28472;
	// extsh r26,r7
	ctx.r26.s64 = ctx.r7.s16;
	// rlwinm r24,r26,1,22,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x3FE;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_8996C5B0:
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// lhzx r10,r24,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r27.u32);
	// addi r7,r25,128
	ctx.r7.s64 = ctx.r25.s64 + 128;
	// lwzx r9,r31,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// add r6,r29,r11
	ctx.r6.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r8,r28,2
	ctx.r8.s64 = ctx.r28.s64 + 2;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// extsh r20,r10
	ctx.r20.s64 = ctx.r10.s16;
	// lhzx r10,r5,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r27.u32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// extsh r19,r10
	ctx.r19.s64 = ctx.r10.s16;
	// lhzx r8,r4,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// lis r7,5
	ctx.r7.s64 = 327680;
	// lhzx r5,r4,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// lhzx r4,r4,r3
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
	// rotlwi r10,r8,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rotlwi r3,r5,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// srawi r10,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 4;
	// mullw r5,r11,r19
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r19.s32);
	// mullw r3,r10,r20
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32);
	// mullw r19,r10,r19
	ctx.r19.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r19.s32);
	// mullw r20,r11,r20
	ctx.r20.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// srawi r5,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// srawi r3,r19,8
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r19.s32 >> 8;
	// srawi r4,r20,8
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r20.s32 >> 8;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899cda00
	ctx.lr = 0x8996C650;
	sub_899CDA00(ctx, base);
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x8996c5b0
	if (ctx.cr6.lt) goto loc_8996C5B0;
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
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
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// stbx r21,r31,r22
	REX_STORE_U8(ctx.r31.u32 + ctx.r22.u32, ctx.r21.u8);
	// stbx r21,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C690:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8996c6bc
	if (!ctx.cr6.eq) goto loc_8996C6BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stbx r11,r31,r22
	REX_STORE_U8(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C6BC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932b18
	ctx.lr = 0x8996C6C4;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932d30
	ctx.lr = 0x8996C6D0;
	sub_89932D30(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x8996C6D8;
	sub_8991B7F8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x8996C6E8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// lbzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r22.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r22
	REX_STORE_U8(ctx.r31.u32 + ctx.r22.u32, ctx.r10.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C704:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996C70C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8996b60c
	if (ctx.cr6.lt) goto loc_8996B60C;
	// bl 0x8996aca8
	ctx.lr = 0x8996C724;
	sub_8996ACA8(ctx, base);
	// lwzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r11,r11,-23
	ctx.r11.s64 = ctx.r11.s64 + -23;
	// addi r8,r30,150
	ctx.r8.s64 = ctx.r30.s64 + 150;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r6,-30294
	ctx.r6.s64 = -1985347584;
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r7,r6,-28728
	ctx.r7.s64 = ctx.r6.s64 + -28728;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// beq cr6,0x8996c800
	if (ctx.cr6.eq) goto loc_8996C800;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x8996c790
	if (ctx.cr6.eq) goto loc_8996C790;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x8996dd3c
	if (ctx.cr6.lt) goto loc_8996DD3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x8996c39c
	goto loc_8996C39C;
loc_8996C790:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// blt cr6,0x8996dd3c
	if (ctx.cr6.lt) goto loc_8996DD3C;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r21,0
	ctx.r21.s64 = 0;
	// stbx r21,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u8);
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// andc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// rlwinm r11,r4,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8996c39c
	if (ctx.cr6.lt) goto loc_8996C39C;
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// stwx r11,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x8996C7E4;
	sub_8991B610(ctx, base);
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r8,r30,164
	ctx.r8.s64 = ctx.r30.s64 + 164;
	// li r7,256
	ctx.r7.s64 = 256;
	// sthx r7,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u16);
	// stwx r21,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r21.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C800:
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r7,r30,192
	ctx.r7.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// and r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ctx.r4.u64;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x8996C830;
	sub_89936360(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
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
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C8A4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996C8AC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8996b60c
	if (ctx.cr6.lt) goto loc_8996B60C;
	// bl 0x8996aca8
	ctx.lr = 0x8996C8C4;
	sub_8996ACA8(ctx, base);
	// lwzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r6,r30,150
	ctx.r6.s64 = ctx.r30.s64 + 150;
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r9,-28728
	ctx.r8.s64 = ctx.r9.s64 + -28728;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r8
	ctx.r28.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhzx r6,r31,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r6.u32);
	// blt cr6,0x8996c9c4
	if (ctx.cr6.lt) goto loc_8996C9C4;
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x8996c950
	if (!ctx.cr6.eq) goto loc_8996C950;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// stwx r10,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x8996C934;
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
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C950:
	// ble cr6,0x8996c95c
	if (!ctx.cr6.gt) goto loc_8996C95C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8996C95C:
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8996c970
	if (!ctx.cr6.lt) goto loc_8996C970;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8996C970:
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
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
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
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
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996C9C4:
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r5,r8,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// addi r6,r30,192
	ctx.r6.s64 = ctx.r30.s64 + 192;
	// lbzx r3,r31,r6
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// and r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 & ctx.r3.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8996ca00
	if (!ctx.cr6.eq) goto loc_8996CA00;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996CA00:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932b18
	ctx.lr = 0x8996CA08;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932d30
	ctx.lr = 0x8996CA14;
	sub_89932D30(ctx, base);
	// addi r29,r30,158
	ctx.r29.s64 = ctx.r30.s64 + 158;
	// lhz r11,10(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8996ca34
	if (!ctx.cr6.gt) goto loc_8996CA34;
	// sthx r11,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u16);
loc_8996CA34:
	// lhz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 8);
	// lhzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8996ca50
	if (!ctx.cr6.lt) goto loc_8996CA50;
	// sthx r11,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u16);
loc_8996CA50:
	// lwzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x8996ca88
	if (ctx.cr6.eq) goto loc_8996CA88;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8996caac
	if (!ctx.cr6.eq) goto loc_8996CAAC;
	// lhzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,27
	ctx.r5.u64 = ctx.r6.u32 & 0x1F;
	// stwx r5,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// b 0x8996caac
	goto loc_8996CAAC;
loc_8996CA88:
	// lhzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,27
	ctx.r5.u64 = ctx.r6.u32 & 0x1F;
	// subfic r4,r5,20
	ctx.xer.ca = ctx.r5.u32 <= 20;
	ctx.r4.u64 = static_cast<uint64_t>(20) - ctx.r5.u64;
	// stwx r4,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u32);
loc_8996CAAC:
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
	// addi r28,r30,32
	ctx.r28.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,15
	ctx.r4.s64 = 15;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
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
	// stwx r7,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u32);
	// bl 0x8991db50
	ctx.lr = 0x8996CB0C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// li r10,12
	ctx.r10.s64 = 12;
	// lhzx r6,r31,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,9016
	ctx.r10.s64 = ctx.r10.s64 + 9016;
loc_8996CB34:
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// rlwinm r9,r9,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r5,r7,128
	ctx.r5.s64 = ctx.r7.s64 + 128;
	// addi r4,r7,42
	ctx.r4.s64 = ctx.r7.s64 + 42;
	// rlwinm r3,r5,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lhzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// lhzx r5,r3,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,12
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 12, ctx.xer);
	// mulli r4,r7,28672
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28672));
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mulli r7,r3,28672
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(28672));
	// srawi r5,r7,22
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 22;
	// srawi r4,r4,22
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 22;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// sth r3,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// sthu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// blt cr6,0x8996cb34
	if (ctx.cr6.lt) goto loc_8996CB34;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// rlwinm r6,r8,0,23,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1F8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r3,r6,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lwzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// rlwinm r11,r11,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r9,r3,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// rlwinm r9,r10,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x899cbd98
	ctx.lr = 0x8996CC04;
	sub_899CBD98(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996CC0C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996CC14;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8996b224
	if (ctx.cr6.lt) goto loc_8996B224;
	// mulli r6,r11,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r6,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwzx r7,r31,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// clrlwi r10,r3,28
	ctx.r10.u64 = ctx.r3.u32 & 0xF;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r8,r6,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u32);
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
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996CCC0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991ba70
	ctx.lr = 0x8996CCC8;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8996b224
	if (ctx.cr6.lt) goto loc_8996B224;
	// mulli r3,r11,208
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r6,r31,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r26,r30,16
	ctx.r26.s64 = ctx.r30.s64 + 16;
	// stwx r4,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r5,r31,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r24,r30,20
	ctx.r24.s64 = ctx.r30.s64 + 20;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r23,r30,36
	ctx.r23.s64 = ctx.r30.s64 + 36;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r22,r30,32
	ctx.r22.s64 = ctx.r30.s64 + 32;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r8,r31,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r4,r30,150
	ctx.r4.s64 = ctx.r30.s64 + 150;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// lhzx r4,r31,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r6,r3,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// add r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stwx r3,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r9.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r5.u32);
	// bgt cr6,0x8996dd3c
	if (ctx.cr6.gt) goto loc_8996DD3C;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996cdcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996CDCC;
	// bdzf 4*cr6+eq,0x8996ce20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996CE20;
	// bne cr6,0x8996ce60
	if (!ctx.cr6.eq) goto loc_8996CE60;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996CDCC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x899cfa40
	ctx.lr = 0x8996CDF0;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r6,r8,129
	ctx.r6.u64 = ctx.r8.u64 | 129;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996CE20:
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996CE60:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996CE80:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991bba0
	ctx.lr = 0x8996CE88;
	sub_8991BBA0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8996b60c
	if (ctx.cr6.lt) goto loc_8996B60C;
	// bl 0x8996aca8
	ctx.lr = 0x8996CEA0;
	sub_8996ACA8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// addi r27,r30,150
	ctx.r27.s64 = ctx.r30.s64 + 150;
	// li r21,0
	ctx.r21.s64 = 0;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lhzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8996cfec
	if (ctx.cr6.gt) goto loc_8996CFEC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996cf20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996CF20;
	// bdzf 4*cr6+eq,0x8996cf68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996CF68;
	// bne cr6,0x8996cfac
	if (!ctx.cr6.eq) goto loc_8996CFAC;
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
	// beq cr6,0x8996cfec
	if (ctx.cr6.eq) goto loc_8996CFEC;
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
	ctx.lr = 0x8996CF10;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// b 0x8996cfec
	goto loc_8996CFEC;
loc_8996CF20:
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
	// addis r6,r8,28
	ctx.r6.s64 = ctx.r8.s64 + 1835008;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8996cfec
	if (!ctx.cr6.eq) goto loc_8996CFEC;
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// ori r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 4;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r4,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r4.u8);
	// b 0x8996cfec
	goto loc_8996CFEC;
loc_8996CF68:
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
	// bne cr6,0x8996cfec
	if (!ctx.cr6.eq) goto loc_8996CFEC;
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r4,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r4.u8);
	// b 0x8996cfec
	goto loc_8996CFEC;
loc_8996CFAC:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addis r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -65536;
	// stwx r6,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8996cfec
	if (!ctx.cr6.eq) goto loc_8996CFEC;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// stbx r21,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r21.u8);
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
loc_8996CFEC:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lhzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8996dd3c
	if (ctx.cr6.gt) goto loc_8996DD3C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996d044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996D044;
	// bdzf 4*cr6+eq,0x8996d0fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996D0FC;
	// bne cr6,0x8996d144
	if (!ctx.cr6.eq) goto loc_8996D144;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D044:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,13
	ctx.r8.s64 = 13;
	// li r7,15
	ctx.r7.s64 = 15;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x899cfa40
	ctx.lr = 0x8996D068;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8996d084
	if (ctx.cr6.eq) goto loc_8996D084;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8996D084:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-13
	ctx.r8.s64 = -13;
	// li r7,15
	ctx.r7.s64 = 15;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x899cfa40
	ctx.lr = 0x8996D0A8;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8996d0c4
	if (ctx.cr6.eq) goto loc_8996D0C4;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8996D0C4:
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
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
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D0FC:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lbzx r5,r8,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// addi r6,r30,192
	ctx.r6.s64 = ctx.r30.s64 + 192;
	// lbzx r3,r31,r6
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// and r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 & ctx.r3.u64;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D144:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r21,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r21.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D178:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996D180;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8996b60c
	if (ctx.cr6.lt) goto loc_8996B60C;
	// bl 0x8996aca8
	ctx.lr = 0x8996D198;
	sub_8996ACA8(ctx, base);
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
	// beq cr6,0x8996d2a4
	if (ctx.cr6.eq) goto loc_8996D2A4;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8996d218
	if (ctx.cr6.eq) goto loc_8996D218;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x8996d1f8
	if (ctx.cr6.eq) goto loc_8996D1F8;
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
	// blt cr6,0x8996dd3c
	if (ctx.cr6.lt) goto loc_8996DD3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x8996d23c
	goto loc_8996D23C;
loc_8996D1F8:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x8996D208;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x8996d234
	goto loc_8996D234;
loc_8996D218:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x8996D228;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8996D234:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8996D23C:
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
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D2A4:
	// addi r9,r30,191
	ctx.r9.s64 = ctx.r30.s64 + 191;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8996d2c4
	if (ctx.cr6.lt) goto loc_8996D2C4;
	// beq cr6,0x8996d2fc
	if (ctx.cr6.eq) goto loc_8996D2FC;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D2C4:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// addi r5,r30,182
	ctx.r5.s64 = ctx.r30.s64 + 182;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// rlwinm r10,r11,21,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xF;
	// stbx r10,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u8);
loc_8996D2FC:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,182
	ctx.r8.s64 = ctx.r30.s64 + 182;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8996d324
	if (!ctx.cr6.eq) goto loc_8996D324;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D324:
	// ble cr6,0x8996d330
	if (!ctx.cr6.gt) goto loc_8996D330;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8996d334
	goto loc_8996D334;
loc_8996D330:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8996D334:
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
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
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D38C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996D394;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8996b224
	if (ctx.cr6.lt) goto loc_8996B224;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8996aca8
	ctx.lr = 0x8996D3AC;
	sub_8996ACA8(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,191
	ctx.r10.s64 = ctx.r30.s64 + 191;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8996b608
	if (!ctx.cr6.eq) goto loc_8996B608;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r7,176
	ctx.r7.s64 = 11534336;
	// rlwinm r6,r11,0,12,9
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// rlwinm r6,r6,0,9,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// lbzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addic r5,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// subfe r4,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mullw r3,r4,r7
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// or r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// bgt cr6,0x8996dd3c
	if (ctx.cr6.gt) goto loc_8996DD3C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996d468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996D468;
	// bdzf 4*cr6+eq,0x8996d4c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996D4C4;
	// bdzf 4*cr6+eq,0x8996d634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996D634;
	// bne cr6,0x8996d6a8
	if (!ctx.cr6.eq) goto loc_8996D6A8;
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// lbzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r8,r30,164
	ctx.r8.s64 = ctx.r30.s64 + 164;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r5,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D468:
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// addi r8,r30,164
	ctx.r8.s64 = ctx.r30.s64 + 164;
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addis r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -65536;
	// addis r4,r6,-32
	ctx.r4.s64 = ctx.r6.s64 + -2097152;
	// stwx r5,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u32);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// addi r10,r30,198
	ctx.r10.s64 = ctx.r30.s64 + 198;
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// addi r7,r30,182
	ctx.r7.s64 = ctx.r30.s64 + 182;
	// li r21,0
	ctx.r21.s64 = 0;
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// sthx r21,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r21.u16);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// stbx r21,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r21.u8);
	// subfe r10,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r4,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D4C4:
	// addi r11,r30,198
	ctx.r11.s64 = ctx.r30.s64 + 198;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8996d4e4
	if (ctx.cr6.eq) goto loc_8996D4E4;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D4E4:
	// addi r29,r30,189
	ctx.r29.s64 = ctx.r30.s64 + 189;
	// lbzx r8,r31,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x8996dd3c
	if (ctx.cr6.gt) goto loc_8996DD3C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8996d550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996D550;
	// bdzf 4*cr6+eq,0x8996d5cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8996D5CC;
	// bne cr6,0x8996d600
	if (!ctx.cr6.eq) goto loc_8996D600;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x8996D51C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// sthx r8,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u16);
	// stwx r6,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D550:
	// addi r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 + 168;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addic. r10,r10,-1536
	ctx.xer.ca = ctx.r10.u32 > 1535;
	ctx.r10.s64 = ctx.r10.s64 + -1536;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// bge 0x8996d578
	if (!ctx.cr0.lt) goto loc_8996D578;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
loc_8996D578:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// srawi r8,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 4;
	// addi r7,r9,9016
	ctx.r7.s64 = ctx.r9.s64 + 9016;
	// addi r6,r30,182
	ctx.r6.s64 = ctx.r30.s64 + 182;
	// lhzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sthx r3,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u16);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r10,r11,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r9,r10,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mullw r5,r7,r8
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// srawi r4,r5,20
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 20;
	// subfic r3,r4,128
	ctx.xer.ca = ctx.r4.u32 <= 128;
	ctx.r3.u64 = static_cast<uint64_t>(128) - ctx.r4.u64;
	// stbx r3,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D5CC:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x8996D5DC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// li r3,73
	ctx.r3.s64 = 73;
	// bl 0x89936360
	ctx.lr = 0x8996D5EC;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D600:
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r8,254
	ctx.r8.s64 = ctx.r8.s64 + 254;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D634:
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
	// bne cr6,0x8996d660
	if (!ctx.cr6.eq) goto loc_8996D660;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D660:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x8996D670;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// lis r9,-30296
	ctx.r9.s64 = -1985478656;
	// lis r7,5
	ctx.r7.s64 = 327680;
	// addi r8,r9,-26072
	ctx.r8.s64 = ctx.r9.s64 + -26072;
	// li r6,256
	ctx.r6.s64 = 256;
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x899cc518
	ctx.lr = 0x8996D6A0;
	sub_899CC518(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D6A8:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 65536;
	// stwx r6,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8996dd3c
	if (!ctx.cr6.eq) goto loc_8996DD3C;
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// rlwinm r5,r6,0,29,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stbx r5,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u8);
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D6F0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996D6F8;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8996b608
	if (ctx.cr6.lt) goto loc_8996B608;
	// addi r10,r30,198
	ctx.r10.s64 = ctx.r30.s64 + 198;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8996b608
	if (!ctx.cr6.eq) goto loc_8996B608;
	// mulli r29,r11,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// addi r9,r30,68
	ctx.r9.s64 = ctx.r30.s64 + 68;
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// addi r7,r30,200
	ctx.r7.s64 = ctx.r30.s64 + 200;
	// lwzx r5,r29,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// and r8,r11,r12
	ctx.r8.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,176
	ctx.r12.s64 = 11534336;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// addi r6,r30,200
	ctx.r6.s64 = ctx.r30.s64 + 200;
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// addi r4,r30,189
	ctx.r4.s64 = ctx.r30.s64 + 189;
	// stwx r5,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// addi r3,r30,189
	ctx.r3.s64 = ctx.r30.s64 + 189;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// lbzx r8,r29,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// stbx r8,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u8);
	// lbzx r7,r29,r4
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// stbx r7,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u8);
	// blt cr6,0x8996d8a4
	if (ctx.cr6.lt) goto loc_8996D8A4;
	// beq cr6,0x8996d7ec
	if (ctx.cr6.eq) goto loc_8996D7EC;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bne cr6,0x8996d8b0
	if (!ctx.cr6.eq) goto loc_8996D8B0;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8996D798:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r7,r29,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8996d7b8
	if (!ctx.cr6.gt) goto loc_8996D7B8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8996D7B8:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r7,r29,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8996d7d8
	if (!ctx.cr6.lt) goto loc_8996D7D8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8996D7D8:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// blt cr6,0x8996d798
	if (ctx.cr6.lt) goto loc_8996D798;
	// b 0x8996d8b0
	goto loc_8996D8B0;
loc_8996D7EC:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8996d814
	if (!ctx.cr6.gt) goto loc_8996D814;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8996D814:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8996d82c
	if (!ctx.cr6.lt) goto loc_8996D82C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8996D82C:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhzx r8,r29,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r10.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8996d850
	if (ctx.cr6.lt) goto loc_8996D850;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8996D850:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// lhzx r8,r29,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r10.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8996d870
	if (!ctx.cr6.gt) goto loc_8996D870;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8996D870:
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// cmpwi cr6,r9,384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 384, ctx.xer);
	// blt cr6,0x8996d888
	if (ctx.cr6.lt) goto loc_8996D888;
	// li r10,384
	ctx.r10.s64 = 384;
loc_8996D888:
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// bgt cr6,0x8996d8ac
	if (ctx.cr6.gt) goto loc_8996D8AC;
	// li r10,128
	ctx.r10.s64 = 128;
	// b 0x8996d8ac
	goto loc_8996D8AC;
loc_8996D8A4:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r10,256
	ctx.r10.s64 = 256;
loc_8996D8AC:
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8996D8B0:
	// addi r28,r30,158
	ctx.r28.s64 = ctx.r30.s64 + 158;
	// addi r11,r30,162
	ctx.r11.s64 = ctx.r30.s64 + 162;
	// addi r26,r30,182
	ctx.r26.s64 = ctx.r30.s64 + 182;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r27,r30,182
	ctx.r27.s64 = ctx.r30.s64 + 182;
	// lhzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sthx r9,r29,r11
	REX_STORE_U16(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u16);
	// lhzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r11,-124
	ctx.r7.s64 = ctx.r11.s64 + -124;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r11,r6,27
	ctx.r11.u64 = ctx.r6.u32 & 0x1F;
	// addi r5,r11,25
	ctx.r5.s64 = ctx.r11.s64 + 25;
	// stwx r5,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r5.u32);
	// lbzx r4,r29,r26
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r26.u32);
	// rlwinm r11,r4,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stbx r4,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r4.u8);
	// bl 0x8991b610
	ctx.lr = 0x8996D900;
	sub_8991B610(ctx, base);
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lhzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r11,r11,9016
	ctx.r11.s64 = ctx.r11.s64 + 9016;
	// lwzx r6,r29,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// rlwinm r7,r7,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r25,r30,8
	ctx.r25.s64 = ctx.r30.s64 + 8;
	// lbzx r28,r31,r27
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r27,r8,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// mullw r28,r28,r5
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r5.s32);
	// divw r28,r28,r4
	ctx.r28.u64 = uint32_t((ctx.r4.s32 && !(ctx.r28.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r28.s32 / ctx.r4.s32 : 0);
	// srawi r8,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 4;
	// lhzx r28,r27,r11
	ctx.r28.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// lhzx r27,r7,r11
	ctx.r27.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r7,r28,r8
	ctx.r7.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// extsh r28,r27
	ctx.r28.s64 = ctx.r27.s16;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// mullw r8,r28,r8
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// stwx r6,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwzx r7,r29,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwzx r6,r29,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// beq cr6,0x8996dd3c
	if (ctx.cr6.eq) goto loc_8996DD3C;
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// lbzx r7,r29,r26
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r26.u32);
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mullw r5,r7,r5
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r3,r29,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r8.u32);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// divw r5,r5,r4
	ctx.r5.u64 = uint32_t((ctx.r4.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r5.s32 / ctx.r4.s32 : 0);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// rlwinm r3,r3,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// rlwinm r4,r8,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// srawi r8,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 4;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// lhzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// lhzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// mullw r3,r5,r8
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r6,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// stwx r5,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_8996D9FC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996DA04;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8996b608
	if (ctx.cr6.lt) goto loc_8996B608;
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// mulli r7,r8,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8996b608
	if (ctx.cr6.eq) goto loc_8996B608;
	// mulli r28,r11,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 + 68;
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// addi r9,r30,200
	ctx.r9.s64 = ctx.r30.s64 + 200;
	// addi r8,r30,200
	ctx.r8.s64 = ctx.r30.s64 + 200;
	// addi r7,r30,189
	ctx.r7.s64 = ctx.r30.s64 + 189;
	// lwzx r6,r28,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r5,r30,189
	ctx.r5.s64 = ctx.r30.s64 + 189;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
	// stwx r6,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// lbzx r4,r28,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// stbx r4,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u8);
	// lbzx r3,r28,r7
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// stbx r3,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u8);
	// blt cr6,0x8996dbe4
	if (ctx.cr6.lt) goto loc_8996DBE4;
	// beq cr6,0x8996dae0
	if (ctx.cr6.eq) goto loc_8996DAE0;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8996dbf0
	if (!ctx.cr6.eq) goto loc_8996DBF0;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8996DA8C:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r7,r28,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r9.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8996daac
	if (!ctx.cr6.gt) goto loc_8996DAAC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8996DAAC:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r7,r28,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r9.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8996dacc
	if (!ctx.cr6.lt) goto loc_8996DACC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8996DACC:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// blt cr6,0x8996da8c
	if (ctx.cr6.lt) goto loc_8996DA8C;
	// b 0x8996dbf0
	goto loc_8996DBF0;
loc_8996DAE0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932b18
	ctx.lr = 0x8996DAE8;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932d30
	ctx.lr = 0x8996DAF4;
	sub_89932D30(ctx, base);
	// addi r29,r30,158
	ctx.r29.s64 = ctx.r30.s64 + 158;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// sthx r9,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u16);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// lhzx r8,r28,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8996db24
	if (ctx.cr6.lt) goto loc_8996DB24;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8996DB24:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// sthx r10,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u16);
	// lhzx r9,r28,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8996db44
	if (!ctx.cr6.gt) goto loc_8996DB44;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8996DB44:
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// li r5,10
	ctx.r5.s64 = 10;
	// sthx r9,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u16);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sthx r9,r28,r10
	REX_STORE_U16(ctx.r28.u32 + ctx.r10.u32, ctx.r9.u16);
	// bl 0x8991db50
	ctx.lr = 0x8996DB64;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8996dbf0
	if (ctx.cr6.eq) goto loc_8996DBF0;
	// lhzx r29,r31,r29
	ctx.r29.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// addi r25,r30,52
	ctx.r25.s64 = ctx.r30.s64 + 52;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8996DB78:
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r9,r29,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// rlwinm r5,r8,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lhzx r3,r9,r26
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r26.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// extsh r29,r4
	ctx.r29.s64 = ctx.r4.s16;
	// rotlwi r11,r3,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// lwzx r8,r31,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lhzx r9,r5,r26
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r26.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// rotlwi r5,r9,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x899cb940
	ctx.lr = 0x8996DBCC;
	sub_899CB940(ctx, base);
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x8996db78
	if (ctx.cr6.lt) goto loc_8996DB78;
	// b 0x8996dbf0
	goto loc_8996DBF0;
loc_8996DBE4:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r10,256
	ctx.r10.s64 = 256;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8996DBF0:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r8,r31,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r7,r30,182
	ctx.r7.s64 = ctx.r30.s64 + 182;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r29,11
	ctx.r29.s64 = 720896;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// li r27,15
	ctx.r27.s64 = 15;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,12,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
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
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lbzx r4,r28,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// mullw r3,r4,r29
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// divw r11,r3,r27
	ctx.r11.u64 = uint32_t((ctx.r27.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r3.s32 / ctx.r27.s32 : 0);
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// srawi. r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8996dc88
	if (ctx.cr0.eq) goto loc_8996DC88;
	// oris r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 3145728;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
loc_8996DC88:
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// ori r29,r8,57344
	ctx.r29.u64 = ctx.r8.u64 | 57344;
	// lhzx r7,r28,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r9.u32);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// lhzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r7,r8,128
	ctx.r7.s64 = ctx.r8.s64 + 128;
	// lwzx r8,r28,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// rlwinm r10,r7,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// rlwinm r7,r5,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// rlwinm r6,r3,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lhzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// lhzx r7,r7,r26
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r26.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhzx r6,r6,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r26.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mullw r7,r6,r29
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// lhzx r4,r28,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r9.u32);
	// rlwinm r9,r4,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r8,r9,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r26.u32);
	// lwzx r10,r28,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// srawi r9,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
loc_8996DD3C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899960A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899960B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r5,r11,12800
	ctx.r5.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r30,r5,8
	ctx.r30.s64 = ctx.r5.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899961bc
	if (ctx.cr6.lt) goto loc_899961BC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8999623c
	if (!ctx.cr6.lt) goto loc_8999623C;
	// bl 0x8991b9f0
	ctx.lr = 0x899960E4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x89996104
	if (!ctx.cr6.lt) goto loc_89996104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89996018
	ctx.lr = 0x899960FC;
	sub_89996018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89996104:
	// mulli r6,r11,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r3,r31,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r10,r6,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r9,r5,56
	ctx.r9.s64 = ctx.r5.s64 + 56;
	// rlwimi r10,r3,0,24,22
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r10.u64 & 0x100);
	// addi r8,r5,48
	ctx.r8.s64 = ctx.r5.s64 + 48;
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// addi r3,r5,48
	ctx.r3.s64 = ctx.r5.s64 + 48;
	// addi r7,r5,60
	ctx.r7.s64 = ctx.r5.s64 + 60;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r30,r5,52
	ctx.r30.s64 = ctx.r5.s64 + 52;
	// addi r28,r5,206
	ctx.r28.s64 = ctx.r5.s64 + 206;
	// lwzx r9,r6,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r27,r5,52
	ctx.r27.s64 = ctx.r5.s64 + 52;
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r3,r5,200
	ctx.r3.s64 = ctx.r5.s64 + 200;
	// lwzx r8,r6,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r7,r5,200
	ctx.r7.s64 = ctx.r5.s64 + 200;
	// add r10,r31,r5
	ctx.r10.u64 = ctx.r31.u64 + ctx.r5.u64;
	// stwx r8,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u32);
	// lbzx r10,r6,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stbx r6,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u8);
	// beq cr6,0x899961ac
	if (ctx.cr6.eq) goto loc_899961AC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8999619c
	if (ctx.cr6.eq) goto loc_8999619C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8999623c
	if (!ctx.cr6.eq) goto loc_8999623C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899c33d0
	ctx.lr = 0x89996194;
	sub_899C33D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_8999619C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899c34e8
	ctx.lr = 0x899961A4;
	sub_899C34E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899961AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899c36c0
	ctx.lr = 0x899961B4;
	sub_899C36C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899961BC:
	// addi r11,r5,183
	ctx.r11.s64 = ctx.r5.s64 + 183;
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
	// blt cr6,0x8999623c
	if (ctx.cr6.lt) goto loc_8999623C;
	// addi r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r5,28
	ctx.r8.s64 = ctx.r5.s64 + 28;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r7,r5,16
	ctx.r7.s64 = ctx.r5.s64 + 16;
	// addi r6,r5,20
	ctx.r6.s64 = ctx.r5.s64 + 20;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r5,36
	ctx.r4.s64 = ctx.r5.s64 + 36;
	// addi r3,r5,32
	ctx.r3.s64 = ctx.r5.s64 + 32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
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
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
loc_8999623C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89996B38) {
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
	// b 0x89996908
	sub_89996908(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89996BA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89996BA8;
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
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89996c20
	if (ctx.cr6.lt) goto loc_89996C20;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x89996c70
	if (!ctx.cr6.lt) goto loc_89996C70;
	// bl 0x8991b9f0
	ctx.lr = 0x89996BDC;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x89996bf8
	if (!ctx.cr6.lt) goto loc_89996BF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_89996BF8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x899c38c8
	ctx.lr = 0x89996C00;
	sub_899C38C8(ctx, base);
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_89996C20:
	// addi r26,r30,200
	ctx.r26.s64 = ctx.r30.s64 + 200;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r27,r30,207
	ctx.r27.s64 = ctx.r30.s64 + 207;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// li r4,14
	ctx.r4.s64 = 14;
	// lbzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbzx r7,r31,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x899d42b0
	ctx.lr = 0x89996C50;
	sub_899D42B0(ctx, base);
	// lbzx r6,r31,r26
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// lbzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r4,r31,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r3,r31,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x899d6388
	ctx.lr = 0x89996C64;
	sub_899D6388(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,12,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
loc_89996C70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899972C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899972D0;
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
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x899973c8
	if (ctx.cr6.lt) goto loc_899973C8;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// bgt cr6,0x899973c8
	if (ctx.cr6.gt) goto loc_899973C8;
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
	// bne cr6,0x8999766c
	if (!ctx.cr6.eq) goto loc_8999766C;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x89997344
	if (ctx.cr6.eq) goto loc_89997344;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x89997370
	if (!ctx.cr6.eq) goto loc_89997370;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89997344:
	// addi r9,r30,184
	ctx.r9.s64 = ctx.r30.s64 + 184;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// beq cr6,0x89997370
	if (ctx.cr6.eq) goto loc_89997370;
	// li r11,16
	ctx.r11.s64 = 16;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89997370:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899973C8:
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r9,r31,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r9,r11,-160
	ctx.r9.s64 = ctx.r11.s64 + -10485760;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x899973f0
	if (!ctx.cr0.lt) goto loc_899973F0;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_899973F0:
	// lis r11,176
	ctx.r11.s64 = 11534336;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8999740c
	if (!ctx.cr6.gt) goto loc_8999740C;
loc_899973FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_8999740C:
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// lis r9,-30242
	ctx.r9.s64 = -1981939712;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwz r9,-21584(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -21584);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addis r11,r8,-120
	ctx.r11.s64 = ctx.r8.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x89997440
	if (!ctx.cr0.lt) goto loc_89997440;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89997440:
	// lis r10,136
	ctx.r10.s64 = 8912896;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899973fc
	if (ctx.cr6.gt) goto loc_899973FC;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// bgt cr6,0x8999766c
	if (ctx.cr6.gt) goto loc_8999766C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89997480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89997480;
	// bdzf 4*cr6+eq,0x89997480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89997480;
	// bdzf 4*cr6+eq,0x89997480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89997480;
	// bdzf 4*cr6+eq,0x89997524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89997524;
	// bdzf 4*cr6+eq,0x89997524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89997524;
	// bdzf 4*cr6+eq,0x89997524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89997524;
	// bne cr6,0x89997524
	if (!ctx.cr6.eq) goto loc_89997524;
loc_89997480:
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
	// bne cr6,0x899974e8
	if (!ctx.cr6.eq) goto loc_899974E8;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// stwx r7,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899974E8:
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
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x8999766c
	if (!ctx.cr6.eq) goto loc_8999766C;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stwx r7,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// bl 0x8991b610
	ctx.lr = 0x8999751C;
	sub_8991B610(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89997524:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r29,r10,9016
	ctx.r29.s64 = ctx.r10.s64 + 9016;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r10,r10,252
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(252));
	// addi r28,r11,128
	ctx.r28.s64 = ctx.r11.s64 + 128;
	// rlwinm r27,r11,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r28,r28,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// lhzx r9,r27,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r29.u32);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// lhzx r4,r28,r29
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r29.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// bge cr6,0x899975e4
	if (!ctx.cr6.lt) goto loc_899975E4;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r7,r11,0,12,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stwx r7,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// bl 0x8991b610
	ctx.lr = 0x899975B8;
	sub_8991B610(ctx, base);
	// addi r6,r30,64
	ctx.r6.s64 = ctx.r30.s64 + 64;
	// addi r5,r30,66
	ctx.r5.s64 = ctx.r30.s64 + 66;
	// addi r4,r30,67
	ctx.r4.s64 = ctx.r30.s64 + 67;
	// li r3,512
	ctx.r3.s64 = 512;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,128
	ctx.r10.s64 = 128;
	// sthx r3,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u16);
	// stbx r11,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u8);
	// stbx r10,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899975E4:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x89997608
	if (ctx.cr6.lt) goto loc_89997608;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r10,r11,-12512
	ctx.r10.s64 = ctx.r11.s64 + -12512;
	// lbz r11,3(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x89997620
	goto loc_89997620;
loc_89997608:
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// srawi r9,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 15;
	// addi r7,r10,-12512
	ctx.r7.s64 = ctx.r10.s64 + -12512;
	// lbzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// stwx r5,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
loc_89997620:
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
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
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
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
loc_8999766C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89999278) {
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
	ctx.lr = 0x899992AC;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899992c4
	if (!ctx.cr6.eq) goto loc_899992C4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_899992C4:
	// lis r11,-30310
	ctx.r11.s64 = -1986396160;
	// addi r3,r11,-28664
	ctx.r3.s64 = ctx.r11.s64 + -28664;
	// bl 0x89915de0
	ctx.lr = 0x899992D0;
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

DEFINE_REX_FUNC(sub_89999380) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x89999388;
	__savegprlr_27(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,12800
	ctx.r10.s64 = ctx.r11.s64 + 12800;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r8,r10,158
	ctx.r8.s64 = ctx.r10.s64 + 158;
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// addi r31,r10,168
	ctx.r31.s64 = ctx.r10.s64 + 168;
	// addi r7,r7,9016
	ctx.r7.s64 = ctx.r7.s64 + 9016;
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// lhzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// addi r6,r10,52
	ctx.r6.s64 = ctx.r10.s64 + 52;
	// addi r29,r10,60
	ctx.r29.s64 = ctx.r10.s64 + 60;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r30,r10,56
	ctx.r30.s64 = ctx.r10.s64 + 56;
	// addi r28,r8,128
	ctx.r28.s64 = ctx.r8.s64 + 128;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r27,r8,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// lwzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r28,r28,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// srawi r8,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 4;
	// lhzx r27,r27,r7
	ctx.r27.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r7.u32);
	// lhzx r7,r28,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r7.u32);
	// extsh r28,r27
	ctx.r28.s64 = ctx.r27.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mullw r28,r28,r8
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r7,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 8;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stwx r8,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r8.u32);
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stwx r7,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stwx r4,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// lhzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addic. r9,r9,-160
	ctx.xer.ca = ctx.r9.u32 > 159;
	ctx.r9.s64 = ctx.r9.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r5,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u32);
	// bge 0x89999428
	if (!ctx.cr0.lt) goto loc_89999428;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_89999428:
	// cmpwi cr6,r9,224
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 224, ctx.xer);
	// ble cr6,0x8999943c
	if (!ctx.cr6.gt) goto loc_8999943C;
loc_89999430:
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_8999943C:
	// lhzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addic. r9,r8,-512
	ctx.xer.ca = ctx.r8.u32 > 511;
	ctx.r9.s64 = ctx.r8.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x89999450
	if (!ctx.cr0.lt) goto loc_89999450;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_89999450:
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bgt cr6,0x89999430
	if (ctx.cr6.gt) goto loc_89999430;
	// addi r8,r10,188
	ctx.r8.s64 = ctx.r10.s64 + 188;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x899995a0
	if (ctx.cr6.gt) goto loc_899995A0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89999514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89999514;
	// bdzf 4*cr6+eq,0x8999953c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8999953C;
	// bne cr6,0x89999580
	if (!ctx.cr6.eq) goto loc_89999580;
	// addi r10,r10,193
	ctx.r10.s64 = ctx.r10.s64 + 193;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x899995a0
	if (ctx.cr6.gt) goto loc_899995A0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899994c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899994C0;
	// bdzf 4*cr6+eq,0x899994dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899994DC;
	// bne cr6,0x899994f8
	if (!ctx.cr6.eq) goto loc_899994F8;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x899995a0
	if (!ctx.cr6.gt) goto loc_899995A0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899994C0:
	// lis r10,416
	ctx.r10.s64 = 27262976;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x899995a0
	if (!ctx.cr6.gt) goto loc_899995A0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899994DC:
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899995a0
	if (!ctx.cr6.lt) goto loc_899995A0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899994F8:
	// lis r10,608
	ctx.r10.s64 = 39845888;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899995a0
	if (!ctx.cr6.lt) goto loc_899995A0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89999514:
	// addic. r7,r3,-4096
	ctx.xer.ca = ctx.r3.u32 > 4095;
	ctx.r7.s64 = ctx.r3.s64 + -4096;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// bne 0x899995a0
	if (!ctx.cr0.eq) goto loc_899995A0;
	// addi r10,r10,192
	ctx.r10.s64 = ctx.r10.s64 + 192;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// lbzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// ori r4,r5,3
	ctx.r4.u64 = ctx.r5.u64 | 3;
	// stbx r4,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_8999953C:
	// addi r7,r10,182
	ctx.r7.s64 = ctx.r10.s64 + 182;
	// lhzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// sthx r5,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u16);
	// cmplwi cr6,r5,480
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 480, ctx.xer);
	// blt cr6,0x899995a0
	if (ctx.cr6.lt) goto loc_899995A0;
	// addi r10,r10,192
	ctx.r10.s64 = ctx.r10.s64 + 192;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stbx r5,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u8);
	// sthx r6,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u16);
	// lbzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_89999580:
	// addi r10,r3,4096
	ctx.r10.s64 = ctx.r3.s64 + 4096;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x899995a0
	if (!ctx.cr6.eq) goto loc_899995A0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
loc_899995A0:
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999A698) {
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
	ctx.lr = 0x8999A6B0;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8999a6c8
	if (!ctx.cr6.eq) goto loc_8999A6C8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8999A6C8:
	// lis r11,-30310
	ctx.r11.s64 = -1986396160;
	// addi r3,r11,-23360
	ctx.r3.s64 = ctx.r11.s64 + -23360;
	// bl 0x89915de0
	ctx.lr = 0x8999A6D4;
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

DEFINE_REX_FUNC(sub_8999A928) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x8999A930;
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
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r25,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r25.u32);
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addic. r11,r8,-160
	ctx.xer.ca = ctx.r8.u32 > 159;
	ctx.r11.s64 = ctx.r8.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8999a970
	if (!ctx.cr0.lt) goto loc_8999A970;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8999A970:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// ble cr6,0x8999a988
	if (!ctx.cr6.gt) goto loc_8999A988;
loc_8999A978:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_8999A988:
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// lhzx r7,r31,r26
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// addic. r10,r28,-512
	ctx.xer.ca = ctx.r28.u32 > 511;
	ctx.r10.s64 = ctx.r28.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8999a9b4
	if (!ctx.cr0.lt) goto loc_8999A9B4;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8999A9B4:
	// cmpwi cr6,r10,208
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 208, ctx.xer);
	// bgt cr6,0x8999a978
	if (ctx.cr6.gt) goto loc_8999A978;
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r27,r10,25128
	ctx.r27.s64 = ctx.r10.s64 + 25128;
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8999aab0
	if (ctx.cr6.lt) goto loc_8999AAB0;
	// beq cr6,0x8999aa48
	if (ctx.cr6.eq) goto loc_8999AA48;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8999aaec
	if (!ctx.cr6.lt) goto loc_8999AAEC;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
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
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
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
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// b 0x8999aaec
	goto loc_8999AAEC;
loc_8999AA48:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
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
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
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
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// b 0x8999aaec
	goto loc_8999AAEC;
loc_8999AAB0:
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// bgt cr6,0x8999aaec
	if (ctx.cr6.gt) goto loc_8999AAEC;
	// bl 0x899329e0
	ctx.lr = 0x8999AABC;
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
	// subfc r6,r7,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r7.u32;
	ctx.r6.u64 = ctx.r28.u64 - ctx.r7.u64;
	// eqv r5,r7,r28
	ctx.r5.u64 = ~(ctx.r7.u64 ^ ctx.r28.u64);
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
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_8999AAEC:
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
	// cmplwi cr6,r9,50
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 50, ctx.xer);
	// blt cr6,0x8999ab54
	if (ctx.cr6.lt) goto loc_8999AB54;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x899329e0
	ctx.lr = 0x8999AB14;
	sub_899329E0(ctx, base);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// lwzx r31,r31,r26
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r8,r27,28
	ctx.r8.s64 = ctx.r27.s64 + 28;
	// mulli r7,r9,696
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r5,r27,24
	ctx.r5.s64 = ctx.r27.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r5,r7,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// bl 0x89932c20
	ctx.lr = 0x8999AB3C;
	sub_89932C20(ctx, base);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// bl 0x899cc3d0
	ctx.lr = 0x8999AB54;
	sub_899CC3D0(ctx, base);
loc_8999AB54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999C268) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8999C270;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30227
	ctx.r11.s64 = -1980956672;
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r31,r11,10824
	ctx.r31.s64 = ctx.r11.s64 + 10824;
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r28,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// addi r11,r31,1232
	ctx.r11.s64 = ctx.r31.s64 + 1232;
	// li r10,40
	ctx.r10.s64 = 40;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// li r9,-12
	ctx.r9.s64 = -12;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,-32763
	ctx.r4.s64 = -32763;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934b48
	ctx.lr = 0x8999C2B8;
	sub_89934B48(ctx, base);
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// addi r5,r31,1232
	ctx.r5.s64 = ctx.r31.s64 + 1232;
	// addi r29,r11,-21952
	ctx.r29.s64 = ctx.r11.s64 + -21952;
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// addi r6,r29,-5236
	ctx.r6.s64 = ctx.r29.s64 + -5236;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935610
	ctx.lr = 0x8999C2D8;
	sub_89935610(ctx, base);
	// addi r8,r31,-2832
	ctx.r8.s64 = ctx.r31.s64 + -2832;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,240
	ctx.r9.s64 = 240;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,-32767
	ctx.r4.s64 = -32767;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x89934fb8
	ctx.lr = 0x8999C308;
	sub_89934FB8(ctx, base);
	// addi r6,r29,-5132
	ctx.r6.s64 = ctx.r29.s64 + -5132;
	// addi r5,r31,-2832
	ctx.r5.s64 = ctx.r31.s64 + -2832;
	// addi r4,r31,-1552
	ctx.r4.s64 = ctx.r31.s64 + -1552;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x89935688
	ctx.lr = 0x8999C320;
	sub_89935688(ctx, base);
	// addi r7,r31,512
	ctx.r7.s64 = ctx.r31.s64 + 512;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r6,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// li r9,172
	ctx.r9.s64 = 172;
	// li r8,-42
	ctx.r8.s64 = -42;
	// li r7,-42
	ctx.r7.s64 = -42;
	// li r6,84
	ctx.r6.s64 = 84;
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,-32766
	ctx.r4.s64 = -32766;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x8999C354;
	sub_89934FB8(ctx, base);
	// addi r6,r29,-5028
	ctx.r6.s64 = ctx.r29.s64 + -5028;
	// addi r5,r31,512
	ctx.r5.s64 = ctx.r31.s64 + 512;
	// addi r4,r31,832
	ctx.r4.s64 = ctx.r31.s64 + 832;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935688
	ctx.lr = 0x8999C36C;
	sub_89935688(ctx, base);
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r29,-320
	ctx.r9.s64 = ctx.r29.s64 + -320;
	// addi r11,r31,-3232
	ctx.r11.s64 = ctx.r31.s64 + -3232;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r8,r8,3484
	ctx.r8.s64 = ctx.r8.s64 + 3484;
loc_8999C380:
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
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// blt cr6,0x8999c380
	if (ctx.cr6.lt) goto loc_8999C380;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8999C3B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x8999c3b4
	if (ctx.cr6.lt) goto loc_8999C3B4;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999CFD8) {
	REX_FUNC_PROLOGUE();
	// b 0x8991c8b8
	sub_8991C8B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999CFE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x8999CFE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30227
	ctx.r11.s64 = -1980956672;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,14552
	ctx.r30.s64 = ctx.r11.s64 + 14552;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// addi r8,r30,-2352
	ctx.r8.s64 = ctx.r30.s64 + -2352;
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
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,258
	ctx.r4.s64 = 258;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x89934b48
	ctx.lr = 0x8999D030;
	sub_89934B48(ctx, base);
	// lis r7,-30305
	ctx.r7.s64 = -1986068480;
	// addi r5,r30,-2352
	ctx.r5.s64 = ctx.r30.s64 + -2352;
	// addi r6,r7,25544
	ctx.r6.s64 = ctx.r7.s64 + 25544;
	// addi r4,r30,-928
	ctx.r4.s64 = ctx.r30.s64 + -928;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x8999D04C;
	sub_89935B08(ctx, base);
	// addi r6,r30,-528
	ctx.r6.s64 = ctx.r30.s64 + -528;
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,232
	ctx.r10.s64 = 232;
	// sth r5,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r5.u16);
	// li r9,-11
	ctx.r9.s64 = -11;
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x89934b48
	ctx.lr = 0x8999D084;
	sub_89934B48(ctx, base);
	// lis r4,-30305
	ctx.r4.s64 = -1986068480;
	// addi r5,r30,-528
	ctx.r5.s64 = ctx.r30.s64 + -528;
	// addi r6,r4,25564
	ctx.r6.s64 = ctx.r4.s64 + 25564;
	// addi r4,r30,-1728
	ctx.r4.s64 = ctx.r30.s64 + -1728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x8999D0A0;
	sub_89935B08(ctx, base);
	// addi r3,r30,-2040
	ctx.r3.s64 = ctx.r30.s64 + -2040;
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r10,176
	ctx.r10.s64 = 176;
	// li r9,-17
	ctx.r9.s64 = -17;
	// sth r11,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x89934b48
	ctx.lr = 0x8999D0D8;
	sub_89934B48(ctx, base);
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// addi r5,r30,-2040
	ctx.r5.s64 = ctx.r30.s64 + -2040;
	// addi r6,r10,25584
	ctx.r6.s64 = ctx.r10.s64 + 25584;
	// addi r4,r30,-1328
	ctx.r4.s64 = ctx.r30.s64 + -1328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x8999D0F4;
	sub_89935B08(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r10,r11,-11688
	ctx.r10.s64 = ctx.r11.s64 + -11688;
	// lbz r11,-11688(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -11688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8999d184
	if (ctx.cr6.eq) goto loc_8999D184;
	// addi r31,r10,-5
	ctx.r31.s64 = ctx.r10.s64 + -5;
loc_8999D110:
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// lbz r5,9(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 9);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lbz r6,6(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r8,7(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// lbz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 8);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r30,-216
	ctx.r11.s64 = ctx.r30.s64 + -216;
	// stb r5,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r3,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r3.u16);
	// li r9,-8
	ctx.r9.s64 = -8;
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x89934b48
	ctx.lr = 0x8999D160;
	sub_89934B48(ctx, base);
	// lbzu r10,5(r31)
	ea = 5 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8999d110
	if (!ctx.cr6.eq) goto loc_8999D110;
loc_8999D184:
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3484
	ctx.r5.s64 = ctx.r11.s64 + 3484;
loc_8999D194:
	// rlwinm r10,r10,14,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000;
	// mulli r11,r6,156
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(156));
	// ori r9,r10,12
	ctx.r9.u64 = ctx.r10.u64 | 12;
	// addi r10,r30,-216
	ctx.r10.s64 = ctx.r30.s64 + -216;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8999d1e4
	if (!ctx.cr6.gt) goto loc_8999D1E4;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_8999D1BC:
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
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8999d1bc
	if (ctx.cr6.lt) goto loc_8999D1BC;
loc_8999D1E4:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8999d194
	if (ctx.cr6.lt) goto loc_8999D194;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999EFA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x8999EFB0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,160
	ctx.r10.s64 = 10485760;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// subf. r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8999efe0
	if (!ctx.cr0.lt) goto loc_8999EFE0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8999EFE0:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8999f224
	if (!ctx.cr6.lt) goto loc_8999F224;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r9,r11,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r11.u64;
	// subf. r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8999f004
	if (!ctx.cr0.lt) goto loc_8999F004;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8999F004:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8999f224
	if (!ctx.cr6.lt) goto loc_8999F224;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934058
	ctx.lr = 0x8999F014;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999f224
	if (ctx.cr6.eq) goto loc_8999F224;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b968
	ctx.lr = 0x8999F024;
	sub_8991B968(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999f224
	if (ctx.cr6.eq) goto loc_8999F224;
	// bl 0x899d80c0
	ctx.lr = 0x8999F030;
	sub_899D80C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999f224
	if (ctx.cr6.eq) goto loc_8999F224;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// ori r30,r11,20077
	ctx.r30.u64 = ctx.r11.u64 | 20077;
	// cmplwi cr6,r26,5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 5, ctx.xer);
	// blt cr6,0x8999f074
	if (ctx.cr6.lt) goto loc_8999F074;
	// lwz r11,-9212(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -9212);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addi r29,r11,12345
	ctx.r29.s64 = ctx.r11.s64 + 12345;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// clrlwi r11,r10,17
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r26,r9,17,16,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFF;
	// b 0x8999f078
	goto loc_8999F078;
loc_8999F074:
	// lwz r29,-9212(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + -9212);
loc_8999F078:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r31,r28
	ctx.r31.s64 = ctx.r28.s16;
	// lis r10,-16208
	ctx.r10.s64 = -1062207488;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r3,6056(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// srawi r7,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 3;
	// clrlwi r6,r7,26
	ctx.r6.u64 = ctx.r7.u32 & 0x3F;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// bl 0x8991b6a0
	ctx.lr = 0x8999F0AC;
	sub_8991B6A0(ctx, base);
	// stw r22,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r22.u32);
	// stw r21,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r21.u32);
	// bl 0x8991c610
	ctx.lr = 0x8999F0B8;
	sub_8991C610(ctx, base);
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// lis r4,-30320
	ctx.r4.s64 = -1987051520;
	// sth r28,158(r3)
	REX_STORE_U16(ctx.r3.u32 + 158, ctx.r28.u16);
	// mullw r10,r29,r30
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// stw r25,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r25.u32);
	// stw r25,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r25.u32);
	// rlwinm r7,r5,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r6,r4,9016
	ctx.r6.s64 = ctx.r4.s64 + 9016;
	// addi r9,r10,12345
	ctx.r9.s64 = ctx.r10.s64 + 12345;
	// srawi r8,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r24.s32 >> 4;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stw r9,-9212(r27)
	REX_STORE_U32(ctx.r27.u32 + -9212, ctx.r9.u32);
	// rlwinm r5,r28,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// lhzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r7,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// stb r23,204(r3)
	REX_STORE_U8(ctx.r3.u32 + 204, ctx.r23.u8);
	// stb r23,200(r3)
	REX_STORE_U8(ctx.r3.u32 + 200, ctx.r23.u8);
	// sth r11,92(r3)
	REX_STORE_U16(ctx.r3.u32 + 92, ctx.r11.u16);
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// srawi r6,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 16;
	// stw r7,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// stb r5,186(r3)
	REX_STORE_U8(ctx.r3.u32 + 186, ctx.r5.u8);
	// li r31,21
	ctx.r31.s64 = 21;
	// ori r7,r7,32896
	ctx.r7.u64 = ctx.r7.u64 | 32896;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r8,r8,11976
	ctx.r8.s64 = ctx.r8.s64 + 11976;
	// lis r5,512
	ctx.r5.s64 = 33554432;
	// addi r6,r6,7904
	ctx.r6.s64 = ctx.r6.s64 + 7904;
loc_8999F160:
	// addi r29,r10,25
	ctx.r29.s64 = ctx.r10.s64 + 25;
	// lwzx r28,r9,r6
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stwx r28,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r28.u32);
	// stw r30,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// lwz r10,680(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 680);
	// stw r10,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r10.u32);
	// lwz r10,676(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 676);
	// stw r10,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// stb r11,78(r28)
	REX_STORE_U8(ctx.r28.u32 + 78, ctx.r11.u8);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// stb r11,77(r28)
	REX_STORE_U8(ctx.r28.u32 + 77, ctx.r11.u8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r11,76(r28)
	REX_STORE_U8(ctx.r28.u32 + 76, ctx.r11.u8);
	// stw r11,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r11.u32);
	// stw r7,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r7.u32);
	// stw r4,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r4.u32);
	// stw r11,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// stw r5,28(r28)
	REX_STORE_U32(ctx.r28.u32 + 28, ctx.r5.u32);
	// stw r11,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
	// stw r11,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// stw r11,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// stb r11,79(r28)
	REX_STORE_U8(ctx.r28.u32 + 79, ctx.r11.u8);
	// stb r11,80(r28)
	REX_STORE_U8(ctx.r28.u32 + 80, ctx.r11.u8);
	// stw r3,64(r28)
	REX_STORE_U32(ctx.r28.u32 + 64, ctx.r3.u32);
	// lhz r29,154(r3)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 154);
	// sth r29,72(r28)
	REX_STORE_U16(ctx.r28.u32 + 72, ctx.r29.u16);
	// blt cr6,0x8999f160
	if (ctx.cr6.lt) goto loc_8999F160;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r11,49216
	ctx.r7.u64 = ctx.r11.u64 | 49216;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899d7d20
	ctx.lr = 0x8999F210;
	sub_899D7D20(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x89936360
	ctx.lr = 0x8999F218;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_8999F224:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A07C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899A07D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
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
	// bl 0x89934058
	ctx.lr = 0x899A07F8;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a0958
	if (ctx.cr6.eq) goto loc_899A0958;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8991b880
	ctx.lr = 0x899A0808;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a0958
	if (ctx.cr6.eq) goto loc_899A0958;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r31,r10,12800
	ctx.r31.s64 = ctx.r10.s64 + 12800;
	// ori r4,r9,20
	ctx.r4.u64 = ctx.r9.u64 | 20;
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
	// stwx r4,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r4.u32);
	// clrlwi r10,r29,29
	ctx.r10.u64 = ctx.r29.u32 & 0x7;
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r28,r28,16
	ctx.r28.u64 = ctx.r28.u32 & 0xFFFF;
	// stwx r10,r27,r7
	REX_STORE_U32(ctx.r27.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r30,r27,r5
	REX_STORE_U32(ctx.r27.u32 + ctx.r5.u32, ctx.r30.u32);
	// addi r9,r11,-4592
	ctx.r9.s64 = ctx.r11.s64 + -4592;
	// stwx r28,r27,r8
	REX_STORE_U32(ctx.r27.u32 + ctx.r8.u32, ctx.r28.u32);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lhz r25,2(r9)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// bl 0x8991b538
	ctx.lr = 0x899A086C;
	sub_8991B538(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991c578
	ctx.lr = 0x899A0874;
	sub_8991C578(ctx, base);
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r11,4946(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 4946);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8991c678
	ctx.lr = 0x899A088C;
	sub_8991C678(ctx, base);
	// srawi r7,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 2;
	// lis r6,-30294
	ctx.r6.s64 = -1985347584;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r6,-11036
	ctx.r4.s64 = ctx.r6.s64 + -11036;
	// extsh r3,r25
	ctx.r3.s64 = ctx.r25.s16;
	// addi r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 + 148;
	// mulli r29,r3,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r5,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// sthx r26,r29,r11
	REX_STORE_U16(ctx.r29.u32 + ctx.r11.u32, ctx.r26.u16);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// lis r6,-16336
	ctx.r6.s64 = -1070596096;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r6,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r6.u32);
	// stwx r28,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r28.u32);
	// stwx r10,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r30,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r30.u32);
	// bl 0x8991b538
	ctx.lr = 0x899A08D8;
	sub_8991B538(ctx, base);
	// addi r5,r31,158
	ctx.r5.s64 = ctx.r31.s64 + 158;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// lis r11,43
	ctx.r11.s64 = 2818048;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// sthx r9,r29,r5
	REX_STORE_U16(ctx.r29.u32 + ctx.r5.u32, ctx.r9.u16);
	// stwx r11,r29,r4
	REX_STORE_U32(ctx.r29.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r4,r27,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stwx r11,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r30,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r30.u32);
	// lwzx r10,r27,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	// stwx r10,r29,r5
	REX_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r10.u32);
	// bl 0x8991c578
	ctx.lr = 0x899A0924;
	sub_8991C578(ctx, base);
	// addi r9,r31,207
	ctx.r9.s64 = ctx.r31.s64 + 207;
	// addi r8,r31,207
	ctx.r8.s64 = ctx.r31.s64 + 207;
	// addi r7,r31,200
	ctx.r7.s64 = ctx.r31.s64 + 200;
	// addi r6,r31,204
	ctx.r6.s64 = ctx.r31.s64 + 204;
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// lbzx r4,r27,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r4,r29,r8
	REX_STORE_U8(ctx.r29.u32 + ctx.r8.u32, ctx.r4.u8);
	// lbzx r11,r27,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r7.u32);
	// stbx r11,r29,r6
	REX_STORE_U8(ctx.r29.u32 + ctx.r6.u32, ctx.r11.u8);
	// stbx r11,r29,r5
	REX_STORE_U8(ctx.r29.u32 + ctx.r5.u32, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899A0958:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A37A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899A37B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30226
	ctx.r11.s64 = -1980891136;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r31,r11,-17552
	ctx.r31.s64 = ctx.r11.s64 + -17552;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r23,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r23.u16);
	// addi r11,r31,6336
	ctx.r11.s64 = ctx.r31.s64 + 6336;
	// li r9,128
	ctx.r9.s64 = 128;
	// li r8,-72
	ctx.r8.s64 = -72;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-64
	ctx.r7.s64 = -64;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934860
	ctx.lr = 0x899A37F0;
	sub_89934860(ctx, base);
	// li r22,14
	ctx.r22.s64 = 14;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_899A3800:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// sth r23,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r23.u16);
	// addi r9,r31,6336
	ctx.r9.s64 = ctx.r31.s64 + 6336;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,-72
	ctx.r8.s64 = -72;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r7,-64
	ctx.r7.s64 = -64;
	// li r6,-112
	ctx.r6.s64 = -112;
	// li r5,-128
	ctx.r5.s64 = -128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899352b8
	ctx.lr = 0x899A3840;
	sub_899352B8(ctx, base);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// blt cr6,0x899a3800
	if (ctx.cr6.lt) goto loc_899A3800;
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r10,-30780
	ctx.r26.s64 = ctx.r10.s64 + -30780;
loc_899A3870:
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r26,2996
	ctx.r5.s64 = ctx.r26.s64 + 2996;
	// add r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r6,r30,r9
	ctx.r6.u64 = ctx.r30.u64 + ctx.r9.u64;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,6336
	ctx.r10.s64 = ctx.r31.s64 + 6336;
	// lwzx r6,r11,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// addi r8,r31,3432
	ctx.r8.s64 = ctx.r31.s64 + 3432;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89935610
	ctx.lr = 0x899A38AC;
	sub_89935610(ctx, base);
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x899a3870
	if (ctx.cr6.lt) goto loc_899A3870;
	// sth r23,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r23.u16);
	// lis r11,-30233
	ctx.r11.s64 = -1981349888;
	// stb r24,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r24.u8);
	// li r10,184
	ctx.r10.s64 = 184;
	// addi r30,r11,24324
	ctx.r30.s64 = ctx.r11.s64 + 24324;
	// li r9,-20
	ctx.r9.s64 = -20;
	// li r8,-41
	ctx.r8.s64 = -41;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,13
	ctx.r4.s64 = 13;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89934b48
	ctx.lr = 0x899A38FC;
	sub_89934B48(ctx, base);
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// addi r6,r26,-2072
	ctx.r6.s64 = ctx.r26.s64 + -2072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,29660
	ctx.r4.s64 = ctx.r10.s64 + 29660;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89935610
	ctx.lr = 0x899A3918;
	sub_89935610(ctx, base);
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r11,r9,-10128
	ctx.r11.s64 = ctx.r9.s64 + -10128;
	// li r25,4
	ctx.r25.s64 = 4;
	// addi r28,r11,-2
	ctx.r28.s64 = ctx.r11.s64 + -2;
loc_899A392C:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r4,2(r28)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + 2);
	// addi r9,r31,960
	ctx.r9.s64 = ctx.r31.s64 + 960;
	// lhz r5,4(r28)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 4);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r6,6(r28)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + 6);
	// li r7,64
	ctx.r7.s64 = 64;
	// lbz r8,7(r28)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + 7);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzu r10,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// li r3,4
	ctx.r3.s64 = 4;
	// sth r25,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r25.u16);
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r24,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r24.u8);
	// li r9,-32
	ctx.r9.s64 = -32;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bl 0x89934b48
	ctx.lr = 0x899A3970;
	sub_89934B48(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_899A397C:
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r10,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r8,r11,14,16,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000;
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r11,r31,5200
	ctx.r11.s64 = ctx.r31.s64 + 5200;
	// mulli r10,r7,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(60));
	// ori r3,r8,4
	ctx.r3.u64 = ctx.r8.u64 | 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x89935610
	ctx.lr = 0x899A39A8;
	sub_89935610(ctx, base);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x899a397c
	if (ctx.cr6.lt) goto loc_899A397C;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x899a392c
	if (ctx.cr6.lt) goto loc_899A392C;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// sth r23,114(r1)
	REX_STORE_U16(ctx.r1.u32 + 114, ctx.r23.u16);
	// li r28,2
	ctx.r28.s64 = 2;
	// sth r22,116(r1)
	REX_STORE_U16(ctx.r1.u32 + 116, ctx.r22.u16);
	// li r26,7
	ctx.r26.s64 = 7;
	// stb r22,118(r1)
	REX_STORE_U8(ctx.r1.u32 + 118, ctx.r22.u8);
	// li r10,12
	ctx.r10.s64 = 12;
	// sth r28,120(r1)
	REX_STORE_U16(ctx.r1.u32 + 120, ctx.r28.u16);
	// li r9,15
	ctx.r9.s64 = 15;
	// stb r26,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, ctx.r26.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r10,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// li r7,16
	ctx.r7.s64 = 16;
	// sth r9,122(r1)
	REX_STORE_U16(ctx.r1.u32 + 122, ctx.r9.u16);
	// sth r8,126(r1)
	REX_STORE_U16(ctx.r1.u32 + 126, ctx.r8.u16);
	// li r27,144
	ctx.r27.s64 = 144;
	// sth r7,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r7.u16);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// stb r24,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r24.u8);
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899a3aa4
	if (ctx.cr6.eq) goto loc_899A3AA4;
	// addi r10,r1,114
	ctx.r10.s64 = ctx.r1.s64 + 114;
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
loc_899A3A38:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lhz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// extsb r25,r11
	ctx.r25.s64 = ctx.r11.s8;
	// lhzu r5,6(r30)
	ea = 6 + ctx.r30.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// sth r28,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// addi r8,r31,2832
	ctx.r8.s64 = ctx.r31.s64 + 2832;
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r10,224
	ctx.r10.s64 = 224;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,-20
	ctx.r9.s64 = -20;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r8,-16
	ctx.r8.s64 = -16;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89934b48
	ctx.lr = 0x899A3A84;
	sub_89934B48(ctx, base);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// add r4,r25,r9
	ctx.r4.u64 = ctx.r25.u64 + ctx.r9.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// extsh r29,r4
	ctx.r29.s64 = ctx.r4.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x899a3a38
	if (!ctx.cr6.eq) goto loc_899A3A38;
loc_899A3AA4:
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r31,2832
	ctx.r9.s64 = ctx.r31.s64 + 2832;
	// addi r11,r31,4680
	ctx.r11.s64 = ctx.r31.s64 + 4680;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r29,r8,3484
	ctx.r29.s64 = ctx.r8.s64 + 3484;
loc_899A3AB8:
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
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,33
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 33, ctx.xer);
	// blt cr6,0x899a3ab8
	if (ctx.cr6.lt) goto loc_899A3AB8;
	// addi r9,r31,3640
	ctx.r9.s64 = ctx.r31.s64 + 3640;
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
	// li r10,144
	ctx.r10.s64 = 144;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,-8
	ctx.r8.s64 = -8;
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899A3B18;
	sub_89934FB8(ctx, base);
	// addi r9,r31,3640
	ctx.r9.s64 = ctx.r31.s64 + 3640;
	// addi r11,r31,5088
	ctx.r11.s64 = ctx.r31.s64 + 5088;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_899A3B24:
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
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899a3b24
	if (ctx.cr6.lt) goto loc_899A3B24;
	// addi r8,r31,6160
	ctx.r8.s64 = ctx.r31.s64 + 6160;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// li r30,8
	ctx.r30.s64 = 8;
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
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
	// li r4,265
	ctx.r4.s64 = 265;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899A3B88;
	sub_89934FB8(ctx, base);
	// addi r11,r31,6160
	ctx.r11.s64 = ctx.r31.s64 + 6160;
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
	// li r4,268
	ctx.r4.s64 = 268;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x89934fb8
	ctx.lr = 0x899A3BBC;
	sub_89934FB8(ctx, base);
	// addi r5,r31,6160
	ctx.r5.s64 = ctx.r31.s64 + 6160;
	// addi r4,r31,1536
	ctx.r4.s64 = ctx.r31.s64 + 1536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935c28
	ctx.lr = 0x899A3BD4;
	sub_89935C28(ctx, base);
	// addi r6,r31,1936
	ctx.r6.s64 = ctx.r31.s64 + 1936;
	// li r10,80
	ctx.r10.s64 = 80;
	// sth r28,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,-24
	ctx.r9.s64 = -24;
	// li r8,-24
	ctx.r8.s64 = -24;
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934b48
	ctx.lr = 0x899A3C08;
	sub_89934B48(ctx, base);
	// addi r5,r31,2512
	ctx.r5.s64 = ctx.r31.s64 + 2512;
	// li r10,144
	ctx.r10.s64 = 144;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x89934fb8
	ctx.lr = 0x899A3C38;
	sub_89934FB8(ctx, base);
	// addi r11,r31,2512
	ctx.r11.s64 = ctx.r31.s64 + 2512;
	// li r30,5
	ctx.r30.s64 = 5;
	// addi r4,r11,220
	ctx.r4.s64 = ctx.r11.s64 + 220;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x89934fb8
	ctx.lr = 0x899A3C70;
	sub_89934FB8(ctx, base);
	// addi r11,r31,2512
	ctx.r11.s64 = ctx.r31.s64 + 2512;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r3,r11,270
	ctx.r3.s64 = ctx.r11.s64 + 270;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,11
	ctx.r4.s64 = 11;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x89934fb8
	ctx.lr = 0x899A3CA4;
	sub_89934FB8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_899A3CAC:
	// rlwinm r11,r11,14,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000;
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
loc_899A3CC4:
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r4,r7
	ctx.r6.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r9,r31,1936
	ctx.r9.s64 = ctx.r31.s64 + 1936;
	// addi r11,r31,3720
	ctx.r11.s64 = ctx.r31.s64 + 3720;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r6,r6,60
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(60));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899a3d1c
	if (!ctx.cr6.gt) goto loc_899A3D1C;
	// rlwinm r5,r3,16,0,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xC0000000;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_899A3CF8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899a3cf8
	if (ctx.cr6.lt) goto loc_899A3CF8;
loc_899A3D1C:
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// addi r9,r31,2512
	ctx.r9.s64 = ctx.r31.s64 + 2512;
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x899a3d74
	if (!ctx.cr6.gt) goto loc_899A3D74;
	// rlwinm r6,r3,16,0,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xC0000000;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_899A3D4C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
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
	// blt cr6,0x899a3d4c
	if (ctx.cr6.lt) goto loc_899A3D4C;
loc_899A3D74:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x899a3cc4
	if (ctx.cr6.lt) goto loc_899A3CC4;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x899a3cac
	if (ctx.cr6.lt) goto loc_899A3CAC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A8AF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899A8B00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x899a8d8c
	if (ctx.cr6.gt) goto loc_899A8D8C;
	// lis r12,-30309
	ctx.r12.s64 = -1986330624;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29888
	ctx.r12.s64 = ctx.r12.s64 + -29888;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899A8B7C;
	case 1:
		goto loc_899A8B7C;
	case 2:
		goto loc_899A8C20;
	case 3:
		goto loc_899A8B7C;
	case 4:
		goto loc_899A8B7C;
	case 5:
		goto loc_899A8C20;
	case 6:
		goto loc_899A8B7C;
	case 7:
		goto loc_899A8B7C;
	case 8:
		goto loc_899A8C20;
	case 9:
		goto loc_899A8B7C;
	case 10:
		goto loc_899A8B7C;
	case 11:
		goto loc_899A8C20;
	case 12:
		goto loc_899A8B7C;
	case 13:
		goto loc_899A8B7C;
	case 14:
		goto loc_899A8C20;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899A8B7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A8B84;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899a8ba0
	if (!ctx.cr6.lt) goto loc_899A8BA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899a8a80
	ctx.lr = 0x899A8B98;
	sub_899A8A80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899A8BA0:
	// addi r10,r4,158
	ctx.r10.s64 = ctx.r4.s64 + 158;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lhzx r7,r5,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lis r6,-30320
	ctx.r6.s64 = -1987051520;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// addi r11,r6,9016
	ctx.r11.s64 = ctx.r6.s64 + 9016;
	// addi r10,r4,164
	ctx.r10.s64 = ctx.r4.s64 + 164;
	// rlwinm r9,r3,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// rlwinm r7,r7,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r6,r4,48
	ctx.r6.s64 = ctx.r4.s64 + 48;
	// addi r3,r4,48
	ctx.r3.s64 = ctx.r4.s64 + 48;
	// lwzx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// addi r31,r4,52
	ctx.r31.s64 = ctx.r4.s64 + 52;
	// lhzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// addi r4,r4,52
	ctx.r4.s64 = ctx.r4.s64 + 52;
	// lhzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwzx r10,r8,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mullw r6,r9,r11
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r7,r11
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r7,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r6,r5,r4
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899A8C20:
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,56
	ctx.r9.s64 = ctx.r4.s64 + 56;
	// lwzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r9,r5,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addis r10,r31,-160
	ctx.r10.s64 = ctx.r31.s64 + -10485760;
	// stwx r31,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r31.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x899a8c48
	if (!ctx.cr0.lt) goto loc_899A8C48;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899A8C48:
	// lis r11,172
	ctx.r11.s64 = 11272192;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x899a8c64
	if (!ctx.cr6.gt) goto loc_899A8C64;
loc_899A8C54:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r5,r4
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899A8C64:
	// addi r11,r4,52
	ctx.r11.s64 = ctx.r4.s64 + 52;
	// addi r10,r4,60
	ctx.r10.s64 = ctx.r4.s64 + 60;
	// lis r7,-30242
	ctx.r7.s64 = -1981939712;
	// lwzx r9,r5,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r8,r5,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwz r10,-21584(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + -21584);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r3,r10,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r10.u64;
	// stwx r6,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u32);
	// addis r11,r3,-120
	ctx.r11.s64 = ctx.r3.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899a8c98
	if (!ctx.cr0.lt) goto loc_899A8C98;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899A8C98:
	// lis r10,132
	ctx.r10.s64 = 8650752;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899a8c54
	if (ctx.cr6.gt) goto loc_899A8C54;
	// addi r11,r4,183
	ctx.r11.s64 = ctx.r4.s64 + 183;
	// lbzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899a8d8c
	if (ctx.cr6.eq) goto loc_899A8D8C;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lwzx r3,r5,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r7,r4,158
	ctx.r7.s64 = ctx.r4.s64 + 158;
	// ori r10,r8,20077
	ctx.r10.u64 = ctx.r8.u64 | 20077;
	// addi r8,r4,168
	ctx.r8.s64 = ctx.r4.s64 + 168;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// lis r29,128
	ctx.r29.s64 = 8388608;
	// lis r30,-30320
	ctx.r30.s64 = -1987051520;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lhzx r7,r5,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r8,r5,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// addi r30,r30,9016
	ctx.r30.s64 = ctx.r30.s64 + 9016;
	// srawi r11,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 16;
	// ori r7,r29,49280
	ctx.r7.u64 = ctx.r29.u64 | 49280;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r4,200
	ctx.r9.s64 = ctx.r4.s64 + 200;
	// addi r10,r10,248
	ctx.r10.s64 = ctx.r10.s64 + 248;
	// addi r7,r4,207
	ctx.r7.s64 = ctx.r4.s64 + 207;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r29,r8,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// lbzx r8,r5,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// lbzx r7,r5,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// rlwinm r9,r10,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r29,r30
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r30.u32);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// lhzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r30,r10,15,0,16
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// rlwinm r29,r9,15,0,16
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// srawi r5,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 8;
	// srawi r11,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 8;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x899d7d20
	ctx.lr = 0x899A8D8C;
	sub_899D7D20(ctx, base);
loc_899A8D8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899AB888) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899AB890;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// lwzx r28,r30,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r6,r31,207
	ctx.r6.s64 = ctx.r31.s64 + 207;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r5,r30,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// lwzx r4,r30,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lbzx r27,r30,r6
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// lbzx r26,r30,r3
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// bgt cr6,0x899ab970
	if (ctx.cr6.gt) goto loc_899AB970;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899ab948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AB948;
	// bdzf 4*cr6+eq,0x899ab970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AB970;
	// bdzf 4*cr6+eq,0x899ab970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AB970;
	// bdzf 4*cr6+eq,0x899ab958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AB958;
	// bdzf 4*cr6+eq,0x899ab958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AB958;
	// bne cr6,0x899ab980
	if (!ctx.cr6.eq) goto loc_899AB980;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
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
	// ori r12,r12,32767
	ctx.r12.u64 = ctx.r12.u64 | 32767;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-7408
	ctx.r4.s64 = ctx.r9.s64 + -7408;
	// and r3,r28,r12
	ctx.r3.u64 = ctx.r28.u64 & ctx.r12.u64;
	// sthx r11,r30,r8
	REX_STORE_U16(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u16);
	// stwx r4,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r4.u32);
	// stbx r11,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u8);
	// sthx r11,r30,r6
	REX_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u16);
	// sthx r11,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u16);
	// stwx r3,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899AB948:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899a9638
	ctx.lr = 0x899AB950;
	sub_899A9638(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899AB958:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
loc_899AB968:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899AB970;
	sub_899D4C10(ctx, base);
loc_899AB970:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899AB980:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899AB988;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899ab970
	if (ctx.cr6.lt) goto loc_899AB970;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899ab9bc
	if (!ctx.cr6.eq) goto loc_899AB9BC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x899ab968
	goto loc_899AB968;
loc_899AB9BC:
	// addi r9,r31,196
	ctx.r9.s64 = ctx.r31.s64 + 196;
	// addi r10,r31,197
	ctx.r10.s64 = ctx.r31.s64 + 197;
	// addi r7,r31,192
	ctx.r7.s64 = ctx.r31.s64 + 192;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// stbx r5,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u8);
	// lbzx r5,r30,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// or r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// bl 0x8991c340
	ctx.lr = 0x899AB9F0;
	sub_8991C340(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899ACFD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x899ACFD8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991f608
	ctx.lr = 0x899ACFE4;
	sub_8991F608(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899ad2e8
	if (ctx.cr6.eq) goto loc_899AD2E8;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// addi r27,r11,-4592
	ctx.r27.s64 = ctx.r11.s64 + -4592;
	// lhz r26,26864(r10)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 26864);
	// lhz r29,-4592(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89934058
	ctx.lr = 0x899AD00C;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ad2e8
	if (ctx.cr6.eq) goto loc_899AD2E8;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x8991b880
	ctx.lr = 0x899AD01C;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899ad2e8
	if (ctx.cr6.eq) goto loc_899AD2E8;
	// lhz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
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
	// clrlwi r22,r26,16
	ctx.r22.u64 = ctx.r26.u32 & 0xFFFF;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r11,r4,260
	ctx.r11.u64 = ctx.r4.u64 | 260;
	// stwx r22,r28,r8
	REX_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r22.u32);
	// stwx r25,r28,r6
	REX_STORE_U32(ctx.r28.u32 + ctx.r6.u32, ctx.r25.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stwx r25,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r25.u32);
	// stwx r11,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u32);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// bl 0x8991b538
	ctx.lr = 0x899AD088;
	sub_8991B538(ctx, base);
	// addi r24,r31,48
	ctx.r24.s64 = ctx.r31.s64 + 48;
	// lis r10,384
	ctx.r10.s64 = 25165824;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r10,r28,r24
	REX_STORE_U32(ctx.r28.u32 + ctx.r24.u32, ctx.r10.u32);
	// bl 0x89915d78
	ctx.lr = 0x899AD09C;
	sub_89915D78(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991c578
	ctx.lr = 0x899AD0A4;
	sub_8991C578(ctx, base);
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// rlwinm r9,r7,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// addi r11,r6,12032
	ctx.r11.s64 = ctx.r6.s64 + 12032;
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r8,115
	ctx.r8.s64 = 115;
	// addi r9,r31,148
	ctx.r9.s64 = ctx.r31.s64 + 148;
	// addi r21,r31,200
	ctx.r21.s64 = ctx.r31.s64 + 200;
	// stbx r8,r28,r10
	REX_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r4,r5,9448
	ctx.r4.s64 = ctx.r5.s64 + 9448;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r6,r31,44
	ctx.r6.s64 = ctx.r31.s64 + 44;
	// li r10,256
	ctx.r10.s64 = 256;
	// sthx r29,r28,r9
	REX_STORE_U16(ctx.r28.u32 + ctx.r9.u32, ctx.r29.u16);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stbx r8,r28,r21
	REX_STORE_U8(ctx.r28.u32 + ctx.r21.u32, ctx.r8.u8);
	// li r26,1
	ctx.r26.s64 = 1;
	// sthx r10,r28,r30
	REX_STORE_U16(ctx.r28.u32 + ctx.r30.u32, ctx.r10.u16);
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// stwx r5,r28,r3
	REX_STORE_U32(ctx.r28.u32 + ctx.r3.u32, ctx.r5.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stbx r26,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, ctx.r26.u8);
	// stwx r11,r28,r6
	REX_STORE_U32(ctx.r28.u32 + ctx.r6.u32, ctx.r11.u32);
loc_899AD10C:
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
	// blt cr6,0x899ad10c
	if (ctx.cr6.lt) goto loc_899AD10C;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r10,-7088
	ctx.r10.s64 = ctx.r10.s64 + -7088;
	// li r23,64
	ctx.r23.s64 = 64;
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// b 0x899ad15c
	goto loc_899AD15C;
loc_899AD154:
	// lwz r21,80(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r22,84(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_899AD15C:
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// lhz r11,5(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 5);
	// addi r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 2;
	// lwz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 1);
	// rlwinm r8,r26,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,7(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 7);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// addi r3,r31,150
	ctx.r3.s64 = ctx.r31.s64 + 150;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// lhzx r20,r8,r10
	ctx.r20.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// extsh r6,r20
	ctx.r6.s64 = ctx.r20.s16;
	// lhzx r4,r4,r27
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r27.u32);
	// addi r19,r31,12
	ctx.r19.s64 = ctx.r31.s64 + 12;
	// mulli r30,r6,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// sthx r11,r30,r3
	REX_STORE_U16(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u16);
	// sthx r4,r30,r5
	REX_STORE_U16(ctx.r30.u32 + ctx.r5.u32, ctx.r4.u16);
	// stwx r22,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r22.u32);
	// oris r3,r9,32768
	ctx.r3.u64 = ctx.r9.u64 | 2147483648;
	// stwx r25,r30,r19
	REX_STORE_U32(ctx.r30.u32 + ctx.r19.u32, ctx.r25.u32);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// ori r3,r3,256
	ctx.r3.u64 = ctx.r3.u64 | 256;
	// stwx r11,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r3,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8991b538
	ctx.lr = 0x899AD1D0;
	sub_8991B538(ctx, base);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
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
	// lwzx r22,r28,r24
	ctx.r22.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	// lhz r20,9(r29)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r29.u32 + 9);
	// lhz r19,11(r29)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r29.u32 + 11);
	// rotlwi r20,r20,16
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r20.u32, 16);
	// rotlwi r19,r19,16
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r19.u32, 16);
	// stwx r22,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r22.u32);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stwx r11,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r20,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r20.u32);
	// stwx r19,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r19.u32);
	// sthx r4,r30,r6
	REX_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r4.u16);
	// stwx r25,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r25.u32);
	// bl 0x8991c578
	ctx.lr = 0x899AD228;
	sub_8991C578(ctx, base);
	// lbz r10,13(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 13);
	// addi r8,r31,206
	ctx.r8.s64 = ctx.r31.s64 + 206;
	// lbz r6,14(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + 14);
	// addi r4,r26,1
	ctx.r4.s64 = ctx.r26.s64 + 1;
	// lbz r5,15(r29)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + 15);
	// addi r26,r31,200
	ctx.r26.s64 = ctx.r31.s64 + 200;
	// lhz r3,17(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 17);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lbz r22,19(r29)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r29.u32 + 19);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// lbzu r9,20(r29)
	ea = 20 + ctx.r29.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// stbx r10,r30,r8
	REX_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r20,r31,68
	ctx.r20.s64 = ctx.r31.s64 + 68;
	// addi r19,r31,44
	ctx.r19.s64 = ctx.r31.s64 + 44;
	// addi r18,r31,104
	ctx.r18.s64 = ctx.r31.s64 + 104;
	// lbzx r8,r28,r21
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r21.u32);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r31,204
	ctx.r8.s64 = ctx.r31.s64 + 204;
	// stbx r7,r30,r26
	REX_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r7.u8);
	// addi r26,r31,194
	ctx.r26.s64 = ctx.r31.s64 + 194;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// clrlwi r21,r11,16
	ctx.r21.u64 = ctx.r11.u32 & 0xFFFF;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbzx r8,r28,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r8.u32);
	// addi r7,r31,204
	ctx.r7.s64 = ctx.r31.s64 + 204;
	// stbx r6,r30,r4
	REX_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r6.u8);
	// addi r6,r31,64
	ctx.r6.s64 = ctx.r31.s64 + 64;
	// addi r4,r31,66
	ctx.r4.s64 = ctx.r31.s64 + 66;
	// stbx r5,r30,r26
	REX_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r5.u8);
	// cmplwi cr6,r21,33
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 33, ctx.xer);
	// sthx r3,r30,r6
	REX_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r3.u16);
	// stbx r22,r30,r4
	REX_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r22.u8);
	// stbx r8,r30,r7
	REX_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r8.u8);
	// stbx r9,r30,r20
	REX_STORE_U8(ctx.r30.u32 + ctx.r20.u32, ctx.r9.u8);
	// stwx r10,r30,r19
	REX_STORE_U32(ctx.r30.u32 + ctx.r19.u32, ctx.r10.u32);
	// stwx r23,r30,r18
	REX_STORE_U32(ctx.r30.u32 + ctx.r18.u32, ctx.r23.u32);
	// stw r23,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// blt cr6,0x899ad154
	if (ctx.cr6.lt) goto loc_899AD154;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x899340e8
	ctx.lr = 0x899AD2C8;
	sub_899340E8(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r25,12342(r10)
	REX_STORE_U8(ctx.r10.u32 + 12342, ctx.r25.u8);
	// stb r25,32555(r9)
	REX_STORE_U8(ctx.r9.u32 + 32555, ctx.r25.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899AD2E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899AF3F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899AF400;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// mulli r31,r3,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(208));
	// addi r6,r30,188
	ctx.r6.s64 = ctx.r30.s64 + 188;
	// lbzx r7,r31,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x899af69c
	if (ctx.cr6.lt) goto loc_899AF69C;
	// beq cr6,0x899af500
	if (ctx.cr6.eq) goto loc_899AF500;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bge cr6,0x899af7a0
	if (!ctx.cr6.lt) goto loc_899AF7A0;
	// addi r8,r30,189
	ctx.r8.s64 = ctx.r30.s64 + 189;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x899af4d4
	if (ctx.cr6.lt) goto loc_899AF4D4;
	// beq cr6,0x899af4a0
	if (ctx.cr6.eq) goto loc_899AF4A0;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x899af7a0
	if (!ctx.cr6.lt) goto loc_899AF7A0;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x899af470
	if (!ctx.cr6.gt) goto loc_899AF470;
	// addi r11,r11,-512
	ctx.r11.s64 = ctx.r11.s64 + -512;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_899AF470:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899af7a0
	if (ctx.cr6.gt) goto loc_899AF7A0;
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
	// b 0x899af7a0
	goto loc_899AF7A0;
loc_899AF4A0:
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
	// blt cr6,0x899af7a0
	if (ctx.cr6.lt) goto loc_899AF7A0;
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
	// b 0x899af7a0
	goto loc_899AF7A0;
loc_899AF4D4:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
	// lbzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r9,r4,50
	ctx.r9.u64 = ctx.r4.u64 | 50;
	// ori r8,r3,63
	ctx.r8.u64 = ctx.r3.u64 | 63;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// b 0x899af7a0
	goto loc_899AF7A0;
loc_899AF500:
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
	// bgt cr6,0x899af7a0
	if (ctx.cr6.gt) goto loc_899AF7A0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899af5b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AF5B0;
	// bdzf 4*cr6+eq,0x899af620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AF620;
	// bne cr6,0x899af65c
	if (!ctx.cr6.eq) goto loc_899AF65C;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8991d830
	ctx.lr = 0x899AF54C;
	sub_8991D830(ctx, base);
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lbzx r3,r31,r29
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// addi r7,r30,104
	ctx.r7.s64 = ctx.r30.s64 + 104;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// lbzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r4,r4,48
	ctx.r4.u64 = ctx.r4.u64 | 48;
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// lwzx r28,r31,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r3,r31,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// subf r9,r9,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r9.u64;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// subf r7,r3,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r3.u64;
	// srawi r3,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 7;
	// srawi r10,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 7;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// b 0x899af7a0
	goto loc_899AF7A0;
loc_899AF5B0:
	// addi r7,r30,183
	ctx.r7.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u8);
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// blt cr6,0x899af7a0
	if (ctx.cr6.lt) goto loc_899AF7A0;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// addi r6,r30,60
	ctx.r6.s64 = ctx.r30.s64 + 60;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// addi r3,r30,194
	ctx.r3.s64 = ctx.r30.s64 + 194;
	// lbzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// ori r28,r11,63
	ctx.r28.u64 = ctx.r11.u64 | 63;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// rlwinm r4,r4,0,28,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// stbx r28,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u8);
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stbx r4,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u8);
	// stbx r28,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r28.u8);
	// b 0x899af7a0
	goto loc_899AF7A0;
loc_899AF620:
	// addi r11,r30,197
	ctx.r11.s64 = ctx.r30.s64 + 197;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
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
	// bne cr6,0x899af7a0
	if (!ctx.cr6.eq) goto loc_899AF7A0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x899af7a0
	goto loc_899AF7A0;
loc_899AF65C:
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
	// blt cr6,0x899af7a0
	if (ctx.cr6.lt) goto loc_899AF7A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,3600
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3600, ctx.xer);
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// ble cr6,0x899af694
	if (!ctx.cr6.gt) goto loc_899AF694;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u8);
loc_899AF694:
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x899af7a0
	goto loc_899AF7A0;
loc_899AF69C:
	// addi r9,r30,189
	ctx.r9.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x899af788
	if (ctx.cr6.gt) goto loc_899AF788;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899af6e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AF6E8;
	// bdzf 4*cr6+eq,0x899af718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899AF718;
	// bne cr6,0x899af748
	if (!ctx.cr6.eq) goto loc_899AF748;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r8,320
	ctx.r8.s64 = 20971520;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x899af788
	if (!ctx.cr6.lt) goto loc_899AF788;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// b 0x899af788
	goto loc_899AF788;
loc_899AF6E8:
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addic. r11,r11,4096
	ctx.xer.ca = ctx.r11.u32 > 4294963199;
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// bne 0x899af788
	if (!ctx.cr0.eq) goto loc_899AF788;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r30,71
	ctx.r10.s64 = ctx.r30.s64 + 71;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,255
	ctx.r7.s64 = 255;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// b 0x899af788
	goto loc_899AF788;
loc_899AF718:
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
	// bgt cr6,0x899af788
	if (ctx.cr6.gt) goto loc_899AF788;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x899af788
	goto loc_899AF788;
loc_899AF748:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lwzx r5,r31,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// addi r8,r30,164
	ctx.r8.s64 = ctx.r30.s64 + 164;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r3,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u8);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// li r4,-127
	ctx.r4.s64 = -127;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// rlwinm r5,r5,0,3,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// or r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// add r8,r31,r30
	ctx.r8.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
loc_899AF788:
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
loc_899AF7A0:
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B2A08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x899B2A10;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r29,26864(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89934058
	ctx.lr = 0x899B2A24;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b2d04
	if (ctx.cr6.eq) goto loc_899B2D04;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8991b880
	ctx.lr = 0x899B2A34;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b2d04
	if (ctx.cr6.eq) goto loc_899B2D04;
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
	// lhz r3,-4592(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r5,r31,162
	ctx.r5.s64 = ctx.r31.s64 + 162;
	// addi r30,r31,158
	ctx.r30.s64 = ctx.r31.s64 + 158;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// lhz r11,-17120(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + -17120);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mulli r28,r6,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// sthx r11,r28,r5
	REX_STORE_U16(ctx.r28.u32 + ctx.r5.u32, ctx.r11.u16);
	// sthx r11,r28,r30
	REX_STORE_U16(ctx.r28.u32 + ctx.r30.u32, ctx.r11.u16);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// clrlwi r22,r29,16
	ctx.r22.u64 = ctx.r29.u32 & 0xFFFF;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r9,r8,260
	ctx.r9.u64 = ctx.r8.u64 | 260;
	// stwx r22,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r22.u32);
	// stwx r25,r28,r4
	REX_STORE_U32(ctx.r28.u32 + ctx.r4.u32, ctx.r25.u32);
	// addi r26,r10,-4592
	ctx.r26.s64 = ctx.r10.s64 + -4592;
	// stwx r9,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r9.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stwx r25,r28,r11
	REX_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r25.u32);
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// bl 0x8991b538
	ctx.lr = 0x899B2AA8;
	sub_8991B538(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lis r8,416
	ctx.r8.s64 = 27262976;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r8,r28,r11
	REX_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r8.u32);
	// bl 0x89915d78
	ctx.lr = 0x899B2ABC;
	sub_89915D78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991c578
	ctx.lr = 0x899B2AC4;
	sub_8991C578(ctx, base);
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// li r9,114
	ctx.r9.s64 = 114;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// stbx r9,r28,r10
	REX_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r9.u8);
	// lis r5,-2
	ctx.r5.s64 = -131072;
	// stbx r9,r28,r11
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r9.u8);
	// li r4,256
	ctx.r4.s64 = 256;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// sthx r4,r28,r30
	REX_STORE_U16(ctx.r28.u32 + ctx.r30.u32, ctx.r4.u16);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stwx r5,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r5.u32);
	// stwx r25,r28,r6
	REX_STORE_U32(ctx.r28.u32 + ctx.r6.u32, ctx.r25.u32);
	// li r24,64
	ctx.r24.s64 = 64;
	// ori r23,r9,256
	ctx.r23.u64 = ctx.r9.u64 | 256;
	// addi r29,r10,-4112
	ctx.r29.s64 = ctx.r10.s64 + -4112;
	// b 0x899b2b18
	goto loc_899B2B18;
loc_899B2B14:
	// lwz r22,80(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_899B2B18:
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r27,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r27,r10
	ctx.r7.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r6,r26,2
	ctx.r6.s64 = ctx.r26.s64 + 2;
	// rlwinm r21,r7,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r29,6
	ctx.r5.s64 = ctx.r29.s64 + 6;
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// addi r10,r31,150
	ctx.r10.s64 = ctx.r31.s64 + 150;
	// lhzx r20,r8,r6
	ctx.r20.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// lhzx r7,r21,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r9.u32);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// extsh r3,r20
	ctx.r3.s64 = ctx.r20.s16;
	// lwzx r9,r21,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r29.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lbzx r5,r21,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r5.u32);
	// mulli r30,r3,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(208));
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r19,r31,12
	ctx.r19.s64 = ctx.r31.s64 + 12;
	// or r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 | ctx.r23.u64;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lhzx r7,r7,r26
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r26.u32);
	// sthx r11,r30,r10
	REX_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u16);
	// stwx r9,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r22,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r22.u32);
	// stwx r5,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// sthx r7,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r7.u16);
	// stwx r25,r30,r19
	REX_STORE_U32(ctx.r30.u32 + ctx.r19.u32, ctx.r25.u32);
	// bl 0x8991b538
	ctx.lr = 0x899B2B9C;
	sub_8991B538(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// addi r5,r29,10
	ctx.r5.s64 = ctx.r29.s64 + 10;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// addi r22,r31,158
	ctx.r22.s64 = ctx.r31.s64 + 158;
	// addi r19,r31,164
	ctx.r19.s64 = ctx.r31.s64 + 164;
	// li r18,256
	ctx.r18.s64 = 256;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lhzx r6,r21,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r6.u32);
	// lhzx r5,r21,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r5.u32);
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// stwx r11,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u32);
	// lwzx r4,r28,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// stwx r4,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r4.u32);
	// stwx r6,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r5,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r5.u32);
	// sthx r18,r30,r22
	REX_STORE_U16(ctx.r30.u32 + ctx.r22.u32, ctx.r18.u16);
	// stwx r25,r30,r19
	REX_STORE_U32(ctx.r30.u32 + ctx.r19.u32, ctx.r25.u32);
	// bl 0x8991c578
	ctx.lr = 0x899B2C00;
	sub_8991C578(ctx, base);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// addi r9,r31,206
	ctx.r9.s64 = ctx.r31.s64 + 206;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// addi r8,r29,13
	ctx.r8.s64 = ctx.r29.s64 + 13;
	// addi r7,r29,16
	ctx.r7.s64 = ctx.r29.s64 + 16;
	// lbzx r6,r21,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r3.u32);
	// addi r5,r29,14
	ctx.r5.s64 = ctx.r29.s64 + 14;
	// addi r4,r29,18
	ctx.r4.s64 = ctx.r29.s64 + 18;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lbzx r8,r21,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r8.u32);
	// lhzx r7,r21,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r7.u32);
	// addi r22,r31,200
	ctx.r22.s64 = ctx.r31.s64 + 200;
	// stbx r6,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u8);
	// addi r6,r31,204
	ctx.r6.s64 = ctx.r31.s64 + 204;
	// lbzx r5,r21,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r5.u32);
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// lbzx r4,r21,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r4.u32);
	// addi r20,r31,160
	ctx.r20.s64 = ctx.r31.s64 + 160;
	// lhzx r3,r21,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r3.u32);
	// addi r19,r29,22
	ctx.r19.s64 = ctx.r29.s64 + 22;
	// lbzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// add r18,r11,r10
	ctx.r18.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwz r17,84(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lbzx r21,r21,r19
	ctx.r21.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r19.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// std r31,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// addi r19,r31,194
	ctx.r19.s64 = ctx.r31.s64 + 194;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// addi r16,r31,68
	ctx.r16.s64 = ctx.r31.s64 + 68;
	// stbx r27,r30,r22
	REX_STORE_U8(ctx.r30.u32 + ctx.r22.u32, ctx.r27.u8);
	// addi r15,r31,64
	ctx.r15.s64 = ctx.r31.s64 + 64;
	// lbzx r27,r28,r17
	ctx.r27.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r17.u32);
	// addi r14,r31,66
	ctx.r14.s64 = ctx.r31.s64 + 66;
	// stbx r8,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r18,r11,16
	ctx.r18.u64 = ctx.r11.u32 & 0xFFFF;
	// stbx r27,r30,r6
	REX_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r27.u8);
	// stwx r24,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r24.u32);
	// cmplwi cr6,r18,25
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 25, ctx.xer);
	// ld r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// sthx r7,r30,r20
	REX_STORE_U16(ctx.r30.u32 + ctx.r20.u32, ctx.r7.u16);
	// stbx r5,r30,r19
	REX_STORE_U8(ctx.r30.u32 + ctx.r19.u32, ctx.r5.u8);
	// stbx r4,r30,r16
	REX_STORE_U8(ctx.r30.u32 + ctx.r16.u32, ctx.r4.u8);
	// sthx r3,r30,r15
	REX_STORE_U16(ctx.r30.u32 + ctx.r15.u32, ctx.r3.u16);
	// stbx r21,r30,r14
	REX_STORE_U8(ctx.r30.u32 + ctx.r14.u32, ctx.r21.u8);
	// stwx r10,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// blt cr6,0x899b2b14
	if (ctx.cr6.lt) goto loc_899B2B14;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x899340e8
	ctx.lr = 0x899B2CE4;
	sub_899340E8(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r25,12342(r10)
	REX_STORE_U8(ctx.r10.u32 + 12342, ctx.r25.u8);
	// stb r25,32555(r9)
	REX_STORE_U8(ctx.r9.u32 + 32555, ctx.r25.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_899B2D04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B5450) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899B5458;
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
	// lwzx r29,r31,r30
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,207
	ctx.r8.s64 = ctx.r30.s64 + 207;
	// addi r7,r30,200
	ctx.r7.s64 = ctx.r30.s64 + 200;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r25,r31,r27
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r24,r31,r26
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// lbzx r5,r31,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// bgt cr6,0x899b569c
	if (ctx.cr6.gt) goto loc_899B569C;
	// lis r12,-30309
	ctx.r12.s64 = -1986330624;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,21688
	ctx.r12.s64 = ctx.r12.s64 + 21688;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899B54EC;
	case 1:
		goto loc_899B5548;
	case 2:
		goto loc_899B569C;
	case 3:
		goto loc_899B569C;
	case 4:
		goto loc_899B569C;
	case 5:
		goto loc_899B5554;
	case 6:
		goto loc_899B569C;
	case 7:
		goto loc_899B569C;
	case 8:
		goto loc_899B569C;
	case 9:
		goto loc_899B5644;
	case 10:
		goto loc_899B5644;
	case 11:
		goto loc_899B569C;
	case 12:
		goto loc_899B5580;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899B54EC:
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// addi r7,r30,94
	ctx.r7.s64 = ctx.r30.s64 + 94;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,88
	ctx.r9.s64 = ctx.r30.s64 + 88;
	// lbzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// addi r6,r30,96
	ctx.r6.s64 = ctx.r30.s64 + 96;
	// sthx r11,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u16);
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// ori r12,r12,32767
	ctx.r12.u64 = ctx.r12.u64 | 32767;
	// addi r8,r8,-2560
	ctx.r8.s64 = ctx.r8.s64 + -2560;
	// and r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 & ctx.r12.u64;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// clrlwi r7,r5,25
	ctx.r7.u64 = ctx.r5.u32 & 0x7F;
	// stwx r8,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// sthx r11,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u16);
	// sthx r11,r31,r3
	REX_STORE_U16(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u16);
	// stwx r29,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r29.u32);
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899B5548:
	// bl 0x899a9638
	ctx.lr = 0x899B554C;
	sub_899A9638(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899B5554:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4c10
	ctx.lr = 0x899B5570;
	sub_899D4C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899B5580:
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// lis r10,-30296
	ctx.r10.s64 = -1985478656;
	// lwz r11,-9212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// addi r28,r10,-26960
	ctx.r28.s64 = ctx.r10.s64 + -26960;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lbz r5,7935(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 7935);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r11.u32);
	// srawi r3,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 16;
	// clrlwi r29,r3,17
	ctx.r29.u64 = ctx.r3.u32 & 0x7FFF;
	// bne cr6,0x899b55e8
	if (!ctx.cr6.eq) goto loc_899B55E8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899cda68
	ctx.lr = 0x899B55E8;
	sub_899CDA68(ctx, base);
loc_899B55E8:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899cda68
	ctx.lr = 0x899B5604;
	sub_899CDA68(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// lwzx r6,r31,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// li r9,116
	ctx.r9.s64 = 116;
	// lwzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// li r4,27
	ctx.r4.s64 = 27;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x899d5650
	ctx.lr = 0x899B562C;
	sub_899D5650(ctx, base);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x89936360
	ctx.lr = 0x899B5634;
	sub_89936360(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899B5644:
	// bl 0x8991b9f0
	ctx.lr = 0x899B5648;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899b5680
	if (ctx.cr6.lt) goto loc_899B5680;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,196
	ctx.r9.s64 = ctx.r30.s64 + 196;
	// addi r10,r30,197
	ctx.r10.s64 = ctx.r30.s64 + 197;
	// addi r7,r30,192
	ctx.r7.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// stbx r3,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u8);
	// lbzx r3,r31,r7
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// or r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_899B5680:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899d4440
	ctx.lr = 0x899B569C;
	sub_899D4440(ctx, base);
loc_899B569C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899B74C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x899B74C8;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// li r3,21
	ctx.r3.s64 = 21;
	// stw r4,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x89934058
	ctx.lr = 0x899B74E8;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b78a8
	if (ctx.cr6.eq) goto loc_899B78A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b968
	ctx.lr = 0x899B74F8;
	sub_8991B968(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b78a8
	if (ctx.cr6.eq) goto loc_899B78A8;
	// bl 0x899d80c0
	ctx.lr = 0x899B7504;
	sub_899D80C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899b78a8
	if (ctx.cr6.eq) goto loc_899B78A8;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r28,r29
	ctx.r28.s64 = ctx.r29.s16;
	// lis r10,-16208
	ctx.r10.s64 = -1062207488;
	// addi r9,r28,8
	ctx.r9.s64 = ctx.r28.s64 + 8;
	// ori r7,r10,4
	ctx.r7.u64 = ctx.r10.u64 | 4;
	// lwz r3,6056(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// srawi r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// li r30,21
	ctx.r30.s64 = 21;
	// clrlwi r6,r8,27
	ctx.r6.u64 = ctx.r8.u32 & 0x1F;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// bl 0x8991b6a0
	ctx.lr = 0x899B754C;
	sub_8991B6A0(ctx, base);
	// stw r27,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r27.u32);
	// stw r26,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r26.u32);
	// bl 0x8991c610
	ctx.lr = 0x899B7558;
	sub_8991C610(ctx, base);
	// lis r4,-30320
	ctx.r4.s64 = -1987051520;
	// addi r5,r28,128
	ctx.r5.s64 = ctx.r28.s64 + 128;
	// sth r29,158(r3)
	REX_STORE_U16(ctx.r3.u32 + 158, ctx.r29.u16);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r6,r4,9016
	ctx.r6.s64 = ctx.r4.s64 + 9016;
	// rlwinm r5,r5,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r4,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// addi r10,r10,7904
	ctx.r10.s64 = ctx.r10.s64 + 7904;
	// rlwinm r4,r29,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// li r7,116
	ctx.r7.s64 = 116;
	// addi r8,r3,96
	ctx.r8.s64 = ctx.r3.s64 + 96;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lhzx r11,r5,r6
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r10,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lhzx r10,r4,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r7,204(r3)
	REX_STORE_U8(ctx.r3.u32 + 204, ctx.r7.u8);
	// stb r7,200(r3)
	REX_STORE_U8(ctx.r3.u32 + 200, ctx.r7.u8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r31,92(r3)
	REX_STORE_U16(ctx.r3.u32 + 92, ctx.r31.u16);
	// rlwinm r6,r7,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// addi r7,r7,11976
	ctx.r7.s64 = ctx.r7.s64 + 11976;
	// stw r5,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
loc_899B75EC:
	// lwz r22,4(r9)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// lwz r21,100(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r11,r11,32896
	ctx.r11.u64 = ctx.r11.u64 | 32896;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r31,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r31.u8);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r22,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r22.u32);
	// rotlwi r23,r11,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// clrlwi r26,r31,24
	ctx.r26.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,4(r22)
	REX_STORE_U32(ctx.r22.u32 + 4, ctx.r30.u32);
	// rotlwi r24,r31,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// lwz r11,680(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 680);
	// lis r6,512
	ctx.r6.s64 = 33554432;
	// stw r11,20(r22)
	REX_STORE_U32(ctx.r22.u32 + 20, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,676(r21)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + 676);
	// rotlwi r30,r8,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stb r31,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r29,r7,4
	ctx.r29.s64 = ctx.r7.s64 + 4;
	// stb r31,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r31.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lis r25,128
	ctx.r25.s64 = 8388608;
	// stw r6,28(r22)
	REX_STORE_U32(ctx.r22.u32 + 28, ctx.r6.u32);
	// li r6,21
	ctx.r6.s64 = 21;
	// stb r4,77(r22)
	REX_STORE_U8(ctx.r22.u32 + 77, ctx.r4.u8);
	// stb r26,76(r22)
	REX_STORE_U8(ctx.r22.u32 + 76, ctx.r26.u8);
	// stw r11,12(r22)
	REX_STORE_U32(ctx.r22.u32 + 12, ctx.r11.u32);
	// stw r11,32(r22)
	REX_STORE_U32(ctx.r22.u32 + 32, ctx.r11.u32);
	// stw r11,40(r22)
	REX_STORE_U32(ctx.r22.u32 + 40, ctx.r11.u32);
	// stw r11,36(r22)
	REX_STORE_U32(ctx.r22.u32 + 36, ctx.r11.u32);
	// stb r11,79(r22)
	REX_STORE_U8(ctx.r22.u32 + 79, ctx.r11.u8);
	// stb r11,80(r22)
	REX_STORE_U8(ctx.r22.u32 + 80, ctx.r11.u8);
	// stb r31,78(r22)
	REX_STORE_U8(ctx.r22.u32 + 78, ctx.r31.u8);
	// stw r30,16(r22)
	REX_STORE_U32(ctx.r22.u32 + 16, ctx.r30.u32);
	// stw r24,44(r22)
	REX_STORE_U32(ctx.r22.u32 + 44, ctx.r24.u32);
	// stw r23,48(r22)
	REX_STORE_U32(ctx.r22.u32 + 48, ctx.r23.u32);
	// stw r5,8(r22)
	REX_STORE_U32(ctx.r22.u32 + 8, ctx.r5.u32);
	// stw r9,64(r22)
	REX_STORE_U32(ctx.r22.u32 + 64, ctx.r9.u32);
	// lhz r4,154(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 154);
	// sth r4,72(r22)
	REX_STORE_U16(ctx.r22.u32 + 72, ctx.r4.u16);
	// lwz r31,8(r8)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r31,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r31.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r21,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r21.u32, 0);
	// stw r6,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stb r11,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// addi r26,r10,4
	ctx.r26.s64 = ctx.r10.s64 + 4;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r11,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// lwz r4,680(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 680);
	// stw r4,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r4,r4,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// stw r4,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stb r11,78(r31)
	REX_STORE_U8(ctx.r31.u32 + 78, ctx.r11.u8);
	// stb r11,77(r31)
	REX_STORE_U8(ctx.r31.u32 + 77, ctx.r11.u8);
	// stb r11,76(r31)
	REX_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r27,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stb r11,79(r31)
	REX_STORE_U8(ctx.r31.u32 + 79, ctx.r11.u8);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stb r11,80(r31)
	REX_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// stw r9,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// ori r11,r25,32896
	ctx.r11.u64 = ctx.r25.u64 | 32896;
	// lhz r3,154(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 154);
	// addi r29,r10,4
	ctx.r29.s64 = ctx.r10.s64 + 4;
	// sth r3,72(r31)
	REX_STORE_U16(ctx.r31.u32 + 72, ctx.r3.u16);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,12(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r5.u32);
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// stw r28,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// stw r6,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r24,-32768
	ctx.r24.s64 = -2147483648;
	// lbz r3,97(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// li r30,21
	ctx.r30.s64 = 21;
	// lbz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r27,98(r1)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// lwz r11,680(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 680);
	// stw r11,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// stb r3,78(r5)
	REX_STORE_U8(ctx.r5.u32 + 78, ctx.r3.u8);
	// rotlwi r3,r4,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r8,77(r5)
	REX_STORE_U8(ctx.r5.u32 + 77, ctx.r8.u8);
	// stb r27,76(r5)
	REX_STORE_U8(ctx.r5.u32 + 76, ctx.r27.u8);
	// stw r7,44(r5)
	REX_STORE_U32(ctx.r5.u32 + 44, ctx.r7.u32);
	// rotlwi r7,r21,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r21.u32, 0);
	// stw r3,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r3.u32);
	// stw r6,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// stw r31,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r31.u32);
	// stw r9,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r9.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r31.u32);
	// stw r31,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r31.u32);
	// stw r31,36(r5)
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r31.u32);
	// stb r31,79(r5)
	REX_STORE_U8(ctx.r5.u32 + 79, ctx.r31.u8);
	// stb r31,80(r5)
	REX_STORE_U8(ctx.r5.u32 + 80, ctx.r31.u8);
	// stw r10,64(r5)
	REX_STORE_U32(ctx.r5.u32 + 64, ctx.r10.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lhz r11,154(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 154);
	// sth r11,72(r5)
	REX_STORE_U16(ctx.r5.u32 + 72, ctx.r11.u16);
	// lwzu r11,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,16(r8)
	ea = 16 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r5,680(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 680);
	// stw r5,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r3,r5,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r5,r3,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stb r31,78(r11)
	REX_STORE_U8(ctx.r11.u32 + 78, ctx.r31.u8);
	// stb r31,77(r11)
	REX_STORE_U8(ctx.r11.u32 + 77, ctx.r31.u8);
	// stb r31,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r31.u8);
	// stw r31,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
	// stw r4,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r25,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r25.u32);
	// stw r31,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// stw r31,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stb r31,79(r11)
	REX_STORE_U8(ctx.r11.u32 + 79, ctx.r31.u8);
	// stb r31,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r31.u8);
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lhz r4,154(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 154);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// sth r4,72(r11)
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r4.u16);
	// bdnz 0x899b75ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899B75EC;
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,244(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// ori r7,r11,32896
	ctx.r7.u64 = ctx.r11.u64 | 32896;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r8,116
	ctx.r8.s64 = 116;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x899d7d20
	ctx.lr = 0x899B7894;
	sub_899D7D20(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x89936360
	ctx.lr = 0x899B789C;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899B78A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BD298) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899BD2A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1104(r1)
	ea = -1104 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,-28662
	ctx.r8.s64 = -28662;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,96
	ctx.r10.s64 = 96;
	// li r9,112
	ctx.r9.s64 = 112;
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
	// li r3,54
	ctx.r3.s64 = 54;
	// bl 0x89934860
	ctx.lr = 0x899BD2D8;
	sub_89934860(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30225
	ctx.r10.s64 = -1980825600;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,23852
	ctx.r29.s64 = ctx.r11.s64 + 23852;
	// addi r30,r10,19384
	ctx.r30.s64 = ctx.r10.s64 + 19384;
loc_899BD2EC:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r5,r31,r10
	ctx.r5.u64 = ctx.r31.u64 + ctx.r10.u64;
loc_899BD2F8:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r7,r30,-976
	ctx.r7.s64 = ctx.r30.s64 + -976;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
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
loc_899BD344:
	// lhzu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x899bd344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899BD344;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x899bd2f8
	if (ctx.cr6.lt) goto loc_899BD2F8;
	// addi r9,r30,-976
	ctx.r9.s64 = ctx.r30.s64 + -976;
	// mulli r10,r31,162
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(162));
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
	// bl 0x89935700
	ctx.lr = 0x899BD388;
	sub_89935700(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x899bd2ec
	if (ctx.cr6.lt) goto loc_899BD2EC;
	// addi r1,r1,1104
	ctx.r1.s64 = ctx.r1.s64 + 1104;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BDEA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899BDEB0;
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
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x89934b48
	ctx.lr = 0x899BDEF0;
	sub_89934B48(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30225
	ctx.r10.s64 = -1980825600;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r29,r11,23540
	ctx.r29.s64 = ctx.r11.s64 + 23540;
	// addi r30,r10,26176
	ctx.r30.s64 = ctx.r10.s64 + 26176;
loc_899BDF04:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_899BDF10:
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
loc_899BDF58:
	// lhzu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x899bdf58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899BDF58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899bdf10
	if (ctx.cr6.lt) goto loc_899BDF10;
	// addi r8,r30,-920
	ctx.r8.s64 = ctx.r30.s64 + -920;
	// addi r10,r30,-2112
	ctx.r10.s64 = ctx.r30.s64 + -2112;
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
	ctx.lr = 0x899BDFA0;
	sub_89935B08(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x899bdf04
	if (ctx.cr6.lt) goto loc_899BDF04;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r29,r10,1036
	ctx.r29.s64 = ctx.r10.s64 + 1036;
	// lbz r9,1036(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1036);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899be024
	if (ctx.cr6.eq) goto loc_899BE024;
	// li r28,4
	ctx.r28.s64 = 4;
loc_899BDFD0:
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// lbz r10,1(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// li r8,-20
	ctx.r8.s64 = -20;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,-20
	ctx.r7.s64 = -20;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,40
	ctx.r5.s64 = 40;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899BE00C;
	sub_89934FB8(ctx, base);
	// lbzu r9,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899bdfd0
	if (!ctx.cr6.eq) goto loc_899BDFD0;
loc_899BE024:
	// lis r11,-30225
	ctx.r11.s64 = -1980825600;
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// addi r11,r11,26256
	ctx.r11.s64 = ctx.r11.s64 + 26256;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r9,r9,3484
	ctx.r9.s64 = ctx.r9.s64 + 3484;
loc_899BE038:
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
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x899be038
	if (ctx.cr6.lt) goto loc_899BE038;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BE7F0) {
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
	ctx.lr = 0x899BE808;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899be824
	if (!ctx.cr6.eq) goto loc_899BE824;
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
loc_899BE824:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,-6448
	ctx.r3.s64 = ctx.r11.s64 + -6448;
	// bl 0x89915de0
	ctx.lr = 0x899BE830;
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

DEFINE_REX_FUNC(sub_899BEAC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899BEAD0;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// li r3,35
	ctx.r3.s64 = 35;
	// stw r4,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x89934058
	ctx.lr = 0x899BEAF0;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899beee8
	if (ctx.cr6.eq) goto loc_899BEEE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b968
	ctx.lr = 0x899BEB00;
	sub_8991B968(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899beee8
	if (ctx.cr6.eq) goto loc_899BEEE8;
	// bl 0x899d80c0
	ctx.lr = 0x899BEB0C;
	sub_899D80C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899beee8
	if (ctx.cr6.eq) goto loc_899BEEE8;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-16208
	ctx.r10.s64 = -1062207488;
	// li r9,35
	ctx.r9.s64 = 35;
	// lwz r3,6056(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// bl 0x8991b6a0
	ctx.lr = 0x899BEB40;
	sub_8991B6A0(ctx, base);
	// stw r29,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// stw r28,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r28.u32);
	// bl 0x8991c610
	ctx.lr = 0x899BEB4C;
	sub_8991C610(ctx, base);
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwinm r5,r7,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r6,r8,9016
	ctx.r6.s64 = ctx.r8.s64 + 9016;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r4,256
	ctx.r4.s64 = 256;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// stw r10,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// stw r10,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// sth r4,158(r3)
	REX_STORE_U16(ctx.r3.u32 + 158, ctx.r4.u16);
	// addi r10,r9,7904
	ctx.r10.s64 = ctx.r9.s64 + 7904;
	// rlwinm r4,r30,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// li r7,116
	ctx.r7.s64 = 116;
	// addi r8,r3,96
	ctx.r8.s64 = ctx.r3.s64 + 96;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lhzx r11,r5,r6
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r10,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lhzx r10,r4,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r7,204(r3)
	REX_STORE_U8(ctx.r3.u32 + 204, ctx.r7.u8);
	// stb r7,200(r3)
	REX_STORE_U8(ctx.r3.u32 + 200, ctx.r7.u8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r31,92(r3)
	REX_STORE_U16(ctx.r3.u32 + 92, ctx.r31.u16);
	// rlwinm r6,r7,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// addi r7,r7,11976
	ctx.r7.s64 = ctx.r7.s64 + 11976;
	// stw r5,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// li r5,21
	ctx.r5.s64 = 21;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
loc_899BEBF0:
	// lwz r23,4(r9)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// lwz r22,100(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r11,r11,32896
	ctx.r11.u64 = ctx.r11.u64 | 32896;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r31,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r31.u8);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r23,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r23.u32);
	// rotlwi r24,r11,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// clrlwi r26,r31,24
	ctx.r26.u64 = ctx.r31.u32 & 0xFF;
	// stw r5,4(r23)
	REX_STORE_U32(ctx.r23.u32 + 4, ctx.r5.u32);
	// rotlwi r25,r31,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// lwz r11,680(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 680);
	// lis r6,512
	ctx.r6.s64 = 33554432;
	// stw r11,20(r23)
	REX_STORE_U32(ctx.r23.u32 + 20, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,676(r22)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + 676);
	// rotlwi r22,r8,0
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stb r31,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r30,r7,4
	ctx.r30.s64 = ctx.r7.s64 + 4;
	// stb r31,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r31.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lis r27,128
	ctx.r27.s64 = 8388608;
	// stw r6,28(r23)
	REX_STORE_U32(ctx.r23.u32 + 28, ctx.r6.u32);
	// li r6,21
	ctx.r6.s64 = 21;
	// stb r4,77(r23)
	REX_STORE_U8(ctx.r23.u32 + 77, ctx.r4.u8);
	// stb r26,76(r23)
	REX_STORE_U8(ctx.r23.u32 + 76, ctx.r26.u8);
	// stw r11,12(r23)
	REX_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// stw r11,32(r23)
	REX_STORE_U32(ctx.r23.u32 + 32, ctx.r11.u32);
	// stw r11,40(r23)
	REX_STORE_U32(ctx.r23.u32 + 40, ctx.r11.u32);
	// stw r11,36(r23)
	REX_STORE_U32(ctx.r23.u32 + 36, ctx.r11.u32);
	// stb r11,79(r23)
	REX_STORE_U8(ctx.r23.u32 + 79, ctx.r11.u8);
	// stb r11,80(r23)
	REX_STORE_U8(ctx.r23.u32 + 80, ctx.r11.u8);
	// stb r31,78(r23)
	REX_STORE_U8(ctx.r23.u32 + 78, ctx.r31.u8);
	// stw r22,16(r23)
	REX_STORE_U32(ctx.r23.u32 + 16, ctx.r22.u32);
	// stw r25,44(r23)
	REX_STORE_U32(ctx.r23.u32 + 44, ctx.r25.u32);
	// stw r24,48(r23)
	REX_STORE_U32(ctx.r23.u32 + 48, ctx.r24.u32);
	// stw r5,8(r23)
	REX_STORE_U32(ctx.r23.u32 + 8, ctx.r5.u32);
	// stw r9,64(r23)
	REX_STORE_U32(ctx.r23.u32 + 64, ctx.r9.u32);
	// lhz r4,154(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 154);
	// sth r4,72(r23)
	REX_STORE_U16(ctx.r23.u32 + 72, ctx.r4.u16);
	// lwz r31,8(r8)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r31,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r31.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r6,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stb r11,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// addi r26,r10,4
	ctx.r26.s64 = ctx.r10.s64 + 4;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r11,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// lwz r4,680(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 680);
	// stw r4,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r4,r4,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// stw r4,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stb r11,78(r31)
	REX_STORE_U8(ctx.r31.u32 + 78, ctx.r11.u8);
	// stb r11,77(r31)
	REX_STORE_U8(ctx.r31.u32 + 77, ctx.r11.u8);
	// stb r11,76(r31)
	REX_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r28,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stb r11,79(r31)
	REX_STORE_U8(ctx.r31.u32 + 79, ctx.r11.u8);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stb r11,80(r31)
	REX_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// stw r9,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// ori r11,r27,32896
	ctx.r11.u64 = ctx.r27.u64 | 32896;
	// lhz r3,154(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 154);
	// addi r28,r10,4
	ctx.r28.s64 = ctx.r10.s64 + 4;
	// sth r3,72(r31)
	REX_STORE_U16(ctx.r31.u32 + 72, ctx.r3.u16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,12(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r4,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r4.u32);
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// stw r6,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r24,-32768
	ctx.r24.s64 = -2147483648;
	// lbz r8,97(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// li r5,21
	ctx.r5.s64 = 21;
	// lbz r30,96(r1)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r27,98(r1)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// lwz r11,680(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 680);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// stb r8,78(r4)
	REX_STORE_U8(ctx.r4.u32 + 78, ctx.r8.u8);
	// stb r30,77(r4)
	REX_STORE_U8(ctx.r4.u32 + 77, ctx.r30.u8);
	// stb r27,76(r4)
	REX_STORE_U8(ctx.r4.u32 + 76, ctx.r27.u8);
	// stw r7,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r7.u32);
	// stw r11,48(r4)
	REX_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// stw r31,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// stw r9,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r9.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r31.u32);
	// stw r31,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r31.u32);
	// stw r31,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r31.u32);
	// stb r31,79(r4)
	REX_STORE_U8(ctx.r4.u32 + 79, ctx.r31.u8);
	// stb r31,80(r4)
	REX_STORE_U8(ctx.r4.u32 + 80, ctx.r31.u8);
	// stw r10,64(r4)
	REX_STORE_U32(ctx.r4.u32 + 64, ctx.r10.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r11,154(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 154);
	// sth r11,72(r4)
	REX_STORE_U16(ctx.r4.u32 + 72, ctx.r11.u16);
	// lwzu r11,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,16(r8)
	ea = 16 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r4,680(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 680);
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r4,r4,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// stb r31,78(r11)
	REX_STORE_U8(ctx.r11.u32 + 78, ctx.r31.u8);
	// stb r31,77(r11)
	REX_STORE_U8(ctx.r11.u32 + 77, ctx.r31.u8);
	// stb r31,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r31.u8);
	// stw r31,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
	// stw r3,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r25,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r25.u32);
	// stw r31,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// stw r31,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stb r31,79(r11)
	REX_STORE_U8(ctx.r11.u32 + 79, ctx.r31.u8);
	// stb r31,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r31.u8);
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lhz r3,154(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 154);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// sth r3,72(r11)
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r3.u16);
	// bdnz 0x899bebf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899BEBF0;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r5,244(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lis r4,16838
	ctx.r4.s64 = 1103495168;
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lis r3,64
	ctx.r3.s64 = 4194304;
	// ori r7,r4,20077
	ctx.r7.u64 = ctx.r4.u64 | 20077;
	// ori r4,r3,49216
	ctx.r4.u64 = ctx.r3.u64 | 49216;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r8,116
	ctx.r8.s64 = 116;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// addis r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -262144;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r10,r11,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r10,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFF;
	// addi r10,r11,-8192
	ctx.r10.s64 = ctx.r11.s64 + -8192;
	// bl 0x899d7d20
	ctx.lr = 0x899BEED4;
	sub_899D7D20(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x89936360
	ctx.lr = 0x899BEEDC;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899BEEE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C1D28) {
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
	ctx.lr = 0x899C1D40;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c1d5c
	if (!ctx.cr6.eq) goto loc_899C1D5C;
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
loc_899C1D5C:
	// lis r11,-30308
	ctx.r11.s64 = -1986265088;
	// addi r3,r11,7176
	ctx.r3.s64 = ctx.r11.s64 + 7176;
	// bl 0x89915de0
	ctx.lr = 0x899C1D68;
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

DEFINE_REX_FUNC(sub_899C1F30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899C1F38;
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
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934860
	ctx.lr = 0x899C1F70;
	sub_89934860(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,208
	ctx.r9.s64 = 208;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// li r8,-26
	ctx.r8.s64 = -26;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x899352b8
	ctx.lr = 0x899C1FA4;
	sub_899352B8(ctx, base);
	// addi r6,r1,546
	ctx.r6.s64 = ctx.r1.s64 + 546;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r9,208
	ctx.r9.s64 = 208;
	// li r8,-26
	ctx.r8.s64 = -26;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x899352b8
	ctx.lr = 0x899C1FD0;
	sub_899352B8(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30224
	ctx.r10.s64 = -1980760064;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,22056
	ctx.r29.s64 = ctx.r11.s64 + 22056;
	// addi r30,r10,-14232
	ctx.r30.s64 = ctx.r10.s64 + -14232;
loc_899C1FE4:
	// rlwinm r5,r31,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_899C1FEC:
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// blt cr6,0x899c2054
	if (ctx.cr6.lt) goto loc_899C2054;
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r10,r30,3464
	ctx.r10.s64 = ctx.r30.s64 + 3464;
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
loc_899C2038:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x899c2038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899C2038;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// ori r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 16384;
	// sth r8,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// b 0x899c2098
	goto loc_899C2098;
loc_899C2054:
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r30,3464
	ctx.r6.s64 = ctx.r30.s64 + 3464;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
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
loc_899C208C:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x899c208c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899C208C;
loc_899C2098:
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
	// blt cr6,0x899c1fec
	if (ctx.cr6.lt) goto loc_899C1FEC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r30,3464
	ctx.r8.s64 = ctx.r30.s64 + 3464;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r10,r30,512
	ctx.r10.s64 = ctx.r30.s64 + 512;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
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
	// bl 0x89935610
	ctx.lr = 0x899C2110;
	sub_89935610(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x899c1fe4
	if (ctx.cr6.lt) goto loc_899C1FE4;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r30,3288
	ctx.r11.s64 = ctx.r30.s64 + 3288;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,240
	ctx.r10.s64 = 240;
	// li r9,232
	ctx.r9.s64 = 232;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-8
	ctx.r8.s64 = -8;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x89934fb8
	ctx.lr = 0x899C2158;
	sub_89934FB8(ctx, base);
	// lis r7,-30224
	ctx.r7.s64 = -1980760064;
	// addi r5,r30,3288
	ctx.r5.s64 = ctx.r30.s64 + 3288;
	// addi r4,r7,-14632
	ctx.r4.s64 = ctx.r7.s64 + -14632;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935c28
	ctx.lr = 0x899C2174;
	sub_89935C28(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,2240
	ctx.r10.s64 = ctx.r11.s64 + 2240;
	// lbz r11,2240(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2240);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x899c21fc
	if (ctx.cr6.eq) goto loc_899C21FC;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_899C2194:
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lbz r5,3(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// lbz r7,5(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r9,7(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// lbz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 8);
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzu r11,9(r31)
	ea = 9 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r27,r27,r30
	ctx.r27.u64 = ctx.r27.u64 + ctx.r30.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x89934fb8
	ctx.lr = 0x899C21E0;
	sub_89934FB8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r9,r28,r29
	ctx.r9.u64 = ctx.r28.u64 + ctx.r29.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x899c2194
	if (!ctx.cr6.eq) goto loc_899C2194;
loc_899C21FC:
	// lis r10,-30224
	ctx.r10.s64 = -1980760064;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r10,-12136
	ctx.r29.s64 = ctx.r10.s64 + -12136;
	// addi r28,r11,22076
	ctx.r28.s64 = ctx.r11.s64 + 22076;
loc_899C2210:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r31,170
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(170));
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mulli r11,r31,396
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(396));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935c28
	ctx.lr = 0x899C223C;
	sub_89935C28(ctx, base);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// blt cr6,0x899c2210
	if (ctx.cr6.lt) goto loc_899C2210;
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C38C8) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwz r10,-9212(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -9212);
	// addi r11,r5,12800
	ctx.r11.s64 = ctx.r5.s64 + 12800;
	// mulli r4,r7,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// lwzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r10,-9212(r9)
	REX_STORE_U32(ctx.r9.u32 + -9212, ctx.r10.u32);
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// addi r10,r11,207
	ctx.r10.s64 = ctx.r11.s64 + 207;
	// addi r9,r11,200
	ctx.r9.s64 = ctx.r11.s64 + 200;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// lwzx r5,r4,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// rlwinm r11,r8,19,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x3;
	// lwzx r6,r4,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lbzx r7,r4,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r8,r4,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r4,12
	ctx.r4.s64 = 12;
	// beq cr6,0x899c394c
	if (ctx.cr6.eq) goto loc_899C394C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x899c3948
	if (ctx.cr6.eq) goto loc_899C3948;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x899c3944
	if (ctx.cr6.eq) goto loc_899C3944;
	// b 0x899d4440
	sub_899D4440(ctx, base);
	return;
loc_899C3944:
	// b 0x899d4e08
	sub_899D4E08(ctx, base);
	return;
loc_899C3948:
	// b 0x899d4fb0
	sub_899D4FB0(ctx, base);
	return;
loc_899C394C:
	// b 0x899d4c10
	sub_899D4C10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C3A58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899C3A60;
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
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x899c3ba8
	if (ctx.cr6.lt) goto loc_899C3BA8;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x899c3ba8
	if (ctx.cr6.gt) goto loc_899C3BA8;
	// bl 0x8991b9f0
	ctx.lr = 0x899C3A94;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899c3ab4
	if (!ctx.cr6.lt) goto loc_899C3AB4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899c3950
	ctx.lr = 0x899C3AAC;
	sub_899C3950(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899C3AB4:
	// mulli r5,r11,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r30,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// addi r7,r11,9016
	ctx.r7.s64 = ctx.r11.s64 + 9016;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// lwzx r3,r5,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// lwzx r8,r5,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lwzx r6,r30,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwinm r29,r26,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x3FE;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// addi r26,r31,206
	ctx.r26.s64 = ctx.r31.s64 + 206;
	// rlwinm r25,r9,1,22,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r24,r31,52
	ctx.r24.s64 = ctx.r31.s64 + 52;
	// lhzx r9,r29,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r7.u32);
	// addi r29,r31,200
	ctx.r29.s64 = ctx.r31.s64 + 200;
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// extsh r23,r9
	ctx.r23.s64 = ctx.r9.s16;
	// lbzx r9,r30,r26
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// lhzx r7,r25,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// mullw r26,r23,r11
	ctx.r26.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r11.s32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// srawi r11,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 8;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stwx r8,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r8.u32);
	// lwzx r8,r5,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r7,r30,r24
	REX_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r7.u32);
	// lbzx r11,r5,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r29.u32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r6,r30,r31
	REX_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u8);
	// beq cr6,0x899c3b98
	if (ctx.cr6.eq) goto loc_899C3B98;
	// cmplwi cr6,r10,33
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 33, ctx.xer);
	// beq cr6,0x899c3b88
	if (ctx.cr6.eq) goto loc_899C3B88;
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// bne cr6,0x899c3c40
	if (!ctx.cr6.eq) goto loc_899C3C40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899c33d0
	ctx.lr = 0x899C3B80;
	sub_899C33D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899C3B88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899c34e8
	ctx.lr = 0x899C3B90;
	sub_899C34E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899C3B98:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x899c36c0
	ctx.lr = 0x899C3BA0;
	sub_899C36C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899C3BA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991c8b8
	ctx.lr = 0x899C3BB0;
	sub_8991C8B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991c718
	ctx.lr = 0x899C3BB8;
	sub_8991C718(ctx, base);
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lhzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// lhzx r31,r30,r10
	ctx.r31.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// addi r31,r10,512
	ctx.r31.s64 = ctx.r10.s64 + 512;
	// stwx r11,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r31,10
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 10;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r10,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r10.u32);
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r10,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r4.u32);
loc_899C3C40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C5280) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899C5288;
	__savegprlr_29(ctx, base);
	// stwu r1,-1360(r1)
	ea = -1360 + ctx.r1.u32;
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
	ctx.lr = 0x899C52C0;
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
	// li r9,208
	ctx.r9.s64 = 208;
	// li r8,-26
	ctx.r8.s64 = -26;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x899352b8
	ctx.lr = 0x899C52F4;
	sub_899352B8(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30224
	ctx.r10.s64 = -1980760064;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,20124
	ctx.r29.s64 = ctx.r11.s64 + 20124;
	// addi r30,r10,8728
	ctx.r30.s64 = ctx.r10.s64 + 8728;
loc_899C5308:
	// rlwinm r5,r31,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_899C5310:
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r30,-2304
	ctx.r6.s64 = ctx.r30.s64 + -2304;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// blt cr6,0x899c5378
	if (ctx.cr6.lt) goto loc_899C5378;
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,2400
	ctx.r7.s64 = ctx.r1.s64 + 2400;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
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
loc_899C535C:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x899c535c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899C535C;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// ori r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 16384;
	// sth r8,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// b 0x899c53b8
	goto loc_899C53B8;
loc_899C5378:
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
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
loc_899C53AC:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x899c53ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899C53AC;
loc_899C53B8:
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
	// blt cr6,0x899c5310
	if (ctx.cr6.lt) goto loc_899C5310;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r30,-2304
	ctx.r9.s64 = ctx.r30.s64 + -2304;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mulli r11,r31,396
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(396));
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
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
	// bl 0x89935610
	ctx.lr = 0x899C542C;
	sub_89935610(ctx, base);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x899c5308
	if (ctx.cr6.lt) goto loc_899C5308;
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C6408) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899C6410;
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
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x899c688c
	if (ctx.cr6.gt) goto loc_899C688C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899c658c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C658C;
	// bdzf 4*cr6+eq,0x899c67bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C67BC;
	// bne cr6,0x899c67bc
	if (!ctx.cr6.eq) goto loc_899C67BC;
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
	// blt cr6,0x899c64cc
	if (ctx.cr6.lt) goto loc_899C64CC;
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
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
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
loc_899C64CC:
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899c656c
	if (ctx.cr6.lt) goto loc_899C656C;
	// beq cr6,0x899c6540
	if (ctx.cr6.eq) goto loc_899C6540;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x899c688c
	if (!ctx.cr6.lt) goto loc_899C688C;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C64FC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c688c
	if (ctx.cr6.eq) goto loc_899C688C;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lis r8,-30296
	ctx.r8.s64 = -1985478656;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r8,-25920
	ctx.r8.s64 = ctx.r8.s64 + -25920;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// lhzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addis r4,r5,32
	ctx.r4.s64 = ctx.r5.s64 + 2097152;
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899cc438
	ctx.lr = 0x899C6538;
	sub_899CC438(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899C6540:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C6550;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c688c
	if (ctx.cr6.eq) goto loc_899C688C;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899C656C:
	// addi r10,r30,196
	ctx.r10.s64 = ctx.r30.s64 + 196;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899c688c
	if (ctx.cr6.eq) goto loc_899C688C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899C658C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899C6594;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899c65b0
	if (!ctx.cr6.lt) goto loc_899C65B0;
loc_899C65A0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x899c6270
	ctx.lr = 0x899C65A8;
	sub_899C6270(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899C65B0:
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// lwzx r10,r8,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// stwx r9,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x899c674c
	if (ctx.cr6.gt) goto loc_899C674C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899c6650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C6650;
	// bdzf 4*cr6+eq,0x899c66e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899C66E4;
	// bne cr6,0x899c6714
	if (!ctx.cr6.eq) goto loc_899C6714;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89932b18
	ctx.lr = 0x899C661C;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89932d30
	ctx.lr = 0x899C6628;
	sub_89932D30(ctx, base);
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r11,352
	ctx.r11.s64 = 23068672;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x899c674c
	if (!ctx.cr6.lt) goto loc_899C674C;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x89936360
	ctx.lr = 0x899C6640;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x899c674c
	goto loc_899C674C;
loc_899C6650:
	// addi r29,r30,180
	ctx.r29.s64 = ctx.r30.s64 + 180;
	// li r27,0
	ctx.r27.s64 = 0;
	// stbx r27,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r27.u8);
loc_899C665C:
	// rlwinm r11,r27,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0xFFFFFF80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x899cfa40
	ctx.lr = 0x899C6688;
	sub_899CFA40(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899c66a0
	if (ctx.cr6.eq) goto loc_899C66A0;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_899C66A0:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899c665c
	if (ctx.cr6.lt) goto loc_899C665C;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899c674c
	if (ctx.cr6.eq) goto loc_899C674C;
	// lbzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwimi r9,r8,7,0,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r9.u64 & 0xFFFFFFFF0000007F);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// b 0x899c674c
	goto loc_899C674C;
loc_899C66E4:
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
	// cmplwi cr6,r8,120
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 120, ctx.xer);
	// blt cr6,0x899c674c
	if (ctx.cr6.lt) goto loc_899C674C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// b 0x899c674c
	goto loc_899C674C;
loc_899C6714:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// sthx r6,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u16);
	// bgt cr6,0x899c674c
	if (ctx.cr6.gt) goto loc_899C674C;
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
loc_899C674C:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899C67BC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899C67C4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899c65a0
	if (ctx.cr6.lt) goto loc_899C65A0;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 1;
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwzx r10,r8,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// blt cr6,0x899c688c
	if (ctx.cr6.lt) goto loc_899C688C;
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
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
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
loc_899C688C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C9AE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899C9AE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x899C9AF8;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c9b08
	if (!ctx.cr6.eq) goto loc_899C9B08;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899C9B08:
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
	// mulli r27,r5,208
	ctx.r27.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// stwx r3,r27,r7
	REX_STORE_U32(ctx.r27.u32 + ctx.r7.u32, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r11,r8,260
	ctx.r11.u64 = ctx.r8.u64 | 260;
	// stwx r29,r27,r6
	REX_STORE_U32(ctx.r27.u32 + ctx.r6.u32, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r11,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u32);
	// stwx r29,r27,r4
	REX_STORE_U32(ctx.r27.u32 + ctx.r4.u32, ctx.r29.u32);
	// bl 0x8991b538
	ctx.lr = 0x899C9B58;
	sub_8991B538(ctx, base);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// lis r8,352
	ctx.r8.s64 = 23068672;
	// rlwinm r7,r28,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r8,r27,r10
	REX_STORE_U32(ctx.r27.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r7,r27,r9
	REX_STORE_U32(ctx.r27.u32 + ctx.r9.u32, ctx.r7.u32);
	// bl 0x8991c578
	ctx.lr = 0x899C9B78;
	sub_8991C578(ctx, base);
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// addi r9,r31,204
	ctx.r9.s64 = ctx.r31.s64 + 204;
	// li r11,116
	ctx.r11.s64 = 116;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// addi r10,r31,158
	ctx.r10.s64 = ctx.r31.s64 + 158;
	// stwx r29,r27,r5
	REX_STORE_U32(ctx.r27.u32 + ctx.r5.u32, ctx.r29.u32);
	// addi r8,r31,200
	ctx.r8.s64 = ctx.r31.s64 + 200;
	// stbx r11,r27,r9
	REX_STORE_U8(ctx.r27.u32 + ctx.r9.u32, ctx.r11.u8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// ori r3,r7,32768
	ctx.r3.u64 = ctx.r7.u64 | 32768;
	// li r9,256
	ctx.r9.s64 = 256;
	// stwx r5,r27,r6
	REX_STORE_U32(ctx.r27.u32 + ctx.r6.u32, ctx.r5.u32);
	// stwx r3,r27,r4
	REX_STORE_U32(ctx.r27.u32 + ctx.r4.u32, ctx.r3.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// sthx r9,r27,r10
	REX_STORE_U16(ctx.r27.u32 + ctx.r10.u32, ctx.r9.u16);
	// stbx r11,r27,r8
	REX_STORE_U8(ctx.r27.u32 + ctx.r8.u32, ctx.r11.u8);
	// bl 0x89934058
	ctx.lr = 0x899C9BC4;
	sub_89934058(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CADE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x899CADF0;
	__savegprlr_18(ctx, base);
	// stwu r1,-1456(r1)
	ea = -1456 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// sth r8,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r10,216
	ctx.r10.s64 = 216;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,-20
	ctx.r9.s64 = -20;
	// stb r25,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r25.u8);
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
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934b48
	ctx.lr = 0x899CAE30;
	sub_89934B48(ctx, base);
	// lis r11,-30223
	ctx.r11.s64 = -1980694528;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// ori r30,r9,24576
	ctx.r30.u64 = ctx.r9.u64 | 24576;
	// lis r26,8
	ctx.r26.s64 = 524288;
	// lis r27,10
	ctx.r27.s64 = 655360;
	// addi r31,r11,-29968
	ctx.r31.s64 = ctx.r11.s64 + -29968;
	// addi r28,r10,9016
	ctx.r28.s64 = ctx.r10.s64 + 9016;
loc_899CAE54:
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_899CAE60:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r31,-1840
	ctx.r7.s64 = ctx.r31.s64 + -1840;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
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
loc_899CAEA4:
	// lhzu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x899caea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899CAEA4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r24,r11,r9
	ctx.r24.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r10,128
	ctx.r7.s64 = ctx.r10.s64 + 128;
	// rlwinm r6,r10,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r10,r7,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,-616
	ctx.r11.s64 = ctx.r31.s64 + -616;
	// addi r7,r31,-616
	ctx.r7.s64 = ctx.r31.s64 + -616;
	// addi r4,r31,-616
	ctx.r4.s64 = ctx.r31.s64 + -616;
	// lhzx r9,r6,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// lhzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// extsh r21,r8
	ctx.r21.s64 = ctx.r8.s16;
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// addi r5,r31,-616
	ctx.r5.s64 = ctx.r31.s64 + -616;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// extsh r22,r9
	ctx.r22.s64 = ctx.r9.s16;
	// stwx r25,r24,r11
	REX_STORE_U32(ctx.r24.u32 + ctx.r11.u32, ctx.r25.u32);
	// addi r8,r31,-616
	ctx.r8.s64 = ctx.r31.s64 + -616;
	// mulli r20,r21,28672
	ctx.r20.s64 = static_cast<int64_t>(ctx.r21.u64 * static_cast<uint64_t>(28672));
	// stwx r27,r24,r7
	REX_STORE_U32(ctx.r24.u32 + ctx.r7.u32, ctx.r27.u32);
	// stwx r26,r24,r4
	REX_STORE_U32(ctx.r24.u32 + ctx.r4.u32, ctx.r26.u32);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r10,r31,-616
	ctx.r10.s64 = ctx.r31.s64 + -616;
	// addi r6,r31,-616
	ctx.r6.s64 = ctx.r31.s64 + -616;
	// addi r9,r31,-616
	ctx.r9.s64 = ctx.r31.s64 + -616;
	// mulli r19,r22,28672
	ctx.r19.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(28672));
	// addi r11,r8,16
	ctx.r11.s64 = ctx.r8.s64 + 16;
	// srawi r20,r20,8
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFF) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 8;
	// mullw r21,r21,r30
	ctx.r21.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r30.s32);
	// stwx r20,r24,r5
	REX_STORE_U32(ctx.r24.u32 + ctx.r5.u32, ctx.r20.u32);
	// stwx r27,r24,r11
	REX_STORE_U32(ctx.r24.u32 + ctx.r11.u32, ctx.r27.u32);
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// addi r18,r31,-616
	ctx.r18.s64 = ctx.r31.s64 + -616;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// mullw r8,r22,r30
	ctx.r8.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r30.s32);
	// stwx r26,r24,r18
	REX_STORE_U32(ctx.r24.u32 + ctx.r18.u32, ctx.r26.u32);
	// srawi r4,r19,8
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r19.s32 >> 8;
	// srawi r10,r21,8
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 8;
	// extsh r5,r23
	ctx.r5.s64 = ctx.r23.s16;
	// stwx r4,r24,r6
	REX_STORE_U32(ctx.r24.u32 + ctx.r6.u32, ctx.r4.u32);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// stwx r10,r24,r9
	REX_STORE_U32(ctx.r24.u32 + ctx.r9.u32, ctx.r10.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stwx r8,r24,r7
	REX_STORE_U32(ctx.r24.u32 + ctx.r7.u32, ctx.r8.u32);
	// cmpwi cr6,r5,17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 17, ctx.xer);
	// blt cr6,0x899cae60
	if (ctx.cr6.lt) goto loc_899CAE60;
	// addi r9,r31,-1840
	ctx.r9.s64 = ctx.r31.s64 + -1840;
	// mulli r10,r29,306
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(306));
	// mulli r11,r29,780
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(780));
	// addi r6,r31,-616
	ctx.r6.s64 = ctx.r31.s64 + -616;
	// li r7,9
	ctx.r7.s64 = 9;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935b08
	ctx.lr = 0x899CAFA0;
	sub_89935B08(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899cae54
	if (ctx.cr6.lt) goto loc_899CAE54;
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CBB90) {
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
	// blt cr6,0x899cbbec
	if (ctx.cr6.lt) goto loc_899CBBEC;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899cbbec
	if (ctx.cr6.gt) goto loc_899CBBEC;
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
	// bge 0x899cbbd4
	if (!ctx.cr0.lt) goto loc_899CBBD4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CBBD4:
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
	// b 0x899cbbf0
	goto loc_899CBBF0;
loc_899CBBEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899CBBF0:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899cbc14
	if (!ctx.cr6.eq) goto loc_899CBC14;
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
loc_899CBC14:
	// bl 0x899cba78
	ctx.lr = 0x899CBC18;
	sub_899CBA78(ctx, base);
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

DEFINE_REX_FUNC(sub_899CC018) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// li r9,116
	ctx.r9.s64 = 116;
	// lwz r8,64(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// addi r4,r10,16372
	ctx.r4.s64 = ctx.r10.s64 + 16372;
	// lwz r7,60(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r6,56(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r5,52(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// bl 0x899d5650
	ctx.lr = 0x899CC05C;
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

DEFINE_REX_FUNC(sub_899CC5B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899CC5C0;
	__savegprlr_23(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-11056(r1)
	ea = -11056 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r31,16
	ctx.r31.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,240
	ctx.r9.s64 = 240;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
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
	// li r3,544
	ctx.r3.s64 = 544;
	// bl 0x89934fb8
	ctx.lr = 0x899CC600;
	sub_89934FB8(ctx, base);
	// addi r8,r1,5536
	ctx.r8.s64 = ctx.r1.s64 + 5536;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
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
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,544
	ctx.r3.s64 = 544;
	// bl 0x89934fb8
	ctx.lr = 0x899CC630;
	sub_89934FB8(ctx, base);
	// lis r11,-30223
	ctx.r11.s64 = -1980694528;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r31,r11,2720
	ctx.r31.s64 = ctx.r11.s64 + 2720;
loc_899CC63C:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,-11200
	ctx.r10.s64 = ctx.r31.s64 + -11200;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r8,r31,-11200
	ctx.r8.s64 = ctx.r31.s64 + -11200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r26,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// add r27,r9,r26
	ctx.r27.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r23,r26,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_899CC66C:
	// add r4,r23,r30
	ctx.r4.u64 = ctx.r23.u64 + ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_899CC67C:
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
	// addi r8,r31,-10880
	ctx.r8.s64 = ctx.r31.s64 + -10880;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
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
loc_899CC6C4:
	// lhzu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x899cc6c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899CC6C4;
	// addi r8,r31,-10880
	ctx.r8.s64 = ctx.r31.s64 + -10880;
	// addi r7,r1,5536
	ctx.r7.s64 = ctx.r1.s64 + 5536;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r8,5440
	ctx.r8.s64 = ctx.r8.s64 + 5440;
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
loc_899CC6F4:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x899cc6f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899CC6F4;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899cc67c
	if (ctx.cr6.lt) goto loc_899CC67C;
	// addi r11,r31,-10880
	ctx.r11.s64 = ctx.r31.s64 + -10880;
	// mulli r28,r4,170
	ctx.r28.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(170));
	// mulli r29,r4,780
	ctx.r29.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(780));
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x899CC738;
	sub_89935880(ctx, base);
	// addi r10,r31,-10880
	ctx.r10.s64 = ctx.r31.s64 + -10880;
	// addi r11,r31,24960
	ctx.r11.s64 = ctx.r31.s64 + 24960;
	// addi r10,r10,5440
	ctx.r10.s64 = ctx.r10.s64 + 5440;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x89935880
	ctx.lr = 0x899CC758;
	sub_89935880(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899cc66c
	if (ctx.cr6.lt) goto loc_899CC66C;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x899cc63c
	if (ctx.cr6.lt) goto loc_899CC63C;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r3,r31,-11200
	ctx.r3.s64 = ctx.r31.s64 + -11200;
	// addi r4,r11,2928
	ctx.r4.s64 = ctx.r11.s64 + 2928;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x899cbe38
	ctx.lr = 0x899CC794;
	sub_899CBE38(ctx, base);
	// addi r1,r1,11056
	ctx.r1.s64 = ctx.r1.s64 + 11056;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CE360) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899CE368;
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
	ctx.lr = 0x899CE3A0;
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
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934fb8
	ctx.lr = 0x899CE3D4;
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
	ctx.lr = 0x899CE408;
	sub_89934FB8(ctx, base);
	// lis r11,-30221
	ctx.r11.s64 = -1980563456;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-27656
	ctx.r31.s64 = ctx.r11.s64 + -27656;
loc_899CE414:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
loc_899CE424:
	// li r9,0
	ctx.r9.s64 = 0;
loc_899CE428:
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
loc_899CE47C:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x899ce47c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899CE47C;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899ce428
	if (ctx.cr6.lt) goto loc_899CE428;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899ce424
	if (ctx.cr6.lt) goto loc_899CE424;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x899ce414
	if (ctx.cr6.lt) goto loc_899CE414;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,13196
	ctx.r29.s64 = ctx.r11.s64 + 13196;
loc_899CE4D0:
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
	ctx.lr = 0x899CE4F4;
	sub_89935880(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x899ce4d0
	if (ctx.cr6.lt) goto loc_899CE4D0;
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CF788) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899CF790;
	__savegprlr_29(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
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
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934fb8
	ctx.lr = 0x899CF7C8;
	sub_89934FB8(ctx, base);
	// lis r10,-30221
	ctx.r10.s64 = -1980563456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,-6896
	ctx.r30.s64 = ctx.r10.s64 + -6896;
loc_899CF7D4:
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// subf r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_899CF828:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x899cf828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899CF828;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,68
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 68, ctx.xer);
	// blt cr6,0x899cf7d4
	if (ctx.cr6.lt) goto loc_899CF7D4;
	// lis r11,-30221
	ctx.r11.s64 = -1980563456;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-6216
	ctx.r29.s64 = ctx.r11.s64 + -6216;
loc_899CF854:
	// mulli r10,r31,170
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(170));
	// mulli r11,r31,780
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(780));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x899CF874;
	sub_89935880(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899cf854
	if (ctx.cr6.lt) goto loc_899CF854;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D02C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x899D02D0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r22,r11,-4
	ctx.r22.s64 = ctx.r11.s64 + -4;
	// lis r11,-30221
	ctx.r11.s64 = -1980563456;
	// li r21,4
	ctx.r21.s64 = 4;
	// addi r27,r11,8784
	ctx.r27.s64 = ctx.r11.s64 + 8784;
	// addi r23,r10,12160
	ctx.r23.s64 = ctx.r10.s64 + 12160;
loc_899D02F8:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r30,7(r22)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r22.u32 + 7);
	// lbz r28,6(r22)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r22.u32 + 6);
	// addi r9,r27,-480
	ctx.r9.s64 = ctx.r27.s64 + -480;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r26,5(r22)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r22.u32 + 5);
	// lbzu r31,4(r22)
	ea = 4 + ctx.r22.u32;
	ctx.r31.u64 = REX_LOAD_U8(ea);
	ctx.r22.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r25,r11,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r21,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r21.u16);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// add r24,r25,r9
	ctx.r24.u64 = ctx.r25.u64 + ctx.r9.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899D0348;
	sub_89934FB8(ctx, base);
	// addi r11,r27,-480
	ctx.r11.s64 = ctx.r27.s64 + -480;
	// addi r9,r28,128
	ctx.r9.s64 = ctx.r28.s64 + 128;
	// sth r21,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r21.u16);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r8,r25,r11
	ctx.r8.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,-8
	ctx.r7.s64 = -8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899D0388;
	sub_89934FB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_899D0390:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r23,480
	ctx.r10.s64 = ctx.r23.s64 + 480;
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r26,r7,108
	ctx.r26.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(108));
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rlwimi r3,r30,15,16,16
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0x8000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF7FFF);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bl 0x89935688
	ctx.lr = 0x899D03D4;
	sub_89935688(ctx, base);
	// addi r11,r27,648
	ctx.r11.s64 = ctx.r27.s64 + 648;
	// li r3,8
	ctx.r3.s64 = 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r3,r30,14,16,17
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0xC000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF3FFF);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r25,r23
	ctx.r5.u64 = ctx.r25.u64 + ctx.r23.u64;
	// add r4,r26,r11
	ctx.r4.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bl 0x89935688
	ctx.lr = 0x899D03F4;
	sub_89935688(ctx, base);
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x899d0390
	if (ctx.cr6.lt) goto loc_899D0390;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x899d02f8
	if (ctx.cr6.lt) goto loc_899D02F8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D13D8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899d1410
	if (ctx.cr6.lt) goto loc_899D1410;
	// beq cr6,0x899d1430
	if (ctx.cr6.eq) goto loc_899D1430;
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
loc_899D1410:
	// li r9,116
	ctx.r9.s64 = 116;
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r7,60(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x899d5650
	ctx.lr = 0x899D1430;
	sub_899D5650(ctx, base);
loc_899D1430:
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

DEFINE_REX_FUNC(sub_899D1980) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899D1988;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r25,0(r9)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// ori r8,r9,20077
	ctx.r8.u64 = ctx.r9.u64 | 20077;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r3,12(r25)
	REX_STORE_U32(ctx.r25.u32 + 12, ctx.r3.u32);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// sth r6,116(r25)
	REX_STORE_U16(ctx.r25.u32 + 116, ctx.r6.u16);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// lis r7,-16176
	ctx.r7.s64 = -1060110336;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r7.u32);
	// rlwinm r11,r11,19,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x3;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r5.u32);
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// stw r30,16(r25)
	REX_STORE_U32(ctx.r25.u32 + 16, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,8(r25)
	REX_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// bl 0x8991a858
	ctx.lr = 0x899D19FC;
	sub_8991A858(ctx, base);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// li r8,519
	ctx.r8.s64 = 519;
	// stw r29,52(r25)
	REX_STORE_U32(ctx.r25.u32 + 52, ctx.r29.u32);
	// li r7,192
	ctx.r7.s64 = 192;
	// stw r28,56(r25)
	REX_STORE_U32(ctx.r25.u32 + 56, ctx.r28.u32);
	// stw r27,60(r25)
	REX_STORE_U32(ctx.r25.u32 + 60, ctx.r27.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r26,64(r25)
	REX_STORE_U32(ctx.r25.u32 + 64, ctx.r26.u32);
	// stw r9,120(r25)
	REX_STORE_U32(ctx.r25.u32 + 120, ctx.r9.u32);
	// stb r30,138(r25)
	REX_STORE_U8(ctx.r25.u32 + 138, ctx.r30.u8);
	// sth r8,68(r25)
	REX_STORE_U16(ctx.r25.u32 + 68, ctx.r8.u16);
	// stb r7,70(r25)
	REX_STORE_U8(ctx.r25.u32 + 70, ctx.r7.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D2958) {
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
	// lis r11,-30221
	ctx.r11.s64 = -1980563456;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r31,r11,29832
	ctx.r31.s64 = ctx.r11.s64 + 29832;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,-80
	ctx.r7.s64 = ctx.r31.s64 + -80;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899D29A4;
	sub_89934FB8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r31,-80
	ctx.r9.s64 = ctx.r31.s64 + -80;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r8,r8,3484
	ctx.r8.s64 = ctx.r8.s64 + 3484;
loc_899D29BC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x899d29bc
	if (ctx.cr6.lt) goto loc_899D29BC;
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

DEFINE_REX_FUNC(sub_899D31D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899D31D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r31,r11,-24872
	ctx.r31.s64 = ctx.r11.s64 + -24872;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,-480
	ctx.r7.s64 = ctx.r31.s64 + -480;
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
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x89934fb8
	ctx.lr = 0x899D3218;
	sub_89934FB8(ctx, base);
	// addi r6,r31,-960
	ctx.r6.s64 = ctx.r31.s64 + -960;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r5,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r5.u16);
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
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x89934fb8
	ctx.lr = 0x899D324C;
	sub_89934FB8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r10,3484
	ctx.r29.s64 = ctx.r10.s64 + 3484;
	// addi r26,r9,3564
	ctx.r26.s64 = ctx.r9.s64 + 3564;
loc_899D3268:
	// lhzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r28,r27,r11
	ctx.r28.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ori r5,r10,16
	ctx.r5.u64 = ctx.r10.u64 | 16;
loc_899D327C:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r28,r3
	ctx.r9.u64 = ctx.r28.u64 + ctx.r3.u64;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mulli r6,r9,204
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(204));
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r31,-480
	ctx.r10.s64 = ctx.r31.s64 + -480;
	// addi r11,r31,2448
	ctx.r11.s64 = ctx.r31.s64 + 2448;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899d32dc
	if (!ctx.cr6.gt) goto loc_899D32DC;
	// rlwinm r4,r9,16,0,1
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_899D32B8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899d32b8
	if (ctx.cr6.lt) goto loc_899D32B8;
loc_899D32DC:
	// addi r10,r31,-960
	ctx.r10.s64 = ctx.r31.s64 + -960;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899d3330
	if (!ctx.cr6.gt) goto loc_899D3330;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_899D3308:
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
	// blt cr6,0x899d3308
	if (ctx.cr6.lt) goto loc_899D3308;
loc_899D3330:
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x899d327c
	if (ctx.cr6.lt) goto loc_899D327C;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x899d3268
	if (ctx.cr6.lt) goto loc_899D3268;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D3FA8) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r10,r11,25128
	ctx.r10.s64 = ctx.r11.s64 + 25128;
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
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mulli r4,r11,696
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r9,r4,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
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
	// mulli r8,r3,696
	ctx.r8.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(696));
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r6,r7,0,5,5
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4000000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D4640) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899D4648;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// addi r28,r11,8704
	ctx.r28.s64 = ctx.r11.s64 + 8704;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// ori r6,r7,20077
	ctx.r6.u64 = ctx.r7.u64 | 20077;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// addi r5,r28,-204
	ctx.r5.s64 = ctx.r28.s64 + -204;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwinm r11,r11,2,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x899d44e8
	ctx.lr = 0x899D46BC;
	sub_899D44E8(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x899d46d4
	if (!ctx.cr6.eq) goto loc_899D46D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899D46D4:
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// rlwinm r26,r26,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhzx r8,r26,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r11.u32);
	// bl 0x899d5a38
	ctx.lr = 0x899D46F8;
	sub_899D5A38(ctx, base);
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r6,r26,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r10.u32);
	// bl 0x899d6388
	ctx.lr = 0x899D4710;
	sub_899D6388(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D4FB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x899D4FB8;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// rlwinm r18,r4,4,0,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r22,r11,8500
	ctx.r22.s64 = ctx.r11.s64 + 8500;
	// addis r11,r5,-160
	ctx.r11.s64 = ctx.r5.s64 + -10485760;
	// addi r10,r22,204
	ctx.r10.s64 = ctx.r22.s64 + 204;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lhzx r10,r18,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r10.u32);
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d4ff8
	if (!ctx.cr0.lt) goto loc_899D4FF8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D4FF8:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r10,160
	ctx.r9.s64 = ctx.r10.s64 + 160;
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x899d503c
	if (!ctx.cr6.lt) goto loc_899D503C;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r9,r11,r20
	ctx.r9.u64 = ctx.r20.u64 - ctx.r11.u64;
	// addis r11,r9,-120
	ctx.r11.s64 = ctx.r9.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d5028
	if (!ctx.cr0.lt) goto loc_899D5028;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D5028:
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x899d5040
	if (ctx.cr6.lt) goto loc_899D5040;
loc_899D503C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_899D5040:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d5058
	if (ctx.cr6.eq) goto loc_899D5058;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_899D5058:
	// lis r30,-30253
	ctx.r30.s64 = -1982660608;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// addi r10,r22,204
	ctx.r10.s64 = ctx.r22.s64 + 204;
	// ori r31,r11,20077
	ctx.r31.u64 = ctx.r11.u64 | 20077;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r11,-9212(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -9212);
	// li r29,0
	ctx.r29.s64 = 0;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// lhzx r9,r18,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r10.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// rotlwi r8,r9,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
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
	// srawi r4,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// mullw r9,r11,r31
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,12345
	ctx.r11.s64 = ctx.r9.s64 + 12345;
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r30)
	REX_STORE_U32(ctx.r30.u32 + -9212, ctx.r11.u32);
	// clrlwi r9,r6,17
	ctx.r9.u64 = ctx.r6.u32 & 0x7FFF;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r7,r5,2,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwzx r24,r7,r22
	ctx.r24.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r22.u32);
	// addi r3,r10,-16
	ctx.r3.s64 = ctx.r10.s64 + -16;
	// addic. r9,r6,4
	ctx.xer.ca = ctx.r6.u32 > 4294967291;
	ctx.r9.s64 = ctx.r6.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r25,r5,16,17,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x7FFF;
	// clrlwi r11,r4,23
	ctx.r11.u64 = ctx.r4.u32 & 0x1FF;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// beq 0x899d51ac
	if (ctx.cr0.eq) goto loc_899D51AC;
	// extsh r21,r10
	ctx.r21.s64 = ctx.r10.s16;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r9,r11,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// addi r26,r10,9016
	ctx.r26.s64 = ctx.r10.s64 + 9016;
loc_899D5114:
	// lhzx r9,r9,r26
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r26.u32);
	// srawi r10,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 4;
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r7,r27,128
	ctx.r7.s64 = ctx.r27.s64 + 128;
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// rlwinm r4,r7,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lhzx r3,r4,r26
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r26.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// bl 0x899d44e8
	ctx.lr = 0x899D5168;
	sub_899D44E8(ctx, base);
	// lwz r10,-9212(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -9212);
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// add r8,r21,r27
	ctx.r8.u64 = ctx.r21.u64 + ctx.r27.u64;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r10,-9212(r30)
	REX_STORE_U32(ctx.r30.u32 + -9212, ctx.r10.u32);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// clrlwi r10,r5,28
	ctx.r10.u64 = ctx.r5.u32 & 0xF;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// add r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 + ctx.r29.u64;
	// rlwinm r9,r11,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x899d5114
	if (ctx.cr6.lt) goto loc_899D5114;
loc_899D51AC:
	// addi r11,r22,204
	ctx.r11.s64 = ctx.r22.s64 + 204;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lhzx r8,r18,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r11.u32);
	// bl 0x899d5a38
	ctx.lr = 0x899D51D0;
	sub_899D5A38(ctx, base);
	// addi r11,r22,204
	ctx.r11.s64 = ctx.r22.s64 + 204;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lhzx r6,r18,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r10.u32);
	// bl 0x899d6388
	ctx.lr = 0x899D51EC;
	sub_899D6388(ctx, base);
	// addi r11,r22,204
	ctx.r11.s64 = ctx.r22.s64 + 204;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// lwz r11,-9212(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -9212);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r30)
	REX_STORE_U32(ctx.r30.u32 + -9212, ctx.r11.u32);
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
	// add r5,r11,r18
	ctx.r5.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lbzx r3,r5,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// blt cr6,0x899d5230
	if (ctx.cr6.lt) goto loc_899D5230;
	// bl 0x89936360
	ctx.lr = 0x899D5230;
	sub_89936360(ctx, base);
loc_899D5230:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D6878) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899D6880;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r31,r11,4936
	ctx.r31.s64 = ctx.r11.s64 + 4936;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,-3248
	ctx.r7.s64 = ctx.r31.s64 + -3248;
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x89934fb8
	ctx.lr = 0x899D68C0;
	sub_89934FB8(ctx, base);
	// addi r6,r31,432
	ctx.r6.s64 = ctx.r31.s64 + 432;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r10,144
	ctx.r10.s64 = 144;
	// sth r5,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r5.u16);
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
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89934fb8
	ctx.lr = 0x899D68F4;
	sub_89934FB8(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,104
	ctx.r9.s64 = 104;
	// sth r3,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
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
	// bl 0x89934fb8
	ctx.lr = 0x899D6924;
	sub_89934FB8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,3484
	ctx.r4.s64 = ctx.r10.s64 + 3484;
	// addi r27,r9,3704
	ctx.r27.s64 = ctx.r9.s64 + 3704;
loc_899D6940:
	// lhzx r29,r11,r27
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// ori r9,r29,16
	ctx.r9.u64 = ctx.r29.u64 | 16;
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
loc_899D695C:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r5,r8
	ctx.r26.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r10,r31,-3248
	ctx.r10.s64 = ctx.r31.s64 + -3248;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r31,-2528
	ctx.r7.s64 = ctx.r31.s64 + -2528;
	// mulli r11,r26,204
	ctx.r11.s64 = static_cast<int64_t>(ctx.r26.u64 * static_cast<uint64_t>(204));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x899d69b4
	if (!ctx.cr6.gt) goto loc_899D69B4;
	// rlwinm r7,r30,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xC0000000;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_899D6990:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x899d6990
	if (ctx.cr6.lt) goto loc_899D6990;
loc_899D69B4:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x899d695c
	if (ctx.cr6.lt) goto loc_899D695C;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r9,r31,-2768
	ctx.r9.s64 = ctx.r31.s64 + -2768;
	// ori r7,r11,4
	ctx.r7.u64 = ctx.r11.u64 | 4;
	// mulli r11,r3,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(60));
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r31,432
	ctx.r10.s64 = ctx.r31.s64 + 432;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899d6a28
	if (!ctx.cr6.gt) goto loc_899D6A28;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_899D6A00:
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
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899d6a00
	if (ctx.cr6.lt) goto loc_899D6A00;
loc_899D6A28:
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// mulli r9,r3,108
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(108));
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// ori r7,r10,8
	ctx.r7.u64 = ctx.r10.u64 | 8;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// addi r10,r31,-80
	ctx.r10.s64 = ctx.r31.s64 + -80;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899d6a84
	if (!ctx.cr6.gt) goto loc_899D6A84;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_899D6A5C:
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
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899d6a5c
	if (ctx.cr6.lt) goto loc_899D6A5C;
loc_899D6A84:
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x899d6940
	if (ctx.cr6.lt) goto loc_899D6940;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D84A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x899d84c0
	if (!ctx.cr6.eq) goto loc_899D84C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D84C0:
	// lbz r11,46(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r7,r11,236
	ctx.r7.s64 = ctx.r11.s64 + 236;
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

DEFINE_REX_FUNC(sub_899D8AF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899D8AF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x89934178
	ctx.lr = 0x899D8B10;
	sub_89934178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d8c04
	if (ctx.cr6.eq) goto loc_899D8C04;
	// bl 0x8991a388
	ctx.lr = 0x899D8B1C;
	sub_8991A388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899d8c04
	if (ctx.cr6.eq) goto loc_899D8C04;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,16838
	ctx.r10.s64 = 1103495168;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// ori r7,r10,20077
	ctx.r7.u64 = ctx.r10.u64 | 20077;
	// lis r6,-16384
	ctx.r6.s64 = -1073741824;
	// lwz r10,-9212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -9212);
	// lis r3,-30275
	ctx.r3.s64 = -1984102400;
	// ori r4,r6,16
	ctx.r4.u64 = ctx.r6.u64 | 16;
	// mullw r9,r10,r7
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lwz r10,3896(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 3896);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r9,-9212(r11)
	REX_STORE_U32(ctx.r11.u32 + -9212, ctx.r9.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// srawi r6,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 16;
	// addi r9,r3,9656
	ctx.r9.s64 = ctx.r3.s64 + 9656;
	// clrlwi r4,r6,17
	ctx.r4.u64 = ctx.r6.u32 & 0x7FFF;
	// addi r5,r5,11976
	ctx.r5.s64 = ctx.r5.s64 + 11976;
	// rlwinm r3,r4,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// stw r11,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// stw r11,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// rlwinm r8,r8,17,15,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1FFFF;
	// mulli r6,r10,92
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(92));
	// lwz r10,904(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 904);
	// stw r10,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// lwz r10,900(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 900);
	// addi r9,r9,76
	ctx.r9.s64 = ctx.r9.s64 + 76;
	// stw r10,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// stw r11,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r11.u32);
	// ori r5,r4,32896
	ctx.r5.u64 = ctx.r4.u64 | 32896;
	// stw r30,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r30.u32);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stw r29,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r29.u32);
	// li r10,516
	ctx.r10.s64 = 516;
	// stb r11,78(r7)
	REX_STORE_U8(ctx.r7.u32 + 78, ctx.r11.u8);
	// stb r11,77(r7)
	REX_STORE_U8(ctx.r7.u32 + 77, ctx.r11.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,76(r7)
	REX_STORE_U8(ctx.r7.u32 + 76, ctx.r11.u8);
	// stw r5,48(r7)
	REX_STORE_U32(ctx.r7.u32 + 48, ctx.r5.u32);
	// stb r31,80(r7)
	REX_STORE_U8(ctx.r7.u32 + 80, ctx.r31.u8);
	// lbzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// stb r9,79(r7)
	REX_STORE_U8(ctx.r7.u32 + 79, ctx.r9.u8);
	// sth r10,44(r7)
	REX_STORE_U16(ctx.r7.u32 + 44, ctx.r10.u16);
	// stb r8,47(r7)
	REX_STORE_U8(ctx.r7.u32 + 47, ctx.r8.u8);
	// stb r8,46(r7)
	REX_STORE_U8(ctx.r7.u32 + 46, ctx.r8.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899D8C04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D9830) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899D9838;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-30214
	ctx.r26.s64 = -1980104704;
	// lwz r11,3668(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3668);
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D985C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,16
	ctx.r31.s64 = 16;
loc_899D9860:
	// bl 0x899d96d0
	ctx.lr = 0x899D9864;
	sub_899D96D0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x899d9860
	if (!ctx.cr0.eq) goto loc_899D9860;
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,25576
	ctx.r29.s64 = ctx.r11.s64 + 25576;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r10,r11,10048
	ctx.r10.s64 = ctx.r11.s64 + 10048;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lis r28,-30214
	ctx.r28.s64 = -1980104704;
	// lfs f31,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
loc_899D9890:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d98c8
	if (ctx.cr6.eq) goto loc_899D98C8;
	// lwz r3,3672(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 3672);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,740(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 740);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D98B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x899d98c8
	if (!ctx.cr6.eq) goto loc_899D98C8;
	// stw r27,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_899D98C8:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r11,r29,128
	ctx.r11.s64 = ctx.r29.s64 + 128;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899d9890
	if (ctx.cr6.lt) goto loc_899D9890;
	// lwz r11,3668(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3668);
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D98F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DA7A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899DA7A8;
	__savegprlr_29(ctx, base);
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r11,3684(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3684);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x899da7c0
	if (ctx.cr6.lt) goto loc_899DA7C0;
loc_899DA7B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899DA7C0:
	// lis r10,-30232
	ctx.r10.s64 = -1981284352;
	// lis r11,-30216
	ctx.r11.s64 = -1980235776;
	// addi r8,r11,26368
	ctx.r8.s64 = ctx.r11.s64 + 26368;
	// lwz r11,18660(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 18660);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x899da7b8
	if (!ctx.cr6.eq) goto loc_899DA7B8;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// rlwinm r6,r3,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,18660(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 18660);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lis r3,-30317
	ctx.r3.s64 = -1986854912;
	// lwz r8,3668(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 3668);
	// srawi r31,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// lwz r7,26528(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 26528);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r31,r31,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,1276(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 1276);
	// add r29,r8,r6
	ctx.r29.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r6,r3,2824
	ctx.r6.s64 = ctx.r3.s64 + 2824;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r31.u64;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// stw r9,18660(r10)
	REX_STORE_U32(ctx.r10.u32 + 18660, ctx.r9.u32);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r4,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// stw r6,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// stw r5,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DADF0) {
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
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,1212
	ctx.r10.s64 = ctx.r10.s64 + 1212;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// bl 0x899dac58
	ctx.lr = 0x899DAE20;
	sub_899DAC58(ctx, base);
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

DEFINE_REX_FUNC(sub_899DB154) {
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
	// bl 0x899db518
	ctx.lr = 0x899DB164;
	sub_899DB518(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DB3C0) {
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
	// lis r30,-30305
	ctx.r30.s64 = -1986068480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x899db414
	if (ctx.cr6.eq) goto loc_899DB414;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x899db400
	if (!ctx.cr6.eq) goto loc_899DB400;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x899e41b8
	ctx.lr = 0x899DB3F8;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_899DB400:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x899e41c8
	ctx.lr = 0x899DB40C;
	__imp__KeTlsSetValue(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899db300
	ctx.lr = 0x899DB414;
	sub_899DB300(ctx, base);
loc_899DB414:
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

DEFINE_REX_FUNC(sub_899DB788) {
	REX_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x899db5c0
	sub_899DB5C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DB798) {
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
	// bl 0x899dc508
	ctx.lr = 0x899DB7B0;
	sub_899DC508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899dc4d8
	ctx.lr = 0x899DB7B8;
	sub_899DC4D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899db5c0
	ctx.lr = 0x899DB7C4;
	sub_899DB5C0(ctx, base);
}

DEFINE_REX_FUNC(__savegprlr_15) {
	REX_FUNC_PROLOGUE();
	// std r15,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r15.u64);
	// std r16,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r16.u64);
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

DEFINE_REX_FUNC(__savegprlr_26) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restgprlr_19) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restgprlr_28) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_899DBCC8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1424
	ctx.r4.s64 = ctx.r11.s64 + 1424;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x899dbdb0
	ctx.lr = 0x899DBCF8;
	sub_899DBDB0(ctx, base);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x899dbd20
	if (ctx.cr6.eq) goto loc_899DBD20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899dbd20
	if (ctx.cr0.eq) goto loc_899DBD20;
	// lis r11,409
	ctx.r11.s64 = 26804224;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_899DBD20:
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x899e04e0
	ctx.lr = 0x899DBD34;
	sub_899E04E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_899DC688) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x899DC690;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r30,r10,152
	ctx.r30.s64 = ctx.r10.s64 + 152;
	// addi r28,r11,4840
	ctx.r28.s64 = ctx.r11.s64 + 4840;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_899DC6AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x899dc6d4
	if (!ctx.cr6.eq) goto loc_899DC6D4;
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// bl 0x899dc5f0
	ctx.lr = 0x899DC6CC;
	sub_899DC5F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x899dc6f4
	if (ctx.cr0.eq) goto loc_899DC6F4;
loc_899DC6D4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,288
	ctx.r11.s64 = ctx.r30.s64 + 288;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899dc6ac
	if (ctx.cr6.lt) goto loc_899DC6AC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_899DC6EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899DC6F4:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x899dc6ec
	goto loc_899DC6EC;
}

DEFINE_REX_FUNC(sub_899DCD98) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x899e06b8
	sub_899E06B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DCEF8) {
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
	// lis r31,-30212
	ctx.r31.s64 = -1979973632;
	// lwz r3,3820(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3820);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899dcf24
	if (ctx.cr6.eq) goto loc_899DCF24;
	// bl 0x899ddbe0
	ctx.lr = 0x899DCF1C;
	sub_899DDBE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3820(r31)
	REX_STORE_U32(ctx.r31.u32 + 3820, ctx.r11.u32);
loc_899DCF24:
	// lis r31,-30212
	ctx.r31.s64 = -1979973632;
	// lwz r3,3816(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899dcf40
	if (ctx.cr6.eq) goto loc_899DCF40;
	// bl 0x899ddbe0
	ctx.lr = 0x899DCF38;
	sub_899DDBE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3816(r31)
	REX_STORE_U32(ctx.r31.u32 + 3816, ctx.r11.u32);
loc_899DCF40:
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

DEFINE_REX_FUNC(sub_899DD648) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899dd68c
	if (!ctx.cr0.eq) goto loc_899DD68C;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x899e4288
	ctx.lr = 0x899DD688;
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x899dd690
	goto loc_899DD690;
loc_899DD68C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_899DD690:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899DE488) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899DE490;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r29,r11,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// li r27,64
	ctx.r27.s64 = 64;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_899DE4BC:
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x899de540
	if (ctx.cr6.eq) goto loc_899DE540;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x899de550
	if (ctx.cr6.gt) goto loc_899DE550;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x899de550
	if (ctx.cr6.gt) goto loc_899DE550;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x899dd3b8
	ctx.lr = 0x899DE500;
	sub_899DD3B8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x899de550
	if (ctx.cr0.eq) goto loc_899DE550;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x899dd6a0
	ctx.lr = 0x899DE524;
	sub_899DD6A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x899ddaa8
	ctx.lr = 0x899DE538;
	sub_899DDAA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x899de6bc
	goto loc_899DE6BC;
loc_899DE540:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x899de550
	if (!ctx.cr6.eq) goto loc_899DE550;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_899DE550:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x899de4bc
	if (ctx.cr6.lt) goto loc_899DE4BC;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x899de6b8
	if (ctx.cr6.eq) goto loc_899DE6B8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x899de6b8
	if (ctx.cr0.eq) goto loc_899DE6B8;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addis r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x899de59c
	if (ctx.cr6.gt) goto loc_899DE59C;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_899DE59C:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x899e4258
	ctx.lr = 0x899DE5B8;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x899de60c
	if (!ctx.cr0.lt) goto loc_899DE60C;
loc_899DE5C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x899de604
	if (ctx.cr6.eq) goto loc_899DE604;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x899de5e0
	if (!ctx.cr6.lt) goto loc_899DE5E0;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_899DE5E0:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x899e4258
	ctx.lr = 0x899DE5FC;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x899de5c0
	if (ctx.cr0.lt) goto loc_899DE5C0;
loc_899DE604:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x899de6b8
	if (ctx.cr6.lt) goto loc_899DE6B8;
loc_899DE60C:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bgt cr6,0x899de630
	if (ctx.cr6.gt) goto loc_899DE630;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_899DE630:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x899e4258
	ctx.lr = 0x899DE64C;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x899de6a0
	if (ctx.cr0.lt) goto loc_899DE6A0;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x899de320
	ctx.lr = 0x899DE67C;
	sub_899DE320(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x899de68c
	if (!ctx.cr0.eq) goto loc_899DE68C;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,23
	ctx.r30.u64 = ctx.r30.u64 | 23;
loc_899DE68C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x899de6a0
	if (ctx.cr6.lt) goto loc_899DE6A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x899de6bc
	goto loc_899DE6BC;
loc_899DE6A0:
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r6,1424(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x899e4288
	ctx.lr = 0x899DE6B8;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_899DE6B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_899DE6BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E07E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	REX_STORE_U32(ctx.r11.u32 + 352, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E0800) {
	REX_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899e0818
	if (!ctx.cr6.eq) goto loc_899E0818;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,352(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// blr 
	return;
loc_899E0818:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E0838) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// lis r11,-30306
	ctx.r11.s64 = -1986134016;
	// addi r30,r8,3992
	ctx.r30.s64 = ctx.r8.s64 + 3992;
	// addi r11,r11,5656
	ctx.r11.s64 = ctx.r11.s64 + 5656;
	// lis r10,-30306
	ctx.r10.s64 = -1986134016;
	// lis r9,-30306
	ctx.r9.s64 = -1986134016;
	// stw r11,3992(r8)
	REX_STORE_U32(ctx.r8.u32 + 3992, ctx.r11.u32);
	// lis r31,-30306
	ctx.r31.s64 = -1986134016;
	// addi r10,r10,2744
	ctx.r10.s64 = ctx.r10.s64 + 2744;
	// addi r9,r9,2728
	ctx.r9.s64 = ctx.r9.s64 + 2728;
	// addi r11,r31,2736
	ctx.r11.s64 = ctx.r31.s64 + 2736;
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lis r3,-30306
	ctx.r3.s64 = -1986134016;
	// stw r9,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lis r4,-30306
	ctx.r4.s64 = -1986134016;
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lis r5,-30306
	ctx.r5.s64 = -1986134016;
	// addi r10,r3,2600
	ctx.r10.s64 = ctx.r3.s64 + 2600;
	// addi r9,r4,5656
	ctx.r9.s64 = ctx.r4.s64 + 5656;
	// addi r11,r5,5576
	ctx.r11.s64 = ctx.r5.s64 + 5576;
	// stw r10,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lis r6,-30306
	ctx.r6.s64 = -1986134016;
	// stw r9,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lis r7,-30306
	ctx.r7.s64 = -1986134016;
	// stw r11,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lis r8,-30306
	ctx.r8.s64 = -1986134016;
	// addi r10,r6,2632
	ctx.r10.s64 = ctx.r6.s64 + 2632;
	// addi r9,r7,2424
	ctx.r9.s64 = ctx.r7.s64 + 2424;
	// addi r11,r8,2264
	ctx.r11.s64 = ctx.r8.s64 + 2264;
	// stw r10,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// stw r9,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r11,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899E0E00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899E0E08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// li r28,48
	ctx.r28.s64 = 48;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,1023
	ctx.r30.s64 = 1023;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// and r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x899e0e4c
	if (!ctx.cr6.eq) goto loc_899E0E4C;
	// bl 0x899dcab8
	ctx.lr = 0x899E0E38;
	sub_899DCAB8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x899dc948
	ctx.lr = 0x899E0E44;
	sub_899DC948(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x899e1208
	goto loc_899E1208;
loc_899E0E4C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x899e0e6c
	if (!ctx.cr6.eq) goto loc_899E0E6C;
	// bl 0x899dcab8
	ctx.lr = 0x899E0E58;
	sub_899DCAB8(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_899E0E5C:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x899dc948
	ctx.lr = 0x899E0E64;
	sub_899DC948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x899e1208
	goto loc_899E1208;
loc_899E0E6C:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// stb r26,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x899e0e8c
	if (ctx.cr6.gt) goto loc_899E0E8C;
	// bl 0x899dcab8
	ctx.lr = 0x899E0E84;
	sub_899DCAB8(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x899e0e5c
	goto loc_899E0E5C;
loc_899E0E8C:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r10,r11,12,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0x7FF;
	// cmpldi cr6,r10,2047
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 2047, ctx.xer);
	// bne cr6,0x899e0f30
	if (!ctx.cr6.eq) goto loc_899E0F30;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x899e0eac
	if (!ctx.cr6.eq) goto loc_899E0EAC;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x899e0eb0
	goto loc_899E0EB0;
loc_899E0EAC:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
loc_899E0EB0:
	// addi r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x899e0d10
	ctx.lr = 0x899E0EC4;
	sub_899E0D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x899e0ed4
	if (ctx.cr0.eq) goto loc_899E0ED4;
	// stb r26,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// b 0x899e1208
	goto loc_899E1208;
loc_899E0ED4:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x899e0ee8
	if (!ctx.cr6.eq) goto loc_899E0EE8;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_899E0EE8:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r29.u64;
	// stb r28,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// li r4,101
	ctx.r4.s64 = 101;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// stbu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r31.u32 = ea;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x899e1670
	ctx.lr = 0x899E0F0C;
	sub_899E1670(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x899e1204
	if (ctx.cr0.eq) goto loc_899E1204;
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r29.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r26,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r26.u8);
	// b 0x899e1204
	goto loc_899E1204;
loc_899E0F30:
	// rldicr r11,r11,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0x8000000000000000;
	// li r27,45
	ctx.r27.s64 = 45;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x899e0f48
	if (ctx.cr6.eq) goto loc_899E0F48;
	// stb r27,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_899E0F48:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r29.u64;
	// stb r28,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// li r12,2047
	ctx.r12.s64 = 2047;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r29.u64;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// stbu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r31.u32 = ea;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r5,r10,39
	ctx.r5.s64 = ctx.r10.s64 + 39;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x899e0fb4
	if (!ctx.cr6.eq) goto loc_899E0FB4;
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x899e0fac
	if (!ctx.cr6.eq) goto loc_899E0FAC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x899e0fc0
	goto loc_899E0FC0;
loc_899E0FAC:
	// li r30,1022
	ctx.r30.s64 = 1022;
	// b 0x899e0fc0
	goto loc_899E0FC0;
loc_899E0FB4:
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_899E0FC0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x899e0fd8
	if (!ctx.cr6.eq) goto loc_899E0FD8;
	// stb r26,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// b 0x899e0ff0
	goto loc_899E0FF0;
loc_899E0FD8:
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lwz r11,1400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1400);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_899E0FF0:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x899e10e0
	if (!ctx.cr6.gt) goto loc_899E10E0;
	// li r10,15
	ctx.r10.s64 = 15;
	// rldicr r10,r10,48,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFF000000000000;
loc_899E1008:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x899e1068
	if (!ctx.cr6.gt) goto loc_899E1068;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,57
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 57, ctx.xer);
	// ble cr6,0x899e1044
	if (!ctx.cr6.gt) goto loc_899E1044;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_899E1044:
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// rldicl r10,r10,60,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// mr. r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899e1008
	if (!ctx.cr0.lt) goto loc_899E1008;
loc_899E1068:
	// extsh. r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x899e10e0
	if (ctx.cr0.lt) goto loc_899E10E0;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x899e10e0
	if (!ctx.cr6.gt) goto loc_899E10E0;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_899E1094:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,102
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 102, ctx.xer);
	// beq cr6,0x899e10ac
	if (ctx.cr6.eq) goto loc_899E10AC;
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// bne cr6,0x899e10b8
	if (!ctx.cr6.eq) goto loc_899E10B8;
loc_899E10AC:
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x899e1094
	goto loc_899E1094;
loc_899E10B8:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x899e10d4
	if (ctx.cr6.eq) goto loc_899E10D4;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bne cr6,0x899e10d8
	if (!ctx.cr6.eq) goto loc_899E10D8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r10,r10,58
	ctx.r10.s64 = ctx.r10.s64 + 58;
	// b 0x899e10dc
	goto loc_899E10DC;
loc_899E10D4:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_899E10D8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_899E10DC:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_899E10E0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x899e1108
	if (!ctx.cr6.gt) goto loc_899E1108;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x899e1104
	if (ctx.cr0.eq) goto loc_899E1104;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_899E10FC:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x899e10fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E10FC;
loc_899E1104:
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_899E1108:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x899e1118
	if (!ctx.cr0.eq) goto loc_899E1118;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_899E1118:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r29.u64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r11,r11,12,53
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0x7FF;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// blt cr6,0x899e1150
	if (ctx.cr6.lt) goto loc_899E1150;
	// li r9,43
	ctx.r9.s64 = 43;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x899e1158
	goto loc_899E1158;
loc_899E1150:
	// stb r27,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r27.u8);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899E1158:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpdi cr6,r11,1000
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1000, ctx.xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r28,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// blt cr6,0x899e1198
	if (ctx.cr6.lt) goto loc_899E1198;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r6,r11,r9
	ctx.r6.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,1000
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1000));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x899e11a0
	if (!ctx.cr6.eq) goto loc_899E11A0;
loc_899E1198:
	// cmpdi cr6,r11,100
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 100, ctx.xer);
	// blt cr6,0x899e11c4
	if (ctx.cr6.lt) goto loc_899E11C4;
loc_899E11A0:
	// li r9,100
	ctx.r9.s64 = 100;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r6,r11,r9
	ctx.r6.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,100
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(100));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_899E11C4:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x899e11d4
	if (!ctx.cr6.eq) goto loc_899E11D4;
	// cmpdi cr6,r11,10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 10, ctx.xer);
	// blt cr6,0x899e11f8
	if (ctx.cr6.lt) goto loc_899E11F8;
loc_899E11D4:
	// li r9,10
	ctx.r9.s64 = 10;
	// divd r8,r11,r9
	ctx.r8.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(10));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_899E11F8:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r26,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r26.u8);
loc_899E1204:
	// li r3,0
	ctx.r3.s64 = 0;
loc_899E1208:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

