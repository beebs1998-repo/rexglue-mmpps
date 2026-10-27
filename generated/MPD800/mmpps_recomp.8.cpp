#include "mmpps_funcs.8.h"

DEFINE_REX_FUNC(sub_89916028) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x89916030;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x89915b40
	ctx.lr = 0x89916038;
	sub_89915B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899163bc
	if (ctx.cr6.eq) goto loc_899163BC;
	// lis r19,-30276
	ctx.r19.s64 = -1984167936;
	// lis r25,-30275
	ctx.r25.s64 = -1984102400;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r26,-30275
	ctx.r26.s64 = -1984102400;
	// lhz r9,32012(r19)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r19.u32 + 32012);
	// lis r22,-30270
	ctx.r22.s64 = -1983774720;
	// lis r24,-30270
	ctx.r24.s64 = -1983774720;
	// stb r21,9646(r25)
	REX_STORE_U8(ctx.r25.u32 + 9646, ctx.r21.u8);
	// lis r18,-30253
	ctx.r18.s64 = -1982660608;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r23,r11,8200
	ctx.r23.s64 = ctx.r11.s64 + 8200;
	// beq cr6,0x899161f8
	if (ctx.cr6.eq) goto loc_899161F8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// lis r27,-30253
	ctx.r27.s64 = -1982660608;
	// li r28,3
	ctx.r28.s64 = 3;
	// addi r30,r11,5768
	ctx.r30.s64 = ctx.r11.s64 + 5768;
loc_89916090:
	// rlwinm r31,r20,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899161dc
	if (ctx.cr6.eq) goto loc_899161DC;
	// lbz r10,9646(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 9646);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r9,9646(r25)
	REX_STORE_U8(ctx.r25.u32 + 9646, ctx.r9.u8);
	// blt cr6,0x89916140
	if (ctx.cr6.lt) goto loc_89916140;
	// bne cr6,0x899161dc
	if (!ctx.cr6.eq) goto loc_899161DC;
	// addi r8,r30,14
	ctx.r8.s64 = ctx.r30.s64 + 14;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lhzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// sthx r6,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u16);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x899161dc
	if (!ctx.cr6.gt) goto loc_899161DC;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// sthx r21,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r21.u16);
	// addi r10,r30,6
	ctx.r10.s64 = ctx.r30.s64 + 6;
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// addi r8,r23,20
	ctx.r8.s64 = ctx.r23.s64 + 20;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// rotlwi r7,r11,5
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// sth r11,26864(r24)
	REX_STORE_U16(ctx.r24.u32 + 26864, ctx.r11.u16);
	// sth r10,27272(r22)
	REX_STORE_U16(ctx.r22.u32 + 27272, ctx.r10.u16);
	// sth r9,12272(r26)
	REX_STORE_U16(ctx.r26.u32 + 12272, ctx.r9.u16);
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8991611C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,10
	ctx.r11.s64 = ctx.r30.s64 + 10;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// add r4,r5,r29
	ctx.r4.u64 = ctx.r5.u64 + ctx.r29.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// sthx r3,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x899161dc
	if (!ctx.cr6.eq) goto loc_899161DC;
	// stwx r21,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r21.u32);
	// b 0x899161dc
	goto loc_899161DC;
loc_89916140:
	// addi r11,r30,10
	ctx.r11.s64 = ctx.r30.s64 + 10;
	// lhz r10,12000(r18)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r18.u32 + 12000);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x89916160
	if (!ctx.cr6.gt) goto loc_89916160;
	// stwx r21,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r21.u32);
	// b 0x899161dc
	goto loc_899161DC;
loc_89916160:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lhz r8,-9516(r27)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r27.u32 + -9516);
	// addi r11,r30,14
	ctx.r11.s64 = ctx.r30.s64 + 14;
	// lhzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r6,r7,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// divw r4,r6,r28
	ctx.r4.u64 = uint32_t((ctx.r28.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r6.s32 / ctx.r28.s32 : 0);
	// divw r9,r7,r28
	ctx.r9.u64 = uint32_t((ctx.r28.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r7.s32 / ctx.r28.s32 : 0);
	// mullw r3,r4,r8
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r3,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthx r8,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u16);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x899161dc
	if (!ctx.cr6.gt) goto loc_899161DC;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// sthx r21,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u16);
	// addi r9,r30,6
	ctx.r9.s64 = ctx.r30.s64 + 6;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// addi r7,r23,20
	ctx.r7.s64 = ctx.r23.s64 + 20;
	// lhzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// lhzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// rotlwi r6,r10,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// sth r10,26864(r24)
	REX_STORE_U16(ctx.r24.u32 + 26864, ctx.r10.u16);
	// sth r9,27272(r22)
	REX_STORE_U16(ctx.r22.u32 + 27272, ctx.r9.u16);
	// sth r8,12272(r26)
	REX_STORE_U16(ctx.r26.u32 + 12272, ctx.r8.u16);
	// lwzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x899161DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899161DC:
	// addi r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 1;
	// lhz r10,32012(r19)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r19.u32 + 32012);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x89916090
	if (ctx.cr6.lt) goto loc_89916090;
loc_899161F8:
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// addi r25,r11,9656
	ctx.r25.s64 = ctx.r11.s64 + 9656;
	// lis r28,-30270
	ctx.r28.s64 = -1983774720;
	// addi r30,r25,60
	ctx.r30.s64 = ctx.r25.s64 + 60;
	// stb r21,5210(r27)
	REX_STORE_U8(ctx.r27.u32 + 5210, ctx.r21.u8);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
loc_89916218:
	// lwz r11,-60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899162a4
	if (ctx.cr6.eq) goto loc_899162A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899162a4
	if (ctx.cr6.eq) goto loc_899162A4;
	// lbz r10,5210(r27)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + 5210);
	// lhz r9,-32(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + -32);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r11,27852(r31)
	REX_STORE_U32(ctx.r31.u32 + 27852, ctx.r11.u32);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// stb r7,5210(r27)
	REX_STORE_U8(ctx.r27.u32 + 5210, ctx.r7.u8);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x899162a4
	if (!ctx.cr6.gt) goto loc_899162A4;
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r7,r23,24
	ctx.r7.s64 = ctx.r23.s64 + 24;
	// stb r29,4946(r28)
	REX_STORE_U8(ctx.r28.u32 + 4946, ctx.r29.u8);
	// rotlwi r6,r10,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sth r10,26864(r24)
	REX_STORE_U16(ctx.r24.u32 + 26864, ctx.r10.u16);
	// lwzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lhzu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sth r9,27272(r22)
	REX_STORE_U16(ctx.r22.u32 + 27272, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// stw r11,27852(r31)
	REX_STORE_U32(ctx.r31.u32 + 27852, ctx.r11.u32);
	// sth r7,12272(r26)
	REX_STORE_U16(ctx.r26.u32 + 12272, ctx.r7.u16);
	// bctrl 
	ctx.lr = 0x89916290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x899162a4
	if (ctx.cr6.eq) goto loc_899162A4;
	// lwz r11,27852(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27852);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_899162A4:
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// addi r11,r25,612
	ctx.r11.s64 = ctx.r25.s64 + 612;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89916218
	if (ctx.cr6.lt) goto loc_89916218;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r11,-10064(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -10064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899162d8
	if (ctx.cr6.eq) goto loc_899162D8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-10064(r10)
	REX_STORE_U32(ctx.r10.u32 + -10064, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899162D8:
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lwz r10,7924(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7924);
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r11,r8,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89916330
	if (ctx.cr6.eq) goto loc_89916330;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lhz r9,12000(r18)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r18.u32 + 12000);
	// lhz r11,27276(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 27276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8991630c
	if (!ctx.cr6.eq) goto loc_8991630C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// sth r9,27276(r7)
	REX_STORE_U16(ctx.r7.u32 + 27276, ctx.r9.u16);
loc_8991630C:
	// clrlwi r8,r8,17
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFF;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899163bc
	if (ctx.cr6.lt) goto loc_899163BC;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// sth r21,27276(r7)
	REX_STORE_U16(ctx.r7.u32 + 27276, ctx.r21.u16);
	// b 0x89916344
	goto loc_89916344;
loc_89916330:
	// lhz r11,12000(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 12000);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x899163bc
	if (ctx.cr6.lt) goto loc_899163BC;
loc_89916344:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r11,7924(r31)
	REX_STORE_U32(ctx.r31.u32 + 7924, ctx.r11.u32);
	// cmplwi cr6,r9,65280
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65280, ctx.xer);
	// sth r9,26864(r24)
	REX_STORE_U16(ctx.r24.u32 + 26864, ctx.r9.u16);
	// blt cr6,0x89916388
	if (ctx.cr6.lt) goto loc_89916388;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// addi r9,r11,14232
	ctx.r9.s64 = ctx.r11.s64 + 14232;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8991637C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// b 0x899163b4
	goto loc_899163B4;
loc_89916388:
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,7924(r31)
	REX_STORE_U32(ctx.r31.u32 + 7924, ctx.r11.u32);
	// addi r8,r23,24
	ctx.r8.s64 = ctx.r23.s64 + 24;
	// sth r9,27272(r22)
	REX_STORE_U16(ctx.r22.u32 + 27272, ctx.r9.u16);
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x899163AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
loc_899163B4:
	// bne cr6,0x899163bc
	if (!ctx.cr6.eq) goto loc_899163BC;
	// stw r30,7924(r31)
	REX_STORE_U32(ctx.r31.u32 + 7924, ctx.r30.u32);
loc_899163BC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89919088) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x89919090;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// addi r21,r11,9512
	ctx.r21.s64 = ctx.r11.s64 + 9512;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// addi r22,r11,5376
	ctx.r22.s64 = ctx.r11.s64 + 5376;
	// addi r26,r10,8016
	ctx.r26.s64 = ctx.r10.s64 + 8016;
loc_899190BC:
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991912c
	if (ctx.cr6.eq) goto loc_8991912C;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// rlwinm r11,r25,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x1FE;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lhzx r8,r30,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r26.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8991912c
	if (ctx.cr6.eq) goto loc_8991912C;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_899190F8:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
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
	ctx.lr = 0x8991911C;
	sub_89939350(ctx, base);
	// lhzx r11,r30,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r26.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899190f8
	if (ctx.cr6.lt) goto loc_899190F8;
loc_8991912C:
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,128
	ctx.r27.s64 = ctx.r27.s64 + 128;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899190bc
	if (ctx.cr6.lt) goto loc_899190BC;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lbz r11,6026(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6026);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89919230
	if (ctx.cr6.eq) goto loc_89919230;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r24,r11,13480
	ctx.r24.s64 = ctx.r11.s64 + 13480;
loc_89919168:
	// lhz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89919218
	if (ctx.cr6.eq) goto loc_89919218;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// rlwinm r11,r25,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x1FE;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lhzx r8,r30,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r26.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89919218
	if (ctx.cr6.eq) goto loc_89919218;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
loc_899191A4:
	// lwzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,4,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x89919208
	if (ctx.cr6.eq) goto loc_89919208;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r24,4
	ctx.r5.s64 = ctx.r24.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r4,r9,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r20,r8,4,0,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r8,68(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 68);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x899390e0
	ctx.lr = 0x89919208;
	sub_899390E0(ctx, base);
loc_89919208:
	// lhzx r11,r30,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r26.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899191a4
	if (ctx.cr6.lt) goto loc_899191A4;
loc_89919218:
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,128
	ctx.r28.s64 = ctx.r28.s64 + 128;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89919168
	if (ctx.cr6.lt) goto loc_89919168;
loc_89919230:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991A648) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x8991A650;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r25,-30253
	ctx.r25.s64 = -1982660608;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// addi r10,r10,5760
	ctx.r10.s64 = ctx.r10.s64 + 5760;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// li r28,32
	ctx.r28.s64 = 32;
	// sth r21,3624(r25)
	REX_STORE_U16(ctx.r25.u32 + 3624, ctx.r21.u16);
	// addi r29,r10,-20
	ctx.r29.s64 = ctx.r10.s64 + -20;
	// lis r27,-30276
	ctx.r27.s64 = -1984167936;
	// li r23,21
	ctx.r23.s64 = 21;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r22,r11,11272
	ctx.r22.s64 = ctx.r11.s64 + 11272;
loc_8991A688:
	// lwz r31,32(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// lwz r26,36(r29)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
loc_8991A694:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8991a6e8
	if (ctx.cr6.eq) goto loc_8991A6E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subfc r10,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r23.u64;
	// subfze r10,r24
	temp.u8 = ~ctx.r24.u32 + ctx.xer.ca < ~ctx.r24.u32;
	ctx.r10.u64 = ~ctx.r24.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8991a6cc
	if (ctx.cr6.lt) goto loc_8991A6CC;
	// bne cr6,0x8991a6e8
	if (!ctx.cr6.eq) goto loc_8991A6E8;
	// lwz r11,32028(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 32028);
	// stw r21,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32028(r27)
	REX_STORE_U32(ctx.r27.u32 + 32028, ctx.r11.u32);
	// b 0x8991a6e8
	goto loc_8991A6E8;
loc_8991A6CC:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r22,12
	ctx.r10.s64 = ctx.r22.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8991A6E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8991A6E8:
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8991a694
	if (!ctx.cr6.eq) goto loc_8991A694;
	// lhz r11,3624(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 3624);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwu r30,20(r29)
	ea = 20 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r29.u32 = ea;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,3624(r25)
	REX_STORE_U16(ctx.r25.u32 + 3624, ctx.r11.u16);
	// bne 0x8991a688
	if (!ctx.cr0.eq) goto loc_8991A688;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991AA90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8991aadc
	if (ctx.cr6.lt) goto loc_8991AADC;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8991aadc
	if (ctx.cr6.gt) goto loc_8991AADC;
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
	// bge 0x8991aac4
	if (!ctx.cr0.lt) goto loc_8991AAC4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8991AAC4:
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
	// adde r3,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_8991AADC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991B318) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8991B320;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30251
	ctx.r11.s64 = -1982529536;
	// lhz r10,12144(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991b410
	if (ctx.cr6.eq) goto loc_8991B410;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,-30288
	ctx.r8.s64 = -1984954368;
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r9,-10320
	ctx.r29.s64 = ctx.r9.s64 + -10320;
	// addi r11,r8,21760
	ctx.r11.s64 = ctx.r8.s64 + 21760;
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
	// ble cr6,0x8991b3a8
	if (!ctx.cr6.gt) goto loc_8991B3A8;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_8991B368:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r8,68(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// clrlwi r6,r10,8
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFFFF;
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lwz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,64(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r4,40(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x89939350
	ctx.lr = 0x8991B398;
	sub_89939350(ctx, base);
	// lhzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r29.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8991b368
	if (ctx.cr6.lt) goto loc_8991B368;
loc_8991B3A8:
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lbz r10,9526(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 9526);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8991b410
	if (ctx.cr6.eq) goto loc_8991B410;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8991b410
	if (!ctx.cr6.gt) goto loc_8991B410;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_8991B3C8:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,8,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF00000;
	// rlwinm r9,r9,0,10,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8991b400
	if (ctx.cr6.eq) goto loc_8991B400;
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
	ctx.lr = 0x8991B400;
	sub_899390E0(ctx, base);
loc_8991B400:
	// lhzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r29.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8991b3c8
	if (ctx.cr6.lt) goto loc_8991B3C8;
loc_8991B410:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991BDA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8991BDB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// mulli r7,r9,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r30,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwzx r6,r7,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// addi r4,r31,206
	ctx.r4.s64 = ctx.r31.s64 + 206;
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// rlwimi r6,r8,0,24,22
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r6.u64 & 0x100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stwx r6,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// lbzx r10,r30,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// addi r8,r31,204
	ctx.r8.s64 = ctx.r31.s64 + 204;
	// lbzx r9,r7,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addi r5,r31,204
	ctx.r5.s64 = ctx.r31.s64 + 204;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	// stbx r4,r30,r3
	REX_STORE_U8(ctx.r30.u32 + ctx.r3.u32, ctx.r4.u8);
	// lbzx r10,r7,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stbx r10,r30,r5
	REX_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r10.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8991be3c
	if (ctx.cr6.eq) goto loc_8991BE3C;
	// bl 0x89932b18
	ctx.lr = 0x8991BE28;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932d30
	ctx.lr = 0x8991BE34;
	sub_89932D30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8991be44
	goto loc_8991BE44;
loc_8991BE3C:
	// bl 0x89932e10
	ctx.lr = 0x8991BE40;
	sub_89932E10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8991BE44:
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// lhzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// lwzx r10,r30,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// srawi r7,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 3;
	// clrlwi r11,r7,26
	ctx.r11.u64 = ctx.r7.u32 & 0x3F;
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
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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

DEFINE_REX_FUNC(sub_8991CB98) {
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
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-10744(r9)
	REX_STORE_U32(ctx.r9.u32 + -10744, ctx.r11.u32);
	// stbx r5,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991CC50) {
	REX_FUNC_PROLOGUE();
	// lis r6,-30269
	ctx.r6.s64 = -1983709184;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// addi r10,r5,12800
	ctx.r10.s64 = ctx.r5.s64 + 12800;
	// mulli r11,r4,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// lwz r9,-10744(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + -10744);
	// lhz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// addi r8,r10,207
	ctx.r8.s64 = ctx.r10.s64 + 207;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// addi r4,r10,201
	ctx.r4.s64 = ctx.r10.s64 + 201;
	// addi r7,r7,9656
	ctx.r7.s64 = ctx.r7.s64 + 9656;
	// stbx r3,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u8);
	// addi r3,r7,76
	ctx.r3.s64 = ctx.r7.s64 + 76;
	// lbzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// mulli r7,r8,92
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(92));
	// lbzx r5,r7,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// addi r8,r10,200
	ctx.r8.s64 = ctx.r10.s64 + 200;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,-10744(r6)
	REX_STORE_U32(ctx.r6.u32 + -10744, ctx.r10.u32);
	// stbx r5,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u8);
	// stbx r5,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991D0C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r9,r10,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r11,176
	ctx.r8.s64 = ctx.r11.s64 + 176;
	// addi r7,r11,168
	ctx.r7.s64 = ctx.r11.s64 + 168;
	// lwzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// subf r4,r5,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991D188) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,32555(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 32555);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,32555(r10)
	REX_STORE_U8(ctx.r10.u32 + 32555, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991D1A0) {
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
	// ori r7,r8,256
	ctx.r7.u64 = ctx.r8.u64 | 256;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8991D360) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x8991D368;
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
	// bl 0x899d4c10
	ctx.lr = 0x8991D46C;
	sub_899D4C10(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8991F6B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x8991F6B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,14680
	ctx.r10.s64 = ctx.r10.s64 + 14680;
	// addi r9,r9,32020
	ctx.r9.s64 = ctx.r9.s64 + 32020;
loc_8991F6D0:
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x8991f6d0
	if (ctx.cr6.lt) goto loc_8991F6D0;
	// lis r25,-30276
	ctx.r25.s64 = -1984167936;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// addi r5,r11,3800
	ctx.r5.s64 = ctx.r11.s64 + 3800;
	// lbz r8,32018(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + 32018);
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// mulli r4,r8,416
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(416));
	// lwzx r7,r4,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bge cr6,0x8991f734
	if (!ctx.cr6.lt) goto loc_8991F734;
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// addi r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 + 12;
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// lwzx r7,r4,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r6,r4,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r3,r4,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// stb r7,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// stb r6,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r6.u8);
	// stb r3,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r3.u8);
loc_8991F734:
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lbz r3,586(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 586);
	// lwz r26,3508(r10)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 3508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8991f780
	if (!ctx.cr6.eq) goto loc_8991F780;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8991f780
	if (ctx.cr6.eq) goto loc_8991F780;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r8,r11,14692
	ctx.r8.s64 = ctx.r11.s64 + 14692;
	// lbz r7,14692(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 14692);
	// lbz r6,1(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r11,2(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// lbz r8,3(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// stb r7,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// stb r6,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r6.u8);
	// stb r11,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// stb r8,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r8.u8);
loc_8991F780:
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// addi r8,r10,14672
	ctx.r8.s64 = ctx.r10.s64 + 14672;
	// addi r27,r11,-31400
	ctx.r27.s64 = ctx.r11.s64 + -31400;
	// lbz r11,14672(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 14672);
	// addi r10,r27,4992
	ctx.r10.s64 = ctx.r27.s64 + 4992;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8991f7c8
	if (ctx.cr6.eq) goto loc_8991F7C8;
	// lis r7,16319
	ctx.r7.s64 = 1069481984;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// ori r6,r7,49152
	ctx.r6.u64 = ctx.r7.u64 | 49152;
loc_8991F7B0:
	// lbzu r7,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// subf r31,r6,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r6.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8991f7b0
	if (!ctx.cr6.eq) goto loc_8991F7B0;
loc_8991F7C8:
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lis r10,16319
	ctx.r10.s64 = 1069481984;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// ori r28,r10,16384
	ctx.r28.u64 = ctx.r10.u64 | 16384;
	// addi r10,r27,5032
	ctx.r10.s64 = ctx.r27.s64 + 5032;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8991f800
	if (ctx.cr6.eq) goto loc_8991F800;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8991F7E8:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r7,r28,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r28.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8991f7e8
	if (!ctx.cr6.eq) goto loc_8991F7E8;
loc_8991F800:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r10,r27,5076
	ctx.r10.s64 = ctx.r27.s64 + 5076;
	// addi r8,r11,14676
	ctx.r8.s64 = ctx.r11.s64 + 14676;
	// lbz r11,14676(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14676);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8991f840
	if (ctx.cr6.eq) goto loc_8991F840;
	// lis r9,16448
	ctx.r9.s64 = 1077936128;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// ori r7,r9,49152
	ctx.r7.u64 = ctx.r9.u64 | 49152;
loc_8991F828:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8991f828
	if (!ctx.cr6.eq) goto loc_8991F828;
loc_8991F840:
	// addi r9,r5,25
	ctx.r9.s64 = ctx.r5.s64 + 25;
	// lwzx r10,r4,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r7,r8,14684
	ctx.r7.s64 = ctx.r8.s64 + 14684;
	// addi r29,r11,12280
	ctx.r29.s64 = ctx.r11.s64 + 12280;
	// lbzx r6,r4,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// lis r31,-30253
	ctx.r31.s64 = -1982660608;
	// lis r30,-30270
	ctx.r30.s64 = -1983774720;
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,39(r29)
	REX_STORE_U8(ctx.r29.u32 + 39, ctx.r11.u8);
	// stw r10,-9544(r31)
	REX_STORE_U32(ctx.r31.u32 + -9544, ctx.r10.u32);
	// lwzx r9,r5,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stw r9,20408(r30)
	REX_STORE_U32(ctx.r30.u32 + 20408, ctx.r9.u32);
	// bne cr6,0x8991f8c8
	if (!ctx.cr6.eq) goto loc_8991F8C8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8991f8c8
	if (ctx.cr6.eq) goto loc_8991F8C8;
	// lis r11,-30234
	ctx.r11.s64 = -1981415424;
	// addi r11,r11,-14840
	ctx.r11.s64 = ctx.r11.s64 + -14840;
	// addi r7,r11,84
	ctx.r7.s64 = ctx.r11.s64 + 84;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// stw r11,-9544(r31)
	REX_STORE_U32(ctx.r31.u32 + -9544, ctx.r11.u32);
loc_8991F8C8:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// addi r26,r11,25128
	ctx.r26.s64 = ctx.r11.s64 + 25128;
	// lis r6,-32640
	ctx.r6.s64 = -2139095040;
	// li r4,39
	ctx.r4.s64 = 39;
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// lbz r5,7512(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7512);
	// addi r24,r10,7512
	ctx.r24.s64 = ctx.r10.s64 + 7512;
	// lwz r3,664(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 664);
	// bl 0x89927b98
	ctx.lr = 0x8991F8F0;
	sub_89927B98(ctx, base);
	// lis r6,-32640
	ctx.r6.s64 = -2139095040;
	// lbz r5,1(r24)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,1360(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 1360);
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// bl 0x89927b98
	ctx.lr = 0x8991F908;
	sub_89927B98(ctx, base);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r6,20408(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20408);
	// lbz r5,2(r24)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r24.u32 + 2);
	// lwz r3,-9544(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -9544);
	// bl 0x89927b98
	ctx.lr = 0x8991F91C;
	sub_89927B98(ctx, base);
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lbz r11,9527(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 9527);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8991f980
	if (ctx.cr6.gt) goto loc_8991F980;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,23312
	ctx.r11.s64 = ctx.r9.s64 + 23312;
	// addi r9,r27,4780
	ctx.r9.s64 = ctx.r27.s64 + 4780;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8991f978
	if (ctx.cr6.eq) goto loc_8991F978;
	// lis r8,32639
	ctx.r8.s64 = 2139029504;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// ori r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 32768;
loc_8991F960:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8991f960
	if (!ctx.cr6.eq) goto loc_8991F960;
loc_8991F978:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,37(r29)
	REX_STORE_U8(ctx.r29.u32 + 37, ctx.r11.u8);
loc_8991F980:
	// lbz r11,32018(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 32018);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8991f9dc
	if (ctx.cr6.gt) goto loc_8991F9DC;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,23396
	ctx.r9.s64 = ctx.r9.s64 + 23396;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r27,4908
	ctx.r8.s64 = ctx.r27.s64 + 4908;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8991f9d4
	if (ctx.cr6.eq) goto loc_8991F9D4;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
loc_8991F9BC:
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
	// bne cr6,0x8991f9bc
	if (!ctx.cr6.eq) goto loc_8991F9BC;
loc_8991F9D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,38(r29)
	REX_STORE_U8(ctx.r29.u32 + 38, ctx.r11.u8);
loc_8991F9DC:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lbz r11,12323(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12323);
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30273
	ctx.r5.s64 = -1983971328;
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r11,531(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 531);
	// lbz r3,-31401(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + -31401);
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// lbz r10,6026(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 6026);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lbz r11,9643(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 9643);
	// or r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 | ctx.r3.u64;
	// lbz r9,9526(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 9526);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lbz r10,6414(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 6414);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// or r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 | ctx.r8.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r3,-30276
	ctx.r3.s64 = -1984167936;
	// or r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 | ctx.r6.u64;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// or r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,9518(r6)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + 9518);
	// lbz r6,32547(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 32547);
	// or r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 | ctx.r11.u64;
	// lbz r8,6034(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 6034);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// stb r11,9642(r5)
	REX_STORE_U8(ctx.r5.u32 + 9642, ctx.r11.u8);
	// or r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 | ctx.r10.u64;
	// addi r4,r4,12280
	ctx.r4.s64 = ctx.r4.s64 + 12280;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r3,1,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stb r10,6031(r31)
	REX_STORE_U8(ctx.r31.u32 + 6031, ctx.r10.u8);
	// stb r8,31(r4)
	REX_STORE_U8(ctx.r4.u32 + 31, ctx.r8.u8);
	// stb r9,6030(r5)
	REX_STORE_U8(ctx.r5.u32 + 6030, ctx.r9.u8);
	// stb r7,30(r4)
	REX_STORE_U8(ctx.r4.u32 + 30, ctx.r7.u8);
	// stb r6,23(r4)
	REX_STORE_U8(ctx.r4.u32 + 23, ctx.r6.u8);
	// stb r11,22(r4)
	REX_STORE_U8(ctx.r4.u32 + 22, ctx.r11.u8);
	// bl 0x89949960
	ctx.lr = 0x8991FAB0;
	sub_89949960(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89925248) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89925250;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r4,-16320
	ctx.r4.s64 = -1069547520;
	// addi r3,r11,16464
	ctx.r3.s64 = ctx.r11.s64 + 16464;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x89931dd8
	ctx.lr = 0x89925268;
	sub_89931DD8(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,35
	ctx.r4.s64 = 35;
	// lwz r3,26936(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 26936);
	// bl 0x89931bb8
	ctx.lr = 0x8992527C;
	sub_89931BB8(ctx, base);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r3,-10064(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + -10064);
	// bl 0x89931bb8
	ctx.lr = 0x89925290;
	sub_89931BB8(ctx, base);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r3,11748(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 11748);
	// bl 0x89931bb8
	ctx.lr = 0x899252A4;
	sub_89931BB8(ctx, base);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,3892(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 3892);
	// bl 0x89931bb8
	ctx.lr = 0x899252B8;
	sub_89931BB8(ctx, base);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r31,r11,5344
	ctx.r31.s64 = ctx.r11.s64 + 5344;
	// addi r27,r10,12280
	ctx.r27.s64 = ctx.r10.s64 + 12280;
	// addi r30,r9,-31400
	ctx.r30.s64 = ctx.r9.s64 + -31400;
	// addi r23,r8,27280
	ctx.r23.s64 = ctx.r8.s64 + 27280;
	// addi r29,r7,25128
	ctx.r29.s64 = ctx.r7.s64 + 25128;
loc_899252E4:
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r22,r24,696
	ctx.r22.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(696));
	// lwzx r3,r22,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r29.u32);
	// add r25,r11,r24
	ctx.r25.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// extsh r21,r11
	ctx.r21.s64 = ctx.r11.s16;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x89931bb8
	ctx.lr = 0x89925308;
	sub_89931BB8(ctx, base);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// lwzx r3,r22,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// bl 0x89931bb8
	ctx.lr = 0x8992531C;
	sub_89931BB8(ctx, base);
	// addi r26,r29,8
	ctx.r26.s64 = ctx.r29.s64 + 8;
	// addi r20,r29,12
	ctx.r20.s64 = ctx.r29.s64 + 12;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r19,r29,16
	ctx.r19.s64 = ctx.r29.s64 + 16;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r8,26(r27)
	REX_STORE_U8(ctx.r27.u32 + 26, ctx.r8.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r7,25(r27)
	REX_STORE_U8(ctx.r27.u32 + 25, ctx.r7.u8);
	// rlwinm r28,r21,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r6,24(r27)
	REX_STORE_U8(ctx.r27.u32 + 24, ctx.r6.u8);
	// addi r11,r30,3328
	ctx.r11.s64 = ctx.r30.s64 + 3328;
	// addi r10,r30,3200
	ctx.r10.s64 = ctx.r30.s64 + 3200;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r9,r30,3072
	ctx.r9.s64 = ctx.r30.s64 + 3072;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 + ctx.r9.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwzx r8,r22,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r26.u32);
	// lwzx r7,r22,r20
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r20.u32);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// lwzx r8,r22,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r19.u32);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lwzx r3,r22,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r3.u32);
	// rlwinm r26,r6,30,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3C;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r20,r7,30,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3C;
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// rlwinm r19,r8,30,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3C;
	// lwzx r26,r26,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwzx r20,r20,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r19,r19,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r20,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r19,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r19.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// bl 0x89931bb8
	ctx.lr = 0x899253D0;
	sub_89931BB8(ctx, base);
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwzx r3,r22,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r7.u32);
	// bl 0x89931bb8
	ctx.lr = 0x899253E4;
	sub_89931BB8(ctx, base);
	// addi r5,r29,660
	ctx.r5.s64 = ctx.r29.s64 + 660;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r25,7
	ctx.r6.s64 = ctx.r25.s64 + 7;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r30,2560
	ctx.r11.s64 = ctx.r30.s64 + 2560;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r26,r3,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,2560
	ctx.r10.s64 = ctx.r30.s64 + 2560;
	// addi r7,r29,676
	ctx.r7.s64 = ctx.r29.s64 + 676;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lbzx r6,r22,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r5.u32);
	// rlwinm r5,r6,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r4,r6,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r6,r5,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r20,r4,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwzx r3,r22,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r7.u32);
	// stb r9,20(r27)
	REX_STORE_U8(ctx.r27.u32 + 20, ctx.r9.u8);
	// stw r20,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r20.u32);
	// bl 0x89931bb8
	ctx.lr = 0x8992544C;
	sub_89931BB8(ctx, base);
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// lbz r8,0(r23)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// addi r5,r30,2304
	ctx.r5.s64 = ctx.r30.s64 + 2304;
	// lbz r7,128(r23)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r23.u32 + 128);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r4,r25,6
	ctx.r4.s64 = ctx.r25.s64 + 6;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r8,30,2,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFC;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addi r19,r25,10
	ctx.r19.s64 = ctx.r25.s64 + 10;
	// addi r11,r30,2304
	ctx.r11.s64 = ctx.r30.s64 + 2304;
	// rlwinm r25,r8,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// rlwinm r20,r7,30,2,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// addi r3,r29,624
	ctx.r3.s64 = ctx.r29.s64 + 624;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,2304
	ctx.r9.s64 = ctx.r30.s64 + 2304;
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// extsh r19,r19
	ctx.r19.s64 = ctx.r19.s16;
	// lbz r6,256(r23)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r23.u32 + 256);
	// addi r18,r29,625
	ctx.r18.s64 = ctx.r29.s64 + 625;
	// lwzx r21,r21,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// rlwinm r11,r6,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r25,r25,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// lbzx r3,r22,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r3.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r20,r20,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// lbz r8,384(r23)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r23.u32 + 384);
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// lwzx r14,r11,r31
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r11,r3,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r25,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
	// rlwinm r17,r8,30,2,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r20,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r20.u32);
	// rlwinm r16,r8,2,26,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r20,80(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r3,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r8,r6,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwzx r15,r7,r31
	ctx.r15.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// addi r7,r30,2176
	ctx.r7.s64 = ctx.r30.s64 + 2176;
	// lwzx r21,r17,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// lbzx r6,r22,r18
	ctx.r6.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r18.u32);
	// add r10,r28,r7
	ctx.r10.u64 = ctx.r28.u64 + ctx.r7.u64;
	// lwzx r25,r16,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r31.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r8,r30,2304
	ctx.r8.s64 = ctx.r30.s64 + 2304;
	// stw r15,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r15.u32);
	// rlwinm r19,r6,30,2,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r14,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r14.u32);
	// rlwinm r18,r6,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwz r17,84(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r30,2176
	ctx.r6.s64 = ctx.r30.s64 + 2176;
	// stw r17,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r17.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r20,r20,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// add r7,r4,r6
	ctx.r7.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stw r21,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r21.u32);
	// addi r5,r29,626
	ctx.r5.s64 = ctx.r29.s64 + 626;
	// stw r25,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r25.u32);
	// lwzx r8,r19,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// lwzx r25,r18,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// stw r20,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// addi r3,r29,627
	ctx.r3.s64 = ctx.r29.s64 + 627;
	// stb r9,18(r27)
	REX_STORE_U8(ctx.r27.u32 + 18, ctx.r9.u8);
	// stwx r8,r4,r6
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r8.u32);
	// addi r9,r29,655
	ctx.r9.s64 = ctx.r29.s64 + 655;
	// lbzx r10,r22,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r5.u32);
	// addi r4,r29,654
	ctx.r4.s64 = ctx.r29.s64 + 654;
	// stw r25,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r25.u32);
	// addi r6,r29,633
	ctx.r6.s64 = ctx.r29.s64 + 633;
	// lbzx r7,r22,r3
	ctx.r7.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r3.u32);
	// rlwinm r21,r10,30,2,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r8,r10,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r25,r7,30,2,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// lbzx r3,r22,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r9.u32);
	// addi r10,r30,2176
	ctx.r10.s64 = ctx.r30.s64 + 2176;
	// lbzx r4,r22,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r4.u32);
	// addi r9,r30,2176
	ctx.r9.s64 = ctx.r30.s64 + 2176;
	// lbzx r6,r22,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r6.u32);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwzx r21,r21,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r19,r8,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r5,r25,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r20,r29,637
	ctx.r20.s64 = ctx.r29.s64 + 637;
	// rlwinm r25,r3,30,2,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// rlwinm r3,r3,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r18,r7,r31
	ctx.r18.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// addi r8,r30,2048
	ctx.r8.s64 = ctx.r30.s64 + 2048;
	// stw r19,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r19.u32);
	// rlwinm r17,r4,30,2,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r5,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lbzx r20,r22,r20
	ctx.r20.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r20.u32);
	// add r10,r28,r8
	ctx.r10.u64 = ctx.r28.u64 + ctx.r8.u64;
	// lwzx r5,r25,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// rlwinm r21,r6,30,2,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r7,r30,2048
	ctx.r7.s64 = ctx.r30.s64 + 2048;
	// stw r18,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r18.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r25,r20,30,2,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r19,r17,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// addi r8,r30,2048
	ctx.r8.s64 = ctx.r30.s64 + 2048;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r9,r26,r7
	ctx.r9.u64 = ctx.r26.u64 + ctx.r7.u64;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// addi r18,r29,636
	ctx.r18.s64 = ctx.r29.s64 + 636;
	// lwzx r21,r21,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r17,r6,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r16,r29,638
	ctx.r16.s64 = ctx.r29.s64 + 638;
	// lwzx r25,r25,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// rlwinm r5,r20,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// addi r7,r30,1920
	ctx.r7.s64 = ctx.r30.s64 + 1920;
	// stw r19,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r19.u32);
	// lbzx r3,r22,r18
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r18.u32);
	// addi r6,r30,1920
	ctx.r6.s64 = ctx.r30.s64 + 1920;
	// stw r4,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// add r10,r28,r7
	ctx.r10.u64 = ctx.r28.u64 + ctx.r7.u64;
	// lbzx r20,r22,r16
	ctx.r20.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r16.u32);
	// rlwinm r19,r3,30,2,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r21,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r21.u32);
	// rlwinm r4,r3,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r3,r20,30,2,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r17,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r17.u32);
	// rlwinm r21,r20,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// stwx r25,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r25.u32);
	// addi r25,r29,648
	ctx.r25.s64 = ctx.r29.s64 + 648;
	// addi r7,r30,1920
	ctx.r7.s64 = ctx.r30.s64 + 1920;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r9,r26,r6
	ctx.r9.u64 = ctx.r26.u64 + ctx.r6.u64;
	// stw r5,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r5,r19,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r21,r21,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// lbzx r25,r22,r25
	ctx.r25.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r25.u32);
	// addi r20,r29,649
	ctx.r20.s64 = ctx.r29.s64 + 649;
	// stwx r5,r26,r6
	REX_STORE_U32(ctx.r26.u32 + ctx.r6.u32, ctx.r5.u32);
	// stw r4,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// rlwinm r5,r25,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r3,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// rlwinm r3,r25,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r21,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r21.u32);
	// addi r6,r29,640
	ctx.r6.s64 = ctx.r29.s64 + 640;
	// addi r10,r30,1792
	ctx.r10.s64 = ctx.r30.s64 + 1792;
	// stb r8,17(r27)
	REX_STORE_U8(ctx.r27.u32 + 17, ctx.r8.u8);
	// lbzx r9,r22,r20
	ctx.r9.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r20.u32);
	// addi r4,r29,641
	ctx.r4.s64 = ctx.r29.s64 + 641;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// addi r25,r29,642
	ctx.r25.s64 = ctx.r29.s64 + 642;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r21,r9,30,2,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFC;
	// lbzx r6,r22,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r6.u32);
	// rlwinm r20,r9,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// stb r7,16(r27)
	REX_STORE_U8(ctx.r27.u32 + 16, ctx.r7.u8);
	// lbzx r4,r22,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r4.u32);
	// addi r9,r30,1792
	ctx.r9.s64 = ctx.r30.s64 + 1792;
	// rlwinm r19,r6,30,2,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lbzx r25,r22,r25
	ctx.r25.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r25.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r21,r21,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r18,r4,30,2,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// rlwinm r5,r4,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r4,r20,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// addi r8,r30,1664
	ctx.r8.s64 = ctx.r30.s64 + 1664;
	// lwzx r20,r19,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// rlwinm r3,r25,30,2,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r19,r6,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r17,r29,643
	ctx.r17.s64 = ctx.r29.s64 + 643;
	// stw r21,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r21.u32);
	// addi r7,r30,1664
	ctx.r7.s64 = ctx.r30.s64 + 1664;
	// lwzx r18,r18,r31
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// add r10,r28,r8
	ctx.r10.u64 = ctx.r28.u64 + ctx.r8.u64;
	// stw r4,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// addi r16,r29,644
	ctx.r16.s64 = ctx.r29.s64 + 644;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// add r8,r26,r7
	ctx.r8.u64 = ctx.r26.u64 + ctx.r7.u64;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// addi r15,r29,645
	ctx.r15.s64 = ctx.r29.s64 + 645;
	// lbzx r9,r22,r17
	ctx.r9.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r17.u32);
	// addi r6,r30,1664
	ctx.r6.s64 = ctx.r30.s64 + 1664;
	// rlwinm r4,r25,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r20,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// lbzx r7,r22,r16
	ctx.r7.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r16.u32);
	// rlwinm r21,r9,30,2,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r19,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r19.u32);
	// rlwinm r20,r9,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// stw r18,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r18.u32);
	// rlwinm r19,r7,30,2,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// lbzx r25,r22,r15
	ctx.r25.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r15.u32);
	// rlwinm r18,r7,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stw r5,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stwx r3,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r3.u32);
	// rlwinm r17,r25,30,2,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r3,r4,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r4,r21,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r21,r20,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// addi r10,r30,1536
	ctx.r10.s64 = ctx.r30.s64 + 1536;
	// addi r6,r30,1536
	ctx.r6.s64 = ctx.r30.s64 + 1536;
	// lwzx r20,r19,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// lwzx r19,r18,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// rlwinm r25,r25,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stb r9,15(r27)
	REX_STORE_U8(ctx.r27.u32 + 15, ctx.r9.u8);
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stb r8,14(r27)
	REX_STORE_U8(ctx.r27.u32 + 14, ctx.r8.u8);
	// addi r5,r30,1408
	ctx.r5.s64 = ctx.r30.s64 + 1408;
	// lwzx r18,r17,r31
	ctx.r18.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// add r9,r26,r6
	ctx.r9.u64 = ctx.r26.u64 + ctx.r6.u64;
	// addi r8,r29,651
	ctx.r8.s64 = ctx.r29.s64 + 651;
	// stw r3,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r7,r29,652
	ctx.r7.s64 = ctx.r29.s64 + 652;
	// stw r21,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r21.u32);
	// add r10,r28,r5
	ctx.r10.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stwx r20,r26,r6
	REX_STORE_U32(ctx.r26.u32 + ctx.r6.u32, ctx.r20.u32);
	// addi r4,r29,653
	ctx.r4.s64 = ctx.r29.s64 + 653;
	// lbzx r6,r22,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r8.u32);
	// addi r8,r30,1280
	ctx.r8.s64 = ctx.r30.s64 + 1280;
	// lwzx r25,r25,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// addi r3,r29,646
	ctx.r3.s64 = ctx.r29.s64 + 646;
	// rlwinm r20,r6,30,2,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r19,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r19.u32);
	// lbzx r7,r22,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r7.u32);
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// stwx r18,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r18.u32);
	// add r9,r28,r8
	ctx.r9.u64 = ctx.r28.u64 + ctx.r8.u64;
	// lbzx r4,r22,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r4.u32);
	// rlwinm r17,r7,30,2,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r25,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
	// rlwinm r19,r7,2,26,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r25,r20,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// rlwinm r5,r4,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lbzx r3,r22,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r3.u32);
	// addi r7,r30,1280
	ctx.r7.s64 = ctx.r30.s64 + 1280;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r8,r30,1280
	ctx.r8.s64 = ctx.r30.s64 + 1280;
	// lwzx r18,r17,r31
	ctx.r18.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// addi r21,r29,647
	ctx.r21.s64 = ctx.r29.s64 + 647;
	// lwzx r19,r19,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// stw r25,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// add r10,r26,r7
	ctx.r10.u64 = ctx.r26.u64 + ctx.r7.u64;
	// rlwinm r20,r3,30,2,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// addi r25,r29,659
	ctx.r25.s64 = ctx.r29.s64 + 659;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// rlwinm r3,r3,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lbzx r21,r22,r21
	ctx.r21.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r21.u32);
	// addi r7,r30,1024
	ctx.r7.s64 = ctx.r30.s64 + 1024;
	// stw r18,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r18.u32);
	// stw r19,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r19.u32);
	// addi r8,r30,1024
	ctx.r8.s64 = ctx.r30.s64 + 1024;
	// lbzx r25,r22,r25
	ctx.r25.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r25.u32);
	// add r9,r28,r7
	ctx.r9.u64 = ctx.r28.u64 + ctx.r7.u64;
	// lwzx r6,r20,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// rlwinm r20,r21,30,2,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3FFFFFFC;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// rlwinm r5,r21,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// add r8,r26,r8
	ctx.r8.u64 = ctx.r26.u64 + ctx.r8.u64;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// rlwinm r4,r25,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stwx r6,r28,r7
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r6.u32);
	// rlwinm r26,r25,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// lwzx r22,r20,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r3,r5,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// addi r5,r30,896
	ctx.r5.s64 = ctx.r30.s64 + 896;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// extsh r25,r24
	ctx.r25.s64 = ctx.r24.s16;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,13(r27)
	REX_STORE_U8(ctx.r27.u32 + 13, ctx.r11.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r22,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r22.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwzx r26,r26,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// stw r3,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// add r11,r28,r5
	ctx.r11.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stb r10,12(r27)
	REX_STORE_U8(ctx.r27.u32 + 12, ctx.r10.u8);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// stb r9,11(r27)
	REX_STORE_U8(ctx.r27.u32 + 11, ctx.r9.u8);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// stb r7,10(r27)
	REX_STORE_U8(ctx.r27.u32 + 10, ctx.r7.u8);
	// stb r6,8(r27)
	REX_STORE_U8(ctx.r27.u32 + 8, ctx.r6.u8);
	// stwx r4,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r4.u32);
	// stb r10,7(r27)
	REX_STORE_U8(ctx.r27.u32 + 7, ctx.r10.u8);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// blt cr6,0x899252e4
	if (ctx.cr6.lt) goto loc_899252E4;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89928BA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89928BA8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lhz r10,3624(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 3624);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89928e90
	if (ctx.cr6.eq) goto loc_89928E90;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r16,-30284
	ctx.r16.s64 = -1984692224;
	// addi r8,r11,9512
	ctx.r8.s64 = ctx.r11.s64 + 9512;
	// addi r10,r10,4176
	ctx.r10.s64 = ctx.r10.s64 + 4176;
	// addi r9,r9,25128
	ctx.r9.s64 = ctx.r9.s64 + 25128;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lis r11,-30284
	ctx.r11.s64 = -1984692224;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r7,23812(r16)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 23812);
	// mr r15,r10
	ctx.r15.u64 = ctx.r10.u64;
	// addi r24,r9,664
	ctx.r24.s64 = ctx.r9.s64 + 664;
	// lis r23,-32768
	ctx.r23.s64 = -2147483648;
	// lis r20,-16384
	ctx.r20.s64 = -1073741824;
	// lis r21,16384
	ctx.r21.s64 = 1073741824;
	// lis r19,128
	ctx.r19.s64 = 8388608;
	// lis r14,-30274
	ctx.r14.s64 = -1984036864;
	// addi r18,r11,23816
	ctx.r18.s64 = ctx.r11.s64 + 23816;
loc_89928C08:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x89928e74
	if (ctx.cr6.eq) goto loc_89928E74;
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_89928C20:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89928e54
	if (ctx.cr6.eq) goto loc_89928E54;
	// lwz r30,32(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89928e54
	if (ctx.cr6.eq) goto loc_89928E54;
	// rlwinm r22,r10,0,0,1
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
loc_89928C48:
	// lwz r25,4(r30)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmpw cr6,r22,r23
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x89928cb0
	if (ctx.cr6.eq) goto loc_89928CB0;
	// cmpw cr6,r22,r20
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x89928c94
	if (ctx.cr6.eq) goto loc_89928C94;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r22,r21
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r21.s32, ctx.xer);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x89928c84
	if (ctx.cr6.eq) goto loc_89928C84;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// b 0x89928cc8
	goto loc_89928CC8;
loc_89928C84:
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r28,r9,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x89928cc8
	goto loc_89928CC8;
loc_89928C94:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r28,r9,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x89928cc8
	goto loc_89928CC8;
loc_89928CB0:
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r29,r9,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_89928CC8:
	// lbz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 68);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x89928cf0
	if (!ctx.cr6.eq) goto loc_89928CF0;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mullw r9,r11,r26
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// mullw r8,r10,r25
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// srawi r26,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r9.s32 >> 8;
	// srawi r25,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 8;
loc_89928CF0:
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x89928e48
	if (ctx.cr6.eq) goto loc_89928E48;
loc_89928CFC:
	// lwzu r3,-4(r27)
	ea = -4 + ctx.r27.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r10,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89928e3c
	if (ctx.cr6.eq) goto loc_89928E3C;
	// lwz r7,52(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// subf. r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x89928d24
	if (!ctx.cr0.lt) goto loc_89928D24;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89928D24:
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x89928e3c
	if (!ctx.cr6.lt) goto loc_89928E3C;
	// lwz r8,56(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf. r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x89928d40
	if (!ctx.cr0.lt) goto loc_89928D40;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_89928D40:
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x89928e3c
	if (!ctx.cr6.lt) goto loc_89928E3C;
	// rlwinm r11,r10,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89928d64
	if (ctx.cr6.eq) goto loc_89928D64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89928e3c
	if (ctx.cr6.eq) goto loc_89928E3C;
loc_89928D64:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x89928e3c
	if (ctx.cr6.eq) goto loc_89928E3C;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r5,r10,0,0,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
loc_89928D7C:
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r5,r23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r23.s32, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x89928dbc
	if (ctx.cr6.eq) goto loc_89928DBC;
	// cmpw cr6,r5,r20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x89928db4
	if (ctx.cr6.eq) goto loc_89928DB4;
	// cmpw cr6,r5,r21
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r21.s32, ctx.xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// beq cr6,0x89928dac
	if (ctx.cr6.eq) goto loc_89928DAC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x89928dc4
	goto loc_89928DC4;
loc_89928DAC:
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x89928dc4
	goto loc_89928DC4;
loc_89928DB4:
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x89928dc0
	goto loc_89928DC0;
loc_89928DBC:
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_89928DC0:
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
loc_89928DC4:
	// subf. r10,r10,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bge 0x89928dd4
	if (!ctx.cr0.lt) goto loc_89928DD4;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89928DD4:
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + ctx.r26.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x89928df8
	if (!ctx.cr6.lt) goto loc_89928DF8;
	// subf. r10,r9,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x89928dec
	if (!ctx.cr0.lt) goto loc_89928DEC;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_89928DEC:
	// add r9,r4,r25
	ctx.r9.u64 = ctx.r4.u64 + ctx.r25.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x89928e08
	if (ctx.cr6.lt) goto loc_89928E08;
loc_89928DF8:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x89928d7c
	if (!ctx.cr6.eq) goto loc_89928D7C;
	// b 0x89928e3c
	goto loc_89928E3C;
loc_89928E08:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x89928e38
	if (!ctx.cr6.eq) goto loc_89928E38;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_89928E38:
	// bl 0x8991ab58
	ctx.lr = 0x89928E3C;
	sub_8991AB58(ctx, base);
loc_89928E3C:
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x89928cfc
	if (!ctx.cr6.eq) goto loc_89928CFC;
	// lwz r7,23812(r16)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 23812);
loc_89928E48:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89928c48
	if (!ctx.cr6.eq) goto loc_89928C48;
loc_89928E54:
	// lhz r11,584(r14)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r14.u32 + 584);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x89928c20
	if (!ctx.cr6.eq) goto loc_89928C20;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_89928E74:
	// addi r15,r15,1600
	ctx.r15.s64 = ctx.r15.s64 + 1600;
	// addi r9,r10,3200
	ctx.r9.s64 = ctx.r10.s64 + 3200;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// addi r24,r24,696
	ctx.r24.s64 = ctx.r24.s64 + 696;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x89928c08
	if (ctx.cr6.lt) goto loc_89928C08;
loc_89928E90:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89929FF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30273
	ctx.r9.s64 = -1983971328;
	// addi r11,r11,520
	ctx.r11.s64 = ctx.r11.s64 + 520;
	// addi r10,r10,-2532
	ctx.r10.s64 = ctx.r10.s64 + -2532;
	// addi r7,r9,6400
	ctx.r7.s64 = ctx.r9.s64 + 6400;
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,1(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8992a034
	if (!ctx.cr6.lt) goto loc_8992A034;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8992A034:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8992A040) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8992A048;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16448
	ctx.r11.s64 = 1077936128;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// ori r21,r11,49152
	ctx.r21.u64 = ctx.r11.u64 | 49152;
	// addi r3,r10,17544
	ctx.r3.s64 = ctx.r10.s64 + 17544;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x89931dd8
	ctx.lr = 0x8992A064;
	sub_89931DD8(ctx, base);
	// lis r9,-16320
	ctx.r9.s64 = -1069547520;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// ori r17,r9,16384
	ctx.r17.u64 = ctx.r9.u64 | 16384;
	// addi r3,r8,17656
	ctx.r3.s64 = ctx.r8.s64 + 17656;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x89931dd8
	ctx.lr = 0x8992A07C;
	sub_89931DD8(ctx, base);
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lis r4,-32640
	ctx.r4.s64 = -2139095040;
	// addi r3,r7,17688
	ctx.r3.s64 = ctx.r7.s64 + 17688;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x89931dd8
	ctx.lr = 0x8992A090;
	sub_89931DD8(ctx, base);
	// lis r6,-30276
	ctx.r6.s64 = -1984167936;
	// lis r31,16576
	ctx.r31.s64 = 1086324736;
	// lis r4,32639
	ctx.r4.s64 = 2139029504;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r3,16191
	ctx.r3.s64 = 1061093376;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// addi r16,r6,32560
	ctx.r16.s64 = ctx.r6.s64 + 32560;
	// ori r18,r31,16384
	ctx.r18.u64 = ctx.r31.u64 | 16384;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// li r19,0
	ctx.r19.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// ori r23,r4,32768
	ctx.r23.u64 = ctx.r4.u64 | 32768;
	// ori r24,r3,49152
	ctx.r24.u64 = ctx.r3.u64 | 49152;
	// addi r31,r11,5344
	ctx.r31.s64 = ctx.r11.s64 + 5344;
	// addi r29,r10,12280
	ctx.r29.s64 = ctx.r10.s64 + 12280;
	// addi r30,r9,-31400
	ctx.r30.s64 = ctx.r9.s64 + -31400;
	// addi r26,r8,17524
	ctx.r26.s64 = ctx.r8.s64 + 17524;
	// addi r25,r7,17520
	ctx.r25.s64 = ctx.r7.s64 + 17520;
loc_8992A0E8:
	// clrlwi r11,r19,30
	ctx.r11.u64 = ctx.r19.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8992a124
	if (!ctx.cr6.eq) goto loc_8992A124;
	// addi r11,r19,4
	ctx.r11.s64 = ctx.r19.s64 + 4;
	// rlwinm r9,r5,30,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// rlwinm r7,r5,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r6,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stbx r22,r6,r29
	REX_STORE_U8(ctx.r6.u32 + ctx.r29.u32, ctx.r22.u8);
	// lwzx r4,r7,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_8992A124:
	// addi r11,r19,4
	ctx.r11.s64 = ctx.r19.s64 + 4;
	// rlwinm r20,r19,4,0,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r27,r11
	ctx.r27.s64 = ctx.r11.s8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8992A134:
	// add r11,r20,r28
	ctx.r11.u64 = ctx.r20.u64 + ctx.r28.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r16
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r16.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bne cr6,0x8992a1a0
	if (!ctx.cr6.eq) goto loc_8992A1A0;
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// lbz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// extsb r7,r27
	ctx.r7.s64 = ctx.r27.s8;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// beq cr6,0x8992a198
	if (ctx.cr6.eq) goto loc_8992A198;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8992A180:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r6,r23,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r23.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8992a180
	if (!ctx.cr6.eq) goto loc_8992A180;
loc_8992A198:
	// stbx r22,r7,r29
	REX_STORE_U8(ctx.r7.u32 + ctx.r29.u32, ctx.r22.u8);
	// b 0x8992a284
	goto loc_8992A284;
loc_8992A1A0:
	// cmpwi cr6,r11,4097
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4097, ctx.xer);
	// bne cr6,0x8992a1fc
	if (!ctx.cr6.eq) goto loc_8992A1FC;
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// lbz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// extsb r7,r27
	ctx.r7.s64 = ctx.r27.s8;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// beq cr6,0x8992a1f4
	if (ctx.cr6.eq) goto loc_8992A1F4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8992A1DC:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r6,r24,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r24.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8992a1dc
	if (!ctx.cr6.eq) goto loc_8992A1DC;
loc_8992A1F4:
	// stbx r22,r7,r29
	REX_STORE_U8(ctx.r7.u32 + ctx.r29.u32, ctx.r22.u8);
	// b 0x8992a284
	goto loc_8992A284;
loc_8992A1FC:
	// rlwinm r10,r10,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992a25c
	if (ctx.cr6.eq) goto loc_8992A25C;
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// lbz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// extsb r7,r27
	ctx.r7.s64 = ctx.r27.s8;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// beq cr6,0x8992a254
	if (ctx.cr6.eq) goto loc_8992A254;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8992A23C:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r6,r11,r21
	ctx.r6.u64 = ctx.r11.u64 + ctx.r21.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8992a23c
	if (!ctx.cr6.eq) goto loc_8992A23C;
loc_8992A254:
	// stbx r22,r7,r29
	REX_STORE_U8(ctx.r7.u32 + ctx.r29.u32, ctx.r22.u8);
	// b 0x8992a284
	goto loc_8992A284;
loc_8992A25C:
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// bne cr6,0x8992a280
	if (!ctx.cr6.eq) goto loc_8992A280;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
loc_8992A280:
	// bl 0x89931d78
	ctx.lr = 0x8992A284;
	sub_89931D78(ctx, base);
loc_8992A284:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x8992a134
	if (ctx.cr6.lt) goto loc_8992A134;
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,32
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32, ctx.xer);
	// blt cr6,0x8992a0e8
	if (ctx.cr6.lt) goto loc_8992A0E8;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// lbz r10,530(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 530);
	// lbz r18,7930(r6)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r6.u32 + 7930);
	// lbz r19,12798(r5)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r5.u32 + 12798);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8992a3bc
	if (ctx.cr6.eq) goto loc_8992A3BC;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r11,26936(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26936);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8992a33c
	if (ctx.cr6.eq) goto loc_8992A33C;
	// extsb r10,r18
	ctx.r10.s64 = ctx.r18.s8;
	// lwz r11,2180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2180);
	// addi r7,r31,2180
	ctx.r7.s64 = ctx.r31.s64 + 2180;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// beq cr6,0x8992a334
	if (ctx.cr6.eq) goto loc_8992A334;
	// extsb r10,r19
	ctx.r10.s64 = ctx.r19.s8;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// addi r3,r10,3
	ctx.r3.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r4,r31,2180
	ctx.r4.s64 = ctx.r31.s64 + 2180;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_8992A324:
	// stwx r11,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwzu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8992a324
	if (!ctx.cr6.eq) goto loc_8992A324;
loc_8992A334:
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// stbx r22,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r22.u8);
loc_8992A33C:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r10,r11,20432
	ctx.r10.s64 = ctx.r11.s64 + 20432;
	// lbz r11,256(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 256);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8992a368
	if (ctx.cr6.eq) goto loc_8992A368;
	// extsb r11,r18
	ctx.r11.s64 = ctx.r18.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r18,r11,27
	ctx.r18.u64 = ctx.r11.u32 & 0x1F;
	// stb r18,7930(r6)
	REX_STORE_U8(ctx.r6.u32 + 7930, ctx.r18.u8);
loc_8992A368:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8992a384
	if (ctx.cr6.eq) goto loc_8992A384;
	// extsb r11,r18
	ctx.r11.s64 = ctx.r18.s8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r18,r11,27
	ctx.r18.u64 = ctx.r11.u32 & 0x1F;
	// stb r18,7930(r6)
	REX_STORE_U8(ctx.r6.u32 + 7930, ctx.r18.u8);
loc_8992A384:
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8992a3a0
	if (ctx.cr6.eq) goto loc_8992A3A0;
	// extsb r11,r19
	ctx.r11.s64 = ctx.r19.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r19,r11,28
	ctx.r19.u64 = ctx.r11.u32 & 0xF;
	// stb r19,12798(r5)
	REX_STORE_U8(ctx.r5.u32 + 12798, ctx.r19.u8);
loc_8992A3A0:
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8992a3bc
	if (ctx.cr6.eq) goto loc_8992A3BC;
	// extsb r11,r19
	ctx.r11.s64 = ctx.r19.s8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r19,r11,28
	ctx.r19.u64 = ctx.r11.u32 & 0xF;
	// stb r19,12798(r5)
	REX_STORE_U8(ctx.r5.u32 + 12798, ctx.r19.u8);
loc_8992A3BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8992A3C4:
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8992A3CC:
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r16
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r16.u32);
	// cmplwi cr6,r5,4096
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4096, ctx.xer);
	// beq cr6,0x8992a3e8
	if (ctx.cr6.eq) goto loc_8992A3E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8992A3E8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// blt cr6,0x8992a3cc
	if (ctx.cr6.lt) goto loc_8992A3CC;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x8992a3c4
	if (ctx.cr6.lt) goto loc_8992A3C4;
	// rlwinm r7,r11,28,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lwz r23,8(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r3,r7,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stb r22,36(r29)
	REX_STORE_U8(ctx.r29.u32 + 36, ctx.r22.u8);
	// lis r8,-30269
	ctx.r8.s64 = -1983709184;
	// rlwinm r5,r11,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r11,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// stw r9,4680(r30)
	REX_STORE_U32(ctx.r30.u32 + 4680, ctx.r9.u32);
	// lwz r11,11748(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 11748);
	// rlwinm r6,r5,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lwzx r7,r3,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r5,r5,30,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// lwz r10,-17116(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -17116);
	// rlwinm r3,r11,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// rlwinm r27,r11,28,20,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// stw r9,4676(r30)
	REX_STORE_U32(ctx.r30.u32 + 4676, ctx.r9.u32);
	// lwzx r8,r4,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r26,r10,24,24,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r10,28,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFF;
	// stw r9,4668(r30)
	REX_STORE_U32(ctx.r30.u32 + 4668, ctx.r9.u32);
	// rlwinm r28,r11,24,24,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stw r23,4672(r30)
	REX_STORE_U32(ctx.r30.u32 + 4672, ctx.r23.u32);
	// rlwinm r11,r10,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r10,r3,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r25,r27,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// stw r7,4656(r30)
	REX_STORE_U32(ctx.r30.u32 + 4656, ctx.r7.u32);
	// rlwinm r9,r4,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// stw r8,4660(r30)
	REX_STORE_U32(ctx.r30.u32 + 4660, ctx.r8.u32);
	// rlwinm r24,r26,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r4,r28,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// rlwinm r3,r28,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3C;
	// lwzx r27,r11,r31
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r23,r26,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3C;
	// lwzx r8,r25,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// lwzx r26,r9,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lis r9,-30251
	ctx.r9.s64 = -1982529536;
	// lwzx r25,r24,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// lwzx r11,r5,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// li r5,22
	ctx.r5.s64 = 22;
	// lwzx r7,r4,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// li r4,35
	ctx.r4.s64 = 35;
	// lwzx r28,r3,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// lwzx r24,r23,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// lwz r3,19176(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 19176);
	// stw r6,4652(r30)
	REX_STORE_U32(ctx.r30.u32 + 4652, ctx.r6.u32);
	// stw r11,4648(r30)
	REX_STORE_U32(ctx.r30.u32 + 4648, ctx.r11.u32);
	// stw r10,4704(r30)
	REX_STORE_U32(ctx.r30.u32 + 4704, ctx.r10.u32);
	// stw r8,4700(r30)
	REX_STORE_U32(ctx.r30.u32 + 4700, ctx.r8.u32);
	// stw r7,4696(r30)
	REX_STORE_U32(ctx.r30.u32 + 4696, ctx.r7.u32);
	// stw r28,4692(r30)
	REX_STORE_U32(ctx.r30.u32 + 4692, ctx.r28.u32);
	// stw r27,4724(r30)
	REX_STORE_U32(ctx.r30.u32 + 4724, ctx.r27.u32);
	// stw r26,4720(r30)
	REX_STORE_U32(ctx.r30.u32 + 4720, ctx.r26.u32);
	// stw r25,4716(r30)
	REX_STORE_U32(ctx.r30.u32 + 4716, ctx.r25.u32);
	// stw r24,4712(r30)
	REX_STORE_U32(ctx.r30.u32 + 4712, ctx.r24.u32);
	// bl 0x89931bb8
	ctx.lr = 0x8992A4F8;
	sub_89931BB8(ctx, base);
	// lis r8,-30247
	ctx.r8.s64 = -1982267392;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r3,19352(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 19352);
	// bl 0x89931bb8
	ctx.lr = 0x8992A50C;
	sub_89931BB8(ctx, base);
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// lis r5,-30273
	ctx.r5.s64 = -1983971328;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lbz r11,12327(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 12327);
	// rlwinm r3,r11,30,2,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// lbz r10,-25513(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + -25513);
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lbz r9,6047(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 6047);
	// lis r5,-30269
	ctx.r5.s64 = -1983709184;
	// lwzx r7,r11,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r11,r3,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r7,4324(r30)
	REX_STORE_U32(ctx.r30.u32 + 4324, ctx.r7.u32);
	// stw r11,4320(r30)
	REX_STORE_U32(ctx.r30.u32 + 4320, ctx.r11.u32);
	// lbz r11,6403(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 6403);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// rlwinm r4,r11,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r3,r11,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lbz r11,9538(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 9538);
	// rlwinm r7,r10,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFC;
	// lhz r8,26944(r6)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + 26944);
	// rlwinm r28,r10,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lhz r10,-21224(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + -21224);
	// rlwinm r25,r11,30,2,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// stb r22,33(r29)
	REX_STORE_U8(ctx.r29.u32 + 33, ctx.r22.u8);
	// rlwinm r27,r9,30,2,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFC;
	// stb r22,32(r29)
	REX_STORE_U8(ctx.r29.u32 + 32, ctx.r22.u8);
	// lwzx r6,r3,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r3,r11,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r26,r9,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r24,r8,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// lwzx r9,r4,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r21,r10,30,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3C;
	// lwzx r5,r28,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r7,r8,30,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3C;
	// lwzx r8,r27,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// rlwinm r17,r10,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r10,r25,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// lwzx r4,r26,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// lwzx r27,r24,r31
	ctx.r27.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// lwzx r26,r21,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwzx r28,r7,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// lwzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// lwzx r24,r17,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// stw r9,4332(r30)
	REX_STORE_U32(ctx.r30.u32 + 4332, ctx.r9.u32);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// stw r11,4184(r30)
	REX_STORE_U32(ctx.r30.u32 + 4184, ctx.r11.u32);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// stw r10,4208(r30)
	REX_STORE_U32(ctx.r30.u32 + 4208, ctx.r10.u32);
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// stw r6,4336(r30)
	REX_STORE_U32(ctx.r30.u32 + 4336, ctx.r6.u32);
	// addi r7,r11,17528
	ctx.r7.s64 = ctx.r11.s64 + 17528;
	// stw r5,4188(r30)
	REX_STORE_U32(ctx.r30.u32 + 4188, ctx.r5.u32);
	// addi r6,r10,-21272
	ctx.r6.s64 = ctx.r10.s64 + -21272;
	// stw r8,4196(r30)
	REX_STORE_U32(ctx.r30.u32 + 4196, ctx.r8.u32);
	// addi r5,r9,17536
	ctx.r5.s64 = ctx.r9.s64 + 17536;
	// stw r4,4200(r30)
	REX_STORE_U32(ctx.r30.u32 + 4200, ctx.r4.u32);
	// stw r3,4212(r30)
	REX_STORE_U32(ctx.r30.u32 + 4212, ctx.r3.u32);
	// stw r28,4064(r30)
	REX_STORE_U32(ctx.r30.u32 + 4064, ctx.r28.u32);
	// stw r27,4068(r30)
	REX_STORE_U32(ctx.r30.u32 + 4068, ctx.r27.u32);
	// stw r26,3936(r30)
	REX_STORE_U32(ctx.r30.u32 + 3936, ctx.r26.u32);
	// stw r24,3940(r30)
	REX_STORE_U32(ctx.r30.u32 + 3940, ctx.r24.u32);
	// stb r22,31(r29)
	REX_STORE_U8(ctx.r29.u32 + 31, ctx.r22.u8);
	// stb r22,30(r29)
	REX_STORE_U8(ctx.r29.u32 + 30, ctx.r22.u8);
loc_8992A624:
	// lbzx r10,r20,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r6.u32);
	// addi r9,r20,22
	ctx.r9.s64 = ctx.r20.s64 + 22;
	// addi r11,r30,3712
	ctx.r11.s64 = ctx.r30.s64 + 3712;
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8992a674
	if (ctx.cr6.eq) goto loc_8992A674;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8992A65C:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
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
	// bne cr6,0x8992a65c
	if (!ctx.cr6.eq) goto loc_8992A65C;
loc_8992A674:
	// addi r10,r20,1
	ctx.r10.s64 = ctx.r20.s64 + 1;
	// stb r22,29(r29)
	REX_STORE_U8(ctx.r29.u32 + 29, ctx.r22.u8);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x8992a624
	if (ctx.cr6.lt) goto loc_8992A624;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// stb r22,28(r29)
	REX_STORE_U8(ctx.r29.u32 + 28, ctx.r22.u8);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r11,-2544(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -2544);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r10,12796(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 12796);
	// lhz r9,32016(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 32016);
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r10,30,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3C;
	// rlwinm r5,r10,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r10,r9,30,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3C;
	// rlwinm r27,r3,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// rlwinm r4,r11,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r9,r9,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r8,r4,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r26,r4,30,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3C;
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r10,r27,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r3,r9,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r8,r26,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r10,3668(r30)
	REX_STORE_U32(ctx.r30.u32 + 3668, ctx.r10.u32);
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// stw r4,3692(r30)
	REX_STORE_U32(ctx.r30.u32 + 3692, ctx.r4.u32);
	// addi r25,r10,7132
	ctx.r25.s64 = ctx.r10.s64 + 7132;
	// stw r9,3664(r30)
	REX_STORE_U32(ctx.r30.u32 + 3664, ctx.r9.u32);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// stw r3,3696(r30)
	REX_STORE_U32(ctx.r30.u32 + 3696, ctx.r3.u32);
	// stw r11,3672(r30)
	REX_STORE_U32(ctx.r30.u32 + 3672, ctx.r11.u32);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// stw r6,3680(r30)
	REX_STORE_U32(ctx.r30.u32 + 3680, ctx.r6.u32);
	// stw r8,3660(r30)
	REX_STORE_U32(ctx.r30.u32 + 3660, ctx.r8.u32);
	// addi r4,r11,11752
	ctx.r4.s64 = ctx.r11.s64 + 11752;
	// lwz r24,0(r25)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r3,r10,-9208
	ctx.r3.s64 = ctx.r10.s64 + -9208;
	// stw r5,3684(r30)
	REX_STORE_U32(ctx.r30.u32 + 3684, ctx.r5.u32);
	// addi r27,r9,32032
	ctx.r27.s64 = ctx.r9.s64 + 32032;
loc_8992A744:
	// extsh r5,r28
	ctx.r5.s64 = ctx.r28.s16;
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// bne cr6,0x8992a7a4
	if (!ctx.cr6.eq) goto loc_8992A7A4;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// subfic r11,r6,26
	ctx.xer.ca = ctx.r6.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r6.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// beq cr6,0x8992a790
	if (ctx.cr6.eq) goto loc_8992A790;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r9,r30,76
	ctx.r9.s64 = ctx.r30.s64 + 76;
	// rlwinm r8,r11,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r25.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8992A780:
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8992a780
	if (!ctx.cr6.eq) goto loc_8992A780;
loc_8992A790:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// stbx r22,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r22.u8);
	// b 0x8992a874
	goto loc_8992A874;
loc_8992A7A4:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// beq cr6,0x8992a86c
	if (ctx.cr6.eq) goto loc_8992A86C;
	// lhzx r8,r11,r4
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r28,r10,28,20,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFF;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// clrlwi r26,r8,24
	ctx.r26.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r8,r28,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// subfic r11,r7,26
	ctx.xer.ca = ctx.r7.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r7.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r28,r6,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r6,30,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3C;
	// lwzx r21,r10,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwzx r17,r8,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r23,r9,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3C;
	// rlwinm r20,r9,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r28,r28,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r15,r26,30,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3C;
	// lwzx r14,r6,r31
	ctx.r14.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r10,r30,88
	ctx.r10.s64 = ctx.r30.s64 + 88;
	// stbx r22,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r22.u8);
	// addi r8,r30,96
	ctx.r8.s64 = ctx.r30.s64 + 96;
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwzx r20,r20,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stbx r22,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r22.u8);
	// addi r6,r30,108
	ctx.r6.s64 = ctx.r30.s64 + 108;
	// lwzx r15,r15,r31
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r31.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stbx r22,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r22.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwzx r6,r26,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// stw r17,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r17.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// stw r28,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r28.u32);
	// stw r14,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r14.u32);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r23,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r23.u32);
	// stw r20,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r20.u32);
	// stw r15,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r15.u32);
	// stw r6,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
loc_8992A86C:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
loc_8992A874:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x8992a744
	if (ctx.cr6.lt) goto loc_8992A744;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,7128
	ctx.r4.s64 = ctx.r11.s64 + 7128;
	// addi r3,r10,-10056
	ctx.r3.s64 = ctx.r10.s64 + -10056;
	// addi r27,r9,-31952
	ctx.r27.s64 = ctx.r9.s64 + -31952;
loc_8992A8A0:
	// extsh r5,r28
	ctx.r5.s64 = ctx.r28.s16;
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// bne cr6,0x8992a900
	if (!ctx.cr6.eq) goto loc_8992A900;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// subfic r11,r6,18
	ctx.xer.ca = ctx.r6.u32 <= 18;
	ctx.r11.u64 = static_cast<uint64_t>(18) - ctx.r6.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// beq cr6,0x8992a8ec
	if (ctx.cr6.eq) goto loc_8992A8EC;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r9,r30,76
	ctx.r9.s64 = ctx.r30.s64 + 76;
	// rlwinm r8,r11,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r25.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8992A8DC:
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8992a8dc
	if (!ctx.cr6.eq) goto loc_8992A8DC;
loc_8992A8EC:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// stbx r22,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r22.u8);
	// b 0x8992a9d0
	goto loc_8992A9D0;
loc_8992A900:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// beq cr6,0x8992a9c8
	if (ctx.cr6.eq) goto loc_8992A9C8;
	// lhzx r8,r11,r4
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r28,r10,28,20,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFF;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// clrlwi r26,r8,24
	ctx.r26.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r8,r28,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// subfic r11,r7,18
	ctx.xer.ca = ctx.r7.u32 <= 18;
	ctx.r11.u64 = static_cast<uint64_t>(18) - ctx.r7.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r28,r6,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r6,30,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3C;
	// lwzx r21,r10,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwzx r17,r8,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r23,r9,30,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3C;
	// rlwinm r20,r9,2,26,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r28,r28,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r15,r26,30,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3C;
	// lwzx r14,r6,r31
	ctx.r14.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r10,r30,88
	ctx.r10.s64 = ctx.r30.s64 + 88;
	// stbx r22,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r22.u8);
	// addi r8,r30,96
	ctx.r8.s64 = ctx.r30.s64 + 96;
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// rlwinm r26,r26,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwzx r20,r20,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stbx r22,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r22.u8);
	// addi r6,r30,108
	ctx.r6.s64 = ctx.r30.s64 + 108;
	// lwzx r15,r15,r31
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r31.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stbx r22,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r22.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwzx r6,r26,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// stw r17,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r17.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// stw r28,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r28.u32);
	// stw r14,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r14.u32);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r23,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r23.u32);
	// stw r20,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r20.u32);
	// stw r15,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r15.u32);
	// stw r6,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
loc_8992A9C8:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
loc_8992A9D0:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x8992a8a0
	if (ctx.cr6.lt) goto loc_8992A8A0;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,8
	ctx.r3.s64 = 8;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x89932850
	ctx.lr = 0x8992A9F0;
	sub_89932850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8992ab64
	if (!ctx.cr6.gt) goto loc_8992AB64;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r5,r11,7080
	ctx.r5.s64 = ctx.r11.s64 + 7080;
	// addi r4,r10,8528
	ctx.r4.s64 = ctx.r10.s64 + 8528;
	// addi r26,r9,12264
	ctx.r26.s64 = ctx.r9.s64 + 12264;
loc_8992AA10:
	// extsh r28,r27
	ctx.r28.s64 = ctx.r27.s16;
	// cmpwi cr6,r28,256
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 256, ctx.xer);
	// bne cr6,0x8992aa70
	if (!ctx.cr6.eq) goto loc_8992AA70;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// subfic r11,r6,9
	ctx.xer.ca = ctx.r6.u32 <= 9;
	ctx.r11.u64 = static_cast<uint64_t>(9) - ctx.r6.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// beq cr6,0x8992aa5c
	if (ctx.cr6.eq) goto loc_8992AA5C;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r9,r30,76
	ctx.r9.s64 = ctx.r30.s64 + 76;
	// rlwinm r8,r11,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r25.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8992AA4C:
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8992aa4c
	if (!ctx.cr6.eq) goto loc_8992AA4C;
loc_8992AA5C:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// stbx r22,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r22.u8);
	// b 0x8992ab58
	goto loc_8992AB58;
loc_8992AA70:
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// beq cr6,0x8992ab50
	if (ctx.cr6.eq) goto loc_8992AB50;
	// subfic r9,r7,9
	ctx.xer.ca = ctx.r7.u32 <= 9;
	ctx.r9.u64 = static_cast<uint64_t>(9) - ctx.r7.u64;
	// lhzx r8,r11,r4
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// lhzx r6,r11,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r23,r10,28,20,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r16,80(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r27,r10,24,24,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r10,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r10,r23,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// rlwinm r14,r6,30,26,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3C;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r20,r8,r31
	ctx.r20.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r23,r27,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// rlwinm r27,r27,30,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3C;
	// lwzx r15,r10,r31
	ctx.r15.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r21,r9,30,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3C;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// rlwinm r17,r9,2,26,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// lwzx r14,r14,r31
	ctx.r14.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r31.u32);
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// stbx r22,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r22.u8);
	// addi r10,r30,88
	ctx.r10.s64 = ctx.r30.s64 + 88;
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// addi r8,r30,96
	ctx.r8.s64 = ctx.r30.s64 + 96;
	// lwzx r27,r27,r31
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// addi r6,r30,108
	ctx.r6.s64 = ctx.r30.s64 + 108;
	// lwzx r21,r21,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r17,r17,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stbx r22,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r22.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stbx r22,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r22.u8);
	// stw r27,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r27.u32);
	// stw r20,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// stw r15,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r15.u32);
	// stw r23,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r23.u32);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r21,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r21.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stw r17,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r17.u32);
	// lwz r27,84(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r14,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r14.u32);
	// stw r27,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r27.u32);
loc_8992AB50:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
loc_8992AB58:
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8992aa10
	if (ctx.cr6.lt) goto loc_8992AA10;
loc_8992AB64:
	// extsb r10,r18
	ctx.r10.s64 = ctx.r18.s8;
	// stb r22,5(r29)
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r22.u8);
	// extsb r11,r19
	ctx.r11.s64 = ctx.r19.s8;
	// stb r22,4(r29)
	REX_STORE_U8(ctx.r29.u32 + 4, ctx.r22.u8);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r22,3(r29)
	REX_STORE_U8(ctx.r29.u32 + 3, ctx.r22.u8);
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r4,-30270
	ctx.r4.s64 = -1983774720;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,27856
	ctx.r7.s64 = ctx.r9.s64 + 27856;
	// addi r9,r4,20960
	ctx.r9.s64 = ctx.r4.s64 + 20960;
	// lis r5,-30269
	ctx.r5.s64 = -1983709184;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// lhzx r8,r6,r16
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r16.u32);
	// addi r3,r5,-21216
	ctx.r3.s64 = ctx.r5.s64 + -21216;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// rlwinm r5,r8,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// rlwinm r11,r8,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r28,r5,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lbzx r3,r6,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// rlwinm r8,r11,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lbzx r27,r6,r9
	ctx.r27.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r7,r4,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// rlwinm r6,r5,30,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3C;
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r5,r3,30,2,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r4,r7,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r26,r7,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r9,r28,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r25,r4,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r10,r8,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r8,r6,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r4,r4,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// rlwinm r28,r25,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,748(r30)
	REX_STORE_U32(ctx.r30.u32 + 748, ctx.r11.u32);
	// lwzx r7,r5,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r25,r25,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// rlwinm r11,r28,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r6,r26,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// rlwinm r28,r28,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// stw r10,744(r30)
	REX_STORE_U32(ctx.r30.u32 + 744, ctx.r10.u32);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r9,740(r30)
	REX_STORE_U32(ctx.r30.u32 + 740, ctx.r9.u32);
	// rlwinm r9,r3,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// stw r8,736(r30)
	REX_STORE_U32(ctx.r30.u32 + 736, ctx.r8.u32);
	// rlwinm r3,r10,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r7,608(r30)
	REX_STORE_U32(ctx.r30.u32 + 608, ctx.r7.u32);
	// stw r6,496(r30)
	REX_STORE_U32(ctx.r30.u32 + 496, ctx.r6.u32);
	// rlwinm r7,r27,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r8,r28,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r6,r27,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// lwzx r5,r4,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r27,r11,2,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r4,r25,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// rlwinm r26,r10,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r28,r3,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r11,r9,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r25,r3,30,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3C;
	// lwzx r10,r7,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r9,r6,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwzx r7,r27,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// lwzx r6,r26,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// lwzx r28,r28,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r31,r25,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// stw r11,612(r30)
	REX_STORE_U32(ctx.r30.u32 + 612, ctx.r11.u32);
	// stw r10,620(r30)
	REX_STORE_U32(ctx.r30.u32 + 620, ctx.r10.u32);
	// stw r9,624(r30)
	REX_STORE_U32(ctx.r30.u32 + 624, ctx.r9.u32);
	// stw r5,492(r30)
	REX_STORE_U32(ctx.r30.u32 + 492, ctx.r5.u32);
	// stw r4,488(r30)
	REX_STORE_U32(ctx.r30.u32 + 488, ctx.r4.u32);
	// stw r8,484(r30)
	REX_STORE_U32(ctx.r30.u32 + 484, ctx.r8.u32);
	// stw r7,480(r30)
	REX_STORE_U32(ctx.r30.u32 + 480, ctx.r7.u32);
	// stw r6,476(r30)
	REX_STORE_U32(ctx.r30.u32 + 476, ctx.r6.u32);
	// stw r28,472(r30)
	REX_STORE_U32(ctx.r30.u32 + 472, ctx.r28.u32);
	// stw r31,468(r30)
	REX_STORE_U32(ctx.r30.u32 + 468, ctx.r31.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89932ED8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f8
	ctx.lr = 0x89932EE0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// lis r23,-30270
	ctx.r23.s64 = -1983774720;
	// lis r20,-16384
	ctx.r20.s64 = -1073741824;
	// stb r11,11747(r10)
	REX_STORE_U8(ctx.r10.u32 + 11747, ctx.r11.u8);
	// lis r11,319
	ctx.r11.s64 = 20905984;
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// lis r24,-30253
	ctx.r24.s64 = -1982660608;
	// lis r21,4096
	ctx.r21.s64 = 268435456;
	// ori r28,r11,239
	ctx.r28.u64 = ctx.r11.u64 | 239;
	// ori r29,r10,32896
	ctx.r29.u64 = ctx.r10.u64 | 32896;
	// lis r25,-30275
	ctx.r25.s64 = -1984102400;
	// ori r30,r9,1
	ctx.r30.u64 = ctx.r9.u64 | 1;
	// lis r22,-4096
	ctx.r22.s64 = -268435456;
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// lis r27,-30270
	ctx.r27.s64 = -1983774720;
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
loc_89932F2C:
	// bl 0x899301c0
	ctx.lr = 0x89932F30;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x89932F34;
	sub_899309D8(ctx, base);
	// lwz r10,7120(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 7120);
	// lwz r9,7920(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 7920);
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r11,9520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 9520);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// stw r21,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// stw r28,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r22,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r22.u32);
	// lwz r10,8152(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8152);
	// lwz r9,-9528(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + -9528);
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,9520(r31)
	REX_STORE_U32(ctx.r31.u32 + 9520, ctx.r11.u32);
	// bl 0x899319c8
	ctx.lr = 0x89932F84;
	sub_899319C8(ctx, base);
	// lbz r11,12327(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 12327);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x89932f2c
	if (!ctx.cr6.eq) goto loc_89932F2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r10,-30276
	ctx.r10.s64 = -1984167936;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// addi r9,r10,32560
	ctx.r9.s64 = ctx.r10.s64 + 32560;
	// addi r8,r11,27856
	ctx.r8.s64 = ctx.r11.s64 + 27856;
loc_89932FB0:
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,6
	ctx.r11.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_89932FBC:
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// sthx r6,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u16);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r5.u32);
	// bdnz 0x89932fbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89932FBC;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// cmpwi cr6,r7,496
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 496, ctx.xer);
	// ble cr6,0x89932fb0
	if (!ctx.cr6.gt) goto loc_89932FB0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba48
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89933C68) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-31952
	ctx.r9.s64 = ctx.r9.s64 + -31952;
loc_89933C7C:
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r8,r10,18
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFF;
	// cmplwi cr6,r8,4096
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4096, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x89933c7c
	if (ctx.cr6.lt) goto loc_89933C7C;
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89933DF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89933E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x899334b8
	ctx.lr = 0x89933E0C;
	sub_899334B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x89933ee8
	if (!ctx.cr6.eq) goto loc_89933EE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89933520
	ctx.lr = 0x89933E1C;
	sub_89933520(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89933ee8
	if (!ctx.cr6.eq) goto loc_89933EE8;
	// bl 0x89933428
	ctx.lr = 0x89933E2C;
	sub_89933428(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89933e44
	if (!ctx.cr6.eq) goto loc_89933E44;
loc_89933E38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_89933E44:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r8,-31952
	ctx.r7.s64 = ctx.r8.s64 + -31952;
loc_89933E58:
	// lhzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// clrlwi r8,r9,18
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFF;
	// cmplwi cr6,r8,4096
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4096, ctx.xer);
	// beq cr6,0x89933e84
	if (ctx.cr6.eq) goto loc_89933E84;
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
	// blt cr6,0x89933e58
	if (ctx.cr6.lt) goto loc_89933E58;
	// li r10,256
	ctx.r10.s64 = 256;
loc_89933E84:
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bge cr6,0x89933e38
	if (!ctx.cr6.lt) goto loc_89933E38;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,-4592
	ctx.r5.s64 = ctx.r11.s64 + -4592;
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// lis r3,-30270
	ctx.r3.s64 = -1983774720;
	// lhz r11,-4592(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// li r29,-32768
	ctx.r29.s64 = -32768;
	// sthx r31,r6,r7
	REX_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r31.u16);
	// lis r7,-30276
	ctx.r7.s64 = -1984167936;
	// lhz r10,2(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// addi r5,r4,-10056
	ctx.r5.s64 = ctx.r4.s64 + -10056;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r3,7128
	ctx.r3.s64 = ctx.r3.s64 + 7128;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r7,32560
	ctx.r9.s64 = ctx.r7.s64 + 32560;
	// sthx r11,r6,r5
	REX_STORE_U16(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u16);
	// rlwinm r7,r4,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r31,r29
	ctx.r8.u64 = ctx.r31.u64 | ctx.r29.u64;
	// sthx r10,r6,r3
	REX_STORE_U16(ctx.r6.u32 + ctx.r3.u32, ctx.r10.u16);
	// sthx r8,r7,r9
	REX_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u16);
loc_89933EE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89934FB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x89934FC0;
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
	// ble cr6,0x89935154
	if (!ctx.cr6.gt) goto loc_89935154;
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
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// ori r27,r8,65535
	ctx.r27.u64 = ctx.r8.u64 | 65535;
loc_89935018:
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// sth r4,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// clrlwi r7,r28,16
	ctx.r7.u64 = ctx.r28.u32 & 0xFFFF;
	// sth r24,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r24.u16);
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
	// sth r3,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r3.u16);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// sth r8,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x89935094
	if (ctx.cr6.eq) goto loc_89935094;
	// rlwinm r8,r8,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 31, ctx.xer);
	// ble cr6,0x89935094
	if (!ctx.cr6.gt) goto loc_89935094;
	// li r3,6144
	ctx.r3.s64 = 6144;
loc_89935094:
	// clrlwi r8,r31,27
	ctx.r8.u64 = ctx.r31.u32 & 0x1F;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899350b8
	if (ctx.cr6.eq) goto loc_899350B8;
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r8,31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 31, ctx.xer);
	// ble cr6,0x899350b8
	if (!ctx.cr6.gt) goto loc_899350B8;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r3,r8,1024
	ctx.r3.u64 = ctx.r8.u64 | 1024;
loc_899350B8:
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
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// beq cr6,0x8993513c
	if (ctx.cr6.eq) goto loc_8993513C;
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
	// bne cr6,0x8993513c
	if (!ctx.cr6.eq) goto loc_8993513C;
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
	// ble cr6,0x89935124
	if (!ctx.cr6.gt) goto loc_89935124;
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
loc_89935124:
	// extsb r8,r19
	ctx.r8.s64 = ctx.r19.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8993513c
	if (ctx.cr6.eq) goto loc_8993513C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
loc_8993513C:
	// addi r8,r22,1
	ctx.r8.s64 = ctx.r22.s64 + 1;
	// sthu r23,10(r11)
	ea = 10 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r23.u16);
	ctx.r11.u32 = ea;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x89935018
	if (ctx.cr6.lt) goto loc_89935018;
loc_89935154:
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89935ED8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x89935EE0;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30273
	ctx.r11.s64 = -1983971328;
	// lis r10,-26506
	ctx.r10.s64 = -1737097216;
	// ori r9,r10,21554
	ctx.r9.u64 = ctx.r10.u64 | 21554;
	// lwz r11,3532(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3532);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8993620c
	if (!ctx.cr6.eq) goto loc_8993620C;
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-30274
	ctx.r10.s64 = -1984036864;
	// li r15,0
	ctx.r15.s64 = 0;
	// addi r7,r10,544
	ctx.r7.s64 = ctx.r10.s64 + 544;
	// lis r10,-30269
	ctx.r10.s64 = -1983709184;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// addi r6,r11,25704
	ctx.r6.s64 = ctx.r11.s64 + 25704;
	// addi r26,r10,-21284
	ctx.r26.s64 = ctx.r10.s64 + -21284;
	// addi r16,r8,6036
	ctx.r16.s64 = ctx.r8.s64 + 6036;
loc_89935F2C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x89935f3c
	if (ctx.cr6.lt) goto loc_89935F3C;
	// li r11,7
	ctx.r11.s64 = 7;
loc_89935F3C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stbx r8,r16,r9
	REX_STORE_U8(ctx.r16.u32 + ctx.r9.u32, ctx.r8.u8);
	// bne cr6,0x89935f6c
	if (!ctx.cr6.eq) goto loc_89935F6C;
	// stbx r15,r26,r9
	REX_STORE_U8(ctx.r26.u32 + ctx.r9.u32, ctx.r15.u8);
loc_89935F6C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x89935f2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89935F2C;
	// lis r29,-30275
	ctx.r29.s64 = -1984102400;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// lbz r11,12275(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 12275);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89936004
	if (ctx.cr6.eq) goto loc_89936004;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r30,r11,12344
	ctx.r30.s64 = ctx.r11.s64 + 12344;
loc_89935F94:
	// lbzx r11,r16,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r31.u32);
	// lbzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x89935fb0
	if (ctx.cr6.eq) goto loc_89935FB0;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x899d9448
	ctx.lr = 0x89935FAC;
	sub_899D9448(ctx, base);
	// stbx r15,r26,r31
	REX_STORE_U8(ctx.r26.u32 + ctx.r31.u32, ctx.r15.u8);
loc_89935FB0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x89935f94
	if (ctx.cr6.lt) goto loc_89935F94;
	// li r10,256
	ctx.r10.s64 = 256;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// addi r9,r9,-10736
	ctx.r9.s64 = ctx.r9.s64 + -10736;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// addi r10,r10,12768
	ctx.r10.s64 = ctx.r10.s64 + 12768;
loc_89935FD8:
	// lbzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// beq cr6,0x89935fec
	if (ctx.cr6.eq) goto loc_89935FEC;
	// stbx r15,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r15.u8);
	// stbx r15,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r15.u8);
loc_89935FEC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x89935fd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89935FD8;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// stb r15,12275(r29)
	REX_STORE_U8(ctx.r29.u32 + 12275, ctx.r15.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_89936004:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// addi r17,r11,-2072
	ctx.r17.s64 = ctx.r11.s64 + -2072;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// lis r10,-30251
	ctx.r10.s64 = -1982529536;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r24,r17,24
	ctx.r24.s64 = ctx.r17.s64 + 24;
	// lis r19,-30275
	ctx.r19.s64 = -1984102400;
	// lis r20,-30275
	ctx.r20.s64 = -1984102400;
	// addi r22,r5,-26152
	ctx.r22.s64 = ctx.r5.s64 + -26152;
	// addi r21,r6,12012
	ctx.r21.s64 = ctx.r6.s64 + 12012;
	// addi r25,r7,-9480
	ctx.r25.s64 = ctx.r7.s64 + -9480;
	// addi r18,r8,5216
	ctx.r18.s64 = ctx.r8.s64 + 5216;
	// addi r23,r9,-10736
	ctx.r23.s64 = ctx.r9.s64 + -10736;
	// addi r28,r10,12768
	ctx.r28.s64 = ctx.r10.s64 + 12768;
	// addi r27,r11,12344
	ctx.r27.s64 = ctx.r11.s64 + 12344;
loc_89936050:
	// lbzx r11,r28,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89936064
	if (ctx.cr6.eq) goto loc_89936064;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stbx r11,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u8);
loc_89936064:
	// lbzx r3,r23,r31
	ctx.r3.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r31.u32);
	// extsb r29,r3
	ctx.r29.s64 = ctx.r3.s8;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 7, ctx.xer);
	// bgt cr6,0x899361f0
	if (ctx.cr6.gt) goto loc_899361F0;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x899361f8
	if (ctx.cr6.eq) goto loc_899361F8;
	// bdz 0x89936098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_89936098;
	// bdz 0x89936098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_89936098;
	// bdz 0x899360fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899360FC;
	// bdz 0x899360fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899360FC;
	// bdz 0x899360fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899360FC;
	// bdz 0x899360fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899360FC;
loc_89936098:
	// lbzx r11,r18,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899360f4
	if (ctx.cr6.eq) goto loc_899360F4;
	// lbzx r11,r28,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899360f4
	if (!ctx.cr6.eq) goto loc_899360F4;
	// lbzx r11,r29,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r26.u32);
	// lbzx r10,r27,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x899360f4
	if (ctx.cr6.gt) goto loc_899360F4;
	// clrlwi r30,r31,24
	ctx.r30.u64 = ctx.r31.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x899d92f8
	ctx.lr = 0x899360CC;
	sub_899D92F8(ctx, base);
	// lbzx r11,r25,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r31.u32);
	// lbzx r10,r27,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// lbz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// stbx r11,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u8);
	// stbx r10,r29,r26
	REX_STORE_U8(ctx.r29.u32 + ctx.r26.u32, ctx.r10.u8);
	// beq cr6,0x899360f4
	if (ctx.cr6.eq) goto loc_899360F4;
	// lbzx r11,r22,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r31.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// stbx r30,r10,r21
	REX_STORE_U8(ctx.r10.u32 + ctx.r21.u32, ctx.r30.u8);
loc_899360F4:
	// stbx r15,r23,r31
	REX_STORE_U8(ctx.r23.u32 + ctx.r31.u32, ctx.r15.u8);
	// b 0x899361f8
	goto loc_899361F8;
loc_899360FC:
	// lbzx r11,r28,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// stbx r15,r23,r31
	REX_STORE_U8(ctx.r23.u32 + ctx.r31.u32, ctx.r15.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899361f8
	if (!ctx.cr6.eq) goto loc_899361F8;
	// lbzx r11,r18,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899361f8
	if (ctx.cr6.eq) goto loc_899361F8;
	// clrlwi r29,r31,24
	ctx.r29.u64 = ctx.r31.u32 & 0xFF;
	// li r8,255
	ctx.r8.s64 = 255;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r11,3
	ctx.r11.s64 = 3;
loc_89936130:
	// lbzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r16.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x899361a4
	if (ctx.cr6.eq) goto loc_899361A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x89936130
	if (ctx.cr6.lt) goto loc_89936130;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,3
	ctx.r9.s64 = 3;
loc_89936158:
	// lbzx r11,r9,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x89936174
	if (!ctx.cr6.gt) goto loc_89936174;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_89936174:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x89936158
	if (ctx.cr6.lt) goto loc_89936158;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lbzx r10,r6,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r27.u32);
	// lbzx r9,r11,r26
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// subfc r8,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// subf r5,r6,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r6.u64;
	// and r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 & ctx.r7.u64;
loc_899361A4:
	// extsb r30,r3
	ctx.r30.s64 = ctx.r3.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x899361f8
	if (ctx.cr6.eq) goto loc_899361F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x899d92f8
	ctx.lr = 0x899361B8;
	sub_899D92F8(ctx, base);
	// lbzx r11,r25,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r31.u32);
	// lbzx r10,r27,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// lbz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// stbx r11,r28,r31
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u8);
	// stbx r10,r30,r26
	REX_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r10.u8);
	// beq cr6,0x899361f8
	if (ctx.cr6.eq) goto loc_899361F8;
	// lbz r11,-1(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + -1);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x899361f8
	if (ctx.cr6.eq) goto loc_899361F8;
	// lbzx r11,r22,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r31.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// stbx r29,r10,r21
	REX_STORE_U8(ctx.r10.u32 + ctx.r21.u32, ctx.r29.u8);
	// b 0x899361f8
	goto loc_899361F8;
loc_899361F0:
	// stb r3,7931(r20)
	REX_STORE_U8(ctx.r20.u32 + 7931, ctx.r3.u8);
	// stb r31,-31406(r19)
	REX_STORE_U8(ctx.r19.u32 + -31406, ctx.r31.u8);
loc_899361F8:
	// addi r24,r24,28
	ctx.r24.s64 = ctx.r24.s64 + 28;
	// addi r11,r17,7192
	ctx.r11.s64 = ctx.r17.s64 + 7192;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89936050
	if (ctx.cr6.lt) goto loc_89936050;
loc_8993620C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89938A68) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89938A70;
	__savegprlr_29(ctx, base);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// stw r4,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// addi r6,r10,25056
	ctx.r6.s64 = ctx.r10.s64 + 25056;
	// lis r7,-30273
	ctx.r7.s64 = -1983971328;
	// addi r5,r9,3620
	ctx.r5.s64 = ctx.r9.s64 + 3620;
	// addi r4,r7,6420
	ctx.r4.s64 = ctx.r7.s64 + 6420;
	// lwz r8,25056(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 25056);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r9,3620(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 3620);
	// lis r3,-30253
	ctx.r3.s64 = -1982660608;
	// lhz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lis r31,-30275
	ctx.r31.s64 = -1984102400;
	// lhz r7,6420(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 6420);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lhz r9,2(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// lhz r6,2(r4)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lhz r7,-9496(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + -9496);
	// addi r4,r3,-9496
	ctx.r4.s64 = ctx.r3.s64 + -9496;
	// lwz r5,12792(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12792);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// lis r31,-30270
	ctx.r31.s64 = -1983774720;
	// subf r3,r3,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r3.u64;
	// lhz r9,2(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r30,r30,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r30.u64;
	// subf r3,r10,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r10.u64;
	// lwz r6,3352(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3352);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// subf r9,r5,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r4,r7,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r7.u64;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// subf r9,r10,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r10.u64;
	// subf r6,r6,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r6.u64;
	// addis r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 65536;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// lis r5,-30274
	ctx.r5.s64 = -1984036864;
	// rlwimi r3,r6,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// rotlwi r4,r7,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r7,r6,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r6.u64;
	// lwz r9,512(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 512);
	// or r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// or r7,r6,r4
	ctx.r7.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r8,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8993B998) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// mulli r9,r10,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// addi r6,r7,-2352
	ctx.r6.s64 = ctx.r7.s64 + -2352;
	// lwzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	switch (ctx.r6.u32) {
	case 0:
		sub_8993B9C8(ctx, base);
		return;
	default:
		__builtin_trap(); // Switch case out of range
	}
}

DEFINE_REX_FUNC(sub_8993BC68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x8993BC70;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lwz r23,3504(r10)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 3504);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// ori r29,r9,20077
	ctx.r29.u64 = ctx.r9.u64 | 20077;
	// lis r25,-30253
	ctx.r25.s64 = -1982660608;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r30,r11,25128
	ctx.r30.s64 = ctx.r11.s64 + 25128;
	// mulli r31,r10,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// beq cr6,0x8993bdd0
	if (ctx.cr6.eq) goto loc_8993BDD0;
	// addi r9,r30,635
	ctx.r9.s64 = ctx.r30.s64 + 635;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8993bf04
	if (!ctx.cr6.eq) goto loc_8993BF04;
	// addi r10,r30,677
	ctx.r10.s64 = ctx.r30.s64 + 677;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bge cr6,0x8993bcd0
	if (!ctx.cr6.lt) goto loc_8993BCD0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
loc_8993BCD0:
	// addi r24,r30,654
	ctx.r24.s64 = ctx.r30.s64 + 654;
	// lbzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// addi r10,r11,-100
	ctx.r10.s64 = ctx.r11.s64 + -100;
	// addi r9,r11,-90
	ctx.r9.s64 = ctx.r11.s64 + -90;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r6,r11,-80
	ctx.r6.s64 = ctx.r11.s64 + -80;
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cntlzw r3,r6
	ctx.r3.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8993bd30
	if (ctx.cr6.eq) goto loc_8993BD30;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// li r8,116
	ctx.r8.s64 = 116;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x899d5240
	ctx.lr = 0x8993BD30;
	sub_899D5240(ctx, base);
loc_8993BD30:
	// lbzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8993bef0
	if (!ctx.cr6.eq) goto loc_8993BEF0;
	// lwz r11,-9212(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + -9212);
	// lis r10,192
	ctx.r10.s64 = 12582912;
	// addi r28,r30,28
	ctx.r28.s64 = ctx.r30.s64 + 28;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// ori r9,r10,16448
	ctx.r9.u64 = ctx.r10.u64 | 16448;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r25)
	REX_STORE_U32(ctx.r25.u32 + -9212, ctx.r11.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r27,r30,24
	ctx.r27.s64 = ctx.r30.s64 + 24;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// li r8,117
	ctx.r8.s64 = 117;
	// clrlwi r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// lwzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// li r4,2
	ctx.r4.s64 = 2;
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
	// lhzx r9,r9,r26
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r26.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lhzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r9,r11,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// rlwinm r9,r11,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// bl 0x899d7a90
	ctx.lr = 0x8993BDC4;
	sub_899D7A90(ctx, base);
	// lwzx r4,r31,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r3,r31,r27
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// b 0x8993bee4
	goto loc_8993BEE4;
loc_8993BDD0:
	// addi r10,r30,677
	ctx.r10.s64 = ctx.r30.s64 + 677;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bge cr6,0x8993bde8
	if (!ctx.cr6.lt) goto loc_8993BDE8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
loc_8993BDE8:
	// addi r24,r30,654
	ctx.r24.s64 = ctx.r30.s64 + 654;
	// lbzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// addi r10,r11,-100
	ctx.r10.s64 = ctx.r11.s64 + -100;
	// addi r9,r11,-90
	ctx.r9.s64 = ctx.r11.s64 + -90;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r6,r11,-80
	ctx.r6.s64 = ctx.r11.s64 + -80;
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cntlzw r3,r6
	ctx.r3.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8993be48
	if (ctx.cr6.eq) goto loc_8993BE48;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// li r8,116
	ctx.r8.s64 = 116;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x899d5240
	ctx.lr = 0x8993BE48;
	sub_899D5240(ctx, base);
loc_8993BE48:
	// lbzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8993bef0
	if (!ctx.cr6.eq) goto loc_8993BEF0;
	// lwz r11,-9212(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + -9212);
	// lis r10,192
	ctx.r10.s64 = 12582912;
	// addi r27,r30,28
	ctx.r27.s64 = ctx.r30.s64 + 28;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// ori r9,r10,16448
	ctx.r9.u64 = ctx.r10.u64 | 16448;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r25)
	REX_STORE_U32(ctx.r25.u32 + -9212, ctx.r11.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r28,r30,24
	ctx.r28.s64 = ctx.r30.s64 + 24;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// li r8,117
	ctx.r8.s64 = 117;
	// clrlwi r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// li r4,2
	ctx.r4.s64 = 2;
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
	// lhzx r9,r9,r26
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r26.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lhzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r9,r11,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// rlwinm r9,r11,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// bl 0x899d7a90
	ctx.lr = 0x8993BEDC;
	sub_899D7A90(ctx, base);
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r3,r31,r28
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
loc_8993BEE4:
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,116
	ctx.r5.s64 = 116;
	// bl 0x899d6388
	ctx.lr = 0x8993BEF0;
	sub_899D6388(ctx, base);
loc_8993BEF0:
	// lbzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,180
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 180, ctx.xer);
	// stbx r10,r31,r24
	REX_STORE_U8(ctx.r31.u32 + ctx.r24.u32, ctx.r10.u8);
	// bne cr6,0x8993bfec
	if (!ctx.cr6.eq) goto loc_8993BFEC;
loc_8993BF04:
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r9,r30,654
	ctx.r9.s64 = ctx.r30.s64 + 654;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// rlwinm r5,r10,0,7,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r5,r5,0,2,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r27,r30,28
	ctx.r27.s64 = ctx.r30.s64 + 28;
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r28,r30,24
	ctx.r28.s64 = ctx.r30.s64 + 24;
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// li r8,117
	ctx.r8.s64 = 117;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x899d4440
	ctx.lr = 0x8993BF5C;
	sub_899D4440(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8993bfec
	if (ctx.cr6.eq) goto loc_8993BFEC;
	// lwz r11,-9212(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + -9212);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r30,r11,12345
	ctx.r30.s64 = ctx.r11.s64 + 12345;
	// addis r4,r10,64
	ctx.r4.s64 = ctx.r10.s64 + 4194304;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// srawi r8,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 16;
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// addi r7,r11,240
	ctx.r7.s64 = ctx.r11.s64 + 240;
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r6,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r26.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// bl 0x8992e3d8
	ctx.lr = 0x8993BFA8;
	sub_8992E3D8(ctx, base);
	// mullw r11,r30,r29
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r25)
	REX_STORE_U32(ctx.r25.u32 + -9212, ctx.r11.u32);
	// addis r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 2097152;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// clrlwi r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	// addi r6,r11,240
	ctx.r6.s64 = ctx.r11.s64 + 240;
	// rlwinm r11,r6,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lhzx r9,r11,r26
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,14,0,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// bl 0x8992e3d8
	ctx.lr = 0x8993BFEC;
	sub_8992E3D8(ctx, base);
loc_8993BFEC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89940990) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89940998;
	__savegprlr_14(ctx, base);
	// lis r8,-30269
	ctx.r8.s64 = -1983709184;
	// lis r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30276
	ctx.r5.s64 = -1984167936;
	// lis r4,-30276
	ctx.r4.s64 = -1984167936;
	// lis r3,-30295
	ctx.r3.s64 = -1985413120;
	// lis r31,-30295
	ctx.r31.s64 = -1985413120;
	// lis r30,-30295
	ctx.r30.s64 = -1985413120;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r25,r8,-21272
	ctx.r25.s64 = ctx.r8.s64 + -21272;
	// ori r27,r28,36864
	ctx.r27.u64 = ctx.r28.u64 | 36864;
	// mr r19,r29
	ctx.r19.u64 = ctx.r29.u64;
	// li r28,4096
	ctx.r28.s64 = 4096;
	// addi r22,r10,27856
	ctx.r22.s64 = ctx.r10.s64 + 27856;
	// addi r26,r9,26904
	ctx.r26.s64 = ctx.r9.s64 + 26904;
	// addi r8,r7,12264
	ctx.r8.s64 = ctx.r7.s64 + 12264;
	// addi r24,r6,-31952
	ctx.r24.s64 = ctx.r6.s64 + -31952;
	// addi r5,r5,32032
	ctx.r5.s64 = ctx.r5.s64 + 32032;
	// addi r23,r4,32560
	ctx.r23.s64 = ctx.r4.s64 + 32560;
	// addi r18,r3,19568
	ctx.r18.s64 = ctx.r3.s64 + 19568;
	// addi r17,r31,19564
	ctx.r17.s64 = ctx.r31.s64 + 19564;
	// addi r16,r30,19560
	ctx.r16.s64 = ctx.r30.s64 + 19560;
	// addi r15,r11,19556
	ctx.r15.s64 = ctx.r11.s64 + 19556;
loc_89940A04:
	// lbzx r11,r19,r15
	ctx.r11.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r15.u32);
	// lbzx r10,r19,r16
	ctx.r10.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r16.u32);
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// extsb r20,r10
	ctx.r20.s64 = ctx.r10.s8;
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x89940afc
	if (ctx.cr6.gt) goto loc_89940AFC;
	// lbzx r11,r19,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r17.u32);
	// lbzx r10,r19,r18
	ctx.r10.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r18.u32);
	// extsb r21,r11
	ctx.r21.s64 = ctx.r11.s8;
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
loc_89940A2C:
	// extsh r4,r21
	ctx.r4.s64 = ctx.r21.s16;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x89940ae8
	if (ctx.cr6.gt) goto loc_89940AE8;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
loc_89940A3C:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r6,r23
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r23.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// clrlwi r9,r7,18
	ctx.r9.u64 = ctx.r7.u32 & 0x3FFF;
	// cmpwi cr6,r9,4096
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4096, ctx.xer);
	// bge cr6,0x89940ad4
	if (!ctx.cr6.lt) goto loc_89940AD4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_89940A5C:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r14,r11,r5
	ctx.r14.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// cmpw cr6,r14,r9
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x89940a70
	if (!ctx.cr6.eq) goto loc_89940A70;
	// sthx r27,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r27.u16);
loc_89940A70:
	// lhzx r14,r11,r24
	ctx.r14.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// cmpw cr6,r14,r9
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x89940a80
	if (!ctx.cr6.eq) goto loc_89940A80;
	// sthx r27,r11,r24
	REX_STORE_U16(ctx.r11.u32 + ctx.r24.u32, ctx.r27.u16);
loc_89940A80:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// blt cr6,0x89940a5c
	if (ctx.cr6.lt) goto loc_89940A5C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_89940A94:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r14,r10,r8
	ctx.r14.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r14,r14,18
	ctx.r14.u64 = ctx.r14.u32 & 0x3FFF;
	// cmpw cr6,r14,r9
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x89940ab4
	if (!ctx.cr6.eq) goto loc_89940AB4;
	// lbzx r14,r11,r26
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// sthx r28,r10,r8
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r28.u16);
	// stbx r29,r14,r25
	REX_STORE_U8(ctx.r14.u32 + ctx.r25.u32, ctx.r29.u8);
loc_89940AB4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x89940a94
	if (ctx.cr6.lt) goto loc_89940A94;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r28,r6,r23
	REX_STORE_U16(ctx.r6.u32 + ctx.r23.u32, ctx.r28.u16);
	// stwx r29,r11,r22
	REX_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r29.u32);
loc_89940AD4:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x89940a3c
	if (!ctx.cr6.gt) goto loc_89940A3C;
loc_89940AE8:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x89940a2c
	if (!ctx.cr6.gt) goto loc_89940A2C;
loc_89940AFC:
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x89940a04
	if (ctx.cr6.lt) goto loc_89940A04;
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// lis r7,-30273
	ctx.r7.s64 = -1983971328;
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r29,-31440(r8)
	REX_STORE_U32(ctx.r8.u32 + -31440, ctx.r29.u32);
	// stb r29,6403(r7)
	REX_STORE_U8(ctx.r7.u32 + 6403, ctx.r29.u8);
	// sth r28,-2544(r6)
	REX_STORE_U16(ctx.r6.u32 + -2544, ctx.r28.u16);
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89941DE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89941DF0;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r9,-30274
	ctx.r9.s64 = -1984036864;
	// addi r17,r11,20432
	ctx.r17.s64 = ctx.r11.s64 + 20432;
	// lis r6,-30273
	ctx.r6.s64 = -1983971328;
	// lis r5,-30275
	ctx.r5.s64 = -1984102400;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r8,530(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 530);
	// li r24,1
	ctx.r24.s64 = 1;
	// lbz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r17.u32 + 0);
	// lis r7,-30318
	ctx.r7.s64 = -1986920448;
	// stb r10,6402(r6)
	REX_STORE_U8(ctx.r6.u32 + 6402, ctx.r10.u8);
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// rlwinm r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// stb r24,12275(r5)
	REX_STORE_U8(ctx.r5.u32 + 12275, ctx.r24.u8);
	// addi r18,r7,-29072
	ctx.r18.s64 = ctx.r7.s64 + -29072;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// stb r8,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// lis r5,-30295
	ctx.r5.s64 = -1985413120;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lis r4,-30296
	ctx.r4.s64 = -1985478656;
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// lis r3,-30295
	ctx.r3.s64 = -1985413120;
	// lis r8,-30295
	ctx.r8.s64 = -1985413120;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lis r7,-30295
	ctx.r7.s64 = -1985413120;
	// lis r29,-30295
	ctx.r29.s64 = -1985413120;
	// lis r28,-30295
	ctx.r28.s64 = -1985413120;
	// lis r27,-30295
	ctx.r27.s64 = -1985413120;
	// addi r22,r6,19744
	ctx.r22.s64 = ctx.r6.s64 + 19744;
	// lis r31,16576
	ctx.r31.s64 = 1086324736;
	// lis r30,32639
	ctx.r30.s64 = 2139029504;
	// stw r22,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// lis r25,-30276
	ctx.r25.s64 = -1984167936;
	// addi r6,r5,19732
	ctx.r6.s64 = ctx.r5.s64 + 19732;
	// addi r21,r4,-25708
	ctx.r21.s64 = ctx.r4.s64 + -25708;
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r23,r3,19848
	ctx.r23.s64 = ctx.r3.s64 + 19848;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r21,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// stw r23,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// addi r8,r8,-4436
	ctx.r8.s64 = ctx.r8.s64 + -4436;
	// addi r7,r7,19684
	ctx.r7.s64 = ctx.r7.s64 + 19684;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r5,r29,19672
	ctx.r5.s64 = ctx.r29.s64 + 19672;
	// stw r8,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r4,r28,19884
	ctx.r4.s64 = ctx.r28.s64 + 19884;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r3,r27,19860
	ctx.r3.s64 = ctx.r27.s64 + 19860;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// ori r15,r31,16384
	ctx.r15.u64 = ctx.r31.u64 | 16384;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// ori r20,r30,32768
	ctx.r20.u64 = ctx.r30.u64 | 32768;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r14,-30270
	ctx.r14.s64 = -1983774720;
	// addi r30,r11,5344
	ctx.r30.s64 = ctx.r11.s64 + 5344;
	// addi r19,r10,12280
	ctx.r19.s64 = ctx.r10.s64 + 12280;
	// addi r31,r9,-31400
	ctx.r31.s64 = ctx.r9.s64 + -31400;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x89941f04
	goto loc_89941F04;
loc_89941EFC:
	// lbz r25,80(r1)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r17,84(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_89941F04:
	// bl 0x899301c0
	ctx.lr = 0x89941F08;
	sub_899301C0(ctx, base);
	// lis r26,-30274
	ctx.r26.s64 = -1984036864;
	// lbz r27,530(r26)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r26.u32 + 530);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x89941f28
	if (!ctx.cr6.eq) goto loc_89941F28;
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941f2c
	if (ctx.cr6.eq) goto loc_89941F2C;
loc_89941F28:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_89941F2C:
	// bl 0x899309d8
	ctx.lr = 0x89941F30;
	sub_899309D8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89930930
	ctx.lr = 0x89941F38;
	sub_89930930(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x89941F3C;
	sub_899306A8(ctx, base);
	// extsb r29,r16
	ctx.r29.s64 = ctx.r16.s8;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// beq cr6,0x89941f54
	if (ctx.cr6.eq) goto loc_89941F54;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x89941f64
	goto loc_89941F64;
loc_89941F54:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x899496d0
	ctx.lr = 0x89941F5C;
	sub_899496D0(ctx, base);
	// lbz r27,530(r26)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r26.u32 + 530);
	// stb r3,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
loc_89941F64:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x89941f94
	if (!ctx.cr6.eq) goto loc_89941F94;
	// lbz r11,128(r17)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r17.u32 + 128);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89941f94
	if (ctx.cr6.eq) goto loc_89941F94;
	// lbz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89941f94
	if (ctx.cr6.eq) goto loc_89941F94;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// xori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 ^ 1;
	// stb r27,530(r26)
	REX_STORE_U8(ctx.r26.u32 + 530, ctx.r27.u8);
loc_89941F94:
	// lbz r11,256(r17)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r17.u32 + 256);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89941fc4
	if (ctx.cr6.eq) goto loc_89941FC4;
	// rlwinm r11,r28,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1FE;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r16,r6,r8
	ctx.r16.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
loc_89941FC4:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89941ff0
	if (ctx.cr6.eq) goto loc_89941FF0;
	// rlwinm r11,r28,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1FE;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// extsb r9,r16
	ctx.r9.s64 = ctx.r16.s8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r16,r6,r8
	ctx.r16.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
loc_89941FF0:
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r31,4388
	ctx.r10.s64 = ctx.r31.s64 + 4388;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89942024
	if (ctx.cr6.eq) goto loc_89942024;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8994200C:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r7,r11,r15
	ctx.r7.u64 = ctx.r11.u64 + ctx.r15.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994200c
	if (!ctx.cr6.eq) goto loc_8994200C;
loc_89942024:
	// extsb r17,r16
	ctx.r17.s64 = ctx.r16.s8;
	// lbz r11,-10032(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + -10032);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stb r24,34(r19)
	REX_STORE_U8(ctx.r19.u32 + 34, ctx.r24.u8);
	// addi r8,r31,36
	ctx.r8.s64 = ctx.r31.s64 + 36;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r30,-10032
	ctx.r10.s64 = ctx.r30.s64 + -10032;
	// lbzx r9,r17,r23
	ctx.r9.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x89942074
	if (ctx.cr6.eq) goto loc_89942074;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8994205C:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r6,r11,r15
	ctx.r6.u64 = ctx.r11.u64 + ctx.r15.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994205c
	if (!ctx.cr6.eq) goto loc_8994205C;
loc_89942074:
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stbx r24,r7,r19
	REX_STORE_U8(ctx.r7.u32 + ctx.r19.u32, ctx.r24.u8);
	// addi r9,r31,4140
	ctx.r9.s64 = ctx.r31.s64 + 4140;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899420ac
	if (ctx.cr6.eq) goto loc_899420AC;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89942094:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r20,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r20.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89942094
	if (!ctx.cr6.eq) goto loc_89942094;
loc_899420AC:
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stb r24,32(r19)
	REX_STORE_U8(ctx.r19.u32 + 32, ctx.r24.u8);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addic r8,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r8.s64 = ctx.r4.s64 + -1;
	// addi r9,r31,3896
	ctx.r9.s64 = ctx.r31.s64 + 3896;
	// subfe r7,r8,r4
	temp.u8 = (~ctx.r8.u32 + ctx.r4.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899420fc
	if (ctx.cr6.eq) goto loc_899420FC;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_899420E4:
	// subf r11,r20,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r20.u64;
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
	// bne cr6,0x899420e4
	if (!ctx.cr6.eq) goto loc_899420E4;
loc_899420FC:
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// stb r24,30(r19)
	REX_STORE_U8(ctx.r19.u32 + 30, ctx.r24.u8);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mulli r9,r10,52
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r9,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8994217c
	if (ctx.cr6.eq) goto loc_8994217C;
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// add r5,r10,r22
	ctx.r5.u64 = ctx.r10.u64 + ctx.r22.u64;
loc_89942124:
	// lbz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r31,44
	ctx.r9.s64 = ctx.r31.s64 + 44;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// rlwinm r8,r6,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x89942168
	if (ctx.cr6.eq) goto loc_89942168;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_89942150:
	// subf r11,r20,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r20.u64;
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
	// bne cr6,0x89942150
	if (!ctx.cr6.eq) goto loc_89942150;
loc_89942168:
	// lwzu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stbx r24,r6,r19
	REX_STORE_U8(ctx.r6.u32 + ctx.r19.u32, ctx.r24.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89942124
	if (!ctx.cr6.eq) goto loc_89942124;
loc_8994217C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x89942388
	if (ctx.cr6.eq) goto loc_89942388;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899421b8
	if (ctx.cr6.eq) goto loc_899421B8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_899421A0:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r7,r20,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r20.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899421a0
	if (!ctx.cr6.eq) goto loc_899421A0;
loc_899421B8:
	// rlwinm r8,r18,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// lwz r11,7108(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 7108);
	// rlwinm r9,r18,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 24) & 0xFFFFFF;
	// stb r24,1(r19)
	REX_STORE_U8(ctx.r19.u32 + 1, ctx.r24.u8);
	// rlwinm r7,r11,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r24,2(r19)
	REX_STORE_U8(ctx.r19.u32 + 2, ctx.r24.u8);
	// rlwinm r6,r9,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r4,r11,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r10,r8,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// rlwinm r11,r11,30,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3C;
	// rlwinm r3,r6,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r5,r7,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r3,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r28,r5,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r4,r4,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// stw r10,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// rlwinm r10,r7,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// rlwinm r9,r9,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// lwzx r29,r11,r30
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r7,r6,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r6,r5,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// rlwinm r11,r8,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// stw r4,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r4.u32);
	// rlwinm r5,r3,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// rlwinm r27,r28,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// stw r29,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// rlwinm r3,r28,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// lwzx r28,r10,r30
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r10,r9,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// rlwinm r25,r27,28,4,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// lwzx r9,r7,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// rlwinm r22,r18,30,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 30) & 0x3C;
	// lwzx r7,r11,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r25,30,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3C;
	// rlwinm r21,r25,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// rlwinm r26,r8,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r23,r27,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// lwzx r27,r6,r30
	ctx.r27.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// lwzx r11,r22,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r30.u32);
	// rlwinm r6,r26,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// lwzx r8,r5,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// rlwinm r5,r26,30,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3C;
	// lwzx r22,r21,r30
	ctx.r22.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r30.u32);
	// lwzx r26,r3,r30
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwzx r25,r23,r30
	ctx.r25.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r30.u32);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// lwzx r6,r6,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// lwzx r5,r5,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// stw r11,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r10,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r9,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stw r8,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r8.u32);
	// stw r7,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r7.u32);
	// stw r6,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
	// stw r5,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r5.u32);
	// stw r28,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r28.u32);
	// stw r27,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r27.u32);
	// stw r26,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r26.u32);
	// stw r25,272(r31)
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r25.u32);
	// lwz r21,108(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r22,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r22.u32);
	// lwzx r21,r21,r30
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r30.u32);
	// stw r21,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r21.u32);
	// bl 0x8994a2d0
	ctx.lr = 0x899422C0;
	sub_8994A2D0(ctx, base);
	// extsb r4,r3
	ctx.r4.s64 = ctx.r3.s8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x89942308
	if (ctx.cr6.eq) goto loc_89942308;
	// lbz r11,-9804(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + -9804);
	// addi r9,r30,-9804
	ctx.r9.s64 = ctx.r30.s64 + -9804;
	// addi r10,r31,300
	ctx.r10.s64 = ctx.r31.s64 + 300;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89942300
	if (ctx.cr6.eq) goto loc_89942300;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_899422E8:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r7,r20,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r20.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899422e8
	if (!ctx.cr6.eq) goto loc_899422E8;
loc_89942300:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stb r24,2(r19)
	REX_STORE_U8(ctx.r19.u32 + 2, ctx.r24.u8);
loc_89942308:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r11,12264(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12264);
	// lhz r10,32032(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 32032);
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// addi r10,r10,-4096
	ctx.r10.s64 = ctx.r10.s64 + -4096;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subfe r6,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x89942378
	if (ctx.cr6.eq) goto loc_89942378;
	// lbz r11,-9792(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + -9792);
	// addi r9,r30,-9792
	ctx.r9.s64 = ctx.r30.s64 + -9792;
	// addi r10,r31,428
	ctx.r10.s64 = ctx.r31.s64 + 428;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89942370
	if (ctx.cr6.eq) goto loc_89942370;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_89942358:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r7,r20,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r20.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x89942358
	if (!ctx.cr6.eq) goto loc_89942358;
loc_89942370:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stb r24,3(r19)
	REX_STORE_U8(ctx.r19.u32 + 3, ctx.r24.u8);
loc_89942378:
	// bl 0x8991fc80
	ctx.lr = 0x8994237C;
	sub_8991FC80(ctx, base);
	// lwz r22,120(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r21,124(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r23,128(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_89942388:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89930720
	ctx.lr = 0x89942394;
	sub_89930720(ctx, base);
	// bl 0x899319c8
	ctx.lr = 0x89942398;
	sub_899319C8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r17,-5
	ctx.r10.s64 = ctx.r17.s64 + -5;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lbz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// rlwinm r7,r11,0,24,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// rlwinm r7,r7,0,27,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x89941efc
	if (!ctx.cr6.eq) goto loc_89941EFC;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x899423f4
	if (ctx.cr6.eq) goto loc_899423F4;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r10,r17,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x899423E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r17,84(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r16,0
	ctx.r16.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x89941f04
	goto loc_89941F04;
loc_899423F4:
	// bl 0x89948238
	ctx.lr = 0x899423F8;
	sub_89948238(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89948808) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x89948810;
	__savegprlr_14(ctx, base);
	// lis r9,976
	ctx.r9.s64 = 63963136;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r10,-30273
	ctx.r10.s64 = -1983971328;
	// stw r24,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r24.u32);
	// lis r8,-30275
	ctx.r8.s64 = -1984102400;
	// ori r26,r9,36863
	ctx.r26.u64 = ctx.r9.u64 | 36863;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r25,r11,22036
	ctx.r25.s64 = ctx.r11.s64 + 22036;
	// addi r9,r10,3800
	ctx.r9.s64 = ctx.r10.s64 + 3800;
	// addi r8,r8,12280
	ctx.r8.s64 = ctx.r8.s64 + 12280;
loc_89948840:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r23,r7,13
	ctx.r23.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(13));
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// rlwinm r22,r11,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_89948854:
	// add r11,r22,r27
	ctx.r11.u64 = ctx.r22.u64 + ctx.r27.u64;
	// addi r7,r8,96
	ctx.r7.s64 = ctx.r8.s64 + 96;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r8,97
	ctx.r5.s64 = ctx.r8.s64 + 97;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r8,98
	ctx.r31.s64 = ctx.r8.s64 + 98;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r8,99
	ctx.r4.s64 = ctx.r8.s64 + 99;
	// add r6,r23,r27
	ctx.r6.u64 = ctx.r23.u64 + ctx.r27.u64;
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// lbzx r5,r10,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbzx r31,r10,r31
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// lbzx r4,r10,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r5,r31
	ctx.r7.u64 = ctx.r5.u64 | ctx.r31.u64;
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r5,r4
	ctx.r29.u64 = ctx.r5.u64 | ctx.r4.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// stwx r29,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u32);
	// ble cr6,0x899488b4
	if (!ctx.cr6.gt) goto loc_899488B4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_899488B4:
	// addi r7,r8,103
	ctx.r7.s64 = ctx.r8.s64 + 103;
	// addi r4,r8,100
	ctx.r4.s64 = ctx.r8.s64 + 100;
	// addi r30,r8,101
	ctx.r30.s64 = ctx.r8.s64 + 101;
	// addi r5,r8,104
	ctx.r5.s64 = ctx.r8.s64 + 104;
	// addi r28,r8,102
	ctx.r28.s64 = ctx.r8.s64 + 102;
	// lbzx r21,r10,r7
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// addi r18,r9,26
	ctx.r18.s64 = ctx.r9.s64 + 26;
	// lbzx r31,r10,r4
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// addi r20,r9,25
	ctx.r20.s64 = ctx.r9.s64 + 25;
	// rlwinm r7,r21,27,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 27) & 0x3;
	// lbzx r4,r10,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// lbzx r19,r10,r5
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// addi r17,r9,4
	ctx.r17.s64 = ctx.r9.s64 + 4;
	// rlwinm r30,r7,2,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// lbzx r5,r10,r28
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// addi r28,r9,12
	ctx.r28.s64 = ctx.r9.s64 + 12;
	// stbx r7,r11,r18
	REX_STORE_U8(ctx.r11.u32 + ctx.r18.u32, ctx.r7.u8);
	// addi r16,r9,24
	ctx.r16.s64 = ctx.r9.s64 + 24;
	// addi r15,r9,8
	ctx.r15.s64 = ctx.r9.s64 + 8;
	// addi r18,r9,16
	ctx.r18.s64 = ctx.r9.s64 + 16;
	// lwzx r10,r30,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// rlwinm r30,r21,25,7,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 25) & 0x1FFFFFF;
	// addi r14,r9,20
	ctx.r14.s64 = ctx.r9.s64 + 20;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stbx r30,r11,r20
	REX_STORE_U8(ctx.r11.u32 + ctx.r20.u32, ctx.r30.u8);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stwx r4,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r4.u32);
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// clrlwi r30,r21,27
	ctx.r30.u64 = ctx.r21.u32 & 0x1F;
	// stwx r5,r11,r18
	REX_STORE_U32(ctx.r11.u32 + ctx.r18.u32, ctx.r5.u32);
	// clrlwi r28,r19,27
	ctx.r28.u64 = ctx.r19.u32 & 0x1F;
	// stwx r4,r11,r15
	REX_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r4.u32);
	// stwx r30,r11,r17
	REX_STORE_U32(ctx.r11.u32 + ctx.r17.u32, ctx.r30.u32);
	// addi r5,r10,32
	ctx.r5.s64 = ctx.r10.s64 + 32;
	// stbx r28,r11,r16
	REX_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r28.u8);
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r24,r11,r14
	REX_STORE_U32(ctx.r11.u32 + ctx.r14.u32, ctx.r24.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8994894C:
	// add r6,r4,r11
	ctx.r6.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x89948970
	if (ctx.cr6.lt) goto loc_89948970;
	// addi r31,r10,122
	ctx.r31.s64 = ctx.r10.s64 + 122;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x89948974
	if (!ctx.cr6.gt) goto loc_89948974;
loc_89948970:
	// li r3,1
	ctx.r3.s64 = 1;
loc_89948974:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// blt cr6,0x8994894c
	if (ctx.cr6.lt) goto loc_8994894C;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x899489d0
	if (ctx.cr6.gt) goto loc_899489D0;
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// ori r10,r11,52429
	ctx.r10.u64 = ctx.r11.u64 | 52429;
	// mulhwu r6,r29,r10
	ctx.r6.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r4,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x899489d0
	if (!ctx.cr0.eq) goto loc_899489D0;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// bgt cr6,0x899489d0
	if (ctx.cr6.gt) goto loc_899489D0;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bgt cr6,0x899489d0
	if (ctx.cr6.gt) goto loc_899489D0;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// ble cr6,0x899489d4
	if (!ctx.cr6.gt) goto loc_899489D4;
loc_899489D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_899489D4:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x89948854
	if (ctx.cr6.lt) goto loc_89948854;
	// lwz r11,-160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// stw r7,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r7.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x89948840
	if (ctx.cr6.lt) goto loc_89948840;
	// lis r7,-30274
	ctx.r7.s64 = -1984036864;
	// lbz r11,496(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 496);
	// addi r6,r7,580
	ctx.r6.s64 = ctx.r7.s64 + 580;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r9,r11,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// rlwinm r8,r11,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stb r10,580(r7)
	REX_STORE_U8(ctx.r7.u32 + 580, ctx.r10.u8);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stb r9,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// stb r8,2(r6)
	REX_STORE_U8(ctx.r6.u32 + 2, ctx.r8.u8);
	// stb r11,3(r6)
	REX_STORE_U8(ctx.r6.u32 + 3, ctx.r11.u8);
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89949388) {
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
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// addi r10,r11,-21388
	ctx.r10.s64 = ctx.r11.s64 + -21388;
	// lbz r11,4947(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 4947);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// bgt cr6,0x899493cc
	if (ctx.cr6.gt) goto loc_899493CC;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899493e4
	if (ctx.cr6.eq) goto loc_899493E4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x89949474
	if (ctx.cr6.lt) goto loc_89949474;
loc_899493CC:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89949474
	if (!ctx.cr6.eq) goto loc_89949474;
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89949474
	if (!ctx.cr6.eq) goto loc_89949474;
loc_899493E4:
	// lis r11,-32640
	ctx.r11.s64 = -2139095040;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// ori r6,r11,32768
	ctx.r6.u64 = ctx.r11.u64 | 32768;
	// addi r3,r10,10084
	ctx.r3.s64 = ctx.r10.s64 + 10084;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x89931d78
	ctx.lr = 0x89949400;
	sub_89931D78(ctx, base);
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r9,10076
	ctx.r3.s64 = ctx.r9.s64 + 10076;
	// li r4,25
	ctx.r4.s64 = 25;
	// bl 0x89931d78
	ctx.lr = 0x89949414;
	sub_89931D78(ctx, base);
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// lis r7,-30275
	ctx.r7.s64 = -1984102400;
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// lbz r6,530(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 530);
	// lbz r11,12271(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 12271);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x89949434
	if (!ctx.cr6.eq) goto loc_89949434;
	// stb r11,-31405(r30)
	REX_STORE_U8(ctx.r30.u32 + -31405, ctx.r11.u8);
loc_89949434:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r31,r10,20376
	ctx.r31.s64 = ctx.r10.s64 + 20376;
	// rlwinm r11,r9,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x10;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,26
	ctx.r4.s64 = 26;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x89931d20
	ctx.lr = 0x89949458;
	sub_89931D20(ctx, base);
	// lbz r11,-31405(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + -31405);
	// li r4,25
	ctx.r4.s64 = 25;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x10;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x89931d20
	ctx.lr = 0x89949474;
	sub_89931D20(ctx, base);
loc_89949474:
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

DEFINE_REX_FUNC(sub_899497F0) {
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
	// bl 0x8994bf28
	ctx.lr = 0x89949808;
	sub_8994BF28(ctx, base);
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,12280
	ctx.r10.s64 = ctx.r10.s64 + 12280;
	// addi r9,r9,9544
	ctx.r9.s64 = ctx.r9.s64 + 9544;
loc_8994981C:
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x89949868
	if (!ctx.cr6.eq) goto loc_89949868;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x8994981c
	if (ctx.cr6.lt) goto loc_8994981C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_89949844:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89949870
	if (ctx.cr6.eq) goto loc_89949870;
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
loc_89949868:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x89949844
	goto loc_89949844;
loc_89949870:
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899498f0
	if (ctx.cr6.lt) goto loc_899498F0;
	// beq cr6,0x899498b0
	if (ctx.cr6.eq) goto loc_899498B0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x89949944
	if (!ctx.cr6.lt) goto loc_89949944;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8994988C:
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x8994988c
	if (ctx.cr6.lt) goto loc_8994988C;
	// bl 0x89948148
	ctx.lr = 0x899498AC;
	sub_89948148(ctx, base);
	// b 0x89949944
	goto loc_89949944;
loc_899498B0:
	// bl 0x89949490
	ctx.lr = 0x899498B4;
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
	ctx.lr = 0x899498D0;
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
	// beq cr6,0x89949944
	if (ctx.cr6.eq) goto loc_89949944;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x89949944
	goto loc_89949944;
loc_899498F0:
	// bl 0x89949490
	ctx.lr = 0x899498F4;
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
	ctx.lr = 0x89949910;
	sub_89931D78(ctx, base);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r11,r9,-4772
	ctx.r11.s64 = ctx.r9.s64 + -4772;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r11,-52
	ctx.r3.s64 = ctx.r11.s64 + -52;
	// bl 0x89931d78
	ctx.lr = 0x89949928;
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
	// beq cr6,0x89949944
	if (ctx.cr6.eq) goto loc_89949944;
	// li r31,1
	ctx.r31.s64 = 1;
loc_89949944:
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

DEFINE_REX_FUNC(sub_8994A168) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x8994A170;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x89929a28
	ctx.lr = 0x8994A178;
	sub_89929A28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r4,2132
	ctx.r4.s64 = 2132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x899d8fd0
	ctx.lr = 0x8994A190;
	sub_899D8FD0(ctx, base);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// lis r8,32639
	ctx.r8.s64 = 2139029504;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// ori r31,r8,32768
	ctx.r31.u64 = ctx.r8.u64 | 32768;
	// lis r26,-30270
	ctx.r26.s64 = -1983774720;
	// lis r25,-30276
	ctx.r25.s64 = -1984167936;
	// addi r29,r11,-4460
	ctx.r29.s64 = ctx.r11.s64 + -4460;
	// addi r24,r10,12280
	ctx.r24.s64 = ctx.r10.s64 + 12280;
	// addi r27,r9,-31400
	ctx.r27.s64 = ctx.r9.s64 + -31400;
loc_8994A1B8:
	// bl 0x899301c0
	ctx.lr = 0x8994A1BC;
	sub_899301C0(ctx, base);
	// bl 0x899309d8
	ctx.lr = 0x8994A1C0;
	sub_899309D8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89930930
	ctx.lr = 0x8994A1C8;
	sub_89930930(ctx, base);
	// bl 0x899306a8
	ctx.lr = 0x8994A1CC;
	sub_899306A8(ctx, base);
	// lhz r11,12264(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 12264);
	// lhz r10,32032(r25)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 32032);
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// addi r10,r10,-4096
	ctx.r10.s64 = ctx.r10.s64 + -4096;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subfe r6,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r30,r8,r6
	ctx.r30.u64 = ctx.r8.u64 | ctx.r6.u64;
	// bl 0x8994a2d0
	ctx.lr = 0x8994A1F8;
	sub_8994A2D0(ctx, base);
	// extsb r28,r30
	ctx.r28.s64 = ctx.r30.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8994a240
	if (ctx.cr6.eq) goto loc_8994A240;
	// lbz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 12);
	// addi r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 + 12;
	// addi r10,r27,4904
	ctx.r10.s64 = ctx.r27.s64 + 4904;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994a238
	if (ctx.cr6.eq) goto loc_8994A238;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8994A220:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r7,r31,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r31.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994a220
	if (!ctx.cr6.eq) goto loc_8994A220;
loc_8994A238:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,38(r24)
	REX_STORE_U8(ctx.r24.u32 + 38, ctx.r11.u8);
loc_8994A240:
	// extsb r30,r3
	ctx.r30.s64 = ctx.r3.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8994a288
	if (ctx.cr6.eq) goto loc_8994A288;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r10,r27,4776
	ctx.r10.s64 = ctx.r27.s64 + 4776;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8994a280
	if (ctx.cr6.eq) goto loc_8994A280;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8994A268:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r7,r31,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r31.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994a268
	if (!ctx.cr6.eq) goto loc_8994A268;
loc_8994A280:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,37(r24)
	REX_STORE_U8(ctx.r24.u32 + 37, ctx.r11.u8);
loc_8994A288:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89930720
	ctx.lr = 0x8994A294;
	sub_89930720(ctx, base);
	// bl 0x899319c8
	ctx.lr = 0x8994A298;
	sub_899319C8(ctx, base);
	// or r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 | ctx.r28.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8994a1b8
	if (!ctx.cr6.eq) goto loc_8994A1B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r4,2132
	ctx.r4.s64 = 2132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x899d8fd0
	ctx.lr = 0x8994A2C4;
	sub_899D8FD0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8994C070) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,9544
	ctx.r11.s64 = ctx.r11.s64 + 9544;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r8,17
	ctx.r8.s64 = 17;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r7,250
	ctx.r7.s64 = 250;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// li r9,63
	ctx.r9.s64 = 63;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// li r6,51
	ctx.r6.s64 = 51;
	// stb r9,17(r11)
	REX_STORE_U8(ctx.r11.u32 + 17, ctx.r9.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r9,28(r11)
	REX_STORE_U8(ctx.r11.u32 + 28, ctx.r9.u8);
	// li r8,31
	ctx.r8.s64 = 31;
	// stb r5,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r5.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r7,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// stb r6,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r9,21(r11)
	REX_STORE_U8(ctx.r11.u32 + 21, ctx.r9.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r10,16(r11)
	REX_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r8,18(r11)
	REX_STORE_U8(ctx.r11.u32 + 18, ctx.r8.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r5,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r5.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r7,23(r11)
	REX_STORE_U8(ctx.r11.u32 + 23, ctx.r7.u8);
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// stb r6,22(r11)
	REX_STORE_U8(ctx.r11.u32 + 22, ctx.r6.u8);
	// stb r10,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// stb r8,26(r11)
	REX_STORE_U8(ctx.r11.u32 + 26, ctx.r8.u8);
	// addi r9,r9,-5616
	ctx.r9.s64 = ctx.r9.s64 + -5616;
	// stb r7,29(r11)
	REX_STORE_U8(ctx.r11.u32 + 29, ctx.r7.u8);
	// stb r6,27(r11)
	REX_STORE_U8(ctx.r11.u32 + 27, ctx.r6.u8);
	// stb r5,31(r11)
	REX_STORE_U8(ctx.r11.u32 + 31, ctx.r5.u8);
	// stb r4,30(r11)
	REX_STORE_U8(ctx.r11.u32 + 30, ctx.r4.u8);
loc_8994C118:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r7,r9,36
	ctx.r7.s64 = ctx.r9.s64 + 36;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r9,38
	ctx.r6.s64 = ctx.r9.s64 + 38;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r5,14
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 14, ctx.xer);
	// lhzx r4,r3,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// lbzx r6,r3,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// stbx r4,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r4.u8);
	// stbx r3,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r3.u8);
	// blt cr6,0x8994c118
	if (ctx.cr6.lt) goto loc_8994C118;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8994C368) {
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
	// rlwinm r11,r3,3,1,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x7FFFFFF8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r30,r11,17408
	ctx.r30.s64 = ctx.r11.s64 + 17408;
	// ori r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 4096;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8994c3cc
	if (ctx.cr6.gt) goto loc_8994C3CC;
	// lis r10,-30214
	ctx.r10.s64 = -1980104704;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,3680(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 3680);
	// lwz r10,-26964(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -26964);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8994C3CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8994C3CC:
	// cmplwi cr6,r31,43
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 43, ctx.xer);
	// bgt cr6,0x8994c404
	if (ctx.cr6.gt) goto loc_8994C404;
	// beq cr6,0x8994c3ec
	if (ctx.cr6.eq) goto loc_8994C3EC;
	// cmplwi cr6,r31,25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 25, ctx.xer);
	// blt cr6,0x8994c414
	if (ctx.cr6.lt) goto loc_8994C414;
	// cmplwi cr6,r31,42
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 42, ctx.xer);
	// ble cr6,0x8994c40c
	if (!ctx.cr6.gt) goto loc_8994C40C;
	// b 0x8994c414
	goto loc_8994C414;
loc_8994C3EC:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8994c414
	if (!ctx.cr6.eq) goto loc_8994C414;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x8994c410
	goto loc_8994C410;
loc_8994C404:
	// cmplwi cr6,r31,45
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 45, ctx.xer);
	// bne cr6,0x8994c414
	if (!ctx.cr6.eq) goto loc_8994C414;
loc_8994C40C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8994C410:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8994C414:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x899d8fd0
	ctx.lr = 0x8994C424;
	sub_899D8FD0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_899520B8) {
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
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,3680(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 3680);
	// lwz r11,-26964(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -26964);
	// addi r5,r11,4096
	ctx.r5.s64 = ctx.r11.s64 + 4096;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x899520F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8995211c
	if (!ctx.cr6.eq) goto loc_8995211C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x899d8fd0
	ctx.lr = 0x8995211C;
	sub_899D8FD0(ctx, base);
loc_8995211C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899526C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899526D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r30,3524(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 3524);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89952890
	if (ctx.cr6.eq) goto loc_89952890;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89952890
	if (ctx.cr6.eq) goto loc_89952890;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x89952890
	if (ctx.cr6.eq) goto loc_89952890;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x89952890
	if (ctx.cr6.eq) goto loc_89952890;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x89952890
	if (ctx.cr6.eq) goto loc_89952890;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x89952890
	if (ctx.cr6.eq) goto loc_89952890;
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// addi r31,r30,68
	ctx.r31.s64 = ctx.r30.s64 + 68;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8995273c
	if (ctx.cr6.eq) goto loc_8995273C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8995273C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8995275c
	if (ctx.cr6.eq) goto loc_8995275C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8995275C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x89952780
	if (ctx.cr6.eq) goto loc_89952780;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_89952780:
	// addis r24,r31,66
	ctx.r24.s64 = ctx.r31.s64 + 4325376;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,44
	ctx.r10.s64 = 44;
	// addi r24,r24,-1220
	ctx.r24.s64 = ctx.r24.s64 + -1220;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// li r7,4100
	ctx.r7.s64 = 4100;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r11,r11,4144
	ctx.r11.s64 = ctx.r11.s64 + 4144;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x89951f78
	ctx.lr = 0x899527DC;
	sub_89951F78(ctx, base);
	// li r5,4100
	ctx.r5.s64 = 4100;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89951f78
	ctx.lr = 0x899527EC;
	sub_89951F78(ctx, base);
	// lis r11,21
	ctx.r11.s64 = 1376256;
	// addi r27,r29,-4
	ctx.r27.s64 = ctx.r29.s64 + -4;
	// addi r28,r31,4148
	ctx.r28.s64 = ctx.r31.s64 + 4148;
	// li r29,3
	ctx.r29.s64 = 3;
	// li r25,-1
	ctx.r25.s64 = -1;
	// ori r26,r11,63748
	ctx.r26.u64 = ctx.r11.u64 | 63748;
loc_89952804:
	// lwzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x89951f78
	ctx.lr = 0x89952820;
	sub_89951F78(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x89951f78
	ctx.lr = 0x89952830;
	sub_89951F78(ctx, base);
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89951f78
	ctx.lr = 0x89952844;
	sub_89951F78(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// bne 0x89952804
	if (!ctx.cr0.eq) goto loc_89952804;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x89951f78
	ctx.lr = 0x89952870;
	sub_89951F78(ctx, base);
	// addis r4,r31,66
	ctx.r4.s64 = ctx.r31.s64 + 4325376;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r4,-1216
	ctx.r4.s64 = ctx.r4.s64 + -1216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89951f78
	ctx.lr = 0x89952884;
	sub_89951F78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_89952890:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899534B0) {
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
	ctx.lr = 0x899534C8;
	sub_89918508(ctx, base);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// addi r10,r11,9656
	ctx.r10.s64 = ctx.r11.s64 + 9656;
	// mulli r11,r9,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(92));
	// addi r10,r10,78
	ctx.r10.s64 = ctx.r10.s64 + 78;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// sthx r8,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u16);
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

DEFINE_REX_FUNC(sub_89953630) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x89953638;
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
	// li r9,160
	ctx.r9.s64 = 160;
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
	ctx.lr = 0x89953670;
	sub_89934FB8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-30234
	ctx.r11.s64 = -1981415424;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r31,r11,-9952
	ctx.r31.s64 = ctx.r11.s64 + -9952;
loc_89953680:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8995368C:
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
	// addi r6,r31,-4472
	ctx.r6.s64 = ctx.r31.s64 + -4472;
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
loc_899536D0:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x899536d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899536D0;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x8995368c
	if (ctx.cr6.lt) goto loc_8995368C;
	// addi r8,r31,-4472
	ctx.r8.s64 = ctx.r31.s64 + -4472;
	// addi r10,r31,-3120
	ctx.r10.s64 = ctx.r31.s64 + -3120;
	// mulli r9,r30,170
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(170));
	// mulli r11,r30,780
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(780));
	// addi r6,r31,-3792
	ctx.r6.s64 = ctx.r31.s64 + -3792;
	// li r7,9
	ctx.r7.s64 = 9;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935880
	ctx.lr = 0x89953718;
	sub_89935880(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x89953680
	if (ctx.cr6.lt) goto loc_89953680;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r11,r31,264
	ctx.r11.s64 = ctx.r31.s64 + 264;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,24
	ctx.r9.s64 = 24;
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
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x89953760;
	sub_89934FB8(ctx, base);
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r31,264
	ctx.r9.s64 = ctx.r31.s64 + 264;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r8,r8,3484
	ctx.r8.s64 = ctx.r8.s64 + 3484;
loc_89953774:
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
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// blt cr6,0x89953774
	if (ctx.cr6.lt) goto loc_89953774;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// addi r8,r9,9016
	ctx.r8.s64 = ctx.r9.s64 + 9016;
loc_899537B4:
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
	// addi r11,r31,-3792
	ctx.r11.s64 = ctx.r31.s64 + -3792;
	// addi r3,r31,-3792
	ctx.r3.s64 = ctx.r31.s64 + -3792;
	// addi r5,r31,-3792
	ctx.r5.s64 = ctx.r31.s64 + -3792;
	// lhzx r7,r4,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r30,r31,-3792
	ctx.r30.s64 = ctx.r31.s64 + -3792;
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
	// addi r6,r31,-3792
	ctx.r6.s64 = ctx.r31.s64 + -3792;
	// srawi r25,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 8;
	// addi r9,r31,-3792
	ctx.r9.s64 = ctx.r31.s64 + -3792;
	// neg r23,r26
	ctx.r23.s64 = static_cast<int64_t>(-ctx.r26.u64);
	// stwx r25,r28,r3
	REX_STORE_U32(ctx.r28.u32 + ctx.r3.u32, ctx.r25.u32);
	// addi r4,r31,-3792
	ctx.r4.s64 = ctx.r31.s64 + -3792;
	// stwx r10,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r10.u32);
	// addi r7,r31,-3792
	ctx.r7.s64 = ctx.r31.s64 + -3792;
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
	// addi r22,r31,-3792
	ctx.r22.s64 = ctx.r31.s64 + -3792;
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
	// blt cr6,0x899537b4
	if (ctx.cr6.lt) goto loc_899537B4;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899549A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x899549A8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwzx r29,r31,r28
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// rlwinm r9,r29,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x89954a14
	if (!ctx.cr6.eq) goto loc_89954A14;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x899337b0
	ctx.lr = 0x899549EC;
	sub_899337B0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89954c00
	if (ctx.cr6.eq) goto loc_89954C00;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89933a98
	ctx.lr = 0x89954A00;
	sub_89933A98(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89954c00
	if (ctx.cr6.eq) goto loc_89954C00;
	// ori r11,r29,4
	ctx.r11.u64 = ctx.r29.u64 | 4;
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
loc_89954A14:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991a058
	ctx.lr = 0x89954A1C;
	sub_8991A058(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x89954c00
	if (ctx.cr6.eq) goto loc_89954C00;
	// extsh r11,r24
	ctx.r11.s64 = ctx.r24.s16;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89932798
	ctx.lr = 0x89954A5C;
	sub_89932798(ctx, base);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x89954c00
	if (ctx.cr6.eq) goto loc_89954C00;
	// lis r29,-30270
	ctx.r29.s64 = -1983774720;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r28,r29,3360
	ctx.r28.s64 = ctx.r29.s64 + 3360;
	// lwz r4,3360(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 3360);
	// lwz r3,7904(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 7904);
	// bl 0x899d3370
	ctx.lr = 0x89954A88;
	sub_899D3370(ctx, base);
	// rlwinm r8,r27,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// lwz r11,3360(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 3360);
	// lis r7,-14336
	ctx.r7.s64 = -939524096;
	// stw r8,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// srawi r6,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 4;
	// ori r8,r7,4096
	ctx.r8.u64 = ctx.r7.u64 | 4096;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r9,124(r11)
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r9.u16);
	// rlwinm r5,r6,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r3,r26,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// stw r9,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r9.u32);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// stw r3,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// srawi r6,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 4;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// lis r3,128
	ctx.r3.s64 = 8388608;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// ori r22,r3,32896
	ctx.r22.u64 = ctx.r3.u64 | 32896;
	// rlwinm r5,r6,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// addi r29,r30,637
	ctx.r29.s64 = ctx.r30.s64 + 637;
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// li r27,665
	ctx.r27.s64 = 665;
	// li r26,192
	ctx.r26.s64 = 192;
	// li r24,128
	ctx.r24.s64 = 128;
	// li r21,256
	ctx.r21.s64 = 256;
	// addi r30,r30,636
	ctx.r30.s64 = ctx.r30.s64 + 636;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r3,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// sth r27,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r27.u16);
	// stb r26,38(r11)
	REX_STORE_U8(ctx.r11.u32 + 38, ctx.r26.u8);
	// stb r24,39(r11)
	REX_STORE_U8(ctx.r11.u32 + 39, ctx.r24.u8);
	// stw r22,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r22.u32);
	// stb r25,128(r11)
	REX_STORE_U8(ctx.r11.u32 + 128, ctx.r25.u8);
	// sth r21,126(r11)
	REX_STORE_U16(ctx.r11.u32 + 126, ctx.r21.u16);
	// lbzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lbzx r4,r31,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// rotlwi r3,r4,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// ori r5,r7,4096
	ctx.r5.u64 = ctx.r7.u64 | 4096;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lis r10,-30303
	ctx.r10.s64 = -1985937408;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r7,r10,-16084
	ctx.r7.s64 = ctx.r10.s64 + -16084;
loc_89954B74:
	// lwzu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r7,1
	ctx.r31.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,23
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 23, ctx.xer);
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// lbzx r30,r3,r7
	ctx.r30.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// stw r30,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// sth r9,124(r10)
	REX_STORE_U16(ctx.r10.u32 + 124, ctx.r9.u16);
	// lwz r30,12(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r30,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// lhz r30,48(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// sth r30,48(r10)
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r30.u16);
	// sth r4,20(r10)
	REX_STORE_U16(ctx.r10.u32 + 20, ctx.r4.u16);
	// lwz r30,24(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r30,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// lwz r30,36(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r30,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r30.u32);
	// lwz r30,40(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r30,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r30.u32);
	// lbzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// stw r3,120(r10)
	REX_STORE_U32(ctx.r10.u32 + 120, ctx.r3.u32);
	// blt cr6,0x89954b74
	if (ctx.cr6.lt) goto loc_89954B74;
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x89936218
	ctx.lr = 0x89954BF4;
	sub_89936218(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_89954C00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89956158) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x8995621c
	if (ctx.cr6.gt) {
		sub_8995621C(ctx, base);
		return;
	}
	// lis r12,-30315
	ctx.r12.s64 = -1986723840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24960
	ctx.r12.s64 = ctx.r12.s64 + 24960;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899561C0;
	case 1:
		goto loc_899561C0;
	case 2:
		goto loc_899561C0;
	case 3:
		goto loc_899561C0;
	case 4:
		goto loc_899561C0;
	case 5:
		goto loc_899561C0;
	case 6:
		goto loc_899561C0;
	case 7:
		goto loc_899561C0;
	case 8:
		sub_899561F0(ctx, base);
		return;
	case 9:
		sub_899561F0(ctx, base);
		return;
	case 10:
		sub_899561F0(ctx, base);
		return;
	case 11:
		sub_899561F0(ctx, base);
		return;
	case 12:
		sub_899561F0(ctx, base);
		return;
	case 13:
		sub_899561F0(ctx, base);
		return;
	case 14:
		sub_899561F0(ctx, base);
		return;
	case 15:
		sub_899561F0(ctx, base);
		return;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899561C0:
	// lbz r10,128(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stb r8,128(r4)
	REX_STORE_U8(ctx.r4.u32 + 128, ctx.r8.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x89956234
	if (!ctx.cr6.eq) goto loc_89956234;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwimi r10,r11,0,24,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// b 0x89956234
	goto loc_89956234;
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

DEFINE_REX_FUNC(sub_89956180) {
	REX_FUNC_PROLOGUE();
	// lbz r12,25024(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25024);
	// lbz r12,25024(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25024);
	// lbz r12,25024(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25024);
	// lbz r12,25024(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25024);
	// lbz r12,25024(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25024);
	// lbz r12,25024(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25024);
	// lbz r12,25024(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25024);
	// lbz r12,25024(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25024);
	// lbz r12,25072(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25072);
	// lbz r12,25072(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25072);
	// lbz r12,25072(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25072);
	// lbz r12,25072(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25072);
	// lbz r12,25072(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25072);
	// lbz r12,25072(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25072);
	// lbz r12,25072(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25072);
	// lbz r12,25072(r21)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r21.u32 + 25072);
	// lbz r10,128(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stb r8,128(r4)
	REX_STORE_U8(ctx.r4.u32 + 128, ctx.r8.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x89956234
	if (!ctx.cr6.eq) goto loc_89956234;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwimi r10,r11,0,24,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// b 0x89956234
	goto loc_89956234;
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

DEFINE_REX_FUNC(sub_89956B70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89956B78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// rlwinm r8,r11,0,5,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// ori r30,r9,20077
	ctx.r30.u64 = ctx.r9.u64 | 20077;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lwz r11,-9212(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -9212);
	// li r6,512
	ctx.r6.s64 = 512;
	// stb r10,128(r4)
	REX_STORE_U8(ctx.r4.u32 + 128, ctx.r10.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// sth r6,36(r4)
	REX_STORE_U16(ctx.r4.u32 + 36, ctx.r6.u16);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// rlwinm r5,r7,0,2,2
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000000;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// rlwinm r10,r10,19,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,-9212(r29)
	REX_STORE_U32(ctx.r29.u32 + -9212, ctx.r11.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x89956c34
	if (ctx.cr6.eq) goto loc_89956C34;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lhz r8,124(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// addi r10,r7,25128
	ctx.r10.s64 = ctx.r7.s64 + 25128;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// mulli r11,r6,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(696));
	// lwzx r7,r11,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lis r6,-30303
	ctx.r6.s64 = -1985937408;
	// srawi r5,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 16;
	// addi r11,r6,-16452
	ctx.r11.s64 = ctx.r6.s64 + -16452;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r7,31,1,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFE;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// lbzx r4,r10,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// b 0x89956c7c
	goto loc_89956C7C;
loc_89956C34:
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// lhz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 124);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// addi r10,r8,25128
	ctx.r10.s64 = ctx.r8.s64 + 25128;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// mulli r4,r7,696
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(696));
	// lwzx r8,r4,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// srawi r7,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// clrlwi r11,r7,26
	ctx.r11.u64 = ctx.r7.u32 & 0x3F;
	// lis r6,-30303
	ctx.r6.s64 = -1985937408;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r6,-16452
	ctx.r5.s64 = ctx.r6.s64 + -16452;
	// rlwinm r4,r8,31,1,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFE;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// lbzx r4,r4,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
loc_89956C7C:
	// bl 0x89936218
	ctx.lr = 0x89956C80;
	sub_89936218(ctx, base);
	// lwz r11,-9212(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -9212);
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r29)
	REX_STORE_U32(ctx.r29.u32 + -9212, ctx.r11.u32);
	// addi r5,r8,9016
	ctx.r5.s64 = ctx.r8.s64 + 9016;
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// addi r7,r9,128
	ctx.r7.s64 = ctx.r9.s64 + 128;
	// clrlwi r11,r4,17
	ctx.r11.u64 = ctx.r4.u32 & 0x7FFF;
	// rlwinm r3,r7,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lhzx r7,r3,r5
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// rlwinm r11,r8,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFF;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r28,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// mullw r3,r6,r11
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lhzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stw r6,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89957F68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x89957F70;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30233
	ctx.r11.s64 = -1981349888;
	// li r31,6
	ctx.r31.s64 = 6;
	// addi r30,r11,-12552
	ctx.r30.s64 = ctx.r11.s64 + -12552;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// addi r11,r30,-648
	ctx.r11.s64 = ctx.r30.s64 + -648;
	// li r9,224
	ctx.r9.s64 = 224;
	// li r8,-20
	ctx.r8.s64 = -20;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x89934860
	ctx.lr = 0x89957FB0;
	sub_89934860(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,32
	ctx.r9.s64 = 32;
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
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x899352b8
	ctx.lr = 0x89957FE0;
	sub_899352B8(ctx, base);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-19828
	ctx.r29.s64 = ctx.r11.s64 + -19828;
loc_89957FEC:
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_89957FF4:
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
	// blt cr6,0x89957ff4
	if (ctx.cr6.lt) goto loc_89957FF4;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,-648
	ctx.r9.s64 = ctx.r30.s64 + -648;
	// mulli r8,r31,68
	ctx.r8.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(68));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r10,r31,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(60));
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r30,-1320
	ctx.r6.s64 = ctx.r30.s64 + -1320;
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
	ctx.lr = 0x89958090;
	sub_89935610(ctx, base);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// blt cr6,0x89957fec
	if (ctx.cr6.lt) goto loc_89957FEC;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// addi r3,r30,-1320
	ctx.r3.s64 = ctx.r30.s64 + -1320;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,3504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-30303
	ctx.r11.s64 = -1985937408;
	// beq cr6,0x899580d8
	if (ctx.cr6.eq) goto loc_899580D8;
	// addi r11,r11,-17732
	ctx.r11.s64 = ctx.r11.s64 + -17732;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x89957ea0
	ctx.lr = 0x899580D0;
	sub_89957EA0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899580D8:
	// addi r4,r11,-17732
	ctx.r4.s64 = ctx.r11.s64 + -17732;
	// addi r5,r4,20
	ctx.r5.s64 = ctx.r4.s64 + 20;
	// bl 0x89957ea0
	ctx.lr = 0x899580E4;
	sub_89957EA0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89959360) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-30314
	ctx.r12.s64 = -1986658304;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27772
	ctx.r12.s64 = ctx.r12.s64 + -27772;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899593B4;
	case 1:
		goto loc_899593B4;
	case 2:
		goto loc_899593B4;
	case 3:
		goto loc_899593B4;
	case 4:
		goto loc_89959478;
	case 5:
		goto loc_89959478;
	case 6:
		goto loc_89959478;
	case 7:
		goto loc_89959478;
	case 8:
		sub_89959468(ctx, base);
		return;
	case 9:
		sub_89959468(ctx, base);
		return;
	case 10:
		sub_89959468(ctx, base);
		return;
	case 11:
		sub_89959468(ctx, base);
		return;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899593B4:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89959424
	if (ctx.cr6.eq) goto loc_89959424;
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899593e0
	if (!ctx.cr6.eq) goto loc_899593E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x89959450
	goto loc_89959450;
loc_899593E0:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,116(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 116);
	// lwz r7,28(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,120(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 120);
	// lwz r9,32(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r7.u32);
	// lbz r6,38(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 38);
	// stb r6,38(r4)
	REX_STORE_U8(ctx.r4.u32 + 38, ctx.r6.u8);
	// lbz r5,39(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 39);
	// stb r5,39(r4)
	REX_STORE_U8(ctx.r4.u32 + 39, ctx.r5.u8);
	// b 0x89959450
	goto loc_89959450;
loc_89959424:
	// lbz r11,38(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 38);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bge cr6,0x8995943c
	if (!ctx.cr6.lt) goto loc_8995943C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x89959450
	goto loc_89959450;
loc_8995943C:
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
loc_89959450:
	// lbz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,128(r4)
	REX_STORE_U8(ctx.r4.u32 + 128, ctx.r11.u8);
	// blr 
	return;
loc_89959478:
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

DEFINE_REX_FUNC(sub_89959D9C) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89959DA8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,128(r3)
	REX_STORE_U8(ctx.r3.u32 + 128, ctx.r10.u8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,128(r3)
	REX_STORE_U8(ctx.r3.u32 + 128, ctx.r10.u8);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x89959dd8
	if (!ctx.cr6.eq) goto loc_89959DD8;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_89959DD8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8995A7B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x8995a7d8
	if (ctx.cr6.eq) goto loc_8995A7D8;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// beq cr6,0x8995a7cc
	if (ctx.cr6.eq) goto loc_8995A7CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8995a7f8
	goto loc_8995A7F8;
loc_8995A7CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x8995a7fc
	goto loc_8995A7FC;
loc_8995A7D8:
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
	// beq cr6,0x8995a7f8
	if (ctx.cr6.eq) goto loc_8995A7F8;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8995A7F8:
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
loc_8995A7FC:
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

DEFINE_REX_FUNC(sub_8995A960) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x8995A968;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8995aaf0
	if (ctx.cr6.lt) goto loc_8995AAF0;
	// bne cr6,0x8995ac8c
	if (!ctx.cr6.eq) goto loc_8995AC8C;
	// lwz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8995aa28
	if (ctx.cr6.eq) goto loc_8995AA28;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8995aa3c
	if (ctx.cr6.eq) goto loc_8995AA3C;
	// lhz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 76);
	// lhz r9,76(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 76);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8995aa3c
	if (!ctx.cr6.eq) goto loc_8995AA3C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r4,r6,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r4,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_8995AA28:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x8995aa4c
	if (ctx.cr6.eq) goto loc_8995AA4C;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bne cr6,0x8995aa68
	if (!ctx.cr6.eq) goto loc_8995AA68;
loc_8995AA3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_8995AA4C:
	// lbz r11,95(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 95);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,95(r31)
	REX_STORE_U8(ctx.r31.u32 + 95, ctx.r10.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8995aa70
	if (!ctx.cr6.eq) goto loc_8995AA70;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
loc_8995AA68:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8995aa74
	goto loc_8995AA74;
loc_8995AA70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8995AA74:
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r4,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_8995AAF0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8995ab78
	if (ctx.cr6.eq) goto loc_8995AB78;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
loc_8995AB78:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899192e8
	ctx.lr = 0x8995AB84;
	sub_899192E8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8995ac8c
	if (ctx.cr6.eq) goto loc_8995AC8C;
	// extsh r10,r30
	ctx.r10.s64 = ctx.r30.s16;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// lis r7,-30251
	ctx.r7.s64 = -1982529536;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// mulli r16,r10,696
	ctx.r16.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// lwz r25,3504(r8)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r8.u32 + 3504);
	// lhz r26,12148(r7)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r7.u32 + 12148);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// addi r15,r11,28
	ctx.r15.s64 = ctx.r11.s64 + 28;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r17,-13296
	ctx.r17.s64 = -871366656;
	// li r18,6
	ctx.r18.s64 = 6;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r19,10
	ctx.r19.s64 = 10;
	// li r20,519
	ctx.r20.s64 = 519;
	// li r21,176
	ctx.r21.s64 = 176;
	// li r22,96
	ctx.r22.s64 = 96;
	// li r23,7
	ctx.r23.s64 = 7;
	// addi r27,r9,29572
	ctx.r27.s64 = ctx.r9.s64 + 29572;
	// addi r30,r10,25064
	ctx.r30.s64 = ctx.r10.s64 + 25064;
loc_8995ABF0:
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r17,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r17.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// sth r26,76(r3)
	REX_STORE_U16(ctx.r3.u32 + 76, ctx.r26.u16);
	// stw r18,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// stw r24,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r24.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// bl 0x89918f48
	ctx.lr = 0x8995AC14;
	sub_89918F48(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lhzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// rotlwi r9,r10,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lwzx r8,r16,r15
	ctx.r8.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r15.u32);
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// lbz r7,96(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 96);
	// stb r7,96(r3)
	REX_STORE_U8(ctx.r3.u32 + 96, ctx.r7.u8);
	// stb r19,68(r3)
	REX_STORE_U8(ctx.r3.u32 + 68, ctx.r19.u8);
	// sth r20,64(r3)
	REX_STORE_U16(ctx.r3.u32 + 64, ctx.r20.u16);
	// stb r21,66(r3)
	REX_STORE_U8(ctx.r3.u32 + 66, ctx.r21.u8);
	// stb r22,67(r3)
	REX_STORE_U8(ctx.r3.u32 + 67, ctx.r22.u8);
	// stb r23,95(r3)
	REX_STORE_U8(ctx.r3.u32 + 95, ctx.r23.u8);
	// stb r29,94(r3)
	REX_STORE_U8(ctx.r3.u32 + 94, ctx.r29.u8);
	// beq cr6,0x8995ac70
	if (ctx.cr6.eq) goto loc_8995AC70;
	// lbz r11,95(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 95);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8995ac70
	if (!ctx.cr6.eq) goto loc_8995AC70;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r24,95(r3)
	REX_STORE_U8(ctx.r3.u32 + 95, ctx.r24.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,96(r3)
	REX_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
loc_8995AC70:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8995abf0
	if (ctx.cr6.lt) goto loc_8995ABF0;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8995AC8C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8995D020) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8995D028;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r16,r11,25128
	ctx.r16.s64 = ctx.r11.s64 + 25128;
	// lwz r11,696(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 696);
	// lwz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r11,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8995d0b8
	if (ctx.cr6.gt) goto loc_8995D0B8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8995d400
	if (ctx.cr6.eq) goto loc_8995D400;
	// bdz 0x8995d078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8995D078;
	// bdz 0x8995d080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8995D080;
	// b 0x8995d08c
	goto loc_8995D08C;
loc_8995D078:
	// stb r20,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r20.u8);
	// b 0x8995d0b8
	goto loc_8995D0B8;
loc_8995D080:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x8995d0b8
	goto loc_8995D0B8;
loc_8995D08C:
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
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// stb r5,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
loc_8995D0B8:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r10,-30303
	ctx.r10.s64 = -1985937408;
	// addi r9,r10,-23288
	ctx.r9.s64 = ctx.r10.s64 + -23288;
	// lbz r11,9527(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9527);
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
	ctx.lr = 0x8995D0F0;
	sub_89934208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995d400
	if (ctx.cr6.eq) goto loc_8995D400;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8992c2a8
	ctx.lr = 0x8995D100;
	sub_8992C2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8995d400
	if (ctx.cr6.eq) goto loc_8995D400;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// lis r9,-30295
	ctx.r9.s64 = -1985413120;
	// addi r17,r10,30048
	ctx.r17.s64 = ctx.r10.s64 + 30048;
	// lis r10,-30303
	ctx.r10.s64 = -1985937408;
	// lwz r5,-21584(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + -21584);
	// lis r8,-30274
	ctx.r8.s64 = -1984036864;
	// lis r7,-30253
	ctx.r7.s64 = -1982660608;
	// addi r4,r10,-23876
	ctx.r4.s64 = ctx.r10.s64 + -23876;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// clrlwi r19,r31,24
	ctx.r19.u64 = ctx.r31.u32 & 0xFF;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r29,r17,4
	ctx.r29.s64 = ctx.r17.s64 + 4;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// li r15,127
	ctx.r15.s64 = 127;
	// li r18,256
	ctx.r18.s64 = 256;
	// addi r14,r9,30040
	ctx.r14.s64 = ctx.r9.s64 + 30040;
	// addi r30,r8,592
	ctx.r30.s64 = ctx.r8.s64 + 592;
	// addi r21,r7,-4592
	ctx.r21.s64 = ctx.r7.s64 + -4592;
loc_8995D154:
	// extsh r22,r11
	ctx.r22.s64 = ctx.r11.s16;
	// lbz r11,1(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// lwz r10,-4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -4);
	// addi r6,r30,100
	ctx.r6.s64 = ctx.r30.s64 + 100;
	// rlwinm r9,r22,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r28,0(r29)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lbz r26,2(r29)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + 2);
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r30,8
	ctx.r24.s64 = ctx.r30.s64 + 8;
	// lhzx r3,r9,r21
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r21.u32);
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// oris r4,r10,32768
	ctx.r4.u64 = ctx.r10.u64 | 2147483648;
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// mulli r31,r25,112
	ctx.r31.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(112));
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// lhzx r23,r7,r21
	ctx.r23.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r21.u32);
	// stwx r19,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r19.u32);
	// stwx r28,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r28.u32);
	// stwx r20,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r20.u32);
	// sthx r23,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r23.u16);
	// bl 0x8992bd50
	ctx.lr = 0x8995D1B0;
	sub_8992BD50(ctx, base);
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8995d294
	if (ctx.cr6.gt) goto loc_8995D294;
	// lis r12,-30314
	ctx.r12.s64 = -1986658304;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11820
	ctx.r12.s64 = ctx.r12.s64 + -11820;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8995D200;
	case 1:
		goto loc_8995D200;
	case 2:
		goto loc_8995D294;
	case 3:
		goto loc_8995D294;
	case 4:
		goto loc_8995D294;
	case 5:
		goto loc_8995D294;
	case 6:
		goto loc_8995D294;
	case 7:
		goto loc_8995D294;
	case 8:
		goto loc_8995D230;
	case 9:
		goto loc_8995D27C;
	case 10:
		goto loc_8995D264;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8995D200:
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// mulli r11,r11,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8995d25c
	if (ctx.cr6.eq) goto loc_8995D25C;
	// addi r10,r16,8
	ctx.r10.s64 = ctx.r16.s64 + 8;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// lbzx r7,r8,r14
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r14.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stwx r6,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r6.u32);
	// b 0x8995d294
	goto loc_8995D294;
loc_8995D230:
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8995d294
	if (ctx.cr6.eq) goto loc_8995D294;
	// mulli r10,r11,696
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r9,r10,r16
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8995d25c
	if (ctx.cr6.eq) goto loc_8995D25C;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8995d294
	if (ctx.cr6.eq) goto loc_8995D294;
loc_8995D25C:
	// stwx r20,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r20.u32);
	// b 0x8995d294
	goto loc_8995D294;
loc_8995D264:
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// addi r10,r16,8
	ctx.r10.s64 = ctx.r16.s64 + 8;
	// mulli r9,r11,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r7,r8,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// stwx r7,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r7.u32);
loc_8995D27C:
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r30,68
	ctx.r9.s64 = ctx.r30.s64 + 68;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stwx r7,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
loc_8995D294:
	// addi r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 + 24;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r8,r31,r24
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r8,r25,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r5,r17,5
	ctx.r5.s64 = ctx.r17.s64 + 5;
	// addi r9,r30,20
	ctx.r9.s64 = ctx.r30.s64 + 20;
	// lwzx r10,r4,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r5,r8,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// stwx r10,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// bge cr6,0x8995d35c
	if (!ctx.cr6.lt) goto loc_8995D35C;
	// extsh r11,r23
	ctx.r11.s64 = ctx.r23.s16;
	// lhz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// lhz r8,6(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mulli r7,r11,112
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwzx r10,r7,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r8,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x8995d394
	goto loc_8995D394;
loc_8995D35C:
	// lhz r11,6(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// lhz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// addi r6,r30,60
	ctx.r6.s64 = ctx.r30.s64 + 60;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// rotlwi r4,r9,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r4,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r4,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r3,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
loc_8995D394:
	// lhz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 8);
	// addi r11,r30,76
	ctx.r11.s64 = ctx.r30.s64 + 76;
	// addi r5,r30,94
	ctx.r5.s64 = ctx.r30.s64 + 94;
	// lhz r7,10(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 10);
	// addi r8,r22,1
	ctx.r8.s64 = ctx.r22.s64 + 1;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r6,r30,88
	ctx.r6.s64 = ctx.r30.s64 + 88;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// sthx r9,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u16);
	// addi r28,r30,80
	ctx.r28.s64 = ctx.r30.s64 + 80;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// stw r18,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r18.u32);
	// stbx r15,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r15.u8);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r7,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u16);
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r18,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r18.u32);
	// cmplwi cr6,r9,19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 19, ctx.xer);
	// blt cr6,0x8995d154
	if (ctx.cr6.lt) goto loc_8995D154;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// li r11,5940
	ctx.r11.s64 = 5940;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-10064(r10)
	REX_STORE_U32(ctx.r10.u32 + -10064, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
loc_8995D400:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89961878) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_89961894:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89961640
	ctx.lr = 0x8996189C;
	sub_89961640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89964e30
	ctx.lr = 0x899618A4;
	sub_89964E30(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x89961894
	if (ctx.cr6.lt) goto loc_89961894;
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

DEFINE_REX_FUNC(sub_899618D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899618E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// mulli r31,r10,112
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// addi r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 + 100;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r30,r11,64
	ctx.r30.s64 = ctx.r11.s64 + 64;
	// addi r29,r11,68
	ctx.r29.s64 = ctx.r11.s64 + 68;
	// lhzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// addi r28,r11,102
	ctx.r28.s64 = ctx.r11.s64 + 102;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// lwzx r27,r31,r30
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r4,r5,112
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(112));
	// lbzx r26,r31,r29
	ctx.r26.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lhzx r25,r31,r28
	ctx.r25.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8992bd50
	ctx.lr = 0x89961930;
	sub_8992BD50(ctx, base);
	// stwx r27,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// stbx r26,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r26.u8);
	// sthx r25,r31,r28
	REX_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r25.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89961948) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x89961950;
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
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// addi r26,r30,104
	ctx.r26.s64 = ctx.r30.s64 + 104;
	// lwzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lhzx r7,r31,r26
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// beq cr6,0x89961cf0
	if (ctx.cr6.eq) goto loc_89961CF0;
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r11,r9,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// lwzx r7,r11,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x899619b0
	if (ctx.cr6.eq) goto loc_899619B0;
	// addi r9,r30,102
	ctx.r9.s64 = ctx.r30.s64 + 102;
	// addi r7,r30,102
	ctx.r7.s64 = ctx.r30.s64 + 102;
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// lhzx r5,r31,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x899619b4
	if (ctx.cr6.eq) goto loc_899619B4;
loc_899619B0:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_899619B4:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89961d4c
	if (ctx.cr6.lt) goto loc_89961D4C;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// mulli r28,r11,112
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// lwzx r11,r28,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x89961a9c
	if (ctx.cr6.eq) goto loc_89961A9C;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// bl 0x899618d8
	ctx.lr = 0x899619E4;
	sub_899618D8(ctx, base);
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// lwzx r8,r31,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,27260
	ctx.r9.s64 = ctx.r10.s64 + 27260;
	// lwz r10,27260(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 27260);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x89961a24
	if (ctx.cr6.eq) goto loc_89961A24;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
loc_89961A08:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x89961a08
	if (!ctx.cr6.eq) goto loc_89961A08;
loc_89961A24:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-30212
	ctx.r10.s64 = -1979973632;
	// lwzx r11,r7,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,3776(r10)
	REX_STORE_U32(ctx.r10.u32 + 3776, ctx.r11.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x89961a68
	if (ctx.cr6.eq) goto loc_89961A68;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_89961A54:
	// lbzu r7,10(r11)
	ea = 10 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x89961a54
	if (!ctx.cr6.eq) goto loc_89961A54;
	// stw r11,3776(r10)
	REX_STORE_U32(ctx.r10.u32 + 3776, ctx.r11.u32);
loc_89961A68:
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// lhzx r6,r31,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// rotlwi r5,r9,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stwx r5,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// lhz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r11,r4,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// beq cr6,0x89961a9c
	if (ctx.cr6.eq) goto loc_89961A9C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_89961A9C:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r28,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwzx r9,r28,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// bgt cr6,0x89961b84
	if (ctx.cr6.gt) goto loc_89961B84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89961b84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89961B84;
	// bdzf 4*cr6+eq,0x89961b84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89961B84;
	// bdzf 4*cr6+eq,0x89961bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89961BBC;
	// bdzf 4*cr6+eq,0x89961bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89961BBC;
	// bdzf 4*cr6+eq,0x89961c5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89961C5C;
	// bdzf 4*cr6+eq,0x89961c1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89961C1C;
	// bne cr6,0x89961c1c
	if (!ctx.cr6.eq) goto loc_89961C1C;
	// addi r11,r30,111
	ctx.r11.s64 = ctx.r30.s64 + 111;
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
	// bne cr6,0x89961b84
	if (!ctx.cr6.eq) goto loc_89961B84;
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
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
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
loc_89961B84:
	// addi r11,r30,66
	ctx.r11.s64 = ctx.r30.s64 + 66;
	// addi r10,r30,66
	ctx.r10.s64 = ctx.r30.s64 + 66;
	// addi r9,r30,67
	ctx.r9.s64 = ctx.r30.s64 + 67;
	// addi r8,r30,67
	ctx.r8.s64 = ctx.r30.s64 + 67;
	// lbzx r7,r28,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// lbzx r4,r28,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stbx r3,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_89961BBC:
	// addi r11,r30,94
	ctx.r11.s64 = ctx.r30.s64 + 94;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r9,r30,69
	ctx.r9.s64 = ctx.r30.s64 + 69;
	// addi r8,r10,9016
	ctx.r8.s64 = ctx.r10.s64 + 9016;
	// addi r7,r30,70
	ctx.r7.s64 = ctx.r30.s64 + 70;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r5,r30,71
	ctx.r5.s64 = ctx.r30.s64 + 71;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sthx r3,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u16);
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// srawi r11,r4,24
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 24;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// stbx r11,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u8);
loc_89961C1C:
	// addi r11,r30,66
	ctx.r11.s64 = ctx.r30.s64 + 66;
	// addi r9,r30,66
	ctx.r9.s64 = ctx.r30.s64 + 66;
	// addi r8,r30,67
	ctx.r8.s64 = ctx.r30.s64 + 67;
	// addi r7,r30,67
	ctx.r7.s64 = ctx.r30.s64 + 67;
	// lbzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// stbx r5,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u8);
	// lbzx r11,r28,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r8.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_89961C5C:
	// addi r11,r30,94
	ctx.r11.s64 = ctx.r30.s64 + 94;
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r9,r30,69
	ctx.r9.s64 = ctx.r30.s64 + 69;
	// addi r8,r10,9016
	ctx.r8.s64 = ctx.r10.s64 + 9016;
	// addi r7,r30,70
	ctx.r7.s64 = ctx.r30.s64 + 70;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r5,r30,71
	ctx.r5.s64 = ctx.r30.s64 + 71;
	// addi r4,r30,66
	ctx.r4.s64 = ctx.r30.s64 + 66;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r3,r30,66
	ctx.r3.s64 = ctx.r30.s64 + 66;
	// addi r6,r30,67
	ctx.r6.s64 = ctx.r30.s64 + 67;
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// sthx r30,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u16);
	// addi r11,r30,128
	ctx.r11.s64 = ctx.r30.s64 + 128;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r10,r11,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// srawi r11,r10,24
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 24;
	// addi r8,r11,176
	ctx.r8.s64 = ctx.r11.s64 + 176;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// stbx r11,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u8);
	// lbzx r11,r28,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r4.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// subfic r7,r8,255
	ctx.xer.ca = ctx.r8.u32 <= 255;
	ctx.r7.u64 = static_cast<uint64_t>(255) - ctx.r8.u64;
	// stbx r8,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u8);
	// stbx r7,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_89961CF0:
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x89961d14
	if (!ctx.cr6.lt) goto loc_89961D14;
	// addis r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 1048576;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_89961D14:
	// ble cr6,0x89961d28
	if (!ctx.cr6.gt) goto loc_89961D28;
	// addis r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -1048576;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_89961D28:
	// addi r10,r30,108
	ctx.r10.s64 = ctx.r30.s64 + 108;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89961d78
	if (ctx.cr6.lt) goto loc_89961D78;
	// bne cr6,0x89961de8
	if (!ctx.cr6.eq) goto loc_89961DE8;
	// addi r10,r30,66
	ctx.r10.s64 = ctx.r30.s64 + 66;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x89961d5c
	if (!ctx.cr6.lt) goto loc_89961D5C;
loc_89961D4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_89961D5C:
	// addi r11,r11,252
	ctx.r11.s64 = ctx.r11.s64 + 252;
	// addi r9,r30,67
	ctx.r9.s64 = ctx.r30.s64 + 67;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_89961D78:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// lis r7,-30303
	ctx.r7.s64 = -1985937408;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// mulli r9,r8,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(696));
	// addi r6,r7,-17508
	ctx.r6.s64 = ctx.r7.s64 + -17508;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwzx r8,r5,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwzx r7,r9,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x89961db8
	if (ctx.cr6.eq) goto loc_89961DB8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_89961DB8:
	// addi r11,r11,651
	ctx.r11.s64 = ctx.r11.s64 + 651;
	// lis r8,-30304
	ctx.r8.s64 = -1986002944;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r7,r8,27260
	ctx.r7.s64 = ctx.r8.s64 + 27260;
	// lbzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// rotlwi r5,r6,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r11,r5,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x89961de8
	if (ctx.cr6.eq) goto loc_89961DE8;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x899618d8
	ctx.lr = 0x89961DE8;
	sub_899618D8(ctx, base);
loc_89961DE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_89964F68) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba18
	ctx.lr = 0x89964F70;
	__savegprlr_28(ctx, base);
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,592
	ctx.r10.s64 = ctx.r11.s64 + 592;
	// mulli r11,r9,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// addi r8,r10,60
	ctx.r8.s64 = ctx.r10.s64 + 60;
	// lis r6,-30242
	ctx.r6.s64 = -1981939712;
	// addi r7,r10,56
	ctx.r7.s64 = ctx.r10.s64 + 56;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// addi r4,r10,48
	ctx.r4.s64 = ctx.r10.s64 + 48;
	// lwzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r3,r10,52
	ctx.r3.s64 = ctx.r10.s64 + 52;
	// lwz r9,-21584(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + -21584);
	// addi r8,r10,100
	ctx.r8.s64 = ctx.r10.s64 + 100;
	// lwzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r30,r5,r9
	ctx.r30.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// stwx r30,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
	// lhzx r31,r11,r8
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// stwx r6,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// bgt cr6,0x899653d4
	if (ctx.cr6.gt) goto loc_899653D4;
	// lis r12,-30314
	ctx.r12.s64 = -1986658304;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20444
	ctx.r12.s64 = ctx.r12.s64 + 20444;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_899651B4;
	case 1:
		goto loc_89965100;
	case 2:
		goto loc_89965004;
	case 3:
		goto loc_89965004;
	case 4:
		goto loc_89965004;
	case 5:
		goto loc_89965004;
	case 6:
		goto loc_89965224;
	case 7:
		goto loc_89965224;
	case 8:
		goto loc_899652CC;
	case 9:
		goto loc_899652CC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89965004:
	// addi r9,r10,111
	ctx.r9.s64 = ctx.r10.s64 + 111;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// stbx r6,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x89965080
	if (ctx.cr6.eq) goto loc_89965080;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r6,r10,28
	ctx.r6.s64 = ctx.r10.s64 + 28;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// addi r3,r10,20
	ctx.r3.s64 = ctx.r10.s64 + 20;
	// addi r31,r10,36
	ctx.r31.s64 = ctx.r10.s64 + 36;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r30,r10,32
	ctx.r30.s64 = ctx.r10.s64 + 32;
	// lwzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r6,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r5,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r4,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
loc_89965080:
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// lbz r8,32546(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 32546);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899650c8
	if (ctx.cr6.eq) goto loc_899650C8;
	// addi r7,r10,80
	ctx.r7.s64 = ctx.r10.s64 + 80;
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899653d4
	if (ctx.cr6.eq) goto loc_899653D4;
	// addi r8,r10,76
	ctx.r8.s64 = ctx.r10.s64 + 76;
	// addic. r9,r9,-16
	ctx.xer.ca = ctx.r9.u32 > 15;
	ctx.r9.s64 = ctx.r9.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// bne 0x899653d4
	if (!ctx.cr0.eq) goto loc_899653D4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899650C8:
	// addi r8,r10,76
	ctx.r8.s64 = ctx.r10.s64 + 76;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bge cr6,0x899653d4
	if (!ctx.cr6.lt) goto loc_899653D4;
	// addi r9,r10,80
	ctx.r9.s64 = ctx.r10.s64 + 80;
	// lhzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// sthx r5,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u16);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89965100:
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// lbz r8,32546(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 32546);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r8,r10,80
	ctx.r8.s64 = ctx.r10.s64 + 80;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// beq cr6,0x89965138
	if (ctx.cr6.eq) goto loc_89965138;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89965148
	if (ctx.cr6.eq) goto loc_89965148;
	// addic. r9,r9,-16
	ctx.xer.ca = ctx.r9.u32 > 15;
	ctx.r9.s64 = ctx.r9.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// bne 0x89965148
	if (!ctx.cr0.eq) goto loc_89965148;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x89965148
	goto loc_89965148;
loc_89965138:
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bge cr6,0x89965148
	if (!ctx.cr6.lt) goto loc_89965148;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
loc_89965148:
	// addi r9,r10,94
	ctx.r9.s64 = ctx.r10.s64 + 94;
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// addi r7,r8,4
	ctx.r7.s64 = ctx.r8.s64 + 4;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// clrlwi r5,r6,23
	ctx.r5.u64 = ctx.r6.u32 & 0x1FF;
	// sthx r6,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u16);
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// blt cr6,0x899651a4
	if (ctx.cr6.lt) goto loc_899651A4;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addi r7,r8,9016
	ctx.r7.s64 = ctx.r8.s64 + 9016;
	// addi r6,r9,128
	ctx.r6.s64 = ctx.r9.s64 + 128;
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r5,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// rlwinm r9,r3,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFFFF000;
	// srawi. r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x89965198
	if (!ctx.cr0.lt) goto loc_89965198;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_89965198:
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899651A4:
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// li r9,256
	ctx.r9.s64 = 256;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899651B4:
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// lbz r8,32546(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 32546);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899651fc
	if (ctx.cr6.eq) goto loc_899651FC;
	// addi r7,r10,76
	ctx.r7.s64 = ctx.r10.s64 + 76;
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899653d4
	if (ctx.cr6.eq) goto loc_899653D4;
	// addi r8,r10,80
	ctx.r8.s64 = ctx.r10.s64 + 80;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// bne cr6,0x899653d4
	if (!ctx.cr6.eq) goto loc_899653D4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899651FC:
	// addi r8,r10,76
	ctx.r8.s64 = ctx.r10.s64 + 76;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bge cr6,0x899653d4
	if (!ctx.cr6.lt) goto loc_899653D4;
	// addi r9,r10,80
	ctx.r9.s64 = ctx.r10.s64 + 80;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_89965224:
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// lbz r8,32546(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 32546);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8996523c
	if (ctx.cr6.eq) goto loc_8996523C;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8996523C:
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// addi r8,r9,25128
	ctx.r8.s64 = ctx.r9.s64 + 25128;
	// mulli r31,r31,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(696));
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r30,r8,28
	ctx.r30.s64 = ctx.r8.s64 + 28;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// addi r29,r8,24
	ctx.r29.s64 = ctx.r8.s64 + 24;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// addi r28,r10,28
	ctx.r28.s64 = ctx.r10.s64 + 28;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r31,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r30,r10,16
	ctx.r30.s64 = ctx.r10.s64 + 16;
	// lwzx r7,r31,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r31,r11,r28
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r6,r10,20
	ctx.r6.s64 = ctx.r10.s64 + 20;
	// stwx r8,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stwx r7,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
	// addi r5,r10,36
	ctx.r5.s64 = ctx.r10.s64 + 36;
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r10,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r8,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r7,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
loc_899652CC:
	// lis r9,-30276
	ctx.r9.s64 = -1984167936;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r8,32546(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 32546);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899652e4
	if (ctx.cr6.eq) goto loc_899652E4;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
loc_899652E4:
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r8,r10,110
	ctx.r8.s64 = ctx.r10.s64 + 110;
	// extsh r7,r31
	ctx.r7.s64 = ctx.r31.s16;
	// addi r9,r9,25128
	ctx.r9.s64 = ctx.r9.s64 + 25128;
	// mulli r29,r7,696
	ctx.r29.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(696));
	// lbzx r31,r11,r8
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r7,r9,24
	ctx.r7.s64 = ctx.r9.s64 + 24;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// lwzx r7,r29,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// lwzx r9,r29,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// clrlwi r29,r31,30
	ctx.r29.u64 = ctx.r31.u32 & 0x3;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stbx r31,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r31.u8);
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwx r7,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stwx r6,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// bne cr6,0x899653d4
	if (!ctx.cr6.eq) goto loc_899653D4;
	// addi r7,r10,108
	ctx.r7.s64 = ctx.r10.s64 + 108;
	// lbzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x89965364
	if (ctx.cr6.lt) goto loc_89965364;
	// bne cr6,0x89965384
	if (!ctx.cr6.eq) goto loc_89965384;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// bne 0x89965384
	if (!ctx.cr0.eq) goto loc_89965384;
	// stbx r30,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r30.u8);
	// b 0x89965384
	goto loc_89965384;
loc_89965364:
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// bne cr6,0x89965384
	if (!ctx.cr6.eq) goto loc_89965384;
	// li r9,1
	ctx.r9.s64 = 1;
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
loc_89965384:
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// addi r6,r10,20
	ctx.r6.s64 = ctx.r10.s64 + 20;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// addi r5,r10,36
	ctx.r5.s64 = ctx.r10.s64 + 36;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r8,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r7,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r6,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
loc_899653D4:
	// b 0x899dba68
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8996AD80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8996AD88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r9,r11,12800
	ctx.r9.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r11,r9,182
	ctx.r11.s64 = ctx.r9.s64 + 182;
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// cmplwi cr6,r7,240
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 240, ctx.xer);
	// ble cr6,0x8996adc8
	if (!ctx.cr6.gt) goto loc_8996ADC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_8996ADC8:
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lwzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lis r6,-30253
	ctx.r6.s64 = -1982660608;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// lis r5,-30320
	ctx.r5.s64 = -1987051520;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,-9212(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -9212);
	// addi r31,r5,9016
	ctx.r31.s64 = ctx.r5.s64 + 9016;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r5,r9,48
	ctx.r5.s64 = ctx.r9.s64 + 48;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwzx r5,r10,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r30,r7,17
	ctx.r30.u64 = ctx.r7.u32 & 0x7FFF;
	// mullw r7,r11,r4
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// rlwinm r4,r30,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// addi r11,r7,12345
	ctx.r11.s64 = ctx.r7.s64 + 12345;
	// lhzx r7,r4,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r31.u32);
	// srawi r4,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 16;
	// stw r11,-9212(r6)
	REX_STORE_U32(ctx.r6.u32 + -9212, ctx.r11.u32);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lhzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// addi r6,r9,52
	ctx.r6.s64 = ctx.r9.s64 + 52;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,15,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0xFFFF8000;
	// lwzx r6,r10,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// rlwinm r7,r8,15,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0xFFFF8000;
	// addi r31,r9,200
	ctx.r31.s64 = ctx.r9.s64 + 200;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// addi r9,r9,207
	ctx.r9.s64 = ctx.r9.s64 + 207;
	// srawi r30,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 16;
	// lis r29,-30294
	ctx.r29.s64 = -1985347584;
	// rlwinm r8,r4,30,19,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x1FFF;
	// addi r4,r29,-28744
	ctx.r4.s64 = ctx.r29.s64 + -28744;
	// rlwinm r30,r30,21,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0xC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r29,r8,-4096
	ctx.r29.s64 = ctx.r8.s64 + -4096;
	// lbzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// lis r9,-6
	ctx.r9.s64 = -393216;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r30,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// addis r5,r5,17
	ctx.r5.s64 = ctx.r5.s64 + 1114112;
	// bl 0x899d4640
	ctx.lr = 0x8996AEB8;
	sub_899D4640(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8996F5C8) {
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
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r31,r10,12800
	ctx.r31.s64 = ctx.r10.s64 + 12800;
	// mulli r30,r9,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// addi r4,r31,207
	ctx.r4.s64 = ctx.r31.s64 + 207;
	// addi r9,r31,200
	ctx.r9.s64 = ctx.r31.s64 + 200;
	// lwzx r10,r30,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r5,r30,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// lwzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lbzx r7,r30,r4
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// lbzx r8,r30,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// bgt cr6,0x8996f7bc
	if (ctx.cr6.gt) goto loc_8996F7BC;
	// lis r12,-30313
	ctx.r12.s64 = -1986592768;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2500
	ctx.r12.s64 = ctx.r12.s64 + -2500;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8996F6F0;
	case 1:
		goto loc_8996F740;
	case 2:
		goto loc_8996F77C;
	case 3:
		goto loc_8996F7BC;
	case 4:
		goto loc_8996F784;
	case 5:
		goto loc_8996F7BC;
	case 6:
		goto loc_8996F794;
	case 7:
		goto loc_8996F794;
	case 8:
		goto loc_8996F7A0;
	case 9:
		goto loc_8996F7A0;
	case 10:
		goto loc_8996F7A0;
	case 11:
		goto loc_8996F7A0;
	case 12:
		goto loc_8996F7B4;
	case 13:
		goto loc_8996F7B4;
	case 14:
		goto loc_8996F7BC;
	case 15:
		goto loc_8996F7BC;
	case 16:
		goto loc_8996F7BC;
	case 17:
		goto loc_8996F7BC;
	case 18:
		goto loc_8996F7BC;
	case 19:
		goto loc_8996F7BC;
	case 20:
		goto loc_8996F7BC;
	case 21:
		goto loc_8996F7BC;
	case 22:
		goto loc_8996F78C;
	case 23:
		goto loc_8996F78C;
	case 24:
		goto loc_8996F78C;
	case 25:
		goto loc_8996F78C;
	case 26:
		goto loc_8996F7BC;
	case 27:
		goto loc_8996F7BC;
	case 28:
		goto loc_8996F7BC;
	case 29:
		goto loc_8996F7BC;
	case 30:
		goto loc_8996F7BC;
	case 31:
		goto loc_8996F7BC;
	case 32:
		goto loc_8996F7BC;
	case 33:
		goto loc_8996F7BC;
	case 34:
		goto loc_8996F7BC;
	case 35:
		goto loc_8996F7BC;
	case 36:
		goto loc_8996F7BC;
	case 37:
		goto loc_8996F7AC;
	case 38:
		goto loc_8996F7AC;
	case 39:
		goto loc_8996F7B4;
	case 40:
		goto loc_8996F7B4;
	case 41:
		goto loc_8996F7B4;
	case 42:
		goto loc_8996F7B4;
	case 43:
		goto loc_8996F7B4;
	case 44:
		goto loc_8996F7B4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8996F6F0:
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
	// addi r3,r9,-25300
	ctx.r3.s64 = ctx.r9.s64 + -25300;
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
	ctx.lr = 0x8996F738;
	sub_8995E188(ctx, base);
	// bl 0x89936440
	ctx.lr = 0x8996F73C;
	sub_89936440(ctx, base);
	// b 0x8996f7c4
	goto loc_8996F7C4;
loc_8996F740:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8996F748;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8996f7bc
	if (ctx.cr6.lt) goto loc_8996F7BC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// rlwinm r8,r9,0,3,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// ori r5,r6,8
	ctx.r5.u64 = ctx.r6.u64 | 8;
	// stbx r5,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u8);
	// b 0x8996f7c4
	goto loc_8996F7C4;
loc_8996F77C:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8996f7b8
	goto loc_8996F7B8;
loc_8996F784:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8996f7b8
	goto loc_8996F7B8;
loc_8996F78C:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8996f7b8
	goto loc_8996F7B8;
loc_8996F794:
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x899d4440
	ctx.lr = 0x8996F79C;
	sub_899D4440(ctx, base);
	// b 0x8996f7bc
	goto loc_8996F7BC;
loc_8996F7A0:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x899d4440
	ctx.lr = 0x8996F7A8;
	sub_899D4440(ctx, base);
	// b 0x8996f7bc
	goto loc_8996F7BC;
loc_8996F7AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8996f7b8
	goto loc_8996F7B8;
loc_8996F7B4:
	// li r4,3
	ctx.r4.s64 = 3;
loc_8996F7B8:
	// bl 0x899d4c10
	ctx.lr = 0x8996F7BC;
	sub_899D4C10(ctx, base);
loc_8996F7BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
loc_8996F7C4:
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

DEFINE_REX_FUNC(sub_899702E0) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// mulli r7,r9,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// addi r5,r11,56
	ctx.r5.s64 = ctx.r11.s64 + 56;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// addi r31,r11,52
	ctx.r31.s64 = ctx.r11.s64 + 52;
	// lwzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// lwzx r10,r8,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// addi r5,r11,68
	ctx.r5.s64 = ctx.r11.s64 + 68;
	// addi r30,r11,206
	ctx.r30.s64 = ctx.r11.s64 + 206;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r8,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// stwx r9,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// lwzx r9,r7,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r8,r6
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u32);
	// addi r9,r11,200
	ctx.r9.s64 = ctx.r11.s64 + 200;
	// lwzx r6,r7,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// lbzx r10,r8,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// stwx r6,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r6.u32);
	// lbzx r11,r7,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r5,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r5.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_89970610) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f0
	ctx.lr = 0x89970618;
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bgt cr6,0x899736c4
	if (ctx.cr6.gt) goto loc_899736C4;
	// lis r12,-30313
	ctx.r12.s64 = -1986592768;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1624
	ctx.r12.s64 = ctx.r12.s64 + 1624;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_89970714;
	case 1:
		goto loc_899708DC;
	case 2:
		goto loc_89970CB4;
	case 3:
		goto loc_89971254;
	case 4:
		goto loc_89970ED0;
	case 5:
		goto loc_899715E8;
	case 6:
		goto loc_89973414;
	case 7:
		goto loc_899734D8;
	case 8:
		goto loc_89973594;
	case 9:
		goto loc_89973594;
	case 10:
		goto loc_89973594;
	case 11:
		goto loc_89973594;
	case 12:
		goto loc_89971F50;
	case 13:
		goto loc_89971F50;
	case 14:
		goto loc_899720B8;
	case 15:
		goto loc_899720B8;
	case 16:
		goto loc_89972014;
	case 17:
		goto loc_89972014;
	case 18:
		goto loc_89971900;
	case 19:
		goto loc_89971C1C;
	case 20:
		goto loc_89971CCC;
	case 21:
		goto loc_89971DA4;
	case 22:
		goto loc_899720E0;
	case 23:
		goto loc_899720E0;
	case 24:
		goto loc_899720E0;
	case 25:
		goto loc_899720E0;
	case 26:
		goto loc_89972D64;
	case 27:
		goto loc_89972D64;
	case 28:
		goto loc_89972F60;
	case 29:
		goto loc_89972F60;
	case 30:
		goto loc_89973124;
	case 31:
		goto loc_89972F60;
	case 32:
		goto loc_89972F60;
	case 33:
		goto loc_89973124;
	case 34:
		goto loc_89972F60;
	case 35:
		goto loc_89972F60;
	case 36:
		goto loc_89973124;
	case 37:
		goto loc_89972108;
	case 38:
		goto loc_89972108;
	case 39:
		goto loc_89972468;
	case 40:
		goto loc_89972634;
	case 41:
		goto loc_89972468;
	case 42:
		goto loc_89972634;
	case 43:
		goto loc_89972468;
	case 44:
		goto loc_89972634;
	case 45:
		goto loc_89972C2C;
	case 46:
		goto loc_89972C2C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_89970714:
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89970730
	if (ctx.cr6.eq) goto loc_89970730;
	// bl 0x8996f7e0
	ctx.lr = 0x8997072C;
	sub_8996F7E0(ctx, base);
	// b 0x899708b8
	goto loc_899708B8;
loc_89970730:
	// bl 0x8991c8b8
	ctx.lr = 0x89970734;
	sub_8991C8B8(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89970748
	if (!ctx.cr6.eq) goto loc_89970748;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x89936360
	ctx.lr = 0x89970748;
	sub_89936360(ctx, base);
loc_89970748:
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
	// blt cr6,0x899708b8
	if (ctx.cr6.lt) goto loc_899708B8;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r10,-25236
	ctx.r10.s64 = ctx.r10.s64 + -25236;
	// stbx r27,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u8);
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// addi r28,r10,-2
	ctx.r28.s64 = ctx.r10.s64 + -2;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// ori r29,r9,20077
	ctx.r29.u64 = ctx.r9.u64 | 20077;
	// lis r25,-30253
	ctx.r25.s64 = -1982660608;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
	// addi r23,r10,-25240
	ctx.r23.s64 = ctx.r10.s64 + -25240;
loc_89970794:
	// lwz r11,-9212(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + -9212);
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lhz r22,2(r28)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r28.u32 + 2);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhzu r9,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r24,r31,r8
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r21,r30,200
	ctx.r21.s64 = ctx.r30.s64 + 200;
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r6,17
	ctx.r7.u64 = ctx.r6.u32 & 0x7FFF;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// clrlwi r10,r6,17
	ctx.r10.u64 = ctx.r6.u32 & 0x7FFF;
	// addi r5,r8,128
	ctx.r5.s64 = ctx.r8.s64 + 128;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// rlwinm r7,r7,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r5,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhzx r8,r7,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r26.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r5,5,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFF0000;
	// lhzx r6,r6,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r26.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// srawi r20,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r20.s64 = ctx.r10.s32 >> 16;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// mullw r7,r5,r10
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stw r11,-9212(r25)
	REX_STORE_U32(ctx.r25.u32 + -9212, ctx.r11.u32);
	// mullw r5,r8,r10
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// clrlwi r11,r20,17
	ctx.r11.u64 = ctx.r20.u32 & 0x7FFF;
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// rlwinm r8,r11,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r8,r31,r21
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r21.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r11,r11,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFF;
	// rlwinm r7,r10,17,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFF;
	// rotlwi r10,r9,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// rotlwi r9,r22,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r22.u32, 16);
	// addi r22,r11,-2048
	ctx.r22.s64 = ctx.r11.s64 + -2048;
	// add r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r21,r30,207
	ctx.r21.s64 = ctx.r30.s64 + 207;
	// lbzx r20,r7,r23
	ctx.r20.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r23.u32);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lis r9,-4
	ctx.r9.s64 = -262144;
	// rlwinm r10,r22,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 + ctx.r24.u64;
	// lbzx r7,r31,r21
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r21.u32);
	// extsb r4,r20
	ctx.r4.s64 = ctx.r20.s8;
	// bl 0x899d4640
	ctx.lr = 0x899708A0;
	sub_899D4640(ctx, base);
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r27,r6
	ctx.r27.s64 = ctx.r6.s16;
	// clrlwi r5,r27,16
	ctx.r5.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x89970794
	if (ctx.cr6.lt) goto loc_89970794;
loc_899708B8:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x89933b88
	ctx.lr = 0x899708D4;
	sub_89933B88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899708DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899708E4;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899702e0
	ctx.lr = 0x899708FC;
	sub_899702E0(ctx, base);
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// addi r11,r30,162
	ctx.r11.s64 = ctx.r30.s64 + 162;
	// lis r3,32
	ctx.r3.s64 = 2097152;
	// addi r29,r30,191
	ctx.r29.s64 = ctx.r30.s64 + 191;
	// addi r8,r30,150
	ctx.r8.s64 = ctx.r30.s64 + 150;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// subf r7,r10,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r10.u64;
	// lbzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r28,r7,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lhzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// srawi r6,r28,21
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1FFFFF) != 0);
	ctx.r6.s64 = ctx.r28.s32 >> 21;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// sthx r7,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u16);
	// bgt cr6,0x89970a30
	if (ctx.cr6.gt) goto loc_89970A30;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899709a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899709A8;
	// bdzf 4*cr6+eq,0x899709cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899709CC;
	// bne cr6,0x89970a04
	if (!ctx.cr6.eq) goto loc_89970A04;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x89970a30
	if (ctx.cr6.eq) goto loc_89970A30;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x89936360
	ctx.lr = 0x89970998;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x89970a30
	goto loc_89970A30;
loc_899709A8:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x89970a30
	if (!ctx.cr6.eq) goto loc_89970A30;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x89970a30
	goto loc_89970A30;
loc_899709CC:
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// rlwinm r7,r11,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x89970a30
	if (!ctx.cr6.eq) goto loc_89970A30;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stbx r6,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u8);
	// b 0x89970a30
	goto loc_89970A30;
loc_89970A04:
	// addic. r11,r10,-32768
	ctx.xer.ca = ctx.r10.u32 > 32767;
	ctx.r11.s64 = ctx.r10.s64 + -32768;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne 0x89970a30
	if (!ctx.cr0.eq) goto loc_89970A30;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,26,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// stbx r27,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r27.u8);
loc_89970A30:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r6,r30,189
	ctx.r6.s64 = ctx.r30.s64 + 189;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lbzx r7,r31,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
	// blt cr6,0x89970c88
	if (ctx.cr6.lt) goto loc_89970C88;
	// beq cr6,0x89970af8
	if (ctx.cr6.eq) goto loc_89970AF8;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bge cr6,0x899736c4
	if (!ctx.cr6.lt) goto loc_899736C4;
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// blt cr6,0x89970b40
	if (ctx.cr6.lt) goto loc_89970B40;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// sthx r27,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u16);
	// lhzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sthx r8,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x89970b40
	if (!ctx.cr6.lt) goto loc_89970B40;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// stbx r27,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r27.u8);
	// stbx r27,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u8);
	// b 0x89970b40
	goto loc_89970B40;
loc_89970AF8:
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// blt cr6,0x89970b40
	if (ctx.cr6.lt) goto loc_89970B40;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// sthx r27,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u16);
	// lhzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sthx r8,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u16);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x89970b40
	if (!ctx.cr6.eq) goto loc_89970B40;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
loc_89970B40:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// addi r10,r30,185
	ctx.r10.s64 = ctx.r30.s64 + 185;
	// addi r25,r9,9016
	ctx.r25.s64 = ctx.r9.s64 + 9016;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r4,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// sthx r4,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u16);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// lhzx r7,r9,r25
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r25.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r5,r6,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// addi r4,r11,281
	ctx.r4.s64 = ctx.r11.s64 + 281;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// stbx r27,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u8);
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r8,-30296
	ctx.r8.s64 = -1985478656;
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// addi r22,r10,-18292
	ctx.r22.s64 = ctx.r10.s64 + -18292;
	// addi r21,r9,-4592
	ctx.r21.s64 = ctx.r9.s64 + -4592;
	// addi r24,r8,-27624
	ctx.r24.s64 = ctx.r8.s64 + -27624;
loc_89970BC0:
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// lwzx r9,r31,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// rlwinm r11,r11,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// addi r10,r29,128
	ctx.r10.s64 = ctx.r29.s64 + 128;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// rlwinm r6,r10,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lhzx r4,r11,r25
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// extsh r26,r5
	ctx.r26.s64 = ctx.r5.s16;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// lhzx r10,r6,r25
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r25.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwinm r5,r3,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0xFFFF8000;
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// lis r7,5
	ctx.r7.s64 = 327680;
	// rlwinm r10,r4,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0xFFFF8000;
	// li r3,3
	ctx.r3.s64 = 3;
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// mulli r10,r4,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r27,r5,r9
	ctx.r27.u64 = ctx.r5.u64 + ctx.r9.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x899cc518
	ctx.lr = 0x89970C30;
	sub_899CC518(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x89970C38;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89970c64
	if (ctx.cr6.eq) goto loc_89970C64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lis r7,5
	ctx.r7.s64 = 327680;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x89997d48
	ctx.lr = 0x89970C5C;
	sub_89997D48(ctx, base);
	// lbz r3,4(r22)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + 4);
	// bl 0x89936360
	ctx.lr = 0x89970C64;
	sub_89936360(ctx, base);
loc_89970C64:
	// addi r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 1;
	// addi r10,r29,56
	ctx.r10.s64 = ctx.r29.s64 + 56;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// blt cr6,0x89970bc0
	if (ctx.cr6.lt) goto loc_89970BC0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89970C88:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stbx r9,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u8);
	// sthx r27,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89970CB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89970CBC;
	sub_8991B9F0(ctx, base);
	// extsh r27,r3
	ctx.r27.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899701e8
	ctx.lr = 0x89970CD4;
	sub_899701E8(ctx, base);
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r11,r10,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89970d10
	if (!ctx.cr6.eq) goto loc_89970D10;
	// mulli r11,r27,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x89970d10
	if (!ctx.cr6.eq) goto loc_89970D10;
	// ori r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 16384;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// lwzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// ori r7,r8,16384
	ctx.r7.u64 = ctx.r8.u64 | 16384;
	// stwx r7,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r7.u32);
loc_89970D10:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
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
	// addi r7,r30,150
	ctx.r7.s64 = ctx.r30.s64 + 150;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// lbzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
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
	// bgt cr6,0x899736c4
	if (ctx.cr6.gt) goto loc_899736C4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89970de8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89970DE8;
	// bdzf 4*cr6+eq,0x89970e20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89970E20;
	// bdzf 4*cr6+eq,0x89970e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89970E5C;
	// bne cr6,0x89970e84
	if (!ctx.cr6.eq) goto loc_89970E84;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// li r3,46
	ctx.r3.s64 = 46;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x89936360
	ctx.lr = 0x89970DD4;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89970DE8:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addis r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 65536;
	// addis r5,r7,24
	ctx.r5.s64 = ctx.r7.s64 + 1572864;
	// stwx r6,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89970E20:
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89970E30;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// mulli r11,r27,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// li r9,1
	ctx.r9.s64 = 1;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89970E5C:
	// mulli r11,r27,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,180
	ctx.r9.s64 = ctx.r30.s64 + 180;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89970E84:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -65536;
	// stwx r6,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r6,r8,0,29,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stbx r6,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89970ED0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89970ED8;
	sub_8991B9F0(ctx, base);
	// extsh r26,r3
	ctx.r26.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899701e8
	ctx.lr = 0x89970EF0;
	sub_899701E8(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r25,r8,208
	ctx.r25.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhzx r7,r25,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x89970f20
	if (!ctx.cr6.eq) goto loc_89970F20;
loc_89970F10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_89970F14:
	// bl 0x8996f5c8
	ctx.lr = 0x89970F18;
	sub_8996F5C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89970F20:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x89970f3c
	if (!ctx.cr6.eq) goto loc_89970F3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932b18
	ctx.lr = 0x89970F3C;
	sub_89932B18(ctx, base);
loc_89970F3C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932d30
	ctx.lr = 0x89970F48;
	sub_89932D30(ctx, base);
	// addi r22,r30,158
	ctx.r22.s64 = ctx.r30.s64 + 158;
	// lhzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bge cr6,0x89970f64
	if (!ctx.cr6.lt) goto loc_89970F64;
	// li r11,128
	ctx.r11.s64 = 128;
	// sthx r11,r31,r22
	REX_STORE_U16(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u16);
loc_89970F64:
	// lhzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 384, ctx.xer);
	// ble cr6,0x89970f7c
	if (!ctx.cr6.gt) goto loc_89970F7C;
	// li r11,384
	ctx.r11.s64 = 384;
	// sthx r11,r31,r22
	REX_STORE_U16(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u16);
loc_89970F7C:
	// lhzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r11,-124
	ctx.r7.s64 = ctx.r11.s64 + -124;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// srawi r11,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 3;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r4,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// bgt cr6,0x89971108
	if (ctx.cr6.gt) goto loc_89971108;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89971050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89971050;
	// bdzf 4*cr6+eq,0x89971084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89971084;
	// bdzf 4*cr6+eq,0x899710c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899710C0;
	// bdzf 4*cr6+eq,0x89971084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89971084;
	// bne cr6,0x899710e4
	if (!ctx.cr6.eq) goto loc_899710E4;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r25,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x89971108
	if (ctx.cr6.eq) goto loc_89971108;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x89936360
	ctx.lr = 0x8997102C;
	sub_89936360(ctx, base);
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lbzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// b 0x89971108
	goto loc_89971108;
loc_89971050:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addis r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 65536;
	// addis r5,r7,12
	ctx.r5.s64 = ctx.r7.s64 + 786432;
	// stwx r6,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x89971108
	if (!ctx.cr6.eq) goto loc_89971108;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x89971108
	goto loc_89971108;
loc_89971084:
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89971094;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89971108
	if (ctx.cr6.eq) goto loc_89971108;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// mulli r10,r26,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r26.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stbx r5,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r5.u8);
	// b 0x89971108
	goto loc_89971108;
loc_899710C0:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r25,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x89971108
	if (!ctx.cr6.eq) goto loc_89971108;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x89971108
	goto loc_89971108;
loc_899710E4:
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
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x89971108
	if (!ctx.cr6.eq) goto loc_89971108;
	// stbx r27,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r27.u8);
loc_89971108:
	// addi r19,r30,184
	ctx.r19.s64 = ctx.r30.s64 + 184;
	// lbzx r11,r31,r19
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8997113c
	if (ctx.cr6.eq) goto loc_8997113C;
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
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// stbx r27,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u8);
	// b 0x89971170
	goto loc_89971170;
loc_8997113C:
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r25,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89971160;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// li r11,8
	ctx.r11.s64 = 8;
	// stbx r11,r31,r19
	REX_STORE_U8(ctx.r31.u32 + ctx.r19.u32, ctx.r11.u8);
loc_89971170:
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r10,-30304
	ctx.r10.s64 = -1986002944;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// lis r24,8
	ctx.r24.s64 = 524288;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// addi r21,r10,-18292
	ctx.r21.s64 = ctx.r10.s64 + -18292;
	// addi r20,r9,-4592
	ctx.r20.s64 = ctx.r9.s64 + -4592;
loc_89971194:
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// lhzx r9,r31,r22
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lwzx r8,r31,r23
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwinm r4,r29,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r9,r11,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r7,r4,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r28.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhzx r5,r9,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// rlwinm r4,r6,15,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0xFFFF8000;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwinm r9,r11,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r27,r9,r8
	ctx.r27.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r26,r24,r7
	ctx.r26.u64 = ctx.r7.u64 - ctx.r24.u64;
	// bl 0x8991b880
	ctx.lr = 0x89971200;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8997122c
	if (ctx.cr6.eq) goto loc_8997122C;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89997d48
	ctx.lr = 0x89971224;
	sub_89997D48(ctx, base);
	// lbz r3,2(r21)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r21.u32 + 2);
	// bl 0x89936360
	ctx.lr = 0x8997122C;
	sub_89936360(ctx, base);
loc_8997122C:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// blt cr6,0x89971194
	if (ctx.cr6.lt) goto loc_89971194;
	// lbzx r11,r31,r19
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r19.u32);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stbx r11,r31,r19
	REX_STORE_U8(ctx.r31.u32 + ctx.r19.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89971254:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997125C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899702e0
	ctx.lr = 0x89971274;
	sub_899702E0(ctx, base);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,150
	ctx.r6.s64 = ctx.r30.s64 + 150;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r28,r30,72
	ctx.r28.s64 = ctx.r30.s64 + 72;
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
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lhzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r6.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r9,r10,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lhzx r7,r9,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x899714ac
	if (ctx.cr6.eq) goto loc_899714AC;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x8997130C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// addi r21,r30,158
	ctx.r21.s64 = ctx.r30.s64 + 158;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,9016
	ctx.r29.s64 = ctx.r11.s64 + 9016;
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// lhzx r11,r31,r21
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r21.u32);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// rlwinm r8,r9,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// sthx r9,r31,r21
	REX_STORE_U16(ctx.r31.u32 + ctx.r21.u32, ctx.r9.u16);
	// addi r19,r10,-4592
	ctx.r19.s64 = ctx.r10.s64 + -4592;
	// lhzx r7,r8,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r5,r6,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// lis r11,-30304
	ctx.r11.s64 = -1986002944;
	// extsh r28,r4
	ctx.r28.s64 = ctx.r4.s16;
	// addi r20,r11,-18292
	ctx.r20.s64 = ctx.r11.s64 + -18292;
loc_89971368:
	// addi r11,r28,128
	ctx.r11.s64 = ctx.r28.s64 + 128;
	// lwzx r9,r31,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// rlwinm r10,r28,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// rlwinm r8,r11,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhzx r7,r10,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// lhzx r6,r8,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// rotlwi r5,r7,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rotlwi r4,r6,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// srawi r10,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 16;
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r24,r8,r9
	ctx.r24.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x8991b880
	ctx.lr = 0x899713B0;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899713f0
	if (ctx.cr6.eq) goto loc_899713F0;
	// addi r11,r22,-5
	ctx.r11.s64 = ctx.r22.s64 + -5;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// bl 0x89997d48
	ctx.lr = 0x899713E8;
	sub_89997D48(ctx, base);
	// lbz r3,6(r20)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r20.u32 + 6);
	// bl 0x89936360
	ctx.lr = 0x899713F0;
	sub_89936360(ctx, base);
loc_899713F0:
	// addi r11,r22,1
	ctx.r11.s64 = ctx.r22.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x89971368
	if (ctx.cr6.lt) goto loc_89971368;
	// lhzx r11,r31,r21
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r21.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r8,r9,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// sthx r9,r31,r21
	REX_STORE_U16(ctx.r31.u32 + ctx.r21.u32, ctx.r9.u16);
	// lhzx r7,r8,r29
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r5,r6,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// srawi r4,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 16;
	// extsh r28,r4
	ctx.r28.s64 = ctx.r4.s16;
	// addi r11,r28,128
	ctx.r11.s64 = ctx.r28.s64 + 128;
	// rlwinm r27,r11,1,22,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
loc_89971438:
	// rlwinm r6,r28,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r27,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r29.u32);
	// addi r11,r30,-5
	ctx.r11.s64 = ctx.r30.s64 + -5;
	// lwzx r9,r31,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// rotlwi r4,r5,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// lwzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lhzx r6,r6,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// rotlwi r10,r6,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r6,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 8;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r4,r6,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x899cc3d0
	ctx.lr = 0x89971490;
	sub_899CC3D0(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// blt cr6,0x89971438
	if (ctx.cr6.lt) goto loc_89971438;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899714AC:
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
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r29,r7,20077
	ctx.r29.u64 = ctx.r7.u64 | 20077;
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// lis r5,-30320
	ctx.r5.s64 = -1987051520;
	// lis r6,-30294
	ctx.r6.s64 = -1985347584;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r4,r5,9016
	ctx.r4.s64 = ctx.r5.s64 + 9016;
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r10,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r10,17
	ctx.r7.u64 = ctx.r10.u32 & 0x7FFF;
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// addi r28,r9,128
	ctx.r28.s64 = ctx.r9.s64 + 128;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// rlwinm r28,r28,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lhzx r7,r7,r4
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// rlwinm r10,r10,4,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFF0000;
	// lhzx r4,r28,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r4.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// rlwinm r9,r11,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r6,r6,-25192
	ctx.r6.s64 = ctx.r6.s64 + -25192;
	// rlwinm r29,r8,17,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFF;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// rlwinm r11,r9,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFF;
	// addi r28,r30,200
	ctx.r28.s64 = ctx.r30.s64 + 200;
	// addi r30,r30,207
	ctx.r30.s64 = ctx.r30.s64 + 207;
	// lbzx r29,r29,r6
	ctx.r29.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r6.u32);
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lis r9,-4
	ctx.r9.s64 = -262144;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r31,r30
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// bl 0x899d4640
	ctx.lr = 0x899715E0;
	sub_899D4640(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899715E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899715F0;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899701e8
	ctx.lr = 0x89971608;
	sub_899701E8(ctx, base);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r26,r30,189
	ctx.r26.s64 = ctx.r30.s64 + 189;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r28,r30,32
	ctx.r28.s64 = ctx.r30.s64 + 32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r30,150
	ctx.r6.s64 = ctx.r30.s64 + 150;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lbzx r7,r31,r26
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhzx r6,r31,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r6.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r4.u32);
	// bgt cr6,0x899736c4
	if (ctx.cr6.gt) goto loc_899736C4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899716c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899716C8;
	// bdzf 4*cr6+eq,0x89971780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89971780;
	// bdzf 4*cr6+eq,0x89971864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89971864;
	// bne cr6,0x899718bc
	if (!ctx.cr6.eq) goto loc_899718BC;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899716C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932a38
	ctx.lr = 0x899716D0;
	sub_89932A38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932cb0
	ctx.lr = 0x899716D8;
	sub_89932CB0(ctx, base);
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,-25188
	ctx.r11.s64 = ctx.r11.s64 + -25188;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
loc_899716EC:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r6,-4(r28)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r28.u32 + -4);
	// lhz r7,-2(r28)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + -2);
	// lhzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x899d2160
	ctx.lr = 0x89971708;
	sub_899D2160(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x89971724
	if (ctx.cr6.eq) goto loc_89971724;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_89971724:
	// extsh r11,r25
	ctx.r11.s64 = ctx.r25.s16;
	// addi r28,r28,6
	ctx.r28.s64 = ctx.r28.s64 + 6;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// clrlwi r10,r25,16
	ctx.r10.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// blt cr6,0x899716ec
	if (ctx.cr6.lt) goto loc_899716EC;
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// lbzx r9,r31,r26
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r30,184
	ctx.r6.s64 = ctx.r30.s64 + 184;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// rlwimi r8,r7,7,0,24
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r8.u64 & 0xFFFFFFFF0000007F);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stbx r5,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r5.u8);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r27,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r27.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89971780:
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
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// addi r10,r30,184
	ctx.r10.s64 = ctx.r30.s64 + 184;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// bgt cr6,0x89971840
	if (ctx.cr6.gt) goto loc_89971840;
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
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// rlwinm r4,r5,18,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x89971840
	if (!ctx.cr6.eq) goto loc_89971840;
	// addi r10,r30,186
	ctx.r10.s64 = ctx.r30.s64 + 186;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// addi r11,r9,25128
	ctx.r11.s64 = ctx.r9.s64 + 25128;
	// lbzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mulli r4,r6,696
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(696));
	// lwzx r3,r31,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r11,r4,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// bgt cr6,0x89971828
	if (ctx.cr6.gt) goto loc_89971828;
	// li r10,1
	ctx.r10.s64 = 1;
loc_89971828:
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89971840:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stbx r10,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u8);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89971864:
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
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// blt cr6,0x8997189c
	if (ctx.cr6.lt) goto loc_8997189C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r8,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_8997189C:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sthx r7,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899718BC:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r7,r30,184
	ctx.r7.s64 = ctx.r30.s64 + 184;
	// rlwinm r6,r8,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// li r27,0
	ctx.r27.s64 = 0;
	// stbx r6,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// stbx r27,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r27.u8);
	// stbx r27,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r27.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89971900:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89971908;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89970f10
	if (ctx.cr6.lt) goto loc_89970F10;
	// mulli r28,r11,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r22,r30,158
	ctx.r22.s64 = ctx.r30.s64 + 158;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
	// lhzx r10,r28,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r8.u32);
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// lhzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r21,r30,48
	ctx.r21.s64 = ctx.r30.s64 + 48;
	// sthx r6,r31,r22
	REX_STORE_U16(ctx.r31.u32 + ctx.r22.u32, ctx.r6.u16);
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r4,r6,128
	ctx.r4.s64 = ctx.r6.s64 + 128;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r10,r4,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r5,r26
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r26.u32);
	// addi r4,r30,206
	ctx.r4.s64 = ctx.r30.s64 + 206;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// lhzx r5,r10,r26
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// mullw r10,r8,r11
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lwzx r8,r28,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// addi r6,r30,68
	ctx.r6.s64 = ctx.r30.s64 + 68;
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// lbzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// srawi r5,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 8;
	// and r4,r9,r12
	ctx.r4.u64 = ctx.r9.u64 & ctx.r12.u64;
	// mulli r3,r5,208
	ctx.r3.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r27,r30,68
	ctx.r27.s64 = ctx.r30.s64 + 68;
	// stwx r9,r31,r21
	REX_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r9.u32);
	// addi r25,r30,200
	ctx.r25.s64 = ctx.r30.s64 + 200;
	// lwzx r9,r28,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r8,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r8.u32);
	// addi r24,r30,200
	ctx.r24.s64 = ctx.r30.s64 + 200;
	// lwzx r7,r28,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// lis r12,176
	ctx.r12.s64 = 11534336;
	// stwx r7,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r10,r28,r25
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r25.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// stbx r6,r31,r24
	REX_STORE_U8(ctx.r31.u32 + ctx.r24.u32, ctx.r6.u8);
	// lwzx r11,r28,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// bl 0x8991b7f8
	ctx.lr = 0x89971A0C;
	sub_8991B7F8(ctx, base);
	// addi r10,r30,188
	ctx.r10.s64 = ctx.r30.s64 + 188;
	// addi r8,r30,150
	ctx.r8.s64 = ctx.r30.s64 + 150;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89971be4
	if (ctx.cr6.eq) goto loc_89971BE4;
	// addi r18,r30,184
	ctx.r18.s64 = ctx.r30.s64 + 184;
	// li r27,0
	ctx.r27.s64 = 0;
	// lbzx r11,r31,r18
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r18.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89971a5c
	if (ctx.cr6.eq) goto loc_89971A5C;
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
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// stbx r27,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u8);
	// b 0x89971ac4
	goto loc_89971AC4;
loc_89971A5C:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x89971a9c
	if (!ctx.cr6.eq) goto loc_89971A9C;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbzx r8,r28,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rlwinm r6,r7,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stbx r6,r28,r11
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r6.u8);
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89971A9C:
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89971AAC;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r28,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stbx r8,r28,r11
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r8.u8);
loc_89971AC4:
	// lis r8,-30304
	ctx.r8.s64 = -1986002944;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r20,r8,-18292
	ctx.r20.s64 = ctx.r8.s64 + -18292;
	// addi r19,r9,-4592
	ctx.r19.s64 = ctx.r9.s64 + -4592;
	// addi r29,r10,-25128
	ctx.r29.s64 = ctx.r10.s64 + -25128;
loc_89971AE0:
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// lhzx r10,r31,r22
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// addi r6,r29,2
	ctx.r6.s64 = ctx.r29.s64 + 2;
	// lwzx r7,r31,r21
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r31,r23
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r9,128
	ctx.r4.s64 = ctx.r9.s64 + 128;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r10,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhzx r28,r5,r29
	ctx.r28.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r29.u32);
	// lhzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// rotlwi r28,r28,16
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 16);
	// lhzx r25,r11,r26
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// lhzx r4,r4,r26
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r26.u32);
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// srawi r11,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 4;
	// lhzx r28,r5,r10
	ctx.r28.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// extsh r4,r25
	ctx.r4.s64 = ctx.r25.s16;
	// mullw r6,r11,r5
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r25,r10,r4
	ctx.r25.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r5,r10,r5
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// srawi r25,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 8;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// srawi r5,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 8;
	// subf r10,r25,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r25.u64;
	// add r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r28,r10,r7
	ctx.r28.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r24,r9
	ctx.r24.s64 = ctx.r9.s16;
	// bl 0x8991b880
	ctx.lr = 0x89971B80;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89971bac
	if (ctx.cr6.eq) goto loc_89971BAC;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x89997d48
	ctx.lr = 0x89971BA4;
	sub_89997D48(ctx, base);
	// lbz r3,18(r20)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r20.u32 + 18);
	// bl 0x89936360
	ctx.lr = 0x89971BAC;
	sub_89936360(ctx, base);
loc_89971BAC:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// blt cr6,0x89971ae0
	if (ctx.cr6.lt) goto loc_89971AE0;
	// lbzx r11,r31,r18
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r18.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r31,r18
	REX_STORE_U8(ctx.r31.u32 + ctx.r18.u32, ctx.r10.u8);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// stbx r27,r31,r18
	REX_STORE_U8(ctx.r31.u32 + ctx.r18.u32, ctx.r27.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89971BE4:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
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
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// addi r9,r30,181
	ctx.r9.s64 = ctx.r30.s64 + 181;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89971C1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89971C24;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89971cbc
	if (ctx.cr6.lt) goto loc_89971CBC;
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
	// beq cr6,0x89971cbc
	if (ctx.cr6.eq) goto loc_89971CBC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899702e0
	ctx.lr = 0x89971C58;
	sub_899702E0(ctx, base);
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
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
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
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89971CBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89971CCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89971CD4;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x89971cbc
	if (ctx.cr6.lt) goto loc_89971CBC;
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
	// beq cr6,0x89971cbc
	if (ctx.cr6.eq) goto loc_89971CBC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899702e0
	ctx.lr = 0x89971D08;
	sub_899702E0(ctx, base);
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
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
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,4(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89971DA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89971DAC;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89971cbc
	if (ctx.cr6.lt) goto loc_89971CBC;
	// mulli r6,r11,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r5,r31,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r4,r30,158
	ctx.r4.s64 = ctx.r30.s64 + 158;
	// lis r3,-30320
	ctx.r3.s64 = -1987051520;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// addi r8,r3,9016
	ctx.r8.s64 = ctx.r3.s64 + 9016;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// lhzx r4,r6,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// addi r7,r30,60
	ctx.r7.s64 = ctx.r30.s64 + 60;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r28,r11,128
	ctx.r28.s64 = ctx.r11.s64 + 128;
	// lwzx r9,r6,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// rlwinm r3,r28,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x3FE;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// lhzx r7,r4,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhzx r3,r3,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r8.u32);
	// addi r27,r30,68
	ctx.r27.s64 = ctx.r30.s64 + 68;
	// mullw r8,r10,r7
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mullw r7,r11,r7
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// mullw r3,r10,r3
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// addi r26,r30,68
	ctx.r26.s64 = ctx.r30.s64 + 68;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r8,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 8;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stwx r9,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r9,r6,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// addi r8,r30,206
	ctx.r8.s64 = ctx.r30.s64 + 206;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// stwx r4,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r4.u32);
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r6,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// lbzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r29,r30,200
	ctx.r29.s64 = ctx.r30.s64 + 200;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// and r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r6,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// lis r12,176
	ctx.r12.s64 = 11534336;
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// stbx r3,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u8);
	// lwzx r3,r6,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// addi r25,r30,28
	ctx.r25.s64 = ctx.r30.s64 + 28;
	// and r8,r3,r12
	ctx.r8.u64 = ctx.r3.u64 & ctx.r12.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// or r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ctx.r5.u64;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// addi r24,r30,16
	ctx.r24.s64 = ctx.r30.s64 + 16;
	// addi r23,r30,20
	ctx.r23.s64 = ctx.r30.s64 + 20;
	// addi r22,r30,36
	ctx.r22.s64 = ctx.r30.s64 + 36;
	// addi r21,r30,32
	ctx.r21.s64 = ctx.r30.s64 + 32;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwzx r3,r7,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwx r3,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r3.u32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,4(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r4,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r4.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r7,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r6,r31,r21
	REX_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89971F50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89971F58;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899701e8
	ctx.lr = 0x89971F70;
	sub_899701E8(ctx, base);
	// addi r8,r30,164
	ctx.r8.s64 = ctx.r30.s64 + 164;
	// mulli r9,r28,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
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
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lhzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,4(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972014:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997201C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x89970f10
	if (ctx.cr6.lt) goto loc_89970F10;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,160
	ctx.r4.s64 = ctx.r30.s64 + 160;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// lwzx r10,r8,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r10,r31,r4
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r4.u32);
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r30,206
	ctx.r5.s64 = ctx.r30.s64 + 206;
	// lwzx r10,r8,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r7,r30,68
	ctx.r7.s64 = ctx.r30.s64 + 68;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// addi r9,r30,200
	ctx.r9.s64 = ctx.r30.s64 + 200;
	// lwzx r6,r8,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// stwx r6,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// lbzx r10,r8,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r5,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899720B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899720C0;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899702e0
	ctx.lr = 0x899720D8;
	sub_899702E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899720E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991ba70
	ctx.lr = 0x899720E8;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899704d0
	ctx.lr = 0x89972100;
	sub_899704D0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972108:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89972110;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899702e0
	ctx.lr = 0x89972128;
	sub_899702E0(ctx, base);
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lhzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x89972380
	if (ctx.cr6.eq) goto loc_89972380;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x89972178
	if (ctx.cr6.eq) goto loc_89972178;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r9,r30,182
	ctx.r9.s64 = ctx.r30.s64 + 182;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x899723c8
	goto loc_899723C8;
loc_89972178:
	// addi r8,r30,188
	ctx.r8.s64 = ctx.r30.s64 + 188;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x899722ec
	if (ctx.cr6.lt) goto loc_899722EC;
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x89972210
	if (ctx.cr6.eq) goto loc_89972210;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
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
	// beq cr6,0x8997223c
	if (ctx.cr6.eq) goto loc_8997223C;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x899721D4;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932a38
	ctx.lr = 0x899721E4;
	sub_89932A38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932cb0
	ctx.lr = 0x899721EC;
	sub_89932CB0(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x899d1b30
	ctx.lr = 0x89972208;
	sub_899D1B30(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972210:
	// addi r28,r30,184
	ctx.r28.s64 = ctx.r30.s64 + 184;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89972280
	if (!ctx.cr6.eq) goto loc_89972280;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
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
	// bne cr6,0x89972258
	if (!ctx.cr6.eq) goto loc_89972258;
loc_8997223C:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972258:
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89972268;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932a38
	ctx.lr = 0x89972278;
	sub_89932A38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932cb0
	ctx.lr = 0x89972280;
	sub_89932CB0(ctx, base);
loc_89972280:
	// addi r11,r30,185
	ctx.r11.s64 = ctx.r30.s64 + 185;
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
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// li r3,3
	ctx.r3.s64 = 3;
	// lhzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x899cce38
	ctx.lr = 0x899722C4;
	sub_899CCE38(ctx, base);
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
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899722EC:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r6,r30,182
	ctx.r6.s64 = ctx.r30.s64 + 182;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r5,r31,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stbx r3,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u8);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r27,0
	ctx.r27.s64 = 0;
	// stbx r27,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u8);
	// lhzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,32768
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32768, ctx.xer);
	// bge cr6,0x899723c8
	if (!ctx.cr6.lt) goto loc_899723C8;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r10,r30,195
	ctx.r10.s64 = ctx.r30.s64 + 195;
	// mulli r7,r11,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x89972358
	if (!ctx.cr6.eq) goto loc_89972358;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972358:
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// stwx r27,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r27.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-25068
	ctx.r8.s64 = ctx.r10.s64 + -25068;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r7,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r7.u32);
	// bl 0x8991b610
	ctx.lr = 0x89972378;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972380:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// addi r8,r30,182
	ctx.r8.s64 = ctx.r30.s64 + 182;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r3,44
	ctx.r3.s64 = 44;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// sthx r6,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u16);
	// stbx r5,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u8);
	// bl 0x89936360
	ctx.lr = 0x899723C8;
	sub_89936360(ctx, base);
loc_899723C8:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
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
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972468:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89972470;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899702e0
	ctx.lr = 0x89972488;
	sub_899702E0(ctx, base);
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// addi r9,r30,182
	ctx.r9.s64 = ctx.r30.s64 + 182;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r27,0
	ctx.r27.s64 = 0;
	// stbx r27,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89972558
	if (ctx.cr6.eq) goto loc_89972558;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x8997256c
	if (!ctx.cr6.eq) goto loc_8997256C;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x8997256c
	if (!ctx.cr6.lt) goto loc_8997256C;
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r9,r30,194
	ctx.r9.s64 = ctx.r30.s64 + 194;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// cmpwi cr6,r10,39
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 39, ctx.xer);
	// beq cr6,0x89972520
	if (ctx.cr6.eq) goto loc_89972520;
	// cmpwi cr6,r10,41
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 41, ctx.xer);
	// beq cr6,0x89972514
	if (ctx.cr6.eq) goto loc_89972514;
	// cmpwi cr6,r10,43
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 43, ctx.xer);
	// bne cr6,0x89972530
	if (!ctx.cr6.eq) goto loc_89972530;
	// li r10,44
	ctx.r10.s64 = 44;
	// stwx r27,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
	// b 0x8997252c
	goto loc_8997252C;
loc_89972514:
	// li r10,42
	ctx.r10.s64 = 42;
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x89972528
	goto loc_89972528;
loc_89972520:
	// li r10,40
	ctx.r10.s64 = 40;
	// li r9,32
	ctx.r9.s64 = 32;
loc_89972528:
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8997252C:
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
loc_89972530:
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r30,195
	ctx.r10.s64 = ctx.r30.s64 + 195;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// li r7,256
	ctx.r7.s64 = 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// sthx r7,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u16);
	// bl 0x8991b610
	ctx.lr = 0x89972550;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972558:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8997260c
	if (!ctx.cr6.gt) goto loc_8997260C;
loc_8997256C:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lhzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r29,r6,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r7,r29,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_8997260C:
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stwx r7,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r7.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997262C;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972634:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997263C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899702e0
	ctx.lr = 0x89972654;
	sub_899702E0(ctx, base);
	// addi r27,r30,188
	ctx.r27.s64 = ctx.r30.s64 + 188;
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// lbzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x899727cc
	if (ctx.cr6.lt) goto loc_899727CC;
	// beq cr6,0x899726bc
	if (ctx.cr6.eq) goto loc_899726BC;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x899736c4
	if (!ctx.cr6.lt) goto loc_899736C4;
	// addi r11,r30,194
	ctx.r11.s64 = ctx.r30.s64 + 194;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stwx r7,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r7.u32);
	// bl 0x8991b610
	ctx.lr = 0x899726A0;
	sub_8991B610(ctx, base);
	// addi r6,r30,160
	ctx.r6.s64 = ctx.r30.s64 + 160;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stbx r4,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r4.u8);
	// sthx r5,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899726BC:
	// addi r10,r30,195
	ctx.r10.s64 = ctx.r30.s64 + 195;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x899726ec
	if (!ctx.cr6.eq) goto loc_899726EC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899726EC:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// addi r7,r30,182
	ctx.r7.s64 = ctx.r30.s64 + 182;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r6,r31,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stbx r4,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u8);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// ble cr6,0x8997272c
	if (!ctx.cr6.gt) goto loc_8997272C;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8997272C:
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x89972740
	if (!ctx.cr6.lt) goto loc_89972740;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_89972740:
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r5,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899727CC:
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x89972b08
	if (ctx.cr6.eq) goto loc_89972B08;
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// beq cr6,0x8997295c
	if (ctx.cr6.eq) goto loc_8997295C;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x89972978
	if (ctx.cr6.eq) goto loc_89972978;
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r27,r30,36
	ctx.r27.s64 = ctx.r30.s64 + 36;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r26,r30,32
	ctx.r26.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// li r4,20
	ctx.r4.s64 = 20;
	// clrlwi r10,r3,29
	ctx.r10.u64 = ctx.r3.u32 & 0x7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
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
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// bl 0x8991db50
	ctx.lr = 0x899728A4;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r27,4
	ctx.r27.s64 = 262144;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
loc_899728C0:
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,3
	ctx.r3.s64 = 3;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r5,r11,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r4,r26
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r26.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lhzx r11,r5,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r26.u32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r5,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// rlwinm r4,r10,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// bl 0x899cc3d0
	ctx.lr = 0x89972940;
	sub_899CC3D0(ctx, base);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// blt cr6,0x899728c0
	if (ctx.cr6.lt) goto loc_899728C0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_8997295C:
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x89972998
	if (!ctx.cr6.eq) goto loc_89972998;
loc_89972978:
	// addi r10,r30,185
	ctx.r10.s64 = ctx.r30.s64 + 185;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stbx r9,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u8);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972998:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x899729A8;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r27,r6,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwzx r6,r27,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r6,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u32);
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r27,4
	ctx.r27.s64 = 262144;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
loc_89972A68:
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r5,r11,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r4,r4,r26
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r26.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lhzx r11,r5,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r26.u32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r5,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// rlwinm r4,r10,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// mulli r10,r11,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// bl 0x899cc3d0
	ctx.lr = 0x89972AEC;
	sub_899CC3D0(ctx, base);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x89972a68
	if (ctx.cr6.lt) goto loc_89972A68;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972B08:
	// addi r28,r30,189
	ctx.r28.s64 = ctx.r30.s64 + 189;
	// lbzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x899736c4
	if (ctx.cr6.gt) goto loc_899736C4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x89972b78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89972B78;
	// bdzf 4*cr6+eq,0x89972bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89972BC8;
	// bne cr6,0x89972c04
	if (!ctx.cr6.eq) goto loc_89972C04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932b18
	ctx.lr = 0x89972B38;
	sub_89932B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932d30
	ctx.lr = 0x89972B44;
	sub_89932D30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b7f8
	ctx.lr = 0x89972B4C;
	sub_8991B7F8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89972B5C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972B78:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,18
	ctx.r7.s64 = 18;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x899cfa40
	ctx.lr = 0x89972B9C;
	sub_899CFA40(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
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
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972BC8:
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972C04:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972C2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89972C34;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x89971cbc
	if (ctx.cr6.lt) goto loc_89971CBC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899702e0
	ctx.lr = 0x89972C4C;
	sub_899702E0(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,193
	ctx.r8.s64 = ctx.r30.s64 + 193;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// mulli r7,r28,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r27,r8
	ctx.r27.s64 = ctx.r8.s8;
	// lwzx r26,r6,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stwx r26,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r26.u32);
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r9,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u32);
	// lwzx r6,r7,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x89972d14
	if (!ctx.cr6.eq) goto loc_89972D14;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x89972d18
	if (ctx.cr6.eq) goto loc_89972D18;
loc_89972D14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_89972D18:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89972d44
	if (ctx.cr6.lt) goto loc_89972D44;
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// addi r10,r30,66
	ctx.r10.s64 = ctx.r30.s64 + 66;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x899736c4
	if (!ctx.cr6.lt) goto loc_899736C4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972D44:
	// addi r10,r30,66
	ctx.r10.s64 = ctx.r30.s64 + 66;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// addi r11,r11,254
	ctx.r11.s64 = ctx.r11.s64 + 254;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972D64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89972D6C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899701e8
	ctx.lr = 0x89972D84;
	sub_899701E8(ctx, base);
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// beq cr6,0x89972e78
	if (ctx.cr6.eq) goto loc_89972E78;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// beq cr6,0x89972dd4
	if (ctx.cr6.eq) goto loc_89972DD4;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r30,182
	ctx.r9.s64 = ctx.r30.s64 + 182;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x89972ec0
	goto loc_89972EC0;
loc_89972DD4:
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r30,182
	ctx.r8.s64 = ctx.r30.s64 + 182;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// lbzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// li r27,0
	ctx.r27.s64 = 0;
	// stbx r27,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u8);
	// lhzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x89972ec0
	if (ctx.cr6.lt) goto loc_89972EC0;
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r30,194
	ctx.r9.s64 = ctx.r30.s64 + 194;
	// mulli r8,r10,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stwx r27,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r27.u32);
	// neg r5,r7
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// andc r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// lis r3,-30294
	ctx.r3.s64 = -1985347584;
	// rlwinm r10,r10,3,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x4;
	// addi r9,r3,-25224
	ctx.r9.s64 = ctx.r3.s64 + -25224;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stwx r6,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r6.u32);
	// bl 0x8991b610
	ctx.lr = 0x89972E70;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972E78:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
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
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// addi r10,r30,182
	ctx.r10.s64 = ctx.r30.s64 + 182;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r3,44
	ctx.r3.s64 = 44;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// bl 0x89936360
	ctx.lr = 0x89972EC0;
	sub_89936360(ctx, base);
loc_89972EC0:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lhzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r6,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stwx r29,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// lwzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89972F60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x89972F68;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899701e8
	ctx.lr = 0x89972F80;
	sub_899701E8(ctx, base);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,150
	ctx.r9.s64 = ctx.r30.s64 + 150;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// beq cr6,0x89973008
	if (ctx.cr6.eq) goto loc_89973008;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x89972fd0
	if (ctx.cr6.eq) goto loc_89972FD0;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r8,r30,182
	ctx.r8.s64 = ctx.r30.s64 + 182;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x89973048
	goto loc_89973048;
loc_89972FD0:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
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
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r9,-1
	ctx.r9.s64 = -1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// b 0x89973048
	goto loc_89973048;
loc_89973008:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r8,r30,182
	ctx.r8.s64 = ctx.r30.s64 + 182;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// addi r9,r30,160
	ctx.r9.s64 = ctx.r30.s64 + 160;
	// li r8,0
	ctx.r8.s64 = 0;
	// stbx r8,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u8);
	// lhzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x899730e8
	if (!ctx.cr6.gt) goto loc_899730E8;
loc_89973048:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lhzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r29,r9,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stwx r29,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899730E8:
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r9,-30294
	ctx.r9.s64 = -1985347584;
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r9,-25224
	ctx.r7.s64 = ctx.r9.s64 + -25224;
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// andc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// rlwinm r10,r4,5,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x10;
	// lwzx r9,r10,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// bl 0x8991b610
	ctx.lr = 0x8997311C;
	sub_8991B610(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89973124:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x8997312C;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899702e0
	ctx.lr = 0x89973144;
	sub_899702E0(ctx, base);
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
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,-28
	ctx.r9.s64 = ctx.r9.s64 + -28;
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// bgt cr6,0x899733ec
	if (ctx.cr6.gt) goto loc_899733EC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899731a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899731A0;
	// bdzf 4*cr6+eq,0x899733ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899733EC;
	// bdzf 4*cr6+eq,0x899731a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899731A0;
	// bdzf 4*cr6+eq,0x899731a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899731A0;
	// bdzf 4*cr6+eq,0x899733ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899733EC;
	// bdzf 4*cr6+eq,0x899731a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899731A0;
	// bne cr6,0x899731a0
	if (!ctx.cr6.eq) goto loc_899731A0;
loc_899731A0:
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10, ctx.xer);
	// bne cr6,0x899733ec
	if (!ctx.cr6.eq) goto loc_899733EC;
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// oris r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 1073741824;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x89973208
	if (ctx.cr6.gt) goto loc_89973208;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899731f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899731F0;
	// bdzf 4*cr6+eq,0x89973208
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89973208;
	// bdzf 4*cr6+eq,0x899731f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899731F8;
	// bdzf 4*cr6+eq,0x899731f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899731F8;
	// bdzf 4*cr6+eq,0x89973208
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89973208;
	// bdzf 4*cr6+eq,0x89973200
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_89973200;
	// bne cr6,0x89973200
	if (!ctx.cr6.eq) goto loc_89973200;
loc_899731F0:
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x89973204
	goto loc_89973204;
loc_899731F8:
	// li r11,33
	ctx.r11.s64 = 33;
	// b 0x89973204
	goto loc_89973204;
loc_89973200:
	// li r11,36
	ctx.r11.s64 = 36;
loc_89973204:
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
loc_89973208:
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r7,r8,-25056
	ctx.r7.s64 = ctx.r8.s64 + -25056;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// andc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// lbzx r8,r10,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r6,r7,29
	ctx.r6.u64 = ctx.r7.u32 & 0x7;
	// stwx r6,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// bl 0x8991b610
	ctx.lr = 0x89973248;
	sub_8991B610(ctx, base);
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x8997334c
	if (ctx.cr6.eq) goto loc_8997334C;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// beq cr6,0x899732b0
	if (ctx.cr6.eq) goto loc_899732B0;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89973274;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932a38
	ctx.lr = 0x89973284;
	sub_89932A38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932cb0
	ctx.lr = 0x8997328C;
	sub_89932CB0(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x899d0eb8
	ctx.lr = 0x899732A8;
	sub_899D0EB8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899732B0:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// addi r27,r30,158
	ctx.r27.s64 = ctx.r30.s64 + 158;
	// addi r28,r30,184
	ctx.r28.s64 = ctx.r30.s64 + 184;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lbzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sthx r6,r31,r27
	REX_STORE_U16(ctx.r31.u32 + ctx.r27.u32, ctx.r6.u16);
	// bne cr6,0x899732f8
	if (!ctx.cr6.eq) goto loc_899732F8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x899732F0;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
loc_899732F8:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lhzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// lis r9,-30296
	ctx.r9.s64 = -1985478656;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r8,r9,-27472
	ctx.r8.s64 = ctx.r9.s64 + -27472;
	// lwzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 262144;
	// bl 0x899cbb90
	ctx.lr = 0x89973324;
	sub_899CBB90(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x899736c4
	if (!ctx.cr6.eq) goto loc_899736C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_8997334C:
	// addi r28,r30,184
	ctx.r28.s64 = ctx.r30.s64 + 184;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x89973384
	if (!ctx.cr6.eq) goto loc_89973384;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x8997336C;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932a38
	ctx.lr = 0x8997337C;
	sub_89932A38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932cb0
	ctx.lr = 0x89973384;
	sub_89932CB0(ctx, base);
loc_89973384:
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
	// blt cr6,0x899736c4
	if (ctx.cr6.lt) goto loc_899736C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// lis r4,-30296
	ctx.r4.s64 = -1985478656;
	// addi r6,r30,158
	ctx.r6.s64 = ctx.r30.s64 + 158;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// addi r8,r4,-26216
	ctx.r8.s64 = ctx.r4.s64 + -26216;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lis r7,5
	ctx.r7.s64 = 327680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 262144;
	// lhzx r6,r31,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r6.u32);
	// lwzx r5,r31,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// bl 0x899ccf78
	ctx.lr = 0x899733D8;
	sub_899CCF78(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899733EC:
	// lis r12,-16561
	ctx.r12.s64 = -1085341696;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r30,184
	ctx.r10.s64 = ctx.r30.s64 + 184;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// li r9,0
	ctx.r9.s64 = 0;
	// and r8,r11,r12
	ctx.r8.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89973414:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991ba70
	ctx.lr = 0x8997341C;
	sub_8991BA70(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x89970370
	ctx.lr = 0x89973434;
	sub_89970370(ctx, base);
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lhzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r7,r9,0,23,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FC;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r8,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r29,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r9,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_899734D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899734E0;
	sub_8991B9F0(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x899701e8
	ctx.lr = 0x899734F8;
	sub_899701E8(ctx, base);
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
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
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r29,r7,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stwx r29,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89973594:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991ba70
	ctx.lr = 0x8997359C;
	sub_8991BA70(ctx, base);
	// extsh r27,r3
	ctx.r27.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x89970f14
	if (ctx.cr6.lt) goto loc_89970F14;
	// bl 0x89970370
	ctx.lr = 0x899735B4;
	sub_89970370(ctx, base);
	// addi r28,r30,158
	ctx.r28.s64 = ctx.r30.s64 + 158;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lhzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// rlwinm r5,r7,0,23,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1FC;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x899735EC;
	sub_8991B610(ctx, base);
	// mulli r10,r27,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// lis r8,32
	ctx.r8.s64 = 2097152;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x89973618
	if (ctx.cr6.eq) goto loc_89973618;
	// addi r11,r30,162
	ctx.r11.s64 = ctx.r30.s64 + 162;
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
loc_89973618:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x89973628;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899736c4
	if (ctx.cr6.eq) goto loc_899736C4;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r24,r30,48
	ctx.r24.s64 = ctx.r30.s64 + 48;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r25,1
	ctx.r25.s64 = 65536;
	// lis r27,4
	ctx.r27.s64 = 262144;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
loc_89973648:
	// addi r11,r30,162
	ctx.r11.s64 = ctx.r30.s64 + 162;
	// lwzx r6,r31,r24
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lhzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// addi r8,r29,-3
	ctx.r8.s64 = ctx.r29.s64 + -3;
	// add r4,r6,r27
	ctx.r4.u64 = ctx.r6.u64 + ctx.r27.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// lhzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwzx r5,r31,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// rlwinm r9,r6,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// sthx r6,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u16);
	// lhzx r6,r9,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r26.u32);
	// rotlwi r11,r6,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// add r6,r9,r25
	ctx.r6.u64 = ctx.r9.u64 + ctx.r25.u64;
	// mullw r11,r6,r8
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// srawi r11,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 10;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// bl 0x899cc2e0
	ctx.lr = 0x899736B0;
	sub_899CC2E0(ctx, base);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// blt cr6,0x89973648
	if (ctx.cr6.lt) goto loc_89973648;
loc_899736C4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba40
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899992E0) {
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
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8999935c
	if (ctx.cr6.eq) goto loc_8999935C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x89999350
	if (!ctx.cr6.gt) goto loc_89999350;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x89999350
	if (ctx.cr6.gt) goto loc_89999350;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r10,r31,207
	ctx.r10.s64 = ctx.r31.s64 + 207;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// li r4,4
	ctx.r4.s64 = 4;
	// lbzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r7,r30,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r6,r30,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r5,r30,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// bl 0x899d4c10
	ctx.lr = 0x89999350;
	sub_899D4C10(ctx, base);
loc_89999350:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// b 0x89999364
	goto loc_89999364;
loc_8999935C:
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8991c340
	ctx.lr = 0x89999364;
	sub_8991C340(ctx, base);
loc_89999364:
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

DEFINE_REX_FUNC(sub_89999A10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x89999A18;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r7,-30270
	ctx.r7.s64 = -1983774720;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r4,-30275
	ctx.r4.s64 = -1984102400;
	// lis r8,-30273
	ctx.r8.s64 = -1983971328;
	// lwz r11,7924(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 7924);
	// lis r5,-30269
	ctx.r5.s64 = -1983709184;
	// lhz r31,26864(r7)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r7.u32 + 26864);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,5756(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 5756);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lhz r25,0(r11)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// clrlwi r26,r7,24
	ctx.r26.u64 = ctx.r7.u32 & 0xFF;
	// sth r25,12272(r6)
	REX_STORE_U16(ctx.r6.u32 + 12272, ctx.r25.u16);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// stb r26,11746(r4)
	REX_STORE_U8(ctx.r4.u32 + 11746, ctx.r26.u8);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzu r27,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r27.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwzx r24,r7,r10
	ctx.r24.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r11,7924(r9)
	REX_STORE_U32(ctx.r9.u32 + 7924, ctx.r11.u32);
	// sth r27,-17120(r5)
	REX_STORE_U16(ctx.r5.u32 + -17120, ctx.r27.u16);
	// stw r24,12024(r8)
	REX_STORE_U32(ctx.r8.u32 + 12024, ctx.r24.u32);
	// bl 0x89934058
	ctx.lr = 0x89999A84;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89999ba0
	if (ctx.cr6.eq) goto loc_89999BA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x89999A94;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x89999ba0
	if (ctx.cr6.eq) goto loc_89999BA0;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// lhz r29,-4592(r10)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// extsh r6,r29
	ctx.r6.s64 = ctx.r29.s16;
	// addi r5,r30,162
	ctx.r5.s64 = ctx.r30.s64 + 162;
	// mulli r31,r6,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// sthx r27,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u16);
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// sthx r27,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r27.u16);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// srawi r10,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 4;
	// lis r8,-16336
	ctx.r8.s64 = -1070596096;
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// ori r8,r8,260
	ctx.r8.u64 = ctx.r8.u64 | 260;
	// li r28,0
	ctx.r28.s64 = 0;
	// stwx r7,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r28,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// bl 0x8991b538
	ctx.lr = 0x89999B0C;
	sub_8991B538(ctx, base);
	// lis r6,-30270
	ctx.r6.s64 = -1983774720;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// lhz r11,27272(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 27272);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// cmpwi cr6,r5,384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 384, ctx.xer);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// ble cr6,0x89999b3c
	if (!ctx.cr6.gt) goto loc_89999B3C;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lwz r9,12000(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12000);
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
loc_89999B3C:
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// rlwinm r10,r25,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x8991c578
	ctx.lr = 0x89999B50;
	sub_8991C578(ctx, base);
	// addi r9,r30,204
	ctx.r9.s64 = ctx.r30.s64 + 204;
	// addi r8,r30,200
	ctx.r8.s64 = ctx.r30.s64 + 200;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r26,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u8);
	// stbx r26,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r26.u8);
	// bl 0x8991cac0
	ctx.lr = 0x89999B6C;
	sub_8991CAC0(ctx, base);
	// addi r7,r30,172
	ctx.r7.s64 = ctx.r30.s64 + 172;
	// addi r6,r30,176
	ctx.r6.s64 = ctx.r30.s64 + 176;
	// addi r5,r30,168
	ctx.r5.s64 = ctx.r30.s64 + 168;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,207
	ctx.r10.s64 = ctx.r30.s64 + 207;
	// stwx r28,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r28.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stwx r28,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r28.u32);
	// stwx r28,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r28.u32);
	// stwx r28,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r28.u32);
	// stwx r28,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
loc_89999BA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999A2B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8999A2B8;
	__savegprlr_29(ctx, base);
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
	// addi r10,r30,188
	ctx.r10.s64 = ctx.r30.s64 + 188;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8999a2f0
	if (ctx.cr6.lt) goto loc_8999A2F0;
	// bne cr6,0x8999a30c
	if (!ctx.cr6.eq) goto loc_8999A30C;
	// bl 0x8999a188
	ctx.lr = 0x8999A2EC;
	sub_8999A188(ctx, base);
	// b 0x8999a30c
	goto loc_8999A30C;
loc_8999A2F0:
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lhzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,160
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 160, ctx.xer);
	// bgt cr6,0x8999a30c
	if (ctx.cr6.gt) goto loc_8999A30C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
loc_8999A30C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8999a050
	ctx.lr = 0x8999A314;
	sub_8999A050(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8999a3a4
	if (!ctx.cr6.eq) goto loc_8999A3A4;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x8999A330;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999a3a4
	if (ctx.cr6.eq) goto loc_8999A3A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991aae8
	ctx.lr = 0x8999A340;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999a3a4
	if (ctx.cr6.eq) goto loc_8999A3A4;
	// bl 0x899329e0
	ctx.lr = 0x8999A34C;
	sub_899329E0(ctx, base);
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// addi r11,r11,25128
	ctx.r11.s64 = ctx.r11.s64 + 25128;
	// lwzx r30,r31,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mulli r7,r8,696
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(696));
	// lwzx r31,r31,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r7,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwzx r5,r7,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// bl 0x89932c20
	ctx.lr = 0x8999A388;
	sub_89932C20(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// bl 0x899cba10
	ctx.lr = 0x8999A3A4;
	sub_899CBA10(ctx, base);
loc_8999A3A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999ACC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8999ACC8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// sth r4,270(r1)
	REX_STORE_U16(ctx.r1.u32 + 270, ctx.r4.u16);
	// li r3,74
	ctx.r3.s64 = 74;
	// sth r5,278(r1)
	REX_STORE_U16(ctx.r1.u32 + 278, ctx.r5.u16);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// bl 0x89934058
	ctx.lr = 0x8999ACEC;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999aecc
	if (ctx.cr6.eq) goto loc_8999AECC;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8991b880
	ctx.lr = 0x8999ACFC;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999aecc
	if (ctx.cr6.eq) goto loc_8999AECC;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// addi r10,r10,-4592
	ctx.r10.s64 = ctx.r10.s64 + -4592;
	// addi r11,r11,-11980
	ctx.r11.s64 = ctx.r11.s64 + -11980;
	// addi r17,r10,-2
	ctx.r17.s64 = ctx.r10.s64 + -2;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r24,r11,-2
	ctx.r24.s64 = ctx.r11.s64 + -2;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lwz r29,-9212(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// lis r15,-16384
	ctx.r15.s64 = -1073741824;
	// li r16,74
	ctx.r16.s64 = 74;
	// ori r26,r9,20077
	ctx.r26.u64 = ctx.r9.u64 | 20077;
	// li r20,7
	ctx.r20.s64 = 7;
	// addi r30,r11,12800
	ctx.r30.s64 = ctx.r11.s64 + 12800;
loc_8999AD48:
	// lhzu r28,2(r17)
	ea = 2 + ctx.r17.u32;
	ctx.r28.u64 = REX_LOAD_U16(ea);
	ctx.r17.u32 = ea;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// extsh r11,r23
	ctx.r11.s64 = ctx.r23.s16;
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// mulli r25,r11,208
	ctx.r25.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// mulli r31,r9,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// stwx r16,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r16.u32);
	// stwx r15,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r15.u32);
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwzx r6,r25,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// stwx r6,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwzx r5,r25,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r7.u32);
	// stwx r5,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u32);
	// beq cr6,0x8999ada0
	if (ctx.cr6.eq) goto loc_8999ADA0;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,4
	ctx.r10.s64 = 4;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x8999adf4
	goto loc_8999ADF4;
loc_8999ADA0:
	// mullw r9,r29,r26
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r26.s32);
	// lhz r5,278(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 278);
	// lhz r8,270(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 270);
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r29,r9,12345
	ctx.r29.s64 = ctx.r9.s64 + 12345;
	// rotlwi r9,r5,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// addi r14,r30,60
	ctx.r14.s64 = ctx.r30.s64 + 60;
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r4,r4,19,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 19) & 0x3;
	// stwx r6,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// stwx r9,r31,r14
	REX_STORE_U32(ctx.r31.u32 + ctx.r14.u32, ctx.r9.u32);
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
loc_8999ADF4:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r22,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u32);
	// bl 0x8991b538
	ctx.lr = 0x8999AE04;
	sub_8991B538(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991c578
	ctx.lr = 0x8999AE0C;
	sub_8991C578(ctx, base);
	// addi r8,r30,148
	ctx.r8.s64 = ctx.r30.s64 + 148;
	// addi r9,r30,200
	ctx.r9.s64 = ctx.r30.s64 + 200;
	// lhz r7,2(r24)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r24.u32 + 2);
	// addi r6,r30,158
	ctx.r6.s64 = ctx.r30.s64 + 158;
	// lbzu r10,4(r24)
	ea = 4 + ctx.r24.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r24.u32 = ea;
	// addi r5,r30,168
	ctx.r5.s64 = ctx.r30.s64 + 168;
	// addi r4,r30,204
	ctx.r4.s64 = ctx.r30.s64 + 204;
	// sthx r23,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r23.u16);
	// addi r23,r30,64
	ctx.r23.s64 = ctx.r30.s64 + 64;
	// stbx r21,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r21.u8);
	// mullw r11,r29,r26
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r26.s32);
	// sthx r19,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r19.u16);
	// stwx r18,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r18.u32);
	// stbx r21,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r21.u8);
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r29,r11,12345
	ctx.r29.s64 = ctx.r11.s64 + 12345;
	// addi r3,r30,154
	ctx.r3.s64 = ctx.r30.s64 + 154;
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
	// srawi r8,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 16;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r9,r8,19,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x3;
	// addi r8,r30,104
	ctx.r8.s64 = ctx.r30.s64 + 104;
	// addi r6,r30,154
	ctx.r6.s64 = ctx.r30.s64 + 154;
	// addi r5,r30,68
	ctx.r5.s64 = ctx.r30.s64 + 68;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r14,r30,182
	ctx.r14.s64 = ctx.r30.s64 + 182;
	// lhzx r3,r25,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r3.u32);
	// addi r25,r30,66
	ctx.r25.s64 = ctx.r30.s64 + 66;
	// stwx r22,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r22.u32);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// stbx r20,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r20.u8);
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// sthx r3,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u16);
	// stbx r9,r31,r14
	REX_STORE_U8(ctx.r31.u32 + ctx.r14.u32, ctx.r9.u8);
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// stbx r10,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r10.u8);
	// blt cr6,0x8999ad48
	if (ctx.cr6.lt) goto loc_8999AD48;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r29,-9212(r11)
	REX_STORE_U32(ctx.r11.u32 + -9212, ctx.r29.u32);
	// bl 0x89936360
	ctx.lr = 0x8999AECC;
	sub_89936360(ctx, base);
loc_8999AECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999C100) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x8999C108;
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
	// lwzx r9,r30,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r8,r9,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8999c23c
	if (ctx.cr6.eq) goto loc_8999C23C;
	// bl 0x8991b9f0
	ctx.lr = 0x8999C130;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8999c24c
	if (ctx.cr6.lt) goto loc_8999C24C;
	// addi r10,r31,188
	ctx.r10.s64 = ctx.r31.s64 + 188;
	// lbzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8999c1c8
	if (ctx.cr6.lt) goto loc_8999C1C8;
	// bne cr6,0x8999c1f8
	if (!ctx.cr6.eq) goto loc_8999C1F8;
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
	// cmplwi cr6,r9,160
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 160, ctx.xer);
	// blt cr6,0x8999c194
	if (ctx.cr6.lt) goto loc_8999C194;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// stbx r8,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u8);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// stwx r8,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// b 0x8999c1f8
	goto loc_8999C1F8;
loc_8999C194:
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// addi r9,r31,160
	ctx.r9.s64 = ctx.r31.s64 + 160;
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// lbzx r8,r30,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lhzx r7,r30,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r9.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// lwzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r3,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x8999c1f8
	goto loc_8999C1F8;
loc_8999C1C8:
	// mulli r9,r29,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r7,r8,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8999c1f8
	if (ctx.cr6.eq) goto loc_8999C1F8;
	// addi r9,r31,160
	ctx.r9.s64 = ctx.r31.s64 + 160;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r3,46
	ctx.r3.s64 = 46;
	// stbx r8,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u8);
	// sthx r7,r30,r9
	REX_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u16);
	// bl 0x89936360
	ctx.lr = 0x8999C1F8;
	sub_89936360(ctx, base);
loc_8999C1F8:
	// mulli r9,r29,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
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
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r30,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r30,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// stwx r11,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwzx r11,r9,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r10,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_8999C23C:
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8999c25c
	if (!ctx.cr6.eq) goto loc_8999C25C;
loc_8999C24C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_8999C25C:
	// bl 0x8991c8b8
	ctx.lr = 0x8999C260;
	sub_8991C8B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999D208) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e0
	ctx.lr = 0x8999D210;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8991b880
	ctx.lr = 0x8999D220;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999d464
	if (ctx.cr6.eq) goto loc_8999D464;
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
	// lhz r23,-4592(r10)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r20,26864(r9)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r9.u32 + 26864);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// extsh r7,r23
	ctx.r7.s64 = ctx.r23.s16;
	// lhz r11,-17120(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + -17120);
	// addi r5,r31,162
	ctx.r5.s64 = ctx.r31.s64 + 162;
	// mulli r29,r7,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// sthx r11,r29,r5
	REX_STORE_U16(ctx.r29.u32 + ctx.r5.u32, ctx.r11.u16);
	// stwx r20,r29,r6
	REX_STORE_U32(ctx.r29.u32 + ctx.r6.u32, ctx.r20.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lis r9,-16208
	ctx.r9.s64 = -1062207488;
	// addi r22,r31,158
	ctx.r22.s64 = ctx.r31.s64 + 158;
	// ori r8,r9,260
	ctx.r8.u64 = ctx.r9.u64 | 260;
	// stwx r27,r29,r4
	REX_STORE_U32(ctx.r29.u32 + ctx.r4.u32, ctx.r27.u32);
	// addi r24,r10,-4592
	ctx.r24.s64 = ctx.r10.s64 + -4592;
	// stwx r27,r29,r3
	REX_STORE_U32(ctx.r29.u32 + ctx.r3.u32, ctx.r27.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r8,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u32);
	// sthx r11,r29,r22
	REX_STORE_U16(ctx.r29.u32 + ctx.r22.u32, ctx.r11.u16);
	// bl 0x8991b538
	ctx.lr = 0x8999D294;
	sub_8991B538(ctx, base);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// lis r5,352
	ctx.r5.s64 = 23068672;
	// rlwinm r4,r30,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stwx r5,r29,r7
	REX_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r5.u32);
	// stwx r4,r29,r6
	REX_STORE_U32(ctx.r29.u32 + ctx.r6.u32, ctx.r4.u32);
	// bl 0x8991c578
	ctx.lr = 0x8999D2B4;
	sub_8991C578(ctx, base);
	// lis r7,-30294
	ctx.r7.s64 = -1985347584;
	// addi r19,r31,204
	ctx.r19.s64 = ctx.r31.s64 + 204;
	// addi r10,r7,-11672
	ctx.r10.s64 = ctx.r7.s64 + -11672;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// li r11,115
	ctx.r11.s64 = 115;
	// addi r28,r10,-2
	ctx.r28.s64 = ctx.r10.s64 + -2;
	// lis r6,-2
	ctx.r6.s64 = -131072;
	// stbx r11,r29,r19
	REX_STORE_U8(ctx.r29.u32 + ctx.r19.u32, ctx.r11.u8);
	// li r5,256
	ctx.r5.s64 = 256;
	// stbx r11,r29,r3
	REX_STORE_U8(ctx.r29.u32 + ctx.r3.u32, ctx.r11.u8);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// stwx r27,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stwx r6,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r6.u32);
	// sthx r5,r29,r22
	REX_STORE_U16(ctx.r29.u32 + ctx.r22.u32, ctx.r5.u16);
	// lis r18,-6
	ctx.r18.s64 = -393216;
	// ori r21,r10,256
	ctx.r21.u64 = ctx.r10.u64 | 256;
loc_8999D300:
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// lhz r11,6(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 6);
	// addi r10,r24,2
	ctx.r10.s64 = ctx.r24.s64 + 2;
	// lwz r9,2(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 2);
	// rlwinm r8,r25,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r7,8(r28)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 8);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// addi r4,r31,150
	ctx.r4.s64 = ctx.r31.s64 + 150;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lhzx r17,r8,r10
	ctx.r17.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// extsh r10,r17
	ctx.r10.s64 = ctx.r17.s16;
	// lhzx r8,r5,r24
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r24.u32);
	// addi r26,r31,148
	ctx.r26.s64 = ctx.r31.s64 + 148;
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// sthx r23,r30,r4
	REX_STORE_U16(ctx.r30.u32 + ctx.r4.u32, ctx.r23.u16);
	// stwx r20,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r20.u32);
	// sthx r8,r30,r26
	REX_STORE_U16(ctx.r30.u32 + ctx.r26.u32, ctx.r8.u16);
	// or r5,r9,r21
	ctx.r5.u64 = ctx.r9.u64 | ctx.r21.u64;
	// stwx r27,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r27.u32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// stwx r5,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stwx r4,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r4.u32);
	// bl 0x8991b538
	ctx.lr = 0x8999D36C;
	sub_8991B538(ctx, base);
	// lhzx r10,r30,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r26.u32);
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// mulli r15,r10,208
	ctx.r15.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r16,r31,164
	ctx.r16.s64 = ctx.r31.s64 + 164;
	// lhzx r26,r29,r22
	ctx.r26.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r22.u32);
	// lhz r17,10(r28)
	ctx.r17.u64 = REX_LOAD_U16(ctx.r28.u32 + 10);
	// lhz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 12);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// sthx r26,r30,r11
	REX_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r26.u16);
	// rotlwi r11,r17,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r17.u32, 16);
	// stwx r11,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwzx r9,r15,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r8.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r10,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r9,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwzx r11,r15,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r5.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r18,r30,r16
	REX_STORE_U32(ctx.r30.u32 + ctx.r16.u32, ctx.r18.u32);
	// stwx r8,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r8.u32);
	// bl 0x8991c578
	ctx.lr = 0x8999D3D8;
	sub_8991C578(ctx, base);
	// addi r7,r31,207
	ctx.r7.s64 = ctx.r31.s64 + 207;
	// lbz r6,14(r28)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + 14);
	// addi r5,r31,207
	ctx.r5.s64 = ctx.r31.s64 + 207;
	// addi r4,r31,206
	ctx.r4.s64 = ctx.r31.s64 + 206;
	// lbz r3,15(r28)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + 15);
	// addi r8,r31,148
	ctx.r8.s64 = ctx.r31.s64 + 148;
	// lbzu r10,16(r28)
	ea = 16 + ctx.r28.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r26,r31,200
	ctx.r26.s64 = ctx.r31.s64 + 200;
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// addi r17,r31,200
	ctx.r17.s64 = ctx.r31.s64 + 200;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r25,r31,204
	ctx.r25.s64 = ctx.r31.s64 + 204;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r16,r31,180
	ctx.r16.s64 = ctx.r31.s64 + 180;
	// addi r15,r31,192
	ctx.r15.s64 = ctx.r31.s64 + 192;
	// addi r14,r31,193
	ctx.r14.s64 = ctx.r31.s64 + 193;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lbzx r7,r29,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// stbx r6,r30,r4
	REX_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r6.u8);
	// stbx r7,r30,r5
	REX_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r7.u8);
	// lhzx r6,r29,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r8.u32);
	// mulli r5,r6,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r5,r26
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r26.u32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// stbx r9,r30,r17
	REX_STORE_U8(ctx.r30.u32 + ctx.r17.u32, ctx.r9.u8);
	// lbzx r8,r29,r19
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r19.u32);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stbx r27,r30,r16
	REX_STORE_U8(ctx.r30.u32 + ctx.r16.u32, ctx.r27.u8);
	// stbx r3,r30,r15
	REX_STORE_U8(ctx.r30.u32 + ctx.r15.u32, ctx.r3.u8);
	// stbx r10,r30,r14
	REX_STORE_U8(ctx.r30.u32 + ctx.r14.u32, ctx.r10.u8);
	// stbx r8,r30,r25
	REX_STORE_U8(ctx.r30.u32 + ctx.r25.u32, ctx.r8.u8);
	// blt cr6,0x8999d300
	if (ctx.cr6.lt) goto loc_8999D300;
loc_8999D464:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x899dba30
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8999F760) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9e4
	ctx.lr = 0x8999F768;
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
	// addi r15,r30,184
	ctx.r15.s64 = ctx.r30.s64 + 184;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// lbzx r9,r31,r15
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r15.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8999f7b8
	if (ctx.cr6.eq) goto loc_8999F7B8;
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
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x8999f9d4
	if (ctx.cr6.lt) goto loc_8999F9D4;
	// stbx r17,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r17.u8);
	// b 0x8999f864
	goto loc_8999F864;
loc_8999F7B8:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x89932b18
	ctx.lr = 0x8999F7C0;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x89932d30
	ctx.lr = 0x8999F7CC;
	sub_89932D30(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// addi r28,r30,36
	ctx.r28.s64 = ctx.r30.s64 + 36;
	// lwzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r27,r30,32
	ctx.r27.s64 = ctx.r30.s64 + 32;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
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
	// stwx r9,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r7.u32);
	// bl 0x8991db50
	ctx.lr = 0x8999F844;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999f9d4
	if (ctx.cr6.eq) goto loc_8999F9D4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8991aae8
	ctx.lr = 0x8999F854;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999f9d4
	if (ctx.cr6.eq) goto loc_8999F9D4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stbx r11,r31,r15
	REX_STORE_U8(ctx.r31.u32 + ctx.r15.u32, ctx.r11.u8);
loc_8999F864:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r8,-30304
	ctx.r8.s64 = -1986002944;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// lhzx r22,r31,r10
	ctx.r22.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// addi r27,r11,9016
	ctx.r27.s64 = ctx.r11.s64 + 9016;
	// addi r23,r30,8
	ctx.r23.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r17,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r22,1,22,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0x3FE;
	// extsh r25,r22
	ctx.r25.s64 = ctx.r22.s16;
	// lis r21,1
	ctx.r21.s64 = 65536;
	// ori r20,r7,32768
	ctx.r20.u64 = ctx.r7.u64 | 32768;
	// addi r19,r8,-18292
	ctx.r19.s64 = ctx.r8.s64 + -18292;
	// addi r18,r9,-4592
	ctx.r18.s64 = ctx.r9.s64 + -4592;
	// addi r26,r10,-11304
	ctx.r26.s64 = ctx.r10.s64 + -11304;
loc_8999F8A8:
	// addi r10,r25,128
	ctx.r10.s64 = ctx.r25.s64 + 128;
	// lwzx r9,r11,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lhzx r8,r24,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r27.u32);
	// rlwinm r5,r10,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lwzx r10,r31,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// lwzx r6,r31,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lhzx r7,r5,r27
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r27.u32);
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwzx r9,r31,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// srawi r3,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 8;
	// rlwinm r8,r5,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// rlwinm r4,r4,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r7,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 2;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// srawi r8,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 8;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r29,r7,r21
	ctx.r29.u64 = ctx.r7.u64 + ctx.r21.u64;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x8999f984
	if (ctx.cr6.lt) goto loc_8999F984;
	// beq cr6,0x8999f94c
	if (ctx.cr6.eq) goto loc_8999F94C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8999f99c
	if (!ctx.cr6.lt) goto loc_8999F99C;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x899cba10
	ctx.lr = 0x8999F948;
	sub_899CBA10(ctx, base);
	// b 0x8999f99c
	goto loc_8999F99C;
loc_8999F94C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x8999F954;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8999f99c
	if (ctx.cr6.eq) goto loc_8999F99C;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x89997d48
	ctx.lr = 0x8999F978;
	sub_89997D48(ctx, base);
	// lbz r3,14(r19)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r19.u32 + 14);
	// bl 0x89936360
	ctx.lr = 0x8999F980;
	sub_89936360(ctx, base);
	// b 0x8999f99c
	goto loc_8999F99C;
loc_8999F984:
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x899cc3d0
	ctx.lr = 0x8999F99C;
	sub_899CC3D0(ctx, base);
loc_8999F99C:
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
	// blt cr6,0x8999f8a8
	if (ctx.cr6.lt) goto loc_8999F8A8;
	// lbzx r11,r31,r15
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r15.u32);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r31,r15
	REX_STORE_U8(ctx.r31.u32 + ctx.r15.u32, ctx.r10.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8999f9d4
	if (!ctx.cr6.eq) goto loc_8999F9D4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x89932a38
	ctx.lr = 0x8999F9D4;
	sub_89932A38(ctx, base);
loc_8999F9D4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x899dba34
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899A1E80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x899A1E88;
	__savegprlr_19(ctx, base);
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
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bgt cr6,0x899a379c
	if (ctx.cr6.gt) goto loc_899A379C;
	// lis r12,-30310
	ctx.r12.s64 = -1986396160;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,7880
	ctx.r12.s64 = ctx.r12.s64 + 7880;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899A1F58;
	case 1:
		goto loc_899A2120;
	case 2:
		goto loc_899A24E8;
	case 3:
		goto loc_899A2800;
	case 4:
		goto loc_899A2800;
	case 5:
		goto loc_899A2E7C;
	case 6:
		goto loc_899A2E7C;
	case 7:
		goto loc_899A2FBC;
	case 8:
		goto loc_899A2FBC;
	case 9:
		goto loc_899A32A4;
	case 10:
		goto loc_899A32A4;
	case 11:
		goto loc_899A355C;
	case 12:
		goto loc_899A355C;
	case 13:
		goto loc_899A355C;
	case 14:
		goto loc_899A355C;
	case 15:
		goto loc_899A2800;
	case 16:
		goto loc_899A2800;
	case 17:
		goto loc_899A2C50;
	case 18:
		goto loc_899A2C50;
	case 19:
		goto loc_899A2800;
	case 20:
		goto loc_899A2800;
	case 21:
		goto loc_899A2A04;
	case 22:
		goto loc_899A2A04;
	case 23:
		goto loc_899A2214;
	case 24:
		goto loc_899A2214;
	case 25:
		goto loc_899A2120;
	case 26:
		goto loc_899A2120;
	case 27:
		goto loc_899A2B94;
	case 28:
		goto loc_899A2B94;
	case 29:
		goto loc_899A34A0;
	case 30:
		goto loc_899A34A0;
	case 31:
		goto loc_899A379C;
	case 32:
		goto loc_899A379C;
	case 33:
		goto loc_899A379C;
	case 34:
		goto loc_899A379C;
	case 35:
		goto loc_899A35EC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899A1F58:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,72
	ctx.r5.s64 = ctx.r30.s64 + 72;
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
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lhzx r5,r31,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
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
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// beq cr6,0x899a1fd0
	if (ctx.cr6.eq) goto loc_899A1FD0;
	// bl 0x899a19b0
	ctx.lr = 0x899A1FCC;
	sub_899A19B0(ctx, base);
	// b 0x899a20fc
	goto loc_899A20FC;
loc_899A1FD0:
	// bl 0x8991c8b8
	ctx.lr = 0x899A1FD4;
	sub_8991C8B8(ctx, base);
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
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x899a20fc
	if (ctx.cr6.lt) goto loc_899A20FC;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// addi r7,r9,9016
	ctx.r7.s64 = ctx.r9.s64 + 9016;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r28,r30,207
	ctx.r28.s64 = ctx.r30.s64 + 207;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r4,r10,17
	ctx.r4.u64 = ctx.r10.u32 & 0x7FFF;
	// mullw r9,r11,r5
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,12345
	ctx.r11.s64 = ctx.r9.s64 + 12345;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// rlwinm r5,r4,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// rlwinm r4,r9,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// lhzx r5,r5,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r8,r6,6,11,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0x1F0000;
	// lhzx r7,r4,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// clrlwi r9,r10,17
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFF;
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// rlwinm r8,r9,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r5,r10
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// srawi r7,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 8;
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// srawi r8,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 16;
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lis r6,-30294
	ctx.r6.s64 = -1985347584;
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r9,r30,200
	ctx.r9.s64 = ctx.r30.s64 + 200;
	// rlwinm r11,r11,17,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFF;
	// addi r29,r6,-10156
	ctx.r29.s64 = ctx.r6.s64 + -10156;
	// rlwinm r27,r8,21,28,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0xC;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lbzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lis r9,-6
	ctx.r9.s64 = -393216;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r27,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// bl 0x899d4640
	ctx.lr = 0x899A20FC;
	sub_899D4640(ctx, base);
loc_899A20FC:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899a379c
	if (!ctx.cr6.eq) goto loc_899A379C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x89933b88
	ctx.lr = 0x899A2118;
	sub_89933B88(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A2120:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A2128;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x899a2148
	if (!ctx.cr6.lt) goto loc_899A2148;
loc_899A2138:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A2148:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x899a1da0
	ctx.lr = 0x899A2150;
	sub_899A1DA0(ctx, base);
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mulli r10,r29,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x899a217c
	if (ctx.cr6.eq) goto loc_899A217C;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// li r9,512
	ctx.r9.s64 = 512;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
loc_899A217C:
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r29,r6,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r29,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// add r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A2214:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A221C;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// blt cr6,0x899a2a1c
	if (ctx.cr6.lt) goto loc_899A2A1C;
	// bl 0x899a1da0
	ctx.lr = 0x899A2234;
	sub_899A1DA0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899a379c
	if (ctx.cr6.eq) goto loc_899A379C;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// mulli r4,r29,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lwzx r7,r4,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x899a2274
	if (ctx.cr6.eq) goto loc_899A2274;
loc_899A2260:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// li r10,512
	ctx.r10.s64 = 512;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A2274:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r27,r30,36
	ctx.r27.s64 = ctx.r30.s64 + 36;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r25,r30,32
	ctx.r25.s64 = ctx.r30.s64 + 32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// lbzx r7,r31,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r24,r9,r5
	ctx.r24.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwzx r8,r24,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r8,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u32);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stwx r3,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r3.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r10.u32);
	// bgt cr6,0x899a379c
	if (ctx.cr6.gt) goto loc_899A379C;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899a236c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A236C;
	// bdzf 4*cr6+eq,0x899a23c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899A23C8;
	// bne cr6,0x899a24a8
	if (!ctx.cr6.eq) goto loc_899A24A8;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r7,r4,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r6,r4,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899a379c
	if (ctx.cr6.eq) goto loc_899A379C;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x89936360
	ctx.lr = 0x899A2358;
	sub_89936360(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A236C:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// sthx r5,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u16);
	// stbx r4,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// blt cr6,0x899a379c
	if (ctx.cr6.lt) goto loc_899A379C;
	// addi r9,r30,184
	ctx.r9.s64 = ctx.r30.s64 + 184;
	// addi r8,r30,185
	ctx.r8.s64 = ctx.r30.s64 + 185;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r6,9
	ctx.r6.s64 = 9;
	// stbx r22,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u8);
	// stbx r22,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r22.u8);
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// stbx r7,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A23C8:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r4,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r5,r4,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899a23f4
	if (!ctx.cr6.eq) goto loc_899A23F4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_899A23F4:
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
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// blt cr6,0x899a379c
	if (ctx.cr6.lt) goto loc_899A379C;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r10,r10,-10192
	ctx.r10.s64 = ctx.r10.s64 + -10192;
	// stbx r22,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u8);
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// addi r29,r10,-6
	ctx.r29.s64 = ctx.r10.s64 + -6;
loc_899A242C:
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 8);
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lhz r7,10(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 10);
	// rotlwi r5,r11,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// beq cr6,0x899a2454
	if (ctx.cr6.eq) goto loc_899A2454;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// subfic r10,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r10.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
loc_899A2454:
	// lhzu r11,6(r29)
	ea = 6 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lis r8,6
	ctx.r8.s64 = 393216;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r4,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x899a8438
	ctx.lr = 0x899A2488;
	sub_899A8438(ctx, base);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x899a242c
	if (ctx.cr6.lt) goto loc_899A242C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A24A8:
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// sthx r6,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u16);
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x899a379c
	if (ctx.cr6.lt) goto loc_899A379C;
	// li r22,0
	ctx.r22.s64 = 0;
	// stbx r22,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u8);
	// stbx r22,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r22.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A24E8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991ba70
	ctx.lr = 0x899A24F0;
	sub_8991BA70(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// blt cr6,0x899a2a1c
	if (ctx.cr6.lt) goto loc_899A2A1C;
	// bl 0x899a1da0
	ctx.lr = 0x899A2508;
	sub_899A1DA0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899a379c
	if (ctx.cr6.eq) goto loc_899A379C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932b18
	ctx.lr = 0x899A251C;
	sub_89932B18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932d30
	ctx.lr = 0x899A2528;
	sub_89932D30(ctx, base);
	// addi r26,r30,158
	ctx.r26.s64 = ctx.r30.s64 + 158;
	// lhzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bge cr6,0x899a2544
	if (!ctx.cr6.lt) goto loc_899A2544;
	// li r11,128
	ctx.r11.s64 = 128;
	// sthx r11,r31,r26
	REX_STORE_U16(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u16);
loc_899A2544:
	// lhzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 384, ctx.xer);
	// ble cr6,0x899a255c
	if (!ctx.cr6.gt) goto loc_899A255C;
	// li r11,384
	ctx.r11.s64 = 384;
	// sthx r11,r31,r26
	REX_STORE_U16(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u16);
loc_899A255C:
	// lhzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r10,-126
	ctx.r5.s64 = ctx.r10.s64 + -126;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// srawi r9,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r23,r30,188
	ctx.r23.s64 = ctx.r30.s64 + 188;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r8,r10
	ctx.r28.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r5,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r9,r31,r23
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r23.u32);
	// addi r7,r30,32
	ctx.r7.s64 = ctx.r30.s64 + 32;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r3,8(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// blt cr6,0x899a27bc
	if (ctx.cr6.lt) goto loc_899A27BC;
	// bne cr6,0x899a379c
	if (!ctx.cr6.eq) goto loc_899A379C;
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
	// blt cr6,0x899a379c
	if (ctx.cr6.lt) goto loc_899A379C;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// stbx r22,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u8);
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lis r24,16
	ctx.r24.s64 = 1048576;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
loc_899A2644:
	// addi r11,r29,-7
	ctx.r11.s64 = ctx.r29.s64 + -7;
	// lhzx r7,r31,r26
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// lwzx r4,r31,r25
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lwzx r5,r31,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// rlwinm r9,r3,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// addi r8,r3,128
	ctx.r8.s64 = ctx.r3.s64 + 128;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r8,r8,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lhzx r11,r9,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhzx r10,r8,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r28.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r9,14,0,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// rlwinm r9,r10,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r4,r24,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r24.u64;
	// bl 0x899cc3d0
	ctx.lr = 0x899A26C8;
	sub_899CC3D0(ctx, base);
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// blt cr6,0x899a2644
	if (ctx.cr6.lt) goto loc_899A2644;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r24,r11,-10140
	ctx.r24.s64 = ctx.r11.s64 + -10140;
loc_899A26E8:
	// lhzx r6,r31,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r24,2
	ctx.r9.s64 = ctx.r24.s64 + 2;
	// lwzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwzx r4,r31,r25
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// lhzx r11,r10,r24
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// lis r7,5
	ctx.r7.s64 = 327680;
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r3,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// rotlwi r11,r10,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhzx r5,r5,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// lhzx r3,r3,r28
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r28.u32);
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// mullw r3,r10,r9
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r20,r11,r5
	ctx.r20.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r19,r11,r9
	ctx.r19.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// srawi r11,r20,8
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r20.s32 >> 8;
	// srawi r5,r19,8
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r19.s32 >> 8;
	// srawi r3,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r10,r5,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r5.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r9,r10,224
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(224));
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x899cda00
	ctx.lr = 0x899A2778;
	sub_899CDA00(ctx, base);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x899a26e8
	if (ctx.cr6.lt) goto loc_899A26E8;
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x899a379c
	if (!ctx.cr6.eq) goto loc_899A379C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x89932a38
	ctx.lr = 0x899A27B0;
	sub_89932A38(ctx, base);
	// stbx r22,r31,r23
	REX_STORE_U8(ctx.r31.u32 + ctx.r23.u32, ctx.r22.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A27BC:
	// addi r10,r30,193
	ctx.r10.s64 = ctx.r30.s64 + 193;
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lbzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// lbzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899a379c
	if (ctx.cr6.eq) goto loc_899A379C;
	// addi r10,r30,184
	ctx.r10.s64 = ctx.r30.s64 + 184;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r8,16
	ctx.r8.s64 = 16;
	// stbx r9,r31,r23
	REX_STORE_U8(ctx.r31.u32 + ctx.r23.u32, ctx.r9.u8);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A2800:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A2808;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// blt cr6,0x899a2a1c
	if (ctx.cr6.lt) goto loc_899A2A1C;
	// bl 0x899a1da0
	ctx.lr = 0x899A2820;
	sub_899A1DA0(ctx, base);
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
	// bne cr6,0x899a379c
	if (!ctx.cr6.eq) goto loc_899A379C;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r22,0
	ctx.r22.s64 = 0;
	// stbx r22,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899a2934
	if (ctx.cr6.eq) goto loc_899A2934;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x899a2964
	if (!ctx.cr6.eq) goto loc_899A2964;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bgt cr6,0x899a28fc
	if (ctx.cr6.gt) goto loc_899A28FC;
	// lis r12,-30310
	ctx.r12.s64 = -1986396160;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10372
	ctx.r12.s64 = ctx.r12.s64 + 10372;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_899A28EC;
	case 1:
		goto loc_899A28F4;
	case 2:
		goto loc_899A28FC;
	case 3:
		goto loc_899A28FC;
	case 4:
		goto loc_899A28FC;
	case 5:
		goto loc_899A28FC;
	case 6:
		goto loc_899A28FC;
	case 7:
		goto loc_899A28FC;
	case 8:
		goto loc_899A28FC;
	case 9:
		goto loc_899A28FC;
	case 10:
		goto loc_899A28FC;
	case 11:
		goto loc_899A28FC;
	case 12:
		goto loc_899A28DC;
	case 13:
		goto loc_899A28E4;
	case 14:
		goto loc_899A28FC;
	case 15:
		goto loc_899A28FC;
	case 16:
		goto loc_899A28CC;
	case 17:
		goto loc_899A28D4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_899A28CC:
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x899a28f8
	goto loc_899A28F8;
loc_899A28D4:
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x899a28f8
	goto loc_899A28F8;
loc_899A28DC:
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x899a28f8
	goto loc_899A28F8;
loc_899A28E4:
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x899a28f8
	goto loc_899A28F8;
loc_899A28EC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x899a28f8
	goto loc_899A28F8;
loc_899A28F4:
	// li r11,6
	ctx.r11.s64 = 6;
loc_899A28F8:
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
loc_899A28FC:
	// stwx r22,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b610
	ctx.lr = 0x899A2908;
	sub_8991B610(ctx, base);
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// mulli r10,r29,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// subfic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r4.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// lbzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stbx r3,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A2934:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lbzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
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
	// beq cr6,0x899a379c
	if (ctx.cr6.eq) goto loc_899A379C;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r9,1
	ctx.r9.s64 = 1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
loc_899A2964:
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
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
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A2A04:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A2A0C;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x899a2a28
	if (!ctx.cr6.lt) goto loc_899A2A28;
loc_899A2A18:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_899A2A1C:
	// bl 0x899a1830
	ctx.lr = 0x899A2A20;
	sub_899A1830(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A2A28:
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r4,r11,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r7,r10,9016
	ctx.r7.s64 = ctx.r10.s64 + 9016;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lbzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// lwzx r8,r31,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// lwzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r10,r11,4,22,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3F0;
	// lwzx r6,r4,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// addi r9,r30,206
	ctx.r9.s64 = ctx.r30.s64 + 206;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r26,r30,68
	ctx.r26.s64 = ctx.r30.s64 + 68;
	// addi r25,r30,68
	ctx.r25.s64 = ctx.r30.s64 + 68;
	// lhzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// addi r24,r30,200
	ctx.r24.s64 = ctx.r30.s64 + 200;
	// extsh r22,r7
	ctx.r22.s64 = ctx.r7.s16;
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// ori r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 65279;
	// rlwinm r9,r22,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 13) & 0xFFFFE000;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// addi r23,r30,200
	ctx.r23.s64 = ctx.r30.s64 + 200;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// and r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 & ctx.r12.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// stwx r8,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u32);
	// lis r12,176
	ctx.r12.s64 = 11534336;
	// lwzx r6,r4,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r6,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r6.u32);
	// lwzx r5,r4,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r5,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r5.u32);
	// add r8,r31,r30
	ctx.r8.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbzx r8,r4,r24
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r24.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r3,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// stbx r8,r31,r23
	REX_STORE_U8(ctx.r31.u32 + ctx.r23.u32, ctx.r8.u8);
	// addi r21,r30,193
	ctx.r21.s64 = ctx.r30.s64 + 193;
	// lwzx r8,r4,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// or r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r22,r30,28
	ctx.r22.s64 = ctx.r30.s64 + 28;
	// stwx r3,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r20,r30,193
	ctx.r20.s64 = ctx.r30.s64 + 193;
	// lbzx r7,r4,r21
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r21.u32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// lwzx r10,r31,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// stbx r7,r31,r20
	REX_STORE_U8(ctx.r31.u32 + ctx.r20.u32, ctx.r7.u8);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r6,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r30,36
	ctx.r27.s64 = ctx.r30.s64 + 36;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,4(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r3,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r3.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A2B94:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A2B9C;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x899a2138
	if (ctx.cr6.lt) goto loc_899A2138;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x899a1da0
	ctx.lr = 0x899A2BB4;
	sub_899A1DA0(ctx, base);
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
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
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,4(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r3,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A2C50:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A2C58;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899a2a18
	if (ctx.cr6.lt) goto loc_899A2A18;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lis r8,-30320
	ctx.r8.s64 = -1987051520;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// addi r5,r8,9016
	ctx.r5.s64 = ctx.r8.s64 + 9016;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// sthx r9,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u16);
	// rlwinm r7,r9,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// lhzx r8,r7,r5
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// lwzx r7,r31,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addi r26,r30,68
	ctx.r26.s64 = ctx.r30.s64 + 68;
	// addi r8,r30,206
	ctx.r8.s64 = ctx.r30.s64 + 206;
	// lbzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r3,r5,14,0,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// srawi r5,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 8;
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r5,r30,200
	ctx.r5.s64 = ctx.r30.s64 + 200;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r6,r30,200
	ctx.r6.s64 = ctx.r30.s64 + 200;
	// stwx r9,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwzx r9,r11,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r9,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// lwzx r4,r11,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// stbx r3,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u8);
	// bne cr6,0x899a379c
	if (!ctx.cr6.eq) goto loc_899A379C;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// xori r11,r6,1
	ctx.r11.u64 = ctx.r6.u64 ^ 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899a2de0
	if (ctx.cr6.lt) goto loc_899A2DE0;
	// bne cr6,0x899a379c
	if (!ctx.cr6.eq) goto loc_899A379C;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899a379c
	if (ctx.cr6.eq) goto loc_899A379C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r30,32
	ctx.r9.s64 = ctx.r30.s64 + 32;
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r4,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A2DE0:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x899a379c
	if (ctx.cr6.eq) goto loc_899A379C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A2E7C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A2E84;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// blt cr6,0x899a2a1c
	if (ctx.cr6.lt) goto loc_899A2A1C;
	// bl 0x899a1da0
	ctx.lr = 0x899A2E9C;
	sub_899A1DA0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899a379c
	if (ctx.cr6.eq) goto loc_899A379C;
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
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r27,r31,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r28,r9,r7
	ctx.r28.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r28,r28,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// add r25,r8,r10
	ctx.r25.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw r9,r27
	ctx.r9.s64 = ctx.r27.s32;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r28,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r28.u32);
	// lwz r6,4(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r9,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// bne cr6,0x899a379c
	if (!ctx.cr6.eq) goto loc_899A379C;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
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
	// beq cr6,0x899a379c
	if (ctx.cr6.eq) goto loc_899A379C;
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x899a2f88
	if (ctx.cr6.eq) goto loc_899A2F88;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x899a2f90
	if (!ctx.cr6.eq) goto loc_899A2F90;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x899a2f8c
	goto loc_899A2F8C;
loc_899A2F88:
	// li r10,7
	ctx.r10.s64 = 7;
loc_899A2F8C:
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
loc_899A2F90:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x899A2FA0;
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
	ctx.lr = 0x899A2FB4;
	sub_89936360(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A2FBC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A2FC4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// blt cr6,0x899a2a1c
	if (ctx.cr6.lt) goto loc_899A2A1C;
	// bl 0x899a1da0
	ctx.lr = 0x899A2FDC;
	sub_899A1DA0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899a379c
	if (ctx.cr6.eq) goto loc_899A379C;
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
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x899a379c
	if (ctx.cr6.lt) goto loc_899A379C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r22,0
	ctx.r22.s64 = 0;
	// stbx r22,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899a31b4
	if (ctx.cr6.eq) goto loc_899A31B4;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// beq cr6,0x899a30c4
	if (ctx.cr6.eq) goto loc_899A30C4;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// lhzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stwx r3,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r10,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A30C4:
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x899a3168
	if (!ctx.cr6.lt) goto loc_899A3168;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r29,r8,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r6,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwz r5,8(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A3168:
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x899a3198
	if (ctx.cr6.eq) goto loc_899A3198;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x899a31a0
	if (!ctx.cr6.eq) goto loc_899A31A0;
	// li r10,10
	ctx.r10.s64 = 10;
	// stwx r22,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x899A3190;
	sub_8991B610(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A3198:
	// li r10,9
	ctx.r10.s64 = 9;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
loc_899A31A0:
	// stwx r22,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b610
	ctx.lr = 0x899A31AC;
	sub_8991B610(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A31B4:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x899a3258
	if (!ctx.cr6.gt) goto loc_899A3258;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A3258:
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x899a3288
	if (ctx.cr6.eq) goto loc_899A3288;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x899a3290
	if (!ctx.cr6.eq) goto loc_899A3290;
	// li r10,6
	ctx.r10.s64 = 6;
	// stwx r22,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x899A3280;
	sub_8991B610(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A3288:
	// li r10,5
	ctx.r10.s64 = 5;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
loc_899A3290:
	// stwx r22,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b610
	ctx.lr = 0x899A329C;
	sub_8991B610(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A32A4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A32AC;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// blt cr6,0x899a2a1c
	if (ctx.cr6.lt) goto loc_899A2A1C;
	// bl 0x899a1da0
	ctx.lr = 0x899A32C4;
	sub_899A1DA0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899a379c
	if (ctx.cr6.eq) goto loc_899A379C;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899a3368
	if (!ctx.cr6.eq) goto loc_899A3368;
	// addi r9,r30,193
	ctx.r9.s64 = ctx.r30.s64 + 193;
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
	// bne cr6,0x899a3368
	if (!ctx.cr6.eq) goto loc_899A3368;
	// addi r8,r30,183
	ctx.r8.s64 = ctx.r30.s64 + 183;
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r9,7
	ctx.r9.s64 = 7;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// stbx r6,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u8);
	// sthx r5,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u16);
	// beq cr6,0x899a3350
	if (ctx.cr6.eq) goto loc_899A3350;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x899a3354
	if (!ctx.cr6.eq) goto loc_899A3354;
	// li r10,8
	ctx.r10.s64 = 8;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// bl 0x8991b610
	ctx.lr = 0x899A3348;
	sub_8991B610(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A3350:
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
loc_899A3354:
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b610
	ctx.lr = 0x899A3360;
	sub_8991B610(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A3368:
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// clrlwi r9,r3,28
	ctx.r9.u64 = ctx.r3.u32 & 0xF;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r30,32
	ctx.r28.s64 = ctx.r30.s64 + 32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r27,r8,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// rotlwi r25,r7,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stwx r27,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r27.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r9,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r7,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u32);
	// bne cr6,0x899a379c
	if (!ctx.cr6.eq) goto loc_899A379C;
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
	// bne cr6,0x899a379c
	if (!ctx.cr6.eq) goto loc_899A379C;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// li r9,4
	ctx.r9.s64 = 4;
	// ori r6,r7,20077
	ctx.r6.u64 = ctx.r7.u64 | 20077;
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
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
	// rlwinm r11,r3,22,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1FFFF;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// beq cr6,0x899a3480
	if (ctx.cr6.eq) goto loc_899A3480;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// li r9,-4
	ctx.r9.s64 = -4;
	// subfic r10,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r10.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
loc_899A3480:
	// lis r8,3
	ctx.r8.s64 = 196608;
	// li r6,116
	ctx.r6.s64 = 116;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// li r4,-12
	ctx.r4.s64 = -12;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8999acc0
	ctx.lr = 0x899A3498;
	sub_8999ACC0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A34A0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A34A8;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x899a2138
	if (ctx.cr6.lt) goto loc_899A2138;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x899a1da0
	ctx.lr = 0x899A34C0;
	sub_899A1DA0(ctx, base);
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
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
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
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A355C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A3564;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x899a2138
	if (ctx.cr6.lt) goto loc_899A2138;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x899a1da0
	ctx.lr = 0x899A357C;
	sub_899A1DA0(ctx, base);
	// mulli r10,r29,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x899a2260
	if (ctx.cr6.gt) goto loc_899A2260;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899a35b4
	if (ctx.cr6.eq) goto loc_899A35B4;
	// bdz 0x899a35ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899A35AC;
	// bdz 0x899a35c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899A35C4;
	// b 0x899a35bc
	goto loc_899A35BC;
loc_899A35AC:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x899a35c8
	goto loc_899A35C8;
loc_899A35B4:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x899a35c8
	goto loc_899A35C8;
loc_899A35BC:
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x899a35c8
	goto loc_899A35C8;
loc_899A35C4:
	// li r11,13
	ctx.r11.s64 = 13;
loc_899A35C8:
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r8,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// bl 0x8991b610
	ctx.lr = 0x899A35E4;
	sub_8991B610(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
loc_899A35EC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899A35F4;
	sub_8991B9F0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x899a2138
	if (ctx.cr6.lt) goto loc_899A2138;
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
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// lhzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// addi r29,r10,9016
	ctx.r29.s64 = ctx.r10.s64 + 9016;
	// lwzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// rlwinm r28,r7,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lwzx r7,r3,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// rlwinm r8,r11,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// lhzx r6,r28,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r29.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lhzx r6,r8,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// mullw r26,r9,r4
	ctx.r26.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// srawi r26,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 8;
	// mullw r25,r10,r6
	ctx.r25.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// srawi r25,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 8;
	// mullw r4,r10,r4
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// subf r10,r26,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r26.u64;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// mulli r6,r10,224
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(224));
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// addi r26,r30,200
	ctx.r26.s64 = ctx.r30.s64 + 200;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// addis r6,r7,-2
	ctx.r6.s64 = ctx.r7.s64 + -131072;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// addi r5,r30,206
	ctx.r5.s64 = ctx.r30.s64 + 206;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r25,r30,200
	ctx.r25.s64 = ctx.r30.s64 + 200;
	// clrlwi r9,r8,28
	ctx.r9.u64 = ctx.r8.u32 & 0xF;
	// lbzx r4,r31,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r30,16
	ctx.r24.s64 = ctx.r30.s64 + 16;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r22,r30,20
	ctx.r22.s64 = ctx.r30.s64 + 20;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r23,r6,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// addi r21,r30,36
	ctx.r21.s64 = ctx.r30.s64 + 36;
	// lhzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// lwzx r5,r3,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stwx r5,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r5.u32);
	// lbzx r5,r3,r26
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r26.u32);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stbx r3,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r3.u8);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r3,r23,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r3.u32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stwx r4,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r4.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r6,128
	ctx.r9.s64 = ctx.r6.s64 + 128;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwinm r7,r9,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// stwx r3,r31,r21
	REX_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r3.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r4,61440
	ctx.r5.u64 = ctx.r4.u64 | 61440;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r9,r7,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r10,r30,66
	ctx.r10.s64 = ctx.r30.s64 + 66;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// sthx r6,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u16);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// srawi r11,r11,24
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 24;
	// addi r9,r11,192
	ctx.r9.s64 = ctx.r11.s64 + 192;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
loc_899A379C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BD3A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899BD3B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// lis r9,-30270
	ctx.r9.s64 = -1983774720;
	// addi r7,r11,9656
	ctx.r7.s64 = ctx.r11.s64 + 9656;
	// lbz r27,4946(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 4946);
	// addi r8,r7,12
	ctx.r8.s64 = ctx.r7.s64 + 12;
	// extsb r6,r27
	ctx.r6.s64 = ctx.r27.s8;
	// lhz r11,27272(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 27272);
	// mulli r6,r6,92
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(92));
	// lwzx r3,r6,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// srawi r4,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addic. r11,r11,-160
	ctx.xer.ca = ctx.r11.u32 > 159;
	ctx.r11.s64 = ctx.r11.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bge 0x899bd3f8
	if (!ctx.cr0.lt) goto loc_899BD3F8;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899BD3F8:
	// li r11,168
	ctx.r11.s64 = 168;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// subfc r8,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r4,r11,r10
	ctx.r4.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// lhz r11,12272(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 12272);
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// addic. r11,r9,-512
	ctx.xer.ca = ctx.r9.u32 > 511;
	ctx.r11.s64 = ctx.r9.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899bd428
	if (!ctx.cr0.lt) goto loc_899BD428;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899BD428:
	// li r10,168
	ctx.r10.s64 = 168;
	// subfc r4,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// eqv r11,r10,r11
	ctx.r11.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// and r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899bd46c
	if (ctx.cr6.eq) goto loc_899BD46C;
	// addi r11,r7,76
	ctx.r11.s64 = ctx.r7.s64 + 76;
	// rlwinm r10,r5,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r4,r9,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// subf r3,r3,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r3.u64;
	// lbzx r5,r6,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// bl 0x8991a9d0
	ctx.lr = 0x899BD464;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd5c4
	if (ctx.cr6.eq) goto loc_899BD5C4;
loc_899BD46C:
	// lis r11,-30270
	ctx.r11.s64 = -1983774720;
	// lhz r28,26864(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 26864);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89934058
	ctx.lr = 0x899BD47C;
	sub_89934058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899bd48c
	if (!ctx.cr6.eq) goto loc_899BD48C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899BD48C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991b880
	ctx.lr = 0x899BD494;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899bd5c4
	if (ctx.cr6.eq) goto loc_899BD5C4;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// lis r9,-30269
	ctx.r9.s64 = -1983709184;
	// addi r30,r10,12800
	ctx.r30.s64 = ctx.r10.s64 + 12800;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r3,-4592(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -4592);
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,162
	ctx.r7.s64 = ctx.r30.s64 + 162;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// lhz r11,-17120(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + -17120);
	// lis r8,-16368
	ctx.r8.s64 = -1072693248;
	// mulli r31,r6,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// sthx r11,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u16);
	// sthx r11,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u16);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stwx r29,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// srawi r6,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 4;
	// ori r4,r8,16
	ctx.r4.u64 = ctx.r8.u64 | 16;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// clrlwi r10,r6,27
	ctx.r10.u64 = ctx.r6.u32 & 0x1F;
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stwx r10,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// bl 0x8991b538
	ctx.lr = 0x899BD518;
	sub_8991B538(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8991c578
	ctx.lr = 0x899BD520;
	sub_8991C578(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// extsb r4,r27
	ctx.r4.s64 = ctx.r27.s8;
	// bl 0x8991c678
	ctx.lr = 0x899BD530;
	sub_8991C678(ctx, base);
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lis r5,-30253
	ctx.r5.s64 = -1982660608;
	// ori r11,r9,20077
	ctx.r11.u64 = ctx.r9.u64 | 20077;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,-9212(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + -9212);
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lis r4,-30253
	ctx.r4.s64 = -1982660608;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r4,12024(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12024);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r11,r8,12345
	ctx.r11.s64 = ctx.r8.s64 + 12345;
	// srawi r8,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r5)
	REX_STORE_U32(ctx.r5.u32 + -9212, ctx.r11.u32);
	// rlwinm r11,r8,4,16,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFF0;
	// srawi r8,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 16;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r8,4,16,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFF0;
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stwx r6,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// bl 0x8991cac0
	ctx.lr = 0x899BD5A4;
	sub_8991CAC0(ctx, base);
	// addi r5,r30,164
	ctx.r5.s64 = ctx.r30.s64 + 164;
	// addi r4,r30,172
	ctx.r4.s64 = ctx.r30.s64 + 172;
	// addi r11,r30,176
	ctx.r11.s64 = ctx.r30.s64 + 176;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// stwx r29,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r29.u32);
	// stwx r29,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u32);
	// stwx r29,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u32);
	// stwx r29,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
loc_899BD5C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BE6D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899BE6D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8991b880
	ctx.lr = 0x899BE6E8;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899be6f8
	if (!ctx.cr6.eq) goto loc_899BE6F8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899BE6F8:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,-30275
	ctx.r9.s64 = -1984102400;
	// lis r8,-30270
	ctx.r8.s64 = -1983774720;
	// addi r31,r9,12800
	ctx.r31.s64 = ctx.r9.s64 + 12800;
	// lis r7,-16208
	ctx.r7.s64 = -1062207488;
	// lhz r3,-4592(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -4592);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// lhz r8,26864(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 26864);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// mulli r27,r4,208
	ctx.r27.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// stwx r8,r27,r6
	REX_STORE_U32(ctx.r27.u32 + ctx.r6.u32, ctx.r8.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r7,r7,260
	ctx.r7.u64 = ctx.r7.u64 | 260;
	// stwx r30,r27,r5
	REX_STORE_U32(ctx.r27.u32 + ctx.r5.u32, ctx.r30.u32);
	// addi r29,r10,-4592
	ctx.r29.s64 = ctx.r10.s64 + -4592;
	// stwx r7,r27,r31
	REX_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r7.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stwx r30,r27,r9
	REX_STORE_U32(ctx.r27.u32 + ctx.r9.u32, ctx.r30.u32);
	// bl 0x8991b538
	ctx.lr = 0x899BE74C;
	sub_8991B538(ctx, base);
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// lis r4,352
	ctx.r4.s64 = 23068672;
	// rlwinm r11,r28,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r4,r27,r6
	REX_STORE_U32(ctx.r27.u32 + ctx.r6.u32, ctx.r4.u32);
	// stwx r11,r27,r5
	REX_STORE_U32(ctx.r27.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8991c578
	ctx.lr = 0x899BE76C;
	sub_8991C578(ctx, base);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// ori r7,r9,20077
	ctx.r7.u64 = ctx.r9.u64 | 20077;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// addi r8,r31,158
	ctx.r8.s64 = ctx.r31.s64 + 158;
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// stwx r30,r27,r5
	REX_STORE_U32(ctx.r27.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r30,r27,r4
	REX_STORE_U32(ctx.r27.u32 + ctx.r4.u32, ctx.r30.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r9,r31,182
	ctx.r9.s64 = ctx.r31.s64 + 182;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// sthx r11,r27,r8
	REX_STORE_U16(ctx.r27.u32 + ctx.r8.u32, ctx.r11.u16);
	// li r7,116
	ctx.r7.s64 = 116;
	// clrlwi r5,r10,17
	ctx.r5.u64 = ctx.r10.u32 & 0x7FFF;
	// stbx r7,r27,r6
	REX_STORE_U8(ctx.r27.u32 + ctx.r6.u32, ctx.r7.u8);
	// lis r6,10
	ctx.r6.s64 = 655360;
	// mulli r4,r5,90
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(90));
	// rlwinm r11,r4,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1FFFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// stbx r11,r27,r9
	REX_STORE_U8(ctx.r27.u32 + ctx.r9.u32, ctx.r11.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x899c3d90
	ctx.lr = 0x899BE7E4;
	sub_899C3D90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BF118) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899BF120;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30225
	ctx.r11.s64 = -1980825600;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,28760
	ctx.r30.s64 = ctx.r11.s64 + 28760;
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r31,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// addi r8,r30,3120
	ctx.r8.s64 = ctx.r30.s64 + 3120;
	// li r10,208
	ctx.r10.s64 = 208;
	// sth r11,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
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
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x89934b48
	ctx.lr = 0x899BF168;
	sub_89934B48(ctx, base);
	// addi r11,r30,3120
	ctx.r11.s64 = ctx.r30.s64 + 3120;
	// li r7,6
	ctx.r7.s64 = 6;
	// stb r31,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// addi r6,r11,594
	ctx.r6.s64 = ctx.r11.s64 + 594;
	// sth r7,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r7.u16);
	// li r10,216
	ctx.r10.s64 = 216;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,-20
	ctx.r9.s64 = -20;
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,66
	ctx.r3.s64 = 66;
	// bl 0x89934b48
	ctx.lr = 0x899BF1A4;
	sub_89934B48(ctx, base);
	// addi r11,r30,3120
	ctx.r11.s64 = ctx.r30.s64 + 3120;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,1782
	ctx.r4.s64 = ctx.r11.s64 + 1782;
	// li r3,144
	ctx.r3.s64 = 144;
	// sth r5,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r5.u16);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r10,176
	ctx.r10.s64 = 176;
	// stb r3,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// li r9,-16
	ctx.r9.s64 = -16;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x89934b48
	ctx.lr = 0x899BF1E4;
	sub_89934B48(ctx, base);
	// addi r11,r30,3120
	ctx.r11.s64 = ctx.r30.s64 + 3120;
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r31,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// addi r8,r11,1836
	ctx.r8.s64 = ctx.r11.s64 + 1836;
	// sth r9,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// li r10,128
	ctx.r10.s64 = 128;
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
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x89934b48
	ctx.lr = 0x899BF220;
	sub_89934B48(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r29,r11,23296
	ctx.r29.s64 = ctx.r11.s64 + 23296;
loc_899BF228:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,3120
	ctx.r9.s64 = ctx.r30.s64 + 3120;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mulli r10,r31,594
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(594));
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r31,780
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(780));
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r8,r29
	ctx.r6.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935b08
	ctx.lr = 0x899BF258;
	sub_89935B08(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x899bf228
	if (ctx.cr6.lt) goto loc_899BF228;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899BFC20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899BFC28;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-27744
	ctx.r31.s64 = ctx.r11.s64 + -27744;
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// addi r8,r31,-1192
	ctx.r8.s64 = ctx.r31.s64 + -1192;
	// li r10,208
	ctx.r10.s64 = 208;
	// sth r11,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
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
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,66
	ctx.r3.s64 = 66;
	// bl 0x89934b48
	ctx.lr = 0x899BFC70;
	sub_89934B48(ctx, base);
	// addi r7,r31,2280
	ctx.r7.s64 = ctx.r31.s64 + 2280;
	// li r6,6
	ctx.r6.s64 = 6;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r10,216
	ctx.r10.s64 = 216;
	// sth r6,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r6.u16);
	// li r9,-20
	ctx.r9.s64 = -20;
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,66
	ctx.r3.s64 = 66;
	// bl 0x89934b48
	ctx.lr = 0x899BFCA8;
	sub_89934B48(ctx, base);
	// addi r11,r31,2280
	ctx.r11.s64 = ctx.r31.s64 + 2280;
	// li r5,-30714
	ctx.r5.s64 = -30714;
	// addi r4,r11,1188
	ctx.r4.s64 = ctx.r11.s64 + 1188;
	// li r3,64
	ctx.r3.s64 = 64;
	// sth r5,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r5.u16);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r3,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// li r9,-16
	ctx.r9.s64 = -16;
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x89934b48
	ctx.lr = 0x899BFCE8;
	sub_89934B48(ctx, base);
	// addi r11,r31,2280
	ctx.r11.s64 = ctx.r31.s64 + 2280;
	// li r26,8
	ctx.r26.s64 = 8;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// addi r11,r11,1584
	ctx.r11.s64 = ctx.r11.s64 + 1584;
	// li r10,24
	ctx.r10.s64 = 24;
	// sth r26,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r26.u16);
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934b48
	ctx.lr = 0x899BFD24;
	sub_89934B48(ctx, base);
	// addi r11,r31,2280
	ctx.r11.s64 = ctx.r31.s64 + 2280;
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// addi r7,r11,1728
	ctx.r7.s64 = ctx.r11.s64 + 1728;
	// sth r26,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r26.u16);
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x89934b48
	ctx.lr = 0x899BFD5C;
	sub_89934B48(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r27,r11,23180
	ctx.r27.s64 = ctx.r11.s64 + 23180;
loc_899BFD64:
	// addi r10,r31,-1192
	ctx.r10.s64 = ctx.r31.s64 + -1192;
	// addi r11,r31,720
	ctx.r11.s64 = ctx.r31.s64 + 720;
	// mulli r28,r30,594
	ctx.r28.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(594));
	// mulli r29,r30,780
	ctx.r29.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(780));
	// addi r6,r27,-80
	ctx.r6.s64 = ctx.r27.s64 + -80;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935b08
	ctx.lr = 0x899BFD8C;
	sub_89935B08(ctx, base);
	// addi r10,r31,2280
	ctx.r10.s64 = ctx.r31.s64 + 2280;
	// addi r11,r31,-3536
	ctx.r11.s64 = ctx.r31.s64 + -3536;
	// addi r6,r27,-60
	ctx.r6.s64 = ctx.r27.s64 + -60;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935b08
	ctx.lr = 0x899BFDAC;
	sub_89935B08(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x899bfd64
	if (ctx.cr6.lt) goto loc_899BFD64;
	// addi r10,r31,2280
	ctx.r10.s64 = ctx.r31.s64 + 2280;
	// addi r11,r31,-3536
	ctx.r11.s64 = ctx.r31.s64 + -3536;
	// addi r6,r27,-40
	ctx.r6.s64 = ctx.r27.s64 + -40;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,1188
	ctx.r5.s64 = ctx.r10.s64 + 1188;
	// addi r4,r11,1560
	ctx.r4.s64 = ctx.r11.s64 + 1560;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x89935b08
	ctx.lr = 0x899BFDE0;
	sub_89935B08(ctx, base);
	// addi r11,r31,400
	ctx.r11.s64 = ctx.r31.s64 + 400;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r26,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
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
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x899BFE10;
	sub_89934FB8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r31,400
	ctx.r5.s64 = ctx.r31.s64 + 400;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89935688
	ctx.lr = 0x899BFE28;
	sub_89935688(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C1690) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899C1698;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-18472
	ctx.r30.s64 = ctx.r11.s64 + -18472;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r31,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// addi r8,r30,1200
	ctx.r8.s64 = ctx.r30.s64 + 1200;
	// li r10,224
	ctx.r10.s64 = 224;
	// sth r11,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,-20
	ctx.r9.s64 = -20;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x89934b48
	ctx.lr = 0x899C16E0;
	sub_89934B48(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r27,r11,22468
	ctx.r27.s64 = ctx.r11.s64 + 22468;
loc_899C16E8:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r30,1200
	ctx.r10.s64 = ctx.r30.s64 + 1200;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mulli r28,r31,60
	ctx.r28.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(60));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x89935610
	ctx.lr = 0x899C1718;
	sub_89935610(ctx, base);
	// addi r11,r30,600
	ctx.r11.s64 = ctx.r30.s64 + 600;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r3,16388
	ctx.r3.s64 = 16388;
	// bl 0x89935610
	ctx.lr = 0x899C1734;
	sub_89935610(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// blt cr6,0x899c16e8
	if (ctx.cr6.lt) goto loc_899C16E8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C1C08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899C1C10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,12272(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12272);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// bl 0x8991b880
	ctx.lr = 0x899C1C2C;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c1c3c
	if (!ctx.cr6.eq) goto loc_899C1C3C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
loc_899C1C3C:
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,-30294
	ctx.r8.s64 = -1985347584;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r8,2200
	ctx.r29.s64 = ctx.r8.s64 + 2200;
	// lhz r30,-4592(r9)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r9.u32 + -4592);
	// rlwinm r26,r7,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r6,-30275
	ctx.r6.s64 = -1984102400;
	// lis r5,-30270
	ctx.r5.s64 = -1983774720;
	// addi r31,r6,12800
	ctx.r31.s64 = ctx.r6.s64 + 12800;
	// extsh r4,r30
	ctx.r4.s64 = ctx.r30.s16;
	// lwzx r10,r26,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mulli r25,r4,208
	ctx.r25.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(208));
	// lhz r5,26864(r5)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + 26864);
	// stwx r5,r25,r3
	REX_STORE_U32(ctx.r25.u32 + ctx.r3.u32, ctx.r5.u32);
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// lis r6,-16208
	ctx.r6.s64 = -1062207488;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r4,r6,260
	ctx.r4.u64 = ctx.r6.u64 | 260;
	// stwx r10,r25,r9
	REX_STORE_U32(ctx.r25.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r10,r25,r8
	REX_STORE_U32(ctx.r25.u32 + ctx.r8.u32, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r4,r25,r31
	REX_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r4.u32);
	// stwx r28,r25,r7
	REX_STORE_U32(ctx.r25.u32 + ctx.r7.u32, ctx.r28.u32);
	// bl 0x8991b538
	ctx.lr = 0x899C1CB0;
	sub_8991B538(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991c578
	ctx.lr = 0x899C1CB8;
	sub_8991C578(ctx, base);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// addi r8,r31,158
	ctx.r8.s64 = ctx.r31.s64 + 158;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// lhzx r7,r26,r3
	ctx.r7.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r3.u32);
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// lwzx r5,r26,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// addi r30,r31,168
	ctx.r30.s64 = ctx.r31.s64 + 168;
	// sthx r28,r25,r8
	REX_STORE_U16(ctx.r25.u32 + ctx.r8.u32, ctx.r28.u16);
	// addi r29,r31,204
	ctx.r29.s64 = ctx.r31.s64 + 204;
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// rotlwi r3,r7,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// li r11,116
	ctx.r11.s64 = 116;
	// stwx r5,r25,r6
	REX_STORE_U32(ctx.r25.u32 + ctx.r6.u32, ctx.r5.u32);
	// rlwinm r8,r27,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// stwx r3,r25,r10
	REX_STORE_U32(ctx.r25.u32 + ctx.r10.u32, ctx.r3.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stwx r28,r25,r4
	REX_STORE_U32(ctx.r25.u32 + ctx.r4.u32, ctx.r28.u32);
	// stwx r8,r25,r9
	REX_STORE_U32(ctx.r25.u32 + ctx.r9.u32, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r7,r25,r30
	REX_STORE_U32(ctx.r25.u32 + ctx.r30.u32, ctx.r7.u32);
	// stbx r11,r25,r29
	REX_STORE_U8(ctx.r25.u32 + ctx.r29.u32, ctx.r11.u8);
	// stbx r11,r25,r31
	REX_STORE_U8(ctx.r25.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C2598) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899C25A0;
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
	// addi r28,r30,184
	ctx.r28.s64 = ctx.r30.s64 + 184;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lbzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x899c25f0
	if (ctx.cr6.eq) goto loc_899C25F0;
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
	// blt cr6,0x899c2754
	if (ctx.cr6.lt) goto loc_899C2754;
	// stbx r26,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r26.u8);
	// b 0x899c262c
	goto loc_899C262C;
loc_899C25F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991bc58
	ctx.lr = 0x899C25F8;
	sub_8991BC58(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899c2754
	if (ctx.cr6.eq) goto loc_899C2754;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C2614;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c2754
	if (ctx.cr6.eq) goto loc_899C2754;
	// lis r11,-30274
	ctx.r11.s64 = -1984036864;
	// lbz r11,587(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 587);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
loc_899C262C:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// ori r4,r9,20480
	ctx.r4.u64 = ctx.r9.u64 | 20480;
	// addi r9,r30,200
	ctx.r9.s64 = ctx.r30.s64 + 200;
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r10,-30320
	ctx.r10.s64 = -1987051520;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r10,9016
	ctx.r7.s64 = ctx.r10.s64 + 9016;
	// lwzx r10,r31,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// addi r11,r5,128
	ctx.r11.s64 = ctx.r5.s64 + 128;
	// lwzx r8,r31,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r3,r5,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r9,r11,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r6,r3,r7
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// lhzx r3,r9,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r4,r7,r4
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// rlwinm r3,r6,15,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0xFFFF8000;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// addis r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 65536;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899C26B0;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c26cc
	if (ctx.cr6.eq) goto loc_899C26CC;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899C26C4;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c26e0
	if (ctx.cr6.eq) goto loc_899C26E0;
loc_899C26CC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stbx r26,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r26.u8);
	// bl 0x89932a38
	ctx.lr = 0x899C26D8;
	sub_89932A38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899C26E0:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ori r8,r9,20077
	ctx.r8.u64 = ctx.r9.u64 | 20077;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lwz r11,-9212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9212);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r10)
	REX_STORE_U32(ctx.r10.u32 + -9212, ctx.r11.u32);
	// srawi r11,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 16;
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r11,r8,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1FFFF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// bl 0x899cc3d0
	ctx.lr = 0x899C2734;
	sub_899CC3D0(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r5,r11,255
	ctx.r5.s64 = ctx.r11.s64 + 255;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stbx r4,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r4.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x899c2754
	if (!ctx.cr6.eq) goto loc_899C2754;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C2754;
	sub_89932A38(ctx, base);
loc_899C2754:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C33D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899C33D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8991bc58
	ctx.lr = 0x899C33E4;
	sub_8991BC58(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899c34e0
	if (ctx.cr6.eq) goto loc_899C34E0;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C3400;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c34e0
	if (ctx.cr6.eq) goto loc_899C34E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899C3410;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c34e0
	if (ctx.cr6.eq) goto loc_899C34E0;
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
	// lis r7,-30320
	ctx.r7.s64 = -1987051520;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r5,r7,9016
	ctx.r5.s64 = ctx.r7.s64 + 9016;
	// lhzx r31,r9,r8
	ctx.r31.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// ori r3,r6,27648
	ctx.r3.u64 = ctx.r6.u64 | 27648;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// rlwinm r7,r31,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x3FE;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// lwzx r10,r9,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// rlwinm r6,r6,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// ori r30,r8,40960
	ctx.r30.u64 = ctx.r8.u64 | 40960;
	// lhzx r8,r7,r5
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// addi r7,r11,200
	ctx.r7.s64 = ctx.r11.s64 + 200;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lwzx r8,r9,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lhzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// mullw r4,r11,r30
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lbzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addis r30,r7,1
	ctx.r30.s64 = ctx.r7.s64 + 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991a9d0
	ctx.lr = 0x899C34A4;
	sub_8991A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c34d8
	if (ctx.cr6.eq) goto loc_899C34D8;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8991a8f0
	ctx.lr = 0x899C34B8;
	sub_8991A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c34d8
	if (!ctx.cr6.eq) goto loc_899C34D8;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899cda00
	ctx.lr = 0x899C34D8;
	sub_899CDA00(ctx, base);
loc_899C34D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C34E0;
	sub_89932A38(ctx, base);
loc_899C34E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C3950) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899C3958;
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
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x899c39c0
	if (ctx.cr6.lt) goto loc_899C39C0;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x899c39c0
	if (ctx.cr6.gt) goto loc_899C39C0;
	// bl 0x8991b9f0
	ctx.lr = 0x899C398C;
	sub_8991B9F0(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x899c3a48
	if (ctx.cr6.lt) goto loc_899C3A48;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x899c38c8
	ctx.lr = 0x899C39A0;
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899C39C0:
	// addi r27,r30,207
	ctx.r27.s64 = ctx.r30.s64 + 207;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// li r3,16
	ctx.r3.s64 = 16;
	// lbzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r4,r31,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x899d8e20
	ctx.lr = 0x899C39E0;
	sub_899D8E20(ctx, base);
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwzx r5,r31,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r4,14
	ctx.r4.s64 = 14;
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
	// beq cr6,0x899c3a30
	if (ctx.cr6.eq) goto loc_899C3A30;
	// bl 0x899d4440
	ctx.lr = 0x899C3A2C;
	sub_899D4440(ctx, base);
	// b 0x899c3a34
	goto loc_899C3A34;
loc_899C3A30:
	// bl 0x899d4e08
	ctx.lr = 0x899C3A34;
	sub_899D4E08(ctx, base);
loc_899C3A34:
	// li r3,2
	ctx.r3.s64 = 2;
	// lbzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r4,r31,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x8992e698
	ctx.lr = 0x899C3A48;
	sub_8992E698(ctx, base);
loc_899C3A48:
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

DEFINE_REX_FUNC(sub_899C3FD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899C3FD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x8991b9f0
	ctx.lr = 0x899C3FE4;
	sub_8991B9F0(ctx, base);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x899c4014
	if (!ctx.cr6.lt) goto loc_899C4014;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lis r10,-30275
	ctx.r10.s64 = -1984102400;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r8,r10,12800
	ctx.r8.s64 = ctx.r10.s64 + 12800;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
loc_899C4014:
	// lis r11,-30275
	ctx.r11.s64 = -1984102400;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// addi r11,r11,12800
	ctx.r11.s64 = ctx.r11.s64 + 12800;
	// mulli r10,r10,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// mulli r4,r9,208
	ctx.r4.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// addi r6,r11,56
	ctx.r6.s64 = ctx.r11.s64 + 56;
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// clrlwi r9,r5,28
	ctx.r9.u64 = ctx.r5.u32 & 0xF;
	// lwzx r7,r4,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// lwzx r6,r10,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r29,r11,52
	ctx.r29.s64 = ctx.r11.s64 + 52;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r6,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r7,r4,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// stwx r7,r10,r29
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r7.u32);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r8,r7,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// stwx r8,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C4F98) {
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
	// li r9,-28924
	ctx.r9.s64 = -28924;
	// addi r31,r11,6256
	ctx.r31.s64 = ctx.r11.s64 + 6256;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,192
	ctx.r10.s64 = 192;
	// addi r7,r31,-224
	ctx.r7.s64 = ctx.r31.s64 + -224;
	// li r9,128
	ctx.r9.s64 = 128;
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
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x89934fb8
	ctx.lr = 0x899C4FE8;
	sub_89934FB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r3,r31,-120
	ctx.r3.s64 = ctx.r31.s64 + -120;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r11,3484
	ctx.r4.s64 = ctx.r11.s64 + 3484;
loc_899C5000:
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r9,r31,-224
	ctx.r9.s64 = ctx.r31.s64 + -224;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899c5048
	if (!ctx.cr6.gt) goto loc_899C5048;
	// rlwinm r7,r10,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xC0000000;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_899C5024:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899c5024
	if (ctx.cr6.lt) goto loc_899C5024;
loc_899C5048:
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r10,r31,-224
	ctx.r10.s64 = ctx.r31.s64 + -224;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// ori r9,r9,6
	ctx.r9.u64 = ctx.r9.u64 | 6;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899c509c
	if (!ctx.cr6.gt) goto loc_899C509C;
	// rlwinm r7,r9,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xC0000000;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_899C5078:
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
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899c5078
	if (ctx.cr6.lt) goto loc_899C5078;
loc_899C509C:
	// addi r10,r31,-120
	ctx.r10.s64 = ctx.r31.s64 + -120;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// addi r11,r10,120
	ctx.r11.s64 = ctx.r10.s64 + 120;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// addi r6,r6,16384
	ctx.r6.s64 = ctx.r6.s64 + 16384;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899c5000
	if (ctx.cr6.lt) goto loc_899C5000;
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

DEFINE_REX_FUNC(sub_899C5C68) {
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
	// addi r8,r31,60
	ctx.r8.s64 = ctx.r31.s64 + 60;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// li r9,116
	ctx.r9.s64 = 116;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwzx r6,r30,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lwzx r5,r30,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// bl 0x899d5650
	ctx.lr = 0x899C5CC0;
	sub_899D5650(ctx, base);
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

DEFINE_REX_FUNC(sub_899C5F38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899C5F40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30224
	ctx.r11.s64 = -1980760064;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r31,r11,15152
	ctx.r31.s64 = ctx.r11.s64 + 15152;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r11,r31,616
	ctx.r11.s64 = ctx.r31.s64 + 616;
	// li r9,152
	ctx.r9.s64 = 152;
	// li r8,-28
	ctx.r8.s64 = -28;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-52
	ctx.r7.s64 = -52;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899C5F80;
	sub_89934FB8(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r5,r31,616
	ctx.r5.s64 = ctx.r31.s64 + 616;
	// addi r29,r11,19876
	ctx.r29.s64 = ctx.r11.s64 + 19876;
	// addi r4,r31,408
	ctx.r4.s64 = ctx.r31.s64 + 408;
	// addi r6,r29,-40
	ctx.r6.s64 = ctx.r29.s64 + -40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935688
	ctx.lr = 0x899C5FA0;
	sub_89935688(ctx, base);
	// addi r8,r31,-160
	ctx.r8.s64 = ctx.r31.s64 + -160;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,200
	ctx.r9.s64 = 200;
	// li r8,-20
	ctx.r8.s64 = -20;
	// li r7,-28
	ctx.r7.s64 = -28;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x89934fb8
	ctx.lr = 0x899C5FCC;
	sub_89934FB8(ctx, base);
	// addi r6,r29,-20
	ctx.r6.s64 = ctx.r29.s64 + -20;
	// addi r5,r31,-160
	ctx.r5.s64 = ctx.r31.s64 + -160;
	// addi r4,r31,-528
	ctx.r4.s64 = ctx.r31.s64 + -528;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89935688
	ctx.lr = 0x899C5FE4;
	sub_89935688(ctx, base);
	// addi r7,r31,-320
	ctx.r7.s64 = ctx.r31.s64 + -320;
	// li r30,8
	ctx.r30.s64 = 8;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
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
	ctx.lr = 0x899C6018;
	sub_89934FB8(ctx, base);
	// addi r11,r31,-320
	ctx.r11.s64 = ctx.r31.s64 + -320;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-24
	ctx.r7.s64 = -24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89934fb8
	ctx.lr = 0x899C604C;
	sub_89934FB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_899C6054:
	// mulli r10,r30,204
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(204));
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwimi r3,r11,14,16,17
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF3FFF);
	// addi r5,r31,-320
	ctx.r5.s64 = ctx.r31.s64 + -320;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bl 0x89935688
	ctx.lr = 0x899C6074;
	sub_89935688(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x899c6054
	if (ctx.cr6.lt) goto loc_899C6054;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C6B58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899C6B60;
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
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x899c6b98
	if (ctx.cr6.lt) goto loc_899C6B98;
	// bne cr6,0x899c6e34
	if (!ctx.cr6.eq) goto loc_899C6E34;
	// bl 0x899c3fd0
	ctx.lr = 0x899C6B90;
	sub_899C3FD0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899C6B98:
	// addi r6,r30,188
	ctx.r6.s64 = ctx.r30.s64 + 188;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x899c6c78
	if (ctx.cr6.lt) goto loc_899C6C78;
	// beq cr6,0x899c6bf0
	if (ctx.cr6.eq) goto loc_899C6BF0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x899c6c94
	if (!ctx.cr6.lt) goto loc_899C6C94;
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
	// bne cr6,0x899c6c94
	if (!ctx.cr6.eq) goto loc_899C6C94;
	// b 0x899c6c8c
	goto loc_899C6C8C;
loc_899C6BF0:
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x899c6c5c
	if (ctx.cr6.eq) goto loc_899C6C5C;
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
	// b 0x899c6c94
	goto loc_899C6C94;
loc_899C6C5C:
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
	// b 0x899c6c94
	goto loc_899C6C94;
loc_899C6C78:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r10,288
	ctx.r10.s64 = 18874368;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x899c6c94
	if (!ctx.cr6.lt) goto loc_899C6C94;
loc_899C6C8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
loc_899C6C94:
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r29,r11,9016
	ctx.r29.s64 = ctx.r11.s64 + 9016;
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// lhzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// lwzx r8,r31,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r10,r11,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lwzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r3,r3,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// lhzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// lhzx r6,r3,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r29.u32);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// mullw r6,r3,r11
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r8,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u32);
	// lhzx r6,r31,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// addic. r11,r4,-160
	ctx.xer.ca = ctx.r4.u32 > 159;
	ctx.r11.s64 = ctx.r4.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r7,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r7.u32);
	// bge 0x899c6d24
	if (!ctx.cr0.lt) goto loc_899C6D24;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C6D24:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// ble cr6,0x899c6d38
	if (!ctx.cr6.gt) goto loc_899C6D38;
loc_899C6D2C:
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899C6D38:
	// lhzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r11,r10,-512
	ctx.xer.ca = ctx.r10.u32 > 511;
	ctx.r11.s64 = ctx.r10.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899c6d4c
	if (!ctx.cr0.lt) goto loc_899C6D4C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899C6D4C:
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// bgt cr6,0x899c6d2c
	if (ctx.cr6.gt) goto loc_899C6D2C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932b18
	ctx.lr = 0x899C6D5C;
	sub_89932B18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932d30
	ctx.lr = 0x899C6D68;
	sub_89932D30(ctx, base);
	// addi r26,r30,158
	ctx.r26.s64 = ctx.r30.s64 + 158;
	// lwzx r10,r31,r24
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lhzx r6,r31,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// stwx r7,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r7.u32);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// srawi r4,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 4;
	// clrlwi r11,r4,27
	ctx.r11.u64 = ctx.r4.u32 & 0x1F;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8991b610
	ctx.lr = 0x899C6DA0;
	sub_8991B610(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991db50
	ctx.lr = 0x899C6DB0;
	sub_8991DB50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c6e34
	if (ctx.cr6.eq) goto loc_899C6E34;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8991aae8
	ctx.lr = 0x899C6DC0;
	sub_8991AAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899c6e34
	if (ctx.cr6.eq) goto loc_899C6E34;
	// lhzx r6,r31,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r10,r6,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r11,r10,r29
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhzx r4,r4,r29
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r29.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// rlwinm r4,r10,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 262144;
	// bl 0x899cc3d0
	ctx.lr = 0x899C6E2C;
	sub_899CC3D0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89932a38
	ctx.lr = 0x899C6E34;
	sub_89932A38(ctx, base);
loc_899C6E34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899C8F60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899C8F68;
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
	ctx.lr = 0x899C8F78;
	sub_8991B880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899c8f88
	if (!ctx.cr6.eq) goto loc_899C8F88;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899C8F88:
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
	ctx.lr = 0x899C8FD8;
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
	ctx.lr = 0x899C8FF8;
	sub_8991C578(ctx, base);
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// addi r4,r31,158
	ctx.r4.s64 = ctx.r31.s64 + 158;
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// addi r9,r31,200
	ctx.r9.s64 = ctx.r31.s64 + 200;
	// li r11,116
	ctx.r11.s64 = 116;
	// lis r8,-3
	ctx.r8.s64 = -196608;
	// stwx r29,r27,r5
	REX_STORE_U32(ctx.r27.u32 + ctx.r5.u32, ctx.r29.u32);
	// li r7,256
	ctx.r7.s64 = 256;
	// stwx r8,r27,r6
	REX_STORE_U32(ctx.r27.u32 + ctx.r6.u32, ctx.r8.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// sthx r7,r27,r4
	REX_STORE_U16(ctx.r27.u32 + ctx.r4.u32, ctx.r7.u16);
	// stbx r11,r27,r10
	REX_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r27,r9
	REX_STORE_U8(ctx.r27.u32 + ctx.r9.u32, ctx.r11.u8);
	// bl 0x899340e8
	ctx.lr = 0x899C9034;
	sub_899340E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CA288) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899CA290;
	__savegprlr_29(ctx, base);
	// stwu r1,-1376(r1)
	ea = -1376 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// sth r9,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// li r10,208
	ctx.r10.s64 = 208;
	// li r9,-24
	ctx.r9.s64 = -24;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-24
	ctx.r8.s64 = -24;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x89934b48
	ctx.lr = 0x899CA2D0;
	sub_89934B48(ctx, base);
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// lis r10,-30224
	ctx.r10.s64 = -1980760064;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,17156
	ctx.r29.s64 = ctx.r11.s64 + 17156;
	// addi r30,r10,28712
	ctx.r30.s64 = ctx.r10.s64 + 28712;
loc_899CA2E4:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_899CA2F0:
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
loc_899CA334:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x899ca334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899CA334;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x899ca2f0
	if (ctx.cr6.lt) goto loc_899CA2F0;
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
	ctx.lr = 0x899CA378;
	sub_89935B08(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x899ca2e4
	if (ctx.cr6.lt) goto loc_899CA2E4;
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CB2C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899CB2D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30294
	ctx.r11.s64 = -1985347584;
	// lis r8,-30223
	ctx.r8.s64 = -1980694528;
	// addi r9,r11,2908
	ctx.r9.s64 = ctx.r11.s64 + 2908;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r8,-25568
	ctx.r29.s64 = ctx.r8.s64 + -25568;
	// lbz r6,2908(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2908);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x899cb368
	if (ctx.cr6.eq) goto loc_899CB368;
	// addi r31,r9,-1
	ctx.r31.s64 = ctx.r9.s64 + -1;
loc_899CB2FC:
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// lbz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// neg r7,r11
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lbz r10,3(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// add r4,r30,r8
	ctx.r4.u64 = ctx.r30.u64 + ctx.r8.u64;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r29,-1280
	ctx.r7.s64 = ctx.r29.s64 + -1280;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x899CB350;
	sub_89934FB8(ctx, base);
	// lbz r6,1(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x899cb2fc
	if (!ctx.cr6.eq) goto loc_899CB2FC;
loc_899CB368:
	// li r31,0
	ctx.r31.s64 = 0;
loc_899CB36C:
	// srawi r11,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 2;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r29,-1280
	ctx.r9.s64 = ctx.r29.s64 + -1280;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r11,r31,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(108));
	// addi r6,r29,1728
	ctx.r6.s64 = ctx.r29.s64 + 1728;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x89935688
	ctx.lr = 0x899CB3AC;
	sub_89935688(ctx, base);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// blt cr6,0x899cb36c
	if (ctx.cr6.lt) goto loc_899CB36C;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// addi r3,r29,1728
	ctx.r3.s64 = ctx.r29.s64 + 1728;
	// addi r4,r11,16388
	ctx.r4.s64 = ctx.r11.s64 + 16388;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x899cbe38
	ctx.lr = 0x899CB3D4;
	sub_899CBE38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CB588) {
	REX_FUNC_PROLOGUE();
	// lbz r9,138(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 138);
	// lwz r8,52(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// lwz r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r6,138(r3)
	REX_STORE_U8(ctx.r3.u32 + 138, ctx.r6.u8);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x899cb608
	if (!ctx.cr6.eq) goto loc_899CB608;
	// addis r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -10485760;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cb5d4
	if (!ctx.cr0.lt) goto loc_899CB5D4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CB5D4:
	// lis r9,176
	ctx.r9.s64 = 11534336;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x899cb534
	if (ctx.cr6.gt) {
		sub_899cb534(ctx, base);
		return;
	}
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
	// bge 0x899cb5fc
	if (!ctx.cr0.lt) goto loc_899CB5FC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CB5FC:
	// lis r10,136
	ctx.r10.s64 = 8912896;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899cb534
	if (ctx.cr6.gt) {
		sub_899cb534(ctx, base);
		return;
	}
loc_899CB608:
	// lhz r11,118(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 118);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lhz r8,132(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 132);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// clrlwi r11,r7,29
	ctx.r11.u64 = ctx.r7.u32 & 0x7;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
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
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// beq cr6,0x899cb4b0
	if (ctx.cr6.eq) {
		sub_899cb4b0(ctx, base);
		return;
	}
	// lis r4,64
	ctx.r4.s64 = 4194304;
	// ori r4,r4,49216
	ctx.r4.u64 = ctx.r4.u64 | 49216;
	// b 0x899cd148
	sub_899CD148(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CBA10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x899cba5c
	if (ctx.cr6.lt) goto loc_899CBA5C;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899cba5c
	if (ctx.cr6.gt) goto loc_899CBA5C;
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
	// bge 0x899cba44
	if (!ctx.cr0.lt) goto loc_899CBA44;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CBA44:
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
	// b 0x899cba60
	goto loc_899CBA60;
loc_899CBA5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899CBA60:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899cba74
	if (!ctx.cr6.eq) goto loc_899CBA74;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_899CBA74:
	// b 0x899cb940
	sub_899CB940(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CBA78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9fc
	ctx.lr = 0x899CBA80;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r31,0(r8)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r27,r8,2
	ctx.r27.s64 = ctx.r8.s64 + 2;
	// bl 0x899cb880
	ctx.lr = 0x899CBAA4;
	sub_899CB880(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x899cbabc
	if (!ctx.cr6.lt) goto loc_899CBABC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
loc_899CBABC:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r9,-30253
	ctx.r9.s64 = -1982660608;
	// extsh r23,r31
	ctx.r23.s64 = ctx.r31.s16;
	// addi r10,r11,-8688
	ctx.r10.s64 = ctx.r11.s64 + -8688;
	// addi r30,r9,7904
	ctx.r30.s64 = ctx.r9.s64 + 7904;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x899cbb60
	if (!ctx.cr6.gt) goto loc_899CBB60;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// extsh r24,r29
	ctx.r24.s64 = ctx.r29.s16;
	// addi r29,r27,-2
	ctx.r29.s64 = ctx.r27.s64 + -2;
	// srawi r28,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r26.s32 >> 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,9016
	ctx.r27.s64 = ctx.r11.s64 + 9016;
loc_899CBAF0:
	// lhzu r11,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r9,r6,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r8,r6,128
	ctx.r8.s64 = ctx.r6.s64 + 128;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r11,r8,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// lhzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// mullw r11,r8,r28
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// bl 0x899cb6e0
	ctx.lr = 0x899CBB44;
	sub_899CB6E0(ctx, base);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r23
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x899cbaf0
	if (ctx.cr6.lt) goto loc_899CBAF0;
loc_899CBB60:
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-30305
	ctx.r10.s64 = -1986068480;
	// add r9,r25,r11
	ctx.r9.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r11,r10,16744
	ctx.r11.s64 = ctx.r10.s64 + 16744;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbzx r3,r8,r7
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x89936360
	ctx.lr = 0x899CBB80;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x899dba4c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CC518) {
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
	// blt cr6,0x899cc574
	if (ctx.cr6.lt) goto loc_899CC574;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899cc574
	if (ctx.cr6.gt) goto loc_899CC574;
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
	// bge 0x899cc55c
	if (!ctx.cr0.lt) goto loc_899CC55C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CC55C:
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
	// b 0x899cc578
	goto loc_899CC578;
loc_899CC574:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899CC578:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899cc59c
	if (!ctx.cr6.eq) goto loc_899CC59C;
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
loc_899CC59C:
	// bl 0x899cc438
	ctx.lr = 0x899CC5A0;
	sub_899CC438(ctx, base);
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

DEFINE_REX_FUNC(sub_899CCEA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba10
	ctx.lr = 0x899CCEA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r30,r8,2
	ctx.r30.s64 = ctx.r8.s64 + 2;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// bgt cr6,0x899ccedc
	if (ctx.cr6.gt) goto loc_899CCEDC;
	// bl 0x8991a5a0
	ctx.lr = 0x899CCED4;
	sub_8991A5A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899ccee8
	if (!ctx.cr6.eq) goto loc_899CCEE8;
loc_899CCEDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
loc_899CCEE8:
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 7, ctx.xer);
	// ble cr6,0x899ccf18
	if (!ctx.cr6.gt) goto loc_899CCF18;
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
	// rlwinm r28,r6,20,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0x7;
loc_899CCF18:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// extsh r27,r31
	ctx.r27.s64 = ctx.r31.s16;
	// addi r8,r11,-8688
	ctx.r8.s64 = ctx.r11.s64 + -8688;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r30,-2
	ctx.r31.s64 = ctx.r30.s64 + -2;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
loc_899CCF30:
	// lhzu r11,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// clrlwi r6,r11,23
	ctx.r6.u64 = ctx.r11.u32 & 0x1FF;
	// bl 0x899ccb88
	ctx.lr = 0x899CCF4C;
	sub_899CCB88(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899ccf30
	if (!ctx.cr6.eq) goto loc_899CCF30;
	// li r3,71
	ctx.r3.s64 = 71;
	// bl 0x89936360
	ctx.lr = 0x899CCF6C;
	sub_89936360(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba60
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CDA68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba00
	ctx.lr = 0x899CDA70;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r31,0(r8)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// addi r22,r8,2
	ctx.r22.s64 = ctx.r8.s64 + 2;
	// bl 0x899d8118
	ctx.lr = 0x899CDA98;
	sub_899D8118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899cdaac
	if (!ctx.cr6.eq) goto loc_899CDAAC;
loc_899CDAA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
loc_899CDAAC:
	// extsh r28,r31
	ctx.r28.s64 = ctx.r31.s16;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// bgt cr6,0x899cdaa0
	if (ctx.cr6.gt) goto loc_899CDAA0;
	// bl 0x8991a5a0
	ctx.lr = 0x899CDAC4;
	sub_8991A5A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x899cdaa0
	if (ctx.cr6.eq) goto loc_899CDAA0;
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// blt cr6,0x899cdafc
	if (ctx.cr6.lt) goto loc_899CDAFC;
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
	// rlwinm r26,r6,20,29,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0x7;
loc_899CDAFC:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// addi r8,r11,-8688
	ctx.r8.s64 = ctx.r11.s64 + -8688;
	// addi r30,r10,7904
	ctx.r30.s64 = ctx.r10.s64 + 7904;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x899cdb60
	if (!ctx.cr6.gt) goto loc_899CDB60;
	// extsh r27,r29
	ctx.r27.s64 = ctx.r29.s16;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r22,-2
	ctx.r29.s64 = ctx.r22.s64 + -2;
loc_899CDB20:
	// lhzu r11,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x899cd5f8
	ctx.lr = 0x899CDB44;
	sub_899CD5F8(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x899cdb20
	if (ctx.cr6.lt) goto loc_899CDB20;
loc_899CDB60:
	// li r3,66
	ctx.r3.s64 = 66;
	// bl 0x89936360
	ctx.lr = 0x899CDB68;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba50
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899CEE70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899CEE78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x899cee98
	if (ctx.cr6.lt) goto loc_899CEE98;
	// bl 0x899cec08
	ctx.lr = 0x899CEE90;
	sub_899CEC08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899CEE98:
	// lis r10,-30242
	ctx.r10.s64 = -1981939712;
	// lbz r11,139(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 139);
	// lis r29,160
	ctx.r29.s64 = 10485760;
	// lis r27,120
	ctx.r27.s64 = 7864320;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// lwz r28,-21584(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + -21584);
	// beq cr6,0x899cefb0
	if (ctx.cr6.eq) goto loc_899CEFB0;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// subf. r11,r29,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,139(r31)
	REX_STORE_U8(ctx.r31.u32 + 139, ctx.r9.u8);
	// bge 0x899ceecc
	if (!ctx.cr0.lt) goto loc_899CEECC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CEECC:
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899cefe8
	if (ctx.cr6.gt) goto loc_899CEFE8;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r28.u64;
	// subf. r11,r27,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899ceeec
	if (!ctx.cr0.lt) goto loc_899CEEEC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CEEEC:
	// lis r10,112
	ctx.r10.s64 = 7340032;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899cefe8
	if (ctx.cr6.gt) goto loc_899CEFE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89932ba0
	ctx.lr = 0x899CEF00;
	sub_89932BA0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// lhz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 116);
	// mulli r11,r11,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r10,25128
	ctx.r10.s64 = ctx.r10.s64 + 25128;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r8,r10,608
	ctx.r8.s64 = ctx.r10.s64 + 608;
	// addi r7,r10,592
	ctx.r7.s64 = ctx.r10.s64 + 592;
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// bl 0x89932c20
	ctx.lr = 0x899CEF38;
	sub_89932C20(ctx, base);
	// subf r6,r3,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r3.u64;
	// clrlwi r11,r6,23
	ctx.r11.u64 = ctx.r6.u32 & 0x1FF;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x899cef54
	if (!ctx.cr6.lt) goto loc_899CEF54;
	// addi r10,r30,-3
	ctx.r10.s64 = ctx.r30.s64 + -3;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// sth r10,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r10.u16);
loc_899CEF54:
	// ble cr6,0x899cef64
	if (!ctx.cr6.gt) goto loc_899CEF64;
	// lhz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 116);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// sth r10,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r10.u16);
loc_899CEF64:
	// lhz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 116);
	// lis r9,-30320
	ctx.r9.s64 = -1987051520;
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r7,r9,9016
	ctx.r7.s64 = ctx.r9.s64 + 9016;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// rlwinm r4,r10,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// lhzx r3,r5,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stw r8,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// lhzx r7,r4,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// stw r4,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
loc_899CEFB0:
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf. r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bge 0x899cefcc
	if (!ctx.cr0.lt) goto loc_899CEFCC;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_899CEFCC:
	// lis r11,224
	ctx.r11.s64 = 14680064;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x899ceff8
	if (!ctx.cr6.gt) goto loc_899CEFF8;
loc_899CEFD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899CEFE8:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,139(r31)
	REX_STORE_U8(ctx.r31.u32 + 139, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
loc_899CEFF8:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r28.u64;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// subf. r11,r27,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899cf018
	if (!ctx.cr0.lt) goto loc_899CF018;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899CF018:
	// lis r10,184
	ctx.r10.s64 = 12058624;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899cefd8
	if (ctx.cr6.gt) goto loc_899CEFD8;
	// lhz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 116);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// clrlwi r6,r8,30
	ctx.r6.u64 = ctx.r8.u32 & 0x3;
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// clrlwi r11,r5,26
	ctx.r11.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r4,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D0C10) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d0c98
	if (ctx.cr6.eq) goto loc_899D0C98;
	// bdz 0x899d0c98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D0C98;
	// bdz 0x899d0c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D0C38;
	// bdz 0x899d0c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D0C38;
	// bdz 0x899d0c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_899D0C38;
loc_899D0C38:
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
loc_899D0C98:
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,138(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 138);
	// lwz r8,64(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// stb r8,138(r3)
	REX_STORE_U8(ctx.r3.u32 + 138, ctx.r8.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x899d0d24
	if (!ctx.cr6.eq) goto loc_899D0D24;
	// addis r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -10485760;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d0ce4
	if (!ctx.cr0.lt) goto loc_899D0CE4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D0CE4:
	// lis r10,168
	ctx.r10.s64 = 11010048;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x899d0d18
	if (ctx.cr6.gt) goto loc_899D0D18;
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
	// bge 0x899d0d0c
	if (!ctx.cr0.lt) goto loc_899D0D0C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D0D0C:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x899d0d24
	if (!ctx.cr6.gt) goto loc_899D0D24;
loc_899D0D18:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D0D24:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D1A38) {
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
	// blt cr6,0x899d1a98
	if (ctx.cr6.lt) goto loc_899D1A98;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x899d1a98
	if (ctx.cr6.gt) goto loc_899D1A98;
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
	// bge 0x899d1a80
	if (!ctx.cr0.lt) goto loc_899D1A80;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D1A80:
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
	// b 0x899d1a9c
	goto loc_899D1A9C;
loc_899D1A98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_899D1A9C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d1ac0
	if (!ctx.cr6.eq) goto loc_899D1AC0;
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
loc_899D1AC0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x899340e8
	ctx.lr = 0x899D1AC8;
	sub_899340E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899d1ae8
	if (!ctx.cr6.eq) goto loc_899D1AE8;
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
loc_899D1AE8:
	// extsh r3,r31
	ctx.r3.s64 = ctx.r31.s16;
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// bgt cr6,0x899d1b00
	if (ctx.cr6.gt) goto loc_899D1B00;
	// bl 0x8991a5a0
	ctx.lr = 0x899D1AF8;
	sub_8991A5A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899d1b18
	if (!ctx.cr6.eq) goto loc_899D1B18;
loc_899D1B00:
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
loc_899D1B18:
	// li r3,2
	ctx.r3.s64 = 2;
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

DEFINE_REX_FUNC(sub_899D2E10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba14
	ctx.lr = 0x899D2E18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x899d2e8c
	if (ctx.cr6.gt) goto loc_899D2E8C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x899d2e74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D2E74;
	// bdzf 4*cr6+eq,0x899d2e80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D2E80;
	// bdzf 4*cr6+eq,0x899d2e8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D2E8C;
	// bdzf 4*cr6+eq,0x899d2e54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D2E54;
	// bdzf 4*cr6+eq,0x899d2e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D2E5C;
	// bdzf 4*cr6+eq,0x899d2e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D2E68;
	// bdzf 4*cr6+eq,0x899d2e8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_899D2E8C;
	// bne cr6,0x899d2e54
	if (!ctx.cr6.eq) goto loc_899D2E54;
loc_899D2E54:
	// li r10,31
	ctx.r10.s64 = 31;
	// b 0x899d2e90
	goto loc_899D2E90;
loc_899D2E5C:
	// li r10,30
	ctx.r10.s64 = 30;
	// li r31,28
	ctx.r31.s64 = 28;
	// b 0x899d2e94
	goto loc_899D2E94;
loc_899D2E68:
	// li r10,31
	ctx.r10.s64 = 31;
	// li r31,28
	ctx.r31.s64 = 28;
	// b 0x899d2e94
	goto loc_899D2E94;
loc_899D2E74:
	// li r10,30
	ctx.r10.s64 = 30;
	// li r31,16
	ctx.r31.s64 = 16;
	// b 0x899d2e94
	goto loc_899D2E94;
loc_899D2E80:
	// li r10,31
	ctx.r10.s64 = 31;
	// li r31,16
	ctx.r31.s64 = 16;
	// b 0x899d2e94
	goto loc_899D2E94;
loc_899D2E8C:
	// li r10,30
	ctx.r10.s64 = 30;
loc_899D2E90:
	// li r31,36
	ctx.r31.s64 = 36;
loc_899D2E94:
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// rlwinm r30,r10,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r11,11976
	ctx.r10.s64 = ctx.r11.s64 + 11976;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lis r28,-30253
	ctx.r28.s64 = -1982660608;
	// lis r27,16838
	ctx.r27.s64 = 1103495168;
	// lwzx r29,r30,r29
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r29.u32);
	// ori r27,r27,20077
	ctx.r27.u64 = ctx.r27.u64 | 20077;
	// lwzx r30,r30,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lis r29,128
	ctx.r29.s64 = 8388608;
	// lwz r10,-9212(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + -9212);
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// ori r29,r29,32896
	ctx.r29.u64 = ctx.r29.u64 | 32896;
	// sth r9,54(r4)
	REX_STORE_U16(ctx.r4.u32 + 54, ctx.r9.u16);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// addi r10,r10,12345
	ctx.r10.s64 = ctx.r10.s64 + 12345;
	// stw r29,48(r4)
	REX_STORE_U32(ctx.r4.u32 + 48, ctx.r29.u32);
	// sth r8,52(r4)
	REX_STORE_U16(ctx.r4.u32 + 52, ctx.r8.u16);
	// rlwinm r6,r6,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r7,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r7.u32);
	// stw r30,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r30.u32);
	// lis r30,-30275
	ctx.r30.s64 = -1984102400;
	// srawi r29,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 16;
	// stw r6,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r6.u32);
	// stb r11,78(r4)
	REX_STORE_U8(ctx.r4.u32 + 78, ctx.r11.u8);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// rlwinm r8,r29,19,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 19) & 0x3;
	// stb r11,77(r4)
	REX_STORE_U8(ctx.r4.u32 + 77, ctx.r11.u8);
	// stb r11,76(r4)
	REX_STORE_U8(ctx.r4.u32 + 76, ctx.r11.u8);
	// mulli r9,r3,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(208));
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r10,-9212(r28)
	REX_STORE_U32(ctx.r28.u32 + -9212, ctx.r10.u32);
	// or r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 | ctx.r31.u64;
	// addi r10,r30,12800
	ctx.r10.s64 = ctx.r30.s64 + 12800;
	// stw r7,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// li r7,117
	ctx.r7.s64 = 117;
	// lwz r8,52(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// addi r6,r10,154
	ctx.r6.s64 = ctx.r10.s64 + 154;
	// stw r8,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r8.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,56(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// addi r10,r4,56
	ctx.r10.s64 = ctx.r4.s64 + 56;
	// stw r8,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r8.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r3,64(r4)
	REX_STORE_U32(ctx.r4.u32 + 64, ctx.r3.u32);
	// li r31,519
	ctx.r31.s64 = 519;
	// lhzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// li r3,68
	ctx.r3.s64 = 68;
	// sth r6,72(r4)
	REX_STORE_U16(ctx.r4.u32 + 72, ctx.r6.u16);
	// stw r5,68(r4)
	REX_STORE_U32(ctx.r4.u32 + 68, ctx.r5.u32);
	// lhz r5,134(r5)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + 134);
	// sth r5,74(r4)
	REX_STORE_U16(ctx.r4.u32 + 74, ctx.r5.u16);
	// stb r7,79(r4)
	REX_STORE_U8(ctx.r4.u32 + 79, ctx.r7.u8);
	// sth r31,44(r4)
	REX_STORE_U16(ctx.r4.u32 + 44, ctx.r31.u16);
	// stb r11,46(r4)
	REX_STORE_U8(ctx.r4.u32 + 46, ctx.r11.u8);
	// stb r8,48(r4)
	REX_STORE_U8(ctx.r4.u32 + 48, ctx.r8.u8);
	// stw r11,60(r4)
	REX_STORE_U32(ctx.r4.u32 + 60, ctx.r11.u32);
	// stw r11,56(r4)
	REX_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// stw r10,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// bl 0x89936360
	ctx.lr = 0x899D2FA8;
	sub_89936360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D3ED8) {
	REX_FUNC_PROLOGUE();
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r5,r7,20077
	ctx.r5.u64 = ctx.r7.u64 | 20077;
	// lis r6,-30305
	ctx.r6.s64 = -1986068480;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// addi r10,r6,8704
	ctx.r10.s64 = ctx.r6.s64 + 8704;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r4,r10,10
	ctx.r4.s64 = ctx.r10.s64 + 10;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,18,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFFFF;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r3,r9,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// b 0x89936360
	sub_89936360(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D42B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899D42B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30305
	ctx.r11.s64 = -1986068480;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r25,r11,8704
	ctx.r25.s64 = ctx.r11.s64 + 8704;
	// addis r11,r5,-160
	ctx.r11.s64 = ctx.r5.s64 + -10485760;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lhzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r25.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d42f4
	if (!ctx.cr0.lt) goto loc_899D42F4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D42F4:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r10,160
	ctx.r9.s64 = ctx.r10.s64 + 160;
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x899d433c
	if (!ctx.cr6.lt) goto loc_899D433C;
	// lis r11,-30242
	ctx.r11.s64 = -1981939712;
	// lwz r11,-21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21584);
	// subf r9,r11,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r11.u64;
	// addis r11,r9,-120
	ctx.r11.s64 = ctx.r9.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899d4328
	if (!ctx.cr0.lt) goto loc_899D4328;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_899D4328:
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// blt cr6,0x899d4340
	if (ctx.cr6.lt) goto loc_899D4340;
loc_899D433C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_899D4340:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d4434
	if (!ctx.cr6.eq) goto loc_899D4434;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89919d28
	ctx.lr = 0x899D4354;
	sub_89919D28(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d4434
	if (ctx.cr6.eq) goto loc_899D4434;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r8,-30253
	ctx.r8.s64 = -1982660608;
	// li r4,3
	ctx.r4.s64 = 3;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// rlwimi r29,r4,30,28,26
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0xFFFFFFFFFFFFFFEF) | (ctx.r29.u64 & 0x10);
	// lwz r10,7904(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 7904);
	// ori r5,r7,20077
	ctx.r5.u64 = ctx.r7.u64 | 20077;
	// lwz r11,-9212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -9212);
	// lis r6,-30295
	ctx.r6.s64 = -1985413120;
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r9,r6,11976
	ctx.r9.s64 = ctx.r6.s64 + 11976;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,-9212(r8)
	REX_STORE_U32(ctx.r8.u32 + -9212, ctx.r11.u32);
	// addi r6,r25,-372
	ctx.r6.s64 = ctx.r25.s64 + -372;
	// srawi r8,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 16;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// rlwinm r8,r8,2,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r9,r8,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// ori r8,r10,32896
	ctx.r8.u64 = ctx.r10.u64 | 32896;
	// stw r31,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r31.u32);
	// stw r9,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwzx r6,r11,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stw r6,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r6.u32);
	// lwzx r5,r11,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r5,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r5.u32);
	// stb r31,78(r7)
	REX_STORE_U8(ctx.r7.u32 + 78, ctx.r31.u8);
	// stb r31,77(r7)
	REX_STORE_U8(ctx.r7.u32 + 77, ctx.r31.u8);
	// stb r31,76(r7)
	REX_STORE_U8(ctx.r7.u32 + 76, ctx.r31.u8);
	// stw r31,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r31.u32);
	// stw r8,48(r7)
	REX_STORE_U32(ctx.r7.u32 + 48, ctx.r8.u32);
	// stw r28,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r28.u32);
	// stw r27,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r27.u32);
	// stw r31,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r31.u32);
	// stw r31,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r31.u32);
	// stb r24,80(r7)
	REX_STORE_U8(ctx.r7.u32 + 80, ctx.r24.u8);
	// stb r26,79(r7)
	REX_STORE_U8(ctx.r7.u32 + 79, ctx.r26.u8);
	// bl 0x899d3ed8
	ctx.lr = 0x899D4414;
	sub_899D3ED8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x899d4018
	ctx.lr = 0x899D4428;
	sub_899D4018(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899D4434:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D5650) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba08
	ctx.lr = 0x899D5658;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// bne cr6,0x899d5698
	if (!ctx.cr6.eq) goto loc_899D5698;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8991a248
	ctx.lr = 0x899D568C;
	sub_8991A248(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d56b8
	if (!ctx.cr6.eq) goto loc_899D56B8;
loc_899D5698:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89919d28
	ctx.lr = 0x899D56A0;
	sub_89919D28(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d56b8
	if (!ctx.cr6.eq) goto loc_899D56B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899D56B8:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lis r10,-30295
	ctx.r10.s64 = -1985413120;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r10,11976
	ctx.r8.s64 = ctx.r10.s64 + 11976;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,7904(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7904);
	// rlwimi r30,r9,30,28,26
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xFFFFFFFFFFFFFFEF) | (ctx.r30.u64 & 0x10);
	// li r7,18
	ctx.r7.s64 = 18;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// li r10,192
	ctx.r10.s64 = 192;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// ori r4,r5,32896
	ctx.r4.u64 = ctx.r5.u64 | 32896;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// li r9,512
	ctx.r9.s64 = 512;
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r11,584(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 584);
	// stw r11,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// lwz r11,580(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 580);
	// stw r31,44(r6)
	REX_STORE_U32(ctx.r6.u32 + 44, ctx.r31.u32);
	// stb r31,78(r6)
	REX_STORE_U8(ctx.r6.u32 + 78, ctx.r31.u8);
	// stb r31,77(r6)
	REX_STORE_U8(ctx.r6.u32 + 77, ctx.r31.u8);
	// stw r4,48(r6)
	REX_STORE_U32(ctx.r6.u32 + 48, ctx.r4.u32);
	// stw r11,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r27,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r27.u32);
	// stw r26,32(r6)
	REX_STORE_U32(ctx.r6.u32 + 32, ctx.r26.u32);
	// stw r25,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r25.u32);
	// stw r24,40(r6)
	REX_STORE_U32(ctx.r6.u32 + 40, ctx.r24.u32);
	// stb r31,76(r6)
	REX_STORE_U8(ctx.r6.u32 + 76, ctx.r31.u8);
	// stb r31,80(r6)
	REX_STORE_U8(ctx.r6.u32 + 80, ctx.r31.u8);
	// stb r29,79(r6)
	REX_STORE_U8(ctx.r6.u32 + 79, ctx.r29.u8);
	// sth r9,44(r6)
	REX_STORE_U16(ctx.r6.u32 + 44, ctx.r9.u16);
	// stb r10,46(r6)
	REX_STORE_U8(ctx.r6.u32 + 46, ctx.r10.u8);
	// stb r10,47(r6)
	REX_STORE_U8(ctx.r6.u32 + 47, ctx.r10.u8);
	// bl 0x89936360
	ctx.lr = 0x899D574C;
	sub_89936360(ctx, base);
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// lwz r11,3504(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 3504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899d5794
	if (ctx.cr6.eq) goto loc_899D5794;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// lwz r10,-9516(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -9516);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// ble cr6,0x899d5770
	if (!ctx.cr6.gt) goto loc_899D5770;
	// addi r31,r10,-16
	ctx.r31.s64 = ctx.r10.s64 + -16;
loc_899D5770:
	// lis r10,-30270
	ctx.r10.s64 = -1983774720;
	// stw r31,-9516(r11)
	REX_STORE_U32(ctx.r11.u32 + -9516, ctx.r31.u32);
	// lwz r10,8420(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8420);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x899d57ac
	if (!ctx.cr6.lt) goto loc_899D57AC;
	// stw r10,-9516(r11)
	REX_STORE_U32(ctx.r11.u32 + -9516, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
loc_899D5794:
	// lis r10,-30253
	ctx.r10.s64 = -1982660608;
	// lwz r11,-9516(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9516);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// ble cr6,0x899d57ac
	if (!ctx.cr6.gt) goto loc_899D57AC;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,-9516(r10)
	REX_STORE_U32(ctx.r10.u32 + -9516, ctx.r11.u32);
loc_899D57AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x899dba58
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D6388) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba0c
	ctx.lr = 0x899D6390;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-30253
	ctx.r29.s64 = -1982660608;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// ori r28,r11,20077
	ctx.r28.u64 = ctx.r11.u64 | 20077;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// lwz r11,-9212(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -9212);
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// addi r30,r11,12345
	ctx.r30.s64 = ctx.r11.s64 + 12345;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// stw r30,-9212(r29)
	REX_STORE_U32(ctx.r29.u32 + -9212, ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// clrlwi r5,r6,17
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFF;
	// cmpwi cr6,r8,116
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 116, ctx.xer);
	// mullw r4,r5,r10
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r4,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x899d643c
	if (ctx.cr6.eq) goto loc_899D643C;
	// bl 0x89919fa8
	ctx.lr = 0x899D63F8;
	sub_89919FA8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d6474
	if (!ctx.cr6.eq) goto loc_899D6474;
loc_899D6404:
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899d64c8
	if (ctx.cr6.eq) goto loc_899D64C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x89919fa8
	ctx.lr = 0x899D6420;
	sub_89919FA8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d6404
	if (ctx.cr6.eq) goto loc_899D6404;
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// addi r7,r11,7904
	ctx.r7.s64 = ctx.r11.s64 + 7904;
	// b 0x899d6488
	goto loc_899D6488;
loc_899D643C:
	// bl 0x8991a198
	ctx.lr = 0x899D6440;
	sub_8991A198(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x899d6474
	if (!ctx.cr6.eq) goto loc_899D6474;
loc_899D644C:
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x899d64c8
	if (ctx.cr6.eq) goto loc_899D64C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8991a198
	ctx.lr = 0x899D6468;
	sub_8991A198(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x899d644c
	if (ctx.cr6.eq) goto loc_899D644C;
loc_899D6474:
	// lis r11,-30253
	ctx.r11.s64 = -1982660608;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// addi r7,r11,7904
	ctx.r7.s64 = ctx.r11.s64 + 7904;
	// b 0x899d6488
	goto loc_899D6488;
loc_899D6484:
	// lwz r30,-9212(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + -9212);
loc_899D6488:
	// mullw r11,r30,r28
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,-9212(r29)
	REX_STORE_U32(ctx.r29.u32 + -9212, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r5,r10,23
	ctx.r5.u64 = ctx.r10.u32 & 0x1FF;
	// bl 0x899d6238
	ctx.lr = 0x899D64B0;
	sub_899D6238(ctx, base);
	// addi r8,r31,-1
	ctx.r8.s64 = ctx.r31.s64 + -1;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x899d6484
	if (!ctx.cr6.eq) goto loc_899D6484;
loc_899D64C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x899dba5c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D7348) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899D7350;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// li r31,8
	ctx.r31.s64 = 8;
	// addi r30,r11,8688
	ctx.r30.s64 = ctx.r11.s64 + 8688;
	// li r10,128
	ctx.r10.s64 = 128;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// addi r11,r30,1632
	ctx.r11.s64 = ctx.r30.s64 + 1632;
	// li r9,136
	ctx.r9.s64 = 136;
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899D7390;
	sub_89934FB8(ctx, base);
	// addi r11,r30,1632
	ctx.r11.s64 = ctx.r30.s64 + 1632;
	// li r10,64
	ctx.r10.s64 = 64;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// addi r7,r11,160
	ctx.r7.s64 = ctx.r11.s64 + 160;
	// li r9,80
	ctx.r9.s64 = 80;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x89934fb8
	ctx.lr = 0x899D73C4;
	sub_89934FB8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lis r10,-30294
	ctx.r10.s64 = -1985347584;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r11,3484
	ctx.r3.s64 = ctx.r11.s64 + 3484;
	// addi r31,r10,3720
	ctx.r31.s64 = ctx.r10.s64 + 3720;
loc_899D73DC:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,1632
	ctx.r10.s64 = ctx.r30.s64 + 1632;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_899D73F4:
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r9,r9,204
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(204));
	// lhzx r7,r11,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x899d7448
	if (!ctx.cr6.gt) goto loc_899D7448;
	// rlwinm r7,r7,16,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xC0000000;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_899D7424:
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
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x899d7424
	if (ctx.cr6.lt) goto loc_899D7424;
loc_899D7448:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x899d73f4
	if (ctx.cr6.lt) goto loc_899D73F4;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x899d73dc
	if (ctx.cr6.lt) goto loc_899D73DC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899D8020) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899d8094
	if (ctx.cr6.eq) goto loc_899D8094;
	// lbz r10,46(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bge cr6,0x899d8048
	if (!ctx.cr6.lt) goto loc_899D8048;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_899D8048:
	// lbz r11,47(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 47);
	// addi r5,r10,232
	ctx.r5.s64 = ctx.r10.s64 + 232;
	// lwz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r6,r11,7
	ctx.r6.s64 = ctx.r11.s64 + 7;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r5,46(r3)
	REX_STORE_U8(ctx.r3.u32 + 46, ctx.r5.u8);
	// stw r8,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// stw r7,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stb r6,47(r3)
	REX_STORE_U8(ctx.r3.u32 + 47, ctx.r6.u8);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_899D8094:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x899d80b4
	if (ctx.cr6.eq) goto loc_899D80B4;
	// lhz r11,134(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 134);
	// lhz r10,72(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 72);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_899D80B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_899D8A48) {
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
	// lis r11,-30220
	ctx.r11.s64 = -1980497920;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r31,r11,23256
	ctx.r31.s64 = ctx.r11.s64 + 23256;
	// sth r9,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,-320
	ctx.r7.s64 = ctx.r31.s64 + -320;
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-8
	ctx.r7.s64 = -8;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x89934fb8
	ctx.lr = 0x899D8A94;
	sub_89934FB8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r8,-30214
	ctx.r8.s64 = -1980104704;
	// addi r9,r31,-320
	ctx.r9.s64 = ctx.r31.s64 + -320;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r8,r8,3484
	ctx.r8.s64 = ctx.r8.s64 + 3484;
loc_899D8AAC:
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
	// cmpwi cr6,r6,32
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32, ctx.xer);
	// blt cr6,0x899d8aac
	if (ctx.cr6.lt) goto loc_899D8AAC;
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

DEFINE_REX_FUNC(sub_899D8FD0) {
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
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x899d9044
	if (ctx.cr6.eq) goto loc_899D9044;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899d9044
	if (ctx.cr6.eq) goto loc_899D9044;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// ori r8,r11,4096
	ctx.r8.u64 = ctx.r11.u64 | 4096;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x899d9044
	if (ctx.cr6.gt) goto loc_899D9044;
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r9,-30232
	ctx.r9.s64 = -1981284352;
	// lwz r3,3680(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 3680);
	// lwz r11,-26964(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -26964);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x899D9030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_899D9044:
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

DEFINE_REX_FUNC(sub_899D9448) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba1c
	ctx.lr = 0x899D9450;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-30214
	ctx.r29.s64 = -1980104704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,3668(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 3668);
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899D9474;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,3672(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 3672);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,720(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 720);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x899D9494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r30,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1FE;
	// lis r6,-30220
	ctx.r6.s64 = -1980497920;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r6,25704
	ctx.r11.s64 = ctx.r6.s64 + 25704;
	// lis r4,-30220
	ctx.r4.s64 = -1980497920;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r4,25576
	ctx.r8.s64 = ctx.r4.s64 + 25576;
	// rlwinm r7,r30,4,20,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r11,3668(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 3668);
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x899D94E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x899dba6c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DA228) {
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
	// lis r11,-30214
	ctx.r11.s64 = -1980104704;
	// lwz r3,3668(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 3668);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899da25c
	if (ctx.cr6.eq) goto loc_899DA25C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA254;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-30214
	ctx.r9.s64 = -1980104704;
	// stw r3,3620(r9)
	REX_STORE_U32(ctx.r9.u32 + 3620, ctx.r3.u32);
loc_899DA25C:
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

DEFINE_REX_FUNC(sub_899DA570) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899dba04
	ctx.lr = 0x899DA578;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-30232
	ctx.r24.s64 = -1981284352;
	// lis r11,-30216
	ctx.r11.s64 = -1980235776;
	// addi r9,r11,26368
	ctx.r9.s64 = ctx.r11.s64 + 26368;
	// lwz r11,18772(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 18772);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x899da5e0
	if (!ctx.cr6.eq) goto loc_899DA5E0;
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// lwz r10,18660(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18660);
	// lwz r9,18772(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 18772);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x899da794
	if (ctx.cr6.eq) goto loc_899DA794;
	// lwz r11,18772(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 18772);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r7,18772(r24)
	REX_STORE_U32(ctx.r24.u32 + 18772, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899DA5E0:
	// lis r25,-30214
	ctx.r25.s64 = -1980104704;
	// lwz r27,24(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r30,28(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// sth r23,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r23.u16);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,3680(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 3680);
	// lwz r11,-26964(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -26964);
	// addi r5,r11,4264
	ctx.r5.s64 = ctx.r11.s64 + 4264;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x899DA61C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x899da630
	if (ctx.cr6.eq) goto loc_899DA630;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r30,r11,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_899DA630:
	// lis r29,-30214
	ctx.r29.s64 = -1980104704;
	// lwz r3,3668(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 3668);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,376(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA648;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899da658
	if (!ctx.cr6.eq) goto loc_899DA658;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r30,r11,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_899DA658:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x899da744
	if (ctx.cr6.eq) goto loc_899DA744;
	// lis r11,-30232
	ctx.r11.s64 = -1981284352;
	// addi r26,r11,18660
	ctx.r26.s64 = ctx.r11.s64 + 18660;
loc_899DA66C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x899da744
	if (!ctx.cr6.gt) goto loc_899DA744;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899da6b4
	if (!ctx.cr6.eq) goto loc_899DA6B4;
	// lwz r3,3668(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 3668);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,340(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x899da6b4
	if (!ctx.cr6.eq) goto loc_899DA6B4;
	// lwz r3,3668(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 3668);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,376(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA6B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899DA6B4:
	// lwz r11,3668(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 3668);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r30,328(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 328);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,1276(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1276);
	// lwz r7,1280(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1280);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r11,1272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1272);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt cr6,0x899da6f4
	if (ctx.cr6.lt) goto loc_899DA6F4;
	// subf r30,r11,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_899DA6F4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf. r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x899da704
	if (!ctx.cr0.lt) goto loc_899DA704;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_899DA704:
	// lwz r3,3680(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 3680);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA720;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r27,r30,r27
	ctx.r27.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// subf r7,r30,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r30.u64;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r7,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// bne 0x899da66c
	if (!ctx.cr0.eq) goto loc_899DA66C;
loc_899DA744:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x899da75c
	if (!ctx.cr6.gt) goto loc_899DA75C;
	// stw r27,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
loc_899DA75C:
	// lwz r11,18772(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 18772);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r23,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stw r6,18772(r24)
	REX_STORE_U32(ctx.r24.u32 + 18772, ctx.r6.u32);
	// beq cr6,0x899da794
	if (ctx.cr6.eq) goto loc_899DA794;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x899DA794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_899DA794:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x899dba54
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899DAB3C) {
	REX_FUNC_PROLOGUE();
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x899dba64
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savegprlr_31) {
	REX_FUNC_PROLOGUE();
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_15) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_899DBA84) {
	REX_FUNC_PROLOGUE();
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r12,r5
	ctx.r12.u64 = ctx.r5.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_899DBAF0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x899dbb10
	if (ctx.cr6.eq) goto loc_899DBB10;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x899dbb28
	if (!ctx.cr6.eq) goto loc_899DBB28;
loc_899DBB10:
	// bl 0x899dcab8
	ctx.lr = 0x899DBB14;
	sub_899DCAB8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x899dc948
	ctx.lr = 0x899DBB20;
	sub_899DC948(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x899dbb90
	goto loc_899DBB90;
loc_899DBB28:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x899dbb50
	if (!ctx.cr6.eq) goto loc_899DBB50;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x899dcab8
	ctx.lr = 0x899DBB3C;
	sub_899DCAB8(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_899DBB40:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x899dc948
	ctx.lr = 0x899DBB48;
	sub_899DC948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x899dbb90
	goto loc_899DBB90;
loc_899DBB50:
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
loc_899DBB54:
	// lbz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x899dbb70
	if (ctx.cr0.eq) goto loc_899DBB70;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x899dbb54
	if (!ctx.cr0.eq) goto loc_899DBB54;
loc_899DBB70:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x899dbb8c
	if (!ctx.cr6.eq) goto loc_899DBB8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x899dcab8
	ctx.lr = 0x899DBB84;
	sub_899DCAB8(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x899dbb40
	goto loc_899DBB40;
loc_899DBB8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_899DBB90:
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

DEFINE_REX_FUNC(sub_899DC708) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r12,16808(r30)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r30.u32 + 16808);
	// lbz r12,10432(r16)
	ctx.r12.u64 = REX_LOAD_U8(ctx.r16.u32 + 10432);
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

DEFINE_REX_FUNC(sub_899DC850) {
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
	// rlwinm r31,r3,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,152
	ctx.r30.s64 = ctx.r11.s64 + 152;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899dc890
	if (!ctx.cr6.eq) goto loc_899DC890;
	// bl 0x899dc710
	ctx.lr = 0x899DC880;
	sub_899DC710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x899dc890
	if (!ctx.cr0.eq) goto loc_899DC890;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x899db798
	ctx.lr = 0x899DC890;
	sub_899DB798(ctx, base);
loc_899DC890:
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x899e4228
	ctx.lr = 0x899DC898;
	__imp__RtlEnterCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_899DCF58) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30320
	ctx.r11.s64 = -1987051520;
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// lwz r11,1068(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1068);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899dcfb0
	if (ctx.cr6.eq) goto loc_899DCFB0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// ori r4,r4,1025
	ctx.r4.u64 = ctx.r4.u64 | 1025;
	// bl 0x899e4248
	ctx.lr = 0x899DCF94;
	__imp__RtlImageXexHeaderField(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x899dcfb0
	if (ctx.cr0.eq) goto loc_899DCFB0;
	// lwz r30,0(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x899dcfb0
	if (!ctx.cr6.eq) goto loc_899DCFB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x899dd014
	goto loc_899DD014;
loc_899DCFB0:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_899DCFC0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x899dcfc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899DCFC0;
	// lis r31,-30212
	ctx.r31.s64 = -1979973632;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,3820(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899dd000
	if (!ctx.cr6.eq) goto loc_899DD000;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x899dea30
	ctx.lr = 0x899DCFFC;
	sub_899DEA30(ctx, base);
	// stw r3,3820(r31)
	REX_STORE_U32(ctx.r31.u32 + 3820, ctx.r3.u32);
loc_899DD000:
	// bl 0x899e0748
	ctx.lr = 0x899DD004;
	sub_899E0748(ctx, base);
	// lwz r11,3820(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3820);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_899DD014:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_899DE6C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x899db9f4
	ctx.lr = 0x899DE6D0;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1412);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x899dea10
	if (!ctx.cr6.eq) goto loc_899DEA10;
	// addis r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 65536;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r25,r11,r3
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x899de73c
	if (!ctx.cr6.eq) goto loc_899DE73C;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// li r26,4097
	ctx.r26.s64 = 4097;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x899de758
	goto loc_899DE758;
loc_899DE73C:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x899de758
	if (ctx.cr0.eq) goto loc_899DE758;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x899de758
	if (!ctx.cr6.eq) goto loc_899DE758;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r23,r11,r31
	ctx.r23.u64 = ctx.r31.u64 - ctx.r11.u64;
loc_899DE758:
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r10,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x899de78c
	if (!ctx.cr6.eq) goto loc_899DE78C;
	// li r27,4097
	ctx.r27.s64 = 4097;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// b 0x899de7a4
	goto loc_899DE7A4;
loc_899DE78C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x899de7a4
	if (!ctx.cr6.eq) goto loc_899DE7A4;
	// lbz r8,5(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r8,r8,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x899de7a4
	if (!ctx.cr0.eq) goto loc_899DE7A4;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
loc_899DE7A4:
	// rlwinm r22,r27,4,12,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFF0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r21,r27,16
	ctx.r21.u64 = ctx.r27.u32 & 0xFFFF;
	// subf r28,r22,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r22.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// bgt cr6,0x899de7c0
	if (ctx.cr6.gt) goto loc_899DE7C0;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_899DE7C0:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x899dea10
	if (ctx.cr6.eq) goto loc_899DEA10;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x899dd0c0
	ctx.lr = 0x899DE7D4;
	sub_899DD0C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x899dea10
	if (ctx.cr0.eq) goto loc_899DEA10;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r6,1424(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 1424);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x899e4288
	ctx.lr = 0x899DE7F0;
	__imp__NtFreeVirtualMemory(ctx, base);
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 24);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 24);
	// stw r30,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// stw r19,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r19.u32);
	// stw r19,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r19.u32);
	// blt 0x899dea10
	if (ctx.cr0.lt) goto loc_899DEA10;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x899dd298
	ctx.lr = 0x899DE824;
	sub_899DD298(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,48(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 48);
	// clrlwi. r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,48(r25)
	REX_STORE_U32(ctx.r25.u32 + 48, ctx.r10.u32);
	// beq 0x899de8f8
	if (ctx.cr0.eq) goto loc_899DE8F8;
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r26,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r26.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// stb r10,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r10.u32);
	// stw r31,64(r25)
	REX_STORE_U32(ctx.r25.u32 + 64, ctx.r31.u32);
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r10,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// bge cr6,0x899de8b4
	if (!ctx.cr6.lt) goto loc_899DE8B4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899de8dc
	if (!ctx.cr6.eq) goto loc_899DE8DC;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// b 0x899de8dc
	goto loc_899DE8DC;
loc_899DE8B4:
	// lwz r10,384(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 384);
	// addi r9,r29,384
	ctx.r9.s64 = ctx.r29.s64 + 384;
	// b 0x899de8d0
	goto loc_899DE8D0;
loc_899DE8C0:
	// lhz r7,-8(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x899de8d8
	if (!ctx.cr6.gt) goto loc_899DE8D8;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_899DE8D0:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x899de8c0
	if (!ctx.cr6.eq) goto loc_899DE8C0;
loc_899DE8D8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_899DE8DC:
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
	// b 0x899de93c
	goto loc_899DE93C;
loc_899DE8F8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x899de914
	if (ctx.cr6.eq) goto loc_899DE914;
	// lbz r11,5(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r23)
	REX_STORE_U8(ctx.r23.u32 + 5, ctx.r11.u8);
	// stw r23,64(r25)
	REX_STORE_U32(ctx.r25.u32 + 64, ctx.r23.u32);
	// b 0x899de93c
	goto loc_899DE93C;
loc_899DE914:
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x899de93c
	if (ctx.cr6.lt) goto loc_899DE93C;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x899de93c
	if (!ctx.cr6.lt) goto loc_899DE93C;
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// stw r11,64(r25)
	REX_STORE_U32(ctx.r25.u32 + 64, ctx.r11.u32);
loc_899DE93C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x899dea00
	if (ctx.cr6.eq) goto loc_899DEA00;
	// add r11,r22,r28
	ctx.r11.u64 = ctx.r22.u64 + ctx.r28.u64;
	// sth r19,2(r28)
	REX_STORE_U16(ctx.r28.u32 + 2, ctx.r19.u16);
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r21,128
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 128, ctx.xer);
	// stb r19,5(r28)
	REX_STORE_U8(ctx.r28.u32 + 5, ctx.r19.u8);
	// stb r10,4(r28)
	REX_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// sth r27,0(r28)
	REX_STORE_U16(ctx.r28.u32 + 0, ctx.r27.u16);
	// sth r27,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// lbz r11,5(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r28)
	REX_STORE_U8(ctx.r28.u32 + 5, ctx.r11.u8);
	// bge cr6,0x899de9b4
	if (!ctx.cr6.lt) goto loc_899DE9B4;
	// addi r11,r21,48
	ctx.r11.s64 = ctx.r21.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899de9d8
	if (!ctx.cr6.eq) goto loc_899DE9D8;
	// lhz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// b 0x899de9d8
	goto loc_899DE9D8;
loc_899DE9B4:
	// lwz r11,384(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 384);
	// addi r10,r29,384
	ctx.r10.s64 = ctx.r29.s64 + 384;
	// b 0x899de9d0
	goto loc_899DE9D0;
loc_899DE9C0:
	// lhz r9,-8(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r21,r9
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x899de9d8
	if (!ctx.cr6.gt) goto loc_899DE9D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_899DE9D0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x899de9c0
	if (!ctx.cr6.eq) goto loc_899DE9C0;
loc_899DE9D8:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 8;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r9,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// stw r11,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// b 0x899dea20
	goto loc_899DEA20;
loc_899DEA00:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x899dea20
	if (ctx.cr6.eq) goto loc_899DEA20;
	// sth r19,2(r20)
	REX_STORE_U16(ctx.r20.u32 + 2, ctx.r19.u16);
	// b 0x899dea20
	goto loc_899DEA20;
loc_899DEA10:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x899ddaa8
	ctx.lr = 0x899DEA20;
	sub_899DDAA8(ctx, base);
loc_899DEA20:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x899dba44
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E1618) {
	REX_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x899e1664
	if (ctx.cr6.eq) goto loc_899E1664;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x899e1664
	if (ctx.cr6.eq) goto loc_899E1664;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x899e1644
	if (!ctx.cr6.eq) goto loc_899E1644;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x899e13c8
	sub_899E13C8(ctx, base);
	return;
loc_899E1644:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x899e165c
	if (ctx.cr6.eq) goto loc_899E165C;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x899e165c
	if (ctx.cr6.eq) goto loc_899E165C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x899e1498
	sub_899E1498(ctx, base);
	return;
loc_899E165C:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x899e0e00
	sub_899E0E00(ctx, base);
	return;
loc_899E1664:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x899e0d10
	sub_899E0D10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_899E1850) {
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
	// lwz r9,12(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x899e1884
	if (!ctx.cr6.eq) goto loc_899E1884;
	// bl 0x899dcab8
	ctx.lr = 0x899E1870;
	sub_899DCAB8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x899dc948
	ctx.lr = 0x899E187C;
	sub_899DC948(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x899e199c
	goto loc_899E199C;
loc_899E1884:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x899e18a4
	if (!ctx.cr6.eq) goto loc_899E18A4;
	// bl 0x899dcab8
	ctx.lr = 0x899E1890;
	sub_899DCAB8(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_899E1894:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x899dc948
	ctx.lr = 0x899E189C;
	sub_899DC948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x899e199c
	goto loc_899E199C;
loc_899E18A4:
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r5.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// li r8,0
	ctx.r8.s64 = 0;
	// addme r11,r11
	temp.u8 = (ctx.r11.u32 + 0xFFFFFFFFu < ctx.r11.u32) | (ctx.r11.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// stb r8,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x899e18d4
	if (ctx.cr6.gt) goto loc_899E18D4;
	// bl 0x899dcab8
	ctx.lr = 0x899E18CC;
	sub_899DCAB8(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x899e1894
	goto loc_899E1894;
loc_899E18D4:
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ble cr6,0x899e1918
	if (!ctx.cr6.gt) goto loc_899E1918;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_899E18F4:
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x899e1908
	if (ctx.cr0.eq) goto loc_899E1908;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x899e190c
	goto loc_899E190C;
loc_899E1908:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_899E190C:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x899e18f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_899E18F4;
loc_899E1918:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// blt cr6,0x899e1954
	if (ctx.cr6.lt) goto loc_899E1954;
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,53
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 53, ctx.xer);
	// blt cr6,0x899e1954
	if (ctx.cr6.lt) goto loc_899E1954;
	// b 0x899e193c
	goto loc_899E193C;
loc_899E1938:
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
loc_899E193C:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,57
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57, ctx.xer);
	// beq cr6,0x899e1938
	if (ctx.cr6.eq) goto loc_899E1938;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_899E1954:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bne cr6,0x899e1970
	if (!ctx.cr6.eq) goto loc_899E1970;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// b 0x899e1998
	goto loc_899E1998;
loc_899E1970:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_899E1974:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x899e1974
	if (!ctx.cr6.eq) goto loc_899E1974;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x899daf50
	ctx.lr = 0x899E1998;
	sub_899DAF50(ctx, base);
loc_899E1998:
	// li r3,0
	ctx.r3.s64 = 0;
loc_899E199C:
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

